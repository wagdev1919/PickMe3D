/****************************************************************************
** Meta object code from reading C++ file 'Room3DApplication.h'
**
** Created: Tue Oct 30 09:28:12 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Room3DApplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DApplication[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      27,   19,   19,   19, 0x0a,
      39,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DApplication[] = {
    "CRoom3DApplication\0\0quit()\0quitAbout()\0"
    "OnMoveEidt1Step()\0"
};

const QMetaObject CRoom3DApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_CRoom3DApplication,
      qt_meta_data_CRoom3DApplication, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DApplication))
        return static_cast<void*>(const_cast< CRoom3DApplication*>(this));
    return QApplication::qt_metacast(_clname);
}

int CRoom3DApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: quit(); break;
        case 1: quitAbout(); break;
        case 2: OnMoveEidt1Step(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
