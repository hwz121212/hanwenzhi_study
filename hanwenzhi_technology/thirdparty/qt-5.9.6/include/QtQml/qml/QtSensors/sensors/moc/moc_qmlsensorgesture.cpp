/****************************************************************************
** Meta object code from reading C++ file 'qmlsensorgesture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmlsensorgesture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlsensorgesture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlSensorGesture_t {
    QByteArrayData data[14];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlSensorGesture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlSensorGesture_t qt_meta_stringdata_QmlSensorGesture = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QmlSensorGesture"
QT_MOC_LITERAL(1, 17, 8), // "detected"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "gesture"
QT_MOC_LITERAL(4, 35, 24), // "availableGesturesChanged"
QT_MOC_LITERAL(5, 60, 15), // "gesturesChanged"
QT_MOC_LITERAL(6, 76, 20), // "validGesturesChanged"
QT_MOC_LITERAL(7, 97, 22), // "invalidGesturesChanged"
QT_MOC_LITERAL(8, 120, 14), // "enabledChanged"
QT_MOC_LITERAL(9, 135, 17), // "availableGestures"
QT_MOC_LITERAL(10, 153, 8), // "gestures"
QT_MOC_LITERAL(11, 162, 13), // "validGestures"
QT_MOC_LITERAL(12, 176, 15), // "invalidGestures"
QT_MOC_LITERAL(13, 192, 7) // "enabled"

    },
    "QmlSensorGesture\0detected\0\0gesture\0"
    "availableGesturesChanged\0gesturesChanged\0"
    "validGesturesChanged\0invalidGesturesChanged\0"
    "enabledChanged\0availableGestures\0"
    "gestures\0validGestures\0invalidGestures\0"
    "enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlSensorGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,
       5,    0,   48,    2, 0x06 /* Public */,
       6,    0,   49,    2, 0x06 /* Public */,
       7,    0,   50,    2, 0x06 /* Public */,
       8,    0,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QStringList, 0x00495001,
      10, QMetaType::QStringList, 0x00495103,
      11, QMetaType::QStringList, 0x00495001,
      12, QMetaType::QStringList, 0x00495001,
      13, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void QmlSensorGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlSensorGesture *_t = static_cast<QmlSensorGesture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->detected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->availableGesturesChanged(); break;
        case 2: _t->gesturesChanged(); break;
        case 3: _t->validGesturesChanged(); break;
        case 4: _t->invalidGesturesChanged(); break;
        case 5: _t->enabledChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QmlSensorGesture::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensorGesture::detected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QmlSensorGesture::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensorGesture::availableGesturesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QmlSensorGesture::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensorGesture::gesturesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QmlSensorGesture::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensorGesture::validGesturesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QmlSensorGesture::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensorGesture::invalidGesturesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QmlSensorGesture::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlSensorGesture::enabledChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlSensorGesture *_t = static_cast<QmlSensorGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->availableGestures(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->gestures(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->validGestures(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->invalidGestures(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QmlSensorGesture *_t = static_cast<QmlSensorGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setGestures(*reinterpret_cast< QStringList*>(_v)); break;
        case 4: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QmlSensorGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlSensorGesture.data,
      qt_meta_data_QmlSensorGesture,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlSensorGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlSensorGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlSensorGesture.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlSensorGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QmlSensorGesture::detected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlSensorGesture::availableGesturesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QmlSensorGesture::gesturesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QmlSensorGesture::validGesturesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QmlSensorGesture::invalidGesturesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QmlSensorGesture::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
