/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../prototype/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[545];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 30), // "on_ExternalRepaymentRB_toggled"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 7), // "checked"
QT_MOC_LITERAL(4, 51, 27), // "on_ExternalVolumeRB_toggled"
QT_MOC_LITERAL(5, 79, 50), // "on_ExternalVolumeFromMonthCmB..."
QT_MOC_LITERAL(6, 130, 5), // "index"
QT_MOC_LITERAL(7, 136, 48), // "on_ExternalVolumeToMonthCmBx_..."
QT_MOC_LITERAL(8, 185, 49), // "on_ExternalVolumeFromYearCmBx..."
QT_MOC_LITERAL(9, 235, 4), // "arg1"
QT_MOC_LITERAL(10, 240, 47), // "on_ExternalVolumeToYearCmBx_c..."
QT_MOC_LITERAL(11, 288, 50), // "on_InternalVolumeFromMonthCmB..."
QT_MOC_LITERAL(12, 339, 49), // "on_InternalVolumeFromYearCmBx..."
QT_MOC_LITERAL(13, 389, 48), // "on_InternalVolumeToMonthCmBx_..."
QT_MOC_LITERAL(14, 438, 47), // "on_InternalVolumeToYearCmBx_c..."
QT_MOC_LITERAL(15, 486, 30), // "on_InternalRepaymentRB_toggled"
QT_MOC_LITERAL(16, 517, 27) // "on_InternalVolumeRB_toggled"

    },
    "MainWindow\0on_ExternalRepaymentRB_toggled\0"
    "\0checked\0on_ExternalVolumeRB_toggled\0"
    "on_ExternalVolumeFromMonthCmBx_currentIndexChanged\0"
    "index\0on_ExternalVolumeToMonthCmBx_currentIndexChanged\0"
    "on_ExternalVolumeFromYearCmBx_currentIndexChanged\0"
    "arg1\0on_ExternalVolumeToYearCmBx_currentIndexChanged\0"
    "on_InternalVolumeFromMonthCmBx_currentIndexChanged\0"
    "on_InternalVolumeFromYearCmBx_currentIndexChanged\0"
    "on_InternalVolumeToMonthCmBx_currentIndexChanged\0"
    "on_InternalVolumeToYearCmBx_currentIndexChanged\0"
    "on_InternalRepaymentRB_toggled\0"
    "on_InternalVolumeRB_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
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
       4,    1,   77,    2, 0x08 /* Private */,
       5,    1,   80,    2, 0x08 /* Private */,
       7,    1,   83,    2, 0x08 /* Private */,
       8,    1,   86,    2, 0x08 /* Private */,
      10,    1,   89,    2, 0x08 /* Private */,
      11,    1,   92,    2, 0x08 /* Private */,
      12,    1,   95,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      14,    1,  101,    2, 0x08 /* Private */,
      15,    1,  104,    2, 0x08 /* Private */,
      16,    1,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ExternalRepaymentRB_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_ExternalVolumeRB_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_ExternalVolumeFromMonthCmBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_ExternalVolumeToMonthCmBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_ExternalVolumeFromYearCmBx_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_ExternalVolumeToYearCmBx_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_InternalVolumeFromMonthCmBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_InternalVolumeFromYearCmBx_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_InternalVolumeToMonthCmBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_InternalVolumeToYearCmBx_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_InternalRepaymentRB_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_InternalVolumeRB_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
