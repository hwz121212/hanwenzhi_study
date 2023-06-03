/****************************************************************************
** Meta object code from reading C++ file 'qv4profiling_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQml/private/qv4profiling_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qv4profiling_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QV4__Profiling__Profiler_t {
    QByteArrayData data[6];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QV4__Profiling__Profiler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QV4__Profiling__Profiler_t qt_meta_stringdata_QV4__Profiling__Profiler = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QV4::Profiling::Profiler"
QT_MOC_LITERAL(1, 25, 9), // "dataReady"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 36), // "QV4::Profiling::FunctionLocat..."
QT_MOC_LITERAL(4, 73, 47), // "QVector<QV4::Profiling::Funct..."
QT_MOC_LITERAL(5, 121, 51) // "QVector<QV4::Profiling::Memor..."

    },
    "QV4::Profiling::Profiler\0dataReady\0\0"
    "QV4::Profiling::FunctionLocationHash\0"
    "QVector<QV4::Profiling::FunctionCallProperties>\0"
    "QVector<QV4::Profiling::MemoryAllocationProperties>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QV4__Profiling__Profiler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 5,    2,    2,    2,

       0        // eod
};

void QV4::Profiling::Profiler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Profiler *_t = static_cast<Profiler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataReady((*reinterpret_cast< const QV4::Profiling::FunctionLocationHash(*)>(_a[1])),(*reinterpret_cast< const QVector<QV4::Profiling::FunctionCallProperties>(*)>(_a[2])),(*reinterpret_cast< const QVector<QV4::Profiling::MemoryAllocationProperties>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QV4::Profiling::FunctionLocationHash >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QV4::Profiling::FunctionCallProperties> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QV4::Profiling::MemoryAllocationProperties> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Profiler::*_t)(const QV4::Profiling::FunctionLocationHash & , const QVector<QV4::Profiling::FunctionCallProperties> & , const QVector<QV4::Profiling::MemoryAllocationProperties> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Profiler::dataReady)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QV4::Profiling::Profiler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QV4__Profiling__Profiler.data,
      qt_meta_data_QV4__Profiling__Profiler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QV4::Profiling::Profiler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QV4::Profiling::Profiler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QV4__Profiling__Profiler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QV4::Profiling::Profiler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QV4::Profiling::Profiler::dataReady(const QV4::Profiling::FunctionLocationHash & _t1, const QVector<QV4::Profiling::FunctionCallProperties> & _t2, const QVector<QV4::Profiling::MemoryAllocationProperties> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
