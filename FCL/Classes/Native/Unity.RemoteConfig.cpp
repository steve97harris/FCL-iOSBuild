#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Unity.RemoteConfig.IRemoteConfigRequest
struct IRemoteConfigRequest_tC9601988A112081A86F828E29BC610FA32C02B95;
// Unity.RemoteConfig.IRemoteConfigSettings
struct IRemoteConfigSettings_t2D2345D62BAAE735F4DC7C04A0D76C4B7BA79302;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.RemoteConfig.RCConfig
struct RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008;
// Unity.RemoteConfig.RemoteConfigRequest
struct RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981;
// Unity.RemoteConfig.RuntimeConfig
struct RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Action`1<Unity.RemoteConfig.ConfigResponse>
struct Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate
struct Delegate_t;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRemoteConfigRequest_tC9601988A112081A86F828E29BC610FA32C02B95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRemoteConfigSettings_t2D2345D62BAAE735F4DC7C04A0D76C4B7BA79302_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral182761855821468B40E51F04D75D39A2E99F77CC;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF882FBCC2A230A62D22FF65024431A34A858A2;
IL2CPP_EXTERN_C String_t* _stringLiteralBA3FDAFBF4685F4E7241C47294A86BF8606EEE50;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_mD960AE9A81E98E30D77DA958B867F89534EEE2D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigManager_RemoteSettings_BeforeFetchFromServer_m5E70CF2078671F130FF22E647200AC91454E9435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfigManager_RemoteSettings_Completed_mDD41B526F03C710077FD290A96637131BE1ECBA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RCConfig_U3C_ctorU3Eb__4_0_m4FBE5DE080518F56F841EE084609AD98417C4F28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteConfigRequest_U3C_ctorU3Eb__6_0_mE103CA7E58D32C7D0E9C3060E25D9C9EBA122FEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteConfigRequest_U3C_ctorU3Eb__6_1_m1EF2C4E9BC66F44E909304F81815EA5235658355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeConfig_Config_Updated_m6E18F53CD15414FB2B8369E13499AC7DD31751DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ConfigManager_Init_m5516DBE41A58D3FA493F592B358A2FD47921F4D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_RemoteSettings_BeforeFetchFromServer_m5E70CF2078671F130FF22E647200AC91454E9435_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_RemoteSettings_Completed_mDD41B526F03C710077FD290A96637131BE1ECBA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_SetCustomUserID_mC457E39BF4946B122C76FAF9A3E447517BD33DCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_add_FetchCompleted_m14A846CB0D4B64B15B7ACB59C51DA2CDA7C52A6A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_get_appConfig_m0AB963F48FAA0C29F7FC937C3DF7D06C8ACB9E56Unity_RemoteConfig_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_get_appConfig_m0AB963F48FAA0C29F7FC937C3DF7D06C8ACB9E56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_get_requestStatus_m762D90CBB1E5BC67282664090381808D119E7F97Unity_RemoteConfig_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_get_requestStatus_m762D90CBB1E5BC67282664090381808D119E7F97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_remove_FetchCompleted_mF8EDC363CC34F46DB35281F70F45DD46EC489613_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_set_appConfig_m04BC86E636D5C26BD138B7D54EF21215A35801D0Unity_RemoteConfig_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_set_appConfig_m04BC86E636D5C26BD138B7D54EF21215A35801D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_set_requestStatus_mE7B83293A0AB18F261BF452369A6795785B7527BUnity_RemoteConfig_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager_set_requestStatus_mE7B83293A0AB18F261BF452369A6795785B7527B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RCConfig_U3C_ctorU3Eb__4_0_m4FBE5DE080518F56F841EE084609AD98417C4F28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RCConfig__ctor_m86215A8584579B826FFD641182CF263BBAD4F9B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RCConfig_add_Updated_m67B95604D3FC38856D41936E9A5B1EA91ADBAF30_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RCConfig_remove_Updated_m1023DCC31D39733CE9DD6626C67F479C7E3E1D01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest_QueueConfig_m5CACEBC67483A43648957276959721AC536FFE3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest_U3C_ctorU3Eb__6_1_m1EF2C4E9BC66F44E909304F81815EA5235658355_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest__ctor_mF0C54DE8AB17BCB4BCC62E644B894134FD9F4BD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest_add_BeforeFetchFromServer_m22461163300993ED1297324CC7E44C0D1636757F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest_add_Completed_mE9F093D53479121C0567B34AA1274B28F49B06AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest_remove_BeforeFetchFromServer_mB3069311C0F726CB30B41DA669BCAED18412D64C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigRequest_remove_Completed_m9C6ED277033A2B85E52EE61C1B2481D1F62335B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeConfig_ForceUpdate_m18F5F20872C77A0B2CD67A97D70018B129C56697_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeConfig_GetString_m029FFBFC6C7292ADD821E9031DEB20BB77DCFF3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeConfig__ctor_m6052481120B8A4EF3395F1205BF4F9381104E385_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tD5980BE4B478C75AF16CE2333B0F4311A13FD6EA 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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

// Unity.RemoteConfig.RCConfig
struct  RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> Unity.RemoteConfig.RCConfig::Updated
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___Updated_0;
	// UnityEngine.RemoteConfigSettings Unity.RemoteConfig.RCConfig::_remoteConfigSettings
	RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * ____remoteConfigSettings_1;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008, ___Updated_0)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_Updated_0() const { return ___Updated_0; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Updated_0), (void*)value);
	}

	inline static int32_t get_offset_of__remoteConfigSettings_1() { return static_cast<int32_t>(offsetof(RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008, ____remoteConfigSettings_1)); }
	inline RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * get__remoteConfigSettings_1() const { return ____remoteConfigSettings_1; }
	inline RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 ** get_address_of__remoteConfigSettings_1() { return &____remoteConfigSettings_1; }
	inline void set__remoteConfigSettings_1(RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * value)
	{
		____remoteConfigSettings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteConfigSettings_1), (void*)value);
	}
};


// Unity.RemoteConfig.RemoteConfigRequest
struct  RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981  : public RuntimeObject
{
public:
	// System.Action Unity.RemoteConfig.RemoteConfigRequest::BeforeFetchFromServer
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___BeforeFetchFromServer_0;
	// System.Action`3<System.Boolean,System.Boolean,System.Int32> Unity.RemoteConfig.RemoteConfigRequest::Completed
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * ___Completed_1;

