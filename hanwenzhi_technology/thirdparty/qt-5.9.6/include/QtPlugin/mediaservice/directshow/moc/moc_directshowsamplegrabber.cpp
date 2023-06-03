/****************************************************************************
** Meta object code from reading C++ file 'directshowsamplegrabber.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../common/directshowsamplegrabber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'directshowsamplegrabber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DirectShowSampleGrabber_t {
    QByteArrayData data[8];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DirectShowSampleGrabber_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DirectShowSampleGrabber_t qt_meta_stringdata_DirectShowSampleGrabber = {
    {
QT_MOC_LITERAL(0, 0, 23), // "DirectShowSampleGrabber"
QT_MOC_LITERAL(1, 24, 15), // "sampleAvailable"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "time"
QT_MOC_LITERAL(4, 46, 13), // "IMediaSample*"
QT_MOC_LITERAL(5, 60, 6), // "sample"
QT_MOC_LITERAL(6, 67, 15), // "bufferAvailable"
QT_MOC_LITERAL(7, 83, 4) // "data"

    },
    "DirectShowSampleGrabber\0sampleAvailable\0"
    "\0time\0IMediaSample*\0sample\0bufferAvailable\0"
    "data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DirectShowSampleGrabber[] = {

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
       1,    2,   24,    2, 0x06 /* Public */,
       6,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::QByteArray,    3,    7,

       0        // eod
};

void DirectShowSampleGrabber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DirectShowSampleGrabber *_t = static_cast<DirectShowSampleGrabber *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sampleAvailable((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< IMediaSample*(*)>(_a[2]))); break;
        case 1: _t->bufferAvailable((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DirectShowSampleGrabber::*_t)(double , IMediaSample * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DirectShowSampleGrabber::sampleAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DirectShowSampleGrabber::*_t)(double , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DirectShowSampleGrabber::bufferAvailable)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DirectShowSampleGrabber::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DirectShowSampleGrabber.data,
      qt_meta_data_DirectShowSampleGrabber,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DirectShowSampleGrabber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DirectShowSampleGrabber::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DirectShowSampleGrabber.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DirectShowSampleGrabber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DirectShowSampleGrabber::sampleAvailable(double _t1, IMediaSample * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DirectShowSampleGrabber::bufferAvailable(double _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
