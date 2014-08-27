/*
  Dullahan project - a managed code assembly wrapper around PhantomJS 

  Copyright (C) 2014 Lee Sanderson <lee.sanderson@kaonix.com>

  This file was originally part of the PhantomJS project from Ofi Labs.

  Copyright (C) 2012 execjosh, http://execjosh.blogspot.com
  Copyright (C) 2012 James M. Greene <james.m.greene@gmail.com>

  Changes: 
    Renamed System to Sys as System is a reserved word in CLR.
	Added moc include (see bottom of file) to allow VS IDE build rather than using QMAKE.
*/

#include "Sys.h"

#include <QApplication.h>
#include <QSslSocket.h>
#include <QGlobal.h>
#include <QVariant.h>
#include <QTextCodec.h>

#include "env.h"

Sys::Sys(QObject *parent) :
    QObject(parent)
  , m_stdout((File *)NULL)
  , m_stderr((File *)NULL)
  , m_stdin((File *)NULL)
{
    // Populate "env"
    m_env = Env::instance()->asVariantMap();

    // Populate "os"
    // "osarchitecture" word size
    m_os.insert("architecture", QString("%1bit").arg(QSysInfo::WordSize));

    // "os.name" and "os.version"
#if defined(Q_OS_WIN32)
    m_os.insert("name", "windows");
    switch (QSysInfo::WindowsVersion) {
    case QSysInfo::WV_32s:
        m_os.insert("version", "3.1");
        break;
    case QSysInfo::WV_95:
        m_os.insert("version", "95");
        break;
    case QSysInfo::WV_98:
        m_os.insert("version", "98");
        break;
    case QSysInfo::WV_Me:
        m_os.insert("version", "Me");
        break;
    case QSysInfo::WV_NT:
        m_os.insert("version", "NT");
        break;
    case QSysInfo::WV_2000:
        m_os.insert("version", "2000");
        break;
    case QSysInfo::WV_XP:
        m_os.insert("version", "XP");
        break;
    case QSysInfo::WV_2003:
        m_os.insert("version", "2003");
        break;
    case QSysInfo::WV_VISTA:
        m_os.insert("version", "Vista");
        break;
    case QSysInfo::WV_WINDOWS7:
        m_os.insert("version", "7");
        break;
    case QSysInfo::WV_WINDOWS8:
        m_os.insert("version", "8");
        break;
    default:
        m_os.insert("version", "unknown");
        break;
    }
#elif defined(Q_OS_MAC)
    m_os.insert("name", "mac");
    switch (QSysInfo::MacintoshVersion) {
    case QSysInfo::MV_10_3:
        m_os.insert("version", "10.3 (Panther)");
        break;
    case QSysInfo::MV_10_4:
        m_os.insert("version", "10.4 (Tiger)");
        break;
    case QSysInfo::MV_10_5:
        m_os.insert("version", "10.5 (Leopard)");
        break;
    case QSysInfo::MV_10_6:
        m_os.insert("version", "10.6 (Snow Leopard)");
        break;
    case QSysInfo::MV_10_7:
        m_os.insert("version", "10.7 (Lion)");
        break;
    case QSysInfo::MV_10_8:
        m_os.insert("version", "10.8 (Mountain Lion)");
        break;
    default:
        m_os.insert("version", "unknown");
        break;
    }
#elif defined(Q_OS_LINUX)
    m_os.insert("name", "linux");
    m_os.insert("version", "unknown");
#else
    m_os.insert("name", "unknown");
    m_os.insert("version", "unknown");
#endif
}

Sys::~Sys()
{
    // Clean-up standard streams
    if ((File *)NULL != m_stdout) {
        delete m_stdout;
        m_stdout = (File *)NULL;
    }
    if ((File *)NULL != m_stderr) {
        delete m_stderr;
        m_stderr = (File *)NULL;
    }
    if ((File *)NULL != m_stdin) {
        delete m_stdin;
        m_stdin = (File *)NULL;
    }
}

qint64 Sys::pid() const
{
    return QApplication::applicationPid();
}

void Sys::setArgs(const QStringList &args)
{
    m_args = args;
}

QStringList Sys::args() const
{
    return m_args;
}

QVariant Sys::env() const
{
    return m_env;
}

QVariant Sys::os() const
{
    return m_os;
}

bool Sys::isSSLSupported() const
{
    return QSslSocket::supportsSsl();
}

QObject *Sys::_stdout() {
    if ((File *)NULL == m_stdout) {
        QFile *f = new QFile();
        f->open(stdout, QIODevice::WriteOnly | QIODevice::Unbuffered);
        m_stdout = createFileInstance(f);
    }

    return m_stdout;
}

QObject *Sys::_stderr() {
    if ((File *)NULL == m_stderr) {
        QFile *f = new QFile();
        f->open(stderr, QIODevice::WriteOnly | QIODevice::Unbuffered);
        m_stderr = createFileInstance(f);
    }

    return m_stderr;
}

QObject *Sys::_stdin() {
    if ((File *)NULL == m_stdin) {
        QFile *f = new QFile();
        f->open(stdin, QIODevice::ReadOnly | QIODevice::Unbuffered);
        m_stdin = createFileInstance(f);
    }

    return m_stdin;
}

// private:

File *Sys::createFileInstance(QFile *f)
{
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    return new File(f, codec, this);
}

#include "gen\moc_Sys.cpp"