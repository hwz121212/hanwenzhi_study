/****************************************************************************
** Meta object code from reading C++ file 'qbardataproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qbardataproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbardataproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__QBarDataProxy_t {
    QByteArrayData data[21];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__QBarDataProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__QBarDataProxy_t qt_meta_stringdata_QtDataVisualization__QBarDataProxy = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QtDataVisualization::QBarData..."
QT_MOC_LITERAL(1, 35, 10), // "arrayReset"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 9), // "rowsAdded"
QT_MOC_LITERAL(4, 57, 10), // "startIndex"
QT_MOC_LITERAL(5, 68, 5), // "count"
QT_MOC_LITERAL(6, 74, 11), // "rowsChanged"
QT_MOC_LITERAL(7, 86, 11), // "rowsRemoved"
QT_MOC_LITERAL(8, 98, 12), // "rowsInserted"
QT_MOC_LITERAL(9, 111, 11), // "itemChanged"
QT_MOC_LITERAL(10, 123, 8), // "rowIndex"
QT_MOC_LITERAL(11, 132, 11), // "columnIndex"
QT_MOC_LITERAL(12, 144, 15), // "rowCountChanged"
QT_MOC_LITERAL(13, 160, 16), // "rowLabelsChanged"
QT_MOC_LITERAL(14, 177, 19), // "columnLabelsChanged"
QT_MOC_LITERAL(15, 197, 13), // "seriesChanged"
QT_MOC_LITERAL(16, 211, 13), // "QBar3DSeries*"
QT_MOC_LITERAL(17, 225, 6), // "series"
QT_MOC_LITERAL(18, 232, 8), // "rowCount"
QT_MOC_LITERAL(19, 241, 9), // "rowLabels"
QT_MOC_LITERAL(20, 251, 12) // "columnLabels"

    },
    "QtDataVisualization::QBarDataProxy\0"
    "arrayReset\0\0rowsAdded\0startIndex\0count\0"
    "rowsChanged\0rowsRemoved\0rowsInserted\0"
    "itemChanged\0rowIndex\0columnIndex\0"
    "rowCountChanged\0rowLabelsChanged\0"
    "columnLabelsChanged\0seriesChanged\0"
    "QBar3DSeries*\0series\0rowCount\0rowLabels\0"
    "columnLabels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__QBarDataProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       4,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    2,   65,    2, 0x06 /* Public */,
       6,    2,   70,    2, 0x06 /* Public */,
       7,    2,   75,    2, 0x06 /* Public */,
       8,    2,   80,    2, 0x06 /* Public */,
       9,    2,   85,    2, 0x06 /* Public */,
      12,    1,   90,    2, 0x06 /* Public */,
      13,    0,   93,    2, 0x06 /* Public */,
      14,    0,   94,    2, 0x06 /* Public */,
      15,    1,   95,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,

 // properties: name, type, flags
      18, QMetaType::Int, 0x00495001,
      19, QMetaType::QStringList, 0x00495103,
      20, QMetaType::QStringList, 0x00495103,
      17, 0x80000000 | 16, 0x00495009,

 // properties: notify_signal_id
       6,
       7,
       8,
       9,

       0        // eod
};

void QtDataVisualization::QBarDataProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBarDataProxy *_t = static_cast<QBarDataProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->arrayReset(); break;
        case 1: _t->rowsAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->rowsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->rowsRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->rowsInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->itemChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->rowCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->rowLabelsChanged(); break;
        case 8: _t->columnLabelsChanged(); break;
        case 9: _t->seriesChanged((*reinterpret_cast< QBar3DSeries*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QBarDataProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarDataProxy::arrayReset)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QBarDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarDataProxy::rowsAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QBarDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarDataProxy::rowsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QBarDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarDataProxy::rowsRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QBarDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarDataProxy::rowsInserted)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QBarDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarDataProxy::itemChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QBarDataProxy::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarDataProxy::rowCountChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QBarDataProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarDataProxy::rowLabelsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QBarDataProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarDataProxy::columnLabelsChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QBarDataProxy::*_t)(QBar3DSeries * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarDataProxy::seriesChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QBarDataProxy *_t = static_cast<QBarDataProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->rowLabels(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->columnLabels(); break;
        case 3: *reinterpret_cast< QBar3DSeries**>(_v) = _t->series(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QBarDataProxy *_t = static_cast<QBarDataProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setRowLabels(*reinterpret_cast< QStringList*>(_v)); break;
        case 2: _t->setColumnLabels(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::QBarDataProxy::staticMetaObject = {
    { &QAbstractDataProxy::staticMetaObject, qt_meta_stringdata_QtDataVisualization__QBarDataProxy.data,
      qt_meta_data_QtDataVisualization__QBarDataProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::QBarDataProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::QBarDataProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__QBarDataProxy.stringdata0))
        return static_cast<void*>(this);
    return QAbstractDataProxy::qt_metacast(_clname);
}

int QtDataVisualization::QBarDataProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractDataProxy::qt_metacall(_c, _id, _a);
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
void QtDataVisualization::QBarDataProxy::arrayReset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtDataVisualization::QBarDataProxy::rowsAdded(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::QBarDataProxy::rowsChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtDataVisualization::QBarDataProxy::rowsRemoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtDataVisualization::QBarDataProxy::rowsInserted(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtDataVisualization::QBarDataProxy::itemChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtDataVisualization::QBarDataProxy::rowCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QtDataVisualization::QBarDataProxy::rowLabelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QtDataVisualization::QBarDataProxy::columnLabelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QtDataVisualization::QBarDataProxy::seriesChanged(QBar3DSeries * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
