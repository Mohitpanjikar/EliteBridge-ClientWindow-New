/****************************************************************************
** Meta object code from reading C++ file 'jobs.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Jobs/jobs.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jobs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSJobsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSJobsENDCLASS = QtMocHelpers::stringData(
    "Jobs",
    "onCellClicked",
    "",
    "row",
    "column",
    "addUserForm",
    "search",
    "deleteUser",
    "updateUser",
    "userSave",
    "fillUndoStruct",
    "undoFunc"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSJobsENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[5];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[7];
    char stringdata5[12];
    char stringdata6[7];
    char stringdata7[11];
    char stringdata8[11];
    char stringdata9[9];
    char stringdata10[15];
    char stringdata11[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSJobsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSJobsENDCLASS_t qt_meta_stringdata_CLASSJobsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Jobs"
        QT_MOC_LITERAL(5, 13),  // "onCellClicked"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 3),  // "row"
        QT_MOC_LITERAL(24, 6),  // "column"
        QT_MOC_LITERAL(31, 11),  // "addUserForm"
        QT_MOC_LITERAL(43, 6),  // "search"
        QT_MOC_LITERAL(50, 10),  // "deleteUser"
        QT_MOC_LITERAL(61, 10),  // "updateUser"
        QT_MOC_LITERAL(72, 8),  // "userSave"
        QT_MOC_LITERAL(81, 14),  // "fillUndoStruct"
        QT_MOC_LITERAL(96, 8)   // "undoFunc"
    },
    "Jobs",
    "onCellClicked",
    "",
    "row",
    "column",
    "addUserForm",
    "search",
    "deleteUser",
    "updateUser",
    "userSave",
    "fillUndoStruct",
    "undoFunc"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSJobsENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x08,    1 /* Private */,
       5,    0,   67,    2, 0x08,    4 /* Private */,
       6,    0,   68,    2, 0x08,    5 /* Private */,
       7,    0,   69,    2, 0x08,    6 /* Private */,
       8,    0,   70,    2, 0x08,    7 /* Private */,
       9,    0,   71,    2, 0x08,    8 /* Private */,
      10,    0,   72,    2, 0x08,    9 /* Private */,
      11,    0,   73,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Jobs::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSJobsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSJobsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSJobsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Jobs, std::true_type>,
        // method 'onCellClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'addUserForm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'search'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userSave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fillUndoStruct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undoFunc'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Jobs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Jobs *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->addUserForm(); break;
        case 2: _t->search(); break;
        case 3: _t->deleteUser(); break;
        case 4: _t->updateUser(); break;
        case 5: _t->userSave(); break;
        case 6: _t->fillUndoStruct(); break;
        case 7: _t->undoFunc(); break;
        default: ;
        }
    }
}

const QMetaObject *Jobs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Jobs::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSJobsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Jobs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
