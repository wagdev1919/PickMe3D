/****************************************************************************
** Meta object code from reading C++ file 'Room3DItemListView.h'
**
** Created: Tue Apr 9 09:37:10 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Controls/Room3DItemListView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DItemListView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DItemListView[] = {

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
      21,   20,   20,   20, 0x09,
      36,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DItemListView[] = {
    "CRoom3DItemListView\0\0OnDeleteItem()\0"
    "OnImportItem()\0"
};

const QMetaObject CRoom3DItemListView::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_CRoom3DItemListView,
      qt_meta_data_CRoom3DItemListView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DItemListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DItemListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DItemListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DItemListView))
        return static_cast<void*>(const_cast< CRoom3DItemListView*>(this));
    return QListWidget::qt_metacast(_clname);
}

int CRoom3DItemListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnDeleteItem(); break;
        case 1: OnImportItem(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
