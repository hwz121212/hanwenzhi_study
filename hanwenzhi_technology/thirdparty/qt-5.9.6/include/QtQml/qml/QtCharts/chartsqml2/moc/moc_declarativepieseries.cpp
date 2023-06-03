/****************************************************************************
** Meta object code from reading C++ file 'declarativepieseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../declarativepieseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'declarativepieseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__DeclarativePieSlice_t {
    QByteArrayData data[5];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativePieSlice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativePieSlice_t qt_meta_stringdata_QtCharts__DeclarativePieSlice = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QtCharts::DeclarativePieSlice"
QT_MOC_LITERAL(1, 30, 20), // "brushFilenameChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 13), // "brushFilename"
QT_MOC_LITERAL(4, 66, 18) // "handleBrushChanged"

    },
    "QtCharts::DeclarativePieSlice\0"
    "brushFilenameChanged\0\0brushFilename\0"
    "handleBrushChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativePieSlice[] = {

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

void QtCharts::DeclarativePieSlice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativePieSlice *_t = static_cast<DeclarativePieSlice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->brushFilenameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->handleBrushChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativePieSlice::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativePieSlice::brushFilenameChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DeclarativePieSlice *_t = static_cast<DeclarativePieSlice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->brushFilename(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DeclarativePieSlice *_t = static_cast<DeclarativePieSlice *>(_o);
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

const QMetaObject QtCharts::DeclarativePieSlice::staticMetaObject = {
    { &QPieSlice::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativePieSlice.data,
      qt_meta_data_QtCharts__DeclarativePieSlice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativePieSlice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativePieSlice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativePieSlice.stringdata0))
        return static_cast<void*>(this);
    return QPieSlice::qt_metacast(_clname);
}

int QtCharts::DeclarativePieSlice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPieSlice::qt_metacall(_c, _id, _a);
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
void QtCharts::DeclarativePieSlice::brushFilenameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QtCharts__DeclarativePieSeries_t {
    QByteArrayData data[26];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__DeclarativePieSeries_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__DeclarativePieSeries_t qt_meta_stringdata_QtCharts__DeclarativePieSeries = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QtCharts::DeclarativePieSeries"
QT_MOC_LITERAL(1, 31, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 47, 14), // "seriesChildren"
QT_MOC_LITERAL(3, 62, 10), // "sliceAdded"
QT_MOC_LITERAL(4, 73, 0), // ""
QT_MOC_LITERAL(5, 74, 10), // "QPieSlice*"
QT_MOC_LITERAL(6, 85, 5), // "slice"
QT_MOC_LITERAL(7, 91, 12), // "sliceRemoved"
QT_MOC_LITERAL(8, 104, 20), // "appendSeriesChildren"
QT_MOC_LITERAL(9, 125, 26), // "QQmlListProperty<QObject>*"
QT_MOC_LITERAL(10, 152, 4), // "list"
QT_MOC_LITERAL(11, 157, 7), // "element"
QT_MOC_LITERAL(12, 165, 11), // "handleAdded"
QT_MOC_LITERAL(13, 177, 17), // "QList<QPieSlice*>"
QT_MOC_LITERAL(14, 195, 6), // "slices"
QT_MOC_LITERAL(15, 202, 13), // "handleRemoved"
QT_MOC_LITERAL(16, 216, 2), // "at"
QT_MOC_LITERAL(17, 219, 5), // "index"
QT_MOC_LITERAL(18, 225, 4), // "find"
QT_MOC_LITERAL(19, 230, 5), // "label"
QT_MOC_LITERAL(20, 236, 6), // "append"
QT_MOC_LITERAL(21, 243, 20), // "DeclarativePieSlice*"
QT_MOC_LITERAL(22, 264, 5), // "value"
QT_MOC_LITERAL(23, 270, 6), // "remove"
QT_MOC_LITERAL(24, 277, 5), // "clear"
QT_MOC_LITERAL(25, 283, 25) // "QQmlListProperty<QObject>"

    },
    "QtCharts::DeclarativePieSeries\0"
    "DefaultProperty\0seriesChildren\0"
    "sliceAdded\0\0QPieSlice*\0slice\0sliceRemoved\0"
    "appendSeriesChildren\0QQmlListProperty<QObject>*\0"
    "list\0element\0handleAdded\0QList<QPieSlice*>\0"
    "slices\0handleRemoved\0at\0index\0find\0"
    "label\0append\0DeclarativePieSlice*\0"
    "value\0remove\0clear\0QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__DeclarativePieSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       1,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   66,    4, 0x06 /* Public */,
       7,    1,   69,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   72,    4, 0x0a /* Public */,
      12,    1,   77,    4, 0x0a /* Public */,
      15,    1,   80,    4, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      16,    1,   83,    4, 0x02 /* Public */,
      18,    1,   86,    4, 0x02 /* Public */,
      20,    2,   89,    4, 0x02 /* Public */,
      23,    1,   94,    4, 0x02 /* Public */,
      24,    0,   97,    4, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::QObjectStar,   10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,

 // methods: parameters
    0x80000000 | 5, QMetaType::Int,   17,
    0x80000000 | 5, QMetaType::QString,   19,
    0x80000000 | 21, QMetaType::QString, QMetaType::QReal,   19,   22,
    QMetaType::Bool, 0x80000000 | 5,    6,
    QMetaType::Void,

 // properties: name, type, flags
       2, 0x80000000 | 25, 0x00095009,

       0        // eod
};

void QtCharts::DeclarativePieSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeclarativePieSeries *_t = static_cast<DeclarativePieSeries *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliceAdded((*reinterpret_cast< QPieSlice*(*)>(_a[1]))); break;
        case 1: _t->sliceRemoved((*reinterpret_cast< QPieSlice*(*)>(_a[1]))); break;
        case 2: _t->appendSeriesChildren((*reinterpret_cast< QQmlListProperty<QObject>*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 3: _t->handleAdded((*reinterpret_cast< QList<QPieSlice*>(*)>(_a[1]))); break;
        case 4: _t->handleRemoved((*reinterpret_cast< QList<QPieSlice*>(*)>(_a[1]))); break;
        case 5: { QPieSlice* _r = _t->at((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPieSlice**>(_a[0]) = std::move(_r); }  break;
        case 6: { QPieSlice* _r = _t->find((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPieSlice**>(_a[0]) = std::move(_r); }  break;
        case 7: { DeclarativePieSlice* _r = _t->append((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< DeclarativePieSlice**>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->remove((*reinterpret_cast< QPieSlice*(*)>(_a[1])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPieSlice* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPieSlice* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPieSlice*> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPieSlice*> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPieSlice* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DeclarativePieSeries::*_t)(QPieSlice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativePieSeries::sliceAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeclarativePieSeries::*_t)(QPieSlice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativePieSeries::sliceRemoved)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DeclarativePieSeries *_t = static_cast<DeclarativePieSeries *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->seriesChildren(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCharts::DeclarativePieSeries::staticMetaObject = {
    { &QPieSeries::staticMetaObject, qt_meta_stringdata_QtCharts__DeclarativePieSeries.data,
      qt_meta_data_QtCharts__DeclarativePieSeries,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::DeclarativePieSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::DeclarativePieSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__DeclarativePieSeries.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QPieSeries::qt_metacast(_clname);
}

int QtCharts::DeclarativePieSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPieSeries::qt_metacall(_c, _id, _a);
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
void QtCharts::DeclarativePieSeries::sliceAdded(QPieSlice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::DeclarativePieSeries::sliceRemoved(QPieSlice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
