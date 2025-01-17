"""This file is automatically generated by generate.py."""

import sys
import typing

# Py

def Py_CLEAR(__0: object) -> None: ...
def Py_CompileString(__0: bytes, __1: bytes, __2: int) -> typing.Any: ...
def Py_DECREF(__0: object) -> None: ...
def Py_EnterRecursiveCall(__0: bytes) -> int: ...
def Py_Exit(__0: int) -> typing.NoReturn: ...
def Py_FatalError(__0: bytes) -> typing.NoReturn: ...
def Py_Finalize() -> None: ...
def Py_FinalizeEx() -> int: ...
def Py_GetBuildInfo() -> typing.Optional[bytes]: ...
def Py_GetCompiler() -> typing.Optional[bytes]: ...
def Py_GetCopyright() -> typing.Optional[bytes]: ...
def Py_GetExecPrefix() -> typing.Optional[str]: ...
def Py_GetPath() -> typing.Optional[str]: ...
def Py_GetPlatform() -> typing.Optional[bytes]: ...
def Py_GetPrefix() -> typing.Optional[str]: ...
def Py_GetProgramFullPath() -> typing.Optional[str]: ...
def Py_GetProgramName() -> typing.Optional[str]: ...
def Py_GetPythonHome() -> typing.Optional[str]: ...
def Py_GetVersion() -> typing.Optional[bytes]: ...
def Py_INCREF(__0: object) -> None: ...
def Py_Initialize() -> None: ...
def Py_InitializeEx(__0: int) -> None: ...
def Py_IsInitialized() -> int: ...
def Py_LeaveRecursiveCall() -> None: ...
def Py_ReprEnter(__0: object) -> int: ...
def Py_ReprLeave(__0: object) -> None: ...
def Py_SetPath(__0: str) -> None: ...
def Py_SetProgramName(__0: str) -> None: ...
def Py_SetPythonHome(__0: str) -> None: ...
def Py_SetStandardStreamEncoding(__0: bytes, __1: bytes) -> int: ...
def Py_UNICODE_ISALNUM(__0: str) -> int: ...
def Py_UNICODE_ISALPHA(__0: str) -> int: ...
def Py_UNICODE_ISDECIMAL(__0: str) -> int: ...
def Py_UNICODE_ISDIGIT(__0: str) -> int: ...
def Py_UNICODE_ISLINEBREAK(__0: str) -> int: ...
def Py_UNICODE_ISLOWER(__0: str) -> int: ...
def Py_UNICODE_ISNUMERIC(__0: str) -> int: ...
def Py_UNICODE_ISPRINTABLE(__0: str) -> int: ...
def Py_UNICODE_ISSPACE(__0: str) -> int: ...
def Py_UNICODE_ISTITLE(__0: str) -> int: ...
def Py_UNICODE_ISUPPER(__0: str) -> int: ...
def Py_UNICODE_TODECIMAL(__0: str) -> int: ...
def Py_UNICODE_TODIGIT(__0: str) -> int: ...
def Py_UNICODE_TOLOWER(__0: str) -> str: ...
def Py_UNICODE_TONUMERIC(__0: str) -> float: ...
def Py_UNICODE_TOTITLE(__0: str) -> str: ...
def Py_UNICODE_TOUPPER(__0: str) -> str: ...
def Py_XDECREF(__0: object) -> None: ...
def Py_XINCREF(__0: object) -> None: ...

# PyAnySet

def PyAnySet_Check(__0: object) -> int: ...
def PyAnySet_CheckExact(__0: object) -> int: ...

# PyArg

def PyArg_ValidateKeywordArguments(__0: object) -> int: ...

# PyBool

def PyBool_Check(__0: object) -> int: ...
def PyBool_FromLong(__0: int) -> typing.Any: ...

# PyBuffer

def PyBuffer_IsContiguous(__0: bytes, __1: bytes) -> int: ...
def PyBuffer_Release(__0: bytes) -> None: ...

# PyByteArray

def PyByteArray_AS_STRING(__0: object) -> typing.Optional[bytes]: ...
def PyByteArray_AsString(__0: object) -> typing.Optional[bytes]: ...
def PyByteArray_Check(__0: object) -> int: ...
def PyByteArray_CheckExact(__0: object) -> int: ...
def PyByteArray_Concat(__0: object, __1: object) -> typing.Any: ...
def PyByteArray_FromObject(__0: object) -> typing.Any: ...
def PyByteArray_FromStringAndSize(__0: bytes, __1: int) -> typing.Any: ...
def PyByteArray_GET_SIZE(__0: object) -> int: ...
def PyByteArray_Resize(__0: object, __1: int) -> int: ...
def PyByteArray_Size(__0: object) -> int: ...

# PyBytes

def PyBytes_AS_STRING(__0: object) -> typing.Optional[bytes]: ...
def PyBytes_AsString(__0: object) -> typing.Optional[bytes]: ...
def PyBytes_Check(__0: object) -> int: ...
def PyBytes_CheckExact(__0: object) -> int: ...
def PyBytes_FromObject(__0: object) -> typing.Any: ...
def PyBytes_FromString(__0: bytes) -> typing.Any: ...
def PyBytes_FromStringAndSize(__0: bytes, __1: int) -> typing.Any: ...
def PyBytes_GET_SIZE(__0: object) -> int: ...
def PyBytes_Size(__0: object) -> int: ...

# PyCallIter

def PyCallIter_Check(__0: object) -> int: ...
def PyCallIter_New(__0: object, __1: object) -> typing.Any: ...

# PyCallable

def PyCallable_Check(__0: object) -> int: ...

# PyCapsule

def PyCapsule_CheckExact(__0: object) -> int: ...
def PyCapsule_GetName(__0: object) -> typing.Optional[bytes]: ...
def PyCapsule_IsValid(__0: object, __1: bytes) -> int: ...
def PyCapsule_SetName(__0: object, __1: bytes) -> int: ...

# PyCell

def PyCell_Check(__0: object) -> int: ...
def PyCell_GET(__0: object) -> typing.Any: ...
def PyCell_Get(__0: object) -> typing.Any: ...
def PyCell_New(__0: object) -> typing.Any: ...
def PyCell_SET(__0: object, __1: object) -> None: ...
def PyCell_Set(__0: object, __1: object) -> int: ...

# PyCode

