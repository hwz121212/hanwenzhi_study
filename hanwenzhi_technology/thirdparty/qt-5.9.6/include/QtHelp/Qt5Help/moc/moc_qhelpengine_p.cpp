/****************************************************************************
** Meta object code from reading C++ file 'qhelpengine_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtHelp/private/qhelpengine_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhelpengine_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QHelpEngineCorePrivate_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHelpEngineCorePrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHelpEngineCorePrivate_t qt_meta_stringdata_QHelpEngineCorePrivate = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QHelpEngineCorePrivate"
QT_MOC_LITERAL(1, 23, 13), // "errorReceived"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3) // "msg"

    },
    "QHelpEngineCorePrivate\0errorReceived\0"
    "\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHelpEngineCorePrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void QHelpEngineCorePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHelpEngineCorePrivate *_t = static_cast<QHelpEngineCorePrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QHelpEngineCorePrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHelpEngineCorePrivate.data,
      qt_meta_data_QHelpEngineCorePrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QHelpEngineCorePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHelpEngineCorePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpEngineCorePrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QHelpEngineCorePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QHelpEnginePrivate_t {
    QByteArrayData data[7];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHelpEnginePrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHelpEnginePrivate_t qt_meta_stringdata_QHelpEnginePrivate = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QHelpEnginePrivate"
QT_MOC_LITERAL(1, 19, 21), // "setContentsWidgetBusy"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 23), // "unsetContentsWidgetBusy"
QT_MOC_LITERAL(4, 66, 18), // "setIndexWidgetBusy"
QT_MOC_LITERAL(5, 85, 20), // "unsetIndexWidgetBusy"
QT_MOC_LITERAL(6, 106, 18) // "applyCurrentFilter"

    },
    "QHelpEnginePrivate\0setContentsWidgetBusy\0"
    "\0unsetContentsWidgetBusy\0setIndexWidgetBusy\0"
    "unsetIndexWidgetBusy\0applyCurrentFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHelpEnginePrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QHelpEnginePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHelpEnginePrivate *_t = static_cast<QHelpEnginePrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setContentsWidgetBusy(); break;
        case 1: _t->unsetContentsWidgetBusy(); break;
        case 2: _t->setIndexWidgetBusy(); break;
        case 3: _t->unsetIndexWidgetBusy(); break;
        case 4: _t->applyCurrentFilter(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QHelpEnginePrivate::staticMetaObject = {
    { &QHelpEngineCorePrivate::staticMetaObject, qt_meta_stringdata_QHelpEnginePrivate.data,
      qt_meta_data_QHelpEnginePrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QHelpEnginePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHelpEnginePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpEnginePrivate.stringdata0))
        return static_cast<void*>(this);
    return QHelpEngineCorePrivate::qt_metacast(_clname);
}

int QHelpEnginePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHelpEngineCorePrivate::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
