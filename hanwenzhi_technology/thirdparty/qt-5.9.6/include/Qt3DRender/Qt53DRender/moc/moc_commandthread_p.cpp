/****************************************************************************
** Meta object code from reading C++ file 'commandthread_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DRender/private/commandthread_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commandthread_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__Render__CommandThread_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__Render__CommandThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__Render__CommandThread_t qt_meta_stringdata_Qt3DRender__Render__CommandThread = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Qt3DRender::Render::CommandTh..."
QT_MOC_LITERAL(1, 34, 22), // "executeCommandInternal"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 8), // "Command*"
QT_MOC_LITERAL(4, 67, 7) // "command"

    },
    "Qt3DRender::Render::CommandThread\0"
    "executeCommandInternal\0\0Command*\0"
    "command"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__Render__CommandThread[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x00 /* Private */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Qt3DRender::Render::CommandThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CommandThread *_t = static_cast<CommandThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->executeCommandInternal((*reinterpret_cast< Command*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Qt3DRender::Render::CommandThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Qt3DRender__Render__CommandThread.data,
      qt_meta_data_Qt3DRender__Render__CommandThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::Render::CommandThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::Render::CommandThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__Render__CommandThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Qt3DRender::Render::CommandThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
