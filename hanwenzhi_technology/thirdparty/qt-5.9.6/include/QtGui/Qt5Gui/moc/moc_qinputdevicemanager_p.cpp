/****************************************************************************
** Meta object code from reading C++ file 'qinputdevicemanager_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtGui/private/qinputdevicemanager_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinputdevicemanager_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInputDeviceManager_t {
    QByteArrayData data[7];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInputDeviceManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInputDeviceManager_t qt_meta_stringdata_QInputDeviceManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QInputDeviceManager"
QT_MOC_LITERAL(1, 20, 17), // "deviceListChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 31), // "QInputDeviceManager::DeviceType"
QT_MOC_LITERAL(4, 71, 4), // "type"
QT_MOC_LITERAL(5, 76, 29), // "cursorPositionChangeRequested"
QT_MOC_LITERAL(6, 106, 3) // "pos"

    },
    "QInputDeviceManager\0deviceListChanged\0"
    "\0QInputDeviceManager::DeviceType\0type\0"
    "cursorPositionChangeRequested\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInputDeviceManager[] = {

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
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPoint,    6,

       0        // eod
};

void QInputDeviceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QInputDeviceManager *_t = static_cast<QInputDeviceManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceListChanged((*reinterpret_cast< QInputDeviceManager::DeviceType(*)>(_a[1]))); break;
        case 1: _t->cursorPositionChangeRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInputDeviceManager::DeviceType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QInputDeviceManager::*_t)(QInputDeviceManager::DeviceType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QInputDeviceManager::deviceListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QInputDeviceManager::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QInputDeviceManager::cursorPositionChangeRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QInputDeviceManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QInputDeviceManager.data,
      qt_meta_data_QInputDeviceManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QInputDeviceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInputDeviceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInputDeviceManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInputDeviceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QInputDeviceManager::deviceListChanged(QInputDeviceManager::DeviceType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QInputDeviceManager::cursorPositionChangeRequested(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
