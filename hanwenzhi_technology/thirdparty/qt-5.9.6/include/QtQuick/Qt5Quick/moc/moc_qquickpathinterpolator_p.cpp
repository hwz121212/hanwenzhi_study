/****************************************************************************
** Meta object code from reading C++ file 'qquickpathinterpolator_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickpathinterpolator_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpathinterpolator_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPathInterpolator_t {
    QByteArrayData data[14];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPathInterpolator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPathInterpolator_t qt_meta_stringdata_QQuickPathInterpolator = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QQuickPathInterpolator"
QT_MOC_LITERAL(1, 23, 11), // "pathChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "progressChanged"
QT_MOC_LITERAL(4, 52, 8), // "xChanged"
QT_MOC_LITERAL(5, 61, 8), // "yChanged"
QT_MOC_LITERAL(6, 70, 12), // "angleChanged"
QT_MOC_LITERAL(7, 83, 14), // "_q_pathUpdated"
QT_MOC_LITERAL(8, 98, 4), // "path"
QT_MOC_LITERAL(9, 103, 11), // "QQuickPath*"
QT_MOC_LITERAL(10, 115, 8), // "progress"
QT_MOC_LITERAL(11, 124, 1), // "x"
QT_MOC_LITERAL(12, 126, 1), // "y"
QT_MOC_LITERAL(13, 128, 5) // "angle"

    },
    "QQuickPathInterpolator\0pathChanged\0\0"
    "progressChanged\0xChanged\0yChanged\0"
    "angleChanged\0_q_pathUpdated\0path\0"
    "QQuickPath*\0progress\0x\0y\0angle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPathInterpolator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x0049510b,
      10, QMetaType::QReal, 0x00495103,
      11, QMetaType::QReal, 0x00495001,
      12, QMetaType::QReal, 0x00495001,
      13, QMetaType::QReal, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void QQuickPathInterpolator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPathInterpolator *_t = static_cast<QQuickPathInterpolator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pathChanged(); break;
        case 1: _t->progressChanged(); break;
        case 2: _t->xChanged(); break;
        case 3: _t->yChanged(); break;
        case 4: _t->angleChanged(); break;
        case 5: _t->_q_pathUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPathInterpolator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathInterpolator::pathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPathInterpolator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathInterpolator::progressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPathInterpolator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathInterpolator::xChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPathInterpolator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathInterpolator::yChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickPathInterpolator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathInterpolator::angleChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPathInterpolator *_t = static_cast<QQuickPathInterpolator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickPath**>(_v) = _t->path(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->progress(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->angle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPathInterpolator *_t = static_cast<QQuickPathInterpolator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPath(*reinterpret_cast< QQuickPath**>(_v)); break;
        case 1: _t->setProgress(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickPathInterpolator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickPathInterpolator.data,
      qt_meta_data_QQuickPathInterpolator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPathInterpolator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPathInterpolator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPathInterpolator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPathInterpolator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickPathInterpolator::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPathInterpolator::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPathInterpolator::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPathInterpolator::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickPathInterpolator::angleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
