/****************************************************************************
** Meta object code from reading C++ file 'qcameraimagecapturecontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcameraimagecapturecontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcameraimagecapturecontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCameraImageCaptureControl_t {
    QByteArrayData data[17];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCameraImageCaptureControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCameraImageCaptureControl_t qt_meta_stringdata_QCameraImageCaptureControl = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QCameraImageCaptureControl"
QT_MOC_LITERAL(1, 27, 22), // "readyForCaptureChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 12), // "imageExposed"
QT_MOC_LITERAL(4, 64, 2), // "id"
QT_MOC_LITERAL(5, 67, 13), // "imageCaptured"
QT_MOC_LITERAL(6, 81, 7), // "preview"
QT_MOC_LITERAL(7, 89, 22), // "imageMetadataAvailable"
QT_MOC_LITERAL(8, 112, 3), // "key"
QT_MOC_LITERAL(9, 116, 5), // "value"
QT_MOC_LITERAL(10, 122, 14), // "imageAvailable"
QT_MOC_LITERAL(11, 137, 11), // "QVideoFrame"
QT_MOC_LITERAL(12, 149, 6), // "buffer"
QT_MOC_LITERAL(13, 156, 10), // "imageSaved"
QT_MOC_LITERAL(14, 167, 8), // "fileName"
QT_MOC_LITERAL(15, 176, 5), // "error"
QT_MOC_LITERAL(16, 182, 11) // "errorString"

    },
    "QCameraImageCaptureControl\0"
    "readyForCaptureChanged\0\0imageExposed\0"
    "id\0imageCaptured\0preview\0"
    "imageMetadataAvailable\0key\0value\0"
    "imageAvailable\0QVideoFrame\0buffer\0"
    "imageSaved\0fileName\0error\0errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCameraImageCaptureControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,
       5,    2,   55,    2, 0x06 /* Public */,
       7,    3,   60,    2, 0x06 /* Public */,
      10,    2,   67,    2, 0x06 /* Public */,
      13,    2,   72,    2, 0x06 /* Public */,
      15,    3,   77,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    4,    8,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11,    4,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    4,   15,   16,

       0        // eod
};

void QCameraImageCaptureControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCameraImageCaptureControl *_t = static_cast<QCameraImageCaptureControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyForCaptureChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->imageExposed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->imageCaptured((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 3: _t->imageMetadataAvailable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 4: _t->imageAvailable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVideoFrame(*)>(_a[2]))); break;
        case 5: _t->imageSaved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCameraImageCaptureControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraImageCaptureControl::readyForCaptureChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCameraImageCaptureControl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraImageCaptureControl::imageExposed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCameraImageCaptureControl::*_t)(int , const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraImageCaptureControl::imageCaptured)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCameraImageCaptureControl::*_t)(int , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraImageCaptureControl::imageMetadataAvailable)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QCameraImageCaptureControl::*_t)(int , const QVideoFrame & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraImageCaptureControl::imageAvailable)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QCameraImageCaptureControl::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraImageCaptureControl::imageSaved)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QCameraImageCaptureControl::*_t)(int , int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraImageCaptureControl::error)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QCameraImageCaptureControl::staticMetaObject = {
    { &QMediaControl::staticMetaObject, qt_meta_stringdata_QCameraImageCaptureControl.data,
      qt_meta_data_QCameraImageCaptureControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCameraImageCaptureControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCameraImageCaptureControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCameraImageCaptureControl.stringdata0))
        return static_cast<void*>(this);
    return QMediaControl::qt_metacast(_clname);
}

int QCameraImageCaptureControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QCameraImageCaptureControl::readyForCaptureChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCameraImageCaptureControl::imageExposed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCameraImageCaptureControl::imageCaptured(int _t1, const QImage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCameraImageCaptureControl::imageMetadataAvailable(int _t1, const QString & _t2, const QVariant & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCameraImageCaptureControl::imageAvailable(int _t1, const QVideoFrame & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QCameraImageCaptureControl::imageSaved(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QCameraImageCaptureControl::error(int _t1, int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
