/****************************************************************************
** Meta object code from reading C++ file 'chartshow.h'
**
** Created: Wed Jan 9 16:23:39 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "chartshow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartshow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChartShow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      26,   10,   10,   10, 0x0a,
      45,   10,   10,   10, 0x0a,
      64,   10,   10,   10, 0x0a,
      90,   10,   10,   10, 0x0a,
     117,   10,   10,   10, 0x0a,
     143,   10,   10,   10, 0x0a,
     164,   10,   10,   10, 0x0a,
     194,   10,   10,   10, 0x0a,
     218,   10,   10,   10, 0x0a,
     247,   10,   10,   10, 0x0a,
     274,   10,   10,   10, 0x0a,
     300,   10,   10,   10, 0x0a,
     325,   10,   10,   10, 0x0a,
     356,   10,   10,   10, 0x0a,
     390,   10,   10,   10, 0x0a,
     426,   10,   10,   10, 0x0a,
     458,   10,   10,   10, 0x0a,
     492,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ChartShow[] = {
    "ChartShow\0\0makeRandData()\0chbTData_clicked()\0"
    "btnClose_clicked()\0PushButtonStart_clicked()\0"
    "PushButtonOffAll_clicked()\0"
    "PushButtonOnAll_clicked()\0"
    "CheckBoxLK_clicked()\0PushButtonIshRazmDN_clicked()\0"
    "CheckBoxRegKK_clicked()\0"
    "PushButtonStartOsc_clicked()\0"
    "PushButtonAccept_clicked()\0"
    "PushButtonNoise_clicked()\0"
    "PushButtonSigs_clicked()\0"
    "PushButtonIshRazmOsc_clicked()\0"
    "ComboBoxPoints_activated(QString)\0"
    "SpinBoxCanals_valueChanged(QString)\0"
    "LineEditUp_textChanged(QString)\0"
    "LineEditDown_textChanged(QString)\0"
    "LineEditData_textChanged(QString)\0"
};

void ChartShow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChartShow *_t = static_cast<ChartShow *>(_o);
        switch (_id) {
        case 0: _t->makeRandData(); break;
        case 1: _t->chbTData_clicked(); break;
        case 2: _t->btnClose_clicked(); break;
        case 3: _t->PushButtonStart_clicked(); break;
        case 4: _t->PushButtonOffAll_clicked(); break;
        case 5: _t->PushButtonOnAll_clicked(); break;
        case 6: _t->CheckBoxLK_clicked(); break;
        case 7: _t->PushButtonIshRazmDN_clicked(); break;
        case 8: _t->CheckBoxRegKK_clicked(); break;
        case 9: _t->PushButtonStartOsc_clicked(); break;
        case 10: _t->PushButtonAccept_clicked(); break;
        case 11: _t->PushButtonNoise_clicked(); break;
        case 12: _t->PushButtonSigs_clicked(); break;
        case 13: _t->PushButtonIshRazmOsc_clicked(); break;
        case 14: _t->ComboBoxPoints_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->SpinBoxCanals_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->LineEditUp_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->LineEditDown_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->LineEditData_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChartShow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChartShow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChartShow,
      qt_meta_data_ChartShow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChartShow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChartShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChartShow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChartShow))
        return static_cast<void*>(const_cast< ChartShow*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChartShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
