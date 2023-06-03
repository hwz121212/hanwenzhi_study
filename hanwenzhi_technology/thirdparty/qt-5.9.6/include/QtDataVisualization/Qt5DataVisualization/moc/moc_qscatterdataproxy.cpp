/****************************************************************************
** Meta object code from reading C++ file 'qscatterdataproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qscatterdataproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscatterdataproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__QScatterDataProxy_t {
    QByteArrayData data[14];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__QScatterDataProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__QScatterDataProxy_t qt_meta_stringdata_QtDataVisualization__QScatterDataProxy = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QtDataVisualization::QScatter..."
QT_MOC_LITERAL(1, 39, 10), // "arrayReset"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 10), // "itemsAdded"
QT_MOC_LITERAL(4, 62, 10), // "startIndex"
QT_MOC_LITERAL(5, 73, 5), // "count"
QT_MOC_LITERAL(6, 79, 12), // "itemsChanged"
QT_MOC_LITERAL(7, 92, 12), // "itemsRemoved"
QT_MOC_LITERAL(8, 105, 13), // "itemsInserted"
QT_MOC_LITERAL(9, 119, 16), // "itemCountChanged"
QT_MOC_LITERAL(10, 136, 13), // "seriesChanged"
QT_MOC_LITERAL(11, 150, 17), // "QScatter3DSeries*"
QT_MOC_LITERAL(12, 168, 6), // "series"
QT_MOC_LITERAL(13, 175, 9) // "itemCount"

    },
    "QtDataVisualization::QScatterDataProxy\0"
    "arrayReset\0\0itemsAdded\0startIndex\0"
    "count\0itemsChanged\0itemsRemoved\0"
    "itemsInserted\0itemCountChanged\0"
    "seriesChanged\0QScatter3DSeries*\0series\0"
    "itemCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__QScatterDataProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    2,   50,    2, 0x06 /* Public */,
       6,    2,   55,    2, 0x06 /* Public */,
       7,    2,   60,    2, 0x06 /* Public */,
       8,    2,   65,    2, 0x06 /* Public */,
       9,    1,   70,    2, 0x06 /* Public */,
      10,    1,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 11,   12,

 // properties: name, type, flags
      13, QMetaType::Int, 0x00495001,
      12, 0x80000000 | 11, 0x00495009,

 // properties: notify_signal_id
       5,
       6,

       0        // eod
};

void QtDataVisualization::QScatterDataProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScatterDataProxy *_t = static_cast<QScatterDataProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->arrayReset(); break;
        case 1: _t->itemsAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->itemsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->itemsRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->itemsInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->itemCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->seriesChanged((*reinterpret_cast< QScatter3DSeries*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QScatterDataProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatterDataProxy::arrayReset)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QScatterDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatterDataProxy::itemsAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QScatterDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatterDataProxy::itemsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QScatterDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatterDataProxy::itemsRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QScatterDataProxy::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatterDataProxy::itemsInserted)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QScatterDataProxy::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatterDataProxy::itemCountChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QScatterDataProxy::*_t)(QScatter3DSeries * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScatterDataProxy::seriesChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QScatterDataProxy *_t = static_cast<QScatterDataProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->itemCount(); break;
        case 1: *reinterpret_cast< QScatter3DSeries**>(_v) = _t->series(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::QScatterDataProxy::staticMetaObject = {
    { &QAbstractDataProxy::staticMetaObject, qt_meta_stringdata_QtDataVisualization__QScatterDataProxy.data,
      qt_meta_data_QtDataVisualization__QScatterDataProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::QScatterDataProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::QScatterDataProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__QScatterDataProxy.stringdata0))
        return static_cast<void*>(this);
    return QAbstractDataProxy::qt_metacast(_clname);
}

int QtDataVisualization::QScatterDataProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractDataProxy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void QtDataVisualization::QScatterDataProxy::arrayReset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtDataVisualization::QScatterDataProxy::itemsAdded(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::QScatterDataProxy::itemsChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtDataVisualization::QScatterDataProxy::itemsRemoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtDataVisualization::QScatterDataProxy::itemsInserted(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtDataVisualization::QScatterDataProxy::itemCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtDataVisualization::QScatterDataProxy::seriesChanged(QScatter3DSeries * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
