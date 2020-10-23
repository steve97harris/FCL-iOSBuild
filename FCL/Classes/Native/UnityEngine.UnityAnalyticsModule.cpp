﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged
struct IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1;
// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate
struct Delegate_t;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsSessionState_t886946F698BCE50BAA2E7418B105E6C4C2F155E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AnalyticsSessionInfo_CallIdentityTokenChanged_m99E4FA7768A4EF033190C28E87A480DDFA67FEF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnalyticsSessionInfo_CallSessionStateChanged_m0BB9DA7C334B5E13F34D68F2CABB34AF96AFFBBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigSettings_Destroy_m467B26A7CC05124535BD315D8E7228EACF1216FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigSettings_Dispose_mCB3DEC274B1CA8367C695C2AE6B37FA9697977D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigSettings_RemoteConfigSettingsUpdated_mD41B7744E8C4750B992A9B06C386257C8717F2BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigSettings_add_Updated_mA873BB71C67D1F91DB7CE75768529E7685713890_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigSettings_remove_Updated_m344CF8BE93AF516842668E59000113B2EA8B4A83_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_GetString_m5CB403786425A310B7DC422DD7AE72880112DD4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_RemoteSettingsBeforeFetchFromServer_mE1753C7AE5ECBA0B7C7171CADF1DB4E1811BF043_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_RemoteSettingsUpdateCompleted_mBF18BDDED97AD4FCA4FCB6587087ADF4C137838F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_RemoteSettingsUpdated_m5E3BAE9A00236820CF32F74D9F3A94E99055D8A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_add_BeforeFetchFromServer_m13ECFD325747E6F422EF71F75EA4A34A9975F6DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_add_Completed_m4CC3FA671D407674AF209BB3F9D73F60DF2FF414_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_add_Updated_mB05C0ABC6FDA4301FB6274CAF240C398B095208A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_remove_BeforeFetchFromServer_m360605D08E0D71D28096278FF7CC23B614F309BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_remove_Completed_m12D4EBF24F9912932CD4F2F7C20C0A79D4CA80C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteSettings_remove_Updated_m0D581B4E9331F45F7AF8A90D8CCFB6B50302FBFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SessionStateChanged_BeginInvoke_m1FC5FEA2CB085F8EB742E87CAED9E6EDA0A4CB06_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tB192D216DD8406BFF7972D93280BB245AF529D46 
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

// UnityEngine.Analytics.AnalyticsSessionInfo
struct  AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB  : public RuntimeObject
{
public:

public:
};

struct AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_StaticFields
{
public:
	// UnityEngine.Analytics.AnalyticsSessionInfo_SessionStateChanged UnityEngine.Analytics.AnalyticsSessionInfo::sessionStateChanged
	SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * ___sessionStateChanged_0;
	// UnityEngine.Analytics.AnalyticsSessionInfo_IdentityTokenChanged UnityEngine.Analytics.AnalyticsSessionInfo::identityTokenChanged
	IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * ___identityTokenChanged_1;

public:
	inline static int32_t get_offset_of_sessionStateChanged_0() { return static_cast<int32_t>(offsetof(AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_StaticFields, ___sessionStateChanged_0)); }
	inline SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * get_sessionStateChanged_0() const { return ___sessionStateChanged_0; }
	inline SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF ** get_address_of_sessionStateChanged_0() { return &___sessionStateChanged_0; }
	inline void set_sessionStateChanged_0(SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * value)
	{
		___sessionStateChanged_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionStateChanged_0), (void*)value);
	}

	inline static int32_t get_offset_of_identityTokenChanged_1() { return static_cast<int32_t>(offsetof(AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_StaticFields, ___identityTokenChanged_1)); }
	inline IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * get_identityTokenChanged_1() const { return ___identityTokenChanged_1; }
	inline IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 ** get_address_of_identityTokenChanged_1() { return &___identityTokenChanged_1; }
	inline void set_identityTokenChanged_1(IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * value)
	{
		___identityTokenChanged_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identityTokenChanged_1), (void*)value);
	}
};