def PyCode_Check(__0: object) -> int: ...

# PyCodec

def PyCodec_BackslashReplaceErrors(__0: object) -> typing.Any: ...
def PyCodec_Decode(__0: object, __1: bytes, __2: bytes) -> typing.Any: ...
def PyCodec_Decoder(__0: bytes) -> typing.Any: ...
def PyCodec_Encode(__0: object, __1: bytes, __2: bytes) -> typing.Any: ...
def PyCodec_Encoder(__0: bytes) -> typing.Any: ...
def PyCodec_IgnoreErrors(__0: object) -> typing.Any: ...
def PyCodec_IncrementalDecoder(__0: bytes, __1: bytes) -> typing.Any: ...
def PyCodec_IncrementalEncoder(__0: bytes, __1: bytes) -> typing.Any: ...
def PyCodec_KnownEncoding(__0: bytes) -> int: ...
def PyCodec_LookupError(__0: bytes) -> typing.Any: ...
def PyCodec_NameReplaceErrors(__0: object) -> typing.Any: ...
def PyCodec_Register(__0: object) -> int: ...
def PyCodec_RegisterError(__0: bytes, __1: object) -> int: ...
def PyCodec_ReplaceErrors(__0: object) -> typing.Any: ...
def PyCodec_StreamReader(__0: bytes, __1: object, __2: bytes) -> typing.Any: ...
def PyCodec_StreamWriter(__0: bytes, __1: object, __2: bytes) -> typing.Any: ...
def PyCodec_StrictErrors(__0: object) -> typing.Any: ...
def PyCodec_XMLCharRefReplaceErrors(__0: object) -> typing.Any: ...

# PyComplex

def PyComplex_AsCComplex(__0: object) -> complex: ...
def PyComplex_Check(__0: object) -> int: ...
def PyComplex_CheckExact(__0: object) -> int: ...
def PyComplex_FromCComplex(__0: complex) -> typing.Any: ...
def PyComplex_FromDoubles(__0: float, __1: float) -> typing.Any: ...
def PyComplex_ImagAsDouble(__0: object) -> float: ...
def PyComplex_RealAsDouble(__0: object) -> float: ...

# PyContext

def PyContext_CheckExact(__0: object) -> int: ...

if sys.version_info < (3, 9, 0, "final", 0):

    def PyContext_ClearFreeList() -> int: ...

# PyContextToken

def PyContextToken_CheckExact(__0: object) -> int: ...

# PyContextVar

def PyContextVar_CheckExact(__0: object) -> int: ...

# PyCoro

def PyCoro_CheckExact(__0: object) -> int: ...

# PyDate

def PyDate_Check(__0: object) -> int: ...
def PyDate_CheckExact(__0: object) -> int: ...
def PyDate_FromDate(__0: int, __1: int, __2: int) -> typing.Any: ...
def PyDate_FromTimestamp(__0: object) -> typing.Any: ...

# PyDateTime

def PyDateTime_Check(__0: object) -> int: ...
def PyDateTime_CheckExact(__0: object) -> int: ...
def PyDateTime_FromDateAndTime(
    __0: int, __1: int, __2: int, __3: int, __4: int, __5: int, __6: int
) -> typing.Any: ...
def PyDateTime_FromTimestamp(__0: object) -> typing.Any: ...

# PyDelta

def PyDelta_Check(__0: object) -> int: ...
def PyDelta_CheckExact(__0: object) -> int: ...
def PyDelta_FromDSU(__0: int, __1: int, __2: int) -> typing.Any: ...

# PyDescr

def PyDescr_IsData(__0: object) -> int: ...

# PyDict

def PyDict_Check(__0: object) -> int: ...
def PyDict_CheckExact(__0: object) -> int: ...
def PyDict_Clear(__0: object) -> None: ...

if sys.version_info < (3, 9, 0, "final", 0):

    def PyDict_ClearFreeList() -> int: ...

def PyDict_Contains(__0: object, __1: object) -> int: ...
def PyDict_Copy(__0: object) -> typing.Any: ...
def PyDict_DelItem(__0: object, __1: object) -> int: ...
def PyDict_DelItemString(__0: object, __1: bytes) -> int: ...
def PyDict_GetItem(__0: object, __1: object) -> typing.Any: ...
def PyDict_GetItemString(__0: object, __1: bytes) -> typing.Any: ...
def PyDict_GetItemWithError(__0: object, __1: object) -> typing.Any: ...
def PyDict_Items(__0: object) -> typing.Any: ...
def PyDict_Keys(__0: object) -> typing.Any: ...
def PyDict_Merge(__0: object, __1: object, __2: int) -> int: ...
def PyDict_MergeFromSeq2(__0: object, __1: object, __2: int) -> int: ...
def PyDict_Next(__0: object, __1: int) -> tuple[typing.Any, typing.Any]: ...
def PyDict_New() -> typing.Any: ...
def PyDict_SetDefault(__0: object, __1: object, __2: object) -> typing.Any: ...
def PyDict_SetItem(__0: object, __1: object, __2: object) -> int: ...
def PyDict_SetItemString(__0: object, __1: bytes, __2: object) -> int: ...
def PyDict_Size(__0: object) -> int: ...
def PyDict_Update(__0: object, __1: object) -> int: ...
def PyDict_Values(__0: object) -> typing.Any: ...

# PyDictProxy

def PyDictProxy_New(__0: object) -> typing.Any: ...

# PyErr

def PyErr_BadArgument() -> int: ...
def PyErr_BadInternalCall() -> None: ...
def PyErr_CheckSignals() -> int: ...
def PyErr_Clear() -> None: ...
def PyErr_ExceptionMatches(__0: object) -> int: ...
def PyErr_GivenExceptionMatches(__0: object, __1: object) -> int: ...
def PyErr_NewException(__0: bytes, __1: object, __2: object) -> typing.Any: ...
def PyErr_NewExceptionWithDoc(
    __0: bytes, __1: bytes, __2: object, __3: object
) -> typing.Any: ...
def PyErr_NoMemory() -> typing.Any: ...
def PyErr_Occurred() -> typing.Any: ...
def PyErr_Print() -> None: ...
def PyErr_PrintEx(__0: int) -> None: ...
def PyErr_Restore(__0: object, __1: object, __2: object) -> None: ...

