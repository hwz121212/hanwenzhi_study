/****************************************************************************
** Meta object code from reading C++ file 'qquickitemanimation_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickitemanimation_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickitemanimation_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickParentAnimation_t {
    QByteArrayData data[9];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickParentAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickParentAnimation_t qt_meta_stringdata_QQuickParentAnimation = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickParentAnimation"
QT_MOC_LITERAL(1, 22, 13), // "targetChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "newParentChanged"
QT_MOC_LITERAL(4, 54, 10), // "viaChanged"
QT_MOC_LITERAL(5, 65, 6), // "target"
QT_MOC_LITERAL(6, 72, 11), // "QQuickItem*"
QT_MOC_LITERAL(7, 84, 9), // "newParent"
QT_MOC_LITERAL(8, 94, 3) // "via"

    },
    "QQuickParentAnimation\0targetChanged\0"
    "\0newParentChanged\0viaChanged\0target\0"
    "QQuickItem*\0newParent\0via"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickParentAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0049500b,
       7, 0x80000000 | 6, 0x0049510b,
       8, 0x80000000 | 6, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QQuickParentAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickParentAnimation *_t = static_cast<QQuickParentAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->targetChanged(); break;
        case 1: _t->newParentChanged(); break;
        case 2: _t->viaChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickParentAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickParentAnimation::targetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickParentAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickParentAnimation::newParentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickParentAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickParentAnimation::viaChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickParentAnimation *_t = static_cast<QQuickParentAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->target(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->newParent(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->via(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickParentAnimation *_t = static_cast<QQuickParentAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTargetObject(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1: _t->setNewParent(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 2: _t->setVia(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickParentAnimation::staticMetaObject = {
    { &QQuickAnimationGroup::staticMetaObject, qt_meta_stringdata_QQuickParentAnimation.data,
      qt_meta_data_QQuickParentAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickParentAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickParentAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickParentAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickAnimationGroup::qt_metacast(_clname);
}

int QQuickParentAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAnimationGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void QQuickParentAnimation::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickParentAnimation::newParentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickParentAnimation::viaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_QQuickAnchorAnimation_t {
    QByteArrayData data[8];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickAnchorAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickAnchorAnimation_t qt_meta_stringdata_QQuickAnchorAnimation = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickAnchorAnimation"
QT_MOC_LITERAL(1, 22, 15), // "durationChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "easingChanged"
QT_MOC_LITERAL(4, 53, 7), // "targets"
QT_MOC_LITERAL(5, 61, 28), // "QQmlListProperty<QQuickItem>"
QT_MOC_LITERAL(6, 90, 8), // "duration"
QT_MOC_LITERAL(7, 99, 6) // "easing"

    },
    "QQuickAnchorAnimation\0durationChanged\0"
    "\0easingChanged\0targets\0"
    "QQmlListProperty<QQuickItem>\0duration\0"
    "easing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickAnchorAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       3,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QEasingCurve,    2,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00095009,
       6, QMetaType::Int, 0x00495103,
       7, QMetaType::QEasingCurve, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

void QQuickAnchorAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickAnchorAnimation *_t = static_cast<QQuickAnchorAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->durationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->easingChanged((*reinterpret_cast< const QEasingCurve(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickAnchorAnimation::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnchorAnimation::durationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickAnchorAnimation::*_t)(const QEasingCurve & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnchorAnimation::easingChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QQuickItem> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickAnchorAnimation *_t = static_cast<QQuickAnchorAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QQuickItem>*>(_v) = _t->targets(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        case 2: *reinterpret_cast< QEasingCurve*>(_v) = _t->easing(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickAnchorAnimation *_t = static_cast<QQuickAnchorAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setDuration(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setEasing(*reinterpret_cast< QEasingCurve*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickAnchorAnimation::staticMetaObject = {
    { &QQuickAbstractAnimation::staticMetaObject, qt_meta_stringdata_QQuickAnchorAnimation.data,
      qt_meta_data_QQuickAnchorAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickAnchorAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickAnchorAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickAnchorAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickAbstractAnimation::qt_metacast(_clname);
}

int QQuickAnchorAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAbstractAnimation::qt_metacall(_c, _id, _a);
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
void QQuickAnchorAnimation::durationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickAnchorAnimation::easingChanged(const QEasingCurve & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QQuickPathAnimation_t {
    QByteArrayData data[28];
    char stringdata0[394];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPathAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPathAnimation_t qt_meta_stringdata_QQuickPathAnimation = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickPathAnimation"
QT_MOC_LITERAL(1, 20, 15), // "durationChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "easingChanged"
QT_MOC_LITERAL(4, 51, 11), // "pathChanged"
QT_MOC_LITERAL(5, 63, 13), // "targetChanged"
QT_MOC_LITERAL(6, 77, 18), // "orientationChanged"
QT_MOC_LITERAL(7, 96, 11), // "Orientation"
QT_MOC_LITERAL(8, 108, 18), // "anchorPointChanged"
QT_MOC_LITERAL(9, 127, 31), // "orientationEntryDurationChanged"
QT_MOC_LITERAL(10, 159, 30), // "orientationExitDurationChanged"
QT_MOC_LITERAL(11, 190, 18), // "endRotationChanged"
QT_MOC_LITERAL(12, 209, 8), // "duration"
QT_MOC_LITERAL(13, 218, 6), // "easing"
QT_MOC_LITERAL(14, 225, 4), // "path"
QT_MOC_LITERAL(15, 230, 11), // "QQuickPath*"
QT_MOC_LITERAL(16, 242, 6), // "target"
QT_MOC_LITERAL(17, 249, 11), // "QQuickItem*"
QT_MOC_LITERAL(18, 261, 11), // "orientation"
QT_MOC_LITERAL(19, 273, 11), // "anchorPoint"
QT_MOC_LITERAL(20, 285, 24), // "orientationEntryDuration"
QT_MOC_LITERAL(21, 310, 23), // "orientationExitDuration"
QT_MOC_LITERAL(22, 334, 11), // "endRotation"
QT_MOC_LITERAL(23, 346, 5), // "Fixed"
QT_MOC_LITERAL(24, 352, 10), // "RightFirst"
QT_MOC_LITERAL(25, 363, 9), // "LeftFirst"
QT_MOC_LITERAL(26, 373, 11), // "BottomFirst"
QT_MOC_LITERAL(27, 385, 8) // "TopFirst"

    },
    "QQuickPathAnimation\0durationChanged\0"
    "\0easingChanged\0pathChanged\0targetChanged\0"
    "orientationChanged\0Orientation\0"
    "anchorPointChanged\0orientationEntryDurationChanged\0"
    "orientationExitDurationChanged\0"
    "endRotationChanged\0duration\0easing\0"
    "path\0QQuickPath*\0target\0QQuickItem*\0"
    "orientation\0anchorPoint\0"
    "orientationEntryDuration\0"
    "orientationExitDuration\0endRotation\0"
    "Fixed\0RightFirst\0LeftFirst\0BottomFirst\0"
    "TopFirst"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPathAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       9,   82, // properties
       1,  118, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,
       4,    0,   65,    2, 0x06 /* Public */,
       5,    0,   66,    2, 0x06 /* Public */,
       6,    1,   67,    2, 0x06 /* Public */,
       8,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,
      11,    1,   79,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QEasingCurve,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QPointF,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal,    2,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::QEasingCurve, 0x00495103,
      14, 0x80000000 | 15, 0x0049510b,
      16, 0x80000000 | 17, 0x0049500b,
      18, 0x80000000 | 7, 0x0049510b,
      19, QMetaType::QPointF, 0x00495103,
      20, QMetaType::Int, 0x00495103,
      21, QMetaType::Int, 0x00495103,
      22, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,

 // enums: name, flags, count, data
       7, 0x0,    5,  122,

 // enum data: key, value
      23, uint(QQuickPathAnimation::Fixed),
      24, uint(QQuickPathAnimation::RightFirst),
      25, uint(QQuickPathAnimation::LeftFirst),
      26, uint(QQuickPathAnimation::BottomFirst),
      27, uint(QQuickPathAnimation::TopFirst),

       0        // eod
};

void QQuickPathAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPathAnimation *_t = static_cast<QQuickPathAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->durationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->easingChanged((*reinterpret_cast< const QEasingCurve(*)>(_a[1]))); break;
        case 2: _t->pathChanged(); break;
        case 3: _t->targetChanged(); break;
        case 4: _t->orientationChanged((*reinterpret_cast< Orientation(*)>(_a[1]))); break;
        case 5: _t->anchorPointChanged((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 6: _t->orientationEntryDurationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->orientationExitDurationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->endRotationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPathAnimation::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathAnimation::durationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPathAnimation::*_t)(const QEasingCurve & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathAnimation::easingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPathAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathAnimation::pathChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPathAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathAnimation::targetChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickPathAnimation::*_t)(Orientation );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathAnimation::orientationChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickPathAnimation::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathAnimation::anchorPointChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickPathAnimation::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathAnimation::orientationEntryDurationChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickPathAnimation::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathAnimation::orientationExitDurationChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QQuickPathAnimation::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathAnimation::endRotationChanged)) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPathAnimation *_t = static_cast<QQuickPathAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        case 1: *reinterpret_cast< QEasingCurve*>(_v) = _t->easing(); break;
        case 2: *reinterpret_cast< QQuickPath**>(_v) = _t->path(); break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _t->target(); break;
        case 4: *reinterpret_cast< Orientation*>(_v) = _t->orientation(); break;
        case 5: *reinterpret_cast< QPointF*>(_v) = _t->anchorPoint(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->orientationEntryDuration(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->orientationExitDuration(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->endRotation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPathAnimation *_t = static_cast<QQuickPathAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDuration(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setEasing(*reinterpret_cast< QEasingCurve*>(_v)); break;
        case 2: _t->setPath(*reinterpret_cast< QQuickPath**>(_v)); break;
        case 3: _t->setTargetObject(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 4: _t->setOrientation(*reinterpret_cast< Orientation*>(_v)); break;
        case 5: _t->setAnchorPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 6: _t->setOrientationEntryDuration(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setOrientationExitDuration(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setEndRotation(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickPathAnimation::staticMetaObject = {
    { &QQuickAbstractAnimation::staticMetaObject, qt_meta_stringdata_QQuickPathAnimation.data,
      qt_meta_data_QQuickPathAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPathAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPathAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPathAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickAbstractAnimation::qt_metacast(_clname);
}

int QQuickPathAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAbstractAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickPathAnimation::durationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickPathAnimation::easingChanged(const QEasingCurve & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickPathAnimation::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPathAnimation::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickPathAnimation::orientationChanged(Orientation _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QQuickPathAnimation::anchorPointChanged(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QQuickPathAnimation::orientationEntryDurationChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QQuickPathAnimation::orientationExitDurationChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QQuickPathAnimation::endRotationChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
