/****************************************************************************
** Meta object code from reading C++ file 'qsurfacedataproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qsurfacedataproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsurfacedataproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__QSurfaceDataProxy_t {
    QByteArrayData data[19];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__QSurfaceDataProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__QSurfaceDataProxy_t qt_meta_stringdata_QtDataVisualization__QSurfaceDataProxy = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QtDataVisualization::QSurface..."
QT_MOC_LITERAL(1, 39, 10), // "arrayReset"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 9), // "rowsAdded"
QT_MOC_LITERAL(4, 61, 10), // "startIndex"
QT_MOC_LITERAL(5, 72, 5), // "count"
QT_MOC_LITERAL(6, 78, 11), // "rowsChanged"
QT_MOC_LITERAL(7, 90, 11), // "rowsRemoved"
QT_MOC_LITERAL(8, 102, 12), // "rowsInserted"
QT_MOC_LITERAL(9, 115, 11), // "itemChanged"
QT_MOC_LITERAL(10, 127, 8), // "rowIndex"
QT_MOC_LITERAL(11, 136, 11), // "columnIndex"
QT_MOC_LITERAL(12, 148, 15), // "rowCountChanged"
QT_MOC_LITERAL(13, 164, 18), // "columnCountChanged"
QT_MOC_LITERAL(14, 183, 13), // "seriesChanged"
QT_MOC_LITERAL(15, 197, 17), // "QSurface3DSeries*"
QT_MOC_LITERAL(16, 215, 6), // "series"
QT_MOC_LITERAL(17, 222, 8), // "rowCount"
QT_MOC_LITERAL(18, 231, 11) // "columnCount"

    },
    "QtDataVisualization::QSurfaceDataProxy\0"
    "arrayReset\0\0rowsAdded\0startIndex\0count\0"
    "rowsChanged\0rowsRemoved\0rowsInserted\0"
    "itemChanged\0rowIndex\0columnIndex\0"
    "rowCountChanged\0columnCountChanged\0"
    "seriesChanged\0QSurface3DSeries*\0series\0"
    "rowCount\0columnCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__QSurfaceDataProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    2,   60,    2, 0x06 /* Public */,
       6,    2,   65,    2, 0x06 /* Public */,
       7,    2,   70,    2, 0x06 /* Public */,
       8,    2,   75,    2, 0x06 /* Public */,
       9,    2,   80,    2, 0x06 /* Public */,
      12,    1,   85,    2, 0x06 /* Public */,
      13,    1,   88,    2, 0x06 /* Public */,
      14,    1,   91,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 15,   16,

 // properties: name, type, flags
      17, QMetaType::Int, 0x00495001,
      18, QMetaType::Int, 0x00495001,
      16, 0x80000000 | 15, 0x00495009,

 // properties: notify_signal_id
       6,
       7,
       8,

       0        // eod
};

void QtDataVisualization::QSurfaceDataProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSurfaceDataProxy *_t = static_cast<QSurfaceDataProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->arrayReset(); break;
        case 1: _t->rowsAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->rowsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->rowsRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->rowsInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->itemChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->rowCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->columnCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->seriesChanged((*reinterpret_cast< QSurface3DSeries*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QSurfaceDataProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSurfaceDataProxy::arrayReset)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSurfaceDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSurfaceDataProxy::rowsAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QSurfaceDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSurfaceDataProxy::rowsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QSurfaceDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSurfaceDataProxy::rowsRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QSurfaceDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSurfaceDataProxy::rowsInserted)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QSurfaceDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSurfaceDataProxy::itemChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QSurfaceDataProxy::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSurfaceDataProxy::rowCountChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QSurfaceDataProxy::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSurfaceDataProxy::columnCountChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QSurfaceDataProxy::*_t)(QSurface3DSeries * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSurfaceDataProxy::seriesChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QSurfaceDataProxy *_t = static_cast<QSurfaceDataProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->columnCount(); break;
        case 2: *reinterpret_cast< QSurface3DSeries**>(_v) = _t->series(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::QSurfaceDataProxy::staticMetaObject = {
    { &QAbstractDataProxy::staticMetaObject, qt_meta_stringdata_QtDataVisualization__QSurfaceDataProxy.data,
      qt_meta_data_QtDataVisualization__QSurfaceDataProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::QSurfaceDataProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::QSurfaceDataProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__QSurfaceDataProxy.stringdata0))
        return static_cast<void*>(this);
    return QAbstractDataProxy::qt_metacast(_clname);
}

int QtDataVisualization::QSurfaceDataProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractDataProxy::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtDataVisualization::QSurfaceDataProxy::arrayReset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtDataVisualization::QSurfaceDataProxy::rowsAdded(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::QSurfaceDataProxy::rowsChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtDataVisualization::QSurfaceDataProxy::rowsRemoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtDataVisualization::QSurfaceDataProxy::rowsInserted(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtDataVisualization::QSurfaceDataProxy::itemChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtDataVisualization::QSurfaceDataProxy::rowCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QtDataVisualization::QSurfaceDataProxy::columnCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QtDataVisualization::QSurfaceDataProxy::seriesChanged(QSurface3DSeries * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
