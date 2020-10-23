#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Analytics.DriveableProperty
struct DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Analytics.RemoteSettings
struct RemoteSettings_t19C42FA560456530EDD98F6CD42CE82AEB4FEED1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey
struct FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB;
// System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey>
struct List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey[]
struct FieldWithRemoteSettingsKeyU5BU5D_t6113F76B4F65468D209D5F7E9AD3009CA30A009F;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
IL2CPP_EXTERN_C String_t* _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2;
IL2CPP_EXTERN_C String_t* _stringLiteralCDE9DA404E87DC408CE8E83F2431F91A958C9ABB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralEAFF286356193975BDF7D1E2C8BE0356352A4BF2;
IL2CPP_EXTERN_C String_t* _stringLiteralF5710B540AE7F103C278A568381FDD4AF48934CA;
IL2CPP_EXTERN_C const RuntimeMethod* FieldWithRemoteSettingsKey_SetValueRecursive_m75FFC116A8D4C83B7837F08521E5E29C961CF901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE2F944097A8DC586803F971D5FEE3258205F84BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB55B6C624CB37A56C400C640E2887DE5D699ACFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteSettings_RemoteSettingsUpdated_mE1DADAEA9D51A58A3B179EFDB259FBF828FD0326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t FieldWithRemoteSettingsKey_SetValueRecursive_m75FFC116A8D4C83B7837F08521E5E29C961CF901_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_RemoteSettingsUpdated_mE1DADAEA9D51A58A3B179EFDB259FBF828FD0326_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_Start_m2897DD2B30EA35CB6EEE72388C3B4DD36E7A3D28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings__ctor_mC48135F92DBFD7998A2342124E04221F55A1DC25_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t00DDB26693B7BCCD40544DBD546A67E6CCF39740 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey>
struct  List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FieldWithRemoteSettingsKeyU5BU5D_t6113F76B4F65468D209D5F7E9AD3009CA30A009F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0, ____items_1)); }
	inline FieldWithRemoteSettingsKeyU5BU5D_t6113F76B4F65468D209D5F7E9AD3009CA30A009F* get__items_1() const { return ____items_1; }
	inline FieldWithRemoteSettingsKeyU5BU5D_t6113F76B4F65468D209D5F7E9AD3009CA30A009F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FieldWithRemoteSettingsKeyU5BU5D_t6113F76B4F65468D209D5F7E9AD3009CA30A009F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FieldWithRemoteSettingsKeyU5BU5D_t6113F76B4F65468D209D5F7E9AD3009CA30A009F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0_StaticFields, ____emptyArray_5)); }
	inline FieldWithRemoteSettingsKeyU5BU5D_t6113F76B4F65468D209D5F7E9AD3009CA30A009F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FieldWithRemoteSettingsKeyU5BU5D_t6113F76B4F65468D209D5F7E9AD3009CA30A009F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FieldWithRemoteSettingsKeyU5BU5D_t6113F76B4F65468D209D5F7E9AD3009CA30A009F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.Analytics.DriveableProperty
struct  DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey> UnityEngine.Analytics.DriveableProperty::m_Fields
	List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * ___m_Fields_0;

public:
	inline static int32_t get_offset_of_m_Fields_0() { return static_cast<int32_t>(offsetof(DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49, ___m_Fields_0)); }
	inline List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * get_m_Fields_0() const { return ___m_Fields_0; }
	inline List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 ** get_address_of_m_Fields_0() { return &___m_Fields_0; }
	inline void set_m_Fields_0(List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * value)
	{
		___m_Fields_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Fields_0), (void*)value);
	}
};


// UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey
struct  FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::m_Target
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Target_0;
	// System.String UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::m_FieldPath
	String_t* ___m_FieldPath_1;
	// System.String UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::m_RSKeyName
	String_t* ___m_RSKeyName_2;
	// System.String UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::m_Type
	String_t* ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB, ___m_Target_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_FieldPath_1() { return static_cast<int32_t>(offsetof(FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB, ___m_FieldPath_1)); }
	inline String_t* get_m_FieldPath_1() const { return ___m_FieldPath_1; }
	inline String_t** get_address_of_m_FieldPath_1() { return &___m_FieldPath_1; }
	inline void set_m_FieldPath_1(String_t* value)
	{
		___m_FieldPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FieldPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_RSKeyName_2() { return static_cast<int32_t>(offsetof(FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB, ___m_RSKeyName_2)); }
	inline String_t* get_m_RSKeyName_2() const { return ___m_RSKeyName_2; }
	inline String_t** get_address_of_m_RSKeyName_2() { return &___m_RSKeyName_2; }
	inline void set_m_RSKeyName_2(String_t* value)
	{
		___m_RSKeyName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RSKeyName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB, ___m_Type_3)); }
	inline String_t* get_m_Type_3() const { return ___m_Type_3; }
	inline String_t** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(String_t* value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Reflection.ParameterInfo
struct  ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RemoteSettings_UpdatedEventHandler
struct  UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Analytics.RemoteSettings
struct  RemoteSettings_t19C42FA560456530EDD98F6CD42CE82AEB4FEED1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Analytics.DriveableProperty UnityEngine.Analytics.RemoteSettings::m_DriveableProperty
	DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * ___m_DriveableProperty_4;

public:
	inline static int32_t get_offset_of_m_DriveableProperty_4() { return static_cast<int32_t>(offsetof(RemoteSettings_t19C42FA560456530EDD98F6CD42CE82AEB4FEED1, ___m_DriveableProperty_4)); }
	inline DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * get_m_DriveableProperty_4() const { return ___m_DriveableProperty_4; }
	inline DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 ** get_address_of_m_DriveableProperty_4() { return &___m_DriveableProperty_4; }
	inline void set_m_DriveableProperty_4(DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * value)
	{
		___m_DriveableProperty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DriveableProperty_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.RemoteSettings::RemoteSettingsUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdated_mE1DADAEA9D51A58A3B179EFDB259FBF828FD0326 (RemoteSettings_t19C42FA560456530EDD98F6CD42CE82AEB4FEED1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler__ctor_m47CAF85102B04A37A20F7043F57404A76DE62153 (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteSettings::add_Updated(UnityEngine.RemoteSettings/UpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_add_Updated_mB05C0ABC6FDA4301FB6274CAF240C398B095208A (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey> UnityEngine.Analytics.DriveableProperty::get_fields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * DriveableProperty_get_fields_m63E6F005E928459A6B42254E82A569E8EF0A181D (DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey>::get_Item(System.Int32)
inline FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * List_1_get_Item_mB55B6C624CB37A56C400C640E2887DE5D699ACFE_inline (List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * (*) (List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey::get_rsKeyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldWithRemoteSettingsKey_get_rsKeyName_m4A30FD797FD4726859F1BA9990413ADA66B1D398 (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.RemoteSettings::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteSettings_HasKey_m0AEEAC611403015C57047B8215D7387C9C4AEC25 (String_t* ___key0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * FieldWithRemoteSettingsKey_get_target_m8CD3FD5313868200013CC0F90384B01ECD4AACAF (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey::get_fieldPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldWithRemoteSettingsKey_get_fieldPath_mCF8AFE8079C490DEC71FDC6368613E36E71F769B (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, const RuntimeMethod* method);
// System.String UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldWithRemoteSettingsKey_get_type_m68103B858C62A291FE07F9CBF2E06A637ABA3A22 (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RemoteSettings::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteSettings_GetBool_mC1D00DA21E3493E4A2FEED9F6A1B621C4D51D2E8 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey::SetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey_SetValue_m59CB0D5F10039EB60B8EFBE0F1D2DF2188FDEA1B (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, RuntimeObject * ___val0, const RuntimeMethod* method);
// System.Single UnityEngine.RemoteSettings::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RemoteSettings_GetFloat_mCAF93AD235ABE3A73462AB50E9158FB9371D4261 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.RemoteSettings::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteSettings_GetInt_m7B85007D798FCD48B7A76EE8E096098B3A82BB27 (String_t* ___key0, const RuntimeMethod* method);
// System.String UnityEngine.RemoteSettings::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoteSettings_GetString_m5CB403786425A310B7DC422DD7AE72880112DD4C (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey>::get_Count()
inline int32_t List_1_get_Count_mE2F944097A8DC586803F971D5FEE3258205F84BC_inline (List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Analytics.DriveableProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveableProperty__ctor_mCCD55D8E601135AF8B720CBC634142AF5B6057B4 (DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m225C73983849644B91290B258A682F04E8714C8E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, int32_t ___count1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_m5E2B5FF4334B861A92933D078C4B06FA11AA731A (FieldInfo_t * ___left0, FieldInfo_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mB4C6169DC83174E7712055F0973BC55469AD9962 (PropertyInfo_t * ___left0, PropertyInfo_t * ___right1, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Object UnityEngine.Analytics.DriveableProperty/FieldWithRemoteSettingsKey::SetValueRecursive(System.Object,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FieldWithRemoteSettingsKey_SetValueRecursive_m75FFC116A8D4C83B7837F08521E5E29C961CF901 (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, RuntimeObject * ___val0, RuntimeObject * ___target1, String_t* ___path2, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsInitOnly_mA279E731A1097E83BACAF9F53612CFA9428E806B (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey> UnityEngine.Analytics.DriveableProperty::get_fields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * DriveableProperty_get_fields_m63E6F005E928459A6B42254E82A569E8EF0A181D (DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * __this, const RuntimeMethod* method)
{
	List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * V_0 = NULL;
	{
		// get { return m_Fields; }
		List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * L_0 = __this->get_m_Fields_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Fields; }
		List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty::set_fields(System.Collections.Generic.List`1<UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveableProperty_set_fields_mAFB02A3507A49E2540746C9565CE5F6796F04AA6 (DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * __this, List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Fields = value; }
		List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * L_0 = ___value0;
		__this->set_m_Fields_0(L_0);
		// set { m_Fields = value; }
		return;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveableProperty__ctor_mCCD55D8E601135AF8B720CBC634142AF5B6057B4 (DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Analytics.DriveableProperty UnityEngine.Analytics.RemoteSettings::get_driveableProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * RemoteSettings_get_driveableProperty_m5DA48C3FBEB24CAD66CA536B9879CDDAF32B5D4E (RemoteSettings_t19C42FA560456530EDD98F6CD42CE82AEB4FEED1 * __this, const RuntimeMethod* method)
{
	DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * V_0 = NULL;
	{
		// get { return m_DriveableProperty; }
		DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * L_0 = __this->get_m_DriveableProperty_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_DriveableProperty; }
		DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.RemoteSettings::set_driveableProperty(UnityEngine.Analytics.DriveableProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_set_driveableProperty_m1C9E7411D47BCFA65D16470B693CFB1E0A21B009 (RemoteSettings_t19C42FA560456530EDD98F6CD42CE82AEB4FEED1 * __this, DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_DriveableProperty = value; }
		DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * L_0 = ___value0;
		__this->set_m_DriveableProperty_4(L_0);
		// set { m_DriveableProperty = value; }
		return;
	}
}
// System.Void UnityEngine.Analytics.RemoteSettings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_Start_m2897DD2B30EA35CB6EEE72388C3B4DD36E7A3D28 (RemoteSettings_t19C42FA560456530EDD98F6CD42CE82AEB4FEED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_Start_m2897DD2B30EA35CB6EEE72388C3B4DD36E7A3D28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RemoteSettingsUpdated();
		RemoteSettings_RemoteSettingsUpdated_mE1DADAEA9D51A58A3B179EFDB259FBF828FD0326(__this, /*hidden argument*/NULL);
		// RS.Updated += RemoteSettingsUpdated;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_0 = (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 *)il2cpp_codegen_object_new(UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55_il2cpp_TypeInfo_var);
		UpdatedEventHandler__ctor_m47CAF85102B04A37A20F7043F57404A76DE62153(L_0, __this, (intptr_t)((intptr_t)RemoteSettings_RemoteSettingsUpdated_mE1DADAEA9D51A58A3B179EFDB259FBF828FD0326_RuntimeMethod_var), /*hidden argument*/NULL);
		RemoteSettings_add_Updated_mB05C0ABC6FDA4301FB6274CAF240C398B095208A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Analytics.RemoteSettings::RemoteSettingsUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdated_mE1DADAEA9D51A58A3B179EFDB259FBF828FD0326 (RemoteSettings_t19C42FA560456530EDD98F6CD42CE82AEB4FEED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_RemoteSettingsUpdated_mE1DADAEA9D51A58A3B179EFDB259FBF828FD0326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B6_0 = 0;
	{
		// for (int i = 0; i < m_DriveableProperty.fields.Count; i++)
		V_0 = 0;
		goto IL_0120;
	}

IL_0008:
	{
		// var f = m_DriveableProperty.fields[i];
		DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * L_0 = __this->get_m_DriveableProperty_4();
		NullCheck(L_0);
		List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * L_1 = DriveableProperty_get_fields_m63E6F005E928459A6B42254E82A569E8EF0A181D(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_3 = List_1_get_Item_mB55B6C624CB37A56C400C640E2887DE5D699ACFE_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_mB55B6C624CB37A56C400C640E2887DE5D699ACFE_RuntimeMethod_var);
		V_1 = L_3;
		// if (!string.IsNullOrEmpty(f.rsKeyName) && RS.HasKey(f.rsKeyName) && f.target != null && !string.IsNullOrEmpty(f.fieldPath))
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = FieldWithRemoteSettingsKey_get_rsKeyName_m4A30FD797FD4726859F1BA9990413ADA66B1D398(L_4, /*hidden argument*/NULL);
		bool L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0053;
		}
	}
	{
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = FieldWithRemoteSettingsKey_get_rsKeyName_m4A30FD797FD4726859F1BA9990413ADA66B1D398(L_7, /*hidden argument*/NULL);
		bool L_9 = RemoteSettings_HasKey_m0AEEAC611403015C57047B8215D7387C9C4AEC25(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_10 = V_1;
		NullCheck(L_10);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_11 = FieldWithRemoteSettingsKey_get_target_m8CD3FD5313868200013CC0F90384B01ECD4AACAF(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = FieldWithRemoteSettingsKey_get_fieldPath_mCF8AFE8079C490DEC71FDC6368613E36E71F769B(L_13, /*hidden argument*/NULL);
		bool L_15 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_14, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B6_0 = 0;
	}

IL_0054:
	{
		V_2 = (bool)G_B6_0;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_011b;
		}
	}
	{
		// if (f.type == "bool")
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = FieldWithRemoteSettingsKey_get_type_m68103B858C62A291FE07F9CBF2E06A637ABA3A22(L_17, /*hidden argument*/NULL);
		bool L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2, /*hidden argument*/NULL);
		V_3 = L_19;
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_008e;
		}
	}
	{
		// f.SetValue(RS.GetBool(f.rsKeyName));
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_21 = V_1;
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_22 = V_1;
		NullCheck(L_22);
		String_t* L_23 = FieldWithRemoteSettingsKey_get_rsKeyName_m4A30FD797FD4726859F1BA9990413ADA66B1D398(L_22, /*hidden argument*/NULL);
		bool L_24 = RemoteSettings_GetBool_mC1D00DA21E3493E4A2FEED9F6A1B621C4D51D2E8(L_23, /*hidden argument*/NULL);
		bool L_25 = L_24;
		RuntimeObject * L_26 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_21);
		FieldWithRemoteSettingsKey_SetValue_m59CB0D5F10039EB60B8EFBE0F1D2DF2188FDEA1B(L_21, L_26, /*hidden argument*/NULL);
		goto IL_011a;
	}

IL_008e:
	{
		// else if (f.type == "float")
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_27 = V_1;
		NullCheck(L_27);
		String_t* L_28 = FieldWithRemoteSettingsKey_get_type_m68103B858C62A291FE07F9CBF2E06A637ABA3A22(L_27, /*hidden argument*/NULL);
		bool L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29, /*hidden argument*/NULL);
		V_4 = L_29;
		bool L_30 = V_4;
		if (!L_30)
		{
			goto IL_00bf;
		}
	}
	{
		// f.SetValue(RS.GetFloat(f.rsKeyName));
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_31 = V_1;
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_32 = V_1;
		NullCheck(L_32);
		String_t* L_33 = FieldWithRemoteSettingsKey_get_rsKeyName_m4A30FD797FD4726859F1BA9990413ADA66B1D398(L_32, /*hidden argument*/NULL);
		float L_34 = RemoteSettings_GetFloat_mCAF93AD235ABE3A73462AB50E9158FB9371D4261(L_33, /*hidden argument*/NULL);
		float L_35 = L_34;
		RuntimeObject * L_36 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_31);
		FieldWithRemoteSettingsKey_SetValue_m59CB0D5F10039EB60B8EFBE0F1D2DF2188FDEA1B(L_31, L_36, /*hidden argument*/NULL);
		goto IL_011a;
	}

IL_00bf:
	{
		// else if (f.type == "int")
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = FieldWithRemoteSettingsKey_get_type_m68103B858C62A291FE07F9CBF2E06A637ABA3A22(L_37, /*hidden argument*/NULL);
		bool L_39 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_38, _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, /*hidden argument*/NULL);
		V_5 = L_39;
		bool L_40 = V_5;
		if (!L_40)
		{
			goto IL_00f0;
		}
	}
	{
		// f.SetValue(RS.GetInt(f.rsKeyName));
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_41 = V_1;
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_42 = V_1;
		NullCheck(L_42);
		String_t* L_43 = FieldWithRemoteSettingsKey_get_rsKeyName_m4A30FD797FD4726859F1BA9990413ADA66B1D398(L_42, /*hidden argument*/NULL);
		int32_t L_44 = RemoteSettings_GetInt_m7B85007D798FCD48B7A76EE8E096098B3A82BB27(L_43, /*hidden argument*/NULL);
		int32_t L_45 = L_44;
		RuntimeObject * L_46 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_41);
		FieldWithRemoteSettingsKey_SetValue_m59CB0D5F10039EB60B8EFBE0F1D2DF2188FDEA1B(L_41, L_46, /*hidden argument*/NULL);
		goto IL_011a;
	}

IL_00f0:
	{
		// else if (f.type == "string")
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_47 = V_1;
		NullCheck(L_47);
		String_t* L_48 = FieldWithRemoteSettingsKey_get_type_m68103B858C62A291FE07F9CBF2E06A637ABA3A22(L_47, /*hidden argument*/NULL);
		bool L_49 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_48, _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE, /*hidden argument*/NULL);
		V_6 = L_49;
		bool L_50 = V_6;
		if (!L_50)
		{
			goto IL_011a;
		}
	}
	{
		// f.SetValue(RS.GetString(f.rsKeyName));
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_51 = V_1;
		FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * L_52 = V_1;
		NullCheck(L_52);
		String_t* L_53 = FieldWithRemoteSettingsKey_get_rsKeyName_m4A30FD797FD4726859F1BA9990413ADA66B1D398(L_52, /*hidden argument*/NULL);
		String_t* L_54 = RemoteSettings_GetString_m5CB403786425A310B7DC422DD7AE72880112DD4C(L_53, /*hidden argument*/NULL);
		NullCheck(L_51);
		FieldWithRemoteSettingsKey_SetValue_m59CB0D5F10039EB60B8EFBE0F1D2DF2188FDEA1B(L_51, L_54, /*hidden argument*/NULL);
	}

IL_011a:
	{
	}

IL_011b:
	{
		// for (int i = 0; i < m_DriveableProperty.fields.Count; i++)
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_0120:
	{
		// for (int i = 0; i < m_DriveableProperty.fields.Count; i++)
		int32_t L_56 = V_0;
		DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * L_57 = __this->get_m_DriveableProperty_4();
		NullCheck(L_57);
		List_1_tBBBDB5778BD99BC02C83E2C5F9530532A3DBD9C0 * L_58 = DriveableProperty_get_fields_m63E6F005E928459A6B42254E82A569E8EF0A181D(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		int32_t L_59 = List_1_get_Count_mE2F944097A8DC586803F971D5FEE3258205F84BC_inline(L_58, /*hidden argument*/List_1_get_Count_mE2F944097A8DC586803F971D5FEE3258205F84BC_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_56) < ((int32_t)L_59))? 1 : 0);
		bool L_60 = V_7;
		if (L_60)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Analytics.RemoteSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings__ctor_mC48135F92DBFD7998A2342124E04221F55A1DC25 (RemoteSettings_t19C42FA560456530EDD98F6CD42CE82AEB4FEED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings__ctor_mC48135F92DBFD7998A2342124E04221F55A1DC25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private DriveableProperty m_DriveableProperty = new DriveableProperty();
		DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 * L_0 = (DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49 *)il2cpp_codegen_object_new(DriveableProperty_t0CDFADEDBF49C552F2EC77EDB1D291FFED1EEB49_il2cpp_TypeInfo_var);
		DriveableProperty__ctor_mCCD55D8E601135AF8B720CBC634142AF5B6057B4(L_0, /*hidden argument*/NULL);
		__this->set_m_DriveableProperty_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Object UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * FieldWithRemoteSettingsKey_get_target_m8CD3FD5313868200013CC0F90384B01ECD4AACAF (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, const RuntimeMethod* method)
{
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * V_0 = NULL;
	{
		// get { return m_Target; }
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = __this->get_m_Target_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Target; }
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::set_target(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey_set_target_m4E9E1020951332E6D0721792D66ADC17398D3470 (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Target = value; }
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___value0;
		__this->set_m_Target_0(L_0);
		// set { m_Target = value; }
		return;
	}
}
// System.String UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::get_fieldPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldWithRemoteSettingsKey_get_fieldPath_mCF8AFE8079C490DEC71FDC6368613E36E71F769B (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return m_FieldPath; }
		String_t* L_0 = __this->get_m_FieldPath_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_FieldPath; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::set_fieldPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey_set_fieldPath_mB0EA70FF5E4F1028114B8FDD8E094049AC196B3F (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { m_FieldPath = value; }
		String_t* L_0 = ___value0;
		__this->set_m_FieldPath_1(L_0);
		// set { m_FieldPath = value; }
		return;
	}
}
// System.String UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::get_rsKeyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldWithRemoteSettingsKey_get_rsKeyName_m4A30FD797FD4726859F1BA9990413ADA66B1D398 (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return m_RSKeyName; }
		String_t* L_0 = __this->get_m_RSKeyName_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_RSKeyName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::set_rsKeyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey_set_rsKeyName_mDF78ADD93376D96E28B3DF552C17ADC224B05C9E (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { m_RSKeyName = value; }
		String_t* L_0 = ___value0;
		__this->set_m_RSKeyName_2(L_0);
		// set { m_RSKeyName = value; }
		return;
	}
}
// System.String UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldWithRemoteSettingsKey_get_type_m68103B858C62A291FE07F9CBF2E06A637ABA3A22 (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return m_Type; }
		String_t* L_0 = __this->get_m_Type_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Type; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::set_type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey_set_type_m1944FF4C42D33BB553C6D172D723B55B55169F49 (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Type = value; }
		String_t* L_0 = ___value0;
		__this->set_m_Type_3(L_0);
		// set { m_Type = value; }
		return;
	}
}
// System.Object UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::SetValueRecursive(System.Object,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FieldWithRemoteSettingsKey_SetValueRecursive_m75FFC116A8D4C83B7837F08521E5E29C961CF901 (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, RuntimeObject * ___val0, RuntimeObject * ___target1, String_t* ___path2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FieldWithRemoteSettingsKey_SetValueRecursive_m75FFC116A8D4C83B7837F08521E5E29C961CF901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Type_t * V_3 = NULL;
	FieldInfo_t * V_4 = NULL;
	PropertyInfo_t * V_5 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_6 = NULL;
	RuntimeObject * V_7 = NULL;
	RuntimeObject * V_8 = NULL;
	bool V_9 = false;
	RuntimeObject * V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_13 = NULL;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	String_t* G_B5_0 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	String_t* G_B19_0 = NULL;
	{
		// if (path.Length == 0)
		String_t* L_0 = ___path2;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_9;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return val;
		RuntimeObject * L_3 = ___val0;
		V_10 = L_3;
		goto IL_01dd;
	}

IL_0019:
	{
		// string[] split = path.Split(new char[] {'.'}, 2);
		String_t* L_4 = ___path2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = String_Split_m225C73983849644B91290B258A682F04E8714C8E(L_4, L_6, 2, /*hidden argument*/NULL);
		V_0 = L_7;
		// string next = split[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		// string rest = split.Length > 1 ? split[1] : "";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))) > ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0040;
	}

IL_003d:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		G_B5_0 = L_14;
	}

IL_0040:
	{
		V_2 = G_B5_0;
		// Type targetType = target.GetType();
		RuntimeObject * L_15 = ___target1;
		NullCheck(L_15);
		Type_t * L_16 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// var field = targetType.GetField(next);
		Type_t * L_17 = V_3;
		String_t* L_18 = V_1;
		NullCheck(L_17);
		FieldInfo_t * L_19 = Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C(L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		// var prop = targetType.GetProperty(next);
		Type_t * L_20 = V_3;
		String_t* L_21 = V_1;
		NullCheck(L_20);
		PropertyInfo_t * L_22 = Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89(L_20, L_21, /*hidden argument*/NULL);
		V_5 = L_22;
		// object[] parameters = null;
		V_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL;
		// if (field != null)
		FieldInfo_t * L_23 = V_4;
		bool L_24 = FieldInfo_op_Inequality_m5E2B5FF4334B861A92933D078C4B06FA11AA731A(L_23, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		V_11 = L_24;
		bool L_25 = V_11;
		if (!L_25)
		{
			goto IL_007c;
		}
	}
	{
		// newTarget = field.GetValue(target);
		FieldInfo_t * L_26 = V_4;
		RuntimeObject * L_27 = ___target1;
		NullCheck(L_26);
		RuntimeObject * L_28 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_26, L_27);
		V_7 = L_28;
		goto IL_0137;
	}

IL_007c:
	{
		// else if (prop != null)
		PropertyInfo_t * L_29 = V_5;
		bool L_30 = PropertyInfo_op_Inequality_mB4C6169DC83174E7712055F0973BC55469AD9962(L_29, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
		V_12 = L_30;
		bool L_31 = V_12;
		if (!L_31)
		{
			goto IL_0124;
		}
	}
	{
		// var indexParams = prop.GetIndexParameters();
		PropertyInfo_t * L_32 = V_5;
		NullCheck(L_32);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_33 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(24 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_32);
		V_13 = L_33;
		// if (indexParams.GetLength(0) == 1 && indexParams[0].ParameterType == typeof(int))
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_34 = V_13;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_34);
		int32_t L_35 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_34, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_35) == ((uint32_t)1))))
		{
			goto IL_00bc;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_36 = V_13;
		NullCheck(L_36);
		int32_t L_37 = 0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		Type_t * L_39 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_38);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_40 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_41 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_40, /*hidden argument*/NULL);
		bool L_42 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_39, L_41, /*hidden argument*/NULL);
		G_B11_0 = ((int32_t)(L_42));
		goto IL_00bd;
	}

IL_00bc:
	{
		G_B11_0 = 0;
	}

IL_00bd:
	{
		V_14 = (bool)G_B11_0;
		bool L_43 = V_14;
		if (!L_43)
		{
			goto IL_0115;
		}
	}
	{
		// split = rest.Split(new char[] { '.' }, 2);
		String_t* L_44 = V_2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_45 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_46 = L_45;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_44);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = String_Split_m225C73983849644B91290B258A682F04E8714C8E(L_44, L_46, 2, /*hidden argument*/NULL);
		V_0 = L_47;
		// if (split[0] != null && Int32.TryParse(split[0], out index))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = 0;
		String_t* L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if (!L_50)
		{
			goto IL_00e8;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52 = 0;
		String_t* L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		bool L_54 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_53, (int32_t*)(&V_15), /*hidden argument*/NULL);
		G_B15_0 = ((int32_t)(L_54));
		goto IL_00e9;
	}

IL_00e8:
	{
		G_B15_0 = 0;
	}

IL_00e9:
	{
		V_16 = (bool)G_B15_0;
		bool L_55 = V_16;
		if (!L_55)
		{
			goto IL_0114;
		}
	}
	{
		// parameters = new object[] { index };
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_56 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_57 = L_56;
		int32_t L_58 = V_15;
		int32_t L_59 = L_58;
		RuntimeObject * L_60 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_60);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_60);
		V_6 = L_57;
		// rest = split.Length > 1 ? split[1] : "";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = V_0;
		NullCheck(L_61);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length))))) > ((int32_t)1)))
		{
			goto IL_010f;
		}
	}
	{
		G_B19_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0112;
	}

IL_010f:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = V_0;
		NullCheck(L_62);
		int32_t L_63 = 1;
		String_t* L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		G_B19_0 = L_64;
	}

IL_0112:
	{
		V_2 = G_B19_0;
	}

IL_0114:
	{
	}

IL_0115:
	{
		// newTarget = prop.GetValue(target, parameters);
		PropertyInfo_t * L_65 = V_5;
		RuntimeObject * L_66 = ___target1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_67 = V_6;
		NullCheck(L_65);
		RuntimeObject * L_68 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_65, L_66, L_67);
		V_7 = L_68;
		goto IL_0137;
	}

IL_0124:
	{
		// throw new InvalidOperationException(String.Format("Member '{0}' on target {1} is neither a field nor property", next, target));
		String_t* L_69 = V_1;
		RuntimeObject * L_70 = ___target1;
		String_t* L_71 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralEAFF286356193975BDF7D1E2C8BE0356352A4BF2, L_69, L_70, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_72 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_72, L_71, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_72, FieldWithRemoteSettingsKey_SetValueRecursive_m75FFC116A8D4C83B7837F08521E5E29C961CF901_RuntimeMethod_var);
	}

IL_0137:
	{
		// var newVal = SetValueRecursive(val, newTarget, rest);
		RuntimeObject * L_73 = ___val0;
		RuntimeObject * L_74 = V_7;
		String_t* L_75 = V_2;
		RuntimeObject * L_76 = FieldWithRemoteSettingsKey_SetValueRecursive_m75FFC116A8D4C83B7837F08521E5E29C961CF901(__this, L_73, L_74, L_75, /*hidden argument*/NULL);
		V_8 = L_76;
		// if (newVal != null)
		RuntimeObject * L_77 = V_8;
		V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_77) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_78 = V_17;
		if (!L_78)
		{
			goto IL_01d8;
		}
	}
	{
		// if (field != null)
		FieldInfo_t * L_79 = V_4;
		bool L_80 = FieldInfo_op_Inequality_m5E2B5FF4334B861A92933D078C4B06FA11AA731A(L_79, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		V_18 = L_80;
		bool L_81 = V_18;
		if (!L_81)
		{
			goto IL_01a4;
		}
	}
	{
		// if (field.IsInitOnly)
		FieldInfo_t * L_82 = V_4;
		NullCheck(L_82);
		bool L_83 = FieldInfo_get_IsInitOnly_mA279E731A1097E83BACAF9F53612CFA9428E806B(L_82, /*hidden argument*/NULL);
		V_20 = L_83;
		bool L_84 = V_20;
		if (!L_84)
		{
			goto IL_017b;
		}
	}
	{
		// Debug.LogWarning("You probably shouldn't set a field on a readonly struct even though it works (sometimes)");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralF5710B540AE7F103C278A568381FDD4AF48934CA, /*hidden argument*/NULL);
	}

IL_017b:
	{
		// field.SetValue(target, newVal);
		FieldInfo_t * L_85 = V_4;
		RuntimeObject * L_86 = ___target1;
		RuntimeObject * L_87 = V_8;
		NullCheck(L_85);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_85, L_86, L_87, /*hidden argument*/NULL);
		// bool isValueType = target.GetType().IsValueType;
		RuntimeObject * L_88 = ___target1;
		NullCheck(L_88);
		Type_t * L_89 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		bool L_90 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_89, /*hidden argument*/NULL);
		V_19 = L_90;
		// if (isValueType)
		bool L_91 = V_19;
		V_21 = L_91;
		bool L_92 = V_21;
		if (!L_92)
		{
			goto IL_01a1;
		}
	}
	{
		// return target;
		RuntimeObject * L_93 = ___target1;
		V_10 = L_93;
		goto IL_01dd;
	}

IL_01a1:
	{
		goto IL_01d7;
	}

IL_01a4:
	{
		// if (prop.CanWrite)
		PropertyInfo_t * L_94 = V_5;
		NullCheck(L_94);
		bool L_95 = VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_94);
		V_22 = L_95;
		bool L_96 = V_22;
		if (!L_96)
		{
			goto IL_01c3;
		}
	}
	{
		// prop.SetValue(target, newVal, parameters);
		PropertyInfo_t * L_97 = V_5;
		RuntimeObject * L_98 = ___target1;
		RuntimeObject * L_99 = V_8;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_100 = V_6;
		NullCheck(L_97);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(29 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_97, L_98, L_99, L_100);
		goto IL_01d6;
	}

IL_01c3:
	{
		// throw new InvalidOperationException(String.Format("Property '{0}' on target {1} is readonly", next, target));
		String_t* L_101 = V_1;
		RuntimeObject * L_102 = ___target1;
		String_t* L_103 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralCDE9DA404E87DC408CE8E83F2431F91A958C9ABB, L_101, L_102, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_104 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_104, L_103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_104, FieldWithRemoteSettingsKey_SetValueRecursive_m75FFC116A8D4C83B7837F08521E5E29C961CF901_RuntimeMethod_var);
	}

IL_01d6:
	{
	}

IL_01d7:
	{
	}

IL_01d8:
	{
		// return null;
		V_10 = NULL;
		goto IL_01dd;
	}

IL_01dd:
	{
		// }
		RuntimeObject * L_105 = V_10;
		return L_105;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::SetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey_SetValue_m59CB0D5F10039EB60B8EFBE0F1D2DF2188FDEA1B (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, RuntimeObject * ___val0, const RuntimeMethod* method)
{
	{
		// SetValueRecursive(val, m_Target, m_FieldPath);
		RuntimeObject * L_0 = ___val0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = __this->get_m_Target_0();
		String_t* L_2 = __this->get_m_FieldPath_1();
		FieldWithRemoteSettingsKey_SetValueRecursive_m75FFC116A8D4C83B7837F08521E5E29C961CF901(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Analytics.DriveableProperty_FieldWithRemoteSettingsKey::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithRemoteSettingsKey__ctor_m934B082CFEF0DB3B37D76D29D9DBE35FA5520004 (FieldWithRemoteSettingsKey_t5938623A1E768EB4F4005AED64A76DD6525FA1EB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
