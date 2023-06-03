/****************************************************************************
** Meta object code from reading C++ file 'qpicktriangleevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qpicktriangleevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpicktriangleevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QPickTriangleEvent_t {
    QByteArrayData data[6];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QPickTriangleEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QPickTriangleEvent_t qt_meta_stringdata_Qt3DRender__QPickTriangleEvent = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Qt3DRender::QPickTriangleEvent"
QT_MOC_LITERAL(1, 31, 13), // "triangleIndex"
QT_MOC_LITERAL(2, 45, 12), // "vertex1Index"
QT_MOC_LITERAL(3, 58, 12), // "vertex2Index"
QT_MOC_LITERAL(4, 71, 12), // "vertex3Index"
QT_MOC_LITERAL(5, 84, 3) // "uvw"

    },
    "Qt3DRender::QPickTriangleEvent\0"
    "triangleIndex\0vertex1Index\0vertex2Index\0"
    "vertex3Index\0uvw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QPickTriangleEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::UInt, 0x00095401,
       2, QMetaType::UInt, 0x00095401,
       3, QMetaType::UInt, 0x00095401,
       4, QMetaType::UInt, 0x00095401,
       5, QMetaType::QVector3D, 0x00095401,

       0        // eod
};

void Qt3DRender::QPickTriangleEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QPickTriangleEvent *_t = static_cast<QPickTriangleEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->triangleIndex(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->vertex1Index(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->vertex2Index(); break;
        case 3: *reinterpret_cast< uint*>(_v) = _t->vertex3Index(); break;
        case 4: *reinterpret_cast< QVector3D*>(_v) = _t->uvw(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Qt3DRender::QPickTriangleEvent::staticMetaObject = {
    { &QPickEvent::staticMetaObject, qt_meta_stringdata_Qt3DRender__QPickTriangleEvent.data,
      qt_meta_data_Qt3DRender__QPickTriangleEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QPickTriangleEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QPickTriangleEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QPickTriangleEvent.stringdata0))
        return static_cast<void*>(this);
    return QPickEvent::qt_metacast(_clname);
}

int Qt3DRender::QPickTriangleEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPickEvent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
