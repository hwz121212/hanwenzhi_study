/****************************************************************************
** Meta object code from reading C++ file 'qquickopenglinfo_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickopenglinfo_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickopenglinfo_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickOpenGLInfo_t {
    QByteArrayData data[22];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickOpenGLInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickOpenGLInfo_t qt_meta_stringdata_QQuickOpenGLInfo = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickOpenGLInfo"
QT_MOC_LITERAL(1, 17, 19), // "majorVersionChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "minorVersionChanged"
QT_MOC_LITERAL(4, 58, 14), // "profileChanged"
QT_MOC_LITERAL(5, 73, 21), // "renderableTypeChanged"
QT_MOC_LITERAL(6, 95, 12), // "updateFormat"
QT_MOC_LITERAL(7, 108, 9), // "setWindow"
QT_MOC_LITERAL(8, 118, 13), // "QQuickWindow*"
QT_MOC_LITERAL(9, 132, 6), // "window"
QT_MOC_LITERAL(10, 139, 12), // "majorVersion"
QT_MOC_LITERAL(11, 152, 12), // "minorVersion"
QT_MOC_LITERAL(12, 165, 7), // "profile"
QT_MOC_LITERAL(13, 173, 14), // "ContextProfile"
QT_MOC_LITERAL(14, 188, 14), // "renderableType"
QT_MOC_LITERAL(15, 203, 14), // "RenderableType"
QT_MOC_LITERAL(16, 218, 9), // "NoProfile"
QT_MOC_LITERAL(17, 228, 11), // "CoreProfile"
QT_MOC_LITERAL(18, 240, 20), // "CompatibilityProfile"
QT_MOC_LITERAL(19, 261, 11), // "Unspecified"
QT_MOC_LITERAL(20, 273, 6), // "OpenGL"
QT_MOC_LITERAL(21, 280, 8) // "OpenGLES"

    },
    "QQuickOpenGLInfo\0majorVersionChanged\0"
    "\0minorVersionChanged\0profileChanged\0"
    "renderableTypeChanged\0updateFormat\0"
    "setWindow\0QQuickWindow*\0window\0"
    "majorVersion\0minorVersion\0profile\0"
    "ContextProfile\0renderableType\0"
    "RenderableType\0NoProfile\0CoreProfile\0"
    "CompatibilityProfile\0Unspecified\0"
    "OpenGL\0OpenGLES"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickOpenGLInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   52, // properties
       2,   68, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00495801,
      11, QMetaType::Int, 0x00495801,
      12, 0x80000000 | 13, 0x00495809,
      14, 0x80000000 | 15, 0x00495809,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // enums: name, flags, count, data
      13, 0x0,    3,   76,
      15, 0x0,    3,   82,

 // enum data: key, value
      16, uint(QQuickOpenGLInfo::NoProfile),
      17, uint(QQuickOpenGLInfo::CoreProfile),
      18, uint(QQuickOpenGLInfo::CompatibilityProfile),
      19, uint(QQuickOpenGLInfo::Unspecified),
      20, uint(QQuickOpenGLInfo::OpenGL),
      21, uint(QQuickOpenGLInfo::OpenGLES),

       0        // eod
};

void QQuickOpenGLInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickOpenGLInfo *_t = static_cast<QQuickOpenGLInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->majorVersionChanged(); break;
        case 1: _t->minorVersionChanged(); break;
        case 2: _t->profileChanged(); break;
        case 3: _t->renderableTypeChanged(); break;
        case 4: _t->updateFormat(); break;
        case 5: _t->setWindow((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickOpenGLInfo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickOpenGLInfo::majorVersionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickOpenGLInfo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickOpenGLInfo::minorVersionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickOpenGLInfo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickOpenGLInfo::profileChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickOpenGLInfo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickOpenGLInfo::renderableTypeChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickOpenGLInfo *_t = static_cast<QQuickOpenGLInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->majorVersion(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->minorVersion(); break;
        case 2: *reinterpret_cast< ContextProfile*>(_v) = _t->profile(); break;
        case 3: *reinterpret_cast< RenderableType*>(_v) = _t->renderableType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickOpenGLInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickOpenGLInfo.data,
      qt_meta_data_QQuickOpenGLInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickOpenGLInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickOpenGLInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickOpenGLInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickOpenGLInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void QQuickOpenGLInfo::majorVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickOpenGLInfo::minorVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickOpenGLInfo::profileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickOpenGLInfo::renderableTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
