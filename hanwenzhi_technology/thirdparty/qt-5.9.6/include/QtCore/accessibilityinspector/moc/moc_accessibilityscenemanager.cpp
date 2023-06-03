/****************************************************************************
** Meta object code from reading C++ file 'accessibilityscenemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../accessibilityscenemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accessibilityscenemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccessibilitySceneManager_t {
    QByteArrayData data[12];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccessibilitySceneManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccessibilitySceneManager_t qt_meta_stringdata_AccessibilitySceneManager = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AccessibilitySceneManager"
QT_MOC_LITERAL(1, 26, 26), // "populateAccessibilityScene"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 33), // "updateAccessibilitySceneItemF..."
QT_MOC_LITERAL(4, 88, 30), // "populateAccessibilityTreeScene"
QT_MOC_LITERAL(5, 119, 12), // "handleUpdate"
QT_MOC_LITERAL(6, 132, 17), // "QAccessibleEvent*"
QT_MOC_LITERAL(7, 150, 5), // "event"
QT_MOC_LITERAL(8, 156, 11), // "setSelected"
QT_MOC_LITERAL(9, 168, 6), // "object"
QT_MOC_LITERAL(10, 175, 11), // "changeScale"
QT_MOC_LITERAL(11, 187, 5) // "scale"

    },
    "AccessibilitySceneManager\0"
    "populateAccessibilityScene\0\0"
    "updateAccessibilitySceneItemFlags\0"
    "populateAccessibilityTreeScene\0"
    "handleUpdate\0QAccessibleEvent*\0event\0"
    "setSelected\0object\0changeScale\0scale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccessibilitySceneManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       8,    1,   50,    2, 0x0a /* Public */,
      10,    1,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void AccessibilitySceneManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccessibilitySceneManager *_t = static_cast<AccessibilitySceneManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->populateAccessibilityScene(); break;
        case 1: _t->updateAccessibilitySceneItemFlags(); break;
        case 2: _t->populateAccessibilityTreeScene(); break;
        case 3: _t->handleUpdate((*reinterpret_cast< QAccessibleEvent*(*)>(_a[1]))); break;
        case 4: _t->setSelected((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 5: _t->changeScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AccessibilitySceneManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AccessibilitySceneManager.data,
      qt_meta_data_AccessibilitySceneManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AccessibilitySceneManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccessibilitySceneManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccessibilitySceneManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AccessibilitySceneManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
