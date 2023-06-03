/****************************************************************************
** Meta object code from reading C++ file 'qquickpageindicator_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickpageindicator_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpageindicator_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPageIndicator_t {
    QByteArrayData data[11];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPageIndicator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPageIndicator_t qt_meta_stringdata_QQuickPageIndicator = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickPageIndicator"
QT_MOC_LITERAL(1, 20, 12), // "countChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "currentIndexChanged"
QT_MOC_LITERAL(4, 54, 18), // "interactiveChanged"
QT_MOC_LITERAL(5, 73, 15), // "delegateChanged"
QT_MOC_LITERAL(6, 89, 5), // "count"
QT_MOC_LITERAL(7, 95, 12), // "currentIndex"
QT_MOC_LITERAL(8, 108, 11), // "interactive"
QT_MOC_LITERAL(9, 120, 8), // "delegate"
QT_MOC_LITERAL(10, 129, 14) // "QQmlComponent*"

    },
    "QQuickPageIndicator\0countChanged\0\0"
    "currentIndexChanged\0interactiveChanged\0"
    "delegateChanged\0count\0currentIndex\0"
    "interactive\0delegate\0QQmlComponent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPageIndicator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00495903,
       7, QMetaType::Int, 0x00495903,
       8, QMetaType::Bool, 0x00495903,
       9, 0x80000000 | 10, 0x0049590b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QQuickPageIndicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPageIndicator *_t = static_cast<QQuickPageIndicator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->currentIndexChanged(); break;
        case 2: _t->interactiveChanged(); break;
        case 3: _t->delegateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPageIndicator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPageIndicator::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPageIndicator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPageIndicator::currentIndexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPageIndicator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPageIndicator::interactiveChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPageIndicator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPageIndicator::delegateChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPageIndicator *_t = static_cast<QQuickPageIndicator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isInteractive(); break;
        case 3: *reinterpret_cast< QQmlComponent**>(_v) = _t->delegate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPageIndicator *_t = static_cast<QQuickPageIndicator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCount(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setDelegate(*reinterpret_cast< QQmlComponent**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickPageIndicator::staticMetaObject = {
    { &QQuickControl::staticMetaObject, qt_meta_stringdata_QQuickPageIndicator.data,
      qt_meta_data_QQuickPageIndicator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPageIndicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPageIndicator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPageIndicator.stringdata0))
        return static_cast<void*>(this);
    return QQuickControl::qt_metacast(_clname);
}

int QQuickPageIndicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickControl::qt_metacall(_c, _id, _a);
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
void QQuickPageIndicator::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPageIndicator::currentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPageIndicator::interactiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPageIndicator::delegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