public:
	inline static int32_t get_offset_of_BeforeFetchFromServer_0() { return static_cast<int32_t>(offsetof(RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981, ___BeforeFetchFromServer_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_BeforeFetchFromServer_0() const { return ___BeforeFetchFromServer_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_BeforeFetchFromServer_0() { return &___BeforeFetchFromServer_0; }
	inline void set_BeforeFetchFromServer_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___BeforeFetchFromServer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeforeFetchFromServer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Completed_1() { return static_cast<int32_t>(offsetof(RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981, ___Completed_1)); }
	inline Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * get_Completed_1() const { return ___Completed_1; }
	inline Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 ** get_address_of_Completed_1() { return &___Completed_1; }
	inline void set_Completed_1(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * value)
	{
		___Completed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Completed_1), (void*)value);
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


// Unity.RemoteConfig.ConfigManager_Delivery
struct  Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818 
{
public:
	// System.String Unity.RemoteConfig.ConfigManager_Delivery::customUserId
	String_t* ___customUserId_0;
	// System.String Unity.RemoteConfig.ConfigManager_Delivery::packageVersion
	String_t* ___packageVersion_1;

public:
	inline static int32_t get_offset_of_customUserId_0() { return static_cast<int32_t>(offsetof(Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818, ___customUserId_0)); }
	inline String_t* get_customUserId_0() const { return ___customUserId_0; }
	inline String_t** get_address_of_customUserId_0() { return &___customUserId_0; }
	inline void set_customUserId_0(String_t* value)
	{
		___customUserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customUserId_0), (void*)value);
	}

	inline static int32_t get_offset_of_packageVersion_1() { return static_cast<int32_t>(offsetof(Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818, ___packageVersion_1)); }
	inline String_t* get_packageVersion_1() const { return ___packageVersion_1; }
	inline String_t** get_address_of_packageVersion_1() { return &___packageVersion_1; }
	inline void set_packageVersion_1(String_t* value)
	{
		___packageVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packageVersion_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.RemoteConfig.ConfigManager/Delivery
struct Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshaled_pinvoke
{
	char* ___customUserId_0;
	char* ___packageVersion_1;
};
// Native definition for COM marshalling of Unity.RemoteConfig.ConfigManager/Delivery
struct Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshaled_com
{
	Il2CppChar* ___customUserId_0;
	Il2CppChar* ___packageVersion_1;
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

// Unity.RemoteConfig.ConfigOrigin
struct  ConfigOrigin_tABC56D953D4B43082784FC610F3AF0DC3EED8A8F 
{
public:
	// System.Int32 Unity.RemoteConfig.ConfigOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfigOrigin_tABC56D953D4B43082784FC610F3AF0DC3EED8A8F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.RemoteConfig.ConfigRequestStatus
struct  ConfigRequestStatus_tD78166B7003EF05887C10F76D3E2907572E9A6E9 
{
public:
	// System.Int32 Unity.RemoteConfig.ConfigRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfigRequestStatus_tD78166B7003EF05887C10F76D3E2907572E9A6E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RemoteConfigSettings
struct  RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RemoteConfigSettings::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<System.Boolean> UnityEngine.RemoteConfigSettings::Updated
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___Updated_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_Updated_1() { return static_cast<int32_t>(offsetof(RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932, ___Updated_1)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_Updated_1() const { return ___Updated_1; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_Updated_1() { return &___Updated_1; }
	inline void set_Updated_1(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___Updated_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Updated_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
};
// Native definition for COM marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
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

// Unity.RemoteConfig.ConfigManager
struct  ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5  : public RuntimeObject
{
public:

public:
};

struct ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields
{
public:
	// Unity.RemoteConfig.ConfigRequestStatus Unity.RemoteConfig.ConfigManager::<requestStatus>k__BackingField
	int32_t ___U3CrequestStatusU3Ek__BackingField_0;
	// System.Action`1<Unity.RemoteConfig.ConfigResponse> Unity.RemoteConfig.ConfigManager::FetchCompleted
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * ___FetchCompleted_1;
	// Unity.RemoteConfig.RuntimeConfig Unity.RemoteConfig.ConfigManager::<appConfig>k__BackingField
	RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ___U3CappConfigU3Ek__BackingField_2;
	// Unity.RemoteConfig.IRemoteConfigRequest Unity.RemoteConfig.ConfigManager::remoteConfigRequest
	RuntimeObject* ___remoteConfigRequest_3;
	// System.Boolean Unity.RemoteConfig.ConfigManager::requestInProgress
	bool ___requestInProgress_4;
	// System.Boolean Unity.RemoteConfig.ConfigManager::queueRequest
	bool ___queueRequest_5;
	// System.Boolean Unity.RemoteConfig.ConfigManager::initialized
	bool ___initialized_6;
	// Unity.RemoteConfig.ConfigManager_Delivery Unity.RemoteConfig.ConfigManager::deliveryPayload
	Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818  ___deliveryPayload_7;

public:
	inline static int32_t get_offset_of_U3CrequestStatusU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields, ___U3CrequestStatusU3Ek__BackingField_0)); }
	inline int32_t get_U3CrequestStatusU3Ek__BackingField_0() const { return ___U3CrequestStatusU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CrequestStatusU3Ek__BackingField_0() { return &___U3CrequestStatusU3Ek__BackingField_0; }
	inline void set_U3CrequestStatusU3Ek__BackingField_0(int32_t value)
	{
		___U3CrequestStatusU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_FetchCompleted_1() { return static_cast<int32_t>(offsetof(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields, ___FetchCompleted_1)); }
	inline Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * get_FetchCompleted_1() const { return ___FetchCompleted_1; }
	inline Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 ** get_address_of_FetchCompleted_1() { return &___FetchCompleted_1; }
	inline void set_FetchCompleted_1(Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * value)
	{
		___FetchCompleted_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FetchCompleted_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CappConfigU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields, ___U3CappConfigU3Ek__BackingField_2)); }
	inline RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * get_U3CappConfigU3Ek__BackingField_2() const { return ___U3CappConfigU3Ek__BackingField_2; }
	inline RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C ** get_address_of_U3CappConfigU3Ek__BackingField_2() { return &___U3CappConfigU3Ek__BackingField_2; }
	inline void set_U3CappConfigU3Ek__BackingField_2(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * value)
	{
		___U3CappConfigU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappConfigU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_remoteConfigRequest_3() { return static_cast<int32_t>(offsetof(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields, ___remoteConfigRequest_3)); }
	inline RuntimeObject* get_remoteConfigRequest_3() const { return ___remoteConfigRequest_3; }
	inline RuntimeObject** get_address_of_remoteConfigRequest_3() { return &___remoteConfigRequest_3; }
	inline void set_remoteConfigRequest_3(RuntimeObject* value)
	{
		___remoteConfigRequest_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteConfigRequest_3), (void*)value);
	}

	inline static int32_t get_offset_of_requestInProgress_4() { return static_cast<int32_t>(offsetof(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields, ___requestInProgress_4)); }
	inline bool get_requestInProgress_4() const { return ___requestInProgress_4; }
	inline bool* get_address_of_requestInProgress_4() { return &___requestInProgress_4; }
	inline void set_requestInProgress_4(bool value)
	{
		___requestInProgress_4 = value;
	}

	inline static int32_t get_offset_of_queueRequest_5() { return static_cast<int32_t>(offsetof(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields, ___queueRequest_5)); }
	inline bool get_queueRequest_5() const { return ___queueRequest_5; }
	inline bool* get_address_of_queueRequest_5() { return &___queueRequest_5; }
	inline void set_queueRequest_5(bool value)
	{
		___queueRequest_5 = value;
	}

	inline static int32_t get_offset_of_initialized_6() { return static_cast<int32_t>(offsetof(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields, ___initialized_6)); }
	inline bool get_initialized_6() const { return ___initialized_6; }
	inline bool* get_address_of_initialized_6() { return &___initialized_6; }
	inline void set_initialized_6(bool value)
	{
		___initialized_6 = value;
	}

	inline static int32_t get_offset_of_deliveryPayload_7() { return static_cast<int32_t>(offsetof(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields, ___deliveryPayload_7)); }
	inline Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818  get_deliveryPayload_7() const { return ___deliveryPayload_7; }
	inline Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818 * get_address_of_deliveryPayload_7() { return &___deliveryPayload_7; }
	inline void set_deliveryPayload_7(Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818  value)
	{
		___deliveryPayload_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deliveryPayload_7))->___customUserId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___deliveryPayload_7))->___packageVersion_1), (void*)NULL);
		#endif
	}
};


