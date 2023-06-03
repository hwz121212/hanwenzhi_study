/****************************************************************************
** Meta object code from reading C++ file 'qquickpropertychanges_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickpropertychanges_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpropertychanges_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPropertyChanges_t {
    QByteArrayData data[4];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPropertyChanges_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPropertyChanges_t qt_meta_stringdata_QQuickPropertyChanges = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickPropertyChanges"
QT_MOC_LITERAL(1, 22, 6), // "target"
QT_MOC_LITERAL(2, 29, 18), // "restoreEntryValues"
QT_MOC_LITERAL(3, 48, 8) // "explicit"

    },
    "QQuickPropertyChanges\0target\0"
    "restoreEntryValues\0explicit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPropertyChanges[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QObjectStar, 0x00095003,
       2, QMetaType::Bool, 0x00095103,
       3, QMetaType::Bool, 0x00095003,

       0        // eod
};

void QQuickPropertyChanges::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickPropertyChanges *_t = static_cast<QQuickPropertyChanges *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->object(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->restoreEntryValues(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isExplicit(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPropertyChanges *_t = static_cast<QQuickPropertyChanges *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setObject(*reinterpret_cast< QObject**>(_v)); break;
        case 1: _t->setRestoreEntryValues(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setIsExplicit(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickPropertyChanges::staticMetaObject = {
    { &QQuickStateOperation::staticMetaObject, qt_meta_stringdata_QQuickPropertyChanges.data,
      qt_meta_data_QQuickPropertyChanges,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPropertyChanges::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPropertyChanges::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPropertyChanges.stringdata0))
        return static_cast<void*>(this);
    return QQuickStateOperation::qt_metacast(_clname);
}

int QQuickPropertyChanges::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickStateOperation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
