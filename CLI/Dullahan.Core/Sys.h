/*
  Dullahan project - a managed code assembly wrapper around PhantomJS 

  Copyright (C) 2014 Lee Sanderson <lee.sanderson@kaonix.com>

  This file was originally part of the PhantomJS project from Ofi Labs.

  Copyright (C) 2012 execjosh, http://execjosh.blogspot.com
  Copyright (C) 2012 James M. Greene <james.m.greene@gmail.com>

  Changes: 
    Renamed System to Sys as System is a reserved word.
*/

#ifndef SYS_H
#define SYS_H

#include <QObject.h>
#include <QStringList.h>
#include <QMap.h>
#include <QVariant.h>

#include "fileSystem.h"

// This class implements the CommonJS System/1.0 spec.
// See: http://wiki.commonjs.org/wiki/Sys/1.0
class Sys : public QObject
{
    Q_OBJECT
    Q_PROPERTY(qint64 pid READ pid)
    Q_PROPERTY(QStringList args READ args)
    Q_PROPERTY(QVariant env READ env)
    Q_PROPERTY(QVariant os READ os)
    Q_PROPERTY(bool isSSLSupported READ isSSLSupported)
    Q_PROPERTY(QObject *stdout READ _stdout)
    Q_PROPERTY(QObject *stderr READ _stderr)
    Q_PROPERTY(QObject *stdin READ _stdin)

public:
    explicit Sys(QObject *parent = 0);
    virtual ~Sys();

    qint64 pid() const;

    void setArgs(const QStringList& args);
    QStringList args() const;

    QVariant env() const;

    QVariant os() const;

    bool isSSLSupported() const;

    // Sys.stdout
    QObject *_stdout();

    // Sys.stderr
    QObject *_stderr();

    // Sys.stdin
    QObject *_stdin();

private:
    File *createFileInstance(QFile *f);

    QStringList m_args;
    QVariant m_env;
    QMap<QString, QVariant> m_os;
    File *m_stdout;
    File *m_stderr;
    File *m_stdin;
};

#endif // Sys_H
