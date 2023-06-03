/****************************************************************************
** Meta object code from reading C++ file 'declarativecandlestickseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../declarativecandlestickseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'declarativecandlestickseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__DeclarativeCandlestickSet_t {
    QByteArrayData data[5];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativeCandlestickSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativeCandlestickSet_t qt_meta_stringdata_QtCharts__DeclarativeCandlestickSet = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QtCharts::DeclarativeCandlest..."
QT_MOC_LITERAL(1, 36, 20), // "brushFilenameChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 13), // "brushFilename"
QT_MOC_LITERAL(4, 72, 18) // "handleBrushChanged"

    },
    "QtCharts::DeclarativeCandlestickSet\0"
    "brushFilenameChanged\0\0brushFilename\0"
    "handleBrushChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativeCandlestickSet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QtCharts::DeclarativeCandlestickSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativeCandlestickSet *_t = static_cast<DeclarativeCandlestickSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->brushFilenameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->handleBrushChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativeCandlestickSet::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeCandlestickSet::brushFilenameChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DeclarativeCandlestickSet *_t = static_cast<DeclarativeCandlestickSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->brushFilename(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativeCandlestickSet *_t = static_cast<DeclarativeCandlestickSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBrushFilename(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::DeclarativeCandlestickSet::staticMetaObject = {
    { &QCandlestickSet::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativeCandlestickSet.data,
      qt_meta_data_QtCharts__DeclarativeCandlestickSet,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativeCandlestickSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativeCandlestickSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativeCandlestickSet.stringdata0))
        return static_cast<void*>(this);
    return QCandlestickSet::qt_metacast(_clname);
}

int QtCharts::DeclarativeCandlestickSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCandlestickSet::qt_metacall(_c, _id, _a);
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
void QtCharts::DeclarativeCandlestickSet::brushFilenameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QtCharts__DeclarativeCandlestickSeries_t {
    QByteArrayData data[47];
    char stringdata0[549];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativeCandlestickSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativeCandlestickSeries_t qt_meta_stringdata_QtCharts__DeclarativeCandlestickSeries = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QtCharts::DeclarativeCandlest..."
QT_MOC_LITERAL(1, 39, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 55, 14), // "seriesChildren"
QT_MOC_LITERAL(3, 70, 12), // "axisXChanged"
QT_MOC_LITERAL(4, 83, 0), // ""
QT_MOC_LITERAL(5, 84, 14), // "QAbstractAxis*"
QT_MOC_LITERAL(6, 99, 4), // "axis"
QT_MOC_LITERAL(7, 104, 12), // "axisYChanged"
QT_MOC_LITERAL(8, 117, 15), // "axisXTopChanged"
QT_MOC_LITERAL(9, 133, 17), // "axisYRightChanged"
QT_MOC_LITERAL(10, 151, 7), // "clicked"
QT_MOC_LITERAL(11, 159, 26), // "DeclarativeCandlestickSet*"
QT_MOC_LITERAL(12, 186, 3), // "set"
QT_MOC_LITERAL(13, 190, 7), // "hovered"
QT_MOC_LITERAL(14, 198, 6), // "status"
QT_MOC_LITERAL(15, 205, 7), // "pressed"
QT_MOC_LITERAL(16, 213, 8), // "released"
QT_MOC_LITERAL(17, 222, 13), // "doubleClicked"
QT_MOC_LITERAL(18, 236, 20), // "brushFilenameChanged"
QT_MOC_LITERAL(19, 257, 13), // "brushFilename"
QT_MOC_LITERAL(20, 271, 20), // "appendSeriesChildren"
QT_MOC_LITERAL(21, 292, 26), // "QQmlListProperty<QObject>*"
QT_MOC_LITERAL(22, 319, 4), // "list"
QT_MOC_LITERAL(23, 324, 7), // "element"
QT_MOC_LITERAL(24, 332, 9), // "onClicked"
QT_MOC_LITERAL(25, 342, 16), // "QCandlestickSet*"
QT_MOC_LITERAL(26, 359, 9), // "onHovered"
QT_MOC_LITERAL(27, 369, 9), // "onPressed"
QT_MOC_LITERAL(28, 379, 10), // "onReleased"
QT_MOC_LITERAL(29, 390, 15), // "onDoubleClicked"
QT_MOC_LITERAL(30, 406, 18), // "handleBrushChanged"
QT_MOC_LITERAL(31, 425, 2), // "at"
QT_MOC_LITERAL(32, 428, 5), // "index"
QT_MOC_LITERAL(33, 434, 6), // "append"
QT_MOC_LITERAL(34, 441, 6), // "remove"
QT_MOC_LITERAL(35, 448, 4), // "open"
QT_MOC_LITERAL(36, 453, 4), // "high"
QT_MOC_LITERAL(37, 458, 3), // "low"
QT_MOC_LITERAL(38, 462, 5), // "close"
QT_MOC_LITERAL(39, 468, 9), // "timestamp"
QT_MOC_LITERAL(40, 478, 6), // "insert"
QT_MOC_LITERAL(41, 485, 5), // "clear"
QT_MOC_LITERAL(42, 491, 5), // "axisX"
QT_MOC_LITERAL(43, 497, 5), // "axisY"
QT_MOC_LITERAL(44, 503, 8), // "axisXTop"
QT_MOC_LITERAL(45, 512, 10), // "axisYRight"
QT_MOC_LITERAL(46, 523, 25) // "QQmlListProperty<QObject>"

    },
    "QtCharts::DeclarativeCandlestickSeries\0"
    "DefaultProperty\0seriesChildren\0"
    "axisXChanged\0\0QAbstractAxis*\0axis\0"
    "axisYChanged\0axisXTopChanged\0"
    "axisYRightChanged\0clicked\0"
    "DeclarativeCandlestickSet*\0set\0hovered\0"
    "status\0pressed\0released\0doubleClicked\0"
    "brushFilenameChanged\0brushFilename\0"
    "appendSeriesChildren\0QQmlListProperty<QObject>*\0"
    "list\0element\0onClicked\0QCandlestickSet*\0"
    "onHovered\0onPressed\0onReleased\0"
    "onDoubleClicked\0handleBrushChanged\0"
    "at\0index\0append\0remove\0open\0high\0low\0"
    "close\0timestamp\0insert\0clear\0axisX\0"
    "axisY\0axisXTop\0axisYRight\0"
    "QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativeCandlestickSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      24,   16, // methods
       6,  220, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,  136,    4, 0x06 /* Public */,
       7,    1,  139,    4, 0x06 /* Public */,
       8,    1,  142,    4, 0x06 /* Public */,
       9,    1,  145,    4, 0x06 /* Public */,
      10,    1,  148,    4, 0x06 /* Public */,
      13,    2,  151,    4, 0x06 /* Public */,
      15,    1,  156,    4, 0x06 /* Public */,
      16,    1,  159,    4, 0x06 /* Public */,
      17,    1,  162,    4, 0x06 /* Public */,
      18,    1,  165,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    2,  168,    4, 0x0a /* Public */,
      24,    1,  173,    4, 0x0a /* Public */,
      26,    2,  176,    4, 0x0a /* Public */,
      27,    1,  181,    4, 0x0a /* Public */,
      28,    1,  184,    4, 0x0a /* Public */,
      29,    1,  187,    4, 0x0a /* Public */,
      30,    0,  190,    4, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      31,    1,  191,    4, 0x02 /* Public */,
      33,    1,  194,    4, 0x02 /* Public */,
      34,    1,  197,    4, 0x02 /* Public */,
      33,    5,  200,    4, 0x02 /* Public */,
      34,    1,  211,    4, 0x02 /* Public */,
      40,    2,  214,    4, 0x02 /* Public */,
      41,    0,  219,    4, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 11,   14,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,   19,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 21, QMetaType::QObjectStar,   22,   23,
    QMetaType::Void, 0x80000000 | 25,   12,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 25,   14,   12,
    QMetaType::Void, 0x80000000 | 25,   12,
    QMetaType::Void, 0x80000000 | 25,   12,
    QMetaType::Void, 0x80000000 | 25,   12,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 11, QMetaType::Int,   32,
    QMetaType::Bool, 0x80000000 | 11,   12,
    QMetaType::Bool, 0x80000000 | 11,   12,
    QMetaType::Bool, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   35,   36,   37,   38,   39,
    QMetaType::Bool, QMetaType::QReal,   39,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 11,   32,   12,
    QMetaType::Void,

 // properties: name, type, flags
      42, 0x80000000 | 5, 0x0049510b,
      43, 0x80000000 | 5, 0x0049510b,
      44, 0x80000000 | 5, 0x0049510b,
      45, 0x80000000 | 5, 0x0049510b,
       2, 0x80000000 | 46, 0x00095009,
      19, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,
       9,

       0        // eod
};

