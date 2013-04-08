// Filename: dtool_super_base.cxx
// Created by:  drose (04Jul05)
//
////////////////////////////////////////////////////////////////////
//
// PANDA 3D SOFTWARE
// Copyright (c) Carnegie Mellon University.  All rights reserved.
//
// All use of this software is subject to the terms of the revised BSD
// license.  You should have received a copy of this license along
// with this source code in a file named "LICENSE."
//
////////////////////////////////////////////////////////////////////

#include "py_panda.h"

#ifdef HAVE_PYTHON
  
class EmptyClass {
};
Define_Module_Class_Private(dtoolconfig, DTOOL_SUPER_BASE, EmptyClass, DTOOL_SUPER_BASE111);

static PyObject *GetSuperBase(PyObject *self) {
  Py_INCREF(&(Dtool_DTOOL_SUPER_BASE.As_PyTypeObject())); // order is important .. this is used for static functions
  return (PyObject *) &Dtool_DTOOL_SUPER_BASE;
};

PyMethodDef Dtool_Methods_DTOOL_SUPER_BASE[] = {
  { "DtoolGetSuperBase", (PyCFunction) &GetSuperBase, METH_NOARGS, "Will Return SUPERbase Class"},
  { NULL, NULL }
};

static Py_hash_t DTool_HashKey_Methods_DTOOL_SUPER_BASE(PyObject *self) {
  void *local_this = DTOOL_Call_GetPointerThis(self);
  if (local_this == NULL) {
    return -1;
  }
  return (Py_hash_t) local_this;
};

inline void Dtool_PyModuleClassInit_DTOOL_SUPER_BASE(PyObject *module) {
  static bool initdone = false;
  if (!initdone) {

    initdone = true;
    Dtool_DTOOL_SUPER_BASE.As_PyTypeObject().tp_dict = PyDict_New();
    PyDict_SetItemString(Dtool_DTOOL_SUPER_BASE.As_PyTypeObject().tp_dict, "DtoolClassDict", Dtool_DTOOL_SUPER_BASE.As_PyTypeObject().tp_dict);

    // __hash__
    Dtool_DTOOL_SUPER_BASE.As_PyTypeObject().tp_hash = &DTool_HashKey_Methods_DTOOL_SUPER_BASE;
#if PY_MAJOR_VERSION >= 3
    // Python 3 removed the regular tp_compare function - there is only tp_richcompare.
    Dtool_DTOOL_SUPER_BASE.As_PyTypeObject().tp_richcompare = &DTOOL_PyObject_RichCompare;
#else
    Dtool_DTOOL_SUPER_BASE.As_PyTypeObject().tp_compare = &DTOOL_PyObject_Compare;
#endif

    if (PyType_Ready(&Dtool_DTOOL_SUPER_BASE.As_PyTypeObject()) < 0) {
      PyErr_SetString(PyExc_TypeError, "PyType_Ready(Dtool_DTOOL_SUPER_BASE)");
      return;
    }
    Py_INCREF(&Dtool_DTOOL_SUPER_BASE.As_PyTypeObject());

    PyDict_SetItemString(Dtool_DTOOL_SUPER_BASE.As_PyTypeObject().tp_dict, "DtoolGetSuperBase", PyCFunction_New(&Dtool_Methods_DTOOL_SUPER_BASE[0], &Dtool_DTOOL_SUPER_BASE.As_PyObject()));
  }

  if (module != NULL) {
    Py_INCREF(&Dtool_DTOOL_SUPER_BASE.As_PyTypeObject());
    PyModule_AddObject(module, "DTOOL_SUPER_BASE", (PyObject *)&Dtool_DTOOL_SUPER_BASE.As_PyTypeObject());
  }
}

inline void *Dtool_DowncastInterface_DTOOL_SUPER_BASE(void *from_this, Dtool_PyTypedObject *from_type) {
  return (void *) NULL;
}

inline void *Dtool_UpcastInterface_DTOOL_SUPER_BASE(PyObject *self, Dtool_PyTypedObject *requested_type) {
  return NULL;
}

int Dtool_Init_DTOOL_SUPER_BASE(PyObject *self, PyObject *args, PyObject *kwds) {
  PyErr_SetString(PyExc_TypeError, "cannot init super base");
  return -1;
}

int Dtool_InitNoCoerce_DTOOL_SUPER_BASE(PyObject *self, PyObject *args, PyObject *kwds) {
  PyErr_SetString(PyExc_TypeError, "cannot init super base");
  return -1;
}

#endif  // HAVE_PYTHON
