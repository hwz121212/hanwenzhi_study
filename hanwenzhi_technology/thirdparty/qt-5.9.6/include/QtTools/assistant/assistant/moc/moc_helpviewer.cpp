/****************************************************************************
** Meta object code from reading C++ file 'helpviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../helpviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helpviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HelpViewer_t {
    QByteArrayData data[14];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HelpViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HelpViewer_t qt_meta_stringdata_HelpViewer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HelpViewer"
QT_MOC_LITERAL(1, 11, 12), // "titleChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "loadStarted"
QT_MOC_LITERAL(4, 37, 12), // "loadFinished"
QT_MOC_LITERAL(5, 50, 8), // "finished"
QT_MOC_LITERAL(6, 59, 4), // "copy"
QT_MOC_LITERAL(7, 64, 4), // "home"
QT_MOC_LITERAL(8, 69, 7), // "forward"
QT_MOC_LITERAL(9, 77, 8), // "backward"
QT_MOC_LITERAL(10, 86, 13), // "actionChanged"
QT_MOC_LITERAL(11, 100, 14), // "setLoadStarted"
QT_MOC_LITERAL(12, 115, 15), // "setLoadFinished"
QT_MOC_LITERAL(13, 131, 2) // "ok"

    },
    "HelpViewer\0titleChanged\0\0loadStarted\0"
    "loadFinished\0finished\0copy\0home\0forward\0"
    "backward\0actionChanged\0setLoadStarted\0"
    "setLoadFinished\0ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HelpViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   69,    2, 0x0a /* Public */,
       7,    0,   70,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void HelpViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpViewer *_t = static_cast<HelpViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->loadStarted(); break;
        case 2: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->copy(); break;
        case 4: _t->home(); break;
        case 5: _t->forward(); break;
        case 6: _t->backward(); break;
        case 7: _t->actionChanged(); break;
        case 8: _t->setLoadStarted(); break;
        case 9: _t->setLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (HelpViewer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HelpViewer::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HelpViewer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HelpViewer::loadStarted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HelpViewer::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HelpViewer::loadFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject HelpViewer::staticMetaObject = {
    { &QTextBrowser::staticMetaObject, qt_meta_stringdata_HelpViewer.data,
      qt_meta_data_HelpViewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HelpViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HelpViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HelpViewer.stringdata0))
        return static_cast<void*>(this);
    return QTextBrowser::qt_metacast(_clname);
}

int HelpViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void HelpViewer::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void HelpViewer::loadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void HelpViewer::loadFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
