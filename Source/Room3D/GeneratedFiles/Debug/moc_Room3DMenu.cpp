/****************************************************************************
** Meta object code from reading C++ file 'Room3DMenu.h'
**
** Created: Tue Oct 30 09:28:07 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Controls/Room3DMenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DAction[] = {

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

static const char qt_meta_stringdata_CRoom3DAction[] = {
    "CRoom3DAction\0"
};

const QMetaObject CRoom3DAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_CRoom3DAction,
      qt_meta_data_CRoom3DAction, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DAction))
        return static_cast<void*>(const_cast< CRoom3DAction*>(this));
    return QAction::qt_metacast(_clname);
}

int CRoom3DAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CRoom3DMenu[] = {

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

static const char qt_meta_stringdata_CRoom3DMenu[] = {
    "CRoom3DMenu\0"
};

const QMetaObject CRoom3DMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_CRoom3DMenu,
      qt_meta_data_CRoom3DMenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DMenu))
        return static_cast<void*>(const_cast< CRoom3DMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int CRoom3DMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
