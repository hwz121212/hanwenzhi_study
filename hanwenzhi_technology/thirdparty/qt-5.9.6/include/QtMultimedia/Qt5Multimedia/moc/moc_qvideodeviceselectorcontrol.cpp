/****************************************************************************
** Meta object code from reading C++ file 'qvideodeviceselectorcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qvideodeviceselectorcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvideodeviceselectorcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QVideoDeviceSelectorControl_t {
    QByteArrayData data[7];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVideoDeviceSelectorControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVideoDeviceSelectorControl_t qt_meta_stringdata_QVideoDeviceSelectorControl = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QVideoDeviceSelectorControl"
QT_MOC_LITERAL(1, 28, 21), // "selectedDeviceChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5), // "index"
QT_MOC_LITERAL(4, 57, 10), // "deviceName"
QT_MOC_LITERAL(5, 68, 14), // "devicesChanged"
QT_MOC_LITERAL(6, 83, 17) // "setSelectedDevice"

    },
    "QVideoDeviceSelectorControl\0"
    "selectedDeviceChanged\0\0index\0deviceName\0"
    "devicesChanged\0setSelectedDevice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVideoDeviceSelectorControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       1,    1,   37,    2, 0x06 /* Public */,
       5,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void QVideoDeviceSelectorControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVideoDeviceSelectorControl *_t = static_cast<QVideoDeviceSelectorControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedDeviceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->selectedDeviceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->devicesChanged(); break;
        case 3: _t->setSelectedDevice((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QVideoDeviceSelectorControl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVideoDeviceSelectorControl::selectedDeviceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QVideoDeviceSelectorControl::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVideoDeviceSelectorControl::selectedDeviceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QVideoDeviceSelectorControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVideoDeviceSelectorControl::devicesChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QVideoDeviceSelectorControl::staticMetaObject = {
    { &QMediaControl::staticMetaObject, qt_meta_stringdata_QVideoDeviceSelectorControl.data,
      qt_meta_data_QVideoDeviceSelectorControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QVideoDeviceSelectorControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVideoDeviceSelectorControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QVideoDeviceSelectorControl.stringdata0))
        return static_cast<void*>(this);
    return QMediaControl::qt_metacast(_clname);
}

int QVideoDeviceSelectorControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaControl::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QVideoDeviceSelectorControl::selectedDeviceChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QVideoDeviceSelectorControl::selectedDeviceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QVideoDeviceSelectorControl::devicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
