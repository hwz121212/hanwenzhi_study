/****************************************************************************
** Meta object code from reading C++ file 'qquickanimationcontroller_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickanimationcontroller_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickanimationcontroller_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickAnimationController_t {
    QByteArrayData data[13];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickAnimationController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickAnimationController_t qt_meta_stringdata_QQuickAnimationController = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QQuickAnimationController"
QT_MOC_LITERAL(1, 26, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 42, 9), // "animation"
QT_MOC_LITERAL(3, 52, 15), // "progressChanged"
QT_MOC_LITERAL(4, 68, 0), // ""
QT_MOC_LITERAL(5, 69, 16), // "animationChanged"
QT_MOC_LITERAL(6, 86, 6), // "reload"
QT_MOC_LITERAL(7, 93, 19), // "completeToBeginning"
QT_MOC_LITERAL(8, 113, 13), // "completeToEnd"
QT_MOC_LITERAL(9, 127, 18), // "componentFinalized"
QT_MOC_LITERAL(10, 146, 14), // "updateProgress"
QT_MOC_LITERAL(11, 161, 8), // "progress"
QT_MOC_LITERAL(12, 170, 24) // "QQuickAbstractAnimation*"

    },
    "QQuickAnimationController\0DefaultProperty\0"
    "animation\0progressChanged\0\0animationChanged\0"
    "reload\0completeToBeginning\0completeToEnd\0"
    "componentFinalized\0updateProgress\0"
    "progress\0QQuickAbstractAnimation*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickAnimationController[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       7,   16, // methods
       2,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   51,    4, 0x06 /* Public */,
       5,    0,   52,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   53,    4, 0x0a /* Public */,
       7,    0,   54,    4, 0x0a /* Public */,
       8,    0,   55,    4, 0x0a /* Public */,
       9,    0,   56,    4, 0x08 /* Private */,
      10,    0,   57,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::QReal, 0x00495103,
       2, 0x80000000 | 12, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QQuickAnimationController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickAnimationController *_t = static_cast<QQuickAnimationController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progressChanged(); break;
        case 1: _t->animationChanged(); break;
        case 2: _t->reload(); break;
        case 3: _t->completeToBeginning(); break;
        case 4: _t->completeToEnd(); break;
        case 5: _t->componentFinalized(); break;
        case 6: _t->updateProgress(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickAnimationController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimationController::progressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickAnimationController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimationController::animationChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickAbstractAnimation* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickAnimationController *_t = static_cast<QQuickAnimationController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->progress(); break;
        case 1: *reinterpret_cast< QQuickAbstractAnimation**>(_v) = _t->animation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickAnimationController *_t = static_cast<QQuickAnimationController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setProgress(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setAnimation(*reinterpret_cast< QQuickAbstractAnimation**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickAnimationController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickAnimationController.data,
      qt_meta_data_QQuickAnimationController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickAnimationController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickAnimationController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickAnimationController.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickAnimationController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickAnimationController::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickAnimationController::animationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