// Unity.RemoteConfig.ConfigResponse
struct  ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5 
{
public:
	// Unity.RemoteConfig.ConfigOrigin Unity.RemoteConfig.ConfigResponse::requestOrigin
	int32_t ___requestOrigin_0;
	// Unity.RemoteConfig.ConfigRequestStatus Unity.RemoteConfig.ConfigResponse::status
	int32_t ___status_1;

public:
	inline static int32_t get_offset_of_requestOrigin_0() { return static_cast<int32_t>(offsetof(ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5, ___requestOrigin_0)); }
	inline int32_t get_requestOrigin_0() const { return ___requestOrigin_0; }
	inline int32_t* get_address_of_requestOrigin_0() { return &___requestOrigin_0; }
	inline void set_requestOrigin_0(int32_t value)
	{
		___requestOrigin_0 = value;
	}

	inline static int32_t get_offset_of_status_1() { return static_cast<int32_t>(offsetof(ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5, ___status_1)); }
	inline int32_t get_status_1() const { return ___status_1; }
	inline int32_t* get_address_of_status_1() { return &___status_1; }
	inline void set_status_1(int32_t value)
	{
		___status_1 = value;
	}
};


// Unity.RemoteConfig.RuntimeConfig
struct  RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C  : public RuntimeObject
{
public:
	// Unity.RemoteConfig.ConfigOrigin Unity.RemoteConfig.RuntimeConfig::<origin>k__BackingField
	int32_t ___U3CoriginU3Ek__BackingField_0;
	// System.String Unity.RemoteConfig.RuntimeConfig::configKey
	String_t* ___configKey_3;

public:
	inline static int32_t get_offset_of_U3CoriginU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C, ___U3CoriginU3Ek__BackingField_0)); }
	inline int32_t get_U3CoriginU3Ek__BackingField_0() const { return ___U3CoriginU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CoriginU3Ek__BackingField_0() { return &___U3CoriginU3Ek__BackingField_0; }
	inline void set_U3CoriginU3Ek__BackingField_0(int32_t value)
	{
		___U3CoriginU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_configKey_3() { return static_cast<int32_t>(offsetof(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C, ___configKey_3)); }
	inline String_t* get_configKey_3() const { return ___configKey_3; }
	inline String_t** get_address_of_configKey_3() { return &___configKey_3; }
	inline void set_configKey_3(String_t* value)
	{
		___configKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configKey_3), (void*)value);
	}
};

