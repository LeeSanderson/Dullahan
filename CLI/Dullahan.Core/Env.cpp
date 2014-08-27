/*
  Dullahan project - a managed code assembly wrapper around PhantomJS 

  Copyright (C) 2014 Lee Sanderson <lee.sanderson@kaonix.com>

  This file was originally part of the PhantomJS project from Ofi Labs.

  Copyright (C) 2012 execjosh, http://execjosh.blogspot.com

  Changes: 
	Added moc include (see bottom of file) to allow VS IDE build rather than using QMAKE.
*/
#include "env.h"

#include <QCoreApplication.h>
#include <QString.h>
#include <QVariant.h>

static Env *env_instance = NULL;

Env *Env::instance()
{
    if (NULL == env_instance)
        env_instance = new Env();

    return env_instance;
}

Env::Env()
    : QObject(QCoreApplication::instance())
{
}

// public:

void Env::parse(const char **envp)
{
    const char **env = (const char **)NULL;
    QString envvar, name, value;
    int indexOfEquals;
    // Loop for each of the <NAME>=<VALUE> pairs and split them into a map
    for (env = envp; *env != (const char *)NULL; env++) {
        envvar = QString(*env);
        indexOfEquals = envvar.indexOf('=');
        if (0 >= indexOfEquals) {
            // Should never happen because names cannot contain "=" and cannot
            // be empty. If it does happen, then just ignore this record.
            // See: http://pubs.opengroup.org/onlinepubs/009695399/basedefs/xbd_chap08.html
            continue;
        }
        // Extract name and value (if it exists) from envvar
        // NOTE:
        //  QString::mid() will gracefully return an empty QString when the
        //  specified position index is >= the length() of the string
        name = envvar.left(indexOfEquals);
        value = envvar.mid(indexOfEquals + 1);
        m_map.insert(name, value);
    }
}

QVariantMap Env::asVariantMap() const
{
    return m_map;
}

#include "gen\moc_Env.cpp"