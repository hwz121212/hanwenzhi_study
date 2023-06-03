/****************************************************************************
** Meta object code from reading C++ file 'qquickcontrolsettings_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Private/qquickcontrolsettings_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickcontrolsettings_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickControlSettings1_t {
    QByteArrayData data[18];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickControlSettings1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickControlSettings1_t qt_meta_stringdata_QQuickControlSettings1 = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QQuickControlSettings1"
QT_MOC_LITERAL(1, 23, 12), // "styleChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "styleNameChanged"
QT_MOC_LITERAL(4, 54, 16), // "stylePathChanged"
QT_MOC_LITERAL(5, 71, 14), // "styleComponent"
QT_MOC_LITERAL(6, 86, 14), // "QQmlComponent*"
QT_MOC_LITERAL(7, 101, 11), // "styleDirUrl"
QT_MOC_LITERAL(8, 113, 16), // "controlStyleName"
QT_MOC_LITERAL(9, 130, 7), // "control"
QT_MOC_LITERAL(10, 138, 5), // "style"
QT_MOC_LITERAL(11, 144, 9), // "styleName"
QT_MOC_LITERAL(12, 154, 9), // "stylePath"
QT_MOC_LITERAL(13, 164, 14), // "dpiScaleFactor"
QT_MOC_LITERAL(14, 179, 13), // "dragThreshold"
QT_MOC_LITERAL(15, 193, 14), // "hasTouchScreen"
QT_MOC_LITERAL(16, 208, 8), // "isMobile"
QT_MOC_LITERAL(17, 217, 12) // "hoverEnabled"

    },
    "QQuickControlSettings1\0styleChanged\0"
    "\0styleNameChanged\0stylePathChanged\0"
    "styleComponent\0QQmlComponent*\0styleDirUrl\0"
    "controlStyleName\0control\0style\0styleName\0"
    "stylePath\0dpiScaleFactor\0dragThreshold\0"
    "hasTouchScreen\0isMobile\0hoverEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickControlSettings1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       8,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    3,   37,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 6, QMetaType::QUrl, QMetaType::QString, QMetaType::QObjectStar,    7,    8,    9,

 // properties: name, type, flags
      10, QMetaType::QUrl, 0x00495001,
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::QReal, 0x00095401,
      14, QMetaType::QReal, 0x00095401,
      15, QMetaType::Bool, 0x00095401,
      16, QMetaType::Bool, 0x00095401,
      17, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QQuickControlSettings1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickControlSettings1 *_t = static_cast<QQuickControlSettings1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->styleChanged(); break;
        case 1: _t->styleNameChanged(); break;
        case 2: _t->stylePathChanged(); break;
        case 3: { QQmlComponent* _r = _t->styleComponent((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QQmlComponent**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickControlSettings1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickControlSettings1::styleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickControlSettings1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickControlSettings1::styleNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickControlSettings1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickControlSettings1::stylePathChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickControlSettings1 *_t = static_cast<QQuickControlSettings1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->style(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->styleName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->stylePath(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->dpiScaleFactor(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->dragThreshold(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->hasTouchScreen(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isMobile(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->hoverEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickControlSettings1 *_t = static_cast<QQuickControlSettings1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setStyleName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setStylePath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickControlSettings1::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickControlSettings1.data,
      qt_meta_data_QQuickControlSettings1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickControlSettings1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickControlSettings1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickControlSettings1.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickControlSettings1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickControlSettings1::styleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickControlSettings1::styleNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickControlSettings1::stylePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
