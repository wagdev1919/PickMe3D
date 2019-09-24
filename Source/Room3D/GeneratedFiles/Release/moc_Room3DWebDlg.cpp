/****************************************************************************
** Meta object code from reading C++ file 'Room3DWebDlg.h'
**
** Created: Tue Apr 9 09:37:21 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialog/Room3DWebDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DWebDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DProgressDlg[] = {

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

static const char qt_meta_stringdata_CRoom3DProgressDlg[] = {
    "CRoom3DProgressDlg\0"
};

const QMetaObject CRoom3DProgressDlg::staticMetaObject = {
    { &CRoom3DBaseDlg::staticMetaObject, qt_meta_stringdata_CRoom3DProgressDlg,
      qt_meta_data_CRoom3DProgressDlg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DProgressDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DProgressDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DProgressDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DProgressDlg))
        return static_cast<void*>(const_cast< CRoom3DProgressDlg*>(this));
    return CRoom3DBaseDlg::qt_metacast(_clname);
}

int CRoom3DProgressDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CRoom3DBaseDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CRoom3DWebDlg[] = {

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
      18,   15,   14,   14, 0x0a,
      43,   37,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DWebDlg[] = {
    "CRoom3DWebDlg\0\0ok\0LoadFinished(bool)\0"
    "reply\0handleFileDownload(QNetworkReply*)\0"
};

const QMetaObject CRoom3DWebDlg::staticMetaObject = {
    { &CRoom3DBaseDlg::staticMetaObject, qt_meta_stringdata_CRoom3DWebDlg,
      qt_meta_data_CRoom3DWebDlg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DWebDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DWebDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DWebDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DWebDlg))
        return static_cast<void*>(const_cast< CRoom3DWebDlg*>(this));
    return CRoom3DBaseDlg::qt_metacast(_clname);
}

int CRoom3DWebDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CRoom3DBaseDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: LoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: handleFileDownload((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
