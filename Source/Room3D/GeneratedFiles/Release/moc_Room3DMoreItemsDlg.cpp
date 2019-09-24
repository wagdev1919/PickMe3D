/****************************************************************************
** Meta object code from reading C++ file 'Room3DMoreItemsDlg.h'
**
** Created: Tue Apr 9 09:37:13 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialog/Room3DMoreItemsDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DMoreItemsDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DItemCheckBox[] = {

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

static const char qt_meta_stringdata_CRoom3DItemCheckBox[] = {
    "CRoom3DItemCheckBox\0"
};

const QMetaObject CRoom3DItemCheckBox::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_CRoom3DItemCheckBox,
      qt_meta_data_CRoom3DItemCheckBox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DItemCheckBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DItemCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DItemCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DItemCheckBox))
        return static_cast<void*>(const_cast< CRoom3DItemCheckBox*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int CRoom3DItemCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CRoom3DMoreItemsDlg[] = {

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
      21,   20,   20,   20, 0x09,
      39,   30,   20,   20, 0x09,
      60,   54,   20,   20, 0x09,
     112,   90,   20,   20, 0x09,
     162,  153,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DMoreItemsDlg[] = {
    "CRoom3DMoreItemsDlg\0\0verify()\0a_nBtnID\0"
    "OnPressed(int)\0error\0OnUpdateItemTableWidget(bool)\0"
    "a_nRow,a_pixmap,error\0"
    "OnUpdateItemInfoImage(int,QPixmap&,bool)\0"
    "a_nState\0OnSelectAll(int)\0"
};

const QMetaObject CRoom3DMoreItemsDlg::staticMetaObject = {
    { &CRoom3DBaseDlg::staticMetaObject, qt_meta_stringdata_CRoom3DMoreItemsDlg,
      qt_meta_data_CRoom3DMoreItemsDlg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DMoreItemsDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DMoreItemsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DMoreItemsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DMoreItemsDlg))
        return static_cast<void*>(const_cast< CRoom3DMoreItemsDlg*>(this));
    return CRoom3DBaseDlg::qt_metacast(_clname);
}

int CRoom3DMoreItemsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CRoom3DBaseDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: verify(); break;
        case 1: OnPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: OnUpdateItemTableWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: OnUpdateItemInfoImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QPixmap(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: OnSelectAll((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