if sys.platform == "win32":

    def PyErr_SetExcFromWindowsErr(__0: object, __1: int) -> typing.Any: ...
    def PyErr_SetExcFromWindowsErrWithFilename(
        __0: object, __1: int, __2: bytes
    ) -> typing.Any: ...
    def PyErr_SetExcFromWindowsErrWithFilenameObject(
        __0: object, __1: int, __2: object
    ) -> typing.Any: ...
    def PyErr_SetExcFromWindowsErrWithFilenameObjects(
        __0: object, __1: int, __2: object, __3: object
    ) -> typing.Any: ...

def PyErr_SetExcInfo(__0: object, __1: object, __2: object) -> None: ...
def PyErr_SetFromErrno(__0: object) -> typing.Any: ...
def PyErr_SetFromErrnoWithFilename(__0: object, __1: bytes) -> typing.Any: ...
def PyErr_SetFromErrnoWithFilenameObject(__0: object, __1: object) -> typing.Any: ...
def PyErr_SetFromErrnoWithFilenameObjects(
    __0: object, __1: object, __2: object
) -> typing.Any: ...

if sys.platform == "win32":

    def PyErr_SetFromWindowsErr(__0: int) -> typing.Any: ...
    def PyErr_SetFromWindowsErrWithFilename(__0: int, __1: bytes) -> typing.Any: ...

def PyErr_SetImportError(__0: object, __1: object, __2: object) -> typing.Any: ...
def PyErr_SetImportErrorSubclass(
    __0: object, __1: object, __2: object, __3: object
) -> typing.Any: ...
def PyErr_SetInterrupt() -> None: ...
def PyErr_SetNone(__0: object) -> None: ...
def PyErr_SetObject(__0: object, __1: object) -> None: ...
def PyErr_SetString(__0: object, __1: bytes) -> None: ...
def PyErr_SyntaxLocation(__0: bytes, __1: int) -> None: ...
def PyErr_SyntaxLocationEx(__0: bytes, __1: int, __2: int) -> None: ...
def PyErr_SyntaxLocationObject(__0: object, __1: int, __2: int) -> None: ...
def PyErr_WarnEx(__0: object, __1: bytes, __2: int) -> int: ...
def PyErr_WarnExplicit(
    __0: object, __1: bytes, __2: bytes, __3: int, __4: bytes, __5: object
) -> int: ...
def PyErr_WarnExplicitObject(
    __0: object, __1: object, __2: object, __3: int, __4: object, __5: object
) -> int: ...
def PyErr_WriteUnraisable(__0: object) -> None: ...

# PyEval

def PyEval_AcquireLock() -> None: ...
def PyEval_EvalCode(__0: object, __1: object, __2: object) -> typing.Any: ...
def PyEval_GetBuiltins() -> typing.Any: ...
def PyEval_GetFuncDesc(__0: object) -> typing.Optional[bytes]: ...
def PyEval_GetFuncName(__0: object) -> typing.Optional[bytes]: ...
def PyEval_GetGlobals() -> typing.Any: ...
def PyEval_GetLocals() -> typing.Any: ...
def PyEval_InitThreads() -> None: ...

if sys.version_info < sys.version_info < (3, 8, 0, "final", 0):

    def PyEval_ReInitThreads() -> None: ...

def PyEval_ReleaseLock() -> None: ...
def PyEval_ThreadsInitialized() -> int: ...

# PyException

def PyException_GetCause(__0: object) -> typing.Any: ...
def PyException_GetContext(__0: object) -> typing.Any: ...
def PyException_GetTraceback(__0: object) -> typing.Any: ...
def PyException_SetCause(__0: object, __1: object) -> None: ...
def PyException_SetContext(__0: object, __1: object) -> None: ...
def PyException_SetTraceback(__0: object, __1: object) -> int: ...

# PyFile

def PyFile_FromFd(
    __0: int,
    __1: bytes,
    __2: bytes,
    __3: int,
    __4: bytes,
    __5: bytes,
    __6: bytes,
    __7: int,
) -> typing.Any: ...
def PyFile_GetLine(__0: object, __1: int) -> typing.Any: ...
def PyFile_WriteObject(__0: object, __1: object, __2: int) -> int: ...
def PyFile_WriteString(__0: bytes, __1: object) -> int: ...

# PyFloat

def PyFloat_AS_DOUBLE(__0: object) -> float: ...
def PyFloat_AsDouble(__0: object) -> float: ...
def PyFloat_Check(__0: object) -> int: ...
def PyFloat_CheckExact(__0: object) -> int: ...

if sys.version_info < (3, 9, 0, "final", 0):

    def PyFloat_ClearFreeList() -> int: ...

def PyFloat_FromDouble(__0: float) -> typing.Any: ...
def PyFloat_FromString(__0: object) -> typing.Any: ...
def PyFloat_GetInfo() -> typing.Any: ...
def PyFloat_GetMax() -> float: ...
def PyFloat_GetMin() -> float: ...

# PyFrozenSet

def PyFrozenSet_Check(__0: object) -> int: ...
def PyFrozenSet_CheckExact(__0: object) -> int: ...
def PyFrozenSet_New(__0: object) -> typing.Any: ...

# PyFunction

def PyFunction_Check(__0: object) -> int: ...
def PyFunction_GetAnnotations(__0: object) -> typing.Any: ...
def PyFunction_GetClosure(__0: object) -> typing.Any: ...
def PyFunction_GetCode(__0: object) -> typing.Any: ...
def PyFunction_GetDefaults(__0: object) -> typing.Any: ...
def PyFunction_GetGlobals(__0: object) -> typing.Any: ...
def PyFunction_GetModule(__0: object) -> typing.Any: ...
def PyFunction_New(__0: object, __1: object) -> typing.Any: ...
def PyFunction_NewWithQualName(__0: object, __1: object, __2: object) -> typing.Any: ...
def PyFunction_SetAnnotations(__0: object, __1: object) -> int: ...
def PyFunction_SetClosure(__0: object, __1: object) -> int: ...
def PyFunction_SetDefaults(__0: object, __1: object) -> int: ...

# PyGILState

def PyGILState_Check() -> int: ...

# PyGen

def PyGen_Check(__0: object) -> int: ...
def PyGen_CheckExact(__0: object) -> int: ...

# PyImport

def PyImport_AddModule(__0: bytes) -> typing.Any: ...
def PyImport_AddModuleObject(__0: object) -> typing.Any: ...

