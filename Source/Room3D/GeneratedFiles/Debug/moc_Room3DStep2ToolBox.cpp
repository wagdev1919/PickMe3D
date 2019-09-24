/****************************************************************************
** Meta object code from reading C++ file 'Room3DStep2ToolBox.h'
**
** Created: Tue Oct 30 09:28:02 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Controls/Room3DStep2ToolBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DStep2ToolBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DStep2ToolBox[] = {

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
      30,   21,   20,   20, 0x09,
      60,   51,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DStep2ToolBox[] = {
    "CRoom3DStep2ToolBox\0\0a_nState\0"
    "OnFinishSetting(int)\0a_nBtnID\0"
    "pressedButton(int)\0"
};

const QMetaObject CRoom3DStep2ToolBox::staticMetaObject = {
    { &CRoom3DBaseToolBox::staticMetaObject, qt_meta_stringdata_CRoom3DStep2ToolBox,
      qt_meta_data_CRoom3DStep2ToolBox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DStep2ToolBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DStep2ToolBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DStep2ToolBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DStep2ToolBox))
        return static_cast<void*>(const_cast< CRoom3DStep2ToolBox*>(this));
    return CRoom3DBaseToolBox::qt_metacast(_clname);
}

int CRoom3DStep2ToolBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CRoom3DBaseToolBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnFinishSetting((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: pressedButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
