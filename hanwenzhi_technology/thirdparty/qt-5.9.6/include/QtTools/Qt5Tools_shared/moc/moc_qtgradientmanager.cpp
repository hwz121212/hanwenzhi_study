/****************************************************************************
** Meta object code from reading C++ file 'qtgradientmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtgradienteditor/qtgradientmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtgradientmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtGradientManager_t {
    QByteArrayData data[16];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtGradientManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtGradientManager_t qt_meta_stringdata_QtGradientManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QtGradientManager"
QT_MOC_LITERAL(1, 18, 13), // "gradientAdded"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 2), // "id"
QT_MOC_LITERAL(4, 36, 9), // "QGradient"
QT_MOC_LITERAL(5, 46, 8), // "gradient"
QT_MOC_LITERAL(6, 55, 15), // "gradientRenamed"
QT_MOC_LITERAL(7, 71, 5), // "newId"
QT_MOC_LITERAL(8, 77, 15), // "gradientChanged"
QT_MOC_LITERAL(9, 93, 11), // "newGradient"
QT_MOC_LITERAL(10, 105, 15), // "gradientRemoved"
QT_MOC_LITERAL(11, 121, 11), // "addGradient"
QT_MOC_LITERAL(12, 133, 14), // "renameGradient"
QT_MOC_LITERAL(13, 148, 14), // "changeGradient"
QT_MOC_LITERAL(14, 163, 14), // "removeGradient"
QT_MOC_LITERAL(15, 178, 5) // "clear"

    },
    "QtGradientManager\0gradientAdded\0\0id\0"
    "QGradient\0gradient\0gradientRenamed\0"
    "newId\0gradientChanged\0newGradient\0"
    "gradientRemoved\0addGradient\0renameGradient\0"
    "changeGradient\0removeGradient\0clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtGradientManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       6,    2,   64,    2, 0x06 /* Public */,
       8,    2,   69,    2, 0x06 /* Public */,
      10,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   77,    2, 0x0a /* Public */,
      12,    2,   82,    2, 0x0a /* Public */,
      13,    2,   87,    2, 0x0a /* Public */,
      14,    1,   92,    2, 0x0a /* Public */,
      15,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    9,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::QString, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    9,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void QtGradientManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtGradientManager *_t = static_cast<QtGradientManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gradientAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QGradient(*)>(_a[2]))); break;
        case 1: _t->gradientRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->gradientChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QGradient(*)>(_a[2]))); break;
        case 3: _t->gradientRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { QString _r = _t->addGradient((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QGradient(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->renameGradient((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->changeGradient((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QGradient(*)>(_a[2]))); break;
        case 7: _t->removeGradient((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtGradientManager::*_t)(const QString & , const QGradient & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientManager::gradientAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtGradientManager::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientManager::gradientRenamed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QtGradientManager::*_t)(const QString & , const QGradient & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientManager::gradientChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QtGradientManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientManager::gradientRemoved)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QtGradientManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtGradientManager.data,
      qt_meta_data_QtGradientManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtGradientManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtGradientManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtGradientManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtGradientManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QtGradientManager::gradientAdded(const QString & _t1, const QGradient & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtGradientManager::gradientRenamed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtGradientManager::gradientChanged(const QString & _t1, const QGradient & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtGradientManager::gradientRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
