/****************************************************************************
** Meta object code from reading C++ file 'CookieJar.h'
**
** Created: Wed 27. Aug 08:12:08 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CookieJar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CookieJar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CookieJar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   10,   11,   10, 0x08,
      38,   10,   11,   10, 0x08,
      60,   10,   10,   10, 0x08,
      67,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CookieJar[] = {
    "CookieJar\0\0bool\0purgeExpiredCookies()\0"
    "purgeSessionCookies()\0save()\0load()\0"
};

void CookieJar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CookieJar *_t = static_cast<CookieJar *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->purgeExpiredCookies();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->purgeSessionCookies();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->save(); break;
        case 3: _t->load(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CookieJar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CookieJar::staticMetaObject = {
    { &QNetworkCookieJar::staticMetaObject, qt_meta_stringdata_CookieJar,
      qt_meta_data_CookieJar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CookieJar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CookieJar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CookieJar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CookieJar))
        return static_cast<void*>(const_cast< CookieJar*>(this));
    return QNetworkCookieJar::qt_metacast(_clname);
}

int CookieJar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkCookieJar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
