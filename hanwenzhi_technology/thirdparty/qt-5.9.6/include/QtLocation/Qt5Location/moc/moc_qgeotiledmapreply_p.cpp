/****************************************************************************
** Meta object code from reading C++ file 'qgeotiledmapreply_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qgeotiledmapreply_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeotiledmapreply_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoTiledMapReply_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoTiledMapReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoTiledMapReply_t qt_meta_stringdata_QGeoTiledMapReply = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QGeoTiledMapReply"
QT_MOC_LITERAL(1, 18, 8), // "finished"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "aborted"
QT_MOC_LITERAL(4, 36, 5), // "error"
QT_MOC_LITERAL(5, 42, 24), // "QGeoTiledMapReply::Error"
QT_MOC_LITERAL(6, 67, 11) // "errorString"

    },
    "QGeoTiledMapReply\0finished\0\0aborted\0"
    "error\0QGeoTiledMapReply::Error\0"
    "errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoTiledMapReply[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    2,   36,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x26 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    4,    6,
    QMetaType::Void, 0x80000000 | 5,    4,

       0        // eod
};

void QGeoTiledMapReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoTiledMapReply *_t = static_cast<QGeoTiledMapReply *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->aborted(); break;
        case 2: _t->error((*reinterpret_cast< QGeoTiledMapReply::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->error((*reinterpret_cast< QGeoTiledMapReply::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGeoTiledMapReply::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoTiledMapReply::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGeoTiledMapReply::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoTiledMapReply::aborted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGeoTiledMapReply::*_t)(QGeoTiledMapReply::Error , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoTiledMapReply::error)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QGeoTiledMapReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoTiledMapReply.data,
      qt_meta_data_QGeoTiledMapReply,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoTiledMapReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoTiledMapReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoTiledMapReply.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGeoTiledMapReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QGeoTiledMapReply::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGeoTiledMapReply::aborted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGeoTiledMapReply::error(QGeoTiledMapReply::Error _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
