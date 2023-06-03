/****************************************************************************
** Meta object code from reading C++ file 'qquickshortcut_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickshortcut_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickshortcut_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickShortcut_t {
    QByteArrayData data[17];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickShortcut_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickShortcut_t qt_meta_stringdata_QQuickShortcut = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickShortcut"
QT_MOC_LITERAL(1, 15, 15), // "sequenceChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "sequencesChanged"
QT_MOC_LITERAL(4, 49, 14), // "enabledChanged"
QT_MOC_LITERAL(5, 64, 17), // "autoRepeatChanged"
QT_MOC_LITERAL(6, 82, 14), // "contextChanged"
QT_MOC_LITERAL(7, 97, 9), // "activated"
QT_MOC_LITERAL(8, 107, 20), // "activatedAmbiguously"
QT_MOC_LITERAL(9, 128, 8), // "sequence"
QT_MOC_LITERAL(10, 137, 9), // "sequences"
QT_MOC_LITERAL(11, 147, 10), // "nativeText"
QT_MOC_LITERAL(12, 158, 12), // "portableText"
QT_MOC_LITERAL(13, 171, 7), // "enabled"
QT_MOC_LITERAL(14, 179, 10), // "autoRepeat"
QT_MOC_LITERAL(15, 190, 7), // "context"
QT_MOC_LITERAL(16, 198, 19) // "Qt::ShortcutContext"

    },
    "QQuickShortcut\0sequenceChanged\0\0"
    "sequencesChanged\0enabledChanged\0"
    "autoRepeatChanged\0contextChanged\0"
    "activated\0activatedAmbiguously\0sequence\0"
    "sequences\0nativeText\0portableText\0"
    "enabled\0autoRepeat\0context\0"
    "Qt::ShortcutContext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickShortcut[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   63, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   56,    2, 0x06 /* Public */,
       3,    0,   57,    2, 0x86 /* Public | MethodRevisioned */,
       4,    0,   58,    2, 0x06 /* Public */,
       5,    0,   59,    2, 0x06 /* Public */,
       6,    0,   60,    2, 0x06 /* Public */,
       7,    0,   61,    2, 0x06 /* Public */,
       8,    0,   62,    2, 0x06 /* Public */,

 // signals: revision
       0,
       9,
       0,
       0,
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QVariant, 0x00495903,
      10, QMetaType::QVariantList, 0x00c95903,
      11, QMetaType::QString, 0x00c95801,
      12, QMetaType::QString, 0x00c95801,
      13, QMetaType::Bool, 0x00495903,
      14, QMetaType::Bool, 0x00495903,
      15, 0x80000000 | 16, 0x0049590b,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,
       2,
       3,
       4,

 // properties: revision
       0,
       9,
       1,
       1,
       0,
       0,
       0,

       0        // eod
};

void QQuickShortcut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickShortcut *_t = static_cast<QQuickShortcut *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sequenceChanged(); break;
        case 1: _t->sequencesChanged(); break;
        case 2: _t->enabledChanged(); break;
        case 3: _t->autoRepeatChanged(); break;
        case 4: _t->contextChanged(); break;
        case 5: _t->activated(); break;
        case 6: _t->activatedAmbiguously(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickShortcut::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShortcut::sequenceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickShortcut::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShortcut::sequencesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickShortcut::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShortcut::enabledChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickShortcut::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShortcut::autoRepeatChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickShortcut::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShortcut::contextChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickShortcut::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShortcut::activated)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickShortcut::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShortcut::activatedAmbiguously)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickShortcut *_t = static_cast<QQuickShortcut *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->sequence(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->sequences(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->nativeText(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->portableText(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->autoRepeat(); break;
        case 6: *reinterpret_cast< Qt::ShortcutContext*>(_v) = _t->context(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickShortcut *_t = static_cast<QQuickShortcut *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSequence(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setSequences(*reinterpret_cast< QVariantList*>(_v)); break;
        case 4: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setAutoRepeat(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setContext(*reinterpret_cast< Qt::ShortcutContext*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickShortcut::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickShortcut.data,
      qt_meta_data_QQuickShortcut,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickShortcut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickShortcut::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickShortcut.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickShortcut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickShortcut::sequenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickShortcut::sequencesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickShortcut::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickShortcut::autoRepeatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickShortcut::contextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickShortcut::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickShortcut::activatedAmbiguously()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