if sys.version_info < (3, 9, 0, "final", 0):

    def PyImport_Cleanup() -> None: ...

def PyImport_ExecCodeModule(__0: bytes, __1: object) -> typing.Any: ...
def PyImport_ExecCodeModuleEx(__0: bytes, __1: object, __2: bytes) -> typing.Any: ...
def PyImport_ExecCodeModuleObject(
    __0: object, __1: object, __2: object, __3: object
) -> typing.Any: ...
def PyImport_ExecCodeModuleWithPathnames(
    __0: bytes, __1: object, __2: bytes, __3: bytes
) -> typing.Any: ...
def PyImport_GetImporter(__0: object) -> typing.Any: ...
def PyImport_GetMagicNumber() -> int: ...
def PyImport_GetMagicTag() -> typing.Optional[bytes]: ...
def PyImport_GetModule(__0: object) -> typing.Any: ...
def PyImport_GetModuleDict() -> typing.Any: ...
def PyImport_Import(__0: object) -> typing.Any: ...
def PyImport_ImportFrozenModule(__0: bytes) -> int: ...
def PyImport_ImportFrozenModuleObject(__0: object) -> int: ...
def PyImport_ImportModule(__0: bytes) -> typing.Any: ...
def PyImport_ImportModuleEx(
    __0: bytes, __1: object, __2: object, __3: object
) -> typing.Any: ...
def PyImport_ImportModuleLevel(
    __0: bytes, __1: object, __2: object, __3: object, __4: int
) -> typing.Any: ...
def PyImport_ImportModuleLevelObject(
    __0: object, __1: object, __2: object, __3: object, __4: int
) -> typing.Any: ...
def PyImport_ImportModuleNoBlock(__0: bytes) -> typing.Any: ...
def PyImport_ReloadModule(__0: object) -> typing.Any: ...

# PyIndex

def PyIndex_Check(__0: object) -> int: ...

# PyInstanceMethod

def PyInstanceMethod_Check(__0: object) -> int: ...
def PyInstanceMethod_Function(__0: object) -> typing.Any: ...
def PyInstanceMethod_GET_FUNCTION(__0: object) -> typing.Any: ...
def PyInstanceMethod_New(__0: object) -> typing.Any: ...

# PyIter

def PyIter_Check(__0: object) -> int: ...
def PyIter_Next(__0: object) -> typing.Any: ...

# PyList

def PyList_Append(__0: object, __1: object) -> int: ...
def PyList_AsTuple(__0: object) -> typing.Any: ...
def PyList_Check(__0: object) -> int: ...
def PyList_CheckExact(__0: object) -> int: ...

if sys.version_info < (3, 9, 0, "final", 0):

    def PyList_ClearFreeList() -> int: ...

def PyList_GET_ITEM(__0: object, __1: int) -> typing.Any: ...
def PyList_GET_SIZE(__0: object) -> int: ...
def PyList_GetItem(__0: object, __1: int) -> typing.Any: ...
def PyList_GetSlice(__0: object, __1: int, __2: int) -> typing.Any: ...
def PyList_Insert(__0: object, __1: int, __2: object) -> int: ...
def PyList_New(__0: int) -> typing.Any: ...
def PyList_Reverse(__0: object) -> int: ...
def PyList_SET_ITEM(__0: object, __1: int, __2: object) -> None: ...
def PyList_SetItem(__0: object, __1: int, __2: object) -> int: ...
def PyList_SetSlice(__0: object, __1: int, __2: int, __3: object) -> int: ...
def PyList_Size(__0: object) -> int: ...
def PyList_Sort(__0: object) -> int: ...

# PyLong

def PyLong_AsDouble(__0: object) -> float: ...
def PyLong_AsLong(__0: object) -> int: ...
def PyLong_AsLongLong(__0: object) -> int: ...
def PyLong_AsSsize_t(__0: object) -> int: ...
def PyLong_AsUnsignedLong(__0: object) -> int: ...
def PyLong_AsUnsignedLongLong(__0: object) -> int: ...
def PyLong_AsUnsignedLongLongMask(__0: object) -> int: ...
def PyLong_AsUnsignedLongMask(__0: object) -> int: ...
def PyLong_Check(__0: object) -> int: ...
def PyLong_CheckExact(__0: object) -> int: ...
def PyLong_FromDouble(__0: float) -> typing.Any: ...
def PyLong_FromLong(__0: int) -> typing.Any: ...
def PyLong_FromLongLong(__0: int) -> typing.Any: ...
def PyLong_FromSsize_t(__0: int) -> typing.Any: ...

if sys.version_info < (3, 10, 0, "final", 0):

    def PyLong_FromUnicode(__0: str, __1: int, __2: int) -> typing.Any: ...

def PyLong_FromUnicodeObject(__0: object, __1: int) -> typing.Any: ...
def PyLong_FromUnsignedLong(__0: int) -> typing.Any: ...
def PyLong_FromUnsignedLongLong(__0: int) -> typing.Any: ...

# PyMapping

def PyMapping_Check(__0: object) -> int: ...
def PyMapping_DelItem(__0: object, __1: object) -> int: ...
def PyMapping_DelItemString(__0: object, __1: bytes) -> int: ...
def PyMapping_GetItemString(__0: object, __1: bytes) -> typing.Any: ...
def PyMapping_HasKey(__0: object, __1: object) -> int: ...
def PyMapping_HasKeyString(__0: object, __1: bytes) -> int: ...
def PyMapping_Items(__0: object) -> typing.Any: ...
def PyMapping_Keys(__0: object) -> typing.Any: ...
def PyMapping_Length(__0: object) -> int: ...
def PyMapping_SetItemString(__0: object, __1: bytes, __2: object) -> int: ...
def PyMapping_Size(__0: object) -> int: ...
def PyMapping_Values(__0: object) -> typing.Any: ...

# PyMarshal

def PyMarshal_ReadObjectFromString(__0: bytes, __1: int) -> typing.Any: ...
def PyMarshal_WriteObjectToString(__0: object, __1: int) -> typing.Any: ...

# PyMem

def PyMem_SetupDebugHooks() -> None: ...

# PyMemoryView

