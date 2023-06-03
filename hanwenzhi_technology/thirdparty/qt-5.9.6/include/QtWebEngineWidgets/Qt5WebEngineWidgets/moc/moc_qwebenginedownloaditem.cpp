/****************************************************************************
** Meta object code from reading C++ file 'qwebenginedownloaditem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qwebenginedownloaditem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebenginedownloaditem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWebEngineDownloadItem_t {
    QByteArrayData data[52];
    char stringdata0[822];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebEngineDownloadItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebEngineDownloadItem_t qt_meta_stringdata_QWebEngineDownloadItem = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QWebEngineDownloadItem"
QT_MOC_LITERAL(1, 23, 8), // "finished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "stateChanged"
QT_MOC_LITERAL(4, 46, 37), // "QWebEngineDownloadItem::Downl..."
QT_MOC_LITERAL(5, 84, 5), // "state"
QT_MOC_LITERAL(6, 90, 16), // "downloadProgress"
QT_MOC_LITERAL(7, 107, 13), // "bytesReceived"
QT_MOC_LITERAL(8, 121, 10), // "bytesTotal"
QT_MOC_LITERAL(9, 132, 6), // "accept"
QT_MOC_LITERAL(10, 139, 6), // "cancel"
QT_MOC_LITERAL(11, 146, 13), // "DownloadState"
QT_MOC_LITERAL(12, 160, 17), // "DownloadRequested"
QT_MOC_LITERAL(13, 178, 18), // "DownloadInProgress"
QT_MOC_LITERAL(14, 197, 17), // "DownloadCompleted"
QT_MOC_LITERAL(15, 215, 17), // "DownloadCancelled"
QT_MOC_LITERAL(16, 233, 19), // "DownloadInterrupted"
QT_MOC_LITERAL(17, 253, 14), // "SavePageFormat"
QT_MOC_LITERAL(18, 268, 17), // "UnknownSaveFormat"
QT_MOC_LITERAL(19, 286, 20), // "SingleHtmlSaveFormat"
QT_MOC_LITERAL(20, 307, 22), // "CompleteHtmlSaveFormat"
QT_MOC_LITERAL(21, 330, 18), // "MimeHtmlSaveFormat"
QT_MOC_LITERAL(22, 349, 23), // "DownloadInterruptReason"
QT_MOC_LITERAL(23, 373, 8), // "NoReason"
QT_MOC_LITERAL(24, 382, 10), // "FileFailed"
QT_MOC_LITERAL(25, 393, 16), // "FileAccessDenied"
QT_MOC_LITERAL(26, 410, 11), // "FileNoSpace"
QT_MOC_LITERAL(27, 422, 15), // "FileNameTooLong"
QT_MOC_LITERAL(28, 438, 12), // "FileTooLarge"
QT_MOC_LITERAL(29, 451, 17), // "FileVirusInfected"
QT_MOC_LITERAL(30, 469, 18), // "FileTransientError"
QT_MOC_LITERAL(31, 488, 11), // "FileBlocked"
QT_MOC_LITERAL(32, 500, 23), // "FileSecurityCheckFailed"
QT_MOC_LITERAL(33, 524, 12), // "FileTooShort"
QT_MOC_LITERAL(34, 537, 16), // "FileHashMismatch"
QT_MOC_LITERAL(35, 554, 13), // "NetworkFailed"
QT_MOC_LITERAL(36, 568, 14), // "NetworkTimeout"
QT_MOC_LITERAL(37, 583, 19), // "NetworkDisconnected"
QT_MOC_LITERAL(38, 603, 17), // "NetworkServerDown"
QT_MOC_LITERAL(39, 621, 21), // "NetworkInvalidRequest"
QT_MOC_LITERAL(40, 643, 12), // "ServerFailed"
QT_MOC_LITERAL(41, 656, 16), // "ServerBadContent"
QT_MOC_LITERAL(42, 673, 18), // "ServerUnauthorized"
QT_MOC_LITERAL(43, 692, 17), // "ServerCertProblem"
QT_MOC_LITERAL(44, 710, 15), // "ServerForbidden"
QT_MOC_LITERAL(45, 726, 17), // "ServerUnreachable"
QT_MOC_LITERAL(46, 744, 12), // "UserCanceled"
QT_MOC_LITERAL(47, 757, 12), // "DownloadType"
QT_MOC_LITERAL(48, 770, 10), // "Attachment"
QT_MOC_LITERAL(49, 781, 17), // "DownloadAttribute"
QT_MOC_LITERAL(50, 799, 13), // "UserRequested"
QT_MOC_LITERAL(51, 813, 8) // "SavePage"

    },
    "QWebEngineDownloadItem\0finished\0\0"
    "stateChanged\0QWebEngineDownloadItem::DownloadState\0"
    "state\0downloadProgress\0bytesReceived\0"
    "bytesTotal\0accept\0cancel\0DownloadState\0"
    "DownloadRequested\0DownloadInProgress\0"
    "DownloadCompleted\0DownloadCancelled\0"
    "DownloadInterrupted\0SavePageFormat\0"
    "UnknownSaveFormat\0SingleHtmlSaveFormat\0"
    "CompleteHtmlSaveFormat\0MimeHtmlSaveFormat\0"
    "DownloadInterruptReason\0NoReason\0"
    "FileFailed\0FileAccessDenied\0FileNoSpace\0"
    "FileNameTooLong\0FileTooLarge\0"
    "FileVirusInfected\0FileTransientError\0"
    "FileBlocked\0FileSecurityCheckFailed\0"
    "FileTooShort\0FileHashMismatch\0"
    "NetworkFailed\0NetworkTimeout\0"
    "NetworkDisconnected\0NetworkServerDown\0"
    "NetworkInvalidRequest\0ServerFailed\0"
    "ServerBadContent\0ServerUnauthorized\0"
    "ServerCertProblem\0ServerForbidden\0"
    "ServerUnreachable\0UserCanceled\0"
    "DownloadType\0Attachment\0DownloadAttribute\0"
    "UserRequested\0SavePage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebEngineDownloadItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       4,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       6,    2,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   48,    2, 0x0a /* Public */,
      10,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      11, 0x0,    5,   66,
      17, 0x0,    4,   76,
      22, 0x0,   24,   84,
      47, 0x0,    4,  132,

 // enum data: key, value
      12, uint(QWebEngineDownloadItem::DownloadRequested),
      13, uint(QWebEngineDownloadItem::DownloadInProgress),
      14, uint(QWebEngineDownloadItem::DownloadCompleted),
      15, uint(QWebEngineDownloadItem::DownloadCancelled),
      16, uint(QWebEngineDownloadItem::DownloadInterrupted),
      18, uint(QWebEngineDownloadItem::UnknownSaveFormat),
      19, uint(QWebEngineDownloadItem::SingleHtmlSaveFormat),
      20, uint(QWebEngineDownloadItem::CompleteHtmlSaveFormat),
      21, uint(QWebEngineDownloadItem::MimeHtmlSaveFormat),
      23, uint(QWebEngineDownloadItem::NoReason),
      24, uint(QWebEngineDownloadItem::FileFailed),
      25, uint(QWebEngineDownloadItem::FileAccessDenied),
      26, uint(QWebEngineDownloadItem::FileNoSpace),
      27, uint(QWebEngineDownloadItem::FileNameTooLong),
      28, uint(QWebEngineDownloadItem::FileTooLarge),
      29, uint(QWebEngineDownloadItem::FileVirusInfected),
      30, uint(QWebEngineDownloadItem::FileTransientError),
      31, uint(QWebEngineDownloadItem::FileBlocked),
      32, uint(QWebEngineDownloadItem::FileSecurityCheckFailed),
      33, uint(QWebEngineDownloadItem::FileTooShort),
      34, uint(QWebEngineDownloadItem::FileHashMismatch),
      35, uint(QWebEngineDownloadItem::NetworkFailed),
      36, uint(QWebEngineDownloadItem::NetworkTimeout),
      37, uint(QWebEngineDownloadItem::NetworkDisconnected),
      38, uint(QWebEngineDownloadItem::NetworkServerDown),
      39, uint(QWebEngineDownloadItem::NetworkInvalidRequest),
      40, uint(QWebEngineDownloadItem::ServerFailed),
      41, uint(QWebEngineDownloadItem::ServerBadContent),
      42, uint(QWebEngineDownloadItem::ServerUnauthorized),
      43, uint(QWebEngineDownloadItem::ServerCertProblem),
      44, uint(QWebEngineDownloadItem::ServerForbidden),
      45, uint(QWebEngineDownloadItem::ServerUnreachable),
      46, uint(QWebEngineDownloadItem::UserCanceled),
      48, uint(QWebEngineDownloadItem::Attachment),
      49, uint(QWebEngineDownloadItem::DownloadAttribute),
      50, uint(QWebEngineDownloadItem::UserRequested),
      51, uint(QWebEngineDownloadItem::SavePage),

       0        // eod
};

void QWebEngineDownloadItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWebEngineDownloadItem *_t = static_cast<QWebEngineDownloadItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->stateChanged((*reinterpret_cast< QWebEngineDownloadItem::DownloadState(*)>(_a[1]))); break;
        case 2: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->accept(); break;
        case 4: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QWebEngineDownloadItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebEngineDownloadItem::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWebEngineDownloadItem::*_t)(QWebEngineDownloadItem::DownloadState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebEngineDownloadItem::stateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QWebEngineDownloadItem::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebEngineDownloadItem::downloadProgress)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QWebEngineDownloadItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebEngineDownloadItem.data,
      qt_meta_data_QWebEngineDownloadItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWebEngineDownloadItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebEngineDownloadItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebEngineDownloadItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QWebEngineDownloadItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QWebEngineDownloadItem::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QWebEngineDownloadItem::stateChanged(QWebEngineDownloadItem::DownloadState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QWebEngineDownloadItem::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
