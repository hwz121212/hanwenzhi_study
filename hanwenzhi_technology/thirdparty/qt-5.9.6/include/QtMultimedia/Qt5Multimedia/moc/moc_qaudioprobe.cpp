/****************************************************************************
** Meta object code from reading C++ file 'qaudioprobe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qaudioprobe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaudioprobe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAudioProbe_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAudioProbe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAudioProbe_t qt_meta_stringdata_QAudioProbe = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QAudioProbe"
QT_MOC_LITERAL(1, 12, 17), // "audioBufferProbed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "QAudioBuffer"
QT_MOC_LITERAL(4, 44, 11), // "audioBuffer"
QT_MOC_LITERAL(5, 56, 5) // "flush"

    },
    "QAudioProbe\0audioBufferProbed\0\0"
    "QAudioBuffer\0audioBuffer\0flush"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAudioProbe[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void QAudioProbe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAudioProbe *_t = static_cast<QAudioProbe *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->audioBufferProbed((*reinterpret_cast< const QAudioBuffer(*)>(_a[1]))); break;
        case 1: _t->flush(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioBuffer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAudioProbe::*_t)(const QAudioBuffer & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioProbe::audioBufferProbed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAudioProbe::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioProbe::flush)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QAudioProbe::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAudioProbe.data,
      qt_meta_data_QAudioProbe,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAudioProbe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAudioProbe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAudioProbe.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAudioProbe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QAudioProbe::audioBufferProbed(const QAudioBuffer & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAudioProbe::flush()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
