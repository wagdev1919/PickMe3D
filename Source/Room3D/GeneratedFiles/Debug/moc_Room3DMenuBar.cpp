/****************************************************************************
** Meta object code from reading C++ file 'Room3DMenuBar.h'
**
** Created: Tue Oct 30 09:28:06 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Controls/Room3DMenuBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DMenuBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DMenuBar[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   16,   15,   15, 0x0a,
      47,   15,   15,   15, 0x0a,
      62,   15,   15,   15, 0x0a,
      78,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DMenuBar[] = {
    "CRoom3DMenuBar\0\0a_nButtonID\0"
    "pressedButton(int)\0OnNewProject()\0"
    "OnSaveProject()\0OnOpenProject()\0"
};

const QMetaObject CRoom3DMenuBar::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_CRoom3DMenuBar,
      qt_meta_data_CRoom3DMenuBar, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DMenuBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DMenuBar))
        return static_cast<void*>(const_cast< CRoom3DMenuBar*>(this));
    return QFrame::qt_metacast(_clname);
}

int CRoom3DMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: pressedButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: OnNewProject(); break;
        case 2: OnSaveProject(); break;
        case 3: OnOpenProject(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
