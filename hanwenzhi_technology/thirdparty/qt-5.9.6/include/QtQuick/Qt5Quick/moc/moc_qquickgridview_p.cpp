/****************************************************************************
** Meta object code from reading C++ file 'qquickgridview_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickgridview_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickgridview_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickGridView_t {
    QByteArrayData data[24];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickGridView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickGridView_t qt_meta_stringdata_QQuickGridView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickGridView"
QT_MOC_LITERAL(1, 15, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 31, 4), // "data"
QT_MOC_LITERAL(3, 36, 16), // "cellWidthChanged"
QT_MOC_LITERAL(4, 53, 0), // ""
QT_MOC_LITERAL(5, 54, 17), // "cellHeightChanged"
QT_MOC_LITERAL(6, 72, 28), // "highlightMoveDurationChanged"
QT_MOC_LITERAL(7, 101, 11), // "flowChanged"
QT_MOC_LITERAL(8, 113, 15), // "snapModeChanged"
QT_MOC_LITERAL(9, 129, 18), // "moveCurrentIndexUp"
QT_MOC_LITERAL(10, 148, 20), // "moveCurrentIndexDown"
QT_MOC_LITERAL(11, 169, 20), // "moveCurrentIndexLeft"
QT_MOC_LITERAL(12, 190, 21), // "moveCurrentIndexRight"
QT_MOC_LITERAL(13, 212, 4), // "flow"
QT_MOC_LITERAL(14, 217, 4), // "Flow"
QT_MOC_LITERAL(15, 222, 9), // "cellWidth"
QT_MOC_LITERAL(16, 232, 10), // "cellHeight"
QT_MOC_LITERAL(17, 243, 8), // "snapMode"
QT_MOC_LITERAL(18, 252, 8), // "SnapMode"
QT_MOC_LITERAL(19, 261, 15), // "FlowLeftToRight"
QT_MOC_LITERAL(20, 277, 15), // "FlowTopToBottom"
QT_MOC_LITERAL(21, 293, 6), // "NoSnap"
QT_MOC_LITERAL(22, 300, 9), // "SnapToRow"
QT_MOC_LITERAL(23, 310, 10) // "SnapOneRow"

    },
    "QQuickGridView\0DefaultProperty\0data\0"
    "cellWidthChanged\0\0cellHeightChanged\0"
    "highlightMoveDurationChanged\0flowChanged\0"
    "snapModeChanged\0moveCurrentIndexUp\0"
    "moveCurrentIndexDown\0moveCurrentIndexLeft\0"
    "moveCurrentIndexRight\0flow\0Flow\0"
    "cellWidth\0cellHeight\0snapMode\0SnapMode\0"
    "FlowLeftToRight\0FlowTopToBottom\0NoSnap\0"
    "SnapToRow\0SnapOneRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickGridView[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       9,   16, // methods
       4,   70, // properties
       2,   86, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   61,    4, 0x06 /* Public */,
       5,    0,   62,    4, 0x06 /* Public */,
       6,    0,   63,    4, 0x06 /* Public */,
       7,    0,   64,    4, 0x06 /* Public */,
       8,    0,   65,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   66,    4, 0x0a /* Public */,
      10,    0,   67,    4, 0x0a /* Public */,
      11,    0,   68,    4, 0x0a /* Public */,
      12,    0,   69,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x0049510b,
      15, QMetaType::QReal, 0x00495103,
      16, QMetaType::QReal, 0x00495103,
      17, 0x80000000 | 18, 0x0049510b,

 // properties: notify_signal_id
       3,
       0,
       1,
       4,

 // enums: name, flags, count, data
      14, 0x0,    2,   94,
      18, 0x0,    3,   98,

 // enum data: key, value
      19, uint(QQuickGridView::FlowLeftToRight),
      20, uint(QQuickGridView::FlowTopToBottom),
      21, uint(QQuickGridView::NoSnap),
      22, uint(QQuickGridView::SnapToRow),
      23, uint(QQuickGridView::SnapOneRow),

       0        // eod
};

void QQuickGridView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickGridView *_t = static_cast<QQuickGridView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cellWidthChanged(); break;
        case 1: _t->cellHeightChanged(); break;
        case 2: _t->highlightMoveDurationChanged(); break;
        case 3: _t->flowChanged(); break;
        case 4: _t->snapModeChanged(); break;
        case 5: _t->moveCurrentIndexUp(); break;
        case 6: _t->moveCurrentIndexDown(); break;
        case 7: _t->moveCurrentIndexLeft(); break;
        case 8: _t->moveCurrentIndexRight(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickGridView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGridView::cellWidthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickGridView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGridView::cellHeightChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickGridView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGridView::highlightMoveDurationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickGridView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGridView::flowChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickGridView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGridView::snapModeChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickGridView *_t = static_cast<QQuickGridView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Flow*>(_v) = _t->flow(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->cellWidth(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->cellHeight(); break;
        case 3: *reinterpret_cast< SnapMode*>(_v) = _t->snapMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickGridView *_t = static_cast<QQuickGridView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlow(*reinterpret_cast< Flow*>(_v)); break;
        case 1: _t->setCellWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setCellHeight(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setSnapMode(*reinterpret_cast< SnapMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickGridView::staticMetaObject = {
    { &QQuickItemView::staticMetaObject, qt_meta_stringdata_QQuickGridView.data,
      qt_meta_data_QQuickGridView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickGridView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickGridView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickGridView.stringdata0))
        return static_cast<void*>(this);
    return QQuickItemView::qt_metacast(_clname);
}

int QQuickGridView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItemView::qt_metacall(_c, _id, _a);
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
void QQuickGridView::cellWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickGridView::cellHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickGridView::highlightMoveDurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickGridView::flowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickGridView::snapModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_QQuickGridViewAttached_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickGridViewAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickGridViewAttached_t qt_meta_stringdata_QQuickGridViewAttached = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QQuickGridViewAttached"

    },
    "QQuickGridViewAttached"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickGridViewAttached[] = {

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

void QQuickGridViewAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickGridViewAttached::staticMetaObject = {
    { &QQuickItemViewAttached::staticMetaObject, qt_meta_stringdata_QQuickGridViewAttached.data,
      qt_meta_data_QQuickGridViewAttached,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickGridViewAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickGridViewAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickGridViewAttached.stringdata0))
        return static_cast<void*>(this);
    return QQuickItemViewAttached::qt_metacast(_clname);
}

int QQuickGridViewAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItemViewAttached::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
