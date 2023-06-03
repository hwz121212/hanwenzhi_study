/****************************************************************************
** Meta object code from reading C++ file 'canvasglstatedump_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCanvas3D/private/canvasglstatedump_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvasglstatedump_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCanvas3D__CanvasGLStateDump_t {
    QByteArrayData data[10];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCanvas3D__CanvasGLStateDump_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCanvas3D__CanvasGLStateDump_t qt_meta_stringdata_QtCanvas3D__CanvasGLStateDump = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QtCanvas3D::CanvasGLStateDump"
QT_MOC_LITERAL(1, 30, 14), // "getGLStateDump"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "stateDumpEnums"
QT_MOC_LITERAL(4, 61, 7), // "options"
QT_MOC_LITERAL(5, 69, 15), // "DUMP_BASIC_ONLY"
QT_MOC_LITERAL(6, 85, 45), // "QtCanvas3D::CanvasGLStateDump..."
QT_MOC_LITERAL(7, 131, 29), // "DUMP_VERTEX_ATTRIB_ARRAYS_BIT"
QT_MOC_LITERAL(8, 161, 37), // "DUMP_VERTEX_ATTRIB_ARRAYS_BUF..."
QT_MOC_LITERAL(9, 199, 9) // "DUMP_FULL"

    },
    "QtCanvas3D::CanvasGLStateDump\0"
    "getGLStateDump\0\0stateDumpEnums\0options\0"
    "DUMP_BASIC_ONLY\0"
    "QtCanvas3D::CanvasGLStateDump::stateDumpEnums\0"
    "DUMP_VERTEX_ATTRIB_ARRAYS_BIT\0"
    "DUMP_VERTEX_ATTRIB_ARRAYS_BUFFERS_BIT\0"
    "DUMP_FULL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCanvas3D__CanvasGLStateDump[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   28, // properties
       1,   40, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x02 /* Public */,
       1,    0,   27,    2, 0x22 /* Public | MethodCloned */,

 // methods: parameters
    QMetaType::QString, 0x80000000 | 3,    4,
    QMetaType::QString,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x00095009,
       7, 0x80000000 | 6, 0x00095009,
       8, 0x80000000 | 6, 0x00095009,
       9, 0x80000000 | 6, 0x00095009,

 // enums: name, flags, count, data
       3, 0x0,    4,   44,

 // enum data: key, value
       5, uint(QtCanvas3D::CanvasGLStateDump::DUMP_BASIC_ONLY),
       7, uint(QtCanvas3D::CanvasGLStateDump::DUMP_VERTEX_ATTRIB_ARRAYS_BIT),
       8, uint(QtCanvas3D::CanvasGLStateDump::DUMP_VERTEX_ATTRIB_ARRAYS_BUFFERS_BIT),
       9, uint(QtCanvas3D::CanvasGLStateDump::DUMP_FULL),

       0        // eod
};

void QtCanvas3D::CanvasGLStateDump::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CanvasGLStateDump *_t = static_cast<CanvasGLStateDump *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->getGLStateDump((*reinterpret_cast< stateDumpEnums(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getGLStateDump();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CanvasGLStateDump *_t = static_cast<CanvasGLStateDump *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QtCanvas3D::CanvasGLStateDump::stateDumpEnums*>(_v) = _t->DUMP_BASIC_ONLY_read(); break;
        case 1: *reinterpret_cast< QtCanvas3D::CanvasGLStateDump::stateDumpEnums*>(_v) = _t->DUMP_VERTEX_ATTRIB_ARRAYS_BIT_read(); break;
        case 2: *reinterpret_cast< QtCanvas3D::CanvasGLStateDump::stateDumpEnums*>(_v) = _t->DUMP_VERTEX_ATTRIB_ARRAYS_BUFFERS_BIT_read(); break;
        case 3: *reinterpret_cast< QtCanvas3D::CanvasGLStateDump::stateDumpEnums*>(_v) = _t->DUMP_FULL_read(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCanvas3D::CanvasGLStateDump::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCanvas3D__CanvasGLStateDump.data,
      qt_meta_data_QtCanvas3D__CanvasGLStateDump,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCanvas3D::CanvasGLStateDump::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCanvas3D::CanvasGLStateDump::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCanvas3D__CanvasGLStateDump.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCanvas3D::CanvasGLStateDump::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