// UnityEngine.Analytics.ContinuousEvent
struct  ContinuousEvent_t3F564D8670B20B2AED1CF9CC8D8F7DC74FF5B526  : public RuntimeObject
{
public:

public:
};


// UnityEngine.RemoteConfigSettingsHelper
struct  RemoteConfigSettingsHelper_t4F594BB463720302BF8F02062BC9F2F3EAB39AE3  : public RuntimeObject
{
public:

public:
};


// UnityEngine.RemoteSettings
struct  RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields
{
public:
	// UnityEngine.RemoteSettings_UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * ___Updated_0;
	// System.Action UnityEngine.RemoteSettings::BeforeFetchFromServer
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___BeforeFetchFromServer_1;
	// System.Action`3<System.Boolean,System.Boolean,System.Int32> UnityEngine.RemoteSettings::Completed
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * ___Completed_2;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Updated_0), (void*)value);
	}

	inline static int32_t get_offset_of_BeforeFetchFromServer_1() { return static_cast<int32_t>(offsetof(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields, ___BeforeFetchFromServer_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_BeforeFetchFromServer_1() const { return ___BeforeFetchFromServer_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_BeforeFetchFromServer_1() { return &___BeforeFetchFromServer_1; }
	inline void set_BeforeFetchFromServer_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___BeforeFetchFromServer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeforeFetchFromServer_1), (void*)value);
	}

	inline static int32_t get_offset_of_Completed_2() { return static_cast<int32_t>(offsetof(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields, ___Completed_2)); }
	inline Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * get_Completed_2() const { return ___Completed_2; }
	inline Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 ** get_address_of_Completed_2() { return &___Completed_2; }
	inline void set_Completed_2(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * value)
	{
		___Completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Completed_2), (void*)value);
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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

// UnityEngine.Analytics.AnalyticsSessionState
struct  AnalyticsSessionState_t886946F698BCE50BAA2E7418B105E6C4C2F155E6 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnalyticsSessionState_t886946F698BCE50BAA2E7418B105E6C4C2F155E6, ___value___2)); }
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

