/****************************************************************************
** Meta object code from reading C++ file 'mfaudiodecodercontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../decoder/mfaudiodecodercontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mfaudiodecodercontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MFAudioDecoderControl_t {
    QByteArrayData data[7];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MFAudioDecoderControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MFAudioDecoderControl_t qt_meta_stringdata_MFAudioDecoderControl = {
    {
QT_MOC_LITERAL(0, 0, 21), // "MFAudioDecoderControl"
QT_MOC_LITERAL(1, 22, 22), // "handleMediaSourceReady"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 22), // "handleMediaSourceError"
QT_MOC_LITERAL(4, 69, 2), // "hr"
QT_MOC_LITERAL(5, 72, 17), // "handleSampleAdded"
QT_MOC_LITERAL(6, 90, 20) // "handleSourceFinished"

    },
    "MFAudioDecoderControl\0handleMediaSourceReady\0"
    "\0handleMediaSourceError\0hr\0handleSampleAdded\0"
    "handleSourceFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MFAudioDecoderControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Long,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MFAudioDecoderControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MFAudioDecoderControl *_t = static_cast<MFAudioDecoderControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleMediaSourceReady(); break;
        case 1: _t->handleMediaSourceError((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 2: _t->handleSampleAdded(); break;
        case 3: _t->handleSourceFinished(); break;
        default: ;
        }
    }
}

const QMetaObject MFAudioDecoderControl::staticMetaObject = {
    { &QAudioDecoderControl::staticMetaObject, qt_meta_stringdata_MFAudioDecoderControl.data,
      qt_meta_data_MFAudioDecoderControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MFAudioDecoderControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MFAudioDecoderControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MFAudioDecoderControl.stringdata0))
        return static_cast<void*>(this);
    return QAudioDecoderControl::qt_metacast(_clname);
}

int MFAudioDecoderControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAudioDecoderControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
