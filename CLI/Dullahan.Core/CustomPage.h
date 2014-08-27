#ifndef CUSTOMPAGE_H
#define CUSTOMPAGE_H

#include <QApplication.h>
#include <QNetworkRequest.h>
#include <QWebPage.h>
#include <QWebFrame.h>

#include "WebPage.h"

/**
  * @class CustomPage
  */
class CustomPage: public QWebPage
{
    Q_OBJECT

public:
    CustomPage(WebPage *parent = 0)
        : QWebPage(parent)
        , m_webPage(parent)
    {
        m_userAgent = QWebPage::userAgentForUrl(QUrl());
        setForwardUnsupportedContent(true);
    }

    bool extension(Extension extension, const ExtensionOption* option, ExtensionReturn* output) {
        Q_UNUSED(option);

        if (extension == ChooseMultipleFilesExtension) {
            static_cast<ChooseMultipleFilesExtensionReturn*>(output)->fileNames = m_uploadFiles;
            return true;
        } else {
            return false;
        }
    }

public slots:
    bool shouldInterruptJavaScript() {
        QApplication::processEvents(QEventLoop::AllEvents, 42);
        return false;
    }

protected:
    bool supportsExtension(Extension extension) const {
        return extension == ChooseMultipleFilesExtension;
    }

    QString chooseFile(QWebFrame *originatingFrame, const QString &oldFile) {
        Q_UNUSED(originatingFrame);

        // Check if User set a file via File Picker
        QString chosenFile = m_webPage->filePicker(oldFile);
        if (chosenFile == QString::null && m_uploadFiles.count() > 0) {
            // Check if instead User set a file via uploadFile API
            chosenFile = m_uploadFiles.first();
        }

        // Return the value coming from the "filePicker" callback, IFF not null.
        qDebug() << "CustomPage - file chosen for upload:" << chosenFile;
        return chosenFile;
    }

    void javaScriptAlert(QWebFrame *originatingFrame, const QString &msg) {
        Q_UNUSED(originatingFrame);
        emit m_webPage->javaScriptAlertSent(msg);
    }

    bool javaScriptConfirm(QWebFrame *originatingFrame, const QString &msg) {
        Q_UNUSED(originatingFrame);
        return m_webPage->javaScriptConfirm(msg);
    }

    bool javaScriptPrompt(QWebFrame *originatingFrame, const QString &msg, const QString &defaultValue, QString *result) {
        Q_UNUSED(originatingFrame);
        return m_webPage->javaScriptPrompt(msg, defaultValue, result);
    }

    void javaScriptConsoleMessage(const QString &message, int lineNumber, const QString &sourceID) {
        Q_UNUSED(lineNumber);
        Q_UNUSED(sourceID);
        emit m_webPage->javaScriptConsoleMessageSent(message);
    }

    void javaScriptError(const QString &message, int lineNumber, const QString &sourceID, const QString &stack) {
        Q_UNUSED(lineNumber);
        Q_UNUSED(sourceID);
        emit m_webPage->javaScriptErrorSent(message, stack);
    }

    QString userAgentForUrl(const QUrl &url) const {
        Q_UNUSED(url);
        return m_userAgent;
    }

    bool acceptNavigationRequest(QWebFrame *frame, const QNetworkRequest &request, QWebPage::NavigationType type) {
        bool isMainFrame = (frame == m_webPage->m_mainFrame);

        QString navigationType = "Undefined";
        switch (type) {
        case NavigationTypeLinkClicked:
            navigationType = "LinkClicked";
            break;
        case NavigationTypeFormSubmitted:
            navigationType = "FormSubmitted";
            break;
        case NavigationTypeBackOrForward:
            navigationType = "BackOrForward";
            break;
        case NavigationTypeReload:
            navigationType = "Reload";
            break;
        case NavigationTypeFormResubmitted:
            navigationType = "FormResubmitted";
            break;
        case NavigationTypeOther:
            navigationType = "Other";
            break;
        }
        bool isNavigationLocked = m_webPage->navigationLocked();
        
        emit m_webPage->navigationRequested(
                    request.url(),                   //< Requested URL
                    navigationType,                  //< Navigation Type
                    !isNavigationLocked,             //< Will navigate (not locked)?
                    isMainFrame);                    //< Is main frame?

        return !isNavigationLocked;
    }

    QWebPage *createWindow (WebWindowType type) {
        Q_UNUSED(type);
        WebPage *newPage;

        // Create a new "raw" WebPage object
        //if (m_webPage->ownsPages()) {
		newPage = new WebPage(m_webPage, m_webPage->m_cookieJar, m_webPage->m_config);
		/*
        } else {
            newPage = new WebPage(Phantom::instance());
            Phantom::instance()->m_pages.append(newPage);
        }
		*/
        // Apply default settings
	    // LJS - applySettings call moved to WebPage constructor
        //newPage->applySettings(Phantom::instance()->defaultPageSettings());

        // Signal JS shim to catch, decorate and store this new child page
        emit m_webPage->rawPageCreated(newPage);

        // Return the new QWebPage to the QWebKit backend
        return newPage->m_customWebPage;
    }



private:
    WebPage *m_webPage;
    QString m_userAgent;
    QStringList m_uploadFiles;
    friend class WebPage;
};

#endif