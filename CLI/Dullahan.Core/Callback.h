/*
  Dullahan project - a managed code assembly wrapper around PhantomJS

  Copyright (C) 2014 Lee Sanderson <lee.sanderson@kaonix.com>

  This file was originally part of the PhantomJS project from Ofi Labs.

  Copyright (C) 2012 Milian Wolff, KDAB <milian.wolff@kdab.com>

  Changes: None
*/

#ifndef CALLBACK_H
#define CALLBACK_H

#include <QObject.h>
#include <QVariant.h>

class Callback : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QVariant returnValue READ returnValue WRITE setReturnValue)

public:
    Callback(QObject *parent);

    QVariant call(const QVariantList& arguments);

    QVariant returnValue() const;
    void setReturnValue(const QVariant& returnValue);

signals:
    void called(const QVariantList& arguments);

private:
    QVariant m_returnValue;
};

#endif // CALLBACK_H
