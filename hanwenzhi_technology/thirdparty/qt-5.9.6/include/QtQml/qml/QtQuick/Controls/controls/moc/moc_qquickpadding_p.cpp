/****************************************************************************
** Meta object code from reading C++ file 'qquickpadding_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Private/qquickpadding_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpadding_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPadding1_t {
    QByteArrayData data[15];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPadding1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPadding1_t qt_meta_stringdata_QQuickPadding1 = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickPadding1"
QT_MOC_LITERAL(1, 15, 11), // "leftChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "topChanged"
QT_MOC_LITERAL(4, 39, 12), // "rightChanged"
QT_MOC_LITERAL(5, 52, 13), // "bottomChanged"
QT_MOC_LITERAL(6, 66, 7), // "setLeft"
QT_MOC_LITERAL(7, 74, 3), // "arg"
QT_MOC_LITERAL(8, 78, 6), // "setTop"
QT_MOC_LITERAL(9, 85, 8), // "setRight"
QT_MOC_LITERAL(10, 94, 9), // "setBottom"
QT_MOC_LITERAL(11, 104, 4), // "left"
QT_MOC_LITERAL(12, 109, 3), // "top"
QT_MOC_LITERAL(13, 113, 5), // "right"
QT_MOC_LITERAL(14, 119, 6) // "bottom"

    },
    "QQuickPadding1\0leftChanged\0\0topChanged\0"
    "rightChanged\0bottomChanged\0setLeft\0"
    "arg\0setTop\0setRight\0setBottom\0left\0"
    "top\0right\0bottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPadding1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   58,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,
       9,    1,   64,    2, 0x0a /* Public */,
      10,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00495103,
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QQuickPadding1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPadding1 *_t = static_cast<QQuickPadding1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->leftChanged(); break;
        case 1: _t->topChanged(); break;
        case 2: _t->rightChanged(); break;
        case 3: _t->bottomChanged(); break;
        case 4: _t->setLeft((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setTop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setRight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setBottom((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPadding1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPadding1::leftChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPadding1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPadding1::topChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPadding1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPadding1::rightChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPadding1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPadding1::bottomChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPadding1 *_t = static_cast<QQuickPadding1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->left(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->top(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->right(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->bottom(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPadding1 *_t = static_cast<QQuickPadding1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLeft(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTop(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setRight(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setBottom(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickPadding1::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickPadding1.data,
      qt_meta_data_QQuickPadding1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPadding1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPadding1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPadding1.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPadding1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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

// SIGNAL 0
void QQuickPadding1::leftChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPadding1::topChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPadding1::rightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPadding1::bottomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
