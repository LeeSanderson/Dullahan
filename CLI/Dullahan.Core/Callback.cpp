/*
  Dullahan project - a managed code assembly wrapper around PhantomJS

  Copyright (C) 2014 Lee Sanderson <lee.sanderson@kaonix.com>

  This file was originally part of the PhantomJS project from Ofi Labs.

  Copyright (C) 2012 Milian Wolff, KDAB <milian.wolff@kdab.com>

  Changes: 
	Added moc include (see bottom of file) to allow VS IDE build rather than using QMAKE.
*/

#include "callback.h"

#include <QDebug.h>

Callback::Callback(QObject* parent)
: QObject(parent)
{
}

QVariant Callback::call(const QVariantList& arguments)
{
    emit called(arguments);

    qDebug() << "Callback - call result:" << m_returnValue;
    return m_returnValue;
}

QVariant Callback::returnValue() const
{
    return m_returnValue;
}

void Callback::setReturnValue(const QVariant& returnValue)
{
    m_returnValue = returnValue;
}

#include "gen\moc_Callback.cpp"