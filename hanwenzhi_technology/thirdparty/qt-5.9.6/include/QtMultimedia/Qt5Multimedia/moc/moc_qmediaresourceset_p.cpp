/****************************************************************************
** Meta object code from reading C++ file 'qmediaresourceset_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtMultimedia/private/qmediaresourceset_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmediaresourceset_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMediaPlayerResourceSetInterface_t {
    QByteArrayData data[8];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMediaPlayerResourceSetInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMediaPlayerResourceSetInterface_t qt_meta_stringdata_QMediaPlayerResourceSetInterface = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QMediaPlayerResourceSetInterface"
QT_MOC_LITERAL(1, 33, 16), // "resourcesGranted"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 13), // "resourcesLost"
QT_MOC_LITERAL(4, 65, 15), // "resourcesDenied"
QT_MOC_LITERAL(5, 81, 17), // "resourcesReleased"
QT_MOC_LITERAL(6, 99, 19), // "availabilityChanged"
QT_MOC_LITERAL(7, 119, 9) // "available"

    },
    "QMediaPlayerResourceSetInterface\0"
    "resourcesGranted\0\0resourcesLost\0"
    "resourcesDenied\0resourcesReleased\0"
    "availabilityChanged\0available"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMediaPlayerResourceSetInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void QMediaPlayerResourceSetInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMediaPlayerResourceSetInterface *_t = static_cast<QMediaPlayerResourceSetInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resourcesGranted(); break;
        case 1: _t->resourcesLost(); break;
        case 2: _t->resourcesDenied(); break;
        case 3: _t->resourcesReleased(); break;
        case 4: _t->availabilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMediaPlayerResourceSetInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerResourceSetInterface::resourcesGranted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMediaPlayerResourceSetInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerResourceSetInterface::resourcesLost)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMediaPlayerResourceSetInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerResourceSetInterface::resourcesDenied)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMediaPlayerResourceSetInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerResourceSetInterface::resourcesReleased)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QMediaPlayerResourceSetInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlayerResourceSetInterface::availabilityChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QMediaPlayerResourceSetInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QMediaPlayerResourceSetInterface.data,
      qt_meta_data_QMediaPlayerResourceSetInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMediaPlayerResourceSetInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMediaPlayerResourceSetInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMediaPlayerResourceSetInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMediaPlayerResourceSetInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QMediaPlayerResourceSetInterface::resourcesGranted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMediaPlayerResourceSetInterface::resourcesLost()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMediaPlayerResourceSetInterface::resourcesDenied()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QMediaPlayerResourceSetInterface::resourcesReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QMediaPlayerResourceSetInterface::availabilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
