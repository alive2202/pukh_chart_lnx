/****************************************************************************
** Meta object code from reading C++ file 'tthread.h'
**
** Created: Wed Jan 9 16:23:40 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      15,    8,    8,    8, 0x0a,
      22,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TThread[] = {
    "TThread\0\0run()\0stop()\0readFromNetwork()\0"
};

void TThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TThread *_t = static_cast<TThread *>(_o);
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->stop(); break;
        case 2: _t->readFromNetwork(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_TThread,
      qt_meta_data_TThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TThread))
        return static_cast<void*>(const_cast< TThread*>(this));
    return QThread::qt_metacast(_clname);
}

int TThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