struct RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_StaticFields
{
public:
	// Unity.RemoteConfig.IRemoteConfigSettings Unity.RemoteConfig.RuntimeConfig::config
	RuntimeObject* ___config_1;
	// Unity.RemoteConfig.IRemoteConfigSettings Unity.RemoteConfig.RuntimeConfig::metadata
	RuntimeObject* ___metadata_2;

public:
	inline static int32_t get_offset_of_config_1() { return static_cast<int32_t>(offsetof(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_StaticFields, ___config_1)); }
	inline RuntimeObject* get_config_1() const { return ___config_1; }
	inline RuntimeObject** get_address_of_config_1() { return &___config_1; }
	inline void set_config_1(RuntimeObject* value)
	{
		___config_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_1), (void*)value);
	}

	inline static int32_t get_offset_of_metadata_2() { return static_cast<int32_t>(offsetof(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_StaticFields, ___metadata_2)); }
	inline RuntimeObject* get_metadata_2() const { return ___metadata_2; }
	inline RuntimeObject** get_address_of_metadata_2() { return &___metadata_2; }
	inline void set_metadata_2(RuntimeObject* value)
	{
		___metadata_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___metadata_2), (void*)value);
	}
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct  Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Unity.RemoteConfig.ConfigResponse>
struct  Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct  Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mD960AE9A81E98E30D77DA958B867F89534EEE2D4_gshared (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.RemoteConfig.ConfigResponse>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD_gshared (Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * __this, ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC_gshared (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * __this, bool ___arg10, bool ___arg21, int32_t ___arg32, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.ConfigManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_Init_m5516DBE41A58D3FA493F592B358A2FD47921F4D0 (const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RuntimeConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig__ctor_m6052481120B8A4EF3395F1205BF4F9381104E385 (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, String_t* ___configKey0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.ConfigManager::set_appConfig(Unity.RemoteConfig.RuntimeConfig)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigManager_set_appConfig_m04BC86E636D5C26BD138B7D54EF21215A35801D0_inline (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ___value0, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RemoteConfigRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest__ctor_mF0C54DE8AB17BCB4BCC62E644B894134FD9F4BD4 (RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mD960AE9A81E98E30D77DA958B867F89534EEE2D4 (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_mD960AE9A81E98E30D77DA958B867F89534EEE2D4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.RemoteConfig.ConfigManager::set_requestStatus(Unity.RemoteConfig.ConfigRequestStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigManager_set_requestStatus_mE7B83293A0AB18F261BF452369A6795785B7527B_inline (int32_t ___value0, const RuntimeMethod* method);
// Unity.RemoteConfig.ConfigRequestStatus Unity.RemoteConfig.ConfigManager::get_requestStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfigManager_get_requestStatus_m762D90CBB1E5BC67282664090381808D119E7F97_inline (const RuntimeMethod* method);
// System.Void System.Action`1<Unity.RemoteConfig.ConfigResponse>::Invoke(!0)
inline void Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD (Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * __this, ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *, ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5 , const RuntimeMethod*))Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD_gshared)(__this, ___obj0, method);
}
// Unity.RemoteConfig.RuntimeConfig Unity.RemoteConfig.ConfigManager::get_appConfig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ConfigManager_get_appConfig_m0AB963F48FAA0C29F7FC937C3DF7D06C8ACB9E56_inline (const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RuntimeConfig::ForceUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig_ForceUpdate_m18F5F20872C77A0B2CD67A97D70018B129C56697 (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteConfigSettings::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings__ctor_m7EF7EB83EEBC0F24479817E85B2B192B2D8CB4F6 (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * __this, String_t* ___configKey0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.RemoteConfigSettings::add_Updated(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_add_Updated_mA873BB71C67D1F91DB7CE75768529E7685713890 (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteConfigSettings::ForceUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_ForceUpdate_mB0FCC2A561ABBED2DA29A76021F530340B021C00 (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * __this, const RuntimeMethod* method);
// System.String UnityEngine.RemoteConfigSettings::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoteConfigSettings_GetString_m1BDF1AEAC50EA92B0E894ACAFDAF224C55C040EE (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * __this, String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.RemoteSettings::add_BeforeFetchFromServer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_add_BeforeFetchFromServer_m13ECFD325747E6F422EF71F75EA4A34A9975F6DC (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteSettings::add_Completed(System.Action`3<System.Boolean,System.Boolean,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_add_Completed_m4CC3FA671D407674AF209BB3F9D73F60DF2FF414 (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.RemoteConfigSettings::SendDeviceInfoInConfigRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteConfigSettings_SendDeviceInfoInConfigRequest_m9FCE000C173A106AD170644064604D8A6AB1000B (const RuntimeMethod* method);
// System.Boolean UnityEngine.RemoteConfigSettings::QueueConfig(System.String,System.Object,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteConfigSettings_QueueConfig_m79BEA364B1173AB16FCF4B3DC45F92FB2DE45A87 (String_t* ___name0, RuntimeObject * ___param1, int32_t ___ver2, String_t* ___prefix3, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * __this, bool ___arg10, bool ___arg21, int32_t ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *, bool, bool, int32_t, const RuntimeMethod*))Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void Unity.RemoteConfig.RCConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCConfig__ctor_m86215A8584579B826FFD641182CF263BBAD4F9B8 (RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008 * __this, String_t* ___configKey0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Unity.RemoteConfig.RuntimeConfig::set_origin(Unity.RemoteConfig.ConfigOrigin)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeConfig_set_origin_m5A2D814BD9225DA4E3F7C37C4E65F58FCB1F439F_inline (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, int32_t ___value0, const RuntimeMethod* method);
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
// Unity.RemoteConfig.ConfigRequestStatus Unity.RemoteConfig.ConfigManager::get_requestStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigManager_get_requestStatus_m762D90CBB1E5BC67282664090381808D119E7F97 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_get_requestStatus_m762D90CBB1E5BC67282664090381808D119E7F97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConfigRequestStatus requestStatus { get; private set; }
		int32_t L_0 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_U3CrequestStatusU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::set_requestStatus(Unity.RemoteConfig.ConfigRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_set_requestStatus_mE7B83293A0AB18F261BF452369A6795785B7527B (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_set_requestStatus_mE7B83293A0AB18F261BF452369A6795785B7527B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConfigRequestStatus requestStatus { get; private set; }
		int32_t L_0 = ___value0;
		((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->set_U3CrequestStatusU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::add_FetchCompleted(System.Action`1<Unity.RemoteConfig.ConfigResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_add_FetchCompleted_m14A846CB0D4B64B15B7ACB59C51DA2CDA7C52A6A (Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_add_FetchCompleted_m14A846CB0D4B64B15B7ACB59C51DA2CDA7C52A6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * V_0 = NULL;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * V_1 = NULL;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * V_2 = NULL;
	{
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_0 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_FetchCompleted_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_2 = V_1;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4_il2cpp_TypeInfo_var));
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_5 = V_2;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_6 = V_1;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_7 = InterlockedCompareExchangeImpl<Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *>((Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 **)(((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_address_of_FetchCompleted_1()), L_5, L_6);
		V_0 = L_7;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_8 = V_0;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *)L_8) == ((RuntimeObject*)(Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::remove_FetchCompleted(System.Action`1<Unity.RemoteConfig.ConfigResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_remove_FetchCompleted_mF8EDC363CC34F46DB35281F70F45DD46EC489613 (Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_remove_FetchCompleted_mF8EDC363CC34F46DB35281F70F45DD46EC489613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * V_0 = NULL;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * V_1 = NULL;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * V_2 = NULL;
	{
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_0 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_FetchCompleted_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_2 = V_1;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4_il2cpp_TypeInfo_var));
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_5 = V_2;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_6 = V_1;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_7 = InterlockedCompareExchangeImpl<Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *>((Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 **)(((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_address_of_FetchCompleted_1()), L_5, L_6);
		V_0 = L_7;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_8 = V_0;
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *)L_8) == ((RuntimeObject*)(Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// Unity.RemoteConfig.RuntimeConfig Unity.RemoteConfig.ConfigManager::get_appConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ConfigManager_get_appConfig_m0AB963F48FAA0C29F7FC937C3DF7D06C8ACB9E56 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_get_appConfig_m0AB963F48FAA0C29F7FC937C3DF7D06C8ACB9E56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RuntimeConfig appConfig { get; private set; }
		RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * L_0 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_U3CappConfigU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::set_appConfig(Unity.RemoteConfig.RuntimeConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_set_appConfig_m04BC86E636D5C26BD138B7D54EF21215A35801D0 (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_set_appConfig_m04BC86E636D5C26BD138B7D54EF21215A35801D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RuntimeConfig appConfig { get; private set; }
		RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * L_0 = ___value0;
		((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->set_U3CappConfigU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_Initialize_m3B7A7FBA4D8CB09D8BE4B0C830E564E56A102329 (const RuntimeMethod* method)
{
	{
		// Init();
		ConfigManager_Init_m5516DBE41A58D3FA493F592B358A2FD47921F4D0(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_Init_m5516DBE41A58D3FA493F592B358A2FD47921F4D0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_Init_m5516DBE41A58D3FA493F592B358A2FD47921F4D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!initialized)
		bool L_0 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_initialized_6();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0073;
		}
	}
	{
		// appConfig = new RuntimeConfig("settings");
		RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * L_2 = (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C *)il2cpp_codegen_object_new(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_il2cpp_TypeInfo_var);
		RuntimeConfig__ctor_m6052481120B8A4EF3395F1205BF4F9381104E385(L_2, _stringLiteral7DF882FBCC2A230A62D22FF65024431A34A858A2, /*hidden argument*/NULL);
		ConfigManager_set_appConfig_m04BC86E636D5C26BD138B7D54EF21215A35801D0_inline(L_2, /*hidden argument*/NULL);
		// deliveryPayload.packageVersion = RemoteConfigRuntimeEnvConf.pluginVersion;
		(((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_address_of_deliveryPayload_7())->set_packageVersion_1(_stringLiteral182761855821468B40E51F04D75D39A2E99F77CC);
		// remoteConfigRequest = new RemoteConfigRequest();
		RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981 * L_3 = (RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981 *)il2cpp_codegen_object_new(RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981_il2cpp_TypeInfo_var);
		RemoteConfigRequest__ctor_mF0C54DE8AB17BCB4BCC62E644B894134FD9F4BD4(L_3, /*hidden argument*/NULL);
		((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->set_remoteConfigRequest_3(L_3);
		// remoteConfigRequest.BeforeFetchFromServer += RemoteSettings_BeforeFetchFromServer;
		RuntimeObject* L_4 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_remoteConfigRequest_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, NULL, (intptr_t)((intptr_t)ConfigManager_RemoteSettings_BeforeFetchFromServer_m5E70CF2078671F130FF22E647200AC91454E9435_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void Unity.RemoteConfig.IRemoteConfigRequest::add_BeforeFetchFromServer(System.Action) */, IRemoteConfigRequest_tC9601988A112081A86F828E29BC610FA32C02B95_il2cpp_TypeInfo_var, L_4, L_5);
		// remoteConfigRequest.Completed += RemoteSettings_Completed;
		RuntimeObject* L_6 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_remoteConfigRequest_3();
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_7 = (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)il2cpp_codegen_object_new(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863_il2cpp_TypeInfo_var);
		Action_3__ctor_mD960AE9A81E98E30D77DA958B867F89534EEE2D4(L_7, NULL, (intptr_t)((intptr_t)ConfigManager_RemoteSettings_Completed_mDD41B526F03C710077FD290A96637131BE1ECBA5_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mD960AE9A81E98E30D77DA958B867F89534EEE2D4_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * >::Invoke(2 /* System.Void Unity.RemoteConfig.IRemoteConfigRequest::add_Completed(System.Action`3<System.Boolean,System.Boolean,System.Int32>) */, IRemoteConfigRequest_tC9601988A112081A86F828E29BC610FA32C02B95_il2cpp_TypeInfo_var, L_6, L_7);
		// requestStatus = ConfigRequestStatus.None;
		ConfigManager_set_requestStatus_mE7B83293A0AB18F261BF452369A6795785B7527B_inline(0, /*hidden argument*/NULL);
		// initialized = true;
		((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->set_initialized_6((bool)1);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::RemoteSettings_Completed(System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_RemoteSettings_Completed_mDD41B526F03C710077FD290A96637131BE1ECBA5 (bool ___wasUpdatedFromServer0, bool ___settingsChanged1, int32_t ___serverResponse2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_RemoteSettings_Completed_mDD41B526F03C710077FD290A96637131BE1ECBA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * G_B8_0 = NULL;
	Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * G_B7_0 = NULL;
	{
		// requestInProgress = false;
		((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->set_requestInProgress_4((bool)0);
		// var origin = ConfigOrigin.Default;
		V_0 = 0;
		// if (wasUpdatedFromServer)
		bool L_0 = ___wasUpdatedFromServer0;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// if (serverResponse == 200)
		int32_t L_2 = ___serverResponse2;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)200)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// requestStatus = ConfigRequestStatus.Success;
		ConfigManager_set_requestStatus_mE7B83293A0AB18F261BF452369A6795785B7527B_inline(2, /*hidden argument*/NULL);
		goto IL_002f;
	}

IL_0026:
	{
		// requestStatus = ConfigRequestStatus.Failed;
		ConfigManager_set_requestStatus_mE7B83293A0AB18F261BF452369A6795785B7527B_inline(1, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// origin = ConfigOrigin.Remote;
		V_0 = 2;
		goto IL_003f;
	}

IL_0034:
	{
		// requestStatus = ConfigRequestStatus.Success;
		ConfigManager_set_requestStatus_mE7B83293A0AB18F261BF452369A6795785B7527B_inline(2, /*hidden argument*/NULL);
		// origin = ConfigOrigin.Cached;
		V_0 = 1;
	}

IL_003f:
	{
		// FetchCompleted?.Invoke(new ConfigResponse() { requestOrigin = origin, status = requestStatus });
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_4 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_FetchCompleted_1();
		Action_1_tF62DAEE5272BD544DB2736277C77A0C456B62FC4 * L_5 = L_4;
		G_B7_0 = L_5;
		if (L_5)
		{
			G_B8_0 = L_5;
			goto IL_004a;
		}
	}
	{
		goto IL_006d;
	}

IL_004a:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5 ));
		int32_t L_6 = V_0;
		(&V_3)->set_requestOrigin_0(L_6);
		int32_t L_7 = ConfigManager_get_requestStatus_m762D90CBB1E5BC67282664090381808D119E7F97_inline(/*hidden argument*/NULL);
		(&V_3)->set_status_1(L_7);
		ConfigResponse_t3BD5040BBDD7E187F23EAA9AC8D8417B3EAC8CD5  L_8 = V_3;
		NullCheck(G_B8_0);
		Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD(G_B8_0, L_8, /*hidden argument*/Action_1_Invoke_m7B8F450E5926E2C01C6998B028467D7BED3207CD_RuntimeMethod_var);
	}

IL_006d:
	{
		// if (queueRequest)
		bool L_9 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_queueRequest_5();
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		// appConfig.ForceUpdate();
		RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * L_11 = ConfigManager_get_appConfig_m0AB963F48FAA0C29F7FC937C3DF7D06C8ACB9E56_inline(/*hidden argument*/NULL);
		NullCheck(L_11);
		RuntimeConfig_ForceUpdate_m18F5F20872C77A0B2CD67A97D70018B129C56697(L_11, /*hidden argument*/NULL);
		// queueRequest = false;
		((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->set_queueRequest_5((bool)0);
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::RemoteSettings_BeforeFetchFromServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_RemoteSettings_BeforeFetchFromServer_m5E70CF2078671F130FF22E647200AC91454E9435 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_RemoteSettings_BeforeFetchFromServer_m5E70CF2078671F130FF22E647200AC91454E9435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// requestInProgress = true;
		((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->set_requestInProgress_4((bool)1);
		// requestStatus = ConfigRequestStatus.Pending;
		ConfigManager_set_requestStatus_mE7B83293A0AB18F261BF452369A6795785B7527B_inline(3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.ConfigManager::SetCustomUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_SetCustomUserID_mC457E39BF4946B122C76FAF9A3E447517BD33DCA (String_t* ___customUserID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_SetCustomUserID_mC457E39BF4946B122C76FAF9A3E447517BD33DCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deliveryPayload.customUserId = customUserID;
		String_t* L_0 = ___customUserID0;
		(((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_address_of_deliveryPayload_7())->set_customUserId_0(L_0);
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.RemoteConfig.RCConfig::add_Updated(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCConfig_add_Updated_m67B95604D3FC38856D41936E9A5B1EA91ADBAF30 (RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RCConfig_add_Updated_m67B95604D3FC38856D41936E9A5B1EA91ADBAF30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_2 = NULL;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_Updated_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var));
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** L_5 = __this->get_address_of_Updated_0();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_6 = V_2;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_8 = InterlockedCompareExchangeImpl<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *>((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_9 = V_0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_9) == ((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.RCConfig::remove_Updated(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCConfig_remove_Updated_m1023DCC31D39733CE9DD6626C67F479C7E3E1D01 (RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RCConfig_remove_Updated_m1023DCC31D39733CE9DD6626C67F479C7E3E1D01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_2 = NULL;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_Updated_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var));
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** L_5 = __this->get_address_of_Updated_0();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_6 = V_2;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_8 = InterlockedCompareExchangeImpl<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *>((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_9 = V_0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_9) == ((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.RCConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCConfig__ctor_m86215A8584579B826FFD641182CF263BBAD4F9B8 (RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008 * __this, String_t* ___configKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RCConfig__ctor_m86215A8584579B826FFD641182CF263BBAD4F9B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RCConfig(string configKey)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _remoteConfigSettings = new RemoteConfigSettings(configKey);
		String_t* L_0 = ___configKey0;
		RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * L_1 = (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 *)il2cpp_codegen_object_new(RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_il2cpp_TypeInfo_var);
		RemoteConfigSettings__ctor_m7EF7EB83EEBC0F24479817E85B2B192B2D8CB4F6(L_1, L_0, /*hidden argument*/NULL);
		__this->set__remoteConfigSettings_1(L_1);
		// _remoteConfigSettings.Updated += (wasUpdatedFromServer) => { Updated?.Invoke(wasUpdatedFromServer); };
		RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * L_2 = __this->get__remoteConfigSettings_1();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_3, __this, (intptr_t)((intptr_t)RCConfig_U3C_ctorU3Eb__4_0_m4FBE5DE080518F56F841EE084609AD98417C4F28_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		NullCheck(L_2);
		RemoteConfigSettings_add_Updated_mA873BB71C67D1F91DB7CE75768529E7685713890(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.RCConfig::ForceUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCConfig_ForceUpdate_m40BF9A9AFAE0F111DAC3D609C1ED2DCAB936F2D8 (RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008 * __this, const RuntimeMethod* method)
{
	{
		// _remoteConfigSettings.ForceUpdate();
		RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * L_0 = __this->get__remoteConfigSettings_1();
		NullCheck(L_0);
		RemoteConfigSettings_ForceUpdate_mB0FCC2A561ABBED2DA29A76021F530340B021C00(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Unity.RemoteConfig.RCConfig::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RCConfig_GetString_mD7ACE5D93788F4D33986C69E0E17D1C28FB36882 (RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008 * __this, String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return _remoteConfigSettings.GetString(key, defaultValue);
		RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * L_0 = __this->get__remoteConfigSettings_1();
		String_t* L_1 = ___key0;
		String_t* L_2 = ___defaultValue1;
		NullCheck(L_0);
		String_t* L_3 = RemoteConfigSettings_GetString_m1BDF1AEAC50EA92B0E894ACAFDAF224C55C040EE(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void Unity.RemoteConfig.RCConfig::<.ctor>b__4_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RCConfig_U3C_ctorU3Eb__4_0_m4FBE5DE080518F56F841EE084609AD98417C4F28 (RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008 * __this, bool ___wasUpdatedFromServer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RCConfig_U3C_ctorU3Eb__4_0_m4FBE5DE080518F56F841EE084609AD98417C4F28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B2_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B1_0 = NULL;
	{
		// _remoteConfigSettings.Updated += (wasUpdatedFromServer) => { Updated?.Invoke(wasUpdatedFromServer); };
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_Updated_0();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		bool L_2 = ___wasUpdatedFromServer0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0014:
	{
		// _remoteConfigSettings.Updated += (wasUpdatedFromServer) => { Updated?.Invoke(wasUpdatedFromServer); };
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
// System.Void Unity.RemoteConfig.RemoteConfigRequest::add_BeforeFetchFromServer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_add_BeforeFetchFromServer_m22461163300993ED1297324CC7E44C0D1636757F (RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest_add_BeforeFetchFromServer_m22461163300993ED1297324CC7E44C0D1636757F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_BeforeFetchFromServer_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_BeforeFetchFromServer_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::remove_BeforeFetchFromServer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_remove_BeforeFetchFromServer_mB3069311C0F726CB30B41DA669BCAED18412D64C (RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest_remove_BeforeFetchFromServer_mB3069311C0F726CB30B41DA669BCAED18412D64C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_BeforeFetchFromServer_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_BeforeFetchFromServer_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::add_Completed(System.Action`3<System.Boolean,System.Boolean,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_add_Completed_mE9F093D53479121C0567B34AA1274B28F49B06AF (RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981 * __this, Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest_add_Completed_mE9F093D53479121C0567B34AA1274B28F49B06AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_0 = NULL;
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_1 = NULL;
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_2 = NULL;
	{
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_0 = __this->get_Completed_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_1 = V_0;
		V_1 = L_1;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_2 = V_1;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)CastclassSealed((RuntimeObject*)L_4, Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863_il2cpp_TypeInfo_var));
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 ** L_5 = __this->get_address_of_Completed_1();
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_6 = V_2;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_7 = V_1;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_8 = InterlockedCompareExchangeImpl<Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *>((Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_9 = V_0;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)L_9) == ((RuntimeObject*)(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::remove_Completed(System.Action`3<System.Boolean,System.Boolean,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_remove_Completed_m9C6ED277033A2B85E52EE61C1B2481D1F62335B2 (RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981 * __this, Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest_remove_Completed_m9C6ED277033A2B85E52EE61C1B2481D1F62335B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_0 = NULL;
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_1 = NULL;
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_2 = NULL;
	{
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_0 = __this->get_Completed_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_1 = V_0;
		V_1 = L_1;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_2 = V_1;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)CastclassSealed((RuntimeObject*)L_4, Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863_il2cpp_TypeInfo_var));
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 ** L_5 = __this->get_address_of_Completed_1();
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_6 = V_2;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_7 = V_1;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_8 = InterlockedCompareExchangeImpl<Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *>((Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_9 = V_0;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)L_9) == ((RuntimeObject*)(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest__ctor_mF0C54DE8AB17BCB4BCC62E644B894134FD9F4BD4 (RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest__ctor_mF0C54DE8AB17BCB4BCC62E644B894134FD9F4BD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RemoteConfigRequest()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// RemoteSettings.BeforeFetchFromServer += () => { BeforeFetchFromServer?.Invoke(); };
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)RemoteConfigRequest_U3C_ctorU3Eb__6_0_mE103CA7E58D32C7D0E9C3060E25D9C9EBA122FEB_RuntimeMethod_var), /*hidden argument*/NULL);
		RemoteSettings_add_BeforeFetchFromServer_m13ECFD325747E6F422EF71F75EA4A34A9975F6DC(L_0, /*hidden argument*/NULL);
		// RemoteSettings.Completed += (wasUpdatedFromServer, settingsChanged, serverResponse) => { Completed?.Invoke(wasUpdatedFromServer, settingsChanged, serverResponse); };
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_1 = (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)il2cpp_codegen_object_new(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863_il2cpp_TypeInfo_var);
		Action_3__ctor_mD960AE9A81E98E30D77DA958B867F89534EEE2D4(L_1, __this, (intptr_t)((intptr_t)RemoteConfigRequest_U3C_ctorU3Eb__6_1_m1EF2C4E9BC66F44E909304F81815EA5235658355_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mD960AE9A81E98E30D77DA958B867F89534EEE2D4_RuntimeMethod_var);
		RemoteSettings_add_Completed_m4CC3FA671D407674AF209BB3F9D73F60DF2FF414(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.RemoteConfig.RemoteConfigRequest::SendDeviceInfoInConfigRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteConfigRequest_SendDeviceInfoInConfigRequest_m943F17026D9493E5D14EF113E2F006699C8B9D23 (RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return RemoteConfigSettings.SendDeviceInfoInConfigRequest();
		bool L_0 = RemoteConfigSettings_SendDeviceInfoInConfigRequest_m9FCE000C173A106AD170644064604D8A6AB1000B(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::QueueConfig(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_QueueConfig_m5CACEBC67483A43648957276959721AC536FFE3E (RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981 * __this, String_t* ___configKey0, RuntimeObject * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest_QueueConfig_m5CACEBC67483A43648957276959721AC536FFE3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RemoteConfigSettings.QueueConfig(configKey, obj);
		String_t* L_0 = ___configKey0;
		RuntimeObject * L_1 = ___obj1;
		RemoteConfigSettings_QueueConfig_m79BEA364B1173AB16FCF4B3DC45F92FB2DE45A87(L_0, L_1, 1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::<.ctor>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_U3C_ctorU3Eb__6_0_mE103CA7E58D32C7D0E9C3060E25D9C9EBA122FEB (RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// RemoteSettings.BeforeFetchFromServer += () => { BeforeFetchFromServer?.Invoke(); };
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_BeforeFetchFromServer_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// RemoteSettings.BeforeFetchFromServer += () => { BeforeFetchFromServer?.Invoke(); };
		return;
	}
}
// System.Void Unity.RemoteConfig.RemoteConfigRequest::<.ctor>b__6_1(System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigRequest_U3C_ctorU3Eb__6_1_m1EF2C4E9BC66F44E909304F81815EA5235658355 (RemoteConfigRequest_tE250143BB0F11081A24790BDA237B5CB7ADC1981 * __this, bool ___wasUpdatedFromServer0, bool ___settingsChanged1, int32_t ___serverResponse2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigRequest_U3C_ctorU3Eb__6_1_m1EF2C4E9BC66F44E909304F81815EA5235658355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * G_B2_0 = NULL;
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * G_B1_0 = NULL;
	{
		// RemoteSettings.Completed += (wasUpdatedFromServer, settingsChanged, serverResponse) => { Completed?.Invoke(wasUpdatedFromServer, settingsChanged, serverResponse); };
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_0 = __this->get_Completed_1();
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0016;
	}

IL_000d:
	{
		bool L_2 = ___wasUpdatedFromServer0;
		bool L_3 = ___settingsChanged1;
		int32_t L_4 = ___serverResponse2;
		NullCheck(G_B2_0);
		Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC(G_B2_0, L_2, L_3, L_4, /*hidden argument*/Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC_RuntimeMethod_var);
	}

IL_0016:
	{
		// RemoteSettings.Completed += (wasUpdatedFromServer, settingsChanged, serverResponse) => { Completed?.Invoke(wasUpdatedFromServer, settingsChanged, serverResponse); };
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
// System.Void Unity.RemoteConfig.RuntimeConfig::set_origin(Unity.RemoteConfig.ConfigOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig_set_origin_m5A2D814BD9225DA4E3F7C37C4E65F58FCB1F439F (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ConfigOrigin origin { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CoriginU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.RemoteConfig.RuntimeConfig::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig__ctor_m6052481120B8A4EF3395F1205BF4F9381104E385 (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, String_t* ___configKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeConfig__ctor_m6052481120B8A4EF3395F1205BF4F9381104E385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal RuntimeConfig(string configKey)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.configKey = configKey;
		String_t* L_0 = ___configKey0;
		__this->set_configKey_3(L_0);
		// config = new RCConfig(configKey);
		String_t* L_1 = ___configKey0;
		RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008 * L_2 = (RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008 *)il2cpp_codegen_object_new(RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008_il2cpp_TypeInfo_var);
		RCConfig__ctor_m86215A8584579B826FFD641182CF263BBAD4F9B8(L_2, L_1, /*hidden argument*/NULL);
		((RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_il2cpp_TypeInfo_var))->set_config_1(L_2);
		// metadata = new RCConfig(configKey + "Metadata");
		String_t* L_3 = ___configKey0;
		String_t* L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, _stringLiteralBA3FDAFBF4685F4E7241C47294A86BF8606EEE50, /*hidden argument*/NULL);
		RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008 * L_5 = (RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008 *)il2cpp_codegen_object_new(RCConfig_tF24ACDF2566550F6B6A384EFCCAF32BF3816B008_il2cpp_TypeInfo_var);
		RCConfig__ctor_m86215A8584579B826FFD641182CF263BBAD4F9B8(L_5, L_4, /*hidden argument*/NULL);
		((RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_il2cpp_TypeInfo_var))->set_metadata_2(L_5);
		// origin = ConfigOrigin.Default;
		RuntimeConfig_set_origin_m5A2D814BD9225DA4E3F7C37C4E65F58FCB1F439F_inline(__this, 0, /*hidden argument*/NULL);
		// config.Updated += Config_Updated;
		RuntimeObject* L_6 = ((RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_il2cpp_TypeInfo_var))->get_config_1();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_7, __this, (intptr_t)((intptr_t)RuntimeConfig_Config_Updated_m6E18F53CD15414FB2B8369E13499AC7DD31751DA_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(0 /* System.Void Unity.RemoteConfig.IRemoteConfigSettings::add_Updated(System.Action`1<System.Boolean>) */, IRemoteConfigSettings_t2D2345D62BAAE735F4DC7C04A0D76C4B7BA79302_il2cpp_TypeInfo_var, L_6, L_7);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.RuntimeConfig::Config_Updated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig_Config_Updated_m6E18F53CD15414FB2B8369E13499AC7DD31751DA (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, bool ___wasUpdatedFromServer0, const RuntimeMethod* method)
{
	RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * G_B2_0 = NULL;
	RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * G_B3_1 = NULL;
	{
		// origin = wasUpdatedFromServer ? ConfigOrigin.Remote : ConfigOrigin.Cached;
		bool L_0 = ___wasUpdatedFromServer0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		NullCheck(G_B3_1);
		RuntimeConfig_set_origin_m5A2D814BD9225DA4E3F7C37C4E65F58FCB1F439F_inline(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.RemoteConfig.RuntimeConfig::ForceUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConfig_ForceUpdate_m18F5F20872C77A0B2CD67A97D70018B129C56697 (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeConfig_ForceUpdate_m18F5F20872C77A0B2CD67A97D70018B129C56697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// config.ForceUpdate();
		RuntimeObject* L_0 = ((RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_il2cpp_TypeInfo_var))->get_config_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Unity.RemoteConfig.IRemoteConfigSettings::ForceUpdate() */, IRemoteConfigSettings_t2D2345D62BAAE735F4DC7C04A0D76C4B7BA79302_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.String Unity.RemoteConfig.RuntimeConfig::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RuntimeConfig_GetString_m029FFBFC6C7292ADD821E9031DEB20BB77DCFF3C (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeConfig_GetString_m029FFBFC6C7292ADD821E9031DEB20BB77DCFF3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return config.GetString(key, defaultValue);
		RuntimeObject* L_0 = ((RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C_il2cpp_TypeInfo_var))->get_config_1();
		String_t* L_1 = ___key0;
		String_t* L_2 = ___defaultValue1;
		NullCheck(L_0);
		String_t* L_3 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(3 /* System.String Unity.RemoteConfig.IRemoteConfigSettings::GetString(System.String,System.String) */, IRemoteConfigSettings_t2D2345D62BAAE735F4DC7C04A0D76C4B7BA79302_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
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
// Conversion methods for marshalling of: Unity.RemoteConfig.ConfigManager/Delivery
IL2CPP_EXTERN_C void Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshal_pinvoke(const Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818& unmarshaled, Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshaled_pinvoke& marshaled)
{
	marshaled.___customUserId_0 = il2cpp_codegen_marshal_string(unmarshaled.get_customUserId_0());
	marshaled.___packageVersion_1 = il2cpp_codegen_marshal_string(unmarshaled.get_packageVersion_1());
}
IL2CPP_EXTERN_C void Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshal_pinvoke_back(const Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshaled_pinvoke& marshaled, Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818& unmarshaled)
{
	unmarshaled.set_customUserId_0(il2cpp_codegen_marshal_string_result(marshaled.___customUserId_0));
	unmarshaled.set_packageVersion_1(il2cpp_codegen_marshal_string_result(marshaled.___packageVersion_1));
}
// Conversion method for clean up from marshalling of: Unity.RemoteConfig.ConfigManager/Delivery
IL2CPP_EXTERN_C void Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshal_pinvoke_cleanup(Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___customUserId_0);
	marshaled.___customUserId_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___packageVersion_1);
	marshaled.___packageVersion_1 = NULL;
}
// Conversion methods for marshalling of: Unity.RemoteConfig.ConfigManager/Delivery
IL2CPP_EXTERN_C void Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshal_com(const Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818& unmarshaled, Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshaled_com& marshaled)
{
	marshaled.___customUserId_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_customUserId_0());
	marshaled.___packageVersion_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_packageVersion_1());
}
IL2CPP_EXTERN_C void Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshal_com_back(const Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshaled_com& marshaled, Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818& unmarshaled)
{
	unmarshaled.set_customUserId_0(il2cpp_codegen_marshal_bstring_result(marshaled.___customUserId_0));
	unmarshaled.set_packageVersion_1(il2cpp_codegen_marshal_bstring_result(marshaled.___packageVersion_1));
}
// Conversion method for clean up from marshalling of: Unity.RemoteConfig.ConfigManager/Delivery
IL2CPP_EXTERN_C void Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshal_com_cleanup(Delivery_tC2C2F6EE3F1F27EFF2A05E0AFE292E8F71AC1818_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___customUserId_0);
	marshaled.___customUserId_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___packageVersion_1);
	marshaled.___packageVersion_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigManager_set_appConfig_m04BC86E636D5C26BD138B7D54EF21215A35801D0_inline (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_set_appConfig_m04BC86E636D5C26BD138B7D54EF21215A35801D0Unity_RemoteConfig_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RuntimeConfig appConfig { get; private set; }
		RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * L_0 = ___value0;
		((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->set_U3CappConfigU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfigManager_set_requestStatus_mE7B83293A0AB18F261BF452369A6795785B7527B_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_set_requestStatus_mE7B83293A0AB18F261BF452369A6795785B7527BUnity_RemoteConfig_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConfigRequestStatus requestStatus { get; private set; }
		int32_t L_0 = ___value0;
		((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->set_U3CrequestStatusU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfigManager_get_requestStatus_m762D90CBB1E5BC67282664090381808D119E7F97_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_get_requestStatus_m762D90CBB1E5BC67282664090381808D119E7F97Unity_RemoteConfig_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConfigRequestStatus requestStatus { get; private set; }
		int32_t L_0 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_U3CrequestStatusU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * ConfigManager_get_appConfig_m0AB963F48FAA0C29F7FC937C3DF7D06C8ACB9E56_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager_get_appConfig_m0AB963F48FAA0C29F7FC937C3DF7D06C8ACB9E56Unity_RemoteConfig_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RuntimeConfig appConfig { get; private set; }
		RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * L_0 = ((ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_StaticFields*)il2cpp_codegen_static_fields_for(ConfigManager_t5B248FE368BC09E2452B46CAC3D8A565D9B72ED5_il2cpp_TypeInfo_var))->get_U3CappConfigU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeConfig_set_origin_m5A2D814BD9225DA4E3F7C37C4E65F58FCB1F439F_inline (RuntimeConfig_t41CBF8AE762FA3292624C297F3B85ADCB5A91E9C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ConfigOrigin origin { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CoriginU3Ek__BackingField_0(L_0);
		return;
	}
}
