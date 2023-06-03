/****************************************************************************
** Meta object code from reading C++ file 'canvastextureprovider_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCanvas3D/private/canvastextureprovider_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvastextureprovider_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCanvas3D__CanvasTextureProvider_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCanvas3D__CanvasTextureProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCanvas3D__CanvasTextureProvider_t qt_meta_stringdata_QtCanvas3D__CanvasTextureProvider = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QtCanvas3D::CanvasTextureProv..."
QT_MOC_LITERAL(1, 34, 12), // "textureReady"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11), // "QQuickItem*"
QT_MOC_LITERAL(4, 60, 6), // "source"
QT_MOC_LITERAL(5, 67, 23), // "createTextureFromSource"
QT_MOC_LITERAL(6, 91, 8) // "QJSValue"

    },
    "QtCanvas3D::CanvasTextureProvider\0"
    "textureReady\0\0QQuickItem*\0source\0"
    "createTextureFromSource\0QJSValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCanvas3D__CanvasTextureProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    0x80000000 | 6, 0x80000000 | 3,    4,

       0        // eod
};

void QtCanvas3D::CanvasTextureProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CanvasTextureProvider *_t = static_cast<CanvasTextureProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textureReady((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 1: { QJSValue _r = _t->createTextureFromSource((*reinterpret_cast< QQuickItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CanvasTextureProvider::*_t)(QQuickItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasTextureProvider::textureReady)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QtCanvas3D::CanvasTextureProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCanvas3D__CanvasTextureProvider.data,
      qt_meta_data_QtCanvas3D__CanvasTextureProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCanvas3D::CanvasTextureProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCanvas3D::CanvasTextureProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCanvas3D__CanvasTextureProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCanvas3D::CanvasTextureProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QtCanvas3D::CanvasTextureProvider::textureReady(QQuickItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
