/****************************************************************************
** Meta object code from reading C++ file 'qquickanimator_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickanimator_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickanimator_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickAnimator_t {
    QByteArrayData data[14];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickAnimator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickAnimator_t qt_meta_stringdata_QQuickAnimator = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickAnimator"
QT_MOC_LITERAL(1, 15, 17), // "targetItemChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "QQuickItem*"
QT_MOC_LITERAL(4, 46, 15), // "durationChanged"
QT_MOC_LITERAL(5, 62, 8), // "duration"
QT_MOC_LITERAL(6, 71, 13), // "easingChanged"
QT_MOC_LITERAL(7, 85, 5), // "curve"
QT_MOC_LITERAL(8, 91, 9), // "toChanged"
QT_MOC_LITERAL(9, 101, 2), // "to"
QT_MOC_LITERAL(10, 104, 11), // "fromChanged"
QT_MOC_LITERAL(11, 116, 4), // "from"
QT_MOC_LITERAL(12, 121, 6), // "target"
QT_MOC_LITERAL(13, 128, 6) // "easing"

    },
    "QQuickAnimator\0targetItemChanged\0\0"
    "QQuickItem*\0durationChanged\0duration\0"
    "easingChanged\0curve\0toChanged\0to\0"
    "fromChanged\0from\0target\0easing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickAnimator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,
       8,    1,   48,    2, 0x06 /* Public */,
      10,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QEasingCurve,    7,
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void, QMetaType::QReal,   11,

 // properties: name, type, flags
      12, 0x80000000 | 3, 0x0049500b,
      13, QMetaType::QEasingCurve, 0x00495103,
       5, QMetaType::Int, 0x00495103,
       9, QMetaType::QReal, 0x00495103,
      11, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       1,
       3,
       4,

       0        // eod
};

void QQuickAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickAnimator *_t = static_cast<QQuickAnimator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->targetItemChanged((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 1: _t->durationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->easingChanged((*reinterpret_cast< const QEasingCurve(*)>(_a[1]))); break;
        case 3: _t->toChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->fromChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickAnimator::*_t)(QQuickItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimator::targetItemChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickAnimator::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimator::durationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickAnimator::*_t)(const QEasingCurve & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimator::easingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickAnimator::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimator::toChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickAnimator::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimator::fromChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickAnimator *_t = static_cast<QQuickAnimator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->targetItem(); break;
        case 1: *reinterpret_cast< QEasingCurve*>(_v) = _t->easing(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->to(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->from(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickAnimator *_t = static_cast<QQuickAnimator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTargetItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1: _t->setEasing(*reinterpret_cast< QEasingCurve*>(_v)); break;
        case 2: _t->setDuration(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setTo(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setFrom(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickAnimator::staticMetaObject = {
    { &QQuickAbstractAnimation::staticMetaObject, qt_meta_stringdata_QQuickAnimator.data,
      qt_meta_data_QQuickAnimator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickAnimator.stringdata0))
        return static_cast<void*>(this);
    return QQuickAbstractAnimation::qt_metacast(_clname);
}

int QQuickAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAbstractAnimation::qt_metacall(_c, _id, _a);
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
void QQuickAnimator::targetItemChanged(QQuickItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickAnimator::durationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickAnimator::easingChanged(const QEasingCurve & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickAnimator::toChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickAnimator::fromChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_QQuickScaleAnimator_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickScaleAnimator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickScaleAnimator_t qt_meta_stringdata_QQuickScaleAnimator = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QQuickScaleAnimator"

    },
    "QQuickScaleAnimator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickScaleAnimator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QQuickScaleAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickScaleAnimator::staticMetaObject = {
    { &QQuickAnimator::staticMetaObject, qt_meta_stringdata_QQuickScaleAnimator.data,
      qt_meta_data_QQuickScaleAnimator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickScaleAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickScaleAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickScaleAnimator.stringdata0))
        return static_cast<void*>(this);
    return QQuickAnimator::qt_metacast(_clname);
}

int QQuickScaleAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAnimator::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickXAnimator_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickXAnimator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickXAnimator_t qt_meta_stringdata_QQuickXAnimator = {
    {
QT_MOC_LITERAL(0, 0, 15) // "QQuickXAnimator"

    },
    "QQuickXAnimator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickXAnimator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QQuickXAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickXAnimator::staticMetaObject = {
    { &QQuickAnimator::staticMetaObject, qt_meta_stringdata_QQuickXAnimator.data,
      qt_meta_data_QQuickXAnimator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickXAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickXAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickXAnimator.stringdata0))
        return static_cast<void*>(this);
    return QQuickAnimator::qt_metacast(_clname);
}

int QQuickXAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAnimator::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickYAnimator_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickYAnimator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickYAnimator_t qt_meta_stringdata_QQuickYAnimator = {
    {
QT_MOC_LITERAL(0, 0, 15) // "QQuickYAnimator"

    },
    "QQuickYAnimator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickYAnimator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QQuickYAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickYAnimator::staticMetaObject = {
    { &QQuickAnimator::staticMetaObject, qt_meta_stringdata_QQuickYAnimator.data,
      qt_meta_data_QQuickYAnimator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickYAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickYAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickYAnimator.stringdata0))
        return static_cast<void*>(this);
    return QQuickAnimator::qt_metacast(_clname);
}

int QQuickYAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAnimator::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickOpacityAnimator_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickOpacityAnimator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickOpacityAnimator_t qt_meta_stringdata_QQuickOpacityAnimator = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QQuickOpacityAnimator"

    },
    "QQuickOpacityAnimator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickOpacityAnimator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QQuickOpacityAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickOpacityAnimator::staticMetaObject = {
    { &QQuickAnimator::staticMetaObject, qt_meta_stringdata_QQuickOpacityAnimator.data,
      qt_meta_data_QQuickOpacityAnimator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickOpacityAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickOpacityAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickOpacityAnimator.stringdata0))
        return static_cast<void*>(this);
    return QQuickAnimator::qt_metacast(_clname);
}

int QQuickOpacityAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAnimator::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickRotationAnimator_t {
    QByteArrayData data[10];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickRotationAnimator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickRotationAnimator_t qt_meta_stringdata_QQuickRotationAnimator = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QQuickRotationAnimator"
QT_MOC_LITERAL(1, 23, 16), // "directionChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 17), // "RotationDirection"
QT_MOC_LITERAL(4, 59, 3), // "dir"
QT_MOC_LITERAL(5, 63, 9), // "direction"
QT_MOC_LITERAL(6, 73, 9), // "Numerical"
QT_MOC_LITERAL(7, 83, 8), // "Shortest"
QT_MOC_LITERAL(8, 92, 9), // "Clockwise"
QT_MOC_LITERAL(9, 102, 16) // "Counterclockwise"

    },
    "QQuickRotationAnimator\0directionChanged\0"
    "\0RotationDirection\0dir\0direction\0"
    "Numerical\0Shortest\0Clockwise\0"
    "Counterclockwise"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickRotationAnimator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,

 // enums: name, flags, count, data
       3, 0x0,    4,   30,

 // enum data: key, value
       6, uint(QQuickRotationAnimator::Numerical),
       7, uint(QQuickRotationAnimator::Shortest),
       8, uint(QQuickRotationAnimator::Clockwise),
       9, uint(QQuickRotationAnimator::Counterclockwise),

       0        // eod
};

void QQuickRotationAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickRotationAnimator *_t = static_cast<QQuickRotationAnimator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->directionChanged((*reinterpret_cast< RotationDirection(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickRotationAnimator::*_t)(RotationDirection );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRotationAnimator::directionChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickRotationAnimator *_t = static_cast<QQuickRotationAnimator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< RotationDirection*>(_v) = _t->direction(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickRotationAnimator *_t = static_cast<QQuickRotationAnimator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDirection(*reinterpret_cast< RotationDirection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickRotationAnimator::staticMetaObject = {
    { &QQuickAnimator::staticMetaObject, qt_meta_stringdata_QQuickRotationAnimator.data,
      qt_meta_data_QQuickRotationAnimator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickRotationAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickRotationAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickRotationAnimator.stringdata0))
        return static_cast<void*>(this);
    return QQuickAnimator::qt_metacast(_clname);
}

int QQuickRotationAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAnimator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickRotationAnimator::directionChanged(RotationDirection _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QQuickUniformAnimator_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickUniformAnimator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickUniformAnimator_t qt_meta_stringdata_QQuickUniformAnimator = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickUniformAnimator"
QT_MOC_LITERAL(1, 22, 14), // "uniformChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7) // "uniform"

    },
    "QQuickUniformAnimator\0uniformChanged\0"
    "\0uniform"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickUniformAnimator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QQuickUniformAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickUniformAnimator *_t = static_cast<QQuickUniformAnimator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uniformChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickUniformAnimator::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickUniformAnimator::uniformChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickUniformAnimator *_t = static_cast<QQuickUniformAnimator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->uniform(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickUniformAnimator *_t = static_cast<QQuickUniformAnimator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUniform(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickUniformAnimator::staticMetaObject = {
    { &QQuickAnimator::staticMetaObject, qt_meta_stringdata_QQuickUniformAnimator.data,
      qt_meta_data_QQuickUniformAnimator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickUniformAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickUniformAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickUniformAnimator.stringdata0))
        return static_cast<void*>(this);
    return QQuickAnimator::qt_metacast(_clname);
}

int QQuickUniformAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAnimator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickUniformAnimator::uniformChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
