/****************************************************************************
** Meta object code from reading C++ file 'qqmlapplicationengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qqmlapplicationengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlapplicationengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlApplicationEngine_t {
    QByteArrayData data[9];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlApplicationEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlApplicationEngine_t qt_meta_stringdata_QQmlApplicationEngine = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQmlApplicationEngine"
QT_MOC_LITERAL(1, 22, 13), // "objectCreated"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6), // "object"
QT_MOC_LITERAL(4, 44, 3), // "url"
QT_MOC_LITERAL(5, 48, 4), // "load"
QT_MOC_LITERAL(6, 53, 8), // "filePath"
QT_MOC_LITERAL(7, 62, 8), // "loadData"
QT_MOC_LITERAL(8, 71, 4) // "data"

    },
    "QQmlApplicationEngine\0objectCreated\0"
    "\0object\0url\0load\0filePath\0loadData\0"
    "data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlApplicationEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   44,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       7,    2,   50,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QUrl,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QUrl,    8,    4,
    QMetaType::Void, QMetaType::QByteArray,    8,

       0        // eod
};

void QQmlApplicationEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlApplicationEngine *_t = static_cast<QQmlApplicationEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->objectCreated((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 1: _t->load((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->loadData((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 4: _t->loadData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlApplicationEngine::*_t)(QObject * , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlApplicationEngine::objectCreated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QQmlApplicationEngine::staticMetaObject = {
    { &QQmlEngine::staticMetaObject, qt_meta_stringdata_QQmlApplicationEngine.data,
      qt_meta_data_QQmlApplicationEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlApplicationEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlApplicationEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlApplicationEngine.stringdata0))
        return static_cast<void*>(this);
    return QQmlEngine::qt_metacast(_clname);
}

int QQmlApplicationEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlEngine::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QQmlApplicationEngine::objectCreated(QObject * _t1, const QUrl & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