def PyMemoryView_Check(__0: object) -> int: ...
def PyMemoryView_FromBuffer(__0: bytes) -> typing.Any: ...
def PyMemoryView_FromMemory(__0: bytes, __1: int, __2: int) -> typing.Any: ...
def PyMemoryView_FromObject(__0: object) -> typing.Any: ...
def PyMemoryView_GET_BASE(__0: object) -> typing.Any: ...
def PyMemoryView_GET_BUFFER(__0: object) -> memoryview: ...
def PyMemoryView_GetContiguous(__0: object, __1: int, __2: bytes) -> typing.Any: ...

# PyMethod

def PyMethod_Check(__0: object) -> int: ...

if sys.version_info < (3, 9, 0, "final", 0):

    def PyMethod_ClearFreeList() -> int: ...

def PyMethod_Function(__0: object) -> typing.Any: ...
def PyMethod_GET_FUNCTION(__0: object) -> typing.Any: ...
def PyMethod_GET_SELF(__0: object) -> typing.Any: ...
def PyMethod_New(__0: object, __1: object) -> typing.Any: ...
def PyMethod_Self(__0: object) -> typing.Any: ...

# PyModule

def PyModule_AddIntConstant(__0: object, __1: bytes, __2: int) -> int: ...
def PyModule_AddObject(__0: object, __1: bytes, __2: object) -> int: ...
def PyModule_AddStringConstant(__0: object, __1: bytes, __2: bytes) -> int: ...
def PyModule_Check(__0: object) -> int: ...
def PyModule_CheckExact(__0: object) -> int: ...
def PyModule_GetDict(__0: object) -> typing.Any: ...
def PyModule_GetFilename(__0: object) -> typing.Optional[bytes]: ...
def PyModule_GetFilenameObject(__0: object) -> typing.Any: ...
def PyModule_GetName(__0: object) -> typing.Optional[bytes]: ...
def PyModule_GetNameObject(__0: object) -> typing.Any: ...
def PyModule_New(__0: bytes) -> typing.Any: ...
def PyModule_NewObject(__0: object) -> typing.Any: ...
def PyModule_SetDocString(__0: object, __1: bytes) -> int: ...

# PyNumber

def PyNumber_Absolute(__0: object) -> typing.Any: ...
def PyNumber_Add(__0: object, __1: object) -> typing.Any: ...
def PyNumber_And(__0: object, __1: object) -> typing.Any: ...
def PyNumber_AsSsize_t(__0: object, __1: object) -> int: ...
def PyNumber_Check(__0: object) -> int: ...
def PyNumber_Divmod(__0: object, __1: object) -> typing.Any: ...
def PyNumber_Float(__0: object) -> typing.Any: ...
def PyNumber_FloorDivide(__0: object, __1: object) -> typing.Any: ...
def PyNumber_InPlaceAdd(__0: object, __1: object) -> typing.Any: ...
def PyNumber_InPlaceAnd(__0: object, __1: object) -> typing.Any: ...
def PyNumber_InPlaceFloorDivide(__0: object, __1: object) -> typing.Any: ...
def PyNumber_InPlaceLshift(__0: object, __1: object) -> typing.Any: ...
def PyNumber_InPlaceMatrixMultiply(__0: object, __1: object) -> typing.Any: ...
def PyNumber_InPlaceMultiply(__0: object, __1: object) -> typing.Any: ...
def PyNumber_InPlaceOr(__0: object, __1: object) -> typing.Any: ...
def PyNumber_InPlacePower(__0: object, __1: object, __2: object) -> typing.Any: ...
def PyNumber_InPlaceRemainder(__0: object, __1: object) -> typing.Any: ...
def PyNumber_InPlaceRshift(__0: object, __1: object) -> typing.Any: ...
def PyNumber_InPlaceSubtract(__0: object, __1: object) -> typing.Any: ...
def PyNumber_InPlaceTrueDivide(__0: object, __1: object) -> typing.Any: ...
def PyNumber_InPlaceXor(__0: object, __1: object) -> typing.Any: ...
def PyNumber_Index(__0: object) -> typing.Any: ...
def PyNumber_Invert(__0: object) -> typing.Any: ...
def PyNumber_Long(__0: object) -> typing.Any: ...
def PyNumber_Lshift(__0: object, __1: object) -> typing.Any: ...
def PyNumber_MatrixMultiply(__0: object, __1: object) -> typing.Any: ...
def PyNumber_Multiply(__0: object, __1: object) -> typing.Any: ...
def PyNumber_Negative(__0: object) -> typing.Any: ...
def PyNumber_Or(__0: object, __1: object) -> typing.Any: ...
def PyNumber_Positive(__0: object) -> typing.Any: ...
def PyNumber_Power(__0: object, __1: object, __2: object) -> typing.Any: ...
def PyNumber_Remainder(__0: object, __1: object) -> typing.Any: ...
def PyNumber_Rshift(__0: object, __1: object) -> typing.Any: ...
def PyNumber_Subtract(__0: object, __1: object) -> typing.Any: ...
def PyNumber_ToBase(__0: object, __1: int) -> typing.Any: ...
def PyNumber_TrueDivide(__0: object, __1: object) -> typing.Any: ...
def PyNumber_Xor(__0: object, __1: object) -> typing.Any: ...

# PyOS

def PyOS_AfterFork() -> None: ...

if sys.platform != "win32":

    def PyOS_AfterFork_Child() -> None: ...
    def PyOS_AfterFork_Parent() -> None: ...
    def PyOS_BeforeFork() -> None: ...

if sys.platform == "win32":

    def PyOS_CheckStack() -> int: ...

def PyOS_FSPath(__0: object) -> typing.Any: ...
def PyOS_stricmp(__0: bytes, __1: bytes) -> int: ...
def PyOS_strnicmp(__0: bytes, __1: bytes, __2: int) -> int: ...

# PyObject

