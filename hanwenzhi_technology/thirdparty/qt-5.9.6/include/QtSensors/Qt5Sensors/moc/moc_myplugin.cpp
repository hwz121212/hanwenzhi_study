/****************************************************************************
** Meta object code from reading C++ file 'myplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../myplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MySensorGestureRecognizer_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MySensorGestureRecognizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MySensorGestureRecognizer_t qt_meta_stringdata_MySensorGestureRecognizer = {
    {
QT_MOC_LITERAL(0, 0, 25), // "MySensorGestureRecognizer"
QT_MOC_LITERAL(1, 26, 8), // "mySignal"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "MySensorGestureRecognizer\0mySignal\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MySensorGestureRecognizer[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void MySensorGestureRecognizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MySensorGestureRecognizer *_t = static_cast<MySensorGestureRecognizer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mySignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MySensorGestureRecognizer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MySensorGestureRecognizer::mySignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MySensorGestureRecognizer::staticMetaObject = {
    { &QSensorGestureRecognizer::staticMetaObject, qt_meta_stringdata_MySensorGestureRecognizer.data,
      qt_meta_data_MySensorGestureRecognizer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MySensorGestureRecognizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MySensorGestureRecognizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MySensorGestureRecognizer.stringdata0))
        return static_cast<void*>(this);
    return QSensorGestureRecognizer::qt_metacast(_clname);
}

int MySensorGestureRecognizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSensorGestureRecognizer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MySensorGestureRecognizer::mySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_MySensorGesturePlugin_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MySensorGesturePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MySensorGesturePlugin_t qt_meta_stringdata_MySensorGesturePlugin = {
    {
QT_MOC_LITERAL(0, 0, 21) // "MySensorGesturePlugin"

    },
    "MySensorGesturePlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MySensorGesturePlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MySensorGesturePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject MySensorGesturePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MySensorGesturePlugin.data,
      qt_meta_data_MySensorGesturePlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MySensorGesturePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MySensorGesturePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MySensorGesturePlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QSensorGesturePluginInterface"))
        return static_cast< QSensorGesturePluginInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.QSensorGesturePluginInterface"))
        return static_cast< QSensorGesturePluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int MySensorGesturePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
