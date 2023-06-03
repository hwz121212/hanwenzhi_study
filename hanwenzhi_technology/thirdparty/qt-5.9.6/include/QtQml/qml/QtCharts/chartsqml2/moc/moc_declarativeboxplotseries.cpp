/****************************************************************************
** Meta object code from reading C++ file 'declarativeboxplotseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../declarativeboxplotseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'declarativeboxplotseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__DeclarativeBoxSet_t {
    QByteArrayData data[22];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativeBoxSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativeBoxSet_t qt_meta_stringdata_QtCharts__DeclarativeBoxSet = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QtCharts::DeclarativeBoxSet"
QT_MOC_LITERAL(1, 28, 13), // "changedValues"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 12), // "changedValue"
QT_MOC_LITERAL(4, 56, 5), // "index"
QT_MOC_LITERAL(5, 62, 20), // "brushFilenameChanged"
QT_MOC_LITERAL(6, 83, 13), // "brushFilename"
QT_MOC_LITERAL(7, 97, 18), // "handleBrushChanged"
QT_MOC_LITERAL(8, 116, 6), // "append"
QT_MOC_LITERAL(9, 123, 5), // "value"
QT_MOC_LITERAL(10, 129, 5), // "clear"
QT_MOC_LITERAL(11, 135, 2), // "at"
QT_MOC_LITERAL(12, 138, 8), // "setValue"
QT_MOC_LITERAL(13, 147, 6), // "values"
QT_MOC_LITERAL(14, 154, 5), // "label"
QT_MOC_LITERAL(15, 160, 5), // "count"
QT_MOC_LITERAL(16, 166, 14), // "ValuePositions"
QT_MOC_LITERAL(17, 181, 12), // "LowerExtreme"
QT_MOC_LITERAL(18, 194, 13), // "LowerQuartile"
QT_MOC_LITERAL(19, 208, 6), // "Median"
QT_MOC_LITERAL(20, 215, 13), // "UpperQuartile"
QT_MOC_LITERAL(21, 229, 12) // "UpperExtreme"

    },
    "QtCharts::DeclarativeBoxSet\0changedValues\0"
    "\0changedValue\0index\0brushFilenameChanged\0"
    "brushFilename\0handleBrushChanged\0"
    "append\0value\0clear\0at\0setValue\0values\0"
    "label\0count\0ValuePositions\0LowerExtreme\0"
    "LowerQuartile\0Median\0UpperQuartile\0"
    "UpperExtreme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativeBoxSet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   82, // properties
       1,  102, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   62,    2, 0x06 /* Public */,
       3,    1,   63,    2, 0x06 /* Public */,
       5,    1,   66,    2, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   69,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   70,    2, 0x02 /* Public */,
      10,    0,   73,    2, 0x02 /* Public */,
      11,    1,   74,    2, 0x02 /* Public */,
      12,    2,   77,    2, 0x02 /* Public */,

 // signals: revision
       0,
       0,
       1,

 // slots: revision
       0,

 // methods: revision
       0,
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void,
    QMetaType::QReal, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QReal,    4,    9,

 // properties: name, type, flags
      13, QMetaType::QVariantList, 0x00095103,
      14, QMetaType::QString, 0x00095103,
      15, QMetaType::Int, 0x00095001,
       6, QMetaType::QString, 0x00c95103,

 // properties: notify_signal_id
       0,
       0,
       0,
       2,

 // properties: revision
       0,
       0,
       0,
       1,

 // enums: name, flags, count, data
      16, 0x0,    5,  106,

 // enum data: key, value
      17, uint(QtCharts::DeclarativeBoxSet::LowerExtreme),
      18, uint(QtCharts::DeclarativeBoxSet::LowerQuartile),
      19, uint(QtCharts::DeclarativeBoxSet::Median),
      20, uint(QtCharts::DeclarativeBoxSet::UpperQuartile),
      21, uint(QtCharts::DeclarativeBoxSet::UpperExtreme),

       0        // eod
};