def PyObject_ASCII(__0: object) -> typing.Any: ...
def PyObject_AsFileDescriptor(__0: object) -> int: ...
def PyObject_Bytes(__0: object) -> typing.Any: ...
def PyObject_Call(__0: object, __1: object, __2: object) -> typing.Any: ...
def PyObject_CallObject(__0: object, __1: object) -> typing.Any: ...
def PyObject_CheckBuffer(__0: object) -> int: ...
def PyObject_CheckReadBuffer(__0: object) -> int: ...
def PyObject_Del(__0: object) -> None: ...
def PyObject_DelAttr(__0: object, __1: object) -> int: ...
def PyObject_DelAttrString(__0: object, __1: bytes) -> int: ...
def PyObject_DelItem(__0: object, __1: object) -> int: ...
def PyObject_Dir(__0: object) -> typing.Any: ...
def PyObject_GC_Track(__0: object) -> None: ...
def PyObject_GenericGetAttr(__0: object, __1: object) -> typing.Any: ...
def PyObject_GenericSetAttr(__0: object, __1: object, __2: object) -> int: ...
def PyObject_GetAttr(__0: object, __1: object) -> typing.Any: ...
def PyObject_GetAttrString(__0: object, __1: bytes) -> typing.Any: ...
def PyObject_GetBuffer(__0: object, __1: bytes, __2: int) -> int: ...
def PyObject_GetItem(__0: object, __1: object) -> typing.Any: ...
def PyObject_GetIter(__0: object) -> typing.Any: ...
def PyObject_HasAttr(__0: object, __1: object) -> int: ...
def PyObject_HasAttrString(__0: object, __1: bytes) -> int: ...
def PyObject_Hash(__0: object) -> int: ...
def PyObject_HashNotImplemented(__0: object) -> int: ...
def PyObject_IsInstance(__0: object, __1: object) -> int: ...
def PyObject_IsSubclass(__0: object, __1: object) -> int: ...
def PyObject_IsTrue(__0: object) -> int: ...
def PyObject_Length(__0: object) -> int: ...
def PyObject_LengthHint(__0: object, __1: int) -> int: ...
def PyObject_Not(__0: object) -> int: ...
def PyObject_Repr(__0: object) -> typing.Any: ...
def PyObject_RichCompare(__0: object, __1: object, __2: int) -> typing.Any: ...
def PyObject_RichCompareBool(__0: object, __1: object, __2: int) -> int: ...
def PyObject_SetAttr(__0: object, __1: object, __2: object) -> int: ...
def PyObject_SetAttrString(__0: object, __1: bytes, __2: object) -> int: ...
def PyObject_SetItem(__0: object, __1: object, __2: object) -> int: ...
def PyObject_Size(__0: object) -> int: ...
def PyObject_Str(__0: object) -> typing.Any: ...
def PyObject_Type(__0: object) -> typing.Any: ...

# PyRun

def PyRun_SimpleString(__0: bytes) -> int: ...
def PyRun_String(__0: bytes, __1: int, __2: object, __3: object) -> typing.Any: ...

# PySeqIter

def PySeqIter_Check(__0: object) -> int: ...
def PySeqIter_New(__0: object) -> typing.Any: ...

# PySequence

def PySequence_Check(__0: object) -> int: ...
def PySequence_Concat(__0: object, __1: object) -> typing.Any: ...
def PySequence_Contains(__0: object, __1: object) -> int: ...
def PySequence_Count(__0: object, __1: object) -> int: ...
def PySequence_DelItem(__0: object, __1: int) -> int: ...
def PySequence_DelSlice(__0: object, __1: int, __2: int) -> int: ...
def PySequence_Fast(__0: object, __1: bytes) -> typing.Any: ...
def PySequence_Fast_GET_ITEM(__0: object, __1: int) -> typing.Any: ...
def PySequence_Fast_GET_SIZE(__0: object) -> int: ...
def PySequence_GetItem(__0: object, __1: int) -> typing.Any: ...
def PySequence_GetSlice(__0: object, __1: int, __2: int) -> typing.Any: ...
def PySequence_ITEM(__0: object, __1: int) -> typing.Any: ...
def PySequence_In(__0: object, __1: object) -> int: ...
def PySequence_InPlaceConcat(__0: object, __1: object) -> typing.Any: ...
def PySequence_InPlaceRepeat(__0: object, __1: int) -> typing.Any: ...
def PySequence_Index(__0: object, __1: object) -> int: ...
def PySequence_List(__0: object) -> typing.Any: ...
def PySequence_Repeat(__0: object, __1: int) -> typing.Any: ...
def PySequence_SetItem(__0: object, __1: int, __2: object) -> int: ...
def PySequence_SetSlice(__0: object, __1: int, __2: int, __3: object) -> int: ...
def PySequence_Size(__0: object) -> int: ...
def PySequence_Tuple(__0: object) -> typing.Any: ...

# PySet

def PySet_Add(__0: object, __1: object) -> int: ...
def PySet_Check(__0: object) -> int: ...
def PySet_Clear(__0: object) -> int: ...

if sys.version_info < (3, 9, 0, "final", 0):

    def PySet_ClearFreeList() -> int: ...

def PySet_Contains(__0: object, __1: object) -> int: ...
def PySet_Discard(__0: object, __1: object) -> int: ...
def PySet_GET_SIZE(__0: object) -> int: ...
def PySet_New(__0: object) -> typing.Any: ...
def PySet_Pop(__0: object) -> typing.Any: ...
def PySet_Size(__0: object) -> int: ...

# PySlice

def PySlice_Check(__0: object) -> int: ...
def PySlice_New(__0: object, __1: object, __2: object) -> typing.Any: ...

# PyStructSequence

def PyStructSequence_GET_ITEM(__0: object, __1: int) -> typing.Any: ...
def PyStructSequence_GetItem(__0: object, __1: int) -> typing.Any: ...
def PyStructSequence_SetItem(__0: object, __1: int, __2: object) -> None: ...

# PySys

def PySys_AddWarnOption(__0: str) -> None: ...
def PySys_AddWarnOptionUnicode(__0: object) -> None: ...
def PySys_AddXOption(__0: str) -> None: ...
def PySys_GetObject(__0: bytes) -> typing.Any: ...
def PySys_GetXOptions() -> typing.Any: ...
def PySys_ResetWarnOptions() -> None: ...
def PySys_SetObject(__0: bytes, __1: object) -> int: ...
def PySys_SetPath(__0: str) -> None: ...

# PyTZInfo

def PyTZInfo_Check(__0: object) -> int: ...
def PyTZInfo_CheckExact(__0: object) -> int: ...

# PyThread

def PyThread_ReInitTLS() -> None: ...
def PyThread_create_key() -> int: ...
def PyThread_delete_key(__0: int) -> None: ...
def PyThread_delete_key_value(__0: int) -> None: ...

# PyThreadState

