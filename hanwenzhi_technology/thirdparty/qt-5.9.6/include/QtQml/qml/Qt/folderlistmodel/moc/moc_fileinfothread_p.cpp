/****************************************************************************
** Meta object code from reading C++ file 'fileinfothread_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fileinfothread_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileinfothread_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileInfoThread_t {
    QByteArrayData data[14];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileInfoThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileInfoThread_t qt_meta_stringdata_FileInfoThread = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FileInfoThread"
QT_MOC_LITERAL(1, 15, 16), // "directoryChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "directory"
QT_MOC_LITERAL(4, 43, 19), // "QList<FileProperty>"
QT_MOC_LITERAL(5, 63, 4), // "list"
QT_MOC_LITERAL(6, 68, 16), // "directoryUpdated"
QT_MOC_LITERAL(7, 85, 9), // "fromIndex"
QT_MOC_LITERAL(8, 95, 7), // "toIndex"
QT_MOC_LITERAL(9, 103, 12), // "sortFinished"
QT_MOC_LITERAL(10, 116, 10), // "dirChanged"
QT_MOC_LITERAL(11, 127, 13), // "directoryPath"
QT_MOC_LITERAL(12, 141, 10), // "updateFile"
QT_MOC_LITERAL(13, 152, 4) // "path"

    },
    "FileInfoThread\0directoryChanged\0\0"
    "directory\0QList<FileProperty>\0list\0"
    "directoryUpdated\0fromIndex\0toIndex\0"
    "sortFinished\0dirChanged\0directoryPath\0"
    "updateFile\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileInfoThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    4,   44,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   56,    2, 0x0a /* Public */,
      12,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, QMetaType::Int, QMetaType::Int,    3,    5,    7,    8,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void FileInfoThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileInfoThread *_t = static_cast<FileInfoThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->directoryChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<FileProperty>(*)>(_a[2]))); break;
        case 1: _t->directoryUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<FileProperty>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->sortFinished((*reinterpret_cast< const QList<FileProperty>(*)>(_a[1]))); break;
        case 3: _t->dirChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FileInfoThread::*_t)(const QString & , const QList<FileProperty> & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileInfoThread::directoryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FileInfoThread::*_t)(const QString & , const QList<FileProperty> & , int , int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileInfoThread::directoryUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FileInfoThread::*_t)(const QList<FileProperty> & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileInfoThread::sortFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject FileInfoThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_FileInfoThread.data,
      qt_meta_data_FileInfoThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FileInfoThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileInfoThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileInfoThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int FileInfoThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FileInfoThread::directoryChanged(const QString & _t1, const QList<FileProperty> & _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< FileInfoThread *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileInfoThread::directoryUpdated(const QString & _t1, const QList<FileProperty> & _t2, int _t3, int _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(const_cast< FileInfoThread *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileInfoThread::sortFinished(const QList<FileProperty> & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< FileInfoThread *>(this), &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
