/****************************************************************************
** Meta object code from reading C++ file 'NetworkAccessManager.h'
**
** Created: Wed 27. Aug 08:25:30 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../NetworkAccessManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkAccessManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TimeoutTimer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_TimeoutTimer[] = {
    "TimeoutTimer\0"
};

void TimeoutTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TimeoutTimer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TimeoutTimer::staticMetaObject = {
    { &QTimer::staticMetaObject, qt_meta_stringdata_TimeoutTimer,
      qt_meta_data_TimeoutTimer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TimeoutTimer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TimeoutTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TimeoutTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeoutTimer))
        return static_cast<void*>(const_cast< TimeoutTimer*>(this));
    return QTimer::qt_metacast(_clname);
}

int TimeoutTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTimer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_JsNetworkRequest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x02,
      30,   26,   17,   17, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_JsNetworkRequest[] = {
    "JsNetworkRequest\0\0abort()\0url\0"
    "changeUrl(QString)\0"
};

void JsNetworkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JsNetworkRequest *_t = static_cast<JsNetworkRequest *>(_o);
        switch (_id) {
        case 0: _t->abort(); break;
        case 1: _t->changeUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData JsNetworkRequest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject JsNetworkRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JsNetworkRequest,
      qt_meta_data_JsNetworkRequest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JsNetworkRequest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JsNetworkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JsNetworkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JsNetworkRequest))
        return static_cast<void*>(const_cast< JsNetworkRequest*>(this));
    return QObject::qt_metacast(_clname);
}

int JsNetworkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_NetworkAccessManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   22,   21,   21, 0x05,
      70,   65,   21,   21, 0x05,
      97,   65,   21,   21, 0x05,
     121,   65,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     147,   21,   21,   21, 0x08,
     169,  163,   21,   21, 0x08,
     220,  200,   21,   21, 0x08,
     281,  274,   21,   21, 0x08,
     315,   21,   21,   21, 0x08,
     336,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NetworkAccessManager[] = {
    "NetworkAccessManager\0\0data,\0"
    "resourceRequested(QVariant,QObject*)\0"
    "data\0resourceReceived(QVariant)\0"
    "resourceError(QVariant)\0"
    "resourceTimeout(QVariant)\0handleStarted()\0"
    "reply\0handleFinished(QNetworkReply*)\0"
    "reply,authenticator\0"
    "provideAuthentication(QNetworkReply*,QAuthenticator*)\0"
    "errors\0handleSslErrors(QList<QSslError>)\0"
    "handleNetworkError()\0handleTimeout()\0"
};

void NetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetworkAccessManager *_t = static_cast<NetworkAccessManager *>(_o);
        switch (_id) {
        case 0: _t->resourceRequested((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 1: _t->resourceReceived((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->resourceError((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->resourceTimeout((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 4: _t->handleStarted(); break;
        case 5: _t->handleFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->provideAuthentication((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 7: _t->handleSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 8: _t->handleNetworkError(); break;
        case 9: _t->handleTimeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NetworkAccessManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NetworkAccessManager::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_NetworkAccessManager,
      qt_meta_data_NetworkAccessManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetworkAccessManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkAccessManager))
        return static_cast<void*>(const_cast< NetworkAccessManager*>(this));
    return QNetworkAccessManager::qt_metacast(_clname);
}

int NetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void NetworkAccessManager::resourceRequested(const QVariant & _t1, QObject * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetworkAccessManager::resourceReceived(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NetworkAccessManager::resourceError(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NetworkAccessManager::resourceTimeout(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
