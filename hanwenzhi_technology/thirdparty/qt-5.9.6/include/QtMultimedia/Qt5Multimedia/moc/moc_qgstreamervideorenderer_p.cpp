/****************************************************************************
** Meta object code from reading C++ file 'qgstreamervideorenderer_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtMultimedia/private/qgstreamervideorenderer_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstreamervideorenderer_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGstreamerVideoRenderer_t {
    QByteArrayData data[5];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGstreamerVideoRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGstreamerVideoRenderer_t qt_meta_stringdata_QGstreamerVideoRenderer = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QGstreamerVideoRenderer"
QT_MOC_LITERAL(1, 24, 11), // "sinkChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "readyChanged"
QT_MOC_LITERAL(4, 50, 18) // "handleFormatChange"

    },
    "QGstreamerVideoRenderer\0sinkChanged\0"
    "\0readyChanged\0handleFormatChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGstreamerVideoRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QGstreamerVideoRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGstreamerVideoRenderer *_t = static_cast<QGstreamerVideoRenderer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sinkChanged(); break;
        case 1: _t->readyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->handleFormatChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGstreamerVideoRenderer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGstreamerVideoRenderer::sinkChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGstreamerVideoRenderer::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGstreamerVideoRenderer::readyChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QGstreamerVideoRenderer::staticMetaObject = {
    { &QVideoRendererControl::staticMetaObject, qt_meta_stringdata_QGstreamerVideoRenderer.data,
      qt_meta_data_QGstreamerVideoRenderer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGstreamerVideoRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGstreamerVideoRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGstreamerVideoRenderer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGstreamerVideoRendererInterface"))
        return static_cast< QGstreamerVideoRendererInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.gstreamervideorenderer/5.0"))
        return static_cast< QGstreamerVideoRendererInterface*>(this);
    return QVideoRendererControl::qt_metacast(_clname);
}

int QGstreamerVideoRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVideoRendererControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QGstreamerVideoRenderer::sinkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGstreamerVideoRenderer::readyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
