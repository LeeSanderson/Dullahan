#ifndef WEBPAGECALLBACKS_H
#define WEBPAGECALLBACKS_H


#include <QWebPage>
#include <QWebFrame>

#include "Callback.h"

/**
  * Contains the Callback Objects used to regulate callback-traffic from the webpage internal context.
  * It's directly exposed within the webpage JS context,
  * and indirectly in the phantom JS context.
  *
  * @class WebPageCallbacks
  */
class WebpageCallbacks : public QObject
{
    Q_OBJECT

public:
    WebpageCallbacks(QObject *parent = 0)
        : QObject(parent)
        , m_genericCallback(NULL)
        , m_filePickerCallback(NULL)
        , m_jsConfirmCallback(NULL)
        , m_jsPromptCallback(NULL)
    {
    }

    QObject *getGenericCallback() {
        qDebug() << "WebpageCallbacks - getGenericCallback";

        if (!m_genericCallback) {
            m_genericCallback = new Callback(this);
        }
        return m_genericCallback;
    }

    QObject *getFilePickerCallback() {
        qDebug() << "WebpageCallbacks - getFilePickerCallback";

        if (!m_filePickerCallback) {
            m_filePickerCallback = new Callback(this);
        }
        return m_filePickerCallback;
    }

    QObject *getJsConfirmCallback() {
        qDebug() << "WebpageCallbacks - getJsConfirmCallback";

        if (!m_jsConfirmCallback) {
            m_jsConfirmCallback = new Callback(this);
        }
        return m_jsConfirmCallback;
    }

    QObject *getJsPromptCallback() {
        qDebug() << "WebpageCallbacks - getJsConfirmCallback";

        if (!m_jsPromptCallback) {
            m_jsPromptCallback = new Callback(this);
        }
        return m_jsPromptCallback;
    }

public slots:
    QVariant call(const QVariantList &arguments) {
        if (m_genericCallback) {
            return m_genericCallback->call(arguments);
        }
        return QVariant();
    }

private:
    Callback *m_genericCallback;
    Callback *m_filePickerCallback;
    Callback *m_jsConfirmCallback;
    Callback *m_jsPromptCallback;

    friend class WebPage;
};

#endif