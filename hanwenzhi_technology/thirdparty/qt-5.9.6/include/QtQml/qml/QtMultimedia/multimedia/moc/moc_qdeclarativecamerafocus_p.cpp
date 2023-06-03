/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativecamerafocus_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarativecamerafocus_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativecamerafocus_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeCameraFocus_t {
    QByteArrayData data[29];
    char stringdata0[444];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeCameraFocus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeCameraFocus_t qt_meta_stringdata_QDeclarativeCameraFocus = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QDeclarativeCameraFocus"
QT_MOC_LITERAL(1, 24, 16), // "focusModeChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 9), // "FocusMode"
QT_MOC_LITERAL(4, 52, 21), // "focusPointModeChanged"
QT_MOC_LITERAL(5, 74, 14), // "FocusPointMode"
QT_MOC_LITERAL(6, 89, 23), // "customFocusPointChanged"
QT_MOC_LITERAL(7, 113, 12), // "setFocusMode"
QT_MOC_LITERAL(8, 126, 17), // "setFocusPointMode"
QT_MOC_LITERAL(9, 144, 4), // "mode"
QT_MOC_LITERAL(10, 149, 19), // "setCustomFocusPoint"
QT_MOC_LITERAL(11, 169, 5), // "point"
QT_MOC_LITERAL(12, 175, 16), // "updateFocusZones"
QT_MOC_LITERAL(13, 192, 20), // "isFocusModeSupported"
QT_MOC_LITERAL(14, 213, 25), // "isFocusPointModeSupported"
QT_MOC_LITERAL(15, 239, 9), // "focusMode"
QT_MOC_LITERAL(16, 249, 14), // "focusPointMode"
QT_MOC_LITERAL(17, 264, 16), // "customFocusPoint"
QT_MOC_LITERAL(18, 281, 10), // "focusZones"
QT_MOC_LITERAL(19, 292, 11), // "FocusManual"
QT_MOC_LITERAL(20, 304, 15), // "FocusHyperfocal"
QT_MOC_LITERAL(21, 320, 13), // "FocusInfinity"
QT_MOC_LITERAL(22, 334, 9), // "FocusAuto"
QT_MOC_LITERAL(23, 344, 15), // "FocusContinuous"
QT_MOC_LITERAL(24, 360, 10), // "FocusMacro"
QT_MOC_LITERAL(25, 371, 14), // "FocusPointAuto"
QT_MOC_LITERAL(26, 386, 16), // "FocusPointCenter"
QT_MOC_LITERAL(27, 403, 23), // "FocusPointFaceDetection"
QT_MOC_LITERAL(28, 427, 16) // "FocusPointCustom"

    },
    "QDeclarativeCameraFocus\0focusModeChanged\0"
    "\0FocusMode\0focusPointModeChanged\0"
    "FocusPointMode\0customFocusPointChanged\0"
    "setFocusMode\0setFocusPointMode\0mode\0"
    "setCustomFocusPoint\0point\0updateFocusZones\0"
    "isFocusModeSupported\0isFocusPointModeSupported\0"
    "focusMode\0focusPointMode\0customFocusPoint\0"
    "focusZones\0FocusManual\0FocusHyperfocal\0"
    "FocusInfinity\0FocusAuto\0FocusContinuous\0"
    "FocusMacro\0FocusPointAuto\0FocusPointCenter\0"
    "FocusPointFaceDetection\0FocusPointCustom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeCameraFocus[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   84, // properties
       2,  100, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   68,    2, 0x0a /* Public */,
       8,    1,   71,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x0a /* Public */,
      12,    0,   77,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      13,    1,   78,    2, 0x02 /* Public */,
      14,    1,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QPointF,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    9,
    QMetaType::Void, QMetaType::QPointF,   11,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 3,    9,
    QMetaType::Bool, 0x80000000 | 5,    9,

 // properties: name, type, flags
      15, 0x80000000 | 3, 0x0049510b,
      16, 0x80000000 | 5, 0x0049510b,
      17, QMetaType::QPointF, 0x00495103,
      18, QMetaType::QObjectStar, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,

 // enums: name, flags, count, data
       3, 0x0,    6,  108,
       5, 0x0,    4,  120,

 // enum data: key, value
      19, uint(QDeclarativeCameraFocus::FocusManual),
      20, uint(QDeclarativeCameraFocus::FocusHyperfocal),
      21, uint(QDeclarativeCameraFocus::FocusInfinity),
      22, uint(QDeclarativeCameraFocus::FocusAuto),
      23, uint(QDeclarativeCameraFocus::FocusContinuous),
      24, uint(QDeclarativeCameraFocus::FocusMacro),
      25, uint(QDeclarativeCameraFocus::FocusPointAuto),
      26, uint(QDeclarativeCameraFocus::FocusPointCenter),
      27, uint(QDeclarativeCameraFocus::FocusPointFaceDetection),
      28, uint(QDeclarativeCameraFocus::FocusPointCustom),

       0        // eod
};

