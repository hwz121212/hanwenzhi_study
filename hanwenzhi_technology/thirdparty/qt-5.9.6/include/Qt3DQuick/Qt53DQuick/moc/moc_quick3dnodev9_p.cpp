/****************************************************************************
** Meta object code from reading C++ file 'quick3dnodev9_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DQuick/private/quick3dnodev9_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quick3dnodev9_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DCore__Quick__Quick3DNodeV9_t {
    QByteArrayData data[16];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__Quick__Quick3DNodeV9_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__Quick__Quick3DNodeV9_t qt_meta_stringdata_Qt3DCore__Quick__Quick3DNodeV9 = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Qt3DCore::Quick::Quick3DNodeV9"
QT_MOC_LITERAL(1, 31, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 47, 4), // "data"
QT_MOC_LITERAL(3, 52, 32), // "propertyTrackingOverridesChanged"
QT_MOC_LITERAL(4, 85, 0), // ""
QT_MOC_LITERAL(5, 86, 8), // "QJSValue"
QT_MOC_LITERAL(6, 95, 5), // "value"
QT_MOC_LITERAL(7, 101, 28), // "setPropertyTrackingOverrides"
QT_MOC_LITERAL(8, 130, 13), // "childAppended"
QT_MOC_LITERAL(9, 144, 3), // "idx"
QT_MOC_LITERAL(10, 148, 5), // "child"
QT_MOC_LITERAL(11, 154, 12), // "childRemoved"
QT_MOC_LITERAL(12, 167, 25), // "propertyTrackingOverrides"
QT_MOC_LITERAL(13, 193, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(14, 219, 10), // "childNodes"
QT_MOC_LITERAL(15, 230, 33) // "QQmlListProperty<Qt3DCore::QN..."

    },
    "Qt3DCore::Quick::Quick3DNodeV9\0"
    "DefaultProperty\0data\0"
    "propertyTrackingOverridesChanged\0\0"
    "QJSValue\0value\0setPropertyTrackingOverrides\0"
    "childAppended\0idx\0child\0childRemoved\0"
    "propertyTrackingOverrides\0"
    "QQmlListProperty<QObject>\0childNodes\0"
    "QQmlListProperty<Qt3DCore::QNode>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__Quick__Quick3DNodeV9[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       3,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   36,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   39,    4, 0x08 /* Private */,
       8,    2,   42,    4, 0x08 /* Private */,
      11,    2,   47,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QObjectStar,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QObjectStar,    9,   10,

 // properties: name, type, flags
      12, 0x80000000 | 5, 0x0049510b,
       2, 0x80000000 | 13, 0x00095009,
      14, 0x80000000 | 15, 0x00095009,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void Qt3DCore::Quick::Quick3DNodeV9::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Quick3DNodeV9 *_t = static_cast<Quick3DNodeV9 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyTrackingOverridesChanged((*reinterpret_cast< const QJSValue(*)>(_a[1]))); break;
        case 1: _t->setPropertyTrackingOverrides((*reinterpret_cast< const QJSValue(*)>(_a[1]))); break;
        case 2: _t->childAppended((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 3: _t->childRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Quick3DNodeV9::*_t)(const QJSValue & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Quick3DNodeV9::propertyTrackingOverridesChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Quick3DNodeV9 *_t = static_cast<Quick3DNodeV9 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QJSValue*>(_v) = _t->propertyTrackingOverrides(); break;
        case 1: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->data(); break;
        case 2: *reinterpret_cast< QQmlListProperty<Qt3DCore::QNode>*>(_v) = _t->childNodes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Quick3DNodeV9 *_t = static_cast<Quick3DNodeV9 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPropertyTrackingOverrides(*reinterpret_cast< QJSValue*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DCore::Quick::Quick3DNodeV9::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DCore__Quick__Quick3DNodeV9.data,
      qt_meta_data_Qt3DCore__Quick__Quick3DNodeV9,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DCore::Quick::Quick3DNodeV9::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DCore::Quick::Quick3DNodeV9::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DCore__Quick__Quick3DNodeV9.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DCore::Quick::Quick3DNodeV9::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
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
void Qt3DCore::Quick::Quick3DNodeV9::propertyTrackingOverridesChanged(const QJSValue & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
