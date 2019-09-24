/****************************************************************************
** Meta object code from reading C++ file 'Room3DImageButton.h'
**
** Created: Tue Apr 9 09:37:08 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Controls/Room3DImageButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DImageButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DImageWidget[] = {

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

static const char qt_meta_stringdata_CRoom3DImageWidget[] = {
    "CRoom3DImageWidget\0"
};

const QMetaObject CRoom3DImageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CRoom3DImageWidget,
      qt_meta_data_CRoom3DImageWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DImageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DImageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DImageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DImageWidget))
        return static_cast<void*>(const_cast< CRoom3DImageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CRoom3DImageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CRoom3DImageButton[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   19,   19,   19, 0x0a,
      53,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DImageButton[] = {
    "CRoom3DImageButton\0\0nBtnID\0pressed(int)\0"
    "OnShowMenu()\0OnHideMenu()\0"
};

const QMetaObject CRoom3DImageButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_CRoom3DImageButton,
      qt_meta_data_CRoom3DImageButton, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DImageButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DImageButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DImageButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DImageButton))
        return static_cast<void*>(const_cast< CRoom3DImageButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int CRoom3DImageButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: pressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: OnShowMenu(); break;
        case 2: OnHideMenu(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CRoom3DImageButton::pressed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
