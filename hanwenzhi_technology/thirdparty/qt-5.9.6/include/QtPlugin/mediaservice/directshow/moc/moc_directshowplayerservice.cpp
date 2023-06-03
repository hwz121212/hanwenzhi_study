/****************************************************************************
** Meta object code from reading C++ file 'directshowplayerservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../player/directshowplayerservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'directshowplayerservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DirectShowPlayerService_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DirectShowPlayerService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DirectShowPlayerService_t qt_meta_stringdata_DirectShowPlayerService = {
    {
QT_MOC_LITERAL(0, 0, 23), // "DirectShowPlayerService"
QT_MOC_LITERAL(1, 24, 18), // "videoOutputChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 22), // "onAudioBufferAvailable"
QT_MOC_LITERAL(4, 67, 4), // "time"
QT_MOC_LITERAL(5, 72, 4), // "data"
QT_MOC_LITERAL(6, 77, 22) // "onVideoBufferAvailable"

    },
    "DirectShowPlayerService\0videoOutputChanged\0"
    "\0onAudioBufferAvailable\0time\0data\0"
    "onVideoBufferAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DirectShowPlayerService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    2,   30,    2, 0x08 /* Private */,
       6,    2,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::QByteArray,    4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::QByteArray,    4,    5,

       0        // eod
};

void DirectShowPlayerService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DirectShowPlayerService *_t = static_cast<DirectShowPlayerService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->videoOutputChanged(); break;
        case 1: _t->onAudioBufferAvailable((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->onVideoBufferAvailable((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject DirectShowPlayerService::staticMetaObject = {
    { &QMediaService::staticMetaObject, qt_meta_stringdata_DirectShowPlayerService.data,
      qt_meta_data_DirectShowPlayerService,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DirectShowPlayerService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DirectShowPlayerService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DirectShowPlayerService.stringdata0))
        return static_cast<void*>(this);
    return QMediaService::qt_metacast(_clname);
}

int DirectShowPlayerService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