// UnityEngine.RemoteConfigSettingsHelper_Tag
struct  Tag_tF98827947FA5E3148A566C444B306A969C5E371A 
{
public:
	// System.Int32 UnityEngine.RemoteConfigSettingsHelper_Tag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Tag_tF98827947FA5E3148A566C444B306A969C5E371A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct  Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Analytics.AnalyticsSessionInfo_IdentityTokenChanged
struct  IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Analytics.AnalyticsSessionInfo_SessionStateChanged
struct  SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF  : public MulticastDelegate_t
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC_gshared (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * __this, bool ___arg10, bool ___arg21, int32_t ___arg32, const RuntimeMethod* method);

// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_mC75D45C1580508D5A628BA0D959E7FC937972343 (SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method);
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged_Invoke_m73580C534C2D30CFA7F455946EF94F4978DC991B (IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * __this, String_t* ___token0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.RemoteConfigSettings::Internal_Create(UnityEngine.RemoteConfigSettings,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigSettings_Internal_Create_mDCE7E4AF86C50C7F9E73813D45E4BEA343ACE239 (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * ___rcs0, String_t* ___configKey1, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteConfigSettings::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_Destroy_m467B26A7CC05124535BD315D8E7228EACF1216FF (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.RemoteConfigSettings::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_Internal_Destroy_m2F3C20DB7B43A0E0B79508B99902055AB6E660F8 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_mF27D3BF226F882F90575FE822F5F154B1E86FE1A (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * __this, bool ___arg10, bool ___arg21, int32_t ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *, bool, bool, int32_t, const RuntimeMethod*))Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Int32 UnityEngine.RemoteSettings::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteSettings_GetInt_mE12A55BFDBBD9BA3452EBF38215764FCA5DD14F7 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Single UnityEngine.RemoteSettings::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RemoteSettings_GetFloat_m944E99433A2C9105EFF2217DBE266B1C7B34F67D (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method);
// System.String UnityEngine.RemoteSettings::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoteSettings_GetString_m265B6073986E4282DF67D9C8AF7B51B8452C6F81 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RemoteSettings::GetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteSettings_GetBool_m71950BF48C5983310761829DB03A8C0ED90B9E24 (String_t* ___key0, bool ___defaultValue1, const RuntimeMethod* method);
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
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsSessionInfo_CallSessionStateChanged_m0BB9DA7C334B5E13F34D68F2CABB34AF96AFFBBB (int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsSessionInfo_CallSessionStateChanged_m0BB9DA7C334B5E13F34D68F2CABB34AF96AFFBBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * V_0 = NULL;
	bool V_1 = false;
	{
		SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * L_0 = ((AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_il2cpp_TypeInfo_var))->get_sessionStateChanged_0();
		V_0 = L_0;
		SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * L_3 = V_0;
		int32_t L_4 = ___sessionState0;
		int64_t L_5 = ___sessionId1;
		int64_t L_6 = ___sessionElapsedTime2;
		bool L_7 = ___sessionChanged3;
		NullCheck(L_3);
		SessionStateChanged_Invoke_mC75D45C1580508D5A628BA0D959E7FC937972343(L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallIdentityTokenChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsSessionInfo_CallIdentityTokenChanged_m99E4FA7768A4EF033190C28E87A480DDFA67FEF2 (String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsSessionInfo_CallIdentityTokenChanged_m99E4FA7768A4EF033190C28E87A480DDFA67FEF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * V_0 = NULL;
	bool V_1 = false;
	{
		IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * L_0 = ((AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsSessionInfo_t09A4555A2B7A6BC59C0BE66273B5D9B26952EEEB_il2cpp_TypeInfo_var))->get_identityTokenChanged_1();
		V_0 = L_0;
		IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * L_3 = V_0;
		String_t* L_4 = ___token0;
		NullCheck(L_3);
		IdentityTokenChanged_Invoke_m73580C534C2D30CFA7F455946EF94F4978DC991B(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0017:
	{
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
// Conversion methods for marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_pinvoke(const RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932& unmarshaled, RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___Updated_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Updated_1()));
}
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_pinvoke_back(const RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_pinvoke& marshaled, RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_Updated_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83>(marshaled.___Updated_1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_pinvoke_cleanup(RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_com(const RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932& unmarshaled, RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
	marshaled.___Updated_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Updated_1()));
}
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_com_back(const RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_com& marshaled, RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset((&unmarshaled_m_Ptr_temp_0), 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
	unmarshaled.set_Updated_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83>(marshaled.___Updated_1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshal_com_cleanup(RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.RemoteConfigSettings::add_Updated(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_add_Updated_mA873BB71C67D1F91DB7CE75768529E7685713890 (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_add_Updated_mA873BB71C67D1F91DB7CE75768529E7685713890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_2 = NULL;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_Updated_1();
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
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** L_5 = __this->get_address_of_Updated_1();
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
// System.Void UnityEngine.RemoteConfigSettings::remove_Updated(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_remove_Updated_m344CF8BE93AF516842668E59000113B2EA8B4A83 (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_remove_Updated_m344CF8BE93AF516842668E59000113B2EA8B4A83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_2 = NULL;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_Updated_1();
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
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** L_5 = __this->get_address_of_Updated_1();
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
// System.Void UnityEngine.RemoteConfigSettings::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings__ctor_m7EF7EB83EEBC0F24479817E85B2B192B2D8CB4F6 (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * __this, String_t* ___configKey0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___configKey0;
		intptr_t L_1 = RemoteConfigSettings_Internal_Create_mDCE7E4AF86C50C7F9E73813D45E4BEA343ACE239(__this, L_0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		__this->set_Updated_1((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)NULL);
		return;
	}
}
// System.Void UnityEngine.RemoteConfigSettings::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_Finalize_m59B77E3A1EB085AD9B8964643F4B0DF128BAF474 (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		RemoteConfigSettings_Destroy_m467B26A7CC05124535BD315D8E7228EACF1216FF(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteConfigSettings::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_Destroy_m467B26A7CC05124535BD315D8E7228EACF1216FF (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_Destroy_m467B26A7CC05124535BD315D8E7228EACF1216FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Ptr_0();
		RemoteConfigSettings_Internal_Destroy_m2F3C20DB7B43A0E0B79508B99902055AB6E660F8((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteConfigSettings::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_Dispose_mCB3DEC274B1CA8367C695C2AE6B37FA9697977D9 (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_Dispose_mCB3DEC274B1CA8367C695C2AE6B37FA9697977D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RemoteConfigSettings_Destroy_m467B26A7CC05124535BD315D8E7228EACF1216FF(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr UnityEngine.RemoteConfigSettings::Internal_Create(UnityEngine.RemoteConfigSettings,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RemoteConfigSettings_Internal_Create_mDCE7E4AF86C50C7F9E73813D45E4BEA343ACE239 (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * ___rcs0, String_t* ___configKey1, const RuntimeMethod* method)
{
	typedef intptr_t (*RemoteConfigSettings_Internal_Create_mDCE7E4AF86C50C7F9E73813D45E4BEA343ACE239_ftn) (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 *, String_t*);
	static RemoteConfigSettings_Internal_Create_mDCE7E4AF86C50C7F9E73813D45E4BEA343ACE239_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteConfigSettings_Internal_Create_mDCE7E4AF86C50C7F9E73813D45E4BEA343ACE239_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RemoteConfigSettings::Internal_Create(UnityEngine.RemoteConfigSettings,System.String)");
	intptr_t retVal = _il2cpp_icall_func(___rcs0, ___configKey1);
	return retVal;
}
// System.Void UnityEngine.RemoteConfigSettings::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_Internal_Destroy_m2F3C20DB7B43A0E0B79508B99902055AB6E660F8 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*RemoteConfigSettings_Internal_Destroy_m2F3C20DB7B43A0E0B79508B99902055AB6E660F8_ftn) (intptr_t);
	static RemoteConfigSettings_Internal_Destroy_m2F3C20DB7B43A0E0B79508B99902055AB6E660F8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteConfigSettings_Internal_Destroy_m2F3C20DB7B43A0E0B79508B99902055AB6E660F8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RemoteConfigSettings::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_RemoteConfigSettingsUpdated_mD41B7744E8C4750B992A9B06C386257C8717F2BA (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * ___rcs0, bool ___wasLastUpdatedFromServer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteConfigSettings_RemoteConfigSettingsUpdated_mD41B7744E8C4750B992A9B06C386257C8717F2BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	bool V_1 = false;
	{
		RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * L_0 = ___rcs0;
		NullCheck(L_0);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = L_0->get_Updated_1();
		V_0 = L_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = V_0;
		bool L_5 = ___wasLastUpdatedFromServer1;
		NullCheck(L_4);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_4, L_5, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Boolean UnityEngine.RemoteConfigSettings::QueueConfig(System.String,System.Object,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteConfigSettings_QueueConfig_m79BEA364B1173AB16FCF4B3DC45F92FB2DE45A87 (String_t* ___name0, RuntimeObject * ___param1, int32_t ___ver2, String_t* ___prefix3, const RuntimeMethod* method)
{
	typedef bool (*RemoteConfigSettings_QueueConfig_m79BEA364B1173AB16FCF4B3DC45F92FB2DE45A87_ftn) (String_t*, RuntimeObject *, int32_t, String_t*);
	static RemoteConfigSettings_QueueConfig_m79BEA364B1173AB16FCF4B3DC45F92FB2DE45A87_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteConfigSettings_QueueConfig_m79BEA364B1173AB16FCF4B3DC45F92FB2DE45A87_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RemoteConfigSettings::QueueConfig(System.String,System.Object,System.Int32,System.String)");
	bool retVal = _il2cpp_icall_func(___name0, ___param1, ___ver2, ___prefix3);
	return retVal;
}
// System.Boolean UnityEngine.RemoteConfigSettings::SendDeviceInfoInConfigRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteConfigSettings_SendDeviceInfoInConfigRequest_m9FCE000C173A106AD170644064604D8A6AB1000B (const RuntimeMethod* method)
{
	typedef bool (*RemoteConfigSettings_SendDeviceInfoInConfigRequest_m9FCE000C173A106AD170644064604D8A6AB1000B_ftn) ();
	static RemoteConfigSettings_SendDeviceInfoInConfigRequest_m9FCE000C173A106AD170644064604D8A6AB1000B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteConfigSettings_SendDeviceInfoInConfigRequest_m9FCE000C173A106AD170644064604D8A6AB1000B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RemoteConfigSettings::SendDeviceInfoInConfigRequest()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.RemoteConfigSettings::ForceUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_ForceUpdate_mB0FCC2A561ABBED2DA29A76021F530340B021C00 (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 * __this, const RuntimeMethod* method)
{
	typedef void (*RemoteConfigSettings_ForceUpdate_mB0FCC2A561ABBED2DA29A76021F530340B021C00_ftn) (RemoteConfigSettings_tAA5BDD4B4E416F9907EB1B5E6295157CD224A932 *);
	static RemoteConfigSettings_ForceUpdate_mB0FCC2A561ABBED2DA29A76021F530340B021C00_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteConfigSettings_ForceUpdate_mB0FCC2A561ABBED2DA29A76021F530340B021C00_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RemoteConfigSettings::ForceUpdate()");
	_il2cpp_icall_func(__this);
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
// System.Void UnityEngine.RemoteSettings::add_Updated(UnityEngine.RemoteSettings_UpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_add_Updated_mB05C0ABC6FDA4301FB6274CAF240C398B095208A (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_add_Updated_mB05C0ABC6FDA4301FB6274CAF240C398B095208A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * V_0 = NULL;
	UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * V_1 = NULL;
	UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * V_2 = NULL;
	{
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_0 = ((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_Updated_0();
		V_0 = L_0;
	}

IL_0006:
	{
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_1 = V_0;
		V_1 = L_1;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_2 = V_1;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 *)CastclassSealed((RuntimeObject*)L_4, UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55_il2cpp_TypeInfo_var));
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_5 = V_2;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_6 = V_1;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_7 = InterlockedCompareExchangeImpl<UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 *>((UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 **)(((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_address_of_Updated_0()), L_5, L_6);
		V_0 = L_7;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_8 = V_0;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 *)L_8) == ((RuntimeObject*)(UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::remove_Updated(UnityEngine.RemoteSettings_UpdatedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_remove_Updated_m0D581B4E9331F45F7AF8A90D8CCFB6B50302FBFB (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_remove_Updated_m0D581B4E9331F45F7AF8A90D8CCFB6B50302FBFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * V_0 = NULL;
	UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * V_1 = NULL;
	UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * V_2 = NULL;
	{
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_0 = ((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_Updated_0();
		V_0 = L_0;
	}

IL_0006:
	{
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_1 = V_0;
		V_1 = L_1;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_2 = V_1;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 *)CastclassSealed((RuntimeObject*)L_4, UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55_il2cpp_TypeInfo_var));
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_5 = V_2;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_6 = V_1;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_7 = InterlockedCompareExchangeImpl<UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 *>((UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 **)(((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_address_of_Updated_0()), L_5, L_6);
		V_0 = L_7;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_8 = V_0;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 *)L_8) == ((RuntimeObject*)(UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::add_BeforeFetchFromServer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_add_BeforeFetchFromServer_m13ECFD325747E6F422EF71F75EA4A34A9975F6DC (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_add_BeforeFetchFromServer_m13ECFD325747E6F422EF71F75EA4A34A9975F6DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_BeforeFetchFromServer_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_address_of_BeforeFetchFromServer_1()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::remove_BeforeFetchFromServer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_remove_BeforeFetchFromServer_m360605D08E0D71D28096278FF7CC23B614F309BC (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_remove_BeforeFetchFromServer_m360605D08E0D71D28096278FF7CC23B614F309BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_BeforeFetchFromServer_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_address_of_BeforeFetchFromServer_1()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::add_Completed(System.Action`3<System.Boolean,System.Boolean,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_add_Completed_m4CC3FA671D407674AF209BB3F9D73F60DF2FF414 (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_add_Completed_m4CC3FA671D407674AF209BB3F9D73F60DF2FF414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_0 = NULL;
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_1 = NULL;
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_2 = NULL;
	{
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_0 = ((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_Completed_2();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_1 = V_0;
		V_1 = L_1;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_2 = V_1;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)CastclassSealed((RuntimeObject*)L_4, Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863_il2cpp_TypeInfo_var));
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_5 = V_2;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_6 = V_1;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_7 = InterlockedCompareExchangeImpl<Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *>((Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 **)(((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_address_of_Completed_2()), L_5, L_6);
		V_0 = L_7;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_8 = V_0;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)L_8) == ((RuntimeObject*)(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::remove_Completed(System.Action`3<System.Boolean,System.Boolean,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_remove_Completed_m12D4EBF24F9912932CD4F2F7C20C0A79D4CA80C0 (Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_remove_Completed_m12D4EBF24F9912932CD4F2F7C20C0A79D4CA80C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_0 = NULL;
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_1 = NULL;
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_2 = NULL;
	{
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_0 = ((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_Completed_2();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_1 = V_0;
		V_1 = L_1;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_2 = V_1;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)CastclassSealed((RuntimeObject*)L_4, Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863_il2cpp_TypeInfo_var));
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_5 = V_2;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_6 = V_1;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_7 = InterlockedCompareExchangeImpl<Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *>((Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 **)(((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_address_of_Completed_2()), L_5, L_6);
		V_0 = L_7;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_8 = V_0;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)L_8) == ((RuntimeObject*)(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdated_m5E3BAE9A00236820CF32F74D9F3A94E99055D8A4 (bool ___wasLastUpdatedFromServer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_RemoteSettingsUpdated_m5E3BAE9A00236820CF32F74D9F3A94E99055D8A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * V_0 = NULL;
	bool V_1 = false;
	{
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_0 = ((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_Updated_0();
		V_0 = L_0;
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * L_3 = V_0;
		NullCheck(L_3);
		UpdatedEventHandler_Invoke_mF27D3BF226F882F90575FE822F5F154B1E86FE1A(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsBeforeFetchFromServer_mE1753C7AE5ECBA0B7C7171CADF1DB4E1811BF043 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_RemoteSettingsBeforeFetchFromServer_mE1753C7AE5ECBA0B7C7171CADF1DB4E1811BF043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	bool V_1 = false;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_BeforeFetchFromServer_1();
		V_0 = L_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdateCompleted_mBF18BDDED97AD4FCA4FCB6587087ADF4C137838F (bool ___wasLastUpdatedFromServer0, bool ___settingsChanged1, int32_t ___response2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_RemoteSettingsUpdateCompleted_mBF18BDDED97AD4FCA4FCB6587087ADF4C137838F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * V_0 = NULL;
	bool V_1 = false;
	{
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_0 = ((RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t349767E4BD0534CC6AA070B83545DD6FC1C54FA4_il2cpp_TypeInfo_var))->get_Completed_2();
		V_0 = L_0;
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		Action_3_t8E4F9AA95E04BAD17F5B7C55ECF0611F34518863 * L_3 = V_0;
		bool L_4 = ___wasLastUpdatedFromServer0;
		bool L_5 = ___settingsChanged1;
		int32_t L_6 = ___response2;
		NullCheck(L_3);
		Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC(L_3, L_4, L_5, L_6, /*hidden argument*/Action_3_Invoke_m6A347A0BEE060BCB1EF7D9DCFB1C36CEB8387FCC_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Int32 UnityEngine.RemoteSettings::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteSettings_GetInt_m7B85007D798FCD48B7A76EE8E096098B3A82BB27 (String_t* ___key0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___key0;
		int32_t L_1 = RemoteSettings_GetInt_mE12A55BFDBBD9BA3452EBF38215764FCA5DD14F7(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.RemoteSettings::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RemoteSettings_GetInt_mE12A55BFDBBD9BA3452EBF38215764FCA5DD14F7 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	typedef int32_t (*RemoteSettings_GetInt_mE12A55BFDBBD9BA3452EBF38215764FCA5DD14F7_ftn) (String_t*, int32_t);
	static RemoteSettings_GetInt_mE12A55BFDBBD9BA3452EBF38215764FCA5DD14F7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteSettings_GetInt_mE12A55BFDBBD9BA3452EBF38215764FCA5DD14F7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RemoteSettings::GetInt(System.String,System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___key0, ___defaultValue1);
	return retVal;
}
// System.Single UnityEngine.RemoteSettings::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RemoteSettings_GetFloat_mCAF93AD235ABE3A73462AB50E9158FB9371D4261 (String_t* ___key0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___key0;
		float L_1 = RemoteSettings_GetFloat_m944E99433A2C9105EFF2217DBE266B1C7B34F67D(L_0, (0.0f), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.RemoteSettings::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RemoteSettings_GetFloat_m944E99433A2C9105EFF2217DBE266B1C7B34F67D (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method)
{
	typedef float (*RemoteSettings_GetFloat_m944E99433A2C9105EFF2217DBE266B1C7B34F67D_ftn) (String_t*, float);
	static RemoteSettings_GetFloat_m944E99433A2C9105EFF2217DBE266B1C7B34F67D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteSettings_GetFloat_m944E99433A2C9105EFF2217DBE266B1C7B34F67D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RemoteSettings::GetFloat(System.String,System.Single)");
	float retVal = _il2cpp_icall_func(___key0, ___defaultValue1);
	return retVal;
}
// System.String UnityEngine.RemoteSettings::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoteSettings_GetString_m5CB403786425A310B7DC422DD7AE72880112DD4C (String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_GetString_m5CB403786425A310B7DC422DD7AE72880112DD4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___key0;
		String_t* L_1 = RemoteSettings_GetString_m265B6073986E4282DF67D9C8AF7B51B8452C6F81(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.RemoteSettings::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoteSettings_GetString_m265B6073986E4282DF67D9C8AF7B51B8452C6F81 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method)
{
	typedef String_t* (*RemoteSettings_GetString_m265B6073986E4282DF67D9C8AF7B51B8452C6F81_ftn) (String_t*, String_t*);
	static RemoteSettings_GetString_m265B6073986E4282DF67D9C8AF7B51B8452C6F81_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteSettings_GetString_m265B6073986E4282DF67D9C8AF7B51B8452C6F81_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RemoteSettings::GetString(System.String,System.String)");
	String_t* retVal = _il2cpp_icall_func(___key0, ___defaultValue1);
	return retVal;
}
// System.Boolean UnityEngine.RemoteSettings::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteSettings_GetBool_mC1D00DA21E3493E4A2FEED9F6A1B621C4D51D2E8 (String_t* ___key0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___key0;
		bool L_1 = RemoteSettings_GetBool_m71950BF48C5983310761829DB03A8C0ED90B9E24(L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.RemoteSettings::GetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteSettings_GetBool_m71950BF48C5983310761829DB03A8C0ED90B9E24 (String_t* ___key0, bool ___defaultValue1, const RuntimeMethod* method)
{
	typedef bool (*RemoteSettings_GetBool_m71950BF48C5983310761829DB03A8C0ED90B9E24_ftn) (String_t*, bool);
	static RemoteSettings_GetBool_m71950BF48C5983310761829DB03A8C0ED90B9E24_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteSettings_GetBool_m71950BF48C5983310761829DB03A8C0ED90B9E24_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RemoteSettings::GetBool(System.String,System.Boolean)");
	bool retVal = _il2cpp_icall_func(___key0, ___defaultValue1);
	return retVal;
}
// System.Boolean UnityEngine.RemoteSettings::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteSettings_HasKey_m0AEEAC611403015C57047B8215D7387C9C4AEC25 (String_t* ___key0, const RuntimeMethod* method)
{
	typedef bool (*RemoteSettings_HasKey_m0AEEAC611403015C57047B8215D7387C9C4AEC25_ftn) (String_t*);
	static RemoteSettings_HasKey_m0AEEAC611403015C57047B8215D7387C9C4AEC25_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteSettings_HasKey_m0AEEAC611403015C57047B8215D7387C9C4AEC25_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RemoteSettings::HasKey(System.String)");
	bool retVal = _il2cpp_icall_func(___key0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 (IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * __this, String_t* ___token0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___token0' to native representation
	char* ____token0_marshaled = NULL;
	____token0_marshaled = il2cpp_codegen_marshal_string(___token0);

	// Native function invocation
	il2cppPInvokeFunc(____token0_marshaled);

	// Marshaling cleanup of parameter '___token0' native representation
	il2cpp_codegen_marshal_free(____token0_marshaled);
	____token0_marshaled = NULL;

}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo_IdentityTokenChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged__ctor_m11460EC0DCF16CC424C6CECFDFE8862E0EB6133A (IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo_IdentityTokenChanged::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged_Invoke_m73580C534C2D30CFA7F455946EF94F4978DC991B (IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * __this, String_t* ___token0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___token0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___token0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___token0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___token0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___token0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___token0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___token0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___token0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___token0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___token0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___token0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Analytics.AnalyticsSessionInfo_IdentityTokenChanged::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IdentityTokenChanged_BeginInvoke_m996658BCDA945DC240BB8DCCEB74237B1B3ECBDB (IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * __this, String_t* ___token0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___token0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo_IdentityTokenChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged_EndInvoke_m7103AA2B42EE8FD1C80047657E4EABB635243872 (IdentityTokenChanged_t306C7E37727221C44C9D5843455B1FD7286C38B1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF (SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int64_t, int64_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___sessionState0, ___sessionId1, ___sessionElapsedTime2, static_cast<int32_t>(___sessionChanged3));

}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo_SessionStateChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged__ctor_m20755FFAAF071B0C0C5CB8001E00235A68631E87 (SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo_SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_mC75D45C1580508D5A628BA0D959E7FC937972343 (SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(targetMethod, targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
					else
						GenericVirtActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(targetMethod, targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
					else
						VirtActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int64_t, int64_t, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___sessionState0) - 1), ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Analytics.AnalyticsSessionInfo_SessionStateChanged::BeginInvoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SessionStateChanged_BeginInvoke_m1FC5FEA2CB085F8EB742E87CAED9E6EDA0A4CB06 (SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SessionStateChanged_BeginInvoke_m1FC5FEA2CB085F8EB742E87CAED9E6EDA0A4CB06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(AnalyticsSessionState_t886946F698BCE50BAA2E7418B105E6C4C2F155E6_il2cpp_TypeInfo_var, &___sessionState0);
	__d_args[1] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___sessionId1);
	__d_args[2] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___sessionElapsedTime2);
	__d_args[3] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___sessionChanged3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo_SessionStateChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged_EndInvoke_mD526629995FB93D3E61F98B43D56805F22CCBCE9 (SessionStateChanged_tB042EAE0E6718825B246F7744C738DC80E529ACF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.RemoteSettings_UpdatedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler__ctor_m47CAF85102B04A37A20F7043F57404A76DE62153 (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.RemoteSettings_UpdatedEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_mF27D3BF226F882F90575FE822F5F154B1E86FE1A (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.RemoteSettings_UpdatedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdatedEventHandler_BeginInvoke_m937F7EF5F566073B30BB5D8AD630A723F4580746 (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.RemoteSettings_UpdatedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler_EndInvoke_mD99843879F04C60C61D6A9BBAC751F6DD4C74982 (UpdatedEventHandler_tB65DDD5524F88B07DDF23FD1607DF1887404EC55 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
