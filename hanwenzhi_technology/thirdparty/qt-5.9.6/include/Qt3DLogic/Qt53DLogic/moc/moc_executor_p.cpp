/****************************************************************************
** Meta object code from reading C++ file 'executor_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DLogic/private/executor_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'executor_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DLogic__Logic__Executor_t {
    QByteArrayData data[5];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DLogic__Logic__Executor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DLogic__Logic__Executor_t qt_meta_stringdata_Qt3DLogic__Logic__Executor = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Qt3DLogic::Logic::Executor"
QT_MOC_LITERAL(1, 27, 24), // "enqueueLogicFrameUpdates"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 26), // "QVector<Qt3DCore::QNodeId>"
QT_MOC_LITERAL(4, 80, 7) // "nodeIds"

    },
    "Qt3DLogic::Logic::Executor\0"
    "enqueueLogicFrameUpdates\0\0"
    "QVector<Qt3DCore::QNodeId>\0nodeIds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DLogic__Logic__Executor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Qt3DLogic::Logic::Executor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Executor *_t = static_cast<Executor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enqueueLogicFrameUpdates((*reinterpret_cast< const QVector<Qt3DCore::QNodeId>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<Qt3DCore::QNodeId> >(); break;
            }
            break;
        }
    }
}

const QMetaObject Qt3DLogic::Logic::Executor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DLogic__Logic__Executor.data,
      qt_meta_data_Qt3DLogic__Logic__Executor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DLogic::Logic::Executor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DLogic::Logic::Executor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DLogic__Logic__Executor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DLogic::Logic::Executor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
