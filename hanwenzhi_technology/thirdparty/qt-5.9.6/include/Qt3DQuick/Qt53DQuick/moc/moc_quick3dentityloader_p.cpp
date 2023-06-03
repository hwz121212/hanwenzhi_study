/****************************************************************************
** Meta object code from reading C++ file 'quick3dentityloader_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DQuick/private/quick3dentityloader_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quick3dentityloader_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DCore__Quick__Quick3DEntityLoader_t {
    QByteArrayData data[15];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__Quick__Quick3DEntityLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__Quick__Quick3DEntityLoader_t qt_meta_stringdata_Qt3DCore__Quick__Quick3DEntityLoader = {
    {
QT_MOC_LITERAL(0, 0, 36), // "Qt3DCore::Quick::Quick3DEntit..."
QT_MOC_LITERAL(1, 37, 13), // "entityChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 13), // "sourceChanged"
QT_MOC_LITERAL(4, 66, 13), // "statusChanged"
QT_MOC_LITERAL(5, 80, 6), // "Status"
QT_MOC_LITERAL(6, 87, 6), // "status"
QT_MOC_LITERAL(7, 94, 25), // "_q_componentStatusChanged"
QT_MOC_LITERAL(8, 120, 21), // "QQmlComponent::Status"
QT_MOC_LITERAL(9, 142, 6), // "entity"
QT_MOC_LITERAL(10, 149, 6), // "source"
QT_MOC_LITERAL(11, 156, 4), // "Null"
QT_MOC_LITERAL(12, 161, 7), // "Loading"
QT_MOC_LITERAL(13, 169, 5), // "Ready"
QT_MOC_LITERAL(14, 175, 5) // "Error"

    },
    "Qt3DCore::Quick::Quick3DEntityLoader\0"
    "entityChanged\0\0sourceChanged\0statusChanged\0"
    "Status\0status\0_q_componentStatusChanged\0"
    "QQmlComponent::Status\0entity\0source\0"
    "Null\0Loading\0Ready\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__Quick__Quick3DEntityLoader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   42, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    2,

 // properties: name, type, flags
       9, QMetaType::QObjectStar, 0x00495001,
      10, QMetaType::QUrl, 0x00495103,
       6, 0x80000000 | 5, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
       5, 0x0,    4,   58,

 // enum data: key, value
      11, uint(Qt3DCore::Quick::Quick3DEntityLoader::Null),
      12, uint(Qt3DCore::Quick::Quick3DEntityLoader::Loading),
      13, uint(Qt3DCore::Quick::Quick3DEntityLoader::Ready),
      14, uint(Qt3DCore::Quick::Quick3DEntityLoader::Error),

       0        // eod
};

void Qt3DCore::Quick::Quick3DEntityLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Quick3DEntityLoader *_t = static_cast<Quick3DEntityLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->entityChanged(); break;
        case 1: _t->sourceChanged(); break;
        case 2: _t->statusChanged((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 3: _t->d_func()->_q_componentStatusChanged((*reinterpret_cast< QQmlComponent::Status(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Quick3DEntityLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Quick3DEntityLoader::entityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Quick3DEntityLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Quick3DEntityLoader::sourceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Quick3DEntityLoader::*_t)(Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Quick3DEntityLoader::statusChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Quick3DEntityLoader *_t = static_cast<Quick3DEntityLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->entity(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 2: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Quick3DEntityLoader *_t = static_cast<Quick3DEntityLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DCore::Quick::Quick3DEntityLoader::staticMetaObject = {
    { &QEntity::staticMetaObject, qt_meta_stringdata_Qt3DCore__Quick__Quick3DEntityLoader.data,
      qt_meta_data_Qt3DCore__Quick__Quick3DEntityLoader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DCore::Quick::Quick3DEntityLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DCore::Quick::Quick3DEntityLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DCore__Quick__Quick3DEntityLoader.stringdata0))
        return static_cast<void*>(this);
    return QEntity::qt_metacast(_clname);
}

int Qt3DCore::Quick::Quick3DEntityLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEntity::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DCore::Quick::Quick3DEntityLoader::entityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Qt3DCore::Quick::Quick3DEntityLoader::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Qt3DCore::Quick::Quick3DEntityLoader::statusChanged(Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
