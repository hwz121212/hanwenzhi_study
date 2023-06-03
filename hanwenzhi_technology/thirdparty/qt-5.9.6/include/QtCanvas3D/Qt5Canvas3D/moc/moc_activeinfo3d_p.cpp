/****************************************************************************
** Meta object code from reading C++ file 'activeinfo3d_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCanvas3D/private/activeinfo3d_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activeinfo3d_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCanvas3D__CanvasActiveInfo_t {
    QByteArrayData data[10];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCanvas3D__CanvasActiveInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCanvas3D__CanvasActiveInfo_t qt_meta_stringdata_QtCanvas3D__CanvasActiveInfo = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QtCanvas3D::CanvasActiveInfo"
QT_MOC_LITERAL(1, 29, 11), // "sizeChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "size"
QT_MOC_LITERAL(4, 47, 11), // "typeChanged"
QT_MOC_LITERAL(5, 59, 22), // "CanvasContext::glEnums"
QT_MOC_LITERAL(6, 82, 4), // "type"
QT_MOC_LITERAL(7, 87, 11), // "nameChanged"
QT_MOC_LITERAL(8, 99, 4), // "name"
QT_MOC_LITERAL(9, 104, 34) // "QtCanvas3D::CanvasContext::gl..."

    },
    "QtCanvas3D::CanvasActiveInfo\0sizeChanged\0"
    "\0size\0typeChanged\0CanvasContext::glEnums\0"
    "type\0nameChanged\0name\0"
    "QtCanvas3D::CanvasContext::glEnums"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCanvas3D__CanvasActiveInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       7,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495001,
       6, 0x80000000 | 9, 0x00495009,
       8, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QtCanvas3D::CanvasActiveInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CanvasActiveInfo *_t = static_cast<CanvasActiveInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->typeChanged((*reinterpret_cast< CanvasContext::glEnums(*)>(_a[1]))); break;
        case 2: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CanvasActiveInfo::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasActiveInfo::sizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CanvasActiveInfo::*_t)(CanvasContext::glEnums );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasActiveInfo::typeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CanvasActiveInfo::*_t)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasActiveInfo::nameChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CanvasActiveInfo *_t = static_cast<CanvasActiveInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->size(); break;
        case 1: *reinterpret_cast< QtCanvas3D::CanvasContext::glEnums*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QtCanvas3D__CanvasActiveInfo[] = {
        &QtCanvas3D::CanvasContext::staticMetaObject,
    nullptr
};

const QMetaObject QtCanvas3D::CanvasActiveInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCanvas3D__CanvasActiveInfo.data,
      qt_meta_data_QtCanvas3D__CanvasActiveInfo,  qt_static_metacall, qt_meta_extradata_QtCanvas3D__CanvasActiveInfo, nullptr}
};


const QMetaObject *QtCanvas3D::CanvasActiveInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCanvas3D::CanvasActiveInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCanvas3D__CanvasActiveInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCanvas3D::CanvasActiveInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void QtCanvas3D::CanvasActiveInfo::sizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCanvas3D::CanvasActiveInfo::typeChanged(CanvasContext::glEnums _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCanvas3D::CanvasActiveInfo::nameChanged(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
