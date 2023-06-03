/****************************************************************************
** Meta object code from reading C++ file 'qcomputecommand.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcomputecommand.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcomputecommand.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QComputeCommand_t {
    QByteArrayData data[11];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QComputeCommand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QComputeCommand_t qt_meta_stringdata_Qt3DRender__QComputeCommand = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Qt3DRender::QComputeCommand"
QT_MOC_LITERAL(1, 28, 17), // "workGroupXChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 17), // "workGroupYChanged"
QT_MOC_LITERAL(4, 65, 17), // "workGroupZChanged"
QT_MOC_LITERAL(5, 83, 13), // "setWorkGroupX"
QT_MOC_LITERAL(6, 97, 10), // "workGroupX"
QT_MOC_LITERAL(7, 108, 13), // "setWorkGroupY"
QT_MOC_LITERAL(8, 122, 10), // "workGroupY"
QT_MOC_LITERAL(9, 133, 13), // "setWorkGroupZ"
QT_MOC_LITERAL(10, 147, 10) // "workGroupZ"

    },
    "Qt3DRender::QComputeCommand\0"
    "workGroupXChanged\0\0workGroupYChanged\0"
    "workGroupZChanged\0setWorkGroupX\0"
    "workGroupX\0setWorkGroupY\0workGroupY\0"
    "setWorkGroupZ\0workGroupZ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QComputeCommand[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   47,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       9,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00495103,
       8, QMetaType::Int, 0x00495103,
      10, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Qt3DRender::QComputeCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QComputeCommand *_t = static_cast<QComputeCommand *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->workGroupXChanged(); break;
        case 1: _t->workGroupYChanged(); break;
        case 2: _t->workGroupZChanged(); break;
        case 3: _t->setWorkGroupX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setWorkGroupY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setWorkGroupZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QComputeCommand::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComputeCommand::workGroupXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QComputeCommand::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComputeCommand::workGroupYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QComputeCommand::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComputeCommand::workGroupZChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QComputeCommand *_t = static_cast<QComputeCommand *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->workGroupX(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->workGroupY(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->workGroupZ(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QComputeCommand *_t = static_cast<QComputeCommand *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWorkGroupX(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setWorkGroupY(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setWorkGroupZ(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QComputeCommand::staticMetaObject = {
    { &Qt3DCore::QComponent::staticMetaObject, qt_meta_stringdata_Qt3DRender__QComputeCommand.data,
      qt_meta_data_Qt3DRender__QComputeCommand,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QComputeCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QComputeCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QComputeCommand.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QComponent::qt_metacast(_clname);
}

int Qt3DRender::QComputeCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void Qt3DRender::QComputeCommand::workGroupXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Qt3DRender::QComputeCommand::workGroupYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Qt3DRender::QComputeCommand::workGroupZChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
