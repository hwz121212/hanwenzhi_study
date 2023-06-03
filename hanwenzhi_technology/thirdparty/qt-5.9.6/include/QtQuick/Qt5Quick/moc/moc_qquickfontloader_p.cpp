/****************************************************************************
** Meta object code from reading C++ file 'qquickfontloader_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickfontloader_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickfontloader_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickFontLoader_t {
    QByteArrayData data[15];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickFontLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickFontLoader_t qt_meta_stringdata_QQuickFontLoader = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickFontLoader"
QT_MOC_LITERAL(1, 17, 13), // "sourceChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "nameChanged"
QT_MOC_LITERAL(4, 44, 13), // "statusChanged"
QT_MOC_LITERAL(5, 58, 14), // "updateFontInfo"
QT_MOC_LITERAL(6, 73, 24), // "QQuickFontLoader::Status"
QT_MOC_LITERAL(7, 98, 6), // "source"
QT_MOC_LITERAL(8, 105, 4), // "name"
QT_MOC_LITERAL(9, 110, 6), // "status"
QT_MOC_LITERAL(10, 117, 6), // "Status"
QT_MOC_LITERAL(11, 124, 4), // "Null"
QT_MOC_LITERAL(12, 129, 5), // "Ready"
QT_MOC_LITERAL(13, 135, 7), // "Loading"
QT_MOC_LITERAL(14, 143, 5) // "Error"

    },
    "QQuickFontLoader\0sourceChanged\0\0"
    "nameChanged\0statusChanged\0updateFontInfo\0"
    "QQuickFontLoader::Status\0source\0name\0"
    "status\0Status\0Null\0Ready\0Loading\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickFontLoader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   42, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    2,    2,

 // properties: name, type, flags
       7, QMetaType::QUrl, 0x00495103,
       8, QMetaType::QString, 0x00495103,
       9, 0x80000000 | 10, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
      10, 0x0,    4,   58,

 // enum data: key, value
      11, uint(QQuickFontLoader::Null),
      12, uint(QQuickFontLoader::Ready),
      13, uint(QQuickFontLoader::Loading),
      14, uint(QQuickFontLoader::Error),

       0        // eod
};

void QQuickFontLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickFontLoader *_t = static_cast<QQuickFontLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceChanged(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->statusChanged(); break;
        case 3: _t->updateFontInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QQuickFontLoader::Status(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickFontLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFontLoader::sourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickFontLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFontLoader::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickFontLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFontLoader::statusChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickFontLoader *_t = static_cast<QQuickFontLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickFontLoader *_t = static_cast<QQuickFontLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickFontLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickFontLoader.data,
      qt_meta_data_QQuickFontLoader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickFontLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickFontLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickFontLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickFontLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QQuickFontLoader::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickFontLoader::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickFontLoader::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
