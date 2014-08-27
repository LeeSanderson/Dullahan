/****************************************************************************
** Meta object code from reading C++ file 'FileSystem.h'
**
** Created: Wed 27. Aug 08:25:30 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FileSystem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileSystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_File[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   14,    6,    5, 0x0a,
      31,    5,    6,    5, 0x2a,
      48,   43,   38,    5, 0x0a,
      67,   63,   38,    5, 0x0a,
      80,    5,    6,    5, 0x0a,
      91,   43,   38,    5, 0x0a,
     110,    5,   38,    5, 0x0a,
     118,    5,    5,    5, 0x0a,
     126,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_File[] = {
    "File\0\0QString\0n\0read(QVariant)\0read()\0"
    "bool\0data\0write(QString)\0pos\0seek(qint64)\0"
    "readLine()\0writeLine(QString)\0atEnd()\0"
    "flush()\0close()\0"
};

void File::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        File *_t = static_cast<File *>(_o);
        switch (_id) {
        case 0: { QString _r = _t->read((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->read();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->write((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->seek((*reinterpret_cast< const qint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->readLine();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->writeLine((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->atEnd();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->flush(); break;
        case 8: _t->close(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData File::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject File::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_File,
      qt_meta_data_File, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &File::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *File::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *File::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_File))
        return static_cast<void*>(const_cast< File*>(this));
    return QObject::qt_metacast(_clname);
}

int File::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_FileSystem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       2,  144, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   16,   12,   11, 0x0a,
      45,   16,   36,   11, 0x0a,
      91,   72,   67,   11, 0x0a,
     118,   16,   67,   11, 0x0a,
     141,   16,   67,   11, 0x0a,
     159,   16,   67,   11, 0x0a,
     185,   16,   67,   11, 0x0a,
     225,  215,  206,   11, 0x0a,
     252,   16,   67,   11, 0x0a,
     269,   72,   67,   11, 0x0a,
     304,   16,  292,   11, 0x0a,
     326,   11,  318,   11, 0x0a,
     338,   11,  318,   11, 0x0a,
     357,   16,   67,   11, 0x0a,
     402,  389,  318,   11, 0x0a,
     420,   16,  318,   11, 0x0a,
     450,   16,  318,   11, 0x0a,
     478,   16,  318,   11, 0x0a,
     496,   16,   67,   11, 0x0a,
     512,   16,   67,   11, 0x0a,
     533,   16,   67,   11, 0x0a,
     549,   16,   67,   11, 0x0a,
     569,   16,   67,   11, 0x0a,
     591,   16,   67,   11, 0x0a,
     611,   16,   67,   11, 0x0a,
     631,   16,   67,   11, 0x0a,

 // properties: name, type, flags
     647,  318, 0x0a095001,
     664,  318, 0x0a095001,

       0        // eod
};

static const char qt_meta_stringdata_FileSystem[] = {
    "FileSystem\0\0int\0path\0_size(QString)\0"
    "QVariant\0lastModified(QString)\0bool\0"
    "source,destination\0_copyTree(QString,QString)\0"
    "makeDirectory(QString)\0makeTree(QString)\0"
    "_removeDirectory(QString)\0"
    "_removeTree(QString)\0QObject*\0path,opts\0"
    "_open(QString,QVariantMap)\0_remove(QString)\0"
    "_copy(QString,QString)\0QStringList\0"
    "list(QString)\0QString\0separator()\0"
    "workingDirectory()\0changeWorkingDirectory(QString)\0"
    "relativePath\0absolute(QString)\0"
    "fromNativeSeparators(QString)\0"
    "toNativeSeparators(QString)\0"
    "readLink(QString)\0exists(QString)\0"
    "isDirectory(QString)\0isFile(QString)\0"
    "isAbsolute(QString)\0isExecutable(QString)\0"
    "isReadable(QString)\0isWritable(QString)\0"
    "isLink(QString)\0workingDirectory\0"
    "separator\0"
};

void FileSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileSystem *_t = static_cast<FileSystem *>(_o);
        switch (_id) {
        case 0: { int _r = _t->_size((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { QVariant _r = _t->lastModified((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->_copyTree((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->makeDirectory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->makeTree((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->_removeDirectory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->_removeTree((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QObject* _r = _t->_open((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->_remove((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->_copy((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QStringList _r = _t->list((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->separator();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->workingDirectory();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->changeWorkingDirectory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->absolute((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->fromNativeSeparators((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->toNativeSeparators((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->readLink((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->exists((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isDirectory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isAbsolute((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isExecutable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->isReadable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isWritable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->isLink((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileSystem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileSystem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileSystem,
      qt_meta_data_FileSystem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileSystem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileSystem))
        return static_cast<void*>(const_cast< FileSystem*>(this));
    return QObject::qt_metacast(_clname);
}

int FileSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = workingDirectory(); break;
        case 1: *reinterpret_cast< QString*>(_v) = separator(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
