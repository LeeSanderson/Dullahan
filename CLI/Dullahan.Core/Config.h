/*
  Dullahan project - a managed code assembly wrapper around PhantomJS

  Copyright (C) 2014 Lee Sanderson <lee.sanderson@kaonix.com>

  This file was originally part of the PhantomJS project from Ofi Labs.

  Copyright (C) 2011 Ariya Hidayat <ariya.hidayat@gmail.com>
  Copyright (C) 2011 execjosh, http://execjosh.blogspot.com

  Changes: 
    Removed QCommandLine (as we aren't a command line application any more)
	Removed init, processArgs, loadJsonFile, helpText methods that deal with setting up the config object via 
	the command line or via JSON.
	Removed handler slots used to bind qcommandline events

  TODO: Remove unused configuration options.
*/


#ifndef CONFIG_H
#define CONFIG_H

#include <QString.h>
#include <QStringList.h>
#include <QNetworkProxy.h>
#include <QVariant.h>

//class QCommandLine;

class Config: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString cookiesFile READ cookiesFile WRITE setCookiesFile)
    Q_PROPERTY(bool diskCacheEnabled READ diskCacheEnabled WRITE setDiskCacheEnabled)
    Q_PROPERTY(int maxDiskCacheSize READ maxDiskCacheSize WRITE setMaxDiskCacheSize)
    Q_PROPERTY(bool ignoreSslErrors READ ignoreSslErrors WRITE setIgnoreSslErrors)
    Q_PROPERTY(bool localToRemoteUrlAccessEnabled READ localToRemoteUrlAccessEnabled WRITE setLocalToRemoteUrlAccessEnabled)
    Q_PROPERTY(QString outputEncoding READ outputEncoding WRITE setOutputEncoding)
    Q_PROPERTY(QString proxyType READ proxyType WRITE setProxyType)
    Q_PROPERTY(QString proxy READ proxy WRITE setProxy)
    Q_PROPERTY(QString proxyAuth READ proxyAuth WRITE setProxyAuth)
    Q_PROPERTY(QString scriptEncoding READ scriptEncoding WRITE setScriptEncoding)
    Q_PROPERTY(bool webSecurityEnabled READ webSecurityEnabled WRITE setWebSecurityEnabled)
    Q_PROPERTY(QString offlineStoragePath READ offlineStoragePath WRITE setOfflineStoragePath)
    Q_PROPERTY(int offlineStorageDefaultQuota READ offlineStorageDefaultQuota WRITE setOfflineStorageDefaultQuota)
    Q_PROPERTY(bool printDebugMessages READ printDebugMessages WRITE setPrintDebugMessages)
    Q_PROPERTY(bool javascriptCanOpenWindows READ javascriptCanOpenWindows WRITE setJavascriptCanOpenWindows)
    Q_PROPERTY(bool javascriptCanCloseWindows READ javascriptCanCloseWindows WRITE setJavascriptCanCloseWindows)
    Q_PROPERTY(QString sslProtocol READ sslProtocol WRITE setSslProtocol)
    Q_PROPERTY(QString sslCertificatesPath READ sslCertificatesPath WRITE setSslCertificatesPath)
    Q_PROPERTY(QString webdriver READ webdriver WRITE setWebdriver)
    Q_PROPERTY(QString webdriverLogFile READ webdriverLogFile WRITE setWebdriverLogFile)
    Q_PROPERTY(QString webdriverLogLevel READ webdriverLogLevel WRITE setWebdriverLogLevel)
    Q_PROPERTY(QString webdriverSeleniumGridHub READ webdriverSeleniumGridHub WRITE setWebdriverSeleniumGridHub)

