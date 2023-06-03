/****************************************************************************
** Meta object code from reading C++ file 'declarativecategoryaxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../declarativecategoryaxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'declarativecategoryaxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__DeclarativeCategoryRange_t {
    QByteArrayData data[3];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativeCategoryRange_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativeCategoryRange_t qt_meta_stringdata_QtCharts__DeclarativeCategoryRange = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QtCharts::DeclarativeCategory..."
QT_MOC_LITERAL(1, 35, 8), // "endValue"
QT_MOC_LITERAL(2, 44, 5) // "label"

    },
    "QtCharts::DeclarativeCategoryRange\0"
    "endValue\0label"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativeCategoryRange[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095103,
       2, QMetaType::QString, 0x00095103,

       0        // eod
};

void QtCharts::DeclarativeCategoryRange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        DeclarativeCategoryRange *_t = static_cast<DeclarativeCategoryRange *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->endValue(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativeCategoryRange *_t = static_cast<DeclarativeCategoryRange *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEndValue(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
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

const QMetaObject QtCharts::DeclarativeCategoryRange::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativeCategoryRange.data,
      qt_meta_data_QtCharts__DeclarativeCategoryRange,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativeCategoryRange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativeCategoryRange::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativeCategoryRange.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCharts::DeclarativeCategoryRange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QtCharts__DeclarativeCategoryAxis_t {
    QByteArrayData data[22];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativeCategoryAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativeCategoryAxis_t qt_meta_stringdata_QtCharts__DeclarativeCategoryAxis = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QtCharts::DeclarativeCategory..."
QT_MOC_LITERAL(1, 34, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 50, 12), // "axisChildren"
QT_MOC_LITERAL(3, 63, 21), // "labelsPositionChanged"
QT_MOC_LITERAL(4, 85, 0), // ""
QT_MOC_LITERAL(5, 86, 18), // "AxisLabelsPosition"
QT_MOC_LITERAL(6, 105, 8), // "position"
QT_MOC_LITERAL(7, 114, 6), // "append"
QT_MOC_LITERAL(8, 121, 5), // "label"
QT_MOC_LITERAL(9, 127, 16), // "categoryEndValue"
QT_MOC_LITERAL(10, 144, 6), // "remove"
QT_MOC_LITERAL(11, 151, 7), // "replace"
QT_MOC_LITERAL(12, 159, 8), // "oldLabel"
QT_MOC_LITERAL(13, 168, 8), // "newLabel"
QT_MOC_LITERAL(14, 177, 18), // "appendAxisChildren"
QT_MOC_LITERAL(15, 196, 26), // "QQmlListProperty<QObject>*"
QT_MOC_LITERAL(16, 223, 4), // "list"
QT_MOC_LITERAL(17, 228, 7), // "element"
QT_MOC_LITERAL(18, 236, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(19, 262, 14), // "labelsPosition"
QT_MOC_LITERAL(20, 277, 24), // "AxisLabelsPositionCenter"
QT_MOC_LITERAL(21, 302, 25) // "AxisLabelsPositionOnValue"

    },
    "QtCharts::DeclarativeCategoryAxis\0"
    "DefaultProperty\0axisChildren\0"
    "labelsPositionChanged\0\0AxisLabelsPosition\0"
    "position\0append\0label\0categoryEndValue\0"
    "remove\0replace\0oldLabel\0newLabel\0"
    "appendAxisChildren\0QQmlListProperty<QObject>*\0"
    "list\0element\0QQmlListProperty<QObject>\0"
    "labelsPosition\0AxisLabelsPositionCenter\0"
    "AxisLabelsPositionOnValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativeCategoryAxis[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       2,   67, // properties
       1,   77, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   46,    4, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   49,    4, 0x0a /* Public */,
      10,    1,   54,    4, 0x0a /* Public */,
      11,    2,   57,    4, 0x0a /* Public */,
      14,    2,   62,    4, 0x0a /* Public */,

 // signals: revision
       1,

 // slots: revision
       0,
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QReal,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QObjectStar,   16,   17,

 // properties: name, type, flags
       2, 0x80000000 | 18, 0x00095009,
      19, 0x80000000 | 5, 0x00c9510b,

 // properties: notify_signal_id
       0,
       0,

 // properties: revision
       0,
       1,

 // enums: name, flags, count, data
       5, 0x0,    2,   81,

 // enum data: key, value
      20, uint(QtCharts::DeclarativeCategoryAxis::AxisLabelsPositionCenter),
      21, uint(QtCharts::DeclarativeCategoryAxis::AxisLabelsPositionOnValue),

       0        // eod
};

void QtCharts::DeclarativeCategoryAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativeCategoryAxis *_t = static_cast<DeclarativeCategoryAxis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->labelsPositionChanged((*reinterpret_cast< AxisLabelsPosition(*)>(_a[1]))); break;
        case 1: _t->append((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 2: _t->remove((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->replace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->appendAxisChildren((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativeCategoryAxis::*_t)(AxisLabelsPosition );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeCategoryAxis::labelsPositionChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DeclarativeCategoryAxis *_t = static_cast<DeclarativeCategoryAxis *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->axisChildren(); break;
        case 1: *reinterpret_cast< AxisLabelsPosition*>(_v) = _t->labelsPosition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativeCategoryAxis *_t = static_cast<DeclarativeCategoryAxis *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setLabelsPosition(*reinterpret_cast< AxisLabelsPosition*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::DeclarativeCategoryAxis::staticMetaObject = {
    { &QCategoryAxis::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativeCategoryAxis.data,
      qt_meta_data_QtCharts__DeclarativeCategoryAxis,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativeCategoryAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativeCategoryAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativeCategoryAxis.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QCategoryAxis::qt_metacast(_clname);
}

int QtCharts::DeclarativeCategoryAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCategoryAxis::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCharts::DeclarativeCategoryAxis::labelsPositionChanged(AxisLabelsPosition _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
