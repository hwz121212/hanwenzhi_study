/****************************************************************************
** Meta object code from reading C++ file 'qquickdrag_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickdrag_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickdrag_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickDragMimeData_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickDragMimeData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickDragMimeData_t qt_meta_stringdata_QQuickDragMimeData = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QQuickDragMimeData"

    },
    "QQuickDragMimeData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickDragMimeData[] = {

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

void QQuickDragMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickDragMimeData::staticMetaObject = {
    { &QMimeData::staticMetaObject, qt_meta_stringdata_QQuickDragMimeData.data,
      qt_meta_data_QQuickDragMimeData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickDragMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickDragMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickDragMimeData.stringdata0))
        return static_cast<void*>(this);
    return QMimeData::qt_metacast(_clname);
}

int QQuickDragMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickDrag_t {
    QByteArrayData data[32];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickDrag_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickDrag_t qt_meta_stringdata_QQuickDrag = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QQuickDrag"
QT_MOC_LITERAL(1, 11, 13), // "targetChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "axisChanged"
QT_MOC_LITERAL(4, 38, 15), // "minimumXChanged"
QT_MOC_LITERAL(5, 54, 15), // "maximumXChanged"
QT_MOC_LITERAL(6, 70, 15), // "minimumYChanged"
QT_MOC_LITERAL(7, 86, 15), // "maximumYChanged"
QT_MOC_LITERAL(8, 102, 13), // "activeChanged"
QT_MOC_LITERAL(9, 116, 21), // "filterChildrenChanged"
QT_MOC_LITERAL(10, 138, 15), // "smoothedChanged"
QT_MOC_LITERAL(11, 154, 16), // "thresholdChanged"
QT_MOC_LITERAL(12, 171, 6), // "target"
QT_MOC_LITERAL(13, 178, 11), // "QQuickItem*"
QT_MOC_LITERAL(14, 190, 4), // "axis"
QT_MOC_LITERAL(15, 195, 4), // "Axis"
QT_MOC_LITERAL(16, 200, 8), // "minimumX"
QT_MOC_LITERAL(17, 209, 8), // "maximumX"
QT_MOC_LITERAL(18, 218, 8), // "minimumY"
QT_MOC_LITERAL(19, 227, 8), // "maximumY"
QT_MOC_LITERAL(20, 236, 6), // "active"
QT_MOC_LITERAL(21, 243, 14), // "filterChildren"
QT_MOC_LITERAL(22, 258, 8), // "smoothed"
QT_MOC_LITERAL(23, 267, 9), // "threshold"
QT_MOC_LITERAL(24, 277, 8), // "DragType"
QT_MOC_LITERAL(25, 286, 4), // "None"
QT_MOC_LITERAL(26, 291, 9), // "Automatic"
QT_MOC_LITERAL(27, 301, 8), // "Internal"
QT_MOC_LITERAL(28, 310, 5), // "XAxis"
QT_MOC_LITERAL(29, 316, 5), // "YAxis"
QT_MOC_LITERAL(30, 322, 9), // "XAndYAxis"
QT_MOC_LITERAL(31, 332, 9) // "XandYAxis"

    },
    "QQuickDrag\0targetChanged\0\0axisChanged\0"
    "minimumXChanged\0maximumXChanged\0"
    "minimumYChanged\0maximumYChanged\0"
    "activeChanged\0filterChildrenChanged\0"
    "smoothedChanged\0thresholdChanged\0"
    "target\0QQuickItem*\0axis\0Axis\0minimumX\0"
    "maximumX\0minimumY\0maximumY\0active\0"
    "filterChildren\0smoothed\0threshold\0"
    "DragType\0None\0Automatic\0Internal\0XAxis\0"
    "YAxis\0XAndYAxis\0XandYAxis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickDrag[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   74, // properties
       2,  114, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,
       9,    0,   71,    2, 0x06 /* Public */,
      10,    0,   72,    2, 0x06 /* Public */,
      11,    0,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x0049510f,
      14, 0x80000000 | 15, 0x0049510b,
      16, QMetaType::QReal, 0x00495003,
      17, QMetaType::QReal, 0x00495003,
      18, QMetaType::QReal, 0x00495003,
      19, QMetaType::QReal, 0x00495003,
      20, QMetaType::Bool, 0x00495001,
      21, QMetaType::Bool, 0x00495103,
      22, QMetaType::Bool, 0x00495103,
      23, QMetaType::QReal, 0x00495107,

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
       9,

 // enums: name, flags, count, data
      24, 0x0,    3,  122,
      15, 0x0,    4,  128,

 // enum data: key, value
      25, uint(QQuickDrag::None),
      26, uint(QQuickDrag::Automatic),
      27, uint(QQuickDrag::Internal),
      28, uint(QQuickDrag::XAxis),
      29, uint(QQuickDrag::YAxis),
      30, uint(QQuickDrag::XAndYAxis),
      31, uint(QQuickDrag::XandYAxis),

       0        // eod
};

