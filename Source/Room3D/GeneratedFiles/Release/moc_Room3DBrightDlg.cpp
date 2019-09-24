/****************************************************************************
** Meta object code from reading C++ file 'Room3DBrightDlg.h'
**
** Created: Tue Apr 9 09:37:06 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialog/Room3DBrightDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DBrightDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DBrightDlg[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      27,   17,   17,   17, 0x09,
      48,   38,   17,   17, 0x09,
      91,   82,   17,   17, 0x09,
     117,   82,   17,   17, 0x09,
     145,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DBrightDlg[] = {
    "CRoom3DBrightDlg\0\0verify()\0OnCancel()\0"
    "a_pButton\0OnClickedButton(QAbstractButton*)\0"
    "a_nValue\0OnBrightValueChanged(int)\0"
    "OnContrastValueChanged(int)\0"
    "OnPressDefaultBtn()\0"
};

const QMetaObject CRoom3DBrightDlg::staticMetaObject = {
    { &CRoom3DBaseDlg::staticMetaObject, qt_meta_stringdata_CRoom3DBrightDlg,
      qt_meta_data_CRoom3DBrightDlg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DBrightDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DBrightDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DBrightDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DBrightDlg))
        return static_cast<void*>(const_cast< CRoom3DBrightDlg*>(this));
    return CRoom3DBaseDlg::qt_metacast(_clname);
}

int CRoom3DBrightDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CRoom3DBaseDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: verify(); break;
        case 1: OnCancel(); break;
        case 2: OnClickedButton((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: OnBrightValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: OnContrastValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: OnPressDefaultBtn(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
