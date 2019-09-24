/****************************************************************************
** Meta object code from reading C++ file 'Room3DIntroVideoDlg.h'
**
** Created: Tue Apr 9 09:37:09 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialog/Room3DIntroVideoDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DIntroVideoDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DIntroVideoDlg[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   21,   21,   21, 0x09,
      64,   46,   21,   21, 0x09,
     115,  106,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DIntroVideoDlg[] = {
    "CRoom3DIntroVideoDlg\0\0OnFinished()\0"
    "Finished()\0newstate,oldstate\0"
    "StateChanged(Phonon::State,Phonon::State)\0"
    "a_nBtnID\0OnPressedBtn(int)\0"
};

const QMetaObject CRoom3DIntroVideoDlg::staticMetaObject = {
    { &CRoom3DBaseDlg::staticMetaObject, qt_meta_stringdata_CRoom3DIntroVideoDlg,
      qt_meta_data_CRoom3DIntroVideoDlg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DIntroVideoDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DIntroVideoDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DIntroVideoDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DIntroVideoDlg))
        return static_cast<void*>(const_cast< CRoom3DIntroVideoDlg*>(this));
    return CRoom3DBaseDlg::qt_metacast(_clname);
}

int CRoom3DIntroVideoDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CRoom3DBaseDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnFinished(); break;
        case 1: Finished(); break;
        case 2: StateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        case 3: OnPressedBtn((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CRoom3DIntroVideoDlg::OnFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