public:
    Config(QObject *parent = 0);

    //void init(const QStringList *const args);
    //void processArgs(const QStringList &args);
    //void loadJsonFile(const QString &filePath);

    //QString helpText() const;

    bool autoLoadImages() const;
    void setAutoLoadImages(const bool value);

    QString cookiesFile() const;
    void setCookiesFile(const QString &cookiesFile);

    QString offlineStoragePath() const;
    void setOfflineStoragePath(const QString &value);

    int offlineStorageDefaultQuota() const;
    void setOfflineStorageDefaultQuota(int offlineStorageDefaultQuota);

    bool diskCacheEnabled() const;
    void setDiskCacheEnabled(const bool value);

    int maxDiskCacheSize() const;
    void setMaxDiskCacheSize(int maxDiskCacheSize);

    bool ignoreSslErrors() const;
    void setIgnoreSslErrors(const bool value);

    bool localToRemoteUrlAccessEnabled() const;
    void setLocalToRemoteUrlAccessEnabled(const bool value);

    QString outputEncoding() const;
    void setOutputEncoding(const QString &value);

    QString proxyType() const;
    void setProxyType(const QString value);

    QString proxy() const;
    void setProxy(const QString &value);
    QString proxyHost() const;
    int proxyPort() const;

    QString proxyAuth() const;
    void setProxyAuth(const QString &value);
    QString proxyAuthUser() const;
    QString proxyAuthPass() const;
    void setProxyAuthUser(const QString &value);
    void setProxyAuthPass(const QString &value);

    QStringList scriptArgs() const;
    void setScriptArgs(const QStringList &value);

    QString scriptEncoding() const;
    void setScriptEncoding(const QString &value);

    QString scriptFile() const;
    void setScriptFile(const QString &value);

    QString unknownOption() const;
    void setUnknownOption(const QString &value);

    bool versionFlag() const;
    void setVersionFlag(const bool value);

    void setDebug(const bool value);
    bool debug() const;

    void setRemoteDebugPort(const int port);
    int remoteDebugPort() const;

    void setRemoteDebugAutorun(const bool value);
    bool remoteDebugAutorun() const;

    bool webSecurityEnabled() const;
    void setWebSecurityEnabled(const bool value);

    bool helpFlag() const;
    void setHelpFlag(const bool value);

    void setPrintDebugMessages(const bool value);
    bool printDebugMessages() const;

    void setJavascriptCanOpenWindows(const bool value);
    bool javascriptCanOpenWindows() const;

    void setJavascriptCanCloseWindows(const bool value);
    bool javascriptCanCloseWindows() const;

    void setSslProtocol(const QString& sslProtocolName);
    QString sslProtocol() const;

    void setSslCertificatesPath(const QString& sslCertificatesPath);
    QString sslCertificatesPath() const;

    void setWebdriver(const QString& webdriverConfig);
    QString webdriver() const;
    bool isWebdriverMode() const;

    void setWebdriverLogFile(const QString& webdriverLogFile);
    QString webdriverLogFile() const;

    void setWebdriverLogLevel(const QString& webdriverLogLevel);
    QString webdriverLogLevel() const;

    void setWebdriverSeleniumGridHub(const QString& hubUrl);
    QString webdriverSeleniumGridHub() const;

/*
public slots:
    void handleSwitch(const QString &sw);
    void handleOption(const QString &option, const QVariant &value);
    void handleParam(const QString& param, const QVariant &value);
    void handleError(const QString &error);
*/

private:
    void resetToDefaults();
    void setProxyHost(const QString &value);
    void setProxyPort(const int value);
    void setAuthUser(const QString &value);
    void setAuthPass(const QString &value);

    //QCommandLine *m_cmdLine;
    bool m_autoLoadImages;
    QString m_cookiesFile;
    QString m_offlineStoragePath;
    int m_offlineStorageDefaultQuota;
    bool m_diskCacheEnabled;
    int m_maxDiskCacheSize;
    bool m_ignoreSslErrors;
    bool m_localToRemoteUrlAccessEnabled;
    QString m_outputEncoding;
    QString m_proxyType;
    QString m_proxyHost;
    int m_proxyPort;
    QString m_proxyAuthUser;
    QString m_proxyAuthPass;
    QStringList m_scriptArgs;
    QString m_scriptEncoding;
    QString m_scriptFile;
    QString m_unknownOption;
    bool m_versionFlag;
    QString m_authUser;
    QString m_authPass;
    bool m_debug;
    int m_remoteDebugPort;
    bool m_remoteDebugAutorun;
    bool m_webSecurityEnabled;
    bool m_helpFlag;
    bool m_printDebugMessages;
    bool m_javascriptCanOpenWindows;
    bool m_javascriptCanCloseWindows;
    QString m_sslProtocol;
    QString m_sslCertificatesPath;
    QString m_webdriverIp;
    QString m_webdriverPort;
    QString m_webdriverLogFile;
    QString m_webdriverLogLevel;
    QString m_webdriverSeleniumGridHub;
};

#endif // CONFIG_H
