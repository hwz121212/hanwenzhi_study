/****************************************************************************
** Meta object code from reading C++ file 'qquickpage_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickpage_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpage_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPage_t {
    QByteArrayData data[19];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPage_t qt_meta_stringdata_QQuickPage = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QQuickPage"
QT_MOC_LITERAL(1, 11, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 27, 11), // "contentData"
QT_MOC_LITERAL(3, 39, 12), // "titleChanged"
QT_MOC_LITERAL(4, 52, 0), // ""
QT_MOC_LITERAL(5, 53, 13), // "headerChanged"
QT_MOC_LITERAL(6, 67, 13), // "footerChanged"
QT_MOC_LITERAL(7, 81, 22), // "contentChildrenChanged"
QT_MOC_LITERAL(8, 104, 19), // "contentWidthChanged"
QT_MOC_LITERAL(9, 124, 20), // "contentHeightChanged"
QT_MOC_LITERAL(10, 145, 5), // "title"
QT_MOC_LITERAL(11, 151, 6), // "header"
QT_MOC_LITERAL(12, 158, 11), // "QQuickItem*"
QT_MOC_LITERAL(13, 170, 6), // "footer"
QT_MOC_LITERAL(14, 177, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(15, 203, 15), // "contentChildren"
QT_MOC_LITERAL(16, 219, 28), // "QQmlListProperty<QQuickItem>"
QT_MOC_LITERAL(17, 248, 12), // "contentWidth"
QT_MOC_LITERAL(18, 261, 13) // "contentHeight"

    },
    "QQuickPage\0DefaultProperty\0contentData\0"
    "titleChanged\0\0headerChanged\0footerChanged\0"
    "contentChildrenChanged\0contentWidthChanged\0"
    "contentHeightChanged\0title\0header\0"
    "QQuickItem*\0footer\0QQmlListProperty<QObject>\0"
    "contentChildren\0QQmlListProperty<QQuickItem>\0"
    "contentWidth\0contentHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPage[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       7,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   52,    4, 0x06 /* Public */,
       5,    0,   53,    4, 0x06 /* Public */,
       6,    0,   54,    4, 0x06 /* Public */,
       7,    0,   55,    4, 0x06 /* Public */,
       8,    0,   56,    4, 0x86 /* Public | MethodRevisioned */,
       9,    0,   57,    4, 0x86 /* Public | MethodRevisioned */,

 // signals: revision
       0,
       0,
       0,
       0,
       1,
       1,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495903,
      11, 0x80000000 | 12, 0x0049590b,
      13, 0x80000000 | 12, 0x0049590b,
       2, 0x80000000 | 14, 0x00095809,
      15, 0x80000000 | 16, 0x00495809,
      17, QMetaType::QReal, 0x00c95903,
      18, QMetaType::QReal, 0x00c95903,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       3,
       4,
       5,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       1,
       1,

       0        // eod
};

void QQuickPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPage *_t = static_cast<QQuickPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->headerChanged(); break;
        case 2: _t->footerChanged(); break;
        case 3: _t->contentChildrenChanged(); break;
        case 4: _t->contentWidthChanged(); break;
        case 5: _t->contentHeightChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPage::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPage::headerChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPage::footerChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPage::contentChildrenChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickPage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPage::contentWidthChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickPage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPage::contentHeightChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QQuickItem> >(); break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPage *_t = static_cast<QQuickPage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->header(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->footer(); break;
        case 3: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->contentData(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QQuickItem>*>(_v) = _t->contentChildren(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->contentWidth(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->contentHeight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPage *_t = static_cast<QQuickPage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setHeader(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 2: _t->setFooter(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 5: _t->setContentWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setContentHeight(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickPage::staticMetaObject = {
    { &QQuickControl::staticMetaObject, qt_meta_stringdata_QQuickPage.data,
      qt_meta_data_QQuickPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPage.stringdata0))
        return static_cast<void*>(this);
    return QQuickControl::qt_metacast(_clname);
}

int QQuickPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickControl::qt_metacall(_c, _id, _a);
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
void QQuickPage::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPage::headerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPage::footerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPage::contentChildrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickPage::contentWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickPage::contentHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
