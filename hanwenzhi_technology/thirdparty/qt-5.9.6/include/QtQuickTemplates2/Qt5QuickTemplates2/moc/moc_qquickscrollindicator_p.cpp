/****************************************************************************
** Meta object code from reading C++ file 'qquickscrollindicator_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickscrollindicator_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickscrollindicator_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickScrollIndicator_t {
    QByteArrayData data[13];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickScrollIndicator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickScrollIndicator_t qt_meta_stringdata_QQuickScrollIndicator = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickScrollIndicator"
QT_MOC_LITERAL(1, 22, 11), // "sizeChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "positionChanged"
QT_MOC_LITERAL(4, 51, 13), // "activeChanged"
QT_MOC_LITERAL(5, 65, 18), // "orientationChanged"
QT_MOC_LITERAL(6, 84, 7), // "setSize"
QT_MOC_LITERAL(7, 92, 4), // "size"
QT_MOC_LITERAL(8, 97, 11), // "setPosition"
QT_MOC_LITERAL(9, 109, 8), // "position"
QT_MOC_LITERAL(10, 118, 6), // "active"
QT_MOC_LITERAL(11, 125, 11), // "orientation"
QT_MOC_LITERAL(12, 137, 15) // "Qt::Orientation"

    },
    "QQuickScrollIndicator\0sizeChanged\0\0"
    "positionChanged\0activeChanged\0"
    "orientationChanged\0setSize\0size\0"
    "setPosition\0position\0active\0orientation\0"
    "Qt::Orientation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickScrollIndicator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   48,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    9,

 // properties: name, type, flags
       7, QMetaType::QReal, 0x00495903,
       9, QMetaType::QReal, 0x00495903,
      10, QMetaType::Bool, 0x00495903,
      11, 0x80000000 | 12, 0x0049590b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QQuickScrollIndicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickScrollIndicator *_t = static_cast<QQuickScrollIndicator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChanged(); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->activeChanged(); break;
        case 3: _t->orientationChanged(); break;
        case 4: _t->setSize((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setPosition((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickScrollIndicator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScrollIndicator::sizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickScrollIndicator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScrollIndicator::positionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickScrollIndicator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScrollIndicator::activeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickScrollIndicator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScrollIndicator::orientationChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickScrollIndicator *_t = static_cast<QQuickScrollIndicator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->size(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->position(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 3: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickScrollIndicator *_t = static_cast<QQuickScrollIndicator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSize(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setPosition(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickScrollIndicator::staticMetaObject = {
    { &QQuickControl::staticMetaObject, qt_meta_stringdata_QQuickScrollIndicator.data,
      qt_meta_data_QQuickScrollIndicator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickScrollIndicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickScrollIndicator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickScrollIndicator.stringdata0))
        return static_cast<void*>(this);
    return QQuickControl::qt_metacast(_clname);
}

int QQuickScrollIndicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickScrollIndicator::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickScrollIndicator::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickScrollIndicator::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickScrollIndicator::orientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_QQuickScrollIndicatorAttached_t {
    QByteArrayData data[7];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickScrollIndicatorAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickScrollIndicatorAttached_t qt_meta_stringdata_QQuickScrollIndicatorAttached = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QQuickScrollIndicatorAttached"
QT_MOC_LITERAL(1, 30, 17), // "horizontalChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 15), // "verticalChanged"
QT_MOC_LITERAL(4, 65, 10), // "horizontal"
QT_MOC_LITERAL(5, 76, 22), // "QQuickScrollIndicator*"
QT_MOC_LITERAL(6, 99, 8) // "vertical"

    },
    "QQuickScrollIndicatorAttached\0"
    "horizontalChanged\0\0verticalChanged\0"
    "horizontal\0QQuickScrollIndicator*\0"
    "vertical"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickScrollIndicatorAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x0049590b,
       6, 0x80000000 | 5, 0x0049590b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QQuickScrollIndicatorAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickScrollIndicatorAttached *_t = static_cast<QQuickScrollIndicatorAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->horizontalChanged(); break;
        case 1: _t->verticalChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickScrollIndicatorAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScrollIndicatorAttached::horizontalChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickScrollIndicatorAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScrollIndicatorAttached::verticalChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickScrollIndicator* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickScrollIndicatorAttached *_t = static_cast<QQuickScrollIndicatorAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickScrollIndicator**>(_v) = _t->horizontal(); break;
        case 1: *reinterpret_cast< QQuickScrollIndicator**>(_v) = _t->vertical(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickScrollIndicatorAttached *_t = static_cast<QQuickScrollIndicatorAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHorizontal(*reinterpret_cast< QQuickScrollIndicator**>(_v)); break;
        case 1: _t->setVertical(*reinterpret_cast< QQuickScrollIndicator**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickScrollIndicatorAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickScrollIndicatorAttached.data,
      qt_meta_data_QQuickScrollIndicatorAttached,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickScrollIndicatorAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickScrollIndicatorAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickScrollIndicatorAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickScrollIndicatorAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickScrollIndicatorAttached::horizontalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickScrollIndicatorAttached::verticalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
