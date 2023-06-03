/****************************************************************************
** Meta object code from reading C++ file 'qhaikuwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qhaikuwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhaikuwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HaikuWindowProxy_t {
    QByteArrayData data[13];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HaikuWindowProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HaikuWindowProxy_t qt_meta_stringdata_HaikuWindowProxy = {
    {
QT_MOC_LITERAL(0, 0, 16), // "HaikuWindowProxy"
QT_MOC_LITERAL(1, 17, 5), // "moved"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "pos"
QT_MOC_LITERAL(4, 28, 7), // "resized"
QT_MOC_LITERAL(5, 36, 4), // "size"
QT_MOC_LITERAL(6, 41, 14), // "zoomInProgress"
QT_MOC_LITERAL(7, 56, 15), // "windowActivated"
QT_MOC_LITERAL(8, 72, 9), // "activated"
QT_MOC_LITERAL(9, 82, 9), // "minimized"
QT_MOC_LITERAL(10, 92, 8), // "minimize"
QT_MOC_LITERAL(11, 101, 6), // "zoomed"
QT_MOC_LITERAL(12, 108, 13) // "quitRequested"

    },
    "HaikuWindowProxy\0moved\0\0pos\0resized\0"
    "size\0zoomInProgress\0windowActivated\0"
    "activated\0minimized\0minimize\0zoomed\0"
    "quitRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HaikuWindowProxy[] = {

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
       1,    1,   44,    2, 0x06 /* Public */,
       4,    2,   47,    2, 0x06 /* Public */,
       7,    1,   52,    2, 0x06 /* Public */,
       9,    1,   55,    2, 0x06 /* Public */,
      11,    0,   58,    2, 0x06 /* Public */,
      12,    0,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QSize, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HaikuWindowProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HaikuWindowProxy *_t = static_cast<HaikuWindowProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moved((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->resized((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->windowActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->minimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->zoomed(); break;
        case 5: _t->quitRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (HaikuWindowProxy::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HaikuWindowProxy::moved)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HaikuWindowProxy::*_t)(const QSize & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HaikuWindowProxy::resized)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HaikuWindowProxy::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HaikuWindowProxy::windowActivated)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (HaikuWindowProxy::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HaikuWindowProxy::minimized)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (HaikuWindowProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HaikuWindowProxy::zoomed)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (HaikuWindowProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HaikuWindowProxy::quitRequested)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject HaikuWindowProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HaikuWindowProxy.data,
      qt_meta_data_HaikuWindowProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HaikuWindowProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HaikuWindowProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HaikuWindowProxy.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BWindow"))
        return static_cast< BWindow*>(this);
    return QObject::qt_metacast(_clname);
}

int HaikuWindowProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void HaikuWindowProxy::moved(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HaikuWindowProxy::resized(const QSize & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HaikuWindowProxy::windowActivated(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HaikuWindowProxy::minimized(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HaikuWindowProxy::zoomed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void HaikuWindowProxy::quitRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
struct qt_meta_stringdata_QHaikuWindow_t {
    QByteArrayData data[35];
    char stringdata0[454];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHaikuWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHaikuWindow_t qt_meta_stringdata_QHaikuWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QHaikuWindow"
QT_MOC_LITERAL(1, 13, 16), // "haikuWindowMoved"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "pos"
QT_MOC_LITERAL(4, 35, 18), // "haikuWindowResized"
QT_MOC_LITERAL(5, 54, 4), // "size"
QT_MOC_LITERAL(6, 59, 14), // "zoomInProgress"
QT_MOC_LITERAL(7, 74, 20), // "haikuWindowActivated"
QT_MOC_LITERAL(8, 95, 9), // "activated"
QT_MOC_LITERAL(9, 105, 20), // "haikuWindowMinimized"
QT_MOC_LITERAL(10, 126, 8), // "minimize"
QT_MOC_LITERAL(11, 135, 17), // "haikuWindowZoomed"
QT_MOC_LITERAL(12, 153, 24), // "haikuWindowQuitRequested"
QT_MOC_LITERAL(13, 178, 15), // "haikuMouseEvent"
QT_MOC_LITERAL(14, 194, 13), // "localPosition"
QT_MOC_LITERAL(15, 208, 14), // "globalPosition"
QT_MOC_LITERAL(16, 223, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(17, 240, 7), // "buttons"
QT_MOC_LITERAL(18, 248, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(19, 270, 9), // "modifiers"
QT_MOC_LITERAL(20, 280, 20), // "Qt::MouseEventSource"
QT_MOC_LITERAL(21, 301, 6), // "source"
QT_MOC_LITERAL(22, 308, 15), // "haikuWheelEvent"
QT_MOC_LITERAL(23, 324, 5), // "delta"
QT_MOC_LITERAL(24, 330, 15), // "Qt::Orientation"
QT_MOC_LITERAL(25, 346, 11), // "orientation"
QT_MOC_LITERAL(26, 358, 13), // "haikuKeyEvent"
QT_MOC_LITERAL(27, 372, 12), // "QEvent::Type"
QT_MOC_LITERAL(28, 385, 4), // "type"
QT_MOC_LITERAL(29, 390, 3), // "key"
QT_MOC_LITERAL(30, 394, 4), // "text"
QT_MOC_LITERAL(31, 399, 16), // "haikuEnteredView"
QT_MOC_LITERAL(32, 416, 15), // "haikuExitedView"
QT_MOC_LITERAL(33, 432, 16), // "haikuDrawRequest"
QT_MOC_LITERAL(34, 449, 4) // "rect"

    },
    "QHaikuWindow\0haikuWindowMoved\0\0pos\0"
    "haikuWindowResized\0size\0zoomInProgress\0"
    "haikuWindowActivated\0activated\0"
    "haikuWindowMinimized\0minimize\0"
    "haikuWindowZoomed\0haikuWindowQuitRequested\0"
    "haikuMouseEvent\0localPosition\0"
    "globalPosition\0Qt::MouseButtons\0buttons\0"
    "Qt::KeyboardModifiers\0modifiers\0"
    "Qt::MouseEventSource\0source\0haikuWheelEvent\0"
    "delta\0Qt::Orientation\0orientation\0"
    "haikuKeyEvent\0QEvent::Type\0type\0key\0"
    "text\0haikuEnteredView\0haikuExitedView\0"
    "haikuDrawRequest\0rect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHaikuWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    2,   77,    2, 0x08 /* Private */,
       7,    1,   82,    2, 0x08 /* Private */,
       9,    1,   85,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    5,   90,    2, 0x08 /* Private */,
      22,    5,  101,    2, 0x08 /* Private */,
      26,    4,  112,    2, 0x08 /* Private */,
      31,    0,  121,    2, 0x08 /* Private */,
      32,    0,  122,    2, 0x08 /* Private */,
      33,    1,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QSize, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint, 0x80000000 | 16, 0x80000000 | 18, 0x80000000 | 20,   14,   15,   17,   19,   21,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint, QMetaType::Int, 0x80000000 | 24, 0x80000000 | 18,   14,   15,   23,   25,   19,
    QMetaType::Void, 0x80000000 | 27, QMetaType::Int, 0x80000000 | 18, QMetaType::QString,   28,   29,   19,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect,   34,

       0        // eod
};

void QHaikuWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHaikuWindow *_t = static_cast<QHaikuWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->haikuWindowMoved((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->haikuWindowResized((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->haikuWindowActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->haikuWindowMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->haikuWindowZoomed(); break;
        case 5: _t->haikuWindowQuitRequested(); break;
        case 6: _t->haikuMouseEvent((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[3])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[4])),(*reinterpret_cast< Qt::MouseEventSource(*)>(_a[5]))); break;
        case 7: _t->haikuWheelEvent((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< Qt::Orientation(*)>(_a[4])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[5]))); break;
        case 8: _t->haikuKeyEvent((*reinterpret_cast< QEvent::Type(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 9: _t->haikuEnteredView(); break;
        case 10: _t->haikuExitedView(); break;
        case 11: _t->haikuDrawRequest((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QHaikuWindow::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHaikuWindow.data,
      qt_meta_data_QHaikuWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QHaikuWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHaikuWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHaikuWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QPlatformWindow"))
        return static_cast< QPlatformWindow*>(this);
    return QObject::qt_metacast(_clname);
}

int QHaikuWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
