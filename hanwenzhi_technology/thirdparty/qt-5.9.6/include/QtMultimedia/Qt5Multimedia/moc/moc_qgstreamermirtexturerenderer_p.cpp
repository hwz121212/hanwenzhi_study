/****************************************************************************
** Meta object code from reading C++ file 'qgstreamermirtexturerenderer_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtMultimedia/private/qgstreamermirtexturerenderer_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstreamermirtexturerenderer_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGstreamerMirTextureRenderer_t {
    QByteArrayData data[11];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGstreamerMirTextureRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGstreamerMirTextureRenderer_t qt_meta_stringdata_QGstreamerMirTextureRenderer = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QGstreamerMirTextureRenderer"
QT_MOC_LITERAL(1, 29, 11), // "sinkChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "readyChanged"
QT_MOC_LITERAL(4, 55, 17), // "nativeSizeChanged"
QT_MOC_LITERAL(5, 73, 18), // "handleFormatChange"
QT_MOC_LITERAL(6, 92, 21), // "updateNativeVideoSize"
QT_MOC_LITERAL(7, 114, 24), // "handleFocusWindowChanged"
QT_MOC_LITERAL(8, 139, 8), // "QWindow*"
QT_MOC_LITERAL(9, 148, 6), // "window"
QT_MOC_LITERAL(10, 155, 11) // "renderFrame"

    },
    "QGstreamerMirTextureRenderer\0sinkChanged\0"
    "\0readyChanged\0nativeSizeChanged\0"
    "handleFormatChange\0updateNativeVideoSize\0"
    "handleFocusWindowChanged\0QWindow*\0"
    "window\0renderFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGstreamerMirTextureRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       4,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   54,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void QGstreamerMirTextureRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGstreamerMirTextureRenderer *_t = static_cast<QGstreamerMirTextureRenderer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sinkChanged(); break;
        case 1: _t->readyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->nativeSizeChanged(); break;
        case 3: _t->handleFormatChange(); break;
        case 4: _t->updateNativeVideoSize(); break;
        case 5: _t->handleFocusWindowChanged((*reinterpret_cast< QWindow*(*)>(_a[1]))); break;
        case 6: _t->renderFrame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGstreamerMirTextureRenderer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGstreamerMirTextureRenderer::sinkChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGstreamerMirTextureRenderer::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGstreamerMirTextureRenderer::readyChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGstreamerMirTextureRenderer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGstreamerMirTextureRenderer::nativeSizeChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QGstreamerMirTextureRenderer::staticMetaObject = {
    { &QVideoRendererControl::staticMetaObject, qt_meta_stringdata_QGstreamerMirTextureRenderer.data,
      qt_meta_data_QGstreamerMirTextureRenderer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGstreamerMirTextureRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGstreamerMirTextureRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGstreamerMirTextureRenderer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGstreamerVideoRendererInterface"))
        return static_cast< QGstreamerVideoRendererInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.gstreamervideorenderer/5.0"))
        return static_cast< QGstreamerVideoRendererInterface*>(this);
    return QVideoRendererControl::qt_metacast(_clname);
}

int QGstreamerMirTextureRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVideoRendererControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QGstreamerMirTextureRenderer::sinkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGstreamerMirTextureRenderer::readyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGstreamerMirTextureRenderer::nativeSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
