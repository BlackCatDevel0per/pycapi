# include "Python.h"


# define CAPI_METHOD_VOID(F) {#F, pycapi_##F, METH_NOARGS, NULL}
# define CAPI_DEFINE_VOID(F)                                                          \
static PyObject* pycapi_##F(PyObject* Py_UNUSED(self), PyObject* Py_UNUSED(unused)) { \
    F();                                                                              \
    Py_RETURN_NONE;                                                                   \
}

# define CAPI_METHOD_VOID_1PYOBJECT(F) {#F, pycapi_##F, METH_O, NULL}
# define CAPI_DEFINE_VOID_1PYOBJECT(F)                                  \
static PyObject* pycapi_##F(PyObject* Py_UNUSED(self), PyObject* arg) { \
    F(arg);                                                             \
    Py_RETURN_NONE;                                                     \
}


CAPI_DEFINE_VOID(PyErr_BadInternalCall)
CAPI_DEFINE_VOID(PyErr_Clear)
CAPI_DEFINE_VOID(PyErr_Print)
CAPI_DEFINE_VOID(PyErr_SetInterrupt)
CAPI_DEFINE_VOID(PyEval_InitThreads)
CAPI_DEFINE_VOID(PyEval_ReleaseLock)
CAPI_DEFINE_VOID(PyImport_Cleanup)
CAPI_DEFINE_VOID(PySys_ResetWarnOptions)
CAPI_DEFINE_VOID(Py_Finalize)
CAPI_DEFINE_VOID(Py_Initialize)

CAPI_DEFINE_VOID_1PYOBJECT(PyDict_Clear)
CAPI_DEFINE_VOID_1PYOBJECT(PyErr_SetNone)
CAPI_DEFINE_VOID_1PYOBJECT(PyErr_WriteUnraisable)
CAPI_DEFINE_VOID_1PYOBJECT(PyObject_GC_Track)
CAPI_DEFINE_VOID_1PYOBJECT(PySys_AddWarnOptionUnicode)
CAPI_DEFINE_VOID_1PYOBJECT(Py_CLEAR)
CAPI_DEFINE_VOID_1PYOBJECT(Py_DECREF)
CAPI_DEFINE_VOID_1PYOBJECT(Py_INCREF)
CAPI_DEFINE_VOID_1PYOBJECT(Py_ReprLeave)
CAPI_DEFINE_VOID_1PYOBJECT(Py_XDECREF)
CAPI_DEFINE_VOID_1PYOBJECT(Py_XINCREF)

# if PY_VERSION_HEX < 0x030200A0
    CAPI_DEFINE_VOID(PyEval_AcquireLock)
# endif

# if PY_VERSION_HEX < 0x030700A0
    CAPI_DEFINE_VOID(PyOS_AfterFork)
# else
    CAPI_DEFINE_VOID(PyOS_AfterFork_Child)
    CAPI_DEFINE_VOID(PyOS_AfterFork_Parent)
    CAPI_DEFINE_VOID(PyOS_BeforeFork)
# endif


static PyMethodDef CAPIMethods[] =  {

    CAPI_METHOD_VOID(PyErr_BadInternalCall),
    CAPI_METHOD_VOID(PyErr_Clear),
    CAPI_METHOD_VOID(PyErr_Print),
    CAPI_METHOD_VOID(PyErr_SetInterrupt),
    CAPI_METHOD_VOID(PyEval_InitThreads),
    CAPI_METHOD_VOID(PyEval_ReleaseLock),
    CAPI_METHOD_VOID(PyImport_Cleanup),
    CAPI_METHOD_VOID(PySys_ResetWarnOptions),
    CAPI_METHOD_VOID(Py_Finalize),
    CAPI_METHOD_VOID(Py_Initialize),

    CAPI_METHOD_VOID_1PYOBJECT(PyDict_Clear),
    CAPI_METHOD_VOID_1PYOBJECT(PyErr_SetNone),
    CAPI_METHOD_VOID_1PYOBJECT(PyErr_WriteUnraisable),
    CAPI_METHOD_VOID_1PYOBJECT(PyObject_GC_Track),
    CAPI_METHOD_VOID_1PYOBJECT(PySys_AddWarnOptionUnicode),
    CAPI_METHOD_VOID_1PYOBJECT(Py_CLEAR),
    CAPI_METHOD_VOID_1PYOBJECT(Py_DECREF),
    CAPI_METHOD_VOID_1PYOBJECT(Py_INCREF),
    CAPI_METHOD_VOID_1PYOBJECT(Py_ReprLeave),
    CAPI_METHOD_VOID_1PYOBJECT(Py_XDECREF),
    CAPI_METHOD_VOID_1PYOBJECT(Py_XINCREF),

    # if PY_VERSION_HEX < 0x030700A0
        CAPI_METHOD_VOID(PyOS_AfterFork),
    # else
        CAPI_METHOD_VOID(PyOS_AfterFork_Child),
        CAPI_METHOD_VOID(PyOS_AfterFork_Parent),
        CAPI_METHOD_VOID(PyOS_BeforeFork),
    # endif

    # if PY_VERSION_HEX < 0x030200A0
        CAPI_METHOD_VOID(PyEval_AcquireLock),
    # endif

    {NULL, NULL, 0, NULL},
};


static struct PyModuleDef CAPIModule = {
    PyModuleDef_HEAD_INIT, "pycapi", NULL, -1, CAPIMethods,
};

PyObject* PyInit_pycapi(void) {
    return PyModule_Create(&CAPIModule);
}