void QtCharts::DeclarativeCandlestickSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativeCandlestickSeries *_t = static_cast<DeclarativeCandlestickSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisXChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 1: _t->axisYChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 2: _t->axisXTopChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 3: _t->axisYRightChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 4: _t->clicked((*reinterpret_cast< DeclarativeCandlestickSet*(*)>(_a[1]))); break;
        case 5: _t->hovered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< DeclarativeCandlestickSet*(*)>(_a[2]))); break;
        case 6: _t->pressed((*reinterpret_cast< DeclarativeCandlestickSet*(*)>(_a[1]))); break;
        case 7: _t->released((*reinterpret_cast< DeclarativeCandlestickSet*(*)>(_a[1]))); break;
        case 8: _t->doubleClicked((*reinterpret_cast< DeclarativeCandlestickSet*(*)>(_a[1]))); break;
        case 9: _t->brushFilenameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->appendSeriesChildren((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 11: _t->onClicked((*reinterpret_cast< QCandlestickSet*(*)>(_a[1]))); break;
        case 12: _t->onHovered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QCandlestickSet*(*)>(_a[2]))); break;
        case 13: _t->onPressed((*reinterpret_cast< QCandlestickSet*(*)>(_a[1]))); break;
        case 14: _t->onReleased((*reinterpret_cast< QCandlestickSet*(*)>(_a[1]))); break;
        case 15: _t->onDoubleClicked((*reinterpret_cast< QCandlestickSet*(*)>(_a[1]))); break;
        case 16: _t->handleBrushChanged(); break;
        case 17: { DeclarativeCandlestickSet* _r = _t->at((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeclarativeCandlestickSet**>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->append((*reinterpret_cast< DeclarativeCandlestickSet*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->remove((*reinterpret_cast< DeclarativeCandlestickSet*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->append((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->remove((*reinterpret_cast< qreal(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->insert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< DeclarativeCandlestickSet*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractAxis* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractAxis* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractAxis* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractAxis* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeCandlestickSet* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeCandlestickSet* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeCandlestickSet* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeCandlestickSet* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeCandlestickSet* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCandlestickSet* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCandlestickSet* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCandlestickSet* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCandlestickSet* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCandlestickSet* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeCandlestickSet* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeCandlestickSet* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeCandlestickSet* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativeCandlestickSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeCandlestickSeries::axisXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeclarativeCandlestickSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeCandlestickSeries::axisYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeclarativeCandlestickSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeCandlestickSeries::axisXTopChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DeclarativeCandlestickSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeCandlestickSeries::axisYRightChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DeclarativeCandlestickSeries::*_t)(DeclarativeCandlestickSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeCandlestickSeries::clicked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DeclarativeCandlestickSeries::*_t)(bool , DeclarativeCandlestickSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeCandlestickSeries::hovered)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DeclarativeCandlestickSeries::*_t)(DeclarativeCandlestickSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeCandlestickSeries::pressed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DeclarativeCandlestickSeries::*_t)(DeclarativeCandlestickSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeCandlestickSeries::released)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (DeclarativeCandlestickSeries::*_t)(DeclarativeCandlestickSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeCandlestickSeries::doubleClicked)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (DeclarativeCandlestickSeries::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeCandlestickSeries::brushFilenameChanged)) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractAxis* >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DeclarativeCandlestickSeries *_t = static_cast<DeclarativeCandlestickSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisX(); break;
        case 1: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisY(); break;
        case 2: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisXTop(); break;
        case 3: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisYRight(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->seriesChildren(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->brushFilename(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativeCandlestickSeries *_t = static_cast<DeclarativeCandlestickSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAxisX(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 1: _t->setAxisY(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 2: _t->setAxisXTop(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 3: _t->setAxisYRight(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 5: _t->setBrushFilename(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::DeclarativeCandlestickSeries::staticMetaObject = {
    { &QCandlestickSeries::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativeCandlestickSeries.data,
      qt_meta_data_QtCharts__DeclarativeCandlestickSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativeCandlestickSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativeCandlestickSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativeCandlestickSeries.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QCandlestickSeries::qt_metacast(_clname);
}

int QtCharts::DeclarativeCandlestickSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCandlestickSeries::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
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
void QtCharts::DeclarativeCandlestickSeries::axisXChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::DeclarativeCandlestickSeries::axisYChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::DeclarativeCandlestickSeries::axisXTopChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::DeclarativeCandlestickSeries::axisYRightChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::DeclarativeCandlestickSeries::clicked(DeclarativeCandlestickSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtCharts::DeclarativeCandlestickSeries::hovered(bool _t1, DeclarativeCandlestickSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtCharts::DeclarativeCandlestickSeries::pressed(DeclarativeCandlestickSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QtCharts::DeclarativeCandlestickSeries::released(DeclarativeCandlestickSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QtCharts::DeclarativeCandlestickSeries::doubleClicked(DeclarativeCandlestickSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QtCharts::DeclarativeCandlestickSeries::brushFilenameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