void QtCharts::DeclarativeBoxSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativeBoxSet *_t = static_cast<DeclarativeBoxSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changedValues(); break;
        case 1: _t->changedValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->brushFilenameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->handleBrushChanged(); break;
        case 4: _t->append((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->clear(); break;
        case 6: { qreal _r = _t->at((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativeBoxSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBoxSet::changedValues)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeclarativeBoxSet::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBoxSet::changedValue)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeclarativeBoxSet::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBoxSet::brushFilenameChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DeclarativeBoxSet *_t = static_cast<DeclarativeBoxSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->values(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->brushFilename(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativeBoxSet *_t = static_cast<DeclarativeBoxSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValues(*reinterpret_cast< QVariantList*>(_v)); break;
        case 1: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setBrushFilename(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::DeclarativeBoxSet::staticMetaObject = {
    { &QBoxSet::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativeBoxSet.data,
      qt_meta_data_QtCharts__DeclarativeBoxSet,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativeBoxSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativeBoxSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativeBoxSet.stringdata0))
        return static_cast<void*>(this);
    return QBoxSet::qt_metacast(_clname);
}

int QtCharts::DeclarativeBoxSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBoxSet::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void QtCharts::DeclarativeBoxSet::changedValues()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::DeclarativeBoxSet::changedValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::DeclarativeBoxSet::brushFilenameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QtCharts__DeclarativeBoxPlotSeries_t {
    QByteArrayData data[45];
    char stringdata0[519];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativeBoxPlotSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativeBoxPlotSeries_t qt_meta_stringdata_QtCharts__DeclarativeBoxPlotSeries = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QtCharts::DeclarativeBoxPlotS..."
QT_MOC_LITERAL(1, 35, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 51, 14), // "seriesChildren"
QT_MOC_LITERAL(3, 66, 12), // "axisXChanged"
QT_MOC_LITERAL(4, 79, 0), // ""
QT_MOC_LITERAL(5, 80, 14), // "QAbstractAxis*"
QT_MOC_LITERAL(6, 95, 4), // "axis"
QT_MOC_LITERAL(7, 100, 12), // "axisYChanged"
QT_MOC_LITERAL(8, 113, 15), // "axisXTopChanged"
QT_MOC_LITERAL(9, 129, 17), // "axisYRightChanged"
QT_MOC_LITERAL(10, 147, 7), // "clicked"
QT_MOC_LITERAL(11, 155, 18), // "DeclarativeBoxSet*"
QT_MOC_LITERAL(12, 174, 6), // "boxset"
QT_MOC_LITERAL(13, 181, 7), // "hovered"
QT_MOC_LITERAL(14, 189, 6), // "status"
QT_MOC_LITERAL(15, 196, 7), // "pressed"
QT_MOC_LITERAL(16, 204, 8), // "released"
QT_MOC_LITERAL(17, 213, 13), // "doubleClicked"
QT_MOC_LITERAL(18, 227, 20), // "brushFilenameChanged"
QT_MOC_LITERAL(19, 248, 13), // "brushFilename"
QT_MOC_LITERAL(20, 262, 20), // "appendSeriesChildren"
QT_MOC_LITERAL(21, 283, 26), // "QQmlListProperty<QObject>*"
QT_MOC_LITERAL(22, 310, 4), // "list"
QT_MOC_LITERAL(23, 315, 7), // "element"
QT_MOC_LITERAL(24, 323, 9), // "onHovered"
QT_MOC_LITERAL(25, 333, 8), // "QBoxSet*"
QT_MOC_LITERAL(26, 342, 9), // "onClicked"
QT_MOC_LITERAL(27, 352, 9), // "onPressed"
QT_MOC_LITERAL(28, 362, 10), // "onReleased"
QT_MOC_LITERAL(29, 373, 15), // "onDoubleClicked"
QT_MOC_LITERAL(30, 389, 18), // "handleBrushChanged"
QT_MOC_LITERAL(31, 408, 2), // "at"
QT_MOC_LITERAL(32, 411, 5), // "index"
QT_MOC_LITERAL(33, 417, 6), // "append"
QT_MOC_LITERAL(34, 424, 5), // "label"
QT_MOC_LITERAL(35, 430, 6), // "values"
QT_MOC_LITERAL(36, 437, 3), // "box"
QT_MOC_LITERAL(37, 441, 6), // "insert"
QT_MOC_LITERAL(38, 448, 6), // "remove"
QT_MOC_LITERAL(39, 455, 5), // "clear"
QT_MOC_LITERAL(40, 461, 5), // "axisX"
QT_MOC_LITERAL(41, 467, 5), // "axisY"
QT_MOC_LITERAL(42, 473, 8), // "axisXTop"
QT_MOC_LITERAL(43, 482, 10), // "axisYRight"
QT_MOC_LITERAL(44, 493, 25) // "QQmlListProperty<QObject>"

    },
    "QtCharts::DeclarativeBoxPlotSeries\0"
    "DefaultProperty\0seriesChildren\0"
    "axisXChanged\0\0QAbstractAxis*\0axis\0"
    "axisYChanged\0axisXTopChanged\0"
    "axisYRightChanged\0clicked\0DeclarativeBoxSet*\0"
    "boxset\0hovered\0status\0pressed\0released\0"
    "doubleClicked\0brushFilenameChanged\0"
    "brushFilename\0appendSeriesChildren\0"
    "QQmlListProperty<QObject>*\0list\0element\0"
    "onHovered\0QBoxSet*\0onClicked\0onPressed\0"
    "onReleased\0onDoubleClicked\0"
    "handleBrushChanged\0at\0index\0append\0"
    "label\0values\0box\0insert\0remove\0clear\0"
    "axisX\0axisY\0axisXTop\0axisYRight\0"
    "QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativeBoxPlotSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      23,   16, // methods
       6,  231, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,  154,    4, 0x06 /* Public */,
       7,    1,  157,    4, 0x06 /* Public */,
       8,    1,  160,    4, 0x06 /* Public */,
       9,    1,  163,    4, 0x06 /* Public */,
      10,    1,  166,    4, 0x06 /* Public */,
      13,    2,  169,    4, 0x06 /* Public */,
      15,    1,  174,    4, 0x06 /* Public */,
      16,    1,  177,    4, 0x06 /* Public */,
      17,    1,  180,    4, 0x06 /* Public */,
      18,    1,  183,    4, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
      20,    2,  186,    4, 0x0a /* Public */,
      24,    2,  191,    4, 0x0a /* Public */,
      26,    1,  196,    4, 0x0a /* Public */,
      27,    1,  199,    4, 0x0a /* Public */,
      28,    1,  202,    4, 0x0a /* Public */,
      29,    1,  205,    4, 0x0a /* Public */,
      30,    0,  208,    4, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      31,    1,  209,    4, 0x02 /* Public */,
      33,    2,  212,    4, 0x02 /* Public */,
      33,    1,  217,    4, 0x02 /* Public */,
      37,    3,  220,    4, 0x02 /* Public */,
      38,    1,  227,    4, 0x02 /* Public */,
      39,    0,  230,    4, 0x02 /* Public */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

 // slots: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // methods: revision
       0,
       0,
       0,
       0,
       0,
       0,

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
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 25,   14,   12,
    QMetaType::Void, 0x80000000 | 25,   12,
    QMetaType::Void, 0x80000000 | 25,   12,
    QMetaType::Void, 0x80000000 | 25,   12,
    QMetaType::Void, 0x80000000 | 25,   12,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 11, QMetaType::Int,   32,
    0x80000000 | 11, QMetaType::QString, QMetaType::QVariantList,   34,   35,
    QMetaType::Void, 0x80000000 | 11,   36,
    0x80000000 | 11, QMetaType::Int, QMetaType::QString, QMetaType::QVariantList,   32,   34,   35,
    QMetaType::Bool, 0x80000000 | 11,   36,
    QMetaType::Void,

 // properties: name, type, flags
      40, 0x80000000 | 5, 0x0049510b,
      41, 0x80000000 | 5, 0x0049510b,
      42, 0x80000000 | 5, 0x0049510b,
      43, 0x80000000 | 5, 0x0049510b,
       2, 0x80000000 | 44, 0x00095009,
      19, QMetaType::QString, 0x00c95103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,
       9,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void QtCharts::DeclarativeBoxPlotSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativeBoxPlotSeries *_t = static_cast<DeclarativeBoxPlotSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisXChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 1: _t->axisYChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 2: _t->axisXTopChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 3: _t->axisYRightChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 4: _t->clicked((*reinterpret_cast< DeclarativeBoxSet*(*)>(_a[1]))); break;
        case 5: _t->hovered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< DeclarativeBoxSet*(*)>(_a[2]))); break;
        case 6: _t->pressed((*reinterpret_cast< DeclarativeBoxSet*(*)>(_a[1]))); break;
        case 7: _t->released((*reinterpret_cast< DeclarativeBoxSet*(*)>(_a[1]))); break;
        case 8: _t->doubleClicked((*reinterpret_cast< DeclarativeBoxSet*(*)>(_a[1]))); break;
        case 9: _t->brushFilenameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->appendSeriesChildren((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 11: _t->onHovered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QBoxSet*(*)>(_a[2]))); break;
        case 12: _t->onClicked((*reinterpret_cast< QBoxSet*(*)>(_a[1]))); break;
        case 13: _t->onPressed((*reinterpret_cast< QBoxSet*(*)>(_a[1]))); break;
        case 14: _t->onReleased((*reinterpret_cast< QBoxSet*(*)>(_a[1]))); break;
        case 15: _t->onDoubleClicked((*reinterpret_cast< QBoxSet*(*)>(_a[1]))); break;
        case 16: _t->handleBrushChanged(); break;
        case 17: { DeclarativeBoxSet* _r = _t->at((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeclarativeBoxSet**>(_a[0]) = std::move(_r); }  break;
        case 18: { DeclarativeBoxSet* _r = _t->append((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QVariantList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< DeclarativeBoxSet**>(_a[0]) = std::move(_r); }  break;
        case 19: _t->append((*reinterpret_cast< DeclarativeBoxSet*(*)>(_a[1]))); break;
        case 20: { DeclarativeBoxSet* _r = _t->insert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< DeclarativeBoxSet**>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->remove((*reinterpret_cast< DeclarativeBoxSet*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->clear(); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeBoxSet* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeBoxSet* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeBoxSet* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeBoxSet* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeBoxSet* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBoxSet* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBoxSet* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBoxSet* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBoxSet* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBoxSet* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeBoxSet* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeBoxSet* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativeBoxPlotSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBoxPlotSeries::axisXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeclarativeBoxPlotSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBoxPlotSeries::axisYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeclarativeBoxPlotSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBoxPlotSeries::axisXTopChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DeclarativeBoxPlotSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBoxPlotSeries::axisYRightChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DeclarativeBoxPlotSeries::*_t)(DeclarativeBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBoxPlotSeries::clicked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DeclarativeBoxPlotSeries::*_t)(bool , DeclarativeBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBoxPlotSeries::hovered)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DeclarativeBoxPlotSeries::*_t)(DeclarativeBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBoxPlotSeries::pressed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DeclarativeBoxPlotSeries::*_t)(DeclarativeBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBoxPlotSeries::released)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (DeclarativeBoxPlotSeries::*_t)(DeclarativeBoxSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBoxPlotSeries::doubleClicked)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (DeclarativeBoxPlotSeries::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBoxPlotSeries::brushFilenameChanged)) {
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
        DeclarativeBoxPlotSeries *_t = static_cast<DeclarativeBoxPlotSeries *>(_o);
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
        DeclarativeBoxPlotSeries *_t = static_cast<DeclarativeBoxPlotSeries *>(_o);
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

const QMetaObject QtCharts::DeclarativeBoxPlotSeries::staticMetaObject = {
    { &QBoxPlotSeries::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativeBoxPlotSeries.data,
      qt_meta_data_QtCharts__DeclarativeBoxPlotSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativeBoxPlotSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativeBoxPlotSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativeBoxPlotSeries.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QBoxPlotSeries::qt_metacast(_clname);
}

int QtCharts::DeclarativeBoxPlotSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBoxPlotSeries::qt_metacall(_c, _id, _a);
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
void QtCharts::DeclarativeBoxPlotSeries::axisXChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::DeclarativeBoxPlotSeries::axisYChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::DeclarativeBoxPlotSeries::axisXTopChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::DeclarativeBoxPlotSeries::axisYRightChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::DeclarativeBoxPlotSeries::clicked(DeclarativeBoxSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtCharts::DeclarativeBoxPlotSeries::hovered(bool _t1, DeclarativeBoxSet * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtCharts::DeclarativeBoxPlotSeries::pressed(DeclarativeBoxSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QtCharts::DeclarativeBoxPlotSeries::released(DeclarativeBoxSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QtCharts::DeclarativeBoxPlotSeries::doubleClicked(DeclarativeBoxSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QtCharts::DeclarativeBoxPlotSeries::brushFilenameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
