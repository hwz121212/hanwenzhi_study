/****************************************************************************
** Meta object code from reading C++ file 'qvalue3daxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qvalue3daxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvalue3daxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__QValue3DAxis_t {
    QByteArrayData data[16];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__QValue3DAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__QValue3DAxis_t qt_meta_stringdata_QtDataVisualization__QValue3DAxis = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QtDataVisualization::QValue3D..."
QT_MOC_LITERAL(1, 34, 19), // "segmentCountChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 5), // "count"
QT_MOC_LITERAL(4, 61, 22), // "subSegmentCountChanged"
QT_MOC_LITERAL(5, 84, 18), // "labelFormatChanged"
QT_MOC_LITERAL(6, 103, 6), // "format"
QT_MOC_LITERAL(7, 110, 16), // "formatterChanged"
QT_MOC_LITERAL(8, 127, 22), // "QValue3DAxisFormatter*"
QT_MOC_LITERAL(9, 150, 9), // "formatter"
QT_MOC_LITERAL(10, 160, 15), // "reversedChanged"
QT_MOC_LITERAL(11, 176, 6), // "enable"
QT_MOC_LITERAL(12, 183, 12), // "segmentCount"
QT_MOC_LITERAL(13, 196, 15), // "subSegmentCount"
QT_MOC_LITERAL(14, 212, 11), // "labelFormat"
QT_MOC_LITERAL(15, 224, 8) // "reversed"

    },
    "QtDataVisualization::QValue3DAxis\0"
    "segmentCountChanged\0\0count\0"
    "subSegmentCountChanged\0labelFormatChanged\0"
    "format\0formatterChanged\0QValue3DAxisFormatter*\0"
    "formatter\0reversedChanged\0enable\0"
    "segmentCount\0subSegmentCount\0labelFormat\0"
    "reversed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__QValue3DAxis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       7,    1,   53,    2, 0x86 /* Public | MethodRevisioned */,
      10,    1,   56,    2, 0x86 /* Public | MethodRevisioned */,

 // signals: revision
       0,
       0,
       0,
       1,
       1,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::QString, 0x00495103,
       9, 0x80000000 | 8, 0x00c9510b,
      15, QMetaType::Bool, 0x00c95103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

 // properties: revision
       0,
       0,
       0,
       1,
       1,

       0        // eod
};

void QtDataVisualization::QValue3DAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QValue3DAxis *_t = static_cast<QValue3DAxis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->segmentCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->subSegmentCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->labelFormatChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->formatterChanged((*reinterpret_cast< QValue3DAxisFormatter*(*)>(_a[1]))); break;
        case 4: _t->reversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QValue3DAxisFormatter* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QValue3DAxis::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QValue3DAxis::segmentCountChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QValue3DAxis::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QValue3DAxis::subSegmentCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QValue3DAxis::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QValue3DAxis::labelFormatChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QValue3DAxis::*_t)(QValue3DAxisFormatter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QValue3DAxis::formatterChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QValue3DAxis::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QValue3DAxis::reversedChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QValue3DAxisFormatter* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QValue3DAxis *_t = static_cast<QValue3DAxis *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->segmentCount(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->subSegmentCount(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->labelFormat(); break;
        case 3: *reinterpret_cast< QValue3DAxisFormatter**>(_v) = _t->formatter(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->reversed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QValue3DAxis *_t = static_cast<QValue3DAxis *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSegmentCount(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setSubSegmentCount(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setLabelFormat(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFormatter(*reinterpret_cast< QValue3DAxisFormatter**>(_v)); break;
        case 4: _t->setReversed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::QValue3DAxis::staticMetaObject = {
    { &QAbstract3DAxis::staticMetaObject, qt_meta_stringdata_QtDataVisualization__QValue3DAxis.data,
      qt_meta_data_QtDataVisualization__QValue3DAxis,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::QValue3DAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::QValue3DAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__QValue3DAxis.stringdata0))
        return static_cast<void*>(this);
    return QAbstract3DAxis::qt_metacast(_clname);
}

int QtDataVisualization::QValue3DAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstract3DAxis::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
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
void QtDataVisualization::QValue3DAxis::segmentCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDataVisualization::QValue3DAxis::subSegmentCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::QValue3DAxis::labelFormatChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtDataVisualization::QValue3DAxis::formatterChanged(QValue3DAxisFormatter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtDataVisualization::QValue3DAxis::reversedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
