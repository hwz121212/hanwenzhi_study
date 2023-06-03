/****************************************************************************
** Meta object code from reading C++ file 'qsortpolicy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qsortpolicy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsortpolicy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QSortPolicy_t {
    QByteArrayData data[12];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QSortPolicy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QSortPolicy_t qt_meta_stringdata_Qt3DRender__QSortPolicy = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Qt3DRender::QSortPolicy"
QT_MOC_LITERAL(1, 24, 16), // "sortTypesChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 17), // "QVector<SortType>"
QT_MOC_LITERAL(4, 60, 9), // "sortTypes"
QT_MOC_LITERAL(5, 70, 12), // "QVector<int>"
QT_MOC_LITERAL(6, 83, 12), // "setSortTypes"
QT_MOC_LITERAL(7, 96, 12), // "sortTypesInt"
QT_MOC_LITERAL(8, 109, 8), // "SortType"
QT_MOC_LITERAL(9, 118, 15), // "StateChangeCost"
QT_MOC_LITERAL(10, 134, 11), // "BackToFront"
QT_MOC_LITERAL(11, 146, 8) // "Material"

    },
    "Qt3DRender::QSortPolicy\0sortTypesChanged\0"
    "\0QVector<SortType>\0sortTypes\0QVector<int>\0"
    "setSortTypes\0sortTypesInt\0SortType\0"
    "StateChangeCost\0BackToFront\0Material"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QSortPolicy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   46, // properties
       1,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       1,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    7,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x0049510b,

 // properties: notify_signal_id
       0,

 // enums: name, flags, count, data
       8, 0x0,    3,   54,

 // enum data: key, value
       9, uint(Qt3DRender::QSortPolicy::StateChangeCost),
      10, uint(Qt3DRender::QSortPolicy::BackToFront),
      11, uint(Qt3DRender::QSortPolicy::Material),

       0        // eod
};

void Qt3DRender::QSortPolicy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSortPolicy *_t = static_cast<QSortPolicy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sortTypesChanged((*reinterpret_cast< const QVector<SortType>(*)>(_a[1]))); break;
        case 1: _t->sortTypesChanged((*reinterpret_cast< const QVector<int>(*)>(_a[1]))); break;
        case 2: _t->setSortTypes((*reinterpret_cast< const QVector<SortType>(*)>(_a[1]))); break;
        case 3: _t->setSortTypes((*reinterpret_cast< const QVector<int>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QSortPolicy::*_t)(const QVector<SortType> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSortPolicy::sortTypesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSortPolicy::*_t)(const QVector<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSortPolicy::sortTypesChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QSortPolicy *_t = static_cast<QSortPolicy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector<int>*>(_v) = _t->sortTypesInt(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QSortPolicy *_t = static_cast<QSortPolicy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSortTypes(*reinterpret_cast< QVector<int>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QSortPolicy::staticMetaObject = {
    { &QFrameGraphNode::staticMetaObject, qt_meta_stringdata_Qt3DRender__QSortPolicy.data,
      qt_meta_data_Qt3DRender__QSortPolicy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QSortPolicy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QSortPolicy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QSortPolicy.stringdata0))
        return static_cast<void*>(this);
    return QFrameGraphNode::qt_metacast(_clname);
}

int Qt3DRender::QSortPolicy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrameGraphNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
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
void Qt3DRender::QSortPolicy::sortTypesChanged(const QVector<SortType> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QSortPolicy::sortTypesChanged(const QVector<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
