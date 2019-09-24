/****************************************************************************
** Meta object code from reading C++ file 'Room3DItemMgr.h'
**
** Created: Tue Apr 9 09:37:10 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Room3DItemMgr.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DItemMgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DItemDownloadMgr[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   24,   23,   23, 0x05,
      78,   53,   23,   23, 0x05,
     140,  119,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     189,  173,   23,   23, 0x09,
     240,  219,   23,   23, 0x09,
     287,  272,   23,   23, 0x09,
     351,  327,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DItemDownloadMgr[] = {
    "CRoom3DItemDownloadMgr\0\0error\0"
    "UpdateItemInfoUI(bool)\0nRowIndex,a_pixmap,error\0"
    "UpdateItemInfoUIImage(int,QPixmap&,bool)\0"
    "a_ItemDataPath,error\0"
    "UpdateItemInfoData(QString,bool)\0"
    "requestId,error\0httpRequestFinished(int,bool)\0"
    "bytesRead,totalBytes\0"
    "updateDataReadProgress(int,int)\0"
    "responseHeader\0readResponseHeader(QHttpResponseHeader)\0"
    "hostName,,authenticator\0"
    "slotAuthenticationRequired(QString,quint16,QAuthenticator*)\0"
};

const QMetaObject CRoom3DItemDownloadMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CRoom3DItemDownloadMgr,
      qt_meta_data_CRoom3DItemDownloadMgr, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DItemDownloadMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DItemDownloadMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DItemDownloadMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DItemDownloadMgr))
        return static_cast<void*>(const_cast< CRoom3DItemDownloadMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int CRoom3DItemDownloadMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: UpdateItemInfoUI((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: UpdateItemInfoUIImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QPixmap(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: UpdateItemInfoData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: httpRequestFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: updateDataReadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: readResponseHeader((*reinterpret_cast< const QHttpResponseHeader(*)>(_a[1]))); break;
        case 6: slotAuthenticationRequired((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QAuthenticator*(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CRoom3DItemDownloadMgr::UpdateItemInfoUI(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CRoom3DItemDownloadMgr::UpdateItemInfoUIImage(int _t1, QPixmap & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CRoom3DItemDownloadMgr::UpdateItemInfoData(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_CRoom3DModelLoadThread[] = {

 // content:
       4,       // revision
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

static const char qt_meta_stringdata_CRoom3DModelLoadThread[] = {
    "CRoom3DModelLoadThread\0"
};

const QMetaObject CRoom3DModelLoadThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CRoom3DModelLoadThread,
      qt_meta_data_CRoom3DModelLoadThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DModelLoadThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DModelLoadThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DModelLoadThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DModelLoadThread))
        return static_cast<void*>(const_cast< CRoom3DModelLoadThread*>(this));
    return QThread::qt_metacast(_clname);
}

int CRoom3DModelLoadThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CRoom3DItemMgr[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   16,   15,   15, 0x09,
      72,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DItemMgr[] = {
    "CRoom3DItemMgr\0\0a_ItemDataPath,error\0"
    "OnUpdateItemInfoData(QString,bool)\0"
    "OnModelLoadFinish()\0"
};

const QMetaObject CRoom3DItemMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CRoom3DItemMgr,
      qt_meta_data_CRoom3DItemMgr, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DItemMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DItemMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DItemMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DItemMgr))
        return static_cast<void*>(const_cast< CRoom3DItemMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int CRoom3DItemMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnUpdateItemInfoData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: OnModelLoadFinish(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
