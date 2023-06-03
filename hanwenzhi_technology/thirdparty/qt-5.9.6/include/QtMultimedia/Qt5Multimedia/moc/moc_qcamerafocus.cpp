/****************************************************************************
** Meta object code from reading C++ file 'qcamerafocus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcamerafocus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcamerafocus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCameraFocus_t {
    QByteArrayData data[27];
    char stringdata0[408];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCameraFocus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCameraFocus_t qt_meta_stringdata_QCameraFocus = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QCameraFocus"
QT_MOC_LITERAL(1, 13, 18), // "opticalZoomChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "digitalZoomChanged"
QT_MOC_LITERAL(4, 52, 17), // "focusZonesChanged"
QT_MOC_LITERAL(5, 70, 25), // "maximumOpticalZoomChanged"
QT_MOC_LITERAL(6, 96, 25), // "maximumDigitalZoomChanged"
QT_MOC_LITERAL(7, 122, 9), // "focusMode"
QT_MOC_LITERAL(8, 132, 10), // "FocusModes"
QT_MOC_LITERAL(9, 143, 14), // "focusPointMode"
QT_MOC_LITERAL(10, 158, 14), // "FocusPointMode"
QT_MOC_LITERAL(11, 173, 16), // "customFocusPoint"
QT_MOC_LITERAL(12, 190, 10), // "focusZones"
QT_MOC_LITERAL(13, 201, 20), // "QCameraFocusZoneList"
QT_MOC_LITERAL(14, 222, 11), // "opticalZoom"
QT_MOC_LITERAL(15, 234, 11), // "digitalZoom"
QT_MOC_LITERAL(16, 246, 9), // "FocusMode"
QT_MOC_LITERAL(17, 256, 11), // "ManualFocus"
QT_MOC_LITERAL(18, 268, 15), // "HyperfocalFocus"
QT_MOC_LITERAL(19, 284, 13), // "InfinityFocus"
QT_MOC_LITERAL(20, 298, 9), // "AutoFocus"
QT_MOC_LITERAL(21, 308, 15), // "ContinuousFocus"
QT_MOC_LITERAL(22, 324, 10), // "MacroFocus"
QT_MOC_LITERAL(23, 335, 14), // "FocusPointAuto"
QT_MOC_LITERAL(24, 350, 16), // "FocusPointCenter"
QT_MOC_LITERAL(25, 367, 23), // "FocusPointFaceDetection"
QT_MOC_LITERAL(26, 391, 16) // "FocusPointCustom"

    },
    "QCameraFocus\0opticalZoomChanged\0\0"
    "digitalZoomChanged\0focusZonesChanged\0"
    "maximumOpticalZoomChanged\0"
    "maximumDigitalZoomChanged\0focusMode\0"
    "FocusModes\0focusPointMode\0FocusPointMode\0"
    "customFocusPoint\0focusZones\0"
    "QCameraFocusZoneList\0opticalZoom\0"
    "digitalZoom\0FocusMode\0ManualFocus\0"
    "HyperfocalFocus\0InfinityFocus\0AutoFocus\0"
    "ContinuousFocus\0MacroFocus\0FocusPointAuto\0"
    "FocusPointCenter\0FocusPointFaceDetection\0"
    "FocusPointCustom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCameraFocus[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   52, // properties
       2,   76, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,
       4,    0,   45,    2, 0x06 /* Public */,
       5,    1,   46,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal,    2,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0009510b,
       9, 0x80000000 | 10, 0x0009510b,
      11, QMetaType::QPointF, 0x00095103,
      12, 0x80000000 | 13, 0x00495009,
      14, QMetaType::QReal, 0x00495001,
      15, QMetaType::QReal, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       2,
       0,
       1,

 // enums: name, flags, count, data
      16, 0x0,    6,   84,
      10, 0x0,    4,   96,

 // enum data: key, value
      17, uint(QCameraFocus::ManualFocus),
      18, uint(QCameraFocus::HyperfocalFocus),
      19, uint(QCameraFocus::InfinityFocus),
      20, uint(QCameraFocus::AutoFocus),
      21, uint(QCameraFocus::ContinuousFocus),
      22, uint(QCameraFocus::MacroFocus),
      23, uint(QCameraFocus::FocusPointAuto),
      24, uint(QCameraFocus::FocusPointCenter),
      25, uint(QCameraFocus::FocusPointFaceDetection),
      26, uint(QCameraFocus::FocusPointCustom),

       0        // eod
};

void QCameraFocus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCameraFocus *_t = static_cast<QCameraFocus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->opticalZoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->digitalZoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->focusZonesChanged(); break;
        case 3: _t->maximumOpticalZoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->maximumDigitalZoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCameraFocus::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraFocus::opticalZoomChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCameraFocus::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraFocus::digitalZoomChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCameraFocus::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraFocus::focusZonesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCameraFocus::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraFocus::maximumOpticalZoomChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QCameraFocus::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCameraFocus::maximumDigitalZoomChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QCameraFocus *_t = static_cast<QCameraFocus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< FocusModes*>(_v) = _t->focusMode(); break;
        case 1: *reinterpret_cast< FocusPointMode*>(_v) = _t->focusPointMode(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->customFocusPoint(); break;
        case 3: *reinterpret_cast< QCameraFocusZoneList*>(_v) = _t->focusZones(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->opticalZoom(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->digitalZoom(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QCameraFocus *_t = static_cast<QCameraFocus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFocusMode(*reinterpret_cast< FocusModes*>(_v)); break;
        case 1: _t->setFocusPointMode(*reinterpret_cast< FocusPointMode*>(_v)); break;
        case 2: _t->setCustomFocusPoint(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QCameraFocus::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCameraFocus.data,
      qt_meta_data_QCameraFocus,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCameraFocus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCameraFocus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCameraFocus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCameraFocus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QCameraFocus::opticalZoomChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCameraFocus::digitalZoomChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCameraFocus::focusZonesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QCameraFocus::maximumOpticalZoomChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCameraFocus::maximumDigitalZoomChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
