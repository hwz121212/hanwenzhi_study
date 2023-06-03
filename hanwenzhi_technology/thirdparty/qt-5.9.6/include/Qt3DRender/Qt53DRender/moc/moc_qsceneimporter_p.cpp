/****************************************************************************
** Meta object code from reading C++ file 'qsceneimporter_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DRender/private/qsceneimporter_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsceneimporter_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QSceneImporter_t {
    QByteArrayData data[11];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QSceneImporter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QSceneImporter_t qt_meta_stringdata_Qt3DRender__QSceneImporter = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Qt3DRender::QSceneImporter"
QT_MOC_LITERAL(1, 27, 13), // "statusChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "ParserStatus"
QT_MOC_LITERAL(4, 55, 6), // "status"
QT_MOC_LITERAL(5, 62, 13), // "errorsChanged"
QT_MOC_LITERAL(6, 76, 6), // "errors"
QT_MOC_LITERAL(7, 83, 5), // "Empty"
QT_MOC_LITERAL(8, 89, 7), // "Loading"
QT_MOC_LITERAL(9, 97, 6), // "Loaded"
QT_MOC_LITERAL(10, 104, 5) // "Error"

    },
    "Qt3DRender::QSceneImporter\0statusChanged\0"
    "\0ParserStatus\0status\0errorsChanged\0"
    "errors\0Empty\0Loading\0Loaded\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QSceneImporter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   30, // properties
       1,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QStringList,    6,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x00495009,
       6, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
       3, 0x0,    4,   42,

 // enum data: key, value
       7, uint(Qt3DRender::QSceneImporter::Empty),
       8, uint(Qt3DRender::QSceneImporter::Loading),
       9, uint(Qt3DRender::QSceneImporter::Loaded),
      10, uint(Qt3DRender::QSceneImporter::Error),

       0        // eod
};

void Qt3DRender::QSceneImporter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSceneImporter *_t = static_cast<QSceneImporter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< ParserStatus(*)>(_a[1]))); break;
        case 1: _t->errorsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QSceneImporter::*_t)(ParserStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSceneImporter::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSceneImporter::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSceneImporter::errorsChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QSceneImporter *_t = static_cast<QSceneImporter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ParserStatus*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->errors(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QSceneImporter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DRender__QSceneImporter.data,
      qt_meta_data_Qt3DRender__QSceneImporter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QSceneImporter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QSceneImporter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QSceneImporter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DRender::QSceneImporter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DRender::QSceneImporter::statusChanged(ParserStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QSceneImporter::errorsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
