/****************************************************************************
** Meta object code from reading C++ file 'mastercontrolwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../mastercontrolwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mastercontrolwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
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
struct qt_meta_tag_ZN19MasterControlWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN19MasterControlWindowE = QtMocHelpers::stringData(
    "MasterControlWindow",
    "on_radioButtonLogMode_toggled",
    "",
    "checked",
    "on_radioButtonJournalMode_toggled",
    "on_radioButtonNarrativeMode_toggled",
    "on_pushButtonTerminalON_OFF_clicked",
    "on_pushButtonSamosborStart_clicked",
    "on_pushButtonSamosborPause_clicked",
    "on_pushButtonSamosborResume_clicked",
    "on_pushButtonSamosborManualTrigger_clicked",
    "on_pushButtonSamosborManualSlowdown_clicked",
    "on_pushButtonRandomEvent_clicked",
    "on_pushButtonBack_clicked",
    "updateHexDisplay"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN19MasterControlWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x08,    1 /* Private */,
       4,    1,   89,    2, 0x08,    3 /* Private */,
       5,    1,   92,    2, 0x08,    5 /* Private */,
       6,    0,   95,    2, 0x08,    7 /* Private */,
       7,    0,   96,    2, 0x08,    8 /* Private */,
       8,    0,   97,    2, 0x08,    9 /* Private */,
       9,    0,   98,    2, 0x08,   10 /* Private */,
      10,    0,   99,    2, 0x08,   11 /* Private */,
      11,    0,  100,    2, 0x08,   12 /* Private */,
      12,    0,  101,    2, 0x08,   13 /* Private */,
      13,    0,  102,    2, 0x08,   14 /* Private */,
      14,    0,  103,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MasterControlWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN19MasterControlWindowE.offsetsAndSizes,
    qt_meta_data_ZN19MasterControlWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN19MasterControlWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MasterControlWindow, std::true_type>,
        // method 'on_radioButtonLogMode_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButtonJournalMode_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButtonNarrativeMode_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_pushButtonTerminalON_OFF_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSamosborStart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSamosborPause_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSamosborResume_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSamosborManualTrigger_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSamosborManualSlowdown_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonRandomEvent_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonBack_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateHexDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MasterControlWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MasterControlWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_radioButtonLogMode_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->on_radioButtonJournalMode_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->on_radioButtonNarrativeMode_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_pushButtonTerminalON_OFF_clicked(); break;
        case 4: _t->on_pushButtonSamosborStart_clicked(); break;
        case 5: _t->on_pushButtonSamosborPause_clicked(); break;
        case 6: _t->on_pushButtonSamosborResume_clicked(); break;
        case 7: _t->on_pushButtonSamosborManualTrigger_clicked(); break;
        case 8: _t->on_pushButtonSamosborManualSlowdown_clicked(); break;
        case 9: _t->on_pushButtonRandomEvent_clicked(); break;
        case 10: _t->on_pushButtonBack_clicked(); break;
        case 11: _t->updateHexDisplay(); break;
        default: ;
        }
    }
}

const QMetaObject *MasterControlWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasterControlWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN19MasterControlWindowE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MasterControlWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
