/****************************************************************************
** Meta object code from reading C++ file 'qdbusviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdbusviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdbusviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDBusViewer_t {
    QByteArrayData data[28];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDBusViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDBusViewer_t qt_meta_stringdata_QDBusViewer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QDBusViewer"
QT_MOC_LITERAL(1, 12, 7), // "refresh"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 14), // "serviceChanged"
QT_MOC_LITERAL(4, 36, 5), // "index"
QT_MOC_LITERAL(5, 42, 15), // "showContextMenu"
QT_MOC_LITERAL(6, 58, 19), // "connectionRequested"
QT_MOC_LITERAL(7, 78, 12), // "BusSignature"
QT_MOC_LITERAL(8, 91, 3), // "sig"
QT_MOC_LITERAL(9, 95, 10), // "callMethod"
QT_MOC_LITERAL(10, 106, 11), // "getProperty"
QT_MOC_LITERAL(11, 118, 11), // "setProperty"
QT_MOC_LITERAL(12, 130, 11), // "dumpMessage"
QT_MOC_LITERAL(13, 142, 12), // "QDBusMessage"
QT_MOC_LITERAL(14, 155, 3), // "msg"
QT_MOC_LITERAL(15, 159, 15), // "refreshChildren"
QT_MOC_LITERAL(16, 175, 17), // "serviceRegistered"
QT_MOC_LITERAL(17, 193, 7), // "service"
QT_MOC_LITERAL(18, 201, 19), // "serviceUnregistered"
QT_MOC_LITERAL(19, 221, 19), // "serviceOwnerChanged"
QT_MOC_LITERAL(20, 241, 4), // "name"
QT_MOC_LITERAL(21, 246, 8), // "oldOwner"
QT_MOC_LITERAL(22, 255, 8), // "newOwner"
QT_MOC_LITERAL(23, 264, 8), // "activate"
QT_MOC_LITERAL(24, 273, 4), // "item"
QT_MOC_LITERAL(25, 278, 8), // "logError"
QT_MOC_LITERAL(26, 287, 13), // "anchorClicked"
QT_MOC_LITERAL(27, 301, 3) // "url"

    },
    "QDBusViewer\0refresh\0\0serviceChanged\0"
    "index\0showContextMenu\0connectionRequested\0"
    "BusSignature\0sig\0callMethod\0getProperty\0"
    "setProperty\0dumpMessage\0QDBusMessage\0"
    "msg\0refreshChildren\0serviceRegistered\0"
    "service\0serviceUnregistered\0"
    "serviceOwnerChanged\0name\0oldOwner\0"
    "newOwner\0activate\0item\0logError\0"
    "anchorClicked\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDBusViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    1,   90,    2, 0x08 /* Private */,
       5,    1,   93,    2, 0x08 /* Private */,
       6,    1,   96,    2, 0x08 /* Private */,
       9,    1,   99,    2, 0x08 /* Private */,
      10,    1,  102,    2, 0x08 /* Private */,
      11,    1,  105,    2, 0x08 /* Private */,
      12,    1,  108,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,
      16,    1,  112,    2, 0x08 /* Private */,
      18,    1,  115,    2, 0x08 /* Private */,
      19,    3,  118,    2, 0x08 /* Private */,
      23,    1,  125,    2, 0x08 /* Private */,
      25,    1,  128,    2, 0x08 /* Private */,
      26,    1,  131,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   20,   21,   22,
    QMetaType::Void, QMetaType::QModelIndex,   24,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QUrl,   27,

       0        // eod
};

void QDBusViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDBusViewer *_t = static_cast<QDBusViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->serviceChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->connectionRequested((*reinterpret_cast< const BusSignature(*)>(_a[1]))); break;
        case 4: _t->callMethod((*reinterpret_cast< const BusSignature(*)>(_a[1]))); break;
        case 5: _t->getProperty((*reinterpret_cast< const BusSignature(*)>(_a[1]))); break;
        case 6: _t->setProperty((*reinterpret_cast< const BusSignature(*)>(_a[1]))); break;
        case 7: _t->dumpMessage((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 8: _t->refreshChildren(); break;
        case 9: _t->serviceRegistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->serviceUnregistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->serviceOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->activate((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->logError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->anchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QDBusViewer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDBusViewer.data,
      qt_meta_data_QDBusViewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDBusViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDBusViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDBusViewer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QDBusViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
