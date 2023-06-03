/****************************************************************************
** Meta object code from reading C++ file 'declarativebarseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../declarativebarseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'declarativebarseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__DeclarativeBarSet_t {
    QByteArrayData data[18];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativeBarSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativeBarSet_t qt_meta_stringdata_QtCharts__DeclarativeBarSet = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QtCharts::DeclarativeBarSet"
QT_MOC_LITERAL(1, 28, 12), // "countChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "count"
QT_MOC_LITERAL(4, 48, 18), // "borderWidthChanged"
QT_MOC_LITERAL(5, 67, 5), // "width"
QT_MOC_LITERAL(6, 73, 20), // "brushFilenameChanged"
QT_MOC_LITERAL(7, 94, 13), // "brushFilename"
QT_MOC_LITERAL(8, 108, 18), // "handleCountChanged"
QT_MOC_LITERAL(9, 127, 5), // "index"
QT_MOC_LITERAL(10, 133, 18), // "handleBrushChanged"
QT_MOC_LITERAL(11, 152, 6), // "append"
QT_MOC_LITERAL(12, 159, 5), // "value"
QT_MOC_LITERAL(13, 165, 6), // "remove"
QT_MOC_LITERAL(14, 172, 7), // "replace"
QT_MOC_LITERAL(15, 180, 2), // "at"
QT_MOC_LITERAL(16, 183, 6), // "values"
QT_MOC_LITERAL(17, 190, 11) // "borderWidth"

    },
    "QtCharts::DeclarativeBarSet\0countChanged\0"
    "\0count\0borderWidthChanged\0width\0"
    "brushFilenameChanged\0brushFilename\0"
    "handleCountChanged\0index\0handleBrushChanged\0"
    "append\0value\0remove\0replace\0at\0values\0"
    "borderWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativeBarSet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       4,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x86 /* Public | MethodRevisioned */,
       6,    1,   80,    2, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   83,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      11,    1,   89,    2, 0x02 /* Public */,
      13,    2,   92,    2, 0x02 /* Public */,
      13,    1,   97,    2, 0x22 /* Public | MethodCloned */,
      14,    2,  100,    2, 0x02 /* Public */,
      15,    1,  105,    2, 0x02 /* Public */,

 // signals: revision
       0,
       1,
       2,

 // slots: revision
       0,
       0,

 // methods: revision
       0,
       0,
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QReal,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,    3,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QReal,    9,   12,
    QMetaType::QReal, QMetaType::Int,    9,

 // properties: name, type, flags
      16, QMetaType::QVariantList, 0x00095103,
      17, QMetaType::QReal, 0x00c95103,
       3, QMetaType::Int, 0x00495001,
       7, QMetaType::QString, 0x00c95103,

 // properties: notify_signal_id
       0,
       1,
       0,
       2,

 // properties: revision
       0,
       1,
       0,
       2,

       0        // eod
};