def PyThreadState_GetDict() -> typing.Any: ...
def PyThreadState_SetAsyncExc(__0: int, __1: object) -> int: ...

# PyTime

def PyTime_Check(__0: object) -> int: ...
def PyTime_CheckExact(__0: object) -> int: ...
def PyTime_FromTime(__0: int, __1: int, __2: int, __3: int) -> typing.Any: ...

# PyTimeZone

def PyTimeZone_FromOffset(__0: object) -> typing.Any: ...
def PyTimeZone_FromOffsetAndName(__0: object, __1: object) -> typing.Any: ...

# PyTuple

def PyTuple_Check(__0: object) -> int: ...
def PyTuple_CheckExact(__0: object) -> int: ...

if sys.version_info < (3, 9, 0, "final", 0):

    def PyTuple_ClearFreeList() -> int: ...

def PyTuple_GET_ITEM(__0: object, __1: int) -> typing.Any: ...
def PyTuple_GET_SIZE(__0: object) -> int: ...
def PyTuple_GetItem(__0: object, __1: int) -> typing.Any: ...
def PyTuple_GetSlice(__0: object, __1: int, __2: int) -> typing.Any: ...
def PyTuple_New(__0: int) -> typing.Any: ...
def PyTuple_Pack(
    __0: int,
    __1: object,
    __2: object,
    __3: object,
    __4: object,
    __5: object,
    __6: object,
    __7: object,
    __8: object,
) -> typing.Any: ...
def PyTuple_SET_ITEM(__0: object, __1: int, __2: object) -> None: ...
def PyTuple_SetItem(__0: object, __1: int, __2: object) -> int: ...
def PyTuple_Size(__0: object) -> int: ...

# PyType

def PyType_Check(__0: object) -> int: ...
def PyType_CheckExact(__0: object) -> int: ...
def PyType_ClearCache() -> int: ...

# PyUnicode

def PyUnicode_AS_DATA(__0: object) -> typing.Optional[bytes]: ...
def PyUnicode_AS_UNICODE(__0: object) -> typing.Optional[str]: ...
def PyUnicode_AsASCIIString(__0: object) -> typing.Any: ...
def PyUnicode_AsCharmapString(__0: object, __1: object) -> typing.Any: ...
def PyUnicode_AsEncodedString(__0: object, __1: bytes, __2: bytes) -> typing.Any: ...
def PyUnicode_AsLatin1String(__0: object) -> typing.Any: ...

if sys.platform == "win32":

    def PyUnicode_AsMBCSString(__0: object) -> typing.Any: ...

def PyUnicode_AsRawUnicodeEscapeString(__0: object) -> typing.Any: ...
def PyUnicode_AsUTF16String(__0: object) -> typing.Any: ...
def PyUnicode_AsUTF32String(__0: object) -> typing.Any: ...
def PyUnicode_AsUTF8(__0: object) -> typing.Optional[bytes]: ...
def PyUnicode_AsUTF8String(__0: object) -> typing.Any: ...
def PyUnicode_AsUnicode(__0: object) -> typing.Optional[str]: ...

if sys.version_info < (3, 10, 0, "final", 0):

    def PyUnicode_AsUnicodeCopy(__0: object) -> typing.Optional[str]: ...

def PyUnicode_AsUnicodeEscapeString(__0: object) -> typing.Any: ...
def PyUnicode_AsWideChar(__0: object, __1: str, __2: int) -> int: ...
def PyUnicode_Check(__0: object) -> int: ...
def PyUnicode_CheckExact(__0: object) -> int: ...

if sys.version_info < (3, 9, 0, "final", 0):

    def PyUnicode_ClearFreeList() -> int: ...

def PyUnicode_Compare(__0: object, __1: object) -> int: ...
def PyUnicode_CompareWithASCIIString(__0: object, __1: bytes) -> int: ...
def PyUnicode_Concat(__0: object, __1: object) -> typing.Any: ...
def PyUnicode_Contains(__0: object, __1: object) -> int: ...
def PyUnicode_CopyCharacters(
    __0: object, __1: int, __2: object, __3: int, __4: int
) -> int: ...
def PyUnicode_Count(__0: object, __1: object, __2: int, __3: int) -> int: ...
def PyUnicode_Decode(__0: bytes, __1: int, __2: bytes, __3: bytes) -> typing.Any: ...
def PyUnicode_DecodeASCII(__0: bytes, __1: int, __2: bytes) -> typing.Any: ...
def PyUnicode_DecodeCharmap(
    __0: bytes, __1: int, __2: object, __3: bytes
) -> typing.Any: ...
def PyUnicode_DecodeFSDefault(__0: bytes) -> typing.Any: ...
def PyUnicode_DecodeFSDefaultAndSize(__0: bytes, __1: int) -> typing.Any: ...
def PyUnicode_DecodeLatin1(__0: bytes, __1: int, __2: bytes) -> typing.Any: ...
def PyUnicode_DecodeLocale(__0: bytes, __1: bytes) -> typing.Any: ...
def PyUnicode_DecodeLocaleAndSize(__0: bytes, __1: int, __2: bytes) -> typing.Any: ...

if sys.platform == "win32":

    def PyUnicode_DecodeMBCS(__0: bytes, __1: int, __2: bytes) -> typing.Any: ...

def PyUnicode_DecodeRawUnicodeEscape(
    __0: bytes, __1: int, __2: bytes
) -> typing.Any: ...
def PyUnicode_DecodeUTF7(__0: bytes, __1: int, __2: bytes) -> typing.Any: ...
def PyUnicode_DecodeUTF8(__0: bytes, __1: int, __2: bytes) -> typing.Any: ...
def PyUnicode_DecodeUnicodeEscape(__0: bytes, __1: int, __2: bytes) -> typing.Any: ...

if sys.version_info < (3, 11, 0, "final", 0):

    def PyUnicode_Encode(__0: str, __1: int, __2: bytes, __3: bytes) -> typing.Any: ...
    def PyUnicode_EncodeASCII(__0: str, __1: int, __2: bytes) -> typing.Any: ...
    def PyUnicode_EncodeCharmap(
        __0: str, __1: int, __2: object, __3: bytes
    ) -> typing.Any: ...

if sys.platform == "win32":

    def PyUnicode_EncodeCodePage(__0: int, __1: object, __2: bytes) -> typing.Any: ...

