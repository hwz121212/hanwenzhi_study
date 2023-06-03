/****************************************************************************
** Meta object code from reading C++ file 'qaspectmanager_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DCore/private/qaspectmanager_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaspectmanager_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DCore__QAspectManager_t {
    QByteArrayData data[22];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__QAspectManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__QAspectManager_t qt_meta_stringdata_Qt3DCore__QAspectManager = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Qt3DCore::QAspectManager"
QT_MOC_LITERAL(1, 25, 10), // "initialize"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "shutdown"
QT_MOC_LITERAL(4, 46, 13), // "setRootEntity"
QT_MOC_LITERAL(5, 60, 18), // "Qt3DCore::QEntity*"
QT_MOC_LITERAL(6, 79, 4), // "root"
QT_MOC_LITERAL(7, 84, 44), // "QVector<Qt3DCore::QNodeCreate..."
QT_MOC_LITERAL(8, 129, 7), // "changes"
QT_MOC_LITERAL(9, 137, 14), // "registerAspect"
QT_MOC_LITERAL(10, 152, 26), // "Qt3DCore::QAbstractAspect*"
QT_MOC_LITERAL(11, 179, 6), // "aspect"
QT_MOC_LITERAL(12, 186, 16), // "unregisterAspect"
QT_MOC_LITERAL(13, 203, 4), // "exec"
QT_MOC_LITERAL(14, 208, 4), // "quit"
QT_MOC_LITERAL(15, 213, 7), // "aspects"
QT_MOC_LITERAL(16, 221, 10), // "jobManager"
QT_MOC_LITERAL(17, 232, 26), // "QAbstractAspectJobManager*"
QT_MOC_LITERAL(18, 259, 13), // "changeArbiter"
QT_MOC_LITERAL(19, 273, 15), // "QChangeArbiter*"
QT_MOC_LITERAL(20, 289, 14), // "serviceLocator"
QT_MOC_LITERAL(21, 304, 16) // "QServiceLocator*"

    },
    "Qt3DCore::QAspectManager\0initialize\0"
    "\0shutdown\0setRootEntity\0Qt3DCore::QEntity*\0"
    "root\0QVector<Qt3DCore::QNodeCreatedChangeBasePtr>\0"
    "changes\0registerAspect\0"
    "Qt3DCore::QAbstractAspect*\0aspect\0"
    "unregisterAspect\0exec\0quit\0aspects\0"
    "jobManager\0QAbstractAspectJobManager*\0"
    "changeArbiter\0QChangeArbiter*\0"
    "serviceLocator\0QServiceLocator*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__QAspectManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    2,   71,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      12,    1,   79,    2, 0x0a /* Public */,
      13,    0,   82,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x0a /* Public */,
      15,    0,   84,    2, 0x0a /* Public */,
      16,    0,   85,    2, 0x0a /* Public */,
      18,    0,   86,    2, 0x0a /* Public */,
      20,    0,   87,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 17,
    0x80000000 | 19,
    0x80000000 | 21,

       0        // eod
};

void Qt3DCore::QAspectManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAspectManager *_t = static_cast<QAspectManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initialize(); break;
        case 1: _t->shutdown(); break;
        case 2: _t->setRootEntity((*reinterpret_cast< Qt3DCore::QEntity*(*)>(_a[1])),(*reinterpret_cast< const QVector<Qt3DCore::QNodeCreatedChangeBasePtr>(*)>(_a[2]))); break;
        case 3: _t->registerAspect((*reinterpret_cast< Qt3DCore::QAbstractAspect*(*)>(_a[1]))); break;
        case 4: _t->unregisterAspect((*reinterpret_cast< Qt3DCore::QAbstractAspect*(*)>(_a[1]))); break;
        case 5: _t->exec(); break;
        case 6: _t->quit(); break;
        case 7: _t->aspects(); break;
        case 8: { QAbstractAspectJobManager* _r = _t->jobManager();
            if (_a[0]) *reinterpret_cast< QAbstractAspectJobManager**>(_a[0]) = std::move(_r); }  break;
        case 9: { QChangeArbiter* _r = _t->changeArbiter();
            if (_a[0]) *reinterpret_cast< QChangeArbiter**>(_a[0]) = std::move(_r); }  break;
        case 10: { QServiceLocator* _r = _t->serviceLocator();
            if (_a[0]) *reinterpret_cast< QServiceLocator**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject Qt3DCore::QAspectManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DCore__QAspectManager.data,
      qt_meta_data_Qt3DCore__QAspectManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DCore::QAspectManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DCore::QAspectManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DCore__QAspectManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DCore::QAspectManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