void QtCharts::DeclarativeBarSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativeBarSet *_t = static_cast<DeclarativeBarSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->borderWidthChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->brushFilenameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->handleCountChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->handleBrushChanged(); break;
        case 5: _t->append((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->remove((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 7: _t->remove((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->replace((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 9: { qreal _r = _t->at((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativeBarSet::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBarSet::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeclarativeBarSet::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBarSet::borderWidthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeclarativeBarSet::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBarSet::brushFilenameChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DeclarativeBarSet *_t = static_cast<DeclarativeBarSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->values(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->borderWidth(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->brushFilename(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativeBarSet *_t = static_cast<DeclarativeBarSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValues(*reinterpret_cast< QVariantList*>(_v)); break;
        case 1: _t->setBorderWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setBrushFilename(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::DeclarativeBarSet::staticMetaObject = {
    { &QBarSet::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativeBarSet.data,
      qt_meta_data_QtCharts__DeclarativeBarSet,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativeBarSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativeBarSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativeBarSet.stringdata0))
        return static_cast<void*>(this);
    return QBarSet::qt_metacast(_clname);
}

int QtCharts::DeclarativeBarSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBarSet::qt_metacall(_c, _id, _a);
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
void QtCharts::DeclarativeBarSet::countChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::DeclarativeBarSet::borderWidthChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::DeclarativeBarSet::brushFilenameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QtCharts__DeclarativeBarSeries_t {
    QByteArrayData data[30];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativeBarSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativeBarSeries_t qt_meta_stringdata_QtCharts__DeclarativeBarSeries = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QtCharts::DeclarativeBarSeries"
QT_MOC_LITERAL(1, 31, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 47, 14), // "seriesChildren"
QT_MOC_LITERAL(3, 62, 12), // "axisXChanged"
QT_MOC_LITERAL(4, 75, 0), // ""
QT_MOC_LITERAL(5, 76, 14), // "QAbstractAxis*"
QT_MOC_LITERAL(6, 91, 4), // "axis"
QT_MOC_LITERAL(7, 96, 12), // "axisYChanged"
QT_MOC_LITERAL(8, 109, 15), // "axisXTopChanged"
QT_MOC_LITERAL(9, 125, 17), // "axisYRightChanged"
QT_MOC_LITERAL(10, 143, 20), // "appendSeriesChildren"
QT_MOC_LITERAL(11, 164, 26), // "QQmlListProperty<QObject>*"
QT_MOC_LITERAL(12, 191, 4), // "list"
QT_MOC_LITERAL(13, 196, 7), // "element"
QT_MOC_LITERAL(14, 204, 2), // "at"
QT_MOC_LITERAL(15, 207, 18), // "DeclarativeBarSet*"
QT_MOC_LITERAL(16, 226, 5), // "index"
QT_MOC_LITERAL(17, 232, 6), // "append"
QT_MOC_LITERAL(18, 239, 5), // "label"
QT_MOC_LITERAL(19, 245, 6), // "values"
QT_MOC_LITERAL(20, 252, 6), // "insert"
QT_MOC_LITERAL(21, 259, 6), // "remove"
QT_MOC_LITERAL(22, 266, 8), // "QBarSet*"
QT_MOC_LITERAL(23, 275, 6), // "barset"
QT_MOC_LITERAL(24, 282, 5), // "clear"
QT_MOC_LITERAL(25, 288, 5), // "axisX"
QT_MOC_LITERAL(26, 294, 5), // "axisY"
QT_MOC_LITERAL(27, 300, 8), // "axisXTop"
QT_MOC_LITERAL(28, 309, 10), // "axisYRight"
QT_MOC_LITERAL(29, 320, 25) // "QQmlListProperty<QObject>"

    },
    "QtCharts::DeclarativeBarSeries\0"
    "DefaultProperty\0seriesChildren\0"
    "axisXChanged\0\0QAbstractAxis*\0axis\0"
    "axisYChanged\0axisXTopChanged\0"
    "axisYRightChanged\0appendSeriesChildren\0"
    "QQmlListProperty<QObject>*\0list\0element\0"
    "at\0DeclarativeBarSet*\0index\0append\0"
    "label\0values\0insert\0remove\0QBarSet*\0"
    "barset\0clear\0axisX\0axisY\0axisXTop\0"
    "axisYRight\0QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativeBarSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       5,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   76,    4, 0x86 /* Public | MethodRevisioned */,
       7,    1,   79,    4, 0x86 /* Public | MethodRevisioned */,
       8,    1,   82,    4, 0x86 /* Public | MethodRevisioned */,
       9,    1,   85,    4, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   88,    4, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   93,    4, 0x02 /* Public */,
      17,    2,   96,    4, 0x02 /* Public */,
      20,    3,  101,    4, 0x02 /* Public */,
      21,    1,  108,    4, 0x02 /* Public */,
      24,    0,  111,    4, 0x02 /* Public */,

 // signals: revision
       1,
       1,
       2,
       2,

 // slots: revision
       0,

 // methods: revision
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

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11, QMetaType::QObjectStar,   12,   13,

 // methods: parameters
    0x80000000 | 15, QMetaType::Int,   16,
    0x80000000 | 15, QMetaType::QString, QMetaType::QVariantList,   18,   19,
    0x80000000 | 15, QMetaType::Int, QMetaType::QString, QMetaType::QVariantList,   16,   18,   19,
    QMetaType::Bool, 0x80000000 | 22,   23,
    QMetaType::Void,

 // properties: name, type, flags
      25, 0x80000000 | 5, 0x00c9510b,
      26, 0x80000000 | 5, 0x00c9510b,
      27, 0x80000000 | 5, 0x00c9510b,
      28, 0x80000000 | 5, 0x00c9510b,
       2, 0x80000000 | 29, 0x00095009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,

 // properties: revision
       1,
       1,
       2,
       2,
       0,

       0        // eod
};

void QtCharts::DeclarativeBarSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativeBarSeries *_t = static_cast<DeclarativeBarSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisXChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 1: _t->axisYChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 2: _t->axisXTopChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 3: _t->axisYRightChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 4: _t->appendSeriesChildren((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 5: { DeclarativeBarSet* _r = _t->at((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 6: { DeclarativeBarSet* _r = _t->append((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariantList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 7: { DeclarativeBarSet* _r = _t->insert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->remove((*reinterpret_cast< QBarSet*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->clear(); break;
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
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBarSet* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativeBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBarSeries::axisXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeclarativeBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBarSeries::axisYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeclarativeBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBarSeries::axisXTopChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DeclarativeBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeBarSeries::axisYRightChanged)) {
                *result = 3;
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
        DeclarativeBarSeries *_t = static_cast<DeclarativeBarSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisX(); break;
        case 1: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisY(); break;
        case 2: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisXTop(); break;
        case 3: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisYRight(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->seriesChildren(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativeBarSeries *_t = static_cast<DeclarativeBarSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAxisX(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 1: _t->setAxisY(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 2: _t->setAxisXTop(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 3: _t->setAxisYRight(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::DeclarativeBarSeries::staticMetaObject = {
    { &QBarSeries::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativeBarSeries.data,
      qt_meta_data_QtCharts__DeclarativeBarSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativeBarSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativeBarSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativeBarSeries.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QBarSeries::qt_metacast(_clname);
}

int QtCharts::DeclarativeBarSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBarSeries::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void QtCharts::DeclarativeBarSeries::axisXChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::DeclarativeBarSeries::axisYChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::DeclarativeBarSeries::axisXTopChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::DeclarativeBarSeries::axisYRightChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QtCharts__DeclarativeStackedBarSeries_t {
    QByteArrayData data[30];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativeStackedBarSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativeStackedBarSeries_t qt_meta_stringdata_QtCharts__DeclarativeStackedBarSeries = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QtCharts::DeclarativeStackedB..."
QT_MOC_LITERAL(1, 38, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 54, 14), // "seriesChildren"
QT_MOC_LITERAL(3, 69, 12), // "axisXChanged"
QT_MOC_LITERAL(4, 82, 0), // ""
QT_MOC_LITERAL(5, 83, 14), // "QAbstractAxis*"
QT_MOC_LITERAL(6, 98, 4), // "axis"
QT_MOC_LITERAL(7, 103, 12), // "axisYChanged"
QT_MOC_LITERAL(8, 116, 15), // "axisXTopChanged"
QT_MOC_LITERAL(9, 132, 17), // "axisYRightChanged"
QT_MOC_LITERAL(10, 150, 20), // "appendSeriesChildren"
QT_MOC_LITERAL(11, 171, 26), // "QQmlListProperty<QObject>*"
QT_MOC_LITERAL(12, 198, 4), // "list"
QT_MOC_LITERAL(13, 203, 7), // "element"
QT_MOC_LITERAL(14, 211, 2), // "at"
QT_MOC_LITERAL(15, 214, 18), // "DeclarativeBarSet*"
QT_MOC_LITERAL(16, 233, 5), // "index"
QT_MOC_LITERAL(17, 239, 6), // "append"
QT_MOC_LITERAL(18, 246, 5), // "label"
QT_MOC_LITERAL(19, 252, 6), // "values"
QT_MOC_LITERAL(20, 259, 6), // "insert"
QT_MOC_LITERAL(21, 266, 6), // "remove"
QT_MOC_LITERAL(22, 273, 8), // "QBarSet*"
QT_MOC_LITERAL(23, 282, 6), // "barset"
QT_MOC_LITERAL(24, 289, 5), // "clear"
QT_MOC_LITERAL(25, 295, 5), // "axisX"
QT_MOC_LITERAL(26, 301, 5), // "axisY"
QT_MOC_LITERAL(27, 307, 8), // "axisXTop"
QT_MOC_LITERAL(28, 316, 10), // "axisYRight"
QT_MOC_LITERAL(29, 327, 25) // "QQmlListProperty<QObject>"

    },
    "QtCharts::DeclarativeStackedBarSeries\0"
    "DefaultProperty\0seriesChildren\0"
    "axisXChanged\0\0QAbstractAxis*\0axis\0"
    "axisYChanged\0axisXTopChanged\0"
    "axisYRightChanged\0appendSeriesChildren\0"
    "QQmlListProperty<QObject>*\0list\0element\0"
    "at\0DeclarativeBarSet*\0index\0append\0"
    "label\0values\0insert\0remove\0QBarSet*\0"
    "barset\0clear\0axisX\0axisY\0axisXTop\0"
    "axisYRight\0QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativeStackedBarSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       5,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   76,    4, 0x86 /* Public | MethodRevisioned */,
       7,    1,   79,    4, 0x86 /* Public | MethodRevisioned */,
       8,    1,   82,    4, 0x86 /* Public | MethodRevisioned */,
       9,    1,   85,    4, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   88,    4, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   93,    4, 0x02 /* Public */,
      17,    2,   96,    4, 0x02 /* Public */,
      20,    3,  101,    4, 0x02 /* Public */,
      21,    1,  108,    4, 0x02 /* Public */,
      24,    0,  111,    4, 0x02 /* Public */,

 // signals: revision
       1,
       1,
       2,
       2,

 // slots: revision
       0,

 // methods: revision
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

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11, QMetaType::QObjectStar,   12,   13,

 // methods: parameters
    0x80000000 | 15, QMetaType::Int,   16,
    0x80000000 | 15, QMetaType::QString, QMetaType::QVariantList,   18,   19,
    0x80000000 | 15, QMetaType::Int, QMetaType::QString, QMetaType::QVariantList,   16,   18,   19,
    QMetaType::Bool, 0x80000000 | 22,   23,
    QMetaType::Void,

 // properties: name, type, flags
      25, 0x80000000 | 5, 0x00c9510b,
      26, 0x80000000 | 5, 0x00c9510b,
      27, 0x80000000 | 5, 0x00c9510b,
      28, 0x80000000 | 5, 0x00c9510b,
       2, 0x80000000 | 29, 0x00095009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,

 // properties: revision
       1,
       1,
       2,
       2,
       0,

       0        // eod
};

void QtCharts::DeclarativeStackedBarSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativeStackedBarSeries *_t = static_cast<DeclarativeStackedBarSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisXChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 1: _t->axisYChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 2: _t->axisXTopChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 3: _t->axisYRightChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 4: _t->appendSeriesChildren((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 5: { DeclarativeBarSet* _r = _t->at((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 6: { DeclarativeBarSet* _r = _t->append((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariantList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 7: { DeclarativeBarSet* _r = _t->insert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->remove((*reinterpret_cast< QBarSet*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->clear(); break;
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
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBarSet* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativeStackedBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeStackedBarSeries::axisXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeclarativeStackedBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeStackedBarSeries::axisYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeclarativeStackedBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeStackedBarSeries::axisXTopChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DeclarativeStackedBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeStackedBarSeries::axisYRightChanged)) {
                *result = 3;
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
        DeclarativeStackedBarSeries *_t = static_cast<DeclarativeStackedBarSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisX(); break;
        case 1: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisY(); break;
        case 2: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisXTop(); break;
        case 3: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisYRight(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->seriesChildren(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativeStackedBarSeries *_t = static_cast<DeclarativeStackedBarSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAxisX(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 1: _t->setAxisY(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 2: _t->setAxisXTop(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 3: _t->setAxisYRight(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::DeclarativeStackedBarSeries::staticMetaObject = {
    { &QStackedBarSeries::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativeStackedBarSeries.data,
      qt_meta_data_QtCharts__DeclarativeStackedBarSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativeStackedBarSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativeStackedBarSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativeStackedBarSeries.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QStackedBarSeries::qt_metacast(_clname);
}

int QtCharts::DeclarativeStackedBarSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedBarSeries::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void QtCharts::DeclarativeStackedBarSeries::axisXChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::DeclarativeStackedBarSeries::axisYChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::DeclarativeStackedBarSeries::axisXTopChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::DeclarativeStackedBarSeries::axisYRightChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QtCharts__DeclarativePercentBarSeries_t {
    QByteArrayData data[30];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativePercentBarSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativePercentBarSeries_t qt_meta_stringdata_QtCharts__DeclarativePercentBarSeries = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QtCharts::DeclarativePercentB..."
QT_MOC_LITERAL(1, 38, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 54, 14), // "seriesChildren"
QT_MOC_LITERAL(3, 69, 12), // "axisXChanged"
QT_MOC_LITERAL(4, 82, 0), // ""
QT_MOC_LITERAL(5, 83, 14), // "QAbstractAxis*"
QT_MOC_LITERAL(6, 98, 4), // "axis"
QT_MOC_LITERAL(7, 103, 12), // "axisYChanged"
QT_MOC_LITERAL(8, 116, 15), // "axisXTopChanged"
QT_MOC_LITERAL(9, 132, 17), // "axisYRightChanged"
QT_MOC_LITERAL(10, 150, 20), // "appendSeriesChildren"
QT_MOC_LITERAL(11, 171, 26), // "QQmlListProperty<QObject>*"
QT_MOC_LITERAL(12, 198, 4), // "list"
QT_MOC_LITERAL(13, 203, 7), // "element"
QT_MOC_LITERAL(14, 211, 2), // "at"
QT_MOC_LITERAL(15, 214, 18), // "DeclarativeBarSet*"
QT_MOC_LITERAL(16, 233, 5), // "index"
QT_MOC_LITERAL(17, 239, 6), // "append"
QT_MOC_LITERAL(18, 246, 5), // "label"
QT_MOC_LITERAL(19, 252, 6), // "values"
QT_MOC_LITERAL(20, 259, 6), // "insert"
QT_MOC_LITERAL(21, 266, 6), // "remove"
QT_MOC_LITERAL(22, 273, 8), // "QBarSet*"
QT_MOC_LITERAL(23, 282, 6), // "barset"
QT_MOC_LITERAL(24, 289, 5), // "clear"
QT_MOC_LITERAL(25, 295, 5), // "axisX"
QT_MOC_LITERAL(26, 301, 5), // "axisY"
QT_MOC_LITERAL(27, 307, 8), // "axisXTop"
QT_MOC_LITERAL(28, 316, 10), // "axisYRight"
QT_MOC_LITERAL(29, 327, 25) // "QQmlListProperty<QObject>"

    },
    "QtCharts::DeclarativePercentBarSeries\0"
    "DefaultProperty\0seriesChildren\0"
    "axisXChanged\0\0QAbstractAxis*\0axis\0"
    "axisYChanged\0axisXTopChanged\0"
    "axisYRightChanged\0appendSeriesChildren\0"
    "QQmlListProperty<QObject>*\0list\0element\0"
    "at\0DeclarativeBarSet*\0index\0append\0"
    "label\0values\0insert\0remove\0QBarSet*\0"
    "barset\0clear\0axisX\0axisY\0axisXTop\0"
    "axisYRight\0QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativePercentBarSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       5,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   76,    4, 0x86 /* Public | MethodRevisioned */,
       7,    1,   79,    4, 0x86 /* Public | MethodRevisioned */,
       8,    1,   82,    4, 0x86 /* Public | MethodRevisioned */,
       9,    1,   85,    4, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   88,    4, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   93,    4, 0x02 /* Public */,
      17,    2,   96,    4, 0x02 /* Public */,
      20,    3,  101,    4, 0x02 /* Public */,
      21,    1,  108,    4, 0x02 /* Public */,
      24,    0,  111,    4, 0x02 /* Public */,

 // signals: revision
       1,
       1,
       2,
       2,

 // slots: revision
       0,

 // methods: revision
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

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11, QMetaType::QObjectStar,   12,   13,

 // methods: parameters
    0x80000000 | 15, QMetaType::Int,   16,
    0x80000000 | 15, QMetaType::QString, QMetaType::QVariantList,   18,   19,
    0x80000000 | 15, QMetaType::Int, QMetaType::QString, QMetaType::QVariantList,   16,   18,   19,
    QMetaType::Bool, 0x80000000 | 22,   23,
    QMetaType::Void,

 // properties: name, type, flags
      25, 0x80000000 | 5, 0x00c9510b,
      26, 0x80000000 | 5, 0x00c9510b,
      27, 0x80000000 | 5, 0x00c9510b,
      28, 0x80000000 | 5, 0x00c9510b,
       2, 0x80000000 | 29, 0x00095009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,

 // properties: revision
       1,
       1,
       2,
       2,
       0,

       0        // eod
};

void QtCharts::DeclarativePercentBarSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativePercentBarSeries *_t = static_cast<DeclarativePercentBarSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisXChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 1: _t->axisYChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 2: _t->axisXTopChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 3: _t->axisYRightChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 4: _t->appendSeriesChildren((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 5: { DeclarativeBarSet* _r = _t->at((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 6: { DeclarativeBarSet* _r = _t->append((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariantList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 7: { DeclarativeBarSet* _r = _t->insert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->remove((*reinterpret_cast< QBarSet*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->clear(); break;
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
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBarSet* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativePercentBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativePercentBarSeries::axisXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeclarativePercentBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativePercentBarSeries::axisYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeclarativePercentBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativePercentBarSeries::axisXTopChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DeclarativePercentBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativePercentBarSeries::axisYRightChanged)) {
                *result = 3;
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
        DeclarativePercentBarSeries *_t = static_cast<DeclarativePercentBarSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisX(); break;
        case 1: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisY(); break;
        case 2: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisXTop(); break;
        case 3: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisYRight(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->seriesChildren(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativePercentBarSeries *_t = static_cast<DeclarativePercentBarSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAxisX(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 1: _t->setAxisY(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 2: _t->setAxisXTop(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 3: _t->setAxisYRight(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::DeclarativePercentBarSeries::staticMetaObject = {
    { &QPercentBarSeries::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativePercentBarSeries.data,
      qt_meta_data_QtCharts__DeclarativePercentBarSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativePercentBarSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativePercentBarSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativePercentBarSeries.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QPercentBarSeries::qt_metacast(_clname);
}

int QtCharts::DeclarativePercentBarSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPercentBarSeries::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void QtCharts::DeclarativePercentBarSeries::axisXChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::DeclarativePercentBarSeries::axisYChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::DeclarativePercentBarSeries::axisXTopChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::DeclarativePercentBarSeries::axisYRightChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QtCharts__DeclarativeHorizontalBarSeries_t {
    QByteArrayData data[30];
    char stringdata0[356];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativeHorizontalBarSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativeHorizontalBarSeries_t qt_meta_stringdata_QtCharts__DeclarativeHorizontalBarSeries = {
    {
QT_MOC_LITERAL(0, 0, 40), // "QtCharts::DeclarativeHorizont..."
QT_MOC_LITERAL(1, 41, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 57, 14), // "seriesChildren"
QT_MOC_LITERAL(3, 72, 12), // "axisXChanged"
QT_MOC_LITERAL(4, 85, 0), // ""
QT_MOC_LITERAL(5, 86, 14), // "QAbstractAxis*"
QT_MOC_LITERAL(6, 101, 4), // "axis"
QT_MOC_LITERAL(7, 106, 12), // "axisYChanged"
QT_MOC_LITERAL(8, 119, 15), // "axisXTopChanged"
QT_MOC_LITERAL(9, 135, 17), // "axisYRightChanged"
QT_MOC_LITERAL(10, 153, 20), // "appendSeriesChildren"
QT_MOC_LITERAL(11, 174, 26), // "QQmlListProperty<QObject>*"
QT_MOC_LITERAL(12, 201, 4), // "list"
QT_MOC_LITERAL(13, 206, 7), // "element"
QT_MOC_LITERAL(14, 214, 2), // "at"
QT_MOC_LITERAL(15, 217, 18), // "DeclarativeBarSet*"
QT_MOC_LITERAL(16, 236, 5), // "index"
QT_MOC_LITERAL(17, 242, 6), // "append"
QT_MOC_LITERAL(18, 249, 5), // "label"
QT_MOC_LITERAL(19, 255, 6), // "values"
QT_MOC_LITERAL(20, 262, 6), // "insert"
QT_MOC_LITERAL(21, 269, 6), // "remove"
QT_MOC_LITERAL(22, 276, 8), // "QBarSet*"
QT_MOC_LITERAL(23, 285, 6), // "barset"
QT_MOC_LITERAL(24, 292, 5), // "clear"
QT_MOC_LITERAL(25, 298, 5), // "axisX"
QT_MOC_LITERAL(26, 304, 5), // "axisY"
QT_MOC_LITERAL(27, 310, 8), // "axisXTop"
QT_MOC_LITERAL(28, 319, 10), // "axisYRight"
QT_MOC_LITERAL(29, 330, 25) // "QQmlListProperty<QObject>"

    },
    "QtCharts::DeclarativeHorizontalBarSeries\0"
    "DefaultProperty\0seriesChildren\0"
    "axisXChanged\0\0QAbstractAxis*\0axis\0"
    "axisYChanged\0axisXTopChanged\0"
    "axisYRightChanged\0appendSeriesChildren\0"
    "QQmlListProperty<QObject>*\0list\0element\0"
    "at\0DeclarativeBarSet*\0index\0append\0"
    "label\0values\0insert\0remove\0QBarSet*\0"
    "barset\0clear\0axisX\0axisY\0axisXTop\0"
    "axisYRight\0QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativeHorizontalBarSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       5,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   76,    4, 0x86 /* Public | MethodRevisioned */,
       7,    1,   79,    4, 0x86 /* Public | MethodRevisioned */,
       8,    1,   82,    4, 0x86 /* Public | MethodRevisioned */,
       9,    1,   85,    4, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   88,    4, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   93,    4, 0x02 /* Public */,
      17,    2,   96,    4, 0x02 /* Public */,
      20,    3,  101,    4, 0x02 /* Public */,
      21,    1,  108,    4, 0x02 /* Public */,
      24,    0,  111,    4, 0x02 /* Public */,

 // signals: revision
       1,
       1,
       2,
       2,

 // slots: revision
       0,

 // methods: revision
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

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11, QMetaType::QObjectStar,   12,   13,

 // methods: parameters
    0x80000000 | 15, QMetaType::Int,   16,
    0x80000000 | 15, QMetaType::QString, QMetaType::QVariantList,   18,   19,
    0x80000000 | 15, QMetaType::Int, QMetaType::QString, QMetaType::QVariantList,   16,   18,   19,
    QMetaType::Bool, 0x80000000 | 22,   23,
    QMetaType::Void,

 // properties: name, type, flags
      25, 0x80000000 | 5, 0x00c9510b,
      26, 0x80000000 | 5, 0x00c9510b,
      27, 0x80000000 | 5, 0x00c9510b,
      28, 0x80000000 | 5, 0x00c9510b,
       2, 0x80000000 | 29, 0x00095009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,

 // properties: revision
       1,
       1,
       2,
       2,
       0,

       0        // eod
};

void QtCharts::DeclarativeHorizontalBarSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativeHorizontalBarSeries *_t = static_cast<DeclarativeHorizontalBarSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisXChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 1: _t->axisYChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 2: _t->axisXTopChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 3: _t->axisYRightChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 4: _t->appendSeriesChildren((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 5: { DeclarativeBarSet* _r = _t->at((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 6: { DeclarativeBarSet* _r = _t->append((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariantList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 7: { DeclarativeBarSet* _r = _t->insert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->remove((*reinterpret_cast< QBarSet*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->clear(); break;
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
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBarSet* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativeHorizontalBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeHorizontalBarSeries::axisXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeclarativeHorizontalBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeHorizontalBarSeries::axisYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeclarativeHorizontalBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeHorizontalBarSeries::axisXTopChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DeclarativeHorizontalBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeHorizontalBarSeries::axisYRightChanged)) {
                *result = 3;
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
        DeclarativeHorizontalBarSeries *_t = static_cast<DeclarativeHorizontalBarSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisX(); break;
        case 1: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisY(); break;
        case 2: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisXTop(); break;
        case 3: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisYRight(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->seriesChildren(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativeHorizontalBarSeries *_t = static_cast<DeclarativeHorizontalBarSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAxisX(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 1: _t->setAxisY(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 2: _t->setAxisXTop(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 3: _t->setAxisYRight(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::DeclarativeHorizontalBarSeries::staticMetaObject = {
    { &QHorizontalBarSeries::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativeHorizontalBarSeries.data,
      qt_meta_data_QtCharts__DeclarativeHorizontalBarSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativeHorizontalBarSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativeHorizontalBarSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativeHorizontalBarSeries.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QHorizontalBarSeries::qt_metacast(_clname);
}

int QtCharts::DeclarativeHorizontalBarSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHorizontalBarSeries::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void QtCharts::DeclarativeHorizontalBarSeries::axisXChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::DeclarativeHorizontalBarSeries::axisYChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::DeclarativeHorizontalBarSeries::axisXTopChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::DeclarativeHorizontalBarSeries::axisYRightChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QtCharts__DeclarativeHorizontalStackedBarSeries_t {
    QByteArrayData data[30];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativeHorizontalStackedBarSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativeHorizontalStackedBarSeries_t qt_meta_stringdata_QtCharts__DeclarativeHorizontalStackedBarSeries = {
    {
QT_MOC_LITERAL(0, 0, 47), // "QtCharts::DeclarativeHorizont..."
QT_MOC_LITERAL(1, 48, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 64, 14), // "seriesChildren"
QT_MOC_LITERAL(3, 79, 12), // "axisXChanged"
QT_MOC_LITERAL(4, 92, 0), // ""
QT_MOC_LITERAL(5, 93, 14), // "QAbstractAxis*"
QT_MOC_LITERAL(6, 108, 4), // "axis"
QT_MOC_LITERAL(7, 113, 12), // "axisYChanged"
QT_MOC_LITERAL(8, 126, 15), // "axisXTopChanged"
QT_MOC_LITERAL(9, 142, 17), // "axisYRightChanged"
QT_MOC_LITERAL(10, 160, 20), // "appendSeriesChildren"
QT_MOC_LITERAL(11, 181, 26), // "QQmlListProperty<QObject>*"
QT_MOC_LITERAL(12, 208, 4), // "list"
QT_MOC_LITERAL(13, 213, 7), // "element"
QT_MOC_LITERAL(14, 221, 2), // "at"
QT_MOC_LITERAL(15, 224, 18), // "DeclarativeBarSet*"
QT_MOC_LITERAL(16, 243, 5), // "index"
QT_MOC_LITERAL(17, 249, 6), // "append"
QT_MOC_LITERAL(18, 256, 5), // "label"
QT_MOC_LITERAL(19, 262, 6), // "values"
QT_MOC_LITERAL(20, 269, 6), // "insert"
QT_MOC_LITERAL(21, 276, 6), // "remove"
QT_MOC_LITERAL(22, 283, 8), // "QBarSet*"
QT_MOC_LITERAL(23, 292, 6), // "barset"
QT_MOC_LITERAL(24, 299, 5), // "clear"
QT_MOC_LITERAL(25, 305, 5), // "axisX"
QT_MOC_LITERAL(26, 311, 5), // "axisY"
QT_MOC_LITERAL(27, 317, 8), // "axisXTop"
QT_MOC_LITERAL(28, 326, 10), // "axisYRight"
QT_MOC_LITERAL(29, 337, 25) // "QQmlListProperty<QObject>"

    },
    "QtCharts::DeclarativeHorizontalStackedBarSeries\0"
    "DefaultProperty\0seriesChildren\0"
    "axisXChanged\0\0QAbstractAxis*\0axis\0"
    "axisYChanged\0axisXTopChanged\0"
    "axisYRightChanged\0appendSeriesChildren\0"
    "QQmlListProperty<QObject>*\0list\0element\0"
    "at\0DeclarativeBarSet*\0index\0append\0"
    "label\0values\0insert\0remove\0QBarSet*\0"
    "barset\0clear\0axisX\0axisY\0axisXTop\0"
    "axisYRight\0QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativeHorizontalStackedBarSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       5,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   76,    4, 0x86 /* Public | MethodRevisioned */,
       7,    1,   79,    4, 0x86 /* Public | MethodRevisioned */,
       8,    1,   82,    4, 0x86 /* Public | MethodRevisioned */,
       9,    1,   85,    4, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   88,    4, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   93,    4, 0x02 /* Public */,
      17,    2,   96,    4, 0x02 /* Public */,
      20,    3,  101,    4, 0x02 /* Public */,
      21,    1,  108,    4, 0x02 /* Public */,
      24,    0,  111,    4, 0x02 /* Public */,

 // signals: revision
       1,
       1,
       2,
       2,

 // slots: revision
       0,

 // methods: revision
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

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11, QMetaType::QObjectStar,   12,   13,

 // methods: parameters
    0x80000000 | 15, QMetaType::Int,   16,
    0x80000000 | 15, QMetaType::QString, QMetaType::QVariantList,   18,   19,
    0x80000000 | 15, QMetaType::Int, QMetaType::QString, QMetaType::QVariantList,   16,   18,   19,
    QMetaType::Bool, 0x80000000 | 22,   23,
    QMetaType::Void,

 // properties: name, type, flags
      25, 0x80000000 | 5, 0x00c9510b,
      26, 0x80000000 | 5, 0x00c9510b,
      27, 0x80000000 | 5, 0x00c9510b,
      28, 0x80000000 | 5, 0x00c9510b,
       2, 0x80000000 | 29, 0x00095009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,

 // properties: revision
       1,
       1,
       2,
       2,
       0,

       0        // eod
};

void QtCharts::DeclarativeHorizontalStackedBarSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativeHorizontalStackedBarSeries *_t = static_cast<DeclarativeHorizontalStackedBarSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisXChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 1: _t->axisYChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 2: _t->axisXTopChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 3: _t->axisYRightChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 4: _t->appendSeriesChildren((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 5: { DeclarativeBarSet* _r = _t->at((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 6: { DeclarativeBarSet* _r = _t->append((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariantList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 7: { DeclarativeBarSet* _r = _t->insert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->remove((*reinterpret_cast< QBarSet*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->clear(); break;
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
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBarSet* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativeHorizontalStackedBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeHorizontalStackedBarSeries::axisXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeclarativeHorizontalStackedBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeHorizontalStackedBarSeries::axisYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeclarativeHorizontalStackedBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeHorizontalStackedBarSeries::axisXTopChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DeclarativeHorizontalStackedBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeHorizontalStackedBarSeries::axisYRightChanged)) {
                *result = 3;
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
        DeclarativeHorizontalStackedBarSeries *_t = static_cast<DeclarativeHorizontalStackedBarSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisX(); break;
        case 1: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisY(); break;
        case 2: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisXTop(); break;
        case 3: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisYRight(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->seriesChildren(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativeHorizontalStackedBarSeries *_t = static_cast<DeclarativeHorizontalStackedBarSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAxisX(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 1: _t->setAxisY(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 2: _t->setAxisXTop(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 3: _t->setAxisYRight(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::DeclarativeHorizontalStackedBarSeries::staticMetaObject = {
    { &QHorizontalStackedBarSeries::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativeHorizontalStackedBarSeries.data,
      qt_meta_data_QtCharts__DeclarativeHorizontalStackedBarSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativeHorizontalStackedBarSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativeHorizontalStackedBarSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativeHorizontalStackedBarSeries.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QHorizontalStackedBarSeries::qt_metacast(_clname);
}

int QtCharts::DeclarativeHorizontalStackedBarSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHorizontalStackedBarSeries::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void QtCharts::DeclarativeHorizontalStackedBarSeries::axisXChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::DeclarativeHorizontalStackedBarSeries::axisYChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::DeclarativeHorizontalStackedBarSeries::axisXTopChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::DeclarativeHorizontalStackedBarSeries::axisYRightChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QtCharts__DeclarativeHorizontalPercentBarSeries_t {
    QByteArrayData data[30];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativeHorizontalPercentBarSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativeHorizontalPercentBarSeries_t qt_meta_stringdata_QtCharts__DeclarativeHorizontalPercentBarSeries = {
    {
QT_MOC_LITERAL(0, 0, 47), // "QtCharts::DeclarativeHorizont..."
QT_MOC_LITERAL(1, 48, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 64, 14), // "seriesChildren"
QT_MOC_LITERAL(3, 79, 12), // "axisXChanged"
QT_MOC_LITERAL(4, 92, 0), // ""
QT_MOC_LITERAL(5, 93, 14), // "QAbstractAxis*"
QT_MOC_LITERAL(6, 108, 4), // "axis"
QT_MOC_LITERAL(7, 113, 12), // "axisYChanged"
QT_MOC_LITERAL(8, 126, 15), // "axisXTopChanged"
QT_MOC_LITERAL(9, 142, 17), // "axisYRightChanged"
QT_MOC_LITERAL(10, 160, 20), // "appendSeriesChildren"
QT_MOC_LITERAL(11, 181, 26), // "QQmlListProperty<QObject>*"
QT_MOC_LITERAL(12, 208, 4), // "list"
QT_MOC_LITERAL(13, 213, 7), // "element"
QT_MOC_LITERAL(14, 221, 2), // "at"
QT_MOC_LITERAL(15, 224, 18), // "DeclarativeBarSet*"
QT_MOC_LITERAL(16, 243, 5), // "index"
QT_MOC_LITERAL(17, 249, 6), // "append"
QT_MOC_LITERAL(18, 256, 5), // "label"
QT_MOC_LITERAL(19, 262, 6), // "values"
QT_MOC_LITERAL(20, 269, 6), // "insert"
QT_MOC_LITERAL(21, 276, 6), // "remove"
QT_MOC_LITERAL(22, 283, 8), // "QBarSet*"
QT_MOC_LITERAL(23, 292, 6), // "barset"
QT_MOC_LITERAL(24, 299, 5), // "clear"
QT_MOC_LITERAL(25, 305, 5), // "axisX"
QT_MOC_LITERAL(26, 311, 5), // "axisY"
QT_MOC_LITERAL(27, 317, 8), // "axisXTop"
QT_MOC_LITERAL(28, 326, 10), // "axisYRight"
QT_MOC_LITERAL(29, 337, 25) // "QQmlListProperty<QObject>"

    },
    "QtCharts::DeclarativeHorizontalPercentBarSeries\0"
    "DefaultProperty\0seriesChildren\0"
    "axisXChanged\0\0QAbstractAxis*\0axis\0"
    "axisYChanged\0axisXTopChanged\0"
    "axisYRightChanged\0appendSeriesChildren\0"
    "QQmlListProperty<QObject>*\0list\0element\0"
    "at\0DeclarativeBarSet*\0index\0append\0"
    "label\0values\0insert\0remove\0QBarSet*\0"
    "barset\0clear\0axisX\0axisY\0axisXTop\0"
    "axisYRight\0QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativeHorizontalPercentBarSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       5,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   76,    4, 0x86 /* Public | MethodRevisioned */,
       7,    1,   79,    4, 0x86 /* Public | MethodRevisioned */,
       8,    1,   82,    4, 0x86 /* Public | MethodRevisioned */,
       9,    1,   85,    4, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   88,    4, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   93,    4, 0x02 /* Public */,
      17,    2,   96,    4, 0x02 /* Public */,
      20,    3,  101,    4, 0x02 /* Public */,
      21,    1,  108,    4, 0x02 /* Public */,
      24,    0,  111,    4, 0x02 /* Public */,

 // signals: revision
       1,
       1,
       2,
       2,

 // slots: revision
       0,

 // methods: revision
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

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11, QMetaType::QObjectStar,   12,   13,

 // methods: parameters
    0x80000000 | 15, QMetaType::Int,   16,
    0x80000000 | 15, QMetaType::QString, QMetaType::QVariantList,   18,   19,
    0x80000000 | 15, QMetaType::Int, QMetaType::QString, QMetaType::QVariantList,   16,   18,   19,
    QMetaType::Bool, 0x80000000 | 22,   23,
    QMetaType::Void,

 // properties: name, type, flags
      25, 0x80000000 | 5, 0x00c9510b,
      26, 0x80000000 | 5, 0x00c9510b,
      27, 0x80000000 | 5, 0x00c9510b,
      28, 0x80000000 | 5, 0x00c9510b,
       2, 0x80000000 | 29, 0x00095009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,

 // properties: revision
       1,
       1,
       2,
       2,
       0,

       0        // eod
};

void QtCharts::DeclarativeHorizontalPercentBarSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativeHorizontalPercentBarSeries *_t = static_cast<DeclarativeHorizontalPercentBarSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisXChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 1: _t->axisYChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 2: _t->axisXTopChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 3: _t->axisYRightChanged((*reinterpret_cast< QAbstractAxis*(*)>(_a[1]))); break;
        case 4: _t->appendSeriesChildren((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 5: { DeclarativeBarSet* _r = _t->at((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 6: { DeclarativeBarSet* _r = _t->append((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariantList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 7: { DeclarativeBarSet* _r = _t->insert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< DeclarativeBarSet**>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->remove((*reinterpret_cast< QBarSet*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->clear(); break;
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
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBarSet* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativeHorizontalPercentBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeHorizontalPercentBarSeries::axisXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeclarativeHorizontalPercentBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeHorizontalPercentBarSeries::axisYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeclarativeHorizontalPercentBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeHorizontalPercentBarSeries::axisXTopChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DeclarativeHorizontalPercentBarSeries::*_t)(QAbstractAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeHorizontalPercentBarSeries::axisYRightChanged)) {
                *result = 3;
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
        DeclarativeHorizontalPercentBarSeries *_t = static_cast<DeclarativeHorizontalPercentBarSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisX(); break;
        case 1: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisY(); break;
        case 2: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisXTop(); break;
        case 3: *reinterpret_cast< QAbstractAxis**>(_v) = _t->axisYRight(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->seriesChildren(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativeHorizontalPercentBarSeries *_t = static_cast<DeclarativeHorizontalPercentBarSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAxisX(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 1: _t->setAxisY(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 2: _t->setAxisXTop(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        case 3: _t->setAxisYRight(*reinterpret_cast< QAbstractAxis**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::DeclarativeHorizontalPercentBarSeries::staticMetaObject = {
    { &QHorizontalPercentBarSeries::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativeHorizontalPercentBarSeries.data,
      qt_meta_data_QtCharts__DeclarativeHorizontalPercentBarSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativeHorizontalPercentBarSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativeHorizontalPercentBarSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativeHorizontalPercentBarSeries.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QHorizontalPercentBarSeries::qt_metacast(_clname);
}

int QtCharts::DeclarativeHorizontalPercentBarSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHorizontalPercentBarSeries::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void QtCharts::DeclarativeHorizontalPercentBarSeries::axisXChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::DeclarativeHorizontalPercentBarSeries::axisYChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::DeclarativeHorizontalPercentBarSeries::axisXTopChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::DeclarativeHorizontalPercentBarSeries::axisYRightChanged(QAbstractAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