void QDeclarativeCameraFocus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeCameraFocus *_t = static_cast<QDeclarativeCameraFocus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->focusModeChanged((*reinterpret_cast< FocusMode(*)>(_a[1]))); break;
        case 1: _t->focusPointModeChanged((*reinterpret_cast< FocusPointMode(*)>(_a[1]))); break;
        case 2: _t->customFocusPointChanged((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 3: _t->setFocusMode((*reinterpret_cast< FocusMode(*)>(_a[1]))); break;
        case 4: _t->setFocusPointMode((*reinterpret_cast< FocusPointMode(*)>(_a[1]))); break;
        case 5: _t->setCustomFocusPoint((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 6: _t->updateFocusZones(); break;
        case 7: { bool _r = _t->isFocusModeSupported((*reinterpret_cast< FocusMode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->isFocusPointModeSupported((*reinterpret_cast< FocusPointMode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeCameraFocus::*_t)(FocusMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeCameraFocus::focusModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeCameraFocus::*_t)(FocusPointMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeCameraFocus::focusPointModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeCameraFocus::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeCameraFocus::customFocusPointChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeCameraFocus *_t = static_cast<QDeclarativeCameraFocus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< FocusMode*>(_v) = _t->focusMode(); break;
        case 1: *reinterpret_cast< FocusPointMode*>(_v) = _t->focusPointMode(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->customFocusPoint(); break;
        case 3: *reinterpret_cast< QObject**>(_v) = _t->focusZones(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeCameraFocus *_t = static_cast<QDeclarativeCameraFocus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFocusMode(*reinterpret_cast< FocusMode*>(_v)); break;
        case 1: _t->setFocusPointMode(*reinterpret_cast< FocusPointMode*>(_v)); break;
        case 2: _t->setCustomFocusPoint(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeCameraFocus::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeCameraFocus.data,
      qt_meta_data_QDeclarativeCameraFocus,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeCameraFocus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeCameraFocus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeCameraFocus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeCameraFocus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QDeclarativeCameraFocus::focusModeChanged(FocusMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeCameraFocus::focusPointModeChanged(FocusPointMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDeclarativeCameraFocus::customFocusPointChanged(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_FocusZonesModel_t {
    QByteArrayData data[5];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FocusZonesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FocusZonesModel_t qt_meta_stringdata_FocusZonesModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FocusZonesModel"
QT_MOC_LITERAL(1, 16, 13), // "setFocusZones"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "QCameraFocusZoneList"
QT_MOC_LITERAL(4, 52, 5) // "zones"

    },
    "FocusZonesModel\0setFocusZones\0\0"
    "QCameraFocusZoneList\0zones"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FocusZonesModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void FocusZonesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FocusZonesModel *_t = static_cast<FocusZonesModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFocusZones((*reinterpret_cast< const QCameraFocusZoneList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FocusZonesModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_FocusZonesModel.data,
      qt_meta_data_FocusZonesModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FocusZonesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FocusZonesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FocusZonesModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int FocusZonesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
