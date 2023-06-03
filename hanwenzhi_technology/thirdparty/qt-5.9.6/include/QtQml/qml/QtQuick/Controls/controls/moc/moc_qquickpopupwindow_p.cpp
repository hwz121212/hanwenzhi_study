/****************************************************************************
** Meta object code from reading C++ file 'qquickpopupwindow_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickpopupwindow_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpopupwindow_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPopupWindow1_t {
    QByteArrayData data[14];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPopupWindow1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPopupWindow1_t qt_meta_stringdata_QQuickPopupWindow1 = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQuickPopupWindow1"
QT_MOC_LITERAL(1, 19, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 35, 16), // "popupContentItem"
QT_MOC_LITERAL(3, 52, 14), // "popupDismissed"
QT_MOC_LITERAL(4, 67, 0), // ""
QT_MOC_LITERAL(5, 68, 15), // "geometryChanged"
QT_MOC_LITERAL(6, 84, 4), // "show"
QT_MOC_LITERAL(7, 89, 12), // "dismissPopup"
QT_MOC_LITERAL(8, 102, 10), // "updateSize"
QT_MOC_LITERAL(9, 113, 23), // "applicationStateChanged"
QT_MOC_LITERAL(10, 137, 20), // "Qt::ApplicationState"
QT_MOC_LITERAL(11, 158, 5), // "state"
QT_MOC_LITERAL(12, 164, 11), // "QQuickItem*"
QT_MOC_LITERAL(13, 176, 10) // "parentItem"

    },
    "QQuickPopupWindow1\0DefaultProperty\0"
    "popupContentItem\0popupDismissed\0\0"
    "geometryChanged\0show\0dismissPopup\0"
    "updateSize\0applicationStateChanged\0"
    "Qt::ApplicationState\0state\0QQuickItem*\0"
    "parentItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPopupWindow1[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       2,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   46,    4, 0x06 /* Public */,
       5,    0,   47,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   48,    4, 0x0a /* Public */,
       7,    0,   49,    4, 0x0a /* Public */,
       8,    0,   50,    4, 0x09 /* Protected */,
       9,    1,   51,    4, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

 // properties: name, type, flags
       2, 0x80000000 | 12, 0x0009510b,
      13, 0x80000000 | 12, 0x0009510b,

       0        // eod
};

void QQuickPopupWindow1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPopupWindow1 *_t = static_cast<QQuickPopupWindow1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->popupDismissed(); break;
        case 1: _t->geometryChanged(); break;
        case 2: _t->show(); break;
        case 3: _t->dismissPopup(); break;
        case 4: _t->updateSize(); break;
        case 5: _t->applicationStateChanged((*reinterpret_cast< Qt::ApplicationState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPopupWindow1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPopupWindow1::popupDismissed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPopupWindow1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPopupWindow1::geometryChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPopupWindow1 *_t = static_cast<QQuickPopupWindow1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->popupContentItem(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->parentItem(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPopupWindow1 *_t = static_cast<QQuickPopupWindow1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPopupContentItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1: _t->setParentItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickPopupWindow1::staticMetaObject = {
    { &QQuickWindow::staticMetaObject, qt_meta_stringdata_QQuickPopupWindow1.data,
      qt_meta_data_QQuickPopupWindow1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPopupWindow1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPopupWindow1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPopupWindow1.stringdata0))
        return static_cast<void*>(this);
    return QQuickWindow::qt_metacast(_clname);
}

int QQuickPopupWindow1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickWindow::qt_metacall(_c, _id, _a);
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
void QQuickPopupWindow1::popupDismissed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPopupWindow1::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
