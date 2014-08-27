/*
  Dullahan project - a managed code assembly wrapper around PhantomJS

  Copyright (C) 2014 Lee Sanderson <lee.sanderson@kaonix.com>

  This file was originally part of the PhantomJS project from Ofi Labs.

  Copyright (C) 2011 Ariya Hidayat <ariya.hidayat@gmail.com>
  Copyright (C) 2012 Ivan De Marino <ivan.de.marino@gmail.com>

  Changes: Removed static instance and made constructor public
*/

#ifndef COOKIEJAR_H
#define COOKIEJAR_H

#include <QSettings.h>
#include <QNetworkCookieJar.h>
#include <QVariant.h>

class CookieJar: public QNetworkCookieJar
{
    Q_OBJECT

//private:
public:
    CookieJar(QString cookiesFile, QObject *parent = NULL);

public:
    //static CookieJar *instance(QString cookiesFile = QString());
    virtual ~CookieJar();

    bool setCookiesFromUrl(const QList<QNetworkCookie> &cookieList, const QUrl & url);
    QList<QNetworkCookie> cookiesForUrl (const QUrl & url) const;

    bool addCookie(const QNetworkCookie &cookie, const QString &url = QString());
    bool addCookieFromMap(const QVariantMap &cookie, const QString &url = QString());
    bool addCookies(const QList<QNetworkCookie> &cookiesList, const QString &url = QString());
    bool addCookiesFromMap(const QVariantList &cookiesList, const QString &url = QString());

    QList<QNetworkCookie> cookies(const QString &url = QString()) const;
    QVariantList cookiesToMap(const QString &url = QString()) const;

    QNetworkCookie cookie(const QString &name, const QString &url = QString()) const;
    QVariantMap cookieToMap(const QString &name, const QString &url = QString()) const;

    bool deleteCookie(const QString &name, const QString &url = QString());
    bool deleteCookies(const QString &url = QString());
    void clearCookies();

    void enable();
    void disable();
    bool isEnabled() const;

private slots:
    bool purgeExpiredCookies();
    bool purgeSessionCookies();
    void save();
    void load();

private:
    bool contains(const QNetworkCookie &cookie) const;

private:
    QSettings *m_cookieStorage;
    bool m_enabled;
};

#endif // COOKIEJAR_H
