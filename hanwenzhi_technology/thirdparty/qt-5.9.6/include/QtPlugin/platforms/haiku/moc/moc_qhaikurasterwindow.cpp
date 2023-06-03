/****************************************************************************
** Meta object code from reading C++ file 'qhaikurasterwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qhaikurasterwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhaikurasterwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HaikuViewProxy_t {
    QByteArrayData data[24];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HaikuViewProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HaikuViewProxy_t qt_meta_stringdata_HaikuViewProxy = {
    {
QT_MOC_LITERAL(0, 0, 14), // "HaikuViewProxy"
QT_MOC_LITERAL(1, 15, 10), // "mouseEvent"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "localPosition"
QT_MOC_LITERAL(4, 41, 14), // "globalPosition"
QT_MOC_LITERAL(5, 56, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(6, 73, 7), // "buttons"
QT_MOC_LITERAL(7, 81, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(8, 103, 9), // "modifiers"
QT_MOC_LITERAL(9, 113, 20), // "Qt::MouseEventSource"
QT_MOC_LITERAL(10, 134, 6), // "source"
QT_MOC_LITERAL(11, 141, 10), // "wheelEvent"
QT_MOC_LITERAL(12, 152, 5), // "delta"
QT_MOC_LITERAL(13, 158, 15), // "Qt::Orientation"
QT_MOC_LITERAL(14, 174, 11), // "orientation"
QT_MOC_LITERAL(15, 186, 8), // "keyEvent"
QT_MOC_LITERAL(16, 195, 12), // "QEvent::Type"
QT_MOC_LITERAL(17, 208, 4), // "type"
QT_MOC_LITERAL(18, 213, 3), // "key"
QT_MOC_LITERAL(19, 217, 4), // "text"
QT_MOC_LITERAL(20, 222, 11), // "enteredView"
QT_MOC_LITERAL(21, 234, 10), // "exitedView"
QT_MOC_LITERAL(22, 245, 11), // "drawRequest"
QT_MOC_LITERAL(23, 257, 4) // "rect"

    },
    "HaikuViewProxy\0mouseEvent\0\0localPosition\0"
    "globalPosition\0Qt::MouseButtons\0buttons\0"
    "Qt::KeyboardModifiers\0modifiers\0"
    "Qt::MouseEventSource\0source\0wheelEvent\0"
    "delta\0Qt::Orientation\0orientation\0"
    "keyEvent\0QEvent::Type\0type\0key\0text\0"
    "enteredView\0exitedView\0drawRequest\0"
    "rect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HaikuViewProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   44,    2, 0x06 /* Public */,
      11,    5,   55,    2, 0x06 /* Public */,
      15,    4,   66,    2, 0x06 /* Public */,
      20,    0,   75,    2, 0x06 /* Public */,
      21,    0,   76,    2, 0x06 /* Public */,
      22,    1,   77,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    3,    4,    6,    8,   10,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint, QMetaType::Int, 0x80000000 | 13, 0x80000000 | 7,    3,    4,   12,   14,    8,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int, 0x80000000 | 7, QMetaType::QString,   17,   18,    8,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect,   23,

       0        // eod
};

void HaikuViewProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HaikuViewProxy *_t = static_cast<HaikuViewProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseEvent((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[3])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[4])),(*reinterpret_cast< Qt::MouseEventSource(*)>(_a[5]))); break;
        case 1: _t->wheelEvent((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< Qt::Orientation(*)>(_a[4])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[5]))); break;
        case 2: _t->keyEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 3: _t->enteredView(); break;
        case 4: _t->exitedView(); break;
        case 5: _t->drawRequest((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (HaikuViewProxy::*_t)(const QPoint & , const QPoint & , Qt::MouseButtons , Qt::KeyboardModifiers , Qt::MouseEventSource );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HaikuViewProxy::mouseEvent)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HaikuViewProxy::*_t)(const QPoint & , const QPoint & , int , Qt::Orientation , Qt::KeyboardModifiers );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HaikuViewProxy::wheelEvent)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HaikuViewProxy::*_t)(QEvent::Type , int , Qt::KeyboardModifiers , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HaikuViewProxy::keyEvent)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (HaikuViewProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HaikuViewProxy::enteredView)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (HaikuViewProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HaikuViewProxy::exitedView)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (HaikuViewProxy::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HaikuViewProxy::drawRequest)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject HaikuViewProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HaikuViewProxy.data,
      qt_meta_data_HaikuViewProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HaikuViewProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HaikuViewProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HaikuViewProxy.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BView"))
        return static_cast< BView*>(this);
    return QObject::qt_metacast(_clname);
}

int HaikuViewProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void HaikuViewProxy::mouseEvent(const QPoint & _t1, const QPoint & _t2, Qt::MouseButtons _t3, Qt::KeyboardModifiers _t4, Qt::MouseEventSource _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HaikuViewProxy::wheelEvent(const QPoint & _t1, const QPoint & _t2, int _t3, Qt::Orientation _t4, Qt::KeyboardModifiers _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HaikuViewProxy::keyEvent(QEvent::Type _t1, int _t2, Qt::KeyboardModifiers _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HaikuViewProxy::enteredView()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void HaikuViewProxy::exitedView()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void HaikuViewProxy::drawRequest(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_QHaikuRasterWindow_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHaikuRasterWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHaikuRasterWindow_t qt_meta_stringdata_QHaikuRasterWindow = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QHaikuRasterWindow"

    },
    "QHaikuRasterWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHaikuRasterWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QHaikuRasterWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QHaikuRasterWindow::staticMetaObject = {
    { &QHaikuWindow::staticMetaObject, qt_meta_stringdata_QHaikuRasterWindow.data,
      qt_meta_data_QHaikuRasterWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QHaikuRasterWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHaikuRasterWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHaikuRasterWindow.stringdata0))
        return static_cast<void*>(this);
    return QHaikuWindow::qt_metacast(_clname);
}

int QHaikuRasterWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHaikuWindow::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
