/****************************************************************************
** Meta object code from reading C++ file 'qquickgeomapgesturearea_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qquickgeomapgesturearea_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickgeomapgesturearea_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoMapPinchEvent_t {
    QByteArrayData data[7];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoMapPinchEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoMapPinchEvent_t qt_meta_stringdata_QGeoMapPinchEvent = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QGeoMapPinchEvent"
QT_MOC_LITERAL(1, 18, 6), // "center"
QT_MOC_LITERAL(2, 25, 5), // "angle"
QT_MOC_LITERAL(3, 31, 6), // "point1"
QT_MOC_LITERAL(4, 38, 6), // "point2"
QT_MOC_LITERAL(5, 45, 10), // "pointCount"
QT_MOC_LITERAL(6, 56, 8) // "accepted"

    },
    "QGeoMapPinchEvent\0center\0angle\0point1\0"
    "point2\0pointCount\0accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoMapPinchEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPointF, 0x00095001,
       2, QMetaType::QReal, 0x00095001,
       3, QMetaType::QPointF, 0x00095001,
       4, QMetaType::QPointF, 0x00095001,
       5, QMetaType::Int, 0x00095001,
       6, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QGeoMapPinchEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QGeoMapPinchEvent *_t = static_cast<QGeoMapPinchEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->center(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->angle(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->point1(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = _t->point2(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->pointCount(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->accepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGeoMapPinchEvent *_t = static_cast<QGeoMapPinchEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QGeoMapPinchEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoMapPinchEvent.data,
      qt_meta_data_QGeoMapPinchEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoMapPinchEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoMapPinchEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoMapPinchEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGeoMapPinchEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickGeoMapGestureArea_t {
    QByteArrayData data[44];
    char stringdata0[683];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickGeoMapGestureArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickGeoMapGestureArea_t qt_meta_stringdata_QQuickGeoMapGestureArea = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQuickGeoMapGestureArea"
QT_MOC_LITERAL(1, 24, 16), // "panActiveChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 18), // "pinchActiveChanged"
QT_MOC_LITERAL(4, 61, 21), // "rotationActiveChanged"
QT_MOC_LITERAL(5, 83, 17), // "tiltActiveChanged"
QT_MOC_LITERAL(6, 101, 14), // "enabledChanged"
QT_MOC_LITERAL(7, 116, 29), // "maximumZoomLevelChangeChanged"
QT_MOC_LITERAL(8, 146, 23), // "acceptedGesturesChanged"
QT_MOC_LITERAL(9, 170, 24), // "flickDecelerationChanged"
QT_MOC_LITERAL(10, 195, 12), // "pinchStarted"
QT_MOC_LITERAL(11, 208, 18), // "QGeoMapPinchEvent*"
QT_MOC_LITERAL(12, 227, 5), // "pinch"
QT_MOC_LITERAL(13, 233, 12), // "pinchUpdated"
QT_MOC_LITERAL(14, 246, 13), // "pinchFinished"
QT_MOC_LITERAL(15, 260, 10), // "panStarted"
QT_MOC_LITERAL(16, 271, 11), // "panFinished"
QT_MOC_LITERAL(17, 283, 12), // "flickStarted"
QT_MOC_LITERAL(18, 296, 13), // "flickFinished"
QT_MOC_LITERAL(19, 310, 15), // "rotationStarted"
QT_MOC_LITERAL(20, 326, 15), // "rotationUpdated"
QT_MOC_LITERAL(21, 342, 16), // "rotationFinished"
QT_MOC_LITERAL(22, 359, 11), // "tiltStarted"
QT_MOC_LITERAL(23, 371, 11), // "tiltUpdated"
QT_MOC_LITERAL(24, 383, 12), // "tiltFinished"
QT_MOC_LITERAL(25, 396, 22), // "preventStealingChanged"
QT_MOC_LITERAL(26, 419, 27), // "handleFlickAnimationStopped"
QT_MOC_LITERAL(27, 447, 7), // "enabled"
QT_MOC_LITERAL(28, 455, 11), // "pinchActive"
QT_MOC_LITERAL(29, 467, 9), // "panActive"
QT_MOC_LITERAL(30, 477, 14), // "rotationActive"
QT_MOC_LITERAL(31, 492, 10), // "tiltActive"
QT_MOC_LITERAL(32, 503, 16), // "acceptedGestures"
QT_MOC_LITERAL(33, 520, 16), // "AcceptedGestures"
QT_MOC_LITERAL(34, 537, 22), // "maximumZoomLevelChange"
QT_MOC_LITERAL(35, 560, 17), // "flickDeceleration"
QT_MOC_LITERAL(36, 578, 15), // "preventStealing"
QT_MOC_LITERAL(37, 594, 13), // "GeoMapGesture"
QT_MOC_LITERAL(38, 608, 9), // "NoGesture"
QT_MOC_LITERAL(39, 618, 12), // "PinchGesture"
QT_MOC_LITERAL(40, 631, 10), // "PanGesture"
QT_MOC_LITERAL(41, 642, 12), // "FlickGesture"
QT_MOC_LITERAL(42, 655, 15), // "RotationGesture"
QT_MOC_LITERAL(43, 671, 11) // "TiltGesture"

    },
    "QQuickGeoMapGestureArea\0panActiveChanged\0"
    "\0pinchActiveChanged\0rotationActiveChanged\0"
    "tiltActiveChanged\0enabledChanged\0"
    "maximumZoomLevelChangeChanged\0"
    "acceptedGesturesChanged\0"
    "flickDecelerationChanged\0pinchStarted\0"
    "QGeoMapPinchEvent*\0pinch\0pinchUpdated\0"
    "pinchFinished\0panStarted\0panFinished\0"
    "flickStarted\0flickFinished\0rotationStarted\0"
    "rotationUpdated\0rotationFinished\0"
    "tiltStarted\0tiltUpdated\0tiltFinished\0"
    "preventStealingChanged\0"
    "handleFlickAnimationStopped\0enabled\0"
    "pinchActive\0panActive\0rotationActive\0"
    "tiltActive\0acceptedGestures\0"
    "AcceptedGestures\0maximumZoomLevelChange\0"
    "flickDeceleration\0preventStealing\0"
    "GeoMapGesture\0NoGesture\0PinchGesture\0"
    "PanGesture\0FlickGesture\0RotationGesture\0"
    "TiltGesture"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickGeoMapGestureArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       9,  170, // properties
       2,  215, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  129,    2, 0x06 /* Public */,
       3,    0,  130,    2, 0x06 /* Public */,
       4,    0,  131,    2, 0x06 /* Public */,
       5,    0,  132,    2, 0x06 /* Public */,
       6,    0,  133,    2, 0x06 /* Public */,
       7,    0,  134,    2, 0x06 /* Public */,
       8,    0,  135,    2, 0x06 /* Public */,
       9,    0,  136,    2, 0x06 /* Public */,
      10,    1,  137,    2, 0x06 /* Public */,
      13,    1,  140,    2, 0x06 /* Public */,
      14,    1,  143,    2, 0x06 /* Public */,
      15,    0,  146,    2, 0x06 /* Public */,
      16,    0,  147,    2, 0x06 /* Public */,
      17,    0,  148,    2, 0x06 /* Public */,
      18,    0,  149,    2, 0x06 /* Public */,
      19,    1,  150,    2, 0x06 /* Public */,
      20,    1,  153,    2, 0x06 /* Public */,
      21,    1,  156,    2, 0x06 /* Public */,
      22,    1,  159,    2, 0x06 /* Public */,
      23,    1,  162,    2, 0x06 /* Public */,
      24,    1,  165,    2, 0x06 /* Public */,
      25,    0,  168,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    0,  169,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      27, QMetaType::Bool, 0x00495103,
      28, QMetaType::Bool, 0x00495001,
      29, QMetaType::Bool, 0x00495001,
      30, QMetaType::Bool, 0x00495001,
      31, QMetaType::Bool, 0x00495001,
      32, 0x80000000 | 33, 0x0049510b,
      34, QMetaType::QReal, 0x00495103,
      35, QMetaType::QReal, 0x00495103,
      36, QMetaType::Bool, 0x00c95103,

 // properties: notify_signal_id
       4,
       1,
       0,
       2,
       3,
       6,
       5,
       7,
      21,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

 // enums: name, flags, count, data
      37, 0x0,    6,  223,
      33, 0x1,    6,  235,

 // enum data: key, value
      38, uint(QQuickGeoMapGestureArea::NoGesture),
      39, uint(QQuickGeoMapGestureArea::PinchGesture),
      40, uint(QQuickGeoMapGestureArea::PanGesture),
      41, uint(QQuickGeoMapGestureArea::FlickGesture),
      42, uint(QQuickGeoMapGestureArea::RotationGesture),
      43, uint(QQuickGeoMapGestureArea::TiltGesture),
      38, uint(QQuickGeoMapGestureArea::NoGesture),
      39, uint(QQuickGeoMapGestureArea::PinchGesture),
      40, uint(QQuickGeoMapGestureArea::PanGesture),
      41, uint(QQuickGeoMapGestureArea::FlickGesture),
      42, uint(QQuickGeoMapGestureArea::RotationGesture),
      43, uint(QQuickGeoMapGestureArea::TiltGesture),

       0        // eod
};

void QQuickGeoMapGestureArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickGeoMapGestureArea *_t = static_cast<QQuickGeoMapGestureArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->panActiveChanged(); break;
        case 1: _t->pinchActiveChanged(); break;
        case 2: _t->rotationActiveChanged(); break;
        case 3: _t->tiltActiveChanged(); break;
        case 4: _t->enabledChanged(); break;
        case 5: _t->maximumZoomLevelChangeChanged(); break;
        case 6: _t->acceptedGesturesChanged(); break;
        case 7: _t->flickDecelerationChanged(); break;
        case 8: _t->pinchStarted((*reinterpret_cast< QGeoMapPinchEvent*(*)>(_a[1]))); break;
        case 9: _t->pinchUpdated((*reinterpret_cast< QGeoMapPinchEvent*(*)>(_a[1]))); break;
        case 10: _t->pinchFinished((*reinterpret_cast< QGeoMapPinchEvent*(*)>(_a[1]))); break;
        case 11: _t->panStarted(); break;
        case 12: _t->panFinished(); break;
        case 13: _t->flickStarted(); break;
        case 14: _t->flickFinished(); break;
        case 15: _t->rotationStarted((*reinterpret_cast< QGeoMapPinchEvent*(*)>(_a[1]))); break;
        case 16: _t->rotationUpdated((*reinterpret_cast< QGeoMapPinchEvent*(*)>(_a[1]))); break;
        case 17: _t->rotationFinished((*reinterpret_cast< QGeoMapPinchEvent*(*)>(_a[1]))); break;
        case 18: _t->tiltStarted((*reinterpret_cast< QGeoMapPinchEvent*(*)>(_a[1]))); break;
        case 19: _t->tiltUpdated((*reinterpret_cast< QGeoMapPinchEvent*(*)>(_a[1]))); break;
        case 20: _t->tiltFinished((*reinterpret_cast< QGeoMapPinchEvent*(*)>(_a[1]))); break;
        case 21: _t->preventStealingChanged(); break;
        case 22: _t->handleFlickAnimationStopped(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoMapPinchEvent* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoMapPinchEvent* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoMapPinchEvent* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoMapPinchEvent* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoMapPinchEvent* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoMapPinchEvent* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoMapPinchEvent* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoMapPinchEvent* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoMapPinchEvent* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickGeoMapGestureArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::panActiveChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::pinchActiveChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::rotationActiveChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::tiltActiveChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::enabledChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::maximumZoomLevelChangeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::acceptedGesturesChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::flickDecelerationChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)(QGeoMapPinchEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::pinchStarted)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)(QGeoMapPinchEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::pinchUpdated)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)(QGeoMapPinchEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::pinchFinished)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::panStarted)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::panFinished)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::flickStarted)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::flickFinished)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)(QGeoMapPinchEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::rotationStarted)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)(QGeoMapPinchEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::rotationUpdated)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)(QGeoMapPinchEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::rotationFinished)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)(QGeoMapPinchEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::tiltStarted)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)(QGeoMapPinchEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::tiltUpdated)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)(QGeoMapPinchEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::tiltFinished)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (QQuickGeoMapGestureArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGeoMapGestureArea::preventStealingChanged)) {
                *result = 21;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickGeoMapGestureArea *_t = static_cast<QQuickGeoMapGestureArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isPinchActive(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isPanActive(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isRotationActive(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isTiltActive(); break;
        case 5: *reinterpret_cast<int*>(_v) = QFlag(_t->acceptedGestures()); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->maximumZoomLevelChange(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->flickDeceleration(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->preventStealing(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickGeoMapGestureArea *_t = static_cast<QQuickGeoMapGestureArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setAcceptedGestures(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 6: _t->setMaximumZoomLevelChange(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setFlickDeceleration(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setPreventStealing(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickGeoMapGestureArea::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickGeoMapGestureArea.data,
      qt_meta_data_QQuickGeoMapGestureArea,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickGeoMapGestureArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickGeoMapGestureArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickGeoMapGestureArea.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickGeoMapGestureArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
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
void QQuickGeoMapGestureArea::panActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickGeoMapGestureArea::pinchActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickGeoMapGestureArea::rotationActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickGeoMapGestureArea::tiltActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickGeoMapGestureArea::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickGeoMapGestureArea::maximumZoomLevelChangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickGeoMapGestureArea::acceptedGesturesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickGeoMapGestureArea::flickDecelerationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QQuickGeoMapGestureArea::pinchStarted(QGeoMapPinchEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QQuickGeoMapGestureArea::pinchUpdated(QGeoMapPinchEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QQuickGeoMapGestureArea::pinchFinished(QGeoMapPinchEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QQuickGeoMapGestureArea::panStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QQuickGeoMapGestureArea::panFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QQuickGeoMapGestureArea::flickStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QQuickGeoMapGestureArea::flickFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void QQuickGeoMapGestureArea::rotationStarted(QGeoMapPinchEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QQuickGeoMapGestureArea::rotationUpdated(QGeoMapPinchEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QQuickGeoMapGestureArea::rotationFinished(QGeoMapPinchEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QQuickGeoMapGestureArea::tiltStarted(QGeoMapPinchEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QQuickGeoMapGestureArea::tiltUpdated(QGeoMapPinchEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QQuickGeoMapGestureArea::tiltFinished(QGeoMapPinchEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QQuickGeoMapGestureArea::preventStealingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
