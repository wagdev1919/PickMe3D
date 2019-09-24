/****************************************************************************
** Meta object code from reading C++ file 'Room3DStep3ToolBox.h'
**
** Created: Tue Oct 30 09:28:01 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Controls/Room3DStep3ToolBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DStep3ToolBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DStep3ToolBox[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   21,   20,   20, 0x09,
     111,  100,   20,   20, 0x09,
     148,  143,   20,   20, 0x09,
     195,  186,   20,   20, 0x09,
     229,  220,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DStep3ToolBox[] = {
    "CRoom3DStep3ToolBox\0\0a_pCurrent,a_pPrevious\0"
    "OnCurrentItemChanged(QListWidgetItem*,QListWidgetItem*)\0"
    "a_pCurrent\0OnItemClicked(QListWidgetItem*)\0"
    "item\0OnItemDoubleClicked(QListWidgetItem*)\0"
    "a_nIndex\0OnCurrentTabChanged(int)\0"
    "a_nBtnID\0pressedButton(int)\0"
};

const QMetaObject CRoom3DStep3ToolBox::staticMetaObject = {
    { &CRoom3DBaseToolBox::staticMetaObject, qt_meta_stringdata_CRoom3DStep3ToolBox,
      qt_meta_data_CRoom3DStep3ToolBox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DStep3ToolBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DStep3ToolBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DStep3ToolBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DStep3ToolBox))
        return static_cast<void*>(const_cast< CRoom3DStep3ToolBox*>(this));
    return CRoom3DBaseToolBox::qt_metacast(_clname);
}

int CRoom3DStep3ToolBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CRoom3DBaseToolBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnCurrentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 1: OnItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: OnItemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: OnCurrentTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: pressedButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
