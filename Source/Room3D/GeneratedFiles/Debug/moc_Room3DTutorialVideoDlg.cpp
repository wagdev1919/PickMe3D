/****************************************************************************
** Meta object code from reading C++ file 'Room3DTutorialVideoDlg.h'
**
** Created: Tue Oct 30 09:27:57 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dialog/Room3DTutorialVideoDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Room3DTutorialVideoDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRoom3DTutorialVideoDlg[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x0a,
      34,   24,   24,   24, 0x0a,
      44,   24,   24,   24, 0x0a,
      57,   24,   24,   24, 0x0a,
      68,   24,   24,   24, 0x0a,
      80,   24,   24,   24, 0x0a,
     103,   24,   24,   24, 0x0a,
     145,  127,   24,   24, 0x08,
     195,  187,   24,   24, 0x08,
     213,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CRoom3DTutorialVideoDlg[] = {
    "CRoom3DTutorialVideoDlg\0\0rewind()\0"
    "forward()\0updateTime()\0finished()\0"
    "playPause()\0scaleChanged(QAction*)\0"
    "aspectChanged(QAction*)\0newstate,oldstate\0"
    "stateChanged(Phonon::State,Phonon::State)\0"
    "percent\0bufferStatus(int)\0"
    "hasVideoChanged(bool)\0"
};

const QMetaObject CRoom3DTutorialVideoDlg::staticMetaObject = {
    { &CRoom3DBaseDlg::staticMetaObject, qt_meta_stringdata_CRoom3DTutorialVideoDlg,
      qt_meta_data_CRoom3DTutorialVideoDlg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRoom3DTutorialVideoDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRoom3DTutorialVideoDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRoom3DTutorialVideoDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRoom3DTutorialVideoDlg))
        return static_cast<void*>(const_cast< CRoom3DTutorialVideoDlg*>(this));
    return CRoom3DBaseDlg::qt_metacast(_clname);
}

int CRoom3DTutorialVideoDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CRoom3DBaseDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: rewind(); break;
        case 1: forward(); break;
        case 2: updateTime(); break;
        case 3: finished(); break;
        case 4: playPause(); break;
        case 5: scaleChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: aspectChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: stateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        case 8: bufferStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: hasVideoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