void QQuickDrag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickDrag *_t = static_cast<QQuickDrag *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->targetChanged(); break;
        case 1: _t->axisChanged(); break;
        case 2: _t->minimumXChanged(); break;
        case 3: _t->maximumXChanged(); break;
        case 4: _t->minimumYChanged(); break;
        case 5: _t->maximumYChanged(); break;
        case 6: _t->activeChanged(); break;
        case 7: _t->filterChildrenChanged(); break;
        case 8: _t->smoothedChanged(); break;
        case 9: _t->thresholdChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickDrag::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrag::targetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickDrag::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrag::axisChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickDrag::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrag::minimumXChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickDrag::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrag::maximumXChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickDrag::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrag::minimumYChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickDrag::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrag::maximumYChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickDrag::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrag::activeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickDrag::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrag::filterChildrenChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QQuickDrag::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrag::smoothedChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QQuickDrag::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDrag::thresholdChanged)) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickDrag *_t = static_cast<QQuickDrag *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->target(); break;
        case 1: *reinterpret_cast< Axis*>(_v) = _t->axis(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->xmin(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->xmax(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->ymin(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->ymax(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->filterChildren(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->smoothed(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->threshold(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickDrag *_t = static_cast<QQuickDrag *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTarget(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1: _t->setAxis(*reinterpret_cast< Axis*>(_v)); break;
        case 2: _t->setXmin(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setXmax(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setYmin(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setYmax(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setFilterChildren(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setSmoothed(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setThreshold(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickDrag *_t = static_cast<QQuickDrag *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetTarget(); break;
        case 9: _t->resetThreshold(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickDrag::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickDrag.data,
      qt_meta_data_QQuickDrag,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickDrag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickDrag::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickDrag.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickDrag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickDrag::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickDrag::axisChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickDrag::minimumXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickDrag::maximumXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickDrag::minimumYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickDrag::maximumYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickDrag::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickDrag::filterChildrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QQuickDrag::smoothedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QQuickDrag::thresholdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
struct qt_meta_stringdata_QQuickDragAttached_t {
    QByteArrayData data[33];
    char stringdata0[414];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickDragAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickDragAttached_t qt_meta_stringdata_QQuickDragAttached = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQuickDragAttached"
QT_MOC_LITERAL(1, 19, 11), // "dragStarted"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "dragFinished"
QT_MOC_LITERAL(4, 45, 14), // "Qt::DropAction"
QT_MOC_LITERAL(5, 60, 10), // "dropAction"
QT_MOC_LITERAL(6, 71, 13), // "activeChanged"
QT_MOC_LITERAL(7, 85, 13), // "sourceChanged"
QT_MOC_LITERAL(8, 99, 13), // "targetChanged"
QT_MOC_LITERAL(9, 113, 14), // "hotSpotChanged"
QT_MOC_LITERAL(10, 128, 18), // "imageSourceChanged"
QT_MOC_LITERAL(11, 147, 11), // "keysChanged"
QT_MOC_LITERAL(12, 159, 15), // "mimeDataChanged"
QT_MOC_LITERAL(13, 175, 23), // "supportedActionsChanged"
QT_MOC_LITERAL(14, 199, 21), // "proposedActionChanged"
QT_MOC_LITERAL(15, 221, 15), // "dragTypeChanged"
QT_MOC_LITERAL(16, 237, 5), // "start"
QT_MOC_LITERAL(17, 243, 15), // "QQmlV4Function*"
QT_MOC_LITERAL(18, 259, 9), // "startDrag"
QT_MOC_LITERAL(19, 269, 6), // "cancel"
QT_MOC_LITERAL(20, 276, 4), // "drop"
QT_MOC_LITERAL(21, 281, 6), // "active"
QT_MOC_LITERAL(22, 288, 6), // "source"
QT_MOC_LITERAL(23, 295, 6), // "target"
QT_MOC_LITERAL(24, 302, 7), // "hotSpot"
QT_MOC_LITERAL(25, 310, 11), // "imageSource"
QT_MOC_LITERAL(26, 322, 4), // "keys"
QT_MOC_LITERAL(27, 327, 8), // "mimeData"
QT_MOC_LITERAL(28, 336, 16), // "supportedActions"
QT_MOC_LITERAL(29, 353, 15), // "Qt::DropActions"
QT_MOC_LITERAL(30, 369, 14), // "proposedAction"
QT_MOC_LITERAL(31, 384, 8), // "dragType"
QT_MOC_LITERAL(32, 393, 20) // "QQuickDrag::DragType"

    },
    "QQuickDragAttached\0dragStarted\0\0"
    "dragFinished\0Qt::DropAction\0dropAction\0"
    "activeChanged\0sourceChanged\0targetChanged\0"
    "hotSpotChanged\0imageSourceChanged\0"
    "keysChanged\0mimeDataChanged\0"
    "supportedActionsChanged\0proposedActionChanged\0"
    "dragTypeChanged\0start\0QQmlV4Function*\0"
    "startDrag\0cancel\0drop\0active\0source\0"
    "target\0hotSpot\0imageSource\0keys\0"
    "mimeData\0supportedActions\0Qt::DropActions\0"
    "proposedAction\0dragType\0QQuickDrag::DragType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickDragAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
      10,  116, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    1,   95,    2, 0x06 /* Public */,
       6,    0,   98,    2, 0x06 /* Public */,
       7,    0,   99,    2, 0x06 /* Public */,
       8,    0,  100,    2, 0x06 /* Public */,
       9,    0,  101,    2, 0x06 /* Public */,
      10,    0,  102,    2, 0x06 /* Public */,
      11,    0,  103,    2, 0x06 /* Public */,
      12,    0,  104,    2, 0x06 /* Public */,
      13,    0,  105,    2, 0x06 /* Public */,
      14,    0,  106,    2, 0x06 /* Public */,
      15,    0,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  108,    2, 0x0a /* Public */,
      18,    1,  111,    2, 0x0a /* Public */,
      19,    0,  114,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      20,    0,  115,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,

 // properties: name, type, flags
      21, QMetaType::Bool, 0x00495103,
      22, QMetaType::QObjectStar, 0x00495107,
      23, QMetaType::QObjectStar, 0x00495001,
      24, QMetaType::QPointF, 0x00495103,
      25, QMetaType::QUrl, 0x00495103,
      26, QMetaType::QStringList, 0x00495103,
      27, QMetaType::QVariantMap, 0x00495103,
      28, 0x80000000 | 29, 0x0049510b,
      30, 0x80000000 | 4, 0x0049510b,
      31, 0x80000000 | 32, 0x0049510b,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,

       0        // eod
};

void QQuickDragAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickDragAttached *_t = static_cast<QQuickDragAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dragStarted(); break;
        case 1: _t->dragFinished((*reinterpret_cast< Qt::DropAction(*)>(_a[1]))); break;
        case 2: _t->activeChanged(); break;
        case 3: _t->sourceChanged(); break;
        case 4: _t->targetChanged(); break;
        case 5: _t->hotSpotChanged(); break;
        case 6: _t->imageSourceChanged(); break;
        case 7: _t->keysChanged(); break;
        case 8: _t->mimeDataChanged(); break;
        case 9: _t->supportedActionsChanged(); break;
        case 10: _t->proposedActionChanged(); break;
        case 11: _t->dragTypeChanged(); break;
        case 12: _t->start((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 13: _t->startDrag((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 14: _t->cancel(); break;
        case 15: { int _r = _t->drop();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickDragAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDragAttached::dragStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickDragAttached::*_t)(Qt::DropAction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDragAttached::dragFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickDragAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDragAttached::activeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickDragAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDragAttached::sourceChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickDragAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDragAttached::targetChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickDragAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDragAttached::hotSpotChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickDragAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDragAttached::imageSourceChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickDragAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDragAttached::keysChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QQuickDragAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDragAttached::mimeDataChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QQuickDragAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDragAttached::supportedActionsChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QQuickDragAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDragAttached::proposedActionChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QQuickDragAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDragAttached::dragTypeChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickDragAttached *_t = static_cast<QQuickDragAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 1: *reinterpret_cast< QObject**>(_v) = _t->source(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->target(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = _t->hotSpot(); break;
        case 4: *reinterpret_cast< QUrl*>(_v) = _t->imageSource(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->keys(); break;
        case 6: *reinterpret_cast< QVariantMap*>(_v) = _t->mimeData(); break;
        case 7: *reinterpret_cast< Qt::DropActions*>(_v) = _t->supportedActions(); break;
        case 8: *reinterpret_cast< Qt::DropAction*>(_v) = _t->proposedAction(); break;
        case 9: *reinterpret_cast< QQuickDrag::DragType*>(_v) = _t->dragType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickDragAttached *_t = static_cast<QQuickDragAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setSource(*reinterpret_cast< QObject**>(_v)); break;
        case 3: _t->setHotSpot(*reinterpret_cast< QPointF*>(_v)); break;
        case 4: _t->setImageSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 5: _t->setKeys(*reinterpret_cast< QStringList*>(_v)); break;
        case 6: _t->setMimeData(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 7: _t->setSupportedActions(*reinterpret_cast< Qt::DropActions*>(_v)); break;
        case 8: _t->setProposedAction(*reinterpret_cast< Qt::DropAction*>(_v)); break;
        case 9: _t->setDragType(*reinterpret_cast< QQuickDrag::DragType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickDragAttached *_t = static_cast<QQuickDragAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 1: _t->resetSource(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QQuickDragAttached[] = {
        &QQuickDrag::staticMetaObject,
    nullptr
};

const QMetaObject QQuickDragAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickDragAttached.data,
      qt_meta_data_QQuickDragAttached,  qt_static_metacall, qt_meta_extradata_QQuickDragAttached, nullptr}
};


const QMetaObject *QQuickDragAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickDragAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickDragAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickDragAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickDragAttached::dragStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickDragAttached::dragFinished(Qt::DropAction _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickDragAttached::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickDragAttached::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickDragAttached::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickDragAttached::hotSpotChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickDragAttached::imageSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickDragAttached::keysChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QQuickDragAttached::mimeDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QQuickDragAttached::supportedActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QQuickDragAttached::proposedActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QQuickDragAttached::dragTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
