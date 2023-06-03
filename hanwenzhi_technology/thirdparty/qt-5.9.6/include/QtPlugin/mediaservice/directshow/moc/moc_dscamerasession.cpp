/****************************************************************************
** Meta object code from reading C++ file 'dscamerasession.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../camera/dscamerasession.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dscamerasession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DSCameraSession_t {
    QByteArrayData data[16];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DSCameraSession_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DSCameraSession_t qt_meta_stringdata_DSCameraSession = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DSCameraSession"
QT_MOC_LITERAL(1, 16, 13), // "statusChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "QCamera::Status"
QT_MOC_LITERAL(4, 47, 12), // "imageExposed"
QT_MOC_LITERAL(5, 60, 2), // "id"
QT_MOC_LITERAL(6, 63, 13), // "imageCaptured"
QT_MOC_LITERAL(7, 77, 7), // "preview"
QT_MOC_LITERAL(8, 85, 10), // "imageSaved"
QT_MOC_LITERAL(9, 96, 8), // "fileName"
QT_MOC_LITERAL(10, 105, 22), // "readyForCaptureChanged"
QT_MOC_LITERAL(11, 128, 12), // "captureError"
QT_MOC_LITERAL(12, 141, 5), // "error"
QT_MOC_LITERAL(13, 147, 11), // "errorString"
QT_MOC_LITERAL(14, 159, 12), // "presentFrame"
QT_MOC_LITERAL(15, 172, 21) // "updateReadyForCapture"

    },
    "DSCameraSession\0statusChanged\0\0"
    "QCamera::Status\0imageExposed\0id\0"
    "imageCaptured\0preview\0imageSaved\0"
    "fileName\0readyForCaptureChanged\0"
    "captureError\0error\0errorString\0"
    "presentFrame\0updateReadyForCapture"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DSCameraSession[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    2,   60,    2, 0x06 /* Public */,
       8,    2,   65,    2, 0x06 /* Public */,
      10,    1,   70,    2, 0x06 /* Public */,
      11,    3,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   80,    2, 0x08 /* Private */,
      15,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    5,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    9,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    5,   12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DSCameraSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DSCameraSession *_t = static_cast<DSCameraSession *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< QCamera::Status(*)>(_a[1]))); break;
        case 1: _t->imageExposed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->imageCaptured((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 3: _t->imageSaved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->readyForCaptureChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->captureError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->presentFrame(); break;
        case 7: _t->updateReadyForCapture(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::Status >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DSCameraSession::*_t)(QCamera::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSCameraSession::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DSCameraSession::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSCameraSession::imageExposed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DSCameraSession::*_t)(int , const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSCameraSession::imageCaptured)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DSCameraSession::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSCameraSession::imageSaved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DSCameraSession::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSCameraSession::readyForCaptureChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DSCameraSession::*_t)(int , int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DSCameraSession::captureError)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject DSCameraSession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DSCameraSession.data,
      qt_meta_data_DSCameraSession,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DSCameraSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DSCameraSession::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DSCameraSession.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DSCameraSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DSCameraSession::statusChanged(QCamera::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DSCameraSession::imageExposed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DSCameraSession::imageCaptured(int _t1, const QImage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DSCameraSession::imageSaved(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DSCameraSession::readyForCaptureChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DSCameraSession::captureError(int _t1, int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
