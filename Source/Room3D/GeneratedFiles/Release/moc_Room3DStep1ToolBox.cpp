/****************************************************************************
** Meta object code from reading C++ file 'Room3DStep1ToolBox.h'
**
** Created: Tue Apr 9 09:37:15 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Controls/Room3DStep1ToolBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DStep1ToolBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DBaseToolBox[] = {

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

static const char qt_meta_stringdata_CRoom3DBaseToolBox[] = {
    "CRoom3DBaseToolBox\0"
};

const QMetaObject CRoom3DBaseToolBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CRoom3DBaseToolBox,
      qt_meta_data_CRoom3DBaseToolBox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DBaseToolBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DBaseToolBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DBaseToolBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DBaseToolBox))
        return static_cast<void*>(const_cast< CRoom3DBaseToolBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int CRoom3DBaseToolBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CRoom3DStep1ToolBox[] = {

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
      30,   21,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DStep1ToolBox[] = {
    "CRoom3DStep1ToolBox\0\0a_nBtnID\0"
    "pressedButton(int)\0"
};

const QMetaObject CRoom3DStep1ToolBox::staticMetaObject = {
    { &CRoom3DBaseToolBox::staticMetaObject, qt_meta_stringdata_CRoom3DStep1ToolBox,
      qt_meta_data_CRoom3DStep1ToolBox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DStep1ToolBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DStep1ToolBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DStep1ToolBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DStep1ToolBox))
        return static_cast<void*>(const_cast< CRoom3DStep1ToolBox*>(this));
    return CRoom3DBaseToolBox::qt_metacast(_clname);
}

int CRoom3DStep1ToolBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CRoom3DBaseToolBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: pressedButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
