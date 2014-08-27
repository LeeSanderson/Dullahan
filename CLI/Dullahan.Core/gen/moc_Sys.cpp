/****************************************************************************
** Meta object code from reading C++ file 'Sys.h'
**
** Created: Wed 27. Aug 08:25:30 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Sys.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Sys.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Sys[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      11,    4, 0x04095001,
      27,   15, 0x0b095001,
      41,   32, 0xff095001,
      45,   32, 0xff095001,
      53,   48, 0x01095001,
      77,   68, 0x88095001,
      84,   68, 0x88095001,
      91,   68, 0x88095001,

       0        // eod
};

static const char qt_meta_stringdata_Sys[] = {
    "Sys\0qint64\0pid\0QStringList\0args\0"
    "QVariant\0env\0os\0bool\0isSSLSupported\0"
    "QObject*\0stdout\0stderr\0stdin\0"
};

void Sys::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Sys::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Sys::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Sys,
      qt_meta_data_Sys, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Sys::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Sys::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Sys::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Sys))
        return static_cast<void*>(const_cast< Sys*>(this));
    return QObject::qt_metacast(_clname);
}

int Sys::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint64*>(_v) = pid(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = args(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = env(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = os(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isSSLSupported(); break;
        case 5: *reinterpret_cast< QObject**>(_v) = _stdout(); break;
        case 6: *reinterpret_cast< QObject**>(_v) = _stderr(); break;
        case 7: *reinterpret_cast< QObject**>(_v) = _stdin(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
