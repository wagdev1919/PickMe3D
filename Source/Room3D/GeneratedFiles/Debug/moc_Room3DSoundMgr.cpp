/****************************************************************************
** Meta object code from reading C++ file 'Room3DSoundMgr.h'
**
** Created: Tue Oct 30 09:28:03 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Room3DSoundMgr.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DSoundMgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DSound[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   47,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DSound[] = {
    "CRoom3DSound\0\0a_pSound\0finished(CRoom3DSound*)\0"
    "a_NewState,a_OldState\0"
    "StateChanged(Phonon::State,Phonon::State)\0"
};

const QMetaObject CRoom3DSound::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CRoom3DSound,
      qt_meta_data_CRoom3DSound, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DSound::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DSound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DSound::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DSound))
        return static_cast<void*>(const_cast< CRoom3DSound*>(this));
    return QObject::qt_metacast(_clname);
}

int CRoom3DSound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: finished((*reinterpret_cast< CRoom3DSound*(*)>(_a[1]))); break;
        case 1: StateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CRoom3DSound::finished(CRoom3DSound * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_CRoom3DSoundMgr[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DSoundMgr[] = {
    "CRoom3DSoundMgr\0\0ClearNonPlayingSounds()\0"
};

const QMetaObject CRoom3DSoundMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CRoom3DSoundMgr,
      qt_meta_data_CRoom3DSoundMgr, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DSoundMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DSoundMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DSoundMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DSoundMgr))
        return static_cast<void*>(const_cast< CRoom3DSoundMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int CRoom3DSoundMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ClearNonPlayingSounds(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
