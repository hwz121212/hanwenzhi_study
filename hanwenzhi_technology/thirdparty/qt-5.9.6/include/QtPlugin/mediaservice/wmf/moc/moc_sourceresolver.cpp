/****************************************************************************
** Meta object code from reading C++ file 'sourceresolver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sourceresolver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sourceresolver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SourceResolver_t {
    QByteArrayData data[5];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SourceResolver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SourceResolver_t qt_meta_stringdata_SourceResolver = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SourceResolver"
QT_MOC_LITERAL(1, 15, 5), // "error"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 2), // "hr"
QT_MOC_LITERAL(4, 25, 16) // "mediaSourceReady"

    },
    "SourceResolver\0error\0\0hr\0mediaSourceReady"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SourceResolver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Long,    3,
    QMetaType::Void,

       0        // eod
};

void SourceResolver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SourceResolver *_t = static_cast<SourceResolver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 1: _t->mediaSourceReady(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SourceResolver::*_t)(long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SourceResolver::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SourceResolver::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SourceResolver::mediaSourceReady)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SourceResolver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SourceResolver.data,
      qt_meta_data_SourceResolver,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SourceResolver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceResolver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SourceResolver.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IMFAsyncCallback"))
        return static_cast< IMFAsyncCallback*>(this);
    return QObject::qt_metacast(_clname);
}

int SourceResolver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void SourceResolver::error(long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SourceResolver::mediaSourceReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
