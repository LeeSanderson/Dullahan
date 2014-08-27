/*
  Dullahan project - a managed code assembly wrapper around PhantomJS 

  Copyright (C) 2014 Lee Sanderson <lee.sanderson@kaonix.com>

  This file was originally part of the PhantomJS project from Ofi Labs.

  Copyright (C) 2012 execjosh, http://execjosh.blogspot.com

  Changes: None
*/

#ifndef ENV_H
#define ENV_H

#include <QObject.h>
#include <QVariant.h>

class Env : public QObject
{
    Q_OBJECT

public:
    static Env *instance();

    void parse(const char ** envp);
    QVariantMap asVariantMap() const;

private:
    Env();

    QVariantMap m_map;
};

#endif // ENV_H
