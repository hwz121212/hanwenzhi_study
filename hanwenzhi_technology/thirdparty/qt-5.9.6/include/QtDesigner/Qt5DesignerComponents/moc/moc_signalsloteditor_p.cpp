/****************************************************************************
** Meta object code from reading C++ file 'signalsloteditor_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../signalsloteditor/signalsloteditor_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signalsloteditor_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__ConnectionModel_t {
    QByteArrayData data[10];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ConnectionModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ConnectionModel_t qt_meta_stringdata_qdesigner_internal__ConnectionModel = {
    {
QT_MOC_LITERAL(0, 0, 35), // "qdesigner_internal::Connectio..."
QT_MOC_LITERAL(1, 36, 15), // "connectionAdded"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 11), // "Connection*"
QT_MOC_LITERAL(4, 65, 3), // "con"
QT_MOC_LITERAL(5, 69, 17), // "connectionRemoved"
QT_MOC_LITERAL(6, 87, 3), // "idx"
QT_MOC_LITERAL(7, 91, 23), // "aboutToRemoveConnection"
QT_MOC_LITERAL(8, 115, 20), // "aboutToAddConnection"
QT_MOC_LITERAL(9, 136, 17) // "connectionChanged"

    },
    "qdesigner_internal::ConnectionModel\0"
    "connectionAdded\0\0Connection*\0con\0"
    "connectionRemoved\0idx\0aboutToRemoveConnection\0"
    "aboutToAddConnection\0connectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ConnectionModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,
       8,    1,   48,    2, 0x08 /* Private */,
       9,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void qdesigner_internal::ConnectionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConnectionModel *_t = static_cast<ConnectionModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionAdded((*reinterpret_cast< Connection*(*)>(_a[1]))); break;
        case 1: _t->connectionRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->aboutToRemoveConnection((*reinterpret_cast< Connection*(*)>(_a[1]))); break;
        case 3: _t->aboutToAddConnection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->connectionChanged((*reinterpret_cast< Connection*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject qdesigner_internal::ConnectionModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ConnectionModel.data,
      qt_meta_data_qdesigner_internal__ConnectionModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ConnectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ConnectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ConnectionModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int qdesigner_internal::ConnectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