def PyUnicode_EncodeFSDefault(__0: object) -> typing.Any: ...

if sys.version_info < (3, 11, 0, "final", 0):

    def PyUnicode_EncodeLatin1(__0: str, __1: int, __2: bytes) -> typing.Any: ...

def PyUnicode_EncodeLocale(__0: object, __1: bytes) -> typing.Any: ...

if sys.platform == "win32" and sys.version_info < (3, 11, 0, "final", 0):

    def PyUnicode_EncodeMBCS(__0: str, __1: int, __2: bytes) -> typing.Any: ...

if sys.version_info < (3, 11, 0, "final", 0):

    def PyUnicode_EncodeRawUnicodeEscape(__0: str, __1: int) -> typing.Any: ...
    def PyUnicode_EncodeUTF16(
        __0: str, __1: int, __2: bytes, __3: int
    ) -> typing.Any: ...
    def PyUnicode_EncodeUTF32(
        __0: str, __1: int, __2: bytes, __3: int
    ) -> typing.Any: ...
    def PyUnicode_EncodeUTF7(
        __0: str, __1: int, __2: int, __3: int, __4: bytes
    ) -> typing.Any: ...
    def PyUnicode_EncodeUTF8(__0: str, __1: int, __2: bytes) -> typing.Any: ...
    def PyUnicode_EncodeUnicodeEscape(__0: str, __1: int) -> typing.Any: ...

def PyUnicode_Fill(__0: object, __1: int, __2: int, __3: str) -> int: ...
def PyUnicode_Find(__0: object, __1: object, __2: int, __3: int, __4: int) -> int: ...
def PyUnicode_FindChar(__0: object, __1: str, __2: int, __3: int, __4: int) -> int: ...
def PyUnicode_Format(__0: object, __1: object) -> typing.Any: ...
def PyUnicode_FromEncodedObject(__0: object, __1: bytes, __2: bytes) -> typing.Any: ...
def PyUnicode_FromObject(__0: object) -> typing.Any: ...
def PyUnicode_FromString(__0: bytes) -> typing.Any: ...
def PyUnicode_FromStringAndSize(__0: bytes, __1: int) -> typing.Any: ...
def PyUnicode_FromUnicode(__0: str, __1: int) -> typing.Any: ...
def PyUnicode_FromWideChar(__0: str, __1: int) -> typing.Any: ...
def PyUnicode_GET_DATA_SIZE(__0: object) -> int: ...
def PyUnicode_GET_LENGTH(__0: object) -> int: ...
def PyUnicode_GET_SIZE(__0: object) -> int: ...
def PyUnicode_GetLength(__0: object) -> int: ...
def PyUnicode_GetSize(__0: object) -> int: ...
def PyUnicode_InternFromString(__0: bytes) -> typing.Any: ...
def PyUnicode_Join(__0: object, __1: object) -> typing.Any: ...
def PyUnicode_KIND(__0: object) -> int: ...
def PyUnicode_MAX_CHAR_VALUE(__0: object) -> str: ...
def PyUnicode_New(__0: int, __1: int) -> typing.Any: ...
def PyUnicode_READ_CHAR(__0: object, __1: int) -> str: ...
def PyUnicode_READY(__0: object) -> int: ...
def PyUnicode_ReadChar(__0: object, __1: int) -> str: ...
def PyUnicode_Replace(
    __0: object, __1: object, __2: object, __3: int
) -> typing.Any: ...
def PyUnicode_RichCompare(__0: object, __1: object, __2: int) -> typing.Any: ...
def PyUnicode_Split(__0: object, __1: object, __2: int) -> typing.Any: ...
def PyUnicode_Splitlines(__0: object, __1: int) -> typing.Any: ...
def PyUnicode_Substring(__0: object, __1: int, __2: int) -> typing.Any: ...
def PyUnicode_Tailmatch(
    __0: object, __1: object, __2: int, __3: int, __4: int
) -> int: ...

if sys.version_info < (3, 11, 0, "final", 0):

    def PyUnicode_TransformDecimalToASCII(__0: str, __1: int) -> typing.Any: ...

def PyUnicode_Translate(__0: object, __1: object, __2: bytes) -> typing.Any: ...

if sys.version_info < (3, 11, 0, "final", 0):

    def PyUnicode_TranslateCharmap(
        __0: str, __1: int, __2: object, __3: bytes
    ) -> typing.Any: ...

def PyUnicode_WriteChar(__0: object, __1: int, __2: str) -> int: ...

# PyUnicodeDecodeError

def PyUnicodeDecodeError_Create(
    __0: bytes, __1: bytes, __2: int, __3: int, __4: int, __5: bytes
) -> typing.Any: ...
def PyUnicodeDecodeError_GetEncoding(__0: object) -> typing.Any: ...
def PyUnicodeDecodeError_GetObject(__0: object) -> typing.Any: ...
def PyUnicodeDecodeError_GetReason(__0: object) -> typing.Any: ...
def PyUnicodeDecodeError_SetEnd(__0: object, __1: int) -> int: ...
def PyUnicodeDecodeError_SetReason(__0: object, __1: bytes) -> int: ...
def PyUnicodeDecodeError_SetStart(__0: object, __1: int) -> int: ...

if sys.version_info < (3, 11, 0, "final", 0):

    # PyUnicodeEncodeError

    def PyUnicodeEncodeError_Create(
        __0: bytes, __1: str, __2: int, __3: int, __4: int, __5: bytes
    ) -> typing.Any: ...

    # PyUnicodeTranslateError

    def PyUnicodeTranslateError_Create(
        __0: str, __1: int, __2: int, __3: int, __4: bytes
    ) -> typing.Any: ...

# PyWeakref

def PyWeakref_Check(__0: object) -> int: ...
def PyWeakref_CheckProxy(__0: object) -> int: ...
def PyWeakref_CheckRef(__0: object) -> int: ...
def PyWeakref_GET_OBJECT(__0: object) -> typing.Any: ...
def PyWeakref_GetObject(__0: object) -> typing.Any: ...
def PyWeakref_NewProxy(__0: object, __1: object) -> typing.Any: ...
def PyWeakref_NewRef(__0: object, __1: object) -> typing.Any: ...

# PyWrapper

def PyWrapper_New(__0: object, __1: object) -> typing.Any: ...
