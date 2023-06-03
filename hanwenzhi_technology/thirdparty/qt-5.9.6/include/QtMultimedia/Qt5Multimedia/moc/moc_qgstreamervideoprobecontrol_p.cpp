/****************************************************************************
** Meta object code from reading C++ file 'qgstreamervideoprobecontrol_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtMultimedia/private/qgstreamervideoprobecontrol_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstreamervideoprobecontrol_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGstreamerVideoProbeControl_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGstreamerVideoProbeControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGstreamerVideoProbeControl_t qt_meta_stringdata_QGstreamerVideoProbeControl = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QGstreamerVideoProbeControl"
QT_MOC_LITERAL(1, 28, 11), // "frameProbed"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "QGstreamerVideoProbeControl\0frameProbed\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGstreamerVideoProbeControl[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QGstreamerVideoProbeControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGstreamerVideoProbeControl *_t = static_cast<QGstreamerVideoProbeControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->frameProbed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QGstreamerVideoProbeControl::staticMetaObject = {
    { &QMediaVideoProbeControl::staticMetaObject, qt_meta_stringdata_QGstreamerVideoProbeControl.data,
      qt_meta_data_QGstreamerVideoProbeControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGstreamerVideoProbeControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGstreamerVideoProbeControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGstreamerVideoProbeControl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGstreamerBufferProbe"))
        return static_cast< QGstreamerBufferProbe*>(this);
    if (!strcmp(_clname, "QSharedData"))
        return static_cast< QSharedData*>(this);
    return QMediaVideoProbeControl::qt_metacast(_clname);
}

int QGstreamerVideoProbeControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaVideoProbeControl::qt_metacall(_c, _id, _a);
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
