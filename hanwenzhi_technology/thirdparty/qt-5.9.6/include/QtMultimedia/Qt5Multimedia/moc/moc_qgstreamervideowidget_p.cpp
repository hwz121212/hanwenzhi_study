/****************************************************************************
** Meta object code from reading C++ file 'qgstreamervideowidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtMultimedia/private/qgstreamervideowidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstreamervideowidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGstreamerVideoWidgetControl_t {
    QByteArrayData data[6];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGstreamerVideoWidgetControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGstreamerVideoWidgetControl_t qt_meta_stringdata_QGstreamerVideoWidgetControl = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QGstreamerVideoWidgetControl"
QT_MOC_LITERAL(1, 29, 11), // "sinkChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "readyChanged"
QT_MOC_LITERAL(4, 55, 22), // "onOverlayActiveChanged"
QT_MOC_LITERAL(5, 78, 24) // "onNativeVideoSizeChanged"

    },
    "QGstreamerVideoWidgetControl\0sinkChanged\0"
    "\0readyChanged\0onOverlayActiveChanged\0"
    "onNativeVideoSizeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGstreamerVideoWidgetControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   38,    2, 0x08 /* Private */,
       5,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QGstreamerVideoWidgetControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGstreamerVideoWidgetControl *_t = static_cast<QGstreamerVideoWidgetControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sinkChanged(); break;
        case 1: _t->readyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onOverlayActiveChanged(); break;
        case 3: _t->onNativeVideoSizeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGstreamerVideoWidgetControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGstreamerVideoWidgetControl::sinkChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGstreamerVideoWidgetControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGstreamerVideoWidgetControl::readyChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QGstreamerVideoWidgetControl::staticMetaObject = {
    { &QVideoWidgetControl::staticMetaObject, qt_meta_stringdata_QGstreamerVideoWidgetControl.data,
      qt_meta_data_QGstreamerVideoWidgetControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGstreamerVideoWidgetControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGstreamerVideoWidgetControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGstreamerVideoWidgetControl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGstreamerVideoRendererInterface"))
        return static_cast< QGstreamerVideoRendererInterface*>(this);
    if (!strcmp(_clname, "QGstreamerSyncMessageFilter"))
        return static_cast< QGstreamerSyncMessageFilter*>(this);
    if (!strcmp(_clname, "QGstreamerBusMessageFilter"))
        return static_cast< QGstreamerBusMessageFilter*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.gstreamervideorenderer/5.0"))
        return static_cast< QGstreamerVideoRendererInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.gstreamersyncmessagefilter/5.0"))
        return static_cast< QGstreamerSyncMessageFilter*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.gstreamerbusmessagefilter/5.0"))
        return static_cast< QGstreamerBusMessageFilter*>(this);
    return QVideoWidgetControl::qt_metacast(_clname);
}

int QGstreamerVideoWidgetControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVideoWidgetControl::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QGstreamerVideoWidgetControl::sinkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGstreamerVideoWidgetControl::readyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
