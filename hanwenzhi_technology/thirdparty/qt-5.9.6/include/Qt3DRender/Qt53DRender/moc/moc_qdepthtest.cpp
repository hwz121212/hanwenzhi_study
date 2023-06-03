/****************************************************************************
** Meta object code from reading C++ file 'qdepthtest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qdepthtest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdepthtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QDepthTest_t {
    QByteArrayData data[14];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QDepthTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QDepthTest_t qt_meta_stringdata_Qt3DRender__QDepthTest = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Qt3DRender::QDepthTest"
QT_MOC_LITERAL(1, 23, 20), // "depthFunctionChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 13), // "DepthFunction"
QT_MOC_LITERAL(4, 59, 13), // "depthFunction"
QT_MOC_LITERAL(5, 73, 16), // "setDepthFunction"
QT_MOC_LITERAL(6, 90, 5), // "Never"
QT_MOC_LITERAL(7, 96, 6), // "Always"
QT_MOC_LITERAL(8, 103, 4), // "Less"
QT_MOC_LITERAL(9, 108, 11), // "LessOrEqual"
QT_MOC_LITERAL(10, 120, 5), // "Equal"
QT_MOC_LITERAL(11, 126, 14), // "GreaterOrEqual"
QT_MOC_LITERAL(12, 141, 7), // "Greater"
QT_MOC_LITERAL(13, 149, 8) // "NotEqual"

    },
    "Qt3DRender::QDepthTest\0depthFunctionChanged\0"
    "\0DepthFunction\0depthFunction\0"
    "setDepthFunction\0Never\0Always\0Less\0"
    "LessOrEqual\0Equal\0GreaterOrEqual\0"
    "Greater\0NotEqual"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QDepthTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   30, // properties
       1,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,

 // enums: name, flags, count, data
       3, 0x0,    8,   38,

 // enum data: key, value
       6, uint(Qt3DRender::QDepthTest::Never),
       7, uint(Qt3DRender::QDepthTest::Always),
       8, uint(Qt3DRender::QDepthTest::Less),
       9, uint(Qt3DRender::QDepthTest::LessOrEqual),
      10, uint(Qt3DRender::QDepthTest::Equal),
      11, uint(Qt3DRender::QDepthTest::GreaterOrEqual),
      12, uint(Qt3DRender::QDepthTest::Greater),
      13, uint(Qt3DRender::QDepthTest::NotEqual),

       0        // eod
};

void Qt3DRender::QDepthTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDepthTest *_t = static_cast<QDepthTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->depthFunctionChanged((*reinterpret_cast< DepthFunction(*)>(_a[1]))); break;
        case 1: _t->setDepthFunction((*reinterpret_cast< DepthFunction(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDepthTest::*_t)(DepthFunction );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDepthTest::depthFunctionChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDepthTest *_t = static_cast<QDepthTest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< DepthFunction*>(_v) = _t->depthFunction(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDepthTest *_t = static_cast<QDepthTest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDepthFunction(*reinterpret_cast< DepthFunction*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QDepthTest::staticMetaObject = {
    { &QRenderState::staticMetaObject, qt_meta_stringdata_Qt3DRender__QDepthTest.data,
      qt_meta_data_Qt3DRender__QDepthTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QDepthTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QDepthTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QDepthTest.stringdata0))
        return static_cast<void*>(this);
    return QRenderState::qt_metacast(_clname);
}

int Qt3DRender::QDepthTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRenderState::qt_metacall(_c, _id, _a);
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
void Qt3DRender::QDepthTest::depthFunctionChanged(DepthFunction _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
