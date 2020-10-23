#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Firebase.AppOptions
struct AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F;
// Firebase.AppOptionsInternal
struct AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5;
// Firebase.Platform.FirebaseAppUtils
struct FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E;
// Firebase.FirebaseException
struct FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47;
// Firebase.FutureBase
struct FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// Firebase.InitializationException
struct InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// Firebase.LogUtil
struct LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Firebase.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tF7B8E107CCA490884BAD9F808FA46A4943C293AA;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Firebase.StringStringMap
struct StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9;
// Firebase.AppUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0;
// Firebase.FirebaseApp/EnableModuleParams
struct EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4;
// Firebase.LogUtil/LogMessageDelegate
struct LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84;
// Firebase.StringStringMap/StringStringMapEnumerator
struct StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17;
// Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t19B34EAD810249AF015A661D23DF1909EADEB101;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,Firebase.FirebaseApp>
struct KeyCollection_t386C2205B36EBDC4D54FC2DFF5AE34FAA52B739E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.FirebaseApp>
struct KeyCollection_t8A40AF6292576BAEAE6C31443DCFB8AE4A82F9EB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.IntPtr,Firebase.FirebaseApp>
struct ValueCollection_t1AEB5054684203AAAA668DEC763289A67A488850;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.FirebaseApp>
struct ValueCollection_tB4971112B8CC7BD305011D431DDDFADB3518A157;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate
struct Delegate_t;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3;
// System.Collections.Generic.Dictionary`2/Entry<System.IntPtr,Firebase.FirebaseApp>[]
struct EntryU5BU5D_t206ED031D7C280A41D6F20D5DF9FF422E8AD14FF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.FirebaseApp>[]
struct EntryU5BU5D_t5AC464FC30A20C87B82B06E4026719C8D5F870FE;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Firebase.Platform.IFirebaseAppUtils
struct IFirebaseAppUtils_tE1357F60A9CC1EC2CEBA9A3F0AB3B08237D8047E;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;

IL2CPP_EXTERN_C RuntimeClass* AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral0FBCAB8C3D9EDED5D0224DC45891EB0E0AAB4BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral1103241B0617CC2365FF633B3B7D5125D1128C22;
IL2CPP_EXTERN_C String_t* _stringLiteral1611D456D2CEE02CE1487EE8445E48898D131F6B;
IL2CPP_EXTERN_C String_t* _stringLiteral161FE474EAA8E6DC3E89D180279498786FB79C9D;
IL2CPP_EXTERN_C String_t* _stringLiteral16687478A33D5A15482DF6D441B61A0189583C64;
IL2CPP_EXTERN_C String_t* _stringLiteral1976A864796DBEDF326708C78B035AAFD37943BD;
IL2CPP_EXTERN_C String_t* _stringLiteral1B7B4B5C42CA1C2ED60073710A5266DC268AB4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral238329B64A3729607F223FFEFA394456AE114908;
IL2CPP_EXTERN_C String_t* _stringLiteral24ED59ED9090E09DB40A7847435D91BFAE584ECF;
IL2CPP_EXTERN_C String_t* _stringLiteral324FB463A34E73070FCEDC655BCD2F40B2E47971;
IL2CPP_EXTERN_C String_t* _stringLiteral380FCBD323D8B608651CCA1F4D65A0B1AA362A2A;
IL2CPP_EXTERN_C String_t* _stringLiteral3818B2A66126D8DEEF8DD9AFC89B116464489DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral39655E1CF62FCA36F81637138EABB8E0E88FF960;
IL2CPP_EXTERN_C String_t* _stringLiteral3AF2A135CDF924D3759DEF7E5281C195A034CDC6;
IL2CPP_EXTERN_C String_t* _stringLiteral3D20C767EAE028E07642EC56369E049DCB56F6C8;
IL2CPP_EXTERN_C String_t* _stringLiteral403CDB792BDB39DFA5B32B9F5BF62F3460A11FFC;
IL2CPP_EXTERN_C String_t* _stringLiteral41AFC5CF6BD87FAE855E565E56413D254EFDD312;
IL2CPP_EXTERN_C String_t* _stringLiteral469058482DD7BE31765E4E966F8C98EA4B3B6930;
IL2CPP_EXTERN_C String_t* _stringLiteral47655613208A2442002F378BF374CC45952A31F8;
IL2CPP_EXTERN_C String_t* _stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC;
IL2CPP_EXTERN_C String_t* _stringLiteral548196CBB5E5F5105E575F464FE92F73144DFB34;
IL2CPP_EXTERN_C String_t* _stringLiteral572FD223BFCEC6E8E552A7CC84FEDA3269F3A5F7;
IL2CPP_EXTERN_C String_t* _stringLiteral62550204912BC90809B03D0FE60F2B4874EB15F8;
IL2CPP_EXTERN_C String_t* _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54;
IL2CPP_EXTERN_C String_t* _stringLiteral6A83A8E44E2406EE1D423FE59CB3FB07EC1B2147;
IL2CPP_EXTERN_C String_t* _stringLiteral7AAEF17DD886943DA28485F945C0BC92C838450F;
IL2CPP_EXTERN_C String_t* _stringLiteral7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1;
IL2CPP_EXTERN_C String_t* _stringLiteral87335D17F4C1DED94C576C65C1DC4F16D278C988;
IL2CPP_EXTERN_C String_t* _stringLiteral875842D645C31A13810035132C84A4C226BFDDA6;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral88B277217AED4CBAA42043A4D5CD8DB154680BFA;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C;
IL2CPP_EXTERN_C String_t* _stringLiteral955802D1A6D5235C4CF60C6BA2074F90F06CECCE;
IL2CPP_EXTERN_C String_t* _stringLiteral9897861EE3629BE78B707B3A0C46193347531E30;
IL2CPP_EXTERN_C String_t* _stringLiteralA37BC83F5B58D09130EA87C7BFA23EEF1ED5CE5D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3A98A8B1C98564A92ABAE5D3EB9AB9D7723903A;
IL2CPP_EXTERN_C String_t* _stringLiteralA69B6F8510FC3A441BACCF626DC509E0C431FF1F;
IL2CPP_EXTERN_C String_t* _stringLiteralADA172ACC20A09E7D83BFE71E65356790E5B24CE;
IL2CPP_EXTERN_C String_t* _stringLiteralAF3E6E43968D1C156E887454B8F9BDB7723036D3;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB7EFBEA6AABC35E96367379C5A6B509BB4044717;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC2BB0CEDEC57E9981F22698838128030E062BF12;
IL2CPP_EXTERN_C String_t* _stringLiteralC79C1E7C1AB013FFB3AD9A42073405EF4995E70F;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF;
IL2CPP_EXTERN_C String_t* _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D6709CAC9D8FCE4933C82CDA34EE45277DBD95;
IL2CPP_EXTERN_C String_t* _stringLiteralD8E3A88F5BFAC46D4EA8953E6A2EA7D3C25746CC;
IL2CPP_EXTERN_C String_t* _stringLiteralDE83EFF84A2045FE5379CA94C53B51BA575BD5A6;
IL2CPP_EXTERN_C String_t* _stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8;
IL2CPP_EXTERN_C String_t* _stringLiteralE6F00725B1CE2641D3D5ED19F65223CA4D3F8BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralEA5B9DDB87B05728AF950352BA404136EF4EA09B;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
IL2CPP_EXTERN_C String_t* _stringLiteralEE248ED951626ABDD49B64B81CAEAF341755AF6C;
IL2CPP_EXTERN_C String_t* _stringLiteralF2A5607525186BE61B973E77753BBA0D8227A406;
IL2CPP_EXTERN_C String_t* _stringLiteralF56258CA08196A0AA345480C655C78D0172F29E6;
IL2CPP_EXTERN_C String_t* _stringLiteralFB12F16C75DE3806ED28E20C65FB81D432F0D52F;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_GetDatabaseUrlInternal_m000B201A09C953887FC4428FCFDC097E22451C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_get_ApiKey_m7E4EEEE1100FAE72251593632619092B7E675090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_get_AppId_mD0FF298D8468A9664BF58EBE95CDCA487CAE20AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_get_MessageSenderId_mC448D7030D9EC1FAA418F608C81ADC4ADB999946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_get_PackageName_m091E48C6CA71A5662C6DFC640F32FA7AA810D248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_get_ProjectId_m3FFDDF11A39C948719985A512855D7C9740143CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOptionsInternal_get_StorageBucket_mB90A0A959007D89009EDB6A11CF27F1E0A4357C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_AppEnableLogCallback_m01A441841A004A6048FCFC012F083BFAA3581C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_GetEnabledAppCallbackByName_m4E31F50E6B3C90FF204A4BC57293B0A1C5F81513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_PollCallbacks_m75E222C3BCE3563C9C27265D3AE011E3E342E527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_SetEnabledAppCallbackByName_m59AF9169D18540D471ECB1A999A5F7B67D0B63BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m5D4563C331A3FF5094A2A9B3A8EA500DD30F9D28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m897CB1E1E85B5420551BA39A79F33E380D02EEEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mABD3D175BBCE88050893B6E15BADA46BFE7375D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3C25C443F1B1748269C9C20D1EACADAFE590E1A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFF10F06C038C842A2C0172778461CFE1F3D2F6CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m48374F40728F7E5FC8EAA23E458292E5475B4EB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m11C0967C76F78C48B5BCBECEC12AE868FB44441D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE35649D2E86CEDB104C0489DB836619ECE559B78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_AppSetDefaultConfigPath_m55D859EEC14CA1FFEF3DC3422F5CE8C1328E097F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_CreateInternal_m7C9DA4F992AD0B435BE57A04D5BE3537AB2A0233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_ReleaseReferenceInternal_m251EC6B33F516335E844BC8CBC7531205D41C934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_ThrowIfNull_m408BCFBB4ED87F4FF412F374897F083E87897315_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_U3CCreateAndTrackU3Em__1_m9C34C3C32726662CBE52EDB06D70C5E197AF62A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_U3CCreateU3Em__0_m0C29C0EE9E16A55E80148E3233D6491114F11CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseApp_options_m246546AF14ED87EA3EDB8095EA99C5AA2396E8B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m0119BCDA2BA84CD54D128DD6D692F4CEF57F602F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMapEnumerator_Reset_m71559FB9DF7506B0DBD523E327E02E6B4405A84E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMapEnumerator_get_Current_m76DE586A735687200DC7ACF803FEF75527302F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_Add_m9D2175007BBA9E8488671E9C13A08F247D5C2AED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_Clear_mB1FFA2B7D6635E95F3A55805C39BE0AD3B14F21E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_ContainsKey_mFF9F5FC22F5DF7900847009A2587F31967F11CCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_CopyTo_mD1D62132C4D6B43C716FBDD75A6628BD7DF618F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_Remove_m3E16E65DA11460219114402300F67FA76D87B408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap__ctor_mDD72D1A9A58D226FEA04CB062E9240FBF4B0949E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_create_iterator_begin_m3F118062973941F86B02039418B2A2E5475F4377_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_destroy_iterator_m345F0B0BBC506B42F149223404B1A9F205232F87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_get_next_key_m5748FA89B2C25838202E9E28D1DFB4FB8C33CE73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_getitem_m9E38CEC82B11AC188D75FA0BBB8A8751AC30D6D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_setitem_m17A4FFDF71A27F385C53EC0C18EC02BE031CEE0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStringMap_size_mBB463BF4F9C6625F91343E1E8F38418A790F1D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_Dispose_m923FE7958D4317ED8825DBAD4254B533825AEAA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_GetDatabaseUrlInternal_m000B201A09C953887FC4428FCFDC097E22451C6B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_ApiKey_m7E4EEEE1100FAE72251593632619092B7E675090_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_AppId_mD0FF298D8468A9664BF58EBE95CDCA487CAE20AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_DatabaseUrl_mA1508C095A0862C3DC8C1A6C728106653B0EDE60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_MessageSenderId_mC448D7030D9EC1FAA418F608C81ADC4ADB999946_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_PackageName_m091E48C6CA71A5662C6DFC640F32FA7AA810D248_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_ProjectId_m3FFDDF11A39C948719985A512855D7C9740143CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppOptionsInternal_get_StorageBucket_mB90A0A959007D89009EDB6A11CF27F1E0A4357C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtilPINVOKE__cctor_mB82716D517E855CA4815CA1B872B0599F1785B19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtil_AppEnableLogCallback_m01A441841A004A6048FCFC012F083BFAA3581C66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtil_GetEnabledAppCallbackByName_m4E31F50E6B3C90FF204A4BC57293B0A1C5F81513_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtil_PollCallbacks_m75E222C3BCE3563C9C27265D3AE011E3E342E527_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtil_SetEnabledAppCallbackByName_m59AF9169D18540D471ECB1A999A5F7B67D0B63BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ErrorMessages__cctor_mC64C25A9DFBF5FA4B8784803560444FA59FDD7DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ErrorMessages_get_DependencyNotFoundErrorMessage_m93703910D97FC22ECA3B89EEF8681C6F29989106_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ErrorMessages_get_DllNotFoundExceptionErrorMessage_m493D1E37E274C2D633EB65991F5B26102E3F6595_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAppUtils_GetLogLevel_m9E036F13631BCE81463AA50592FBCD54E9CB09D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAppUtils_TranslateDllNotFoundException_m6E4E3109BD0827EE0E675EE9CD50E9C6EE343356_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAppUtils__cctor_mD68087540805827D81757968316C3971FF48B537_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAppUtils_get_Instance_m79B79F13BD6329A947B640DB886DC398439A90BFFirebase_App_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAppUtils_get_Instance_m79B79F13BD6329A947B640DB886DC398439A90BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_AddReference_m1B148D579E5DBB9E6608813E714769757F33142B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_AppSetDefaultConfigPath_m55D859EEC14CA1FFEF3DC3422F5CE8C1328E097F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_CreateInternal_m7C9DA4F992AD0B435BE57A04D5BE3537AB2A0233_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_Create_m9A391D6EC41EE45EAA3CCAE368F182EAD69791ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_Dispose_mD97452CFB97FC00105EB0369582537ED1C457A93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_GetInstance_mED18364B5B6A567DEDDBFE38F5CE174FF8171196_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_IsCheckDependenciesRunning_m35488E6B310C9CF1BC00E4464028166723C3F078_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_OnAllAppsDestroyed_m6D2ADF3AFBC105388CB7D63FA431CF5BAF9FA94D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_ReleaseReferenceInternal_m251EC6B33F516335E844BC8CBC7531205D41C934_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_RemoveReference_mF1E15EE01A41D7674FAFDAB777CF637071F907E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_ThrowIfNull_m408BCFBB4ED87F4FF412F374897F083E87897315_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_U3CCreateAndTrackU3Em__1_m9C34C3C32726662CBE52EDB06D70C5E197AF62A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_U3CCreateU3Em__0_m0C29C0EE9E16A55E80148E3233D6491114F11CA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_UrlStringToUri_mA6A34CF111210B3561C2450F87640A23BC9BCA51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_WeakReferenceGetTarget_m4F195CE3072FD67139BDC76BAB407034828B2C3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp__cctor_m65C207A2EB72FE3DF40D35D1018C27881D66EB62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_get_LogLevel_mF5210CA8F87660D4B3747792C00C98579142CAAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_get_Options_m98E649DAB99D126DC16D6E78682F933B02049180_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_options_m246546AF14ED87EA3EDB8095EA99C5AA2396E8B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseEditorExtensions_GetCertPemFile_m089CFFE9DF69A0CC16CB1AE7F08D7CC5DCC95873_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseEditorExtensions_GetEditorAuthUserId_m6BB379B4D96BA75F488582B3E0FD3F01F0632269_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseEditorExtensions_GetEditorP12FileName_mF5C096B058399025F1D6B55BDE367B4E4F37FE42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseEditorExtensions_GetEditorP12Password_mDCABA88F7DFF34CF4FE687BF70FD5150A325CD5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseEditorExtensions_GetEditorServiceAccountEmail_m214A056554923947FF1C05E749922457ED17F0AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InitializationException__ctor_m56641135A502F6D70F771A69157A0D674EB99DD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InitializationException__ctor_mCE6B67DCF469CF7CC9CC8A5C6C2E6CAC73D6366F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogMessageDelegate_BeginInvoke_m9A9B00026484A1266F2E8E1101699C83D2755654_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogUtil_Dispose_mB12D003420083CAA79A613F44A635DA5418C989D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogUtil_InitializeLogging_m05046FDF1759F0A851931F7FCF743FAA24BDB434_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogUtil__cctor_m3A18E1D17E9D3E61E2A8B33C51742249F708BB0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogUtil__ctor_mE6F41CDC7EFF92D76E3D07B5F8350BF7D5A4983D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper__cctor_m88D96246E0C2DD75CFC4054F09FA9044A5B6FA90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGStringHelper__cctor_m8EE8BC5E0ABB17F0F9D0A2F615EE4987FD86F3B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMapEnumerator_MoveNext_m22BD0722C730E02430014E65174344AA499F336F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMapEnumerator_Reset_m71559FB9DF7506B0DBD523E327E02E6B4405A84E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMapEnumerator_System_Collections_IEnumerator_get_Current_m9427EB0A54BECC080668E8FFBC3833403DC55994_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMapEnumerator__ctor_m765FC216E9A67EA91E8D360C32ED59B5EF59A43A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMapEnumerator_get_Current_m76DE586A735687200DC7ACF803FEF75527302F06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_Add_m47B75C347EDA853CA95EFE263E2B645A0241D430_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_Add_m9D2175007BBA9E8488671E9C13A08F247D5C2AED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_Clear_mB1FFA2B7D6635E95F3A55805C39BE0AD3B14F21E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_ContainsKey_mFF9F5FC22F5DF7900847009A2587F31967F11CCF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_Contains_mE32677A31CE147FDD041B47D9D48914312DB8AF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_CopyTo_mD1D62132C4D6B43C716FBDD75A6628BD7DF618F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_Dispose_mA58EFAC215289EDDB29347D7FB6EC3E9E84FADDF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_GetEnumerator_m55C288A948D94A096AD2FA8D042B8B816E6A6C9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_Remove_m3443C8BF4781ADB1C64089E6DA44095D341329D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_Remove_m3E16E65DA11460219114402300F67FA76D87B408_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CstringU2CstringU3EU3E_GetEnumerator_m90054F1D2FAC7C835F072097638462CE5493A794_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_System_Collections_IEnumerable_GetEnumerator_m85EB42397DC75F324F35121091E81C6F86E9984C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap__ctor_mDD72D1A9A58D226FEA04CB062E9240FBF4B0949E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_create_iterator_begin_m3F118062973941F86B02039418B2A2E5475F4377_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_destroy_iterator_m345F0B0BBC506B42F149223404B1A9F205232F87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_getCPtr_m7DDDDE0EC47182907217F5620BDEDF5BC8018657_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_get_Keys_m913897400DEF518DFD7D6E0CCEB1FE2026A2B2D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_get_Values_m56432463067868C092985B3D5A2066463C3FB7AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_get_next_key_m5748FA89B2C25838202E9E28D1DFB4FB8C33CE73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_getitem_m9E38CEC82B11AC188D75FA0BBB8A8751AC30D6D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_setitem_m17A4FFDF71A27F385C53EC0C18EC02BE031CEE0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringStringMap_size_mBB463BF4F9C6625F91343E1E8F38418A790F1D00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VersionInfo_get_SdkVersion_m98A33172434D6EA468C4FF32AC941045D88DCF8B_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124;
struct KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1132FFD8564BD0444C5CEDBDD2DC185B7EC91F5A 
{
public:

public:
};


// System.Object


// Firebase.AppOptions
struct  AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F  : public RuntimeObject
{
public:
	// System.Uri Firebase.AppOptions::<DatabaseUrl>k__BackingField
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___U3CDatabaseUrlU3Ek__BackingField_0;
	// System.String Firebase.AppOptions::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_1;
	// System.String Firebase.AppOptions::<ApiKey>k__BackingField
	String_t* ___U3CApiKeyU3Ek__BackingField_2;
	// System.String Firebase.AppOptions::<MessageSenderId>k__BackingField
	String_t* ___U3CMessageSenderIdU3Ek__BackingField_3;
	// System.String Firebase.AppOptions::<StorageBucket>k__BackingField
	String_t* ___U3CStorageBucketU3Ek__BackingField_4;
	// System.String Firebase.AppOptions::<ProjectId>k__BackingField
	String_t* ___U3CProjectIdU3Ek__BackingField_5;
	// System.String Firebase.AppOptions::<PackageName>k__BackingField
	String_t* ___U3CPackageNameU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDatabaseUrlU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CDatabaseUrlU3Ek__BackingField_0)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_U3CDatabaseUrlU3Ek__BackingField_0() const { return ___U3CDatabaseUrlU3Ek__BackingField_0; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_U3CDatabaseUrlU3Ek__BackingField_0() { return &___U3CDatabaseUrlU3Ek__BackingField_0; }
	inline void set_U3CDatabaseUrlU3Ek__BackingField_0(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___U3CDatabaseUrlU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseUrlU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CAppIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_1() const { return ___U3CAppIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_1() { return &___U3CAppIdU3Ek__BackingField_1; }
	inline void set_U3CAppIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CApiKeyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CApiKeyU3Ek__BackingField_2)); }
	inline String_t* get_U3CApiKeyU3Ek__BackingField_2() const { return ___U3CApiKeyU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CApiKeyU3Ek__BackingField_2() { return &___U3CApiKeyU3Ek__BackingField_2; }
	inline void set_U3CApiKeyU3Ek__BackingField_2(String_t* value)
	{
		___U3CApiKeyU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CApiKeyU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageSenderIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CMessageSenderIdU3Ek__BackingField_3)); }
	inline String_t* get_U3CMessageSenderIdU3Ek__BackingField_3() const { return ___U3CMessageSenderIdU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CMessageSenderIdU3Ek__BackingField_3() { return &___U3CMessageSenderIdU3Ek__BackingField_3; }
	inline void set_U3CMessageSenderIdU3Ek__BackingField_3(String_t* value)
	{
		___U3CMessageSenderIdU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageSenderIdU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStorageBucketU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CStorageBucketU3Ek__BackingField_4)); }
	inline String_t* get_U3CStorageBucketU3Ek__BackingField_4() const { return ___U3CStorageBucketU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CStorageBucketU3Ek__BackingField_4() { return &___U3CStorageBucketU3Ek__BackingField_4; }
	inline void set_U3CStorageBucketU3Ek__BackingField_4(String_t* value)
	{
		___U3CStorageBucketU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStorageBucketU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProjectIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CProjectIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CProjectIdU3Ek__BackingField_5() const { return ___U3CProjectIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CProjectIdU3Ek__BackingField_5() { return &___U3CProjectIdU3Ek__BackingField_5; }
	inline void set_U3CProjectIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CProjectIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProjectIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPackageNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CPackageNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CPackageNameU3Ek__BackingField_6() const { return ___U3CPackageNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CPackageNameU3Ek__BackingField_6() { return &___U3CPackageNameU3Ek__BackingField_6; }
	inline void set_U3CPackageNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CPackageNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPackageNameU3Ek__BackingField_6), (void*)value);
	}
};


// Firebase.AppUtil
struct  AppUtil_t7498D724AD14D2C9882854E4B89D486FFE18AE69  : public RuntimeObject
{
public:

public:
};


// Firebase.AppUtilPINVOKE
struct  AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD  : public RuntimeObject
{
public:

public:
};

struct AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_StaticFields
{
public:
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper Firebase.AppUtilPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 * ___swigExceptionHelper_0;
	// Firebase.AppUtilPINVOKE_SWIGStringHelper Firebase.AppUtilPINVOKE::swigStringHelper
	SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// Firebase.AppUtilPINVOKE_SWIGExceptionHelper
struct  SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields
{
public:
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___applicationDelegate_0;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___arithmeticDelegate_1;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___divideByZeroDelegate_2;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___indexOutOfRangeDelegate_3;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___invalidCastDelegate_4;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___invalidOperationDelegate_5;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___ioDelegate_6;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___nullReferenceDelegate_7;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___outOfMemoryDelegate_8;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___overflowDelegate_9;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___systemDelegate_10;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentDelegate_11;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentNullDelegate_12;
	// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.AppUtilPINVOKE_SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.AppUtilPINVOKE_SWIGPendingException
struct  SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields
{
public:
	// System.Int32 Firebase.AppUtilPINVOKE_SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields
{
public:
	// System.Exception Firebase.AppUtilPINVOKE_SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.AppUtilPINVOKE_SWIGStringHelper
struct  SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_StaticFields
{
public:
	// Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate Firebase.AppUtilPINVOKE_SWIGStringHelper::stringDelegate
	SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.ErrorMessages
struct  ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51  : public RuntimeObject
{
public:

public:
};

struct ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields
{
public:
	// System.String Firebase.ErrorMessages::DEPENDENCY_NOT_FOUND_ERROR_ANDROID
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0;
	// System.String Firebase.ErrorMessages::DEPENDENCY_NOT_FOUND_ERROR_IOS
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_IOS_1;
	// System.String Firebase.ErrorMessages::DEPENDENCY_NOT_FOUND_ERROR_GENERIC
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2;
	// System.String Firebase.ErrorMessages::DLL_NOT_FOUND_ERROR_ANDROID
	String_t* ___DLL_NOT_FOUND_ERROR_ANDROID_3;
	// System.String Firebase.ErrorMessages::DLL_NOT_FOUND_ERROR_IOS
	String_t* ___DLL_NOT_FOUND_ERROR_IOS_4;
	// System.String Firebase.ErrorMessages::DLL_NOT_FOUND_ERROR_GENERIC
	String_t* ___DLL_NOT_FOUND_ERROR_GENERIC_5;

public:
	inline static int32_t get_offset_of_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0() { return static_cast<int32_t>(offsetof(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields, ___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0)); }
	inline String_t* get_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0() const { return ___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0; }
	inline String_t** get_address_of_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0() { return &___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0; }
	inline void set_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0(String_t* value)
	{
		___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0), (void*)value);
	}

	inline static int32_t get_offset_of_DEPENDENCY_NOT_FOUND_ERROR_IOS_1() { return static_cast<int32_t>(offsetof(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields, ___DEPENDENCY_NOT_FOUND_ERROR_IOS_1)); }
	inline String_t* get_DEPENDENCY_NOT_FOUND_ERROR_IOS_1() const { return ___DEPENDENCY_NOT_FOUND_ERROR_IOS_1; }
	inline String_t** get_address_of_DEPENDENCY_NOT_FOUND_ERROR_IOS_1() { return &___DEPENDENCY_NOT_FOUND_ERROR_IOS_1; }
	inline void set_DEPENDENCY_NOT_FOUND_ERROR_IOS_1(String_t* value)
	{
		___DEPENDENCY_NOT_FOUND_ERROR_IOS_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DEPENDENCY_NOT_FOUND_ERROR_IOS_1), (void*)value);
	}

	inline static int32_t get_offset_of_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2() { return static_cast<int32_t>(offsetof(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields, ___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2)); }
	inline String_t* get_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2() const { return ___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2; }
	inline String_t** get_address_of_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2() { return &___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2; }
	inline void set_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2(String_t* value)
	{
		___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2), (void*)value);
	}

	inline static int32_t get_offset_of_DLL_NOT_FOUND_ERROR_ANDROID_3() { return static_cast<int32_t>(offsetof(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields, ___DLL_NOT_FOUND_ERROR_ANDROID_3)); }
	inline String_t* get_DLL_NOT_FOUND_ERROR_ANDROID_3() const { return ___DLL_NOT_FOUND_ERROR_ANDROID_3; }
	inline String_t** get_address_of_DLL_NOT_FOUND_ERROR_ANDROID_3() { return &___DLL_NOT_FOUND_ERROR_ANDROID_3; }
	inline void set_DLL_NOT_FOUND_ERROR_ANDROID_3(String_t* value)
	{
		___DLL_NOT_FOUND_ERROR_ANDROID_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DLL_NOT_FOUND_ERROR_ANDROID_3), (void*)value);
	}

	inline static int32_t get_offset_of_DLL_NOT_FOUND_ERROR_IOS_4() { return static_cast<int32_t>(offsetof(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields, ___DLL_NOT_FOUND_ERROR_IOS_4)); }
	inline String_t* get_DLL_NOT_FOUND_ERROR_IOS_4() const { return ___DLL_NOT_FOUND_ERROR_IOS_4; }
	inline String_t** get_address_of_DLL_NOT_FOUND_ERROR_IOS_4() { return &___DLL_NOT_FOUND_ERROR_IOS_4; }
	inline void set_DLL_NOT_FOUND_ERROR_IOS_4(String_t* value)
	{
		___DLL_NOT_FOUND_ERROR_IOS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DLL_NOT_FOUND_ERROR_IOS_4), (void*)value);
	}

	inline static int32_t get_offset_of_DLL_NOT_FOUND_ERROR_GENERIC_5() { return static_cast<int32_t>(offsetof(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields, ___DLL_NOT_FOUND_ERROR_GENERIC_5)); }
	inline String_t* get_DLL_NOT_FOUND_ERROR_GENERIC_5() const { return ___DLL_NOT_FOUND_ERROR_GENERIC_5; }
	inline String_t** get_address_of_DLL_NOT_FOUND_ERROR_GENERIC_5() { return &___DLL_NOT_FOUND_ERROR_GENERIC_5; }
	inline void set_DLL_NOT_FOUND_ERROR_GENERIC_5(String_t* value)
	{
		___DLL_NOT_FOUND_ERROR_GENERIC_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DLL_NOT_FOUND_ERROR_GENERIC_5), (void*)value);
	}
};


// Firebase.FirebaseApp_EnableModuleParams
struct  EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4  : public RuntimeObject
{
public:
	// System.String Firebase.FirebaseApp_EnableModuleParams::<CppModuleName>k__BackingField
	String_t* ___U3CCppModuleNameU3Ek__BackingField_0;
	// System.String Firebase.FirebaseApp_EnableModuleParams::<CSharpClassName>k__BackingField
	String_t* ___U3CCSharpClassNameU3Ek__BackingField_1;
	// System.Boolean Firebase.FirebaseApp_EnableModuleParams::<AlwaysEnable>k__BackingField
	bool ___U3CAlwaysEnableU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCppModuleNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4, ___U3CCppModuleNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CCppModuleNameU3Ek__BackingField_0() const { return ___U3CCppModuleNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCppModuleNameU3Ek__BackingField_0() { return &___U3CCppModuleNameU3Ek__BackingField_0; }
	inline void set_U3CCppModuleNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CCppModuleNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCppModuleNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCSharpClassNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4, ___U3CCSharpClassNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CCSharpClassNameU3Ek__BackingField_1() const { return ___U3CCSharpClassNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CCSharpClassNameU3Ek__BackingField_1() { return &___U3CCSharpClassNameU3Ek__BackingField_1; }
	inline void set_U3CCSharpClassNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CCSharpClassNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCSharpClassNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAlwaysEnableU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4, ___U3CAlwaysEnableU3Ek__BackingField_2)); }
	inline bool get_U3CAlwaysEnableU3Ek__BackingField_2() const { return ___U3CAlwaysEnableU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CAlwaysEnableU3Ek__BackingField_2() { return &___U3CAlwaysEnableU3Ek__BackingField_2; }
	inline void set_U3CAlwaysEnableU3Ek__BackingField_2(bool value)
	{
		___U3CAlwaysEnableU3Ek__BackingField_2 = value;
	}
};


// Firebase.LogUtil
struct  LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90  : public RuntimeObject
{
public:
	// System.Boolean Firebase.LogUtil::_disposed
	bool ____disposed_2;

public:
	inline static int32_t get_offset_of__disposed_2() { return static_cast<int32_t>(offsetof(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90, ____disposed_2)); }
	inline bool get__disposed_2() const { return ____disposed_2; }
	inline bool* get_address_of__disposed_2() { return &____disposed_2; }
	inline void set__disposed_2(bool value)
	{
		____disposed_2 = value;
	}
};

struct LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields
{
public:
	// Firebase.LogUtil Firebase.LogUtil::_instance
	LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * ____instance_0;
	// System.Object Firebase.LogUtil::InitializeLoggingLock
	RuntimeObject * ___InitializeLoggingLock_1;
	// Firebase.LogUtil_LogMessageDelegate Firebase.LogUtil::<>f__mgU24cache0
	LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * ___U3CU3Ef__mgU24cache0_3;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields, ____instance_0)); }
	inline LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * get__instance_0() const { return ____instance_0; }
	inline LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_InitializeLoggingLock_1() { return static_cast<int32_t>(offsetof(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields, ___InitializeLoggingLock_1)); }
	inline RuntimeObject * get_InitializeLoggingLock_1() const { return ___InitializeLoggingLock_1; }
	inline RuntimeObject ** get_address_of_InitializeLoggingLock_1() { return &___InitializeLoggingLock_1; }
	inline void set_InitializeLoggingLock_1(RuntimeObject * value)
	{
		___InitializeLoggingLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InitializeLoggingLock_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_3), (void*)value);
	}
};


// Firebase.Platform.FirebaseAppPlatform
struct  FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5  : public RuntimeObject
{
public:
	// System.WeakReference Firebase.Platform.FirebaseAppPlatform::<app>k__BackingField
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___U3CappU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CappU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5, ___U3CappU3Ek__BackingField_0)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_U3CappU3Ek__BackingField_0() const { return ___U3CappU3Ek__BackingField_0; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_U3CappU3Ek__BackingField_0() { return &___U3CappU3Ek__BackingField_0; }
	inline void set_U3CappU3Ek__BackingField_0(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___U3CappU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappU3Ek__BackingField_0), (void*)value);
	}
};


// Firebase.Platform.FirebaseAppUtils
struct  FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E  : public RuntimeObject
{
public:

public:
};

struct FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_StaticFields
{
public:
	// Firebase.Platform.FirebaseAppUtils Firebase.Platform.FirebaseAppUtils::instance
	FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_StaticFields, ___instance_0)); }
	inline FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * get_instance_0() const { return ___instance_0; }
	inline FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// Firebase.StringStringMap_StringStringMapEnumerator
struct  StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846  : public RuntimeObject
{
public:
	// Firebase.StringStringMap Firebase.StringStringMap_StringStringMapEnumerator::collectionRef
	StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * ___collectionRef_0;
	// System.Collections.Generic.IList`1<System.String> Firebase.StringStringMap_StringStringMapEnumerator::keyCollection
	RuntimeObject* ___keyCollection_1;
	// System.Int32 Firebase.StringStringMap_StringStringMapEnumerator::currentIndex
	int32_t ___currentIndex_2;
	// System.Object Firebase.StringStringMap_StringStringMapEnumerator::currentObject
	RuntimeObject * ___currentObject_3;
	// System.Int32 Firebase.StringStringMap_StringStringMapEnumerator::currentSize
	int32_t ___currentSize_4;

public:
	inline static int32_t get_offset_of_collectionRef_0() { return static_cast<int32_t>(offsetof(StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846, ___collectionRef_0)); }
	inline StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * get_collectionRef_0() const { return ___collectionRef_0; }
	inline StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 ** get_address_of_collectionRef_0() { return &___collectionRef_0; }
	inline void set_collectionRef_0(StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * value)
	{
		___collectionRef_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectionRef_0), (void*)value);
	}

	inline static int32_t get_offset_of_keyCollection_1() { return static_cast<int32_t>(offsetof(StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846, ___keyCollection_1)); }
	inline RuntimeObject* get_keyCollection_1() const { return ___keyCollection_1; }
	inline RuntimeObject** get_address_of_keyCollection_1() { return &___keyCollection_1; }
	inline void set_keyCollection_1(RuntimeObject* value)
	{
		___keyCollection_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyCollection_1), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndex_2() { return static_cast<int32_t>(offsetof(StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846, ___currentIndex_2)); }
	inline int32_t get_currentIndex_2() const { return ___currentIndex_2; }
	inline int32_t* get_address_of_currentIndex_2() { return &___currentIndex_2; }
	inline void set_currentIndex_2(int32_t value)
	{
		___currentIndex_2 = value;
	}

	inline static int32_t get_offset_of_currentObject_3() { return static_cast<int32_t>(offsetof(StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846, ___currentObject_3)); }
	inline RuntimeObject * get_currentObject_3() const { return ___currentObject_3; }
	inline RuntimeObject ** get_address_of_currentObject_3() { return &___currentObject_3; }
	inline void set_currentObject_3(RuntimeObject * value)
	{
		___currentObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentObject_3), (void*)value);
	}

	inline static int32_t get_offset_of_currentSize_4() { return static_cast<int32_t>(offsetof(StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846, ___currentSize_4)); }
	inline int32_t get_currentSize_4() const { return ___currentSize_4; }
	inline int32_t* get_address_of_currentSize_4() { return &___currentSize_4; }
	inline void set_currentSize_4(int32_t value)
	{
		___currentSize_4 = value;
	}
};


// Firebase.Unity.Editor.FirebaseEditorExtensions
struct  FirebaseEditorExtensions_tFE24FFC822256BE5A248D99060021A954C2BFC30  : public RuntimeObject
{
public:

public:
};


// Firebase.VersionInfo
struct  VersionInfo_tFC70C04F220E39F00A3DF993A7294B2AD831392B  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct  Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t206ED031D7C280A41D6F20D5DF9FF422E8AD14FF* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t386C2205B36EBDC4D54FC2DFF5AE34FAA52B739E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1AEB5054684203AAAA668DEC763289A67A488850 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___entries_1)); }
	inline EntryU5BU5D_t206ED031D7C280A41D6F20D5DF9FF422E8AD14FF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t206ED031D7C280A41D6F20D5DF9FF422E8AD14FF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t206ED031D7C280A41D6F20D5DF9FF422E8AD14FF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___keys_7)); }
	inline KeyCollection_t386C2205B36EBDC4D54FC2DFF5AE34FAA52B739E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t386C2205B36EBDC4D54FC2DFF5AE34FAA52B739E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t386C2205B36EBDC4D54FC2DFF5AE34FAA52B739E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ___values_8)); }
	inline ValueCollection_t1AEB5054684203AAAA668DEC763289A67A488850 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1AEB5054684203AAAA668DEC763289A67A488850 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1AEB5054684203AAAA668DEC763289A67A488850 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct  Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5AC464FC30A20C87B82B06E4026719C8D5F870FE* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8A40AF6292576BAEAE6C31443DCFB8AE4A82F9EB * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB4971112B8CC7BD305011D431DDDFADB3518A157 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___entries_1)); }
	inline EntryU5BU5D_t5AC464FC30A20C87B82B06E4026719C8D5F870FE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5AC464FC30A20C87B82B06E4026719C8D5F870FE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5AC464FC30A20C87B82B06E4026719C8D5F870FE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___keys_7)); }
	inline KeyCollection_t8A40AF6292576BAEAE6C31443DCFB8AE4A82F9EB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8A40AF6292576BAEAE6C31443DCFB8AE4A82F9EB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8A40AF6292576BAEAE6C31443DCFB8AE4A82F9EB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ___values_8)); }
	inline ValueCollection_tB4971112B8CC7BD305011D431DDDFADB3518A157 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB4971112B8CC7BD305011D431DDDFADB3518A157 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB4971112B8CC7BD305011D431DDDFADB3518A157 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
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

// Firebase.MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_tF7B8E107CCA490884BAD9F808FA46A4943C293AA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Threading.Thread
struct  Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// Firebase.DependencyStatus
struct  DependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13 
{
public:
	// System.Int32 Firebase.DependencyStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.FutureStatus
struct  FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215 
{
public:
	// System.Int32 Firebase.FutureStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.InitResult
struct  InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194 
{
public:
	// System.Int32 Firebase.InitResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.LogLevel
struct  LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200 
{
public:
	// System.Int32 Firebase.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.Platform.PlatformLogLevel
struct  PlatformLogLevel_tBEEE87BEEE806C09EDE048024FD099F211A62E14 
{
public:
	// System.Int32 Firebase.Platform.PlatformLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlatformLogLevel_tBEEE87BEEE806C09EDE048024FD099F211A62E14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly_ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
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


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
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


// System.Uri_Flags
struct  Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct  UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct  UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.WeakReference
struct  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___gcHandle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_1 = value;
	}
};


// Firebase.AppOptionsInternal
struct  AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.AppOptionsInternal::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.AppOptionsInternal::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.FirebaseApp
struct  FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * ___appPlatform_15;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___AppDisposed_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}

	inline static int32_t get_offset_of_appPlatform_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___appPlatform_15)); }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * get_appPlatform_15() const { return ___appPlatform_15; }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 ** get_address_of_appPlatform_15() { return &___appPlatform_15; }
	inline void set_appPlatform_15(FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * value)
	{
		___appPlatform_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appPlatform_15), (void*)value);
	}
};

struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_13;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_14;
	// Firebase.FirebaseApp_CreateDelegate Firebase.FirebaseApp::<>f__amU24cache0
	CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * ___U3CU3Ef__amU24cache0_16;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp::<>f__amU24cache1
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3Ef__amU24cache1_17;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<>f__amU24cache2
	Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * ___U3CU3Ef__amU24cache2_18;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache3
	Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * ___U3CU3Ef__amU24cache3_19;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache4
	Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * ___U3CU3Ef__amU24cache4_20;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThread_13)); }
	inline int32_t get_CheckDependenciesThread_13() const { return ___CheckDependenciesThread_13; }
	inline int32_t* get_address_of_CheckDependenciesThread_13() { return &___CheckDependenciesThread_13; }
	inline void set_CheckDependenciesThread_13(int32_t value)
	{
		___CheckDependenciesThread_13 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThreadLock_14)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_14() const { return ___CheckDependenciesThreadLock_14; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_14() { return &___CheckDependenciesThreadLock_14; }
	inline void set_CheckDependenciesThreadLock_14(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_16() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache0_16)); }
	inline CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * get_U3CU3Ef__amU24cache0_16() const { return ___U3CU3Ef__amU24cache0_16; }
	inline CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 ** get_address_of_U3CU3Ef__amU24cache0_16() { return &___U3CU3Ef__amU24cache0_16; }
	inline void set_U3CU3Ef__amU24cache0_16(CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * value)
	{
		___U3CU3Ef__amU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_17() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache1_17)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3Ef__amU24cache1_17() const { return ___U3CU3Ef__amU24cache1_17; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3Ef__amU24cache1_17() { return &___U3CU3Ef__amU24cache1_17; }
	inline void set_U3CU3Ef__amU24cache1_17(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3Ef__amU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_18() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache2_18)); }
	inline Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * get_U3CU3Ef__amU24cache2_18() const { return ___U3CU3Ef__amU24cache2_18; }
	inline Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC ** get_address_of_U3CU3Ef__amU24cache2_18() { return &___U3CU3Ef__amU24cache2_18; }
	inline void set_U3CU3Ef__amU24cache2_18(Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * value)
	{
		___U3CU3Ef__amU24cache2_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache2_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_19() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache3_19)); }
	inline Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * get_U3CU3Ef__amU24cache3_19() const { return ___U3CU3Ef__amU24cache3_19; }
	inline Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 ** get_address_of_U3CU3Ef__amU24cache3_19() { return &___U3CU3Ef__amU24cache3_19; }
	inline void set_U3CU3Ef__amU24cache3_19(Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * value)
	{
		___U3CU3Ef__amU24cache3_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache3_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_20() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache4_20)); }
	inline Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * get_U3CU3Ef__amU24cache4_20() const { return ___U3CU3Ef__amU24cache4_20; }
	inline Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 ** get_address_of_U3CU3Ef__amU24cache4_20() { return &___U3CU3Ef__amU24cache4_20; }
	inline void set_U3CU3Ef__amU24cache4_20(Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * value)
	{
		___U3CU3Ef__amU24cache4_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache4_20), (void*)value);
	}
};


// Firebase.FirebaseException
struct  FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47  : public Exception_t
{
public:
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47, ___U3CErrorCodeU3Ek__BackingField_17)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_17() const { return ___U3CErrorCodeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_17() { return &___U3CErrorCodeU3Ek__BackingField_17; }
	inline void set_U3CErrorCodeU3Ek__BackingField_17(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_17 = value;
	}
};


// Firebase.FutureBase
struct  FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.InitializationException
struct  InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75  : public Exception_t
{
public:
	// Firebase.InitResult Firebase.InitializationException::<InitResult>k__BackingField
	int32_t ___U3CInitResultU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CInitResultU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75, ___U3CInitResultU3Ek__BackingField_17)); }
	inline int32_t get_U3CInitResultU3Ek__BackingField_17() const { return ___U3CInitResultU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CInitResultU3Ek__BackingField_17() { return &___U3CInitResultU3Ek__BackingField_17; }
	inline void set_U3CInitResultU3Ek__BackingField_17(int32_t value)
	{
		___U3CInitResultU3Ek__BackingField_17 = value;
	}
};


// Firebase.StringStringMap
struct  StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.StringStringMap::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.StringStringMap::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// System.ApplicationException
struct  ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
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


// System.Uri
struct  Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate
struct  ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate
struct  ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate
struct  SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.FirebaseApp_CreateDelegate
struct  CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.LogUtil_LogMessageDelegate
struct  LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArithmeticException
struct  ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.EventHandler
struct  EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// System.FormatException
struct  FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Func`1<System.Boolean>
struct  Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.NullReferenceException
struct  NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OutOfMemoryException
struct  OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.TypeLoadException
struct  TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_18), (void*)value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageArg_19), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DivideByZeroException
struct  DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};


// System.DllNotFoundException
struct  DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596  : public TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7
{
public:

public:
};


// System.IO.FileNotFoundException
struct  FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:
	// System.String System.IO.FileNotFoundException::_fileName
	String_t* ____fileName_18;
	// System.String System.IO.FileNotFoundException::_fusionLog
	String_t* ____fusionLog_19;

public:
	inline static int32_t get_offset_of__fileName_18() { return static_cast<int32_t>(offsetof(FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8, ____fileName_18)); }
	inline String_t* get__fileName_18() const { return ____fileName_18; }
	inline String_t** get_address_of__fileName_18() { return &____fileName_18; }
	inline void set__fileName_18(String_t* value)
	{
		____fileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__fusionLog_19() { return static_cast<int32_t>(offsetof(FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8, ____fusionLog_19)); }
	inline String_t* get__fusionLog_19() const { return ____fusionLog_19; }
	inline String_t** get_address_of__fusionLog_19() { return &____fusionLog_19; }
	inline void set__fusionLog_19(String_t* value)
	{
		____fusionLog_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fusionLog_19), (void*)value);
	}
};


// System.OverflowException
struct  OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};


// System.UriFormatException
struct  UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D  : public FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Firebase.FirebaseApp_EnableModuleParams[]
struct EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * m_Items[1];

public:
	inline EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * value)
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  m_Items[1];

public:
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3FA1B1E4199CC8659D8E27B7876EA63DD22C8A97_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC74BFF830339D88298A79E07C29B93A8143F0A40_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5FB51733E8B0DE7758129A38CD12A34D8A3611AA_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mC002B8F8D7AB9065246821904ABD04E840591852_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m31E0A469AED107558069DD92CA2D04BE40DB26CB_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___f0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Uri Firebase.AppOptionsInternal::get_DatabaseUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * AppOptionsInternal_get_DatabaseUrl_mA1508C095A0862C3DC8C1A6C728106653B0EDE60 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_DatabaseUrl(System.Uri)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_DatabaseUrl_mB06D163A37683E7B36BA8268035ABEB005A87FB9_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___value0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::get_AppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_AppId_mD0FF298D8468A9664BF58EBE95CDCA487CAE20AA (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_AppId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_AppId_m4B5BA1B974CB6388A1ECDE5170945EA7D0202501_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::get_ApiKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_ApiKey_m7E4EEEE1100FAE72251593632619092B7E675090 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_ApiKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_ApiKey_m42DFAA546F61385DBDAD31B93E12A3A23B7FC468_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::get_MessageSenderId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_MessageSenderId_mC448D7030D9EC1FAA418F608C81ADC4ADB999946 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_MessageSenderId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_MessageSenderId_m778712C8ED6C08E1E0E3FCBC23BE1CFAD0336835_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::get_StorageBucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_StorageBucket_mB90A0A959007D89009EDB6A11CF27F1E0A4357C3 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_StorageBucket(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_StorageBucket_mE44829D9949FFF08FDD4ED72F8D16259A9809373_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::get_ProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_ProjectId_m3FFDDF11A39C948719985A512855D7C9740143CB (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_ProjectId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_ProjectId_m56FE1094D175376A26E44F102A482B772CAADDA4_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::get_PackageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_PackageName_m091E48C6CA71A5662C6DFC640F32FA7AA810D248 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::set_PackageName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_PackageName_mE97F6696842F899D803C0B0B02A557F6C47B01C6_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void Firebase.AppOptionsInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptionsInternal_Dispose_m923FE7958D4317ED8825DBAD4254B533825AEAA1 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_delete_AppOptionsInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_delete_AppOptionsInternal_mFE72A08CA8C69B69E301D0A1D2247E2D36559994 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Firebase.AppOptionsInternal::GetDatabaseUrlInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_GetDatabaseUrlInternal_m000B201A09C953887FC4428FCFDC097E22451C6B (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method);
// System.Uri Firebase.FirebaseApp::UrlStringToUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * FirebaseApp_UrlStringToUri_mA6A34CF111210B3561C2450F87640A23BC9BCA51 (String_t* ___urlString0, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal_m077E3CF5460258D80A6228EC0E2DE06891889337 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD (const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_AppId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_AppId_get_m0CA0B75BCD22C0B03722ED12289993242ECE447F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_ApiKey_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_ApiKey_get_m976600637E68A5A6304904142D08D67FC0F6A971 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_MessageSenderId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_MessageSenderId_get_m54741C1B5E0272982A3AF6A9E937A2262054FF8E (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_StorageBucket_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_StorageBucket_get_m446532889980F04EFFDB613515B43DBF907797D8 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_ProjectId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_ProjectId_get_m0AA2B920BC2C6439CFA52D1043106B3439A9D611 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_PackageName_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_PackageName_get_m7EA8F7B861D1A95AB389D9CE25EF692FC6A7A482 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_PollCallbacks_mF25D3634B38B19C7409BCC9A50B3482979F741EA (const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_AppEnableLogCallback_m10954DADA1EE183C4F6B9CECC784C5395CE441FD (bool ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_SetEnabledAllAppCallbacks_m5F66E2EA7BCF9B05EE87FEEDDAD08E5F8C75622C (bool ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_SetEnabledAppCallbackByName_m38695B5F0435658A754FFCF6D32C0EB805414864 (String_t* ___jarg10, bool ___jarg21, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE::Firebase_App_GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_Firebase_App_GetEnabledAppCallbackByName_m39176480A7F163BA61D22646908BB95D4CD6096E (String_t* ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_SetLogFunction(Firebase.LogUtil/LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_SetLogFunction_m293E0D5D4A2685DBF99526F3D6D59FD39DC418F4 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m06C48C4611CDA458CA1AF651ED06BF7FF7EDF536 (SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 * __this, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m9F305BAB06F185B49FD5AC05A407928C69D672F6 (SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.PlatformInformation::get_IsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsAndroid_mF6B9AE75F5E1D6A48F5E1754A692FDC167ADE628 (const RuntimeMethod* method);
// System.Boolean Firebase.Platform.PlatformInformation::get_IsIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsIOS_m314080A5FF94D29E352F4E3FCA4870CBB67E3840 (const RuntimeMethod* method);
// System.String Firebase.ErrorMessages::get_DependencyNotFoundErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DependencyNotFoundErrorMessage_m93703910D97FC22ECA3B89EEF8681C6F29989106 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::.ctor()
inline void Dictionary_2__ctor_mFF10F06C038C842A2C0172778461CFE1F3D2F6CC (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::.ctor()
inline void Dictionary_2__ctor_m3C25C443F1B1748269C9C20D1EACADAFE590E1A9 (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 *, const RuntimeMethod*))Dictionary_2__ctor_m3FA1B1E4199CC8659D8E27B7876EA63DD22C8A97_gshared)(__this, method);
}
// System.Void Firebase.LogUtil::InitializeLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_InitializeLogging_m05046FDF1759F0A851931F7FCF743FAA24BDB434 (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Dispose_mD97452CFB97FC00105EB0369582537ED1C457A93 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::RemoveReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RemoveReference_mF1E15EE01A41D7674FAFDAB777CF637071F907E0 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.String Firebase.ErrorMessages::get_DllNotFoundExceptionErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DllNotFoundExceptionErrorMessage_m493D1E37E274C2D633EB65991F5B26102E3F6595 (const RuntimeMethod* method);
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14 (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___result0, String_t* ___message1, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C (const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_GetInstance_mED18364B5B6A567DEDDBFE38F5CE174FF8171196 (String_t* ___name0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_Create_m9A391D6EC41EE45EAA3CCAE368F182EAD69791ED (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::ThrowIfCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mABD3D175BBCE88050893B6E15BADA46BFE7375D1 (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * __this, String_t* ___key0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D *, String_t*, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::Remove(!0)
inline bool Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115 (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FirebaseApp/CreateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateDelegate__ctor_m9B61AF9F4EFF9CCA9FC10B8BDB5E8AD7130E4DE1 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateAndTrack(Firebase.FirebaseApp/CreateDelegate,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * ___createDelegate0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___existingProxy1, const RuntimeMethod* method);
// System.Int32 Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_GetLogLevelInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_Firebase_App_FirebaseApp_GetLogLevelInternal_m64D61C2F951379C639BE99996C5B8DDA0CF7ABCE (const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8_inline (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE35649D2E86CEDB104C0489DB836619ECE559B78 (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * __this, String_t* ___key0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D *, String_t*, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m11C0967C76F78C48B5BCBECEC12AE868FB44441D (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * __this, intptr_t ___key0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 *, intptr_t, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *, const RuntimeMethod*))Dictionary_2_set_Item_mC74BFF830339D88298A79E07C29B93A8143F0A40_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>::get_Count()
inline int32_t Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::Remove(!0)
inline bool Dictionary_2_Remove_m5D4563C331A3FF5094A2A9B3A8EA500DD30F9D28 (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * __this, intptr_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m5FB51733E8B0DE7758129A38CD12A34D8A3611AA_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FirebaseApp::ReleaseReferenceInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ReleaseReferenceInternal_m251EC6B33F516335E844BC8CBC7531205D41C934 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::OnAllAppsDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_OnAllAppsDestroyed_m6D2ADF3AFBC105388CB7D63FA431CF5BAF9FA94D (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/EnableModuleParams::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2 (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___csharp0, String_t* ___cpp1, bool ___always2, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2 (bool ___arg00, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp/EnableModuleParams::get_CSharpClassName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CSharpClassName_m5C21BC47A020FE24984E1A282267CE62CF09080B_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp/EnableModuleParams::get_CppModuleName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CppModuleName_mE57521DAC3F8972C81AFBC72DB70FE79A9F946B3_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtil::GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtil_GetEnabledAppCallbackByName_m4E31F50E6B3C90FF204A4BC57293B0A1C5F81513 (String_t* ___arg00, const RuntimeMethod* method);
// System.Boolean Firebase.FirebaseApp/EnableModuleParams::get_AlwaysEnable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnableModuleParams_get_AlwaysEnable_m76B3B18100019E68E79EA0A0B320B1EAE0AB8260_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAppCallbackByName_m59AF9169D18540D471ECB1A999A5F7B67D0B63BC (String_t* ___arg00, bool ___arg11, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * Assembly_Load_m3B24B1EFB2FF6E40186586C3BE135D335BBF3A0A (String_t* ___assemblyString0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m56641135A502F6D70F771A69157A0D674EB99DD3 (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___result0, String_t* ___message1, Exception_t * ___inner2, const RuntimeMethod* method);
// Firebase.Platform.FirebaseAppUtils Firebase.Platform.FirebaseAppUtils::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * FirebaseAppUtils_get_Instance_m79B79F13BD6329A947B640DB886DC398439A90BF_inline (const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::Create(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Create_m1B30952F7479043520E3D7023F331D038F6B2125 (RuntimeObject* ___appUtils0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::InitializeAppUtilCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064 (const RuntimeMethod* method);
// System.String Firebase.Platform.PlatformInformation::get_DefaultConfigLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_DefaultConfigLocation_mCC41CAB77CCA5F822E67C9B8D86478606777A06C (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AppSetDefaultConfigPath_m55D859EEC14CA1FFEF3DC3422F5CE8C1328E097F (String_t* ___path0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp/CreateDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * CreateDelegate_Invoke_m9FC551133A4F9301FB4F107B90F7C98A66F95BE9 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___obj0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m897CB1E1E85B5420551BA39A79F33E380D02EEEA (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * __this, intptr_t ___key0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 *, intptr_t, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D **, const RuntimeMethod*))Dictionary_2_TryGetValue_mC002B8F8D7AB9065246821904ABD04E840591852_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>::get_Count()
inline int32_t Dictionary_2_get_Count_m48374F40728F7E5FC8EAA23E458292E5475B4EB3 (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 *, const RuntimeMethod*))Dictionary_2_get_Count_m31E0A469AED107558069DD92CA2D04BE40DB26CB_gshared)(__this, method);
}
// System.String Firebase.Platform.PlatformInformation::get_RuntimeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeName_m7DC9B4B120826252A1359FBB00EEA9CCA0B9FE81 (const RuntimeMethod* method);
// System.String Firebase.VersionInfo::get_SdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VersionInfo_get_SdkVersion_m98A33172434D6EA468C4FF32AC941045D88DCF8B (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::RegisterLibraryInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164 (String_t* ___library0, String_t* ___version1, const RuntimeMethod* method);
// System.String Firebase.Platform.PlatformInformation::get_RuntimeVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeVersion_m449590D737405693CC7C1AF5878FBAED5B49852F (const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_NameInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::AddReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AddReference_m1B148D579E5DBB9E6608813E714769757F33142B (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.Boolean Firebase.FirebaseApp::IsCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_IsCheckDependenciesRunning_m35488E6B310C9CF1BC00E4464028166723C3F078 (const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// !!0 Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<!!0>)
inline bool FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___f0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_gshared)(___f0, method);
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfNull_m408BCFBB4ED87F4FF412F374897F083E87897315 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// Firebase.AppOptionsInternal Firebase.FirebaseApp::options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * FirebaseApp_options_m246546AF14ED87EA3EDB8095EA99C5AA2396E8B4 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.Void Firebase.AppOptions::.ctor(Firebase.AppOptionsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions__ctor_m4B51654E54F4784FA7A21269288E4DB9A11DDEC4 (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * ___other0, const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_options(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_FirebaseApp_options_m2860C63F3B2A12C2358DB5B674B07CAE5EDE4E5D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppOptionsInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptionsInternal__ctor_mBA3D4999FA58E5D0E10F920846372ACD71CDEDD0 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_NameInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FirebaseApp_NameInternal_get_m3FCAAB68F8E03CE3A3079B717D5C596D4561310F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_CreateInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_FirebaseApp_CreateInternal__SWIG_0_m880301BF18F95C1602A9C5D802DDAE626D45CAD2 (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__ctor_mB94B4439B6474A9B3420A388F4C847153BB7DA2B (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FirebaseApp_ReleaseReferenceInternal_m97C1DE32BCE04F1AC59A117C6ED30E138E424D26 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_RegisterLibraryInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FirebaseApp_RegisterLibraryInternal_mE23204CA5E247273D5F52CBB42F8D708C27C1DC9 (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FirebaseApp_AppSetDefaultConfigPath_mD2E944BB42CC3E9F6F443F3D6DC65CF9E4F639F3 (String_t* ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_DefaultName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FirebaseApp_DefaultName_get_m13F1175243A022F0686B765261DF2FFC68B1822F (const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_CreateInternal_m7C9DA4F992AD0B435BE57A04D5BE3537AB2A0233 (const RuntimeMethod* method);
// System.Boolean Firebase.FirebaseApp::InitializeCrashlyticsIfPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B (const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___closureToExecute0, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_PollCallbacks_m75E222C3BCE3563C9C27265D3AE011E3E342E527 (const RuntimeMethod* method);
// Firebase.LogLevel Firebase.FirebaseApp::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_get_LogLevel_mF5210CA8F87660D4B3747792C00C98579142CAAF (const RuntimeMethod* method);
// Firebase.Platform.PlatformLogLevel Firebase.LogUtil::ConvertLogLevel(Firebase.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogUtil_ConvertLogLevel_mD765D2120AA5F1681CFFCB822C189152704565FC (int32_t ___logLevel0, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseAppUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils__ctor_m69CA1CBCD58CB3128DF35E9560A3D1D38005845F (FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::set_ErrorCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseException_set_ErrorCode_mE216C4C0EBAACC7ADA04ED328DEC1474680F9B5A_inline (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_delete_FutureBase(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_delete_FutureBase_mC0371BBEAC15767EEC2E7FEAFB5261B2D7273129 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Int32 Firebase.AppUtilPINVOKE::Firebase_App_FutureBase_status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_Firebase_App_FutureBase_status_m69559C80656F21136A45099E3C62CBC74C2A1BCD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Int32 Firebase.AppUtilPINVOKE::Firebase_App_FutureBase_error(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_Firebase_App_FutureBase_error_mAA54B287095DA9B85322B3CE60E9CAF44D0B9048 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FutureBase_error_message(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FutureBase_error_message_m070740D938581C3EA594AD8BA0C3B60016F8D442 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void Firebase.InitializationException::set_InitResult(Firebase.InitResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitializationException_set_InitResult_mD6E68B41830F64CB54B3BF7FFE915263D8AD8E34_inline (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessageFromCallback(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil__ctor_mE6F41CDC7EFF92D76E3D07B5F8350BF7D5A4983D (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * __this, const RuntimeMethod* method);
// System.Void Firebase.LogUtil/LogMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate__ctor_mEBA3FFB53CCE522DBB1B5571A5623A649E6643F0 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::SetLogFunction(Firebase.LogUtil/LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * ___arg00, const RuntimeMethod* method);
// System.Void Firebase.AppUtil::AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_AppEnableLogCallback_m01A441841A004A6048FCFC012F083BFAA3581C66 (bool ___arg00, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mA65FB8012E13AA044A6FF15E9792D2755AF84B86 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.FirebaseLogger::get_CanRedirectNativeLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_get_CanRedirectNativeLogs_mA3ED5F874C3D698FB2D1656B3B4E1EAFE257BBF4 (const RuntimeMethod* method);
// System.Void Firebase.LogUtil::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Dispose_m3E431D1105B6EBDC3183FA2B55AA7608607BBC6D (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_new_StringStringMap__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_new_StringStringMap__SWIG_0_m86FE2CFAD5F22EA239913F770E943D1A2AAA4326 (const RuntimeMethod* method);
// System.Void Firebase.StringStringMap::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap__ctor_mB3137F09FFB1EC3F5621EA75DBBEF82F9487D366 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_delete_StringStringMap(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_delete_StringStringMap_mE6FF26B91AFEF51D02907B55961C4A8045C3E0BB (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.StringStringMap::getitem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringStringMap_getitem_m9E38CEC82B11AC188D75FA0BBB8A8751AC30D6D4 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Void Firebase.StringStringMap::setitem(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_setitem_m17A4FFDF71A27F385C53EC0C18EC02BE031CEE0F (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, String_t* ___x1, const RuntimeMethod* method);
// System.Boolean Firebase.StringStringMap::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_ContainsKey_mFF9F5FC22F5DF7900847009A2587F31967F11CCF (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.String Firebase.StringStringMap::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringStringMap_get_Item_mB384423BD033B98EE3457212BE65092712C56789 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.UInt32 Firebase.StringStringMap::size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t StringStringMap_size_mBB463BF4F9C6625F91343E1E8F38418A790F1D00 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 Firebase.StringStringMap::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringStringMap_get_Count_m907D4DD769A90CAA0683591119FDC3728EEA5BB3 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.StringStringMap::create_iterator_begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StringStringMap_create_iterator_begin_m3F118062973941F86B02039418B2A2E5475F4377 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method);
// System.String Firebase.StringStringMap::get_next_key(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringStringMap_get_next_key_m5748FA89B2C25838202E9E28D1DFB4FB8C33CE73 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, intptr_t ___swigiterator0, const RuntimeMethod* method);
// System.Void Firebase.StringStringMap::destroy_iterator(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_destroy_iterator_m345F0B0BBC506B42F149223404B1A9F205232F87 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, intptr_t ___swigiterator0, const RuntimeMethod* method);
// Firebase.StringStringMap/StringStringMapEnumerator Firebase.StringStringMap::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * StringStringMap_GetEnumerator_m55C288A948D94A096AD2FA8D042B8B816E6A6C9E (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<System.String,System.String> Firebase.StringStringMap/StringStringMapEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  StringStringMapEnumerator_get_Current_m76DE586A735687200DC7ACF803FEF75527302F06 (StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean Firebase.StringStringMap/StringStringMapEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMapEnumerator_MoveNext_m22BD0722C730E02430014E65174344AA499F336F (StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Void Firebase.StringStringMap::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Add_m9D2175007BBA9E8488671E9C13A08F247D5C2AED (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, String_t* ___val1, const RuntimeMethod* method);
// System.Boolean Firebase.StringStringMap::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_Contains_mE32677A31CE147FDD041B47D9D48914312DB8AF4 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___item0, const RuntimeMethod* method);
// System.Boolean Firebase.StringStringMap::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_Remove_m3E16E65DA11460219114402300F67FA76D87B408 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<System.String> Firebase.StringStringMap::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStringMap_get_Keys_m913897400DEF518DFD7D6E0CCEB1FE2026A2B2D3 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.String>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m0119BCDA2BA84CD54D128DD6D692F4CEF57F602F (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, String_t*, String_t*, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mD28884941182C5B7118CFBA3D55DB9CEA8797455 (RuntimeArray * __this, RuntimeObject * ___value0, int32_t ___index1, const RuntimeMethod* method);
// System.Void Firebase.StringStringMap/StringStringMapEnumerator::.ctor(Firebase.StringStringMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMapEnumerator__ctor_m765FC216E9A67EA91E8D360C32ED59B5EF59A43A (StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * __this, StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * ___collection0, const RuntimeMethod* method);
// System.UInt32 Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_size(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AppUtilPINVOKE_Firebase_App_StringStringMap_size_mD20871B9533E4CF7FD79FF3C67ED7ECA09259481 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_Clear(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_StringStringMap_Clear_m76C59B1A8B83BBBA5FFE4943C4DD96B735A3637B (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_getitem(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_StringStringMap_getitem_mAC201F586854608D53D0B2BCF43DBAC036D016A9 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_setitem(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_StringStringMap_setitem_mD798D2464A2E7926F427D191CD45D382E2A91865 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_ContainsKey(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_Firebase_App_StringStringMap_ContainsKey_mFFC2203AA62CE2FCD679C281A0EFF037B9D2676F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_Add(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_StringStringMap_Add_m1E7A1505A3BF61D7D21F291888C94D66689ED6A6 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_Remove(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_Firebase_App_StringStringMap_Remove_m0DEC2E4F4B23CFE922D9FD242FE49113C66948E2 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_create_iterator_begin(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_StringStringMap_create_iterator_begin_mFC6E8519A20F8F97DB611433F71449086C732F29 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_get_next_key(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_StringStringMap_get_next_key_m7539283E7C89880066AD59BC20EE0D825611D9ED (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_destroy_iterator(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_StringStringMap_destroy_iterator_mC5E9F64192EEC4D6B1255AECB433FC9884131CC0 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m9B64B0E9472C1DDAA639843324FD57FBCCE07E08 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AppUtil_m73FDAC85B33251A5207C88493A40F2F24D634676 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___applicationDelegate0, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___arithmeticDelegate1, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___divideByZeroDelegate2, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___indexOutOfRangeDelegate3, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___invalidCastDelegate4, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___invalidOperationDelegate5, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___ioDelegate6, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___nullReferenceDelegate7, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___outOfMemoryDelegate8, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___overflowDelegate9, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AppUtil_m8F9C20ECB599940EF0CFCFF5598BD3C3222E2B37 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentDelegate0, ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861 (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17 (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918 (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0 (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14 (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94 (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80 (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String Firebase.AppUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mED39AF7AB0675F58D7C5E732BB50C419BF321299 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.AppUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AppUtil(Firebase.AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AppUtil_m72D311A8F2D513C5602B6F4E7936C2910DBECA15 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * ___stringDelegate0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_CSharpClassName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_CSharpClassName_mB1413BCF93E8A3B658798ED556E586C47981F018_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_CppModuleName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_CppModuleName_m780B77AD33765B83D0675C02876BB379B9EFCCEB_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp/EnableModuleParams::set_AlwaysEnable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_AlwaysEnable_m38C379905DD5810F629E35AD34DD0F677990ACFE_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, bool ___value0, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_delete_FutureBase(void*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_FutureBase_status(void*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_FutureBase_error(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_FutureBase_error_message(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_new_StringStringMap__SWIG_0();
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL Firebase_App_StringStringMap_size(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_StringStringMap_Clear(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_StringStringMap_getitem(void*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_StringStringMap_setitem(void*, char*, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_StringStringMap_ContainsKey(void*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_StringStringMap_Add(void*, char*, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_StringStringMap_Remove(void*, char*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_StringStringMap_create_iterator_begin(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_StringStringMap_get_next_key(void*, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_StringStringMap_destroy_iterator(void*, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_delete_StringStringMap(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_AppId_get(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_ApiKey_get(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_MessageSenderId_get(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_StorageBucket_get(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_ProjectId_get(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_AppOptionsInternal_PackageName_get(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_delete_AppOptionsInternal(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_FirebaseApp_options(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_FirebaseApp_NameInternal_get(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_App_FirebaseApp_CreateInternal__SWIG_0();
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_FirebaseApp_ReleaseReferenceInternal(void*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_FirebaseApp_GetLogLevelInternal();
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_FirebaseApp_RegisterLibraryInternal(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_FirebaseApp_AppSetDefaultConfigPath(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_App_FirebaseApp_DefaultName_get();
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_PollCallbacks();
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_AppEnableLogCallback(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_SetEnabledAllAppCallbacks(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_SetEnabledAppCallbackByName(char*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_App_GetEnabledAppCallbackByName(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_App_SetLogFunction(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_AppUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_AppUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_AppUtil(Il2CppMethodPointer);
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
// System.Void Firebase.AppOptions::.ctor(Firebase.AppOptionsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions__ctor_m4B51654E54F4784FA7A21269288E4DB9A11DDEC4 (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * ___other0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * L_0 = ___other0;
		NullCheck(L_0);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = AppOptionsInternal_get_DatabaseUrl_mA1508C095A0862C3DC8C1A6C728106653B0EDE60(L_0, /*hidden argument*/NULL);
		AppOptions_set_DatabaseUrl_mB06D163A37683E7B36BA8268035ABEB005A87FB9_inline(__this, L_1, /*hidden argument*/NULL);
		AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = AppOptionsInternal_get_AppId_mD0FF298D8468A9664BF58EBE95CDCA487CAE20AA(L_2, /*hidden argument*/NULL);
		AppOptions_set_AppId_m4B5BA1B974CB6388A1ECDE5170945EA7D0202501_inline(__this, L_3, /*hidden argument*/NULL);
		AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = AppOptionsInternal_get_ApiKey_m7E4EEEE1100FAE72251593632619092B7E675090(L_4, /*hidden argument*/NULL);
		AppOptions_set_ApiKey_m42DFAA546F61385DBDAD31B93E12A3A23B7FC468_inline(__this, L_5, /*hidden argument*/NULL);
		AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * L_6 = ___other0;
		NullCheck(L_6);
		String_t* L_7 = AppOptionsInternal_get_MessageSenderId_mC448D7030D9EC1FAA418F608C81ADC4ADB999946(L_6, /*hidden argument*/NULL);
		AppOptions_set_MessageSenderId_m778712C8ED6C08E1E0E3FCBC23BE1CFAD0336835_inline(__this, L_7, /*hidden argument*/NULL);
		AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * L_8 = ___other0;
		NullCheck(L_8);
		String_t* L_9 = AppOptionsInternal_get_StorageBucket_mB90A0A959007D89009EDB6A11CF27F1E0A4357C3(L_8, /*hidden argument*/NULL);
		AppOptions_set_StorageBucket_mE44829D9949FFF08FDD4ED72F8D16259A9809373_inline(__this, L_9, /*hidden argument*/NULL);
		AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * L_10 = ___other0;
		NullCheck(L_10);
		String_t* L_11 = AppOptionsInternal_get_ProjectId_m3FFDDF11A39C948719985A512855D7C9740143CB(L_10, /*hidden argument*/NULL);
		AppOptions_set_ProjectId_m56FE1094D175376A26E44F102A482B772CAADDA4_inline(__this, L_11, /*hidden argument*/NULL);
		AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * L_12 = ___other0;
		NullCheck(L_12);
		String_t* L_13 = AppOptionsInternal_get_PackageName_m091E48C6CA71A5662C6DFC640F32FA7AA810D248(L_12, /*hidden argument*/NULL);
		AppOptions_set_PackageName_mE97F6696842F899D803C0B0B02A557F6C47B01C6_inline(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppOptions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_Dispose_m50CC70BB62373D28C47303E1F3AE451E483F2D99 (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Firebase.AppOptions::set_DatabaseUrl(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_DatabaseUrl_mB06D163A37683E7B36BA8268035ABEB005A87FB9 (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___value0, const RuntimeMethod* method)
{
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___value0;
		__this->set_U3CDatabaseUrlU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Firebase.AppOptions::set_AppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_AppId_m4B5BA1B974CB6388A1ECDE5170945EA7D0202501 (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Firebase.AppOptions::set_ApiKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_ApiKey_m42DFAA546F61385DBDAD31B93E12A3A23B7FC468 (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CApiKeyU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Firebase.AppOptions::set_MessageSenderId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_MessageSenderId_m778712C8ED6C08E1E0E3FCBC23BE1CFAD0336835 (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageSenderIdU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Firebase.AppOptions::get_StorageBucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptions_get_StorageBucket_m63489CFD73EA950BCF40D828F23658740C8B35FB (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CStorageBucketU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Firebase.AppOptions::set_StorageBucket(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_StorageBucket_mE44829D9949FFF08FDD4ED72F8D16259A9809373 (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CStorageBucketU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Firebase.AppOptions::set_ProjectId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_ProjectId_m56FE1094D175376A26E44F102A482B772CAADDA4 (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CProjectIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Firebase.AppOptions::set_PackageName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptions_set_PackageName_mE97F6696842F899D803C0B0B02A557F6C47B01C6 (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPackageNameU3Ek__BackingField_6(L_0);
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
// System.Void Firebase.AppOptionsInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptionsInternal__ctor_mBA3D4999FA58E5D0E10F920846372ACD71CDEDD0 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.AppOptionsInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptionsInternal_Finalize_m98E79714FD18F1FBD487CE442C7CAFCECFA572A5 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		AppOptionsInternal_Dispose_m923FE7958D4317ED8825DBAD4254B533825AEAA1(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
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
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.AppOptionsInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOptionsInternal_Dispose_m923FE7958D4317ED8825DBAD4254B533825AEAA1 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_Dispose_m923FE7958D4317ED8825DBAD4254B533825AEAA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
			AppUtilPINVOKE_Firebase_App_delete_AppOptionsInternal_mFE72A08CA8C69B69E301D0A1D2247E2D36559994(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		return;
	}
}
// System.Uri Firebase.AppOptionsInternal::get_DatabaseUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * AppOptionsInternal_get_DatabaseUrl_mA1508C095A0862C3DC8C1A6C728106653B0EDE60 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_DatabaseUrl_mA1508C095A0862C3DC8C1A6C728106653B0EDE60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = AppOptionsInternal_GetDatabaseUrlInternal_m000B201A09C953887FC4428FCFDC097E22451C6B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = FirebaseApp_UrlStringToUri_mA6A34CF111210B3561C2450F87640A23BC9BCA51(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Firebase.AppOptionsInternal::GetDatabaseUrlInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_GetDatabaseUrlInternal_m000B201A09C953887FC4428FCFDC097E22451C6B (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_GetDatabaseUrlInternal_m000B201A09C953887FC4428FCFDC097E22451C6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal_m077E3CF5460258D80A6228EC0E2DE06891889337(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_GetDatabaseUrlInternal_m000B201A09C953887FC4428FCFDC097E22451C6B_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.AppOptionsInternal::get_AppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_AppId_mD0FF298D8468A9664BF58EBE95CDCA487CAE20AA (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_AppId_mD0FF298D8468A9664BF58EBE95CDCA487CAE20AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_AppId_get_m0CA0B75BCD22C0B03722ED12289993242ECE447F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_get_AppId_mD0FF298D8468A9664BF58EBE95CDCA487CAE20AA_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.AppOptionsInternal::get_ApiKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_ApiKey_m7E4EEEE1100FAE72251593632619092B7E675090 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_ApiKey_m7E4EEEE1100FAE72251593632619092B7E675090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_ApiKey_get_m976600637E68A5A6304904142D08D67FC0F6A971(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_get_ApiKey_m7E4EEEE1100FAE72251593632619092B7E675090_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.AppOptionsInternal::get_MessageSenderId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_MessageSenderId_mC448D7030D9EC1FAA418F608C81ADC4ADB999946 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_MessageSenderId_mC448D7030D9EC1FAA418F608C81ADC4ADB999946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_MessageSenderId_get_m54741C1B5E0272982A3AF6A9E937A2262054FF8E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_get_MessageSenderId_mC448D7030D9EC1FAA418F608C81ADC4ADB999946_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.AppOptionsInternal::get_StorageBucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_StorageBucket_mB90A0A959007D89009EDB6A11CF27F1E0A4357C3 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_StorageBucket_mB90A0A959007D89009EDB6A11CF27F1E0A4357C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_StorageBucket_get_m446532889980F04EFFDB613515B43DBF907797D8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_get_StorageBucket_mB90A0A959007D89009EDB6A11CF27F1E0A4357C3_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.AppOptionsInternal::get_ProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_ProjectId_m3FFDDF11A39C948719985A512855D7C9740143CB (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_ProjectId_m3FFDDF11A39C948719985A512855D7C9740143CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_ProjectId_get_m0AA2B920BC2C6439CFA52D1043106B3439A9D611(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_get_ProjectId_m3FFDDF11A39C948719985A512855D7C9740143CB_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.AppOptionsInternal::get_PackageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppOptionsInternal_get_PackageName_m091E48C6CA71A5662C6DFC640F32FA7AA810D248 (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppOptionsInternal_get_PackageName_m091E48C6CA71A5662C6DFC640F32FA7AA810D248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_AppOptionsInternal_PackageName_get_m7EA8F7B861D1A95AB389D9CE25EF692FC6A7A482(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppOptionsInternal_get_PackageName_m091E48C6CA71A5662C6DFC640F32FA7AA810D248_RuntimeMethod_var);
	}

IL_001c:
	{
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
// System.Void Firebase.AppUtil::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_PollCallbacks_m75E222C3BCE3563C9C27265D3AE011E3E342E527 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtil_PollCallbacks_m75E222C3BCE3563C9C27265D3AE011E3E342E527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_PollCallbacks_mF25D3634B38B19C7409BCC9A50B3482979F741EA(/*hidden argument*/NULL);
		bool L_0 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t * L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, AppUtil_PollCallbacks_m75E222C3BCE3563C9C27265D3AE011E3E342E527_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_AppEnableLogCallback_m01A441841A004A6048FCFC012F083BFAA3581C66 (bool ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtil_AppEnableLogCallback_m01A441841A004A6048FCFC012F083BFAA3581C66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___arg00;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_AppEnableLogCallback_m10954DADA1EE183C4F6B9CECC784C5395CE441FD(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, AppUtil_AppEnableLogCallback_m01A441841A004A6048FCFC012F083BFAA3581C66_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2 (bool ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___arg00;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_SetEnabledAllAppCallbacks_m5F66E2EA7BCF9B05EE87FEEDDAD08E5F8C75622C(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.AppUtil::SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetEnabledAppCallbackByName_m59AF9169D18540D471ECB1A999A5F7B67D0B63BC (String_t* ___arg00, bool ___arg11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtil_SetEnabledAppCallbackByName_m59AF9169D18540D471ECB1A999A5F7B67D0B63BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___arg00;
		bool L_1 = ___arg11;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_SetEnabledAppCallbackByName_m38695B5F0435658A754FFCF6D32C0EB805414864(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppUtil_SetEnabledAppCallbackByName_m59AF9169D18540D471ECB1A999A5F7B67D0B63BC_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Boolean Firebase.AppUtil::GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtil_GetEnabledAppCallbackByName_m4E31F50E6B3C90FF204A4BC57293B0A1C5F81513 (String_t* ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtil_GetEnabledAppCallbackByName_m4E31F50E6B3C90FF204A4BC57293B0A1C5F81513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___arg00;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		bool L_1 = AppUtilPINVOKE_Firebase_App_GetEnabledAppCallbackByName_m39176480A7F163BA61D22646908BB95D4CD6096E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AppUtil_GetEnabledAppCallbackByName_m4E31F50E6B3C90FF204A4BC57293B0A1C5F81513_RuntimeMethod_var);
	}

IL_0017:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.AppUtil::SetLogFunction(Firebase.LogUtil_LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * L_0 = ___arg00;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_SetLogFunction_m293E0D5D4A2685DBF99526F3D6D59FD39DC418F4(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB_RuntimeMethod_var);
	}

IL_0016:
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
// System.Void Firebase.AppUtilPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE__cctor_mB82716D517E855CA4815CA1B872B0599F1785B19 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtilPINVOKE__cctor_mB82716D517E855CA4815CA1B872B0599F1785B19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 * L_0 = (SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 *)il2cpp_codegen_object_new(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m06C48C4611CDA458CA1AF651ED06BF7FF7EDF536(L_0, /*hidden argument*/NULL);
		((AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_StaticFields*)il2cpp_codegen_static_fields_for(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF * L_1 = (SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF *)il2cpp_codegen_object_new(SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m9F305BAB06F185B49FD5AC05A407928C69D672F6(L_1, /*hidden argument*/NULL);
		((AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_StaticFields*)il2cpp_codegen_static_fields_for(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_delete_FutureBase(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_delete_FutureBase_mC0371BBEAC15767EEC2E7FEAFB5261B2D7273129 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_delete_FutureBase)(____jarg10_marshaled);

}
// System.Int32 Firebase.AppUtilPINVOKE::Firebase_App_FutureBase_status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_Firebase_App_FutureBase_status_m69559C80656F21136A45099E3C62CBC74C2A1BCD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FutureBase_status)(____jarg10_marshaled);

	return returnValue;
}
// System.Int32 Firebase.AppUtilPINVOKE::Firebase_App_FutureBase_error(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_Firebase_App_FutureBase_error_mAA54B287095DA9B85322B3CE60E9CAF44D0B9048 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FutureBase_error)(____jarg10_marshaled);

	return returnValue;
}
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FutureBase_error_message(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FutureBase_error_message_m070740D938581C3EA594AD8BA0C3B60016F8D442 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FutureBase_error_message)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_new_StringStringMap__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_new_StringStringMap__SWIG_0_m86FE2CFAD5F22EA239913F770E943D1A2AAA4326 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_new_StringStringMap__SWIG_0)();

	return returnValue;
}
// System.UInt32 Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_size(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AppUtilPINVOKE_Firebase_App_StringStringMap_size_mD20871B9533E4CF7FD79FF3C67ED7ECA09259481 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_StringStringMap_size)(____jarg10_marshaled);

	return returnValue;
}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_Clear(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_StringStringMap_Clear_m76C59B1A8B83BBBA5FFE4943C4DD96B735A3637B (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_StringStringMap_Clear)(____jarg10_marshaled);

}
// System.String Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_getitem(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_StringStringMap_getitem_mAC201F586854608D53D0B2BCF43DBAC036D016A9 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_StringStringMap_getitem)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_setitem(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_StringStringMap_setitem_mD798D2464A2E7926F427D191CD45D382E2A91865 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Marshaling of parameter '___jarg32' to native representation
	char* ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_string(___jarg32);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_StringStringMap_setitem)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg32' native representation
	il2cpp_codegen_marshal_free(____jarg32_marshaled);
	____jarg32_marshaled = NULL;

}
// System.Boolean Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_ContainsKey(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_Firebase_App_StringStringMap_ContainsKey_mFFC2203AA62CE2FCD679C281A0EFF037B9D2676F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_StringStringMap_ContainsKey)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_Add(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_StringStringMap_Add_m1E7A1505A3BF61D7D21F291888C94D66689ED6A6 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Marshaling of parameter '___jarg32' to native representation
	char* ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_string(___jarg32);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_StringStringMap_Add)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg32' native representation
	il2cpp_codegen_marshal_free(____jarg32_marshaled);
	____jarg32_marshaled = NULL;

}
// System.Boolean Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_Remove(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_Firebase_App_StringStringMap_Remove_m0DEC2E4F4B23CFE922D9FD242FE49113C66948E2 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_StringStringMap_Remove)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_create_iterator_begin(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_StringStringMap_create_iterator_begin_mFC6E8519A20F8F97DB611433F71449086C732F29 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_StringStringMap_create_iterator_begin)(____jarg10_marshaled);

	return returnValue;
}
// System.String Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_get_next_key(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_StringStringMap_get_next_key_m7539283E7C89880066AD59BC20EE0D825611D9ED (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_StringStringMap_get_next_key)(____jarg10_marshaled, ___jarg21);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_StringStringMap_destroy_iterator(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_StringStringMap_destroy_iterator_mC5E9F64192EEC4D6B1255AECB433FC9884131CC0 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_StringStringMap_destroy_iterator)(____jarg10_marshaled, ___jarg21);

}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_delete_StringStringMap(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_delete_StringStringMap_mE6FF26B91AFEF51D02907B55961C4A8045C3E0BB (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_delete_StringStringMap)(____jarg10_marshaled);

}
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal_m077E3CF5460258D80A6228EC0E2DE06891889337 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_GetDatabaseUrlInternal)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_AppId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_AppId_get_m0CA0B75BCD22C0B03722ED12289993242ECE447F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_AppId_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_ApiKey_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_ApiKey_get_m976600637E68A5A6304904142D08D67FC0F6A971 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_ApiKey_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_MessageSenderId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_MessageSenderId_get_m54741C1B5E0272982A3AF6A9E937A2262054FF8E (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_MessageSenderId_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_StorageBucket_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_StorageBucket_get_m446532889980F04EFFDB613515B43DBF907797D8 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_StorageBucket_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_ProjectId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_ProjectId_get_m0AA2B920BC2C6439CFA52D1043106B3439A9D611 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_ProjectId_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.AppUtilPINVOKE::Firebase_App_AppOptionsInternal_PackageName_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_AppOptionsInternal_PackageName_get_m7EA8F7B861D1A95AB389D9CE25EF692FC6A7A482 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_AppOptionsInternal_PackageName_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_delete_AppOptionsInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_delete_AppOptionsInternal_mFE72A08CA8C69B69E301D0A1D2247E2D36559994 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_delete_AppOptionsInternal)(____jarg10_marshaled);

}
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_options(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_FirebaseApp_options_m2860C63F3B2A12C2358DB5B674B07CAE5EDE4E5D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_options)(____jarg10_marshaled);

	return returnValue;
}
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_NameInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FirebaseApp_NameInternal_get_m3FCAAB68F8E03CE3A3079B717D5C596D4561310F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_NameInternal_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_CreateInternal__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AppUtilPINVOKE_Firebase_App_FirebaseApp_CreateInternal__SWIG_0_m880301BF18F95C1602A9C5D802DDAE626D45CAD2 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_CreateInternal__SWIG_0)();

	return returnValue;
}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FirebaseApp_ReleaseReferenceInternal_m97C1DE32BCE04F1AC59A117C6ED30E138E424D26 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_ReleaseReferenceInternal)(____jarg10_marshaled);

}
// System.Int32 Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_GetLogLevelInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppUtilPINVOKE_Firebase_App_FirebaseApp_GetLogLevelInternal_m64D61C2F951379C639BE99996C5B8DDA0CF7ABCE (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_GetLogLevelInternal)();

	return returnValue;
}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_RegisterLibraryInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FirebaseApp_RegisterLibraryInternal_mE23204CA5E247273D5F52CBB42F8D708C27C1DC9 (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_RegisterLibraryInternal)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_FirebaseApp_AppSetDefaultConfigPath_mD2E944BB42CC3E9F6F443F3D6DC65CF9E4F639F3 (String_t* ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_AppSetDefaultConfigPath)(____jarg10_marshaled);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

}
// System.String Firebase.AppUtilPINVOKE::Firebase_App_FirebaseApp_DefaultName_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppUtilPINVOKE_Firebase_App_FirebaseApp_DefaultName_get_m13F1175243A022F0686B765261DF2FFC68B1822F (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_FirebaseApp_DefaultName_get)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_PollCallbacks_mF25D3634B38B19C7409BCC9A50B3482979F741EA (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_PollCallbacks)();

}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_AppEnableLogCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_AppEnableLogCallback_m10954DADA1EE183C4F6B9CECC784C5395CE441FD (bool ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_AppEnableLogCallback)(static_cast<int32_t>(___jarg10));

}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_SetEnabledAllAppCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_SetEnabledAllAppCallbacks_m5F66E2EA7BCF9B05EE87FEEDDAD08E5F8C75622C (bool ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_SetEnabledAllAppCallbacks)(static_cast<int32_t>(___jarg10));

}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_SetEnabledAppCallbackByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_SetEnabledAppCallbackByName_m38695B5F0435658A754FFCF6D32C0EB805414864 (String_t* ___jarg10, bool ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_SetEnabledAppCallbackByName)(____jarg10_marshaled, static_cast<int32_t>(___jarg21));

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

}
// System.Boolean Firebase.AppUtilPINVOKE::Firebase_App_GetEnabledAppCallbackByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppUtilPINVOKE_Firebase_App_GetEnabledAppCallbackByName_m39176480A7F163BA61D22646908BB95D4CD6096E (String_t* ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_App_GetEnabledAppCallbackByName)(____jarg10_marshaled);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.AppUtilPINVOKE::Firebase_App_SetLogFunction(Firebase.LogUtil_LogMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppUtilPINVOKE_Firebase_App_SetLogFunction_m293E0D5D4A2685DBF99526F3D6D59FD39DC418F4 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_App_SetLogFunction)(____jarg10_marshaled);

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
// System.String Firebase.ErrorMessages::get_DependencyNotFoundErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DependencyNotFoundErrorMessage_m93703910D97FC22ECA3B89EEF8681C6F29989106 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorMessages_get_DependencyNotFoundErrorMessage_m93703910D97FC22ECA3B89EEF8681C6F29989106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlatformInformation_get_IsAndroid_mF6B9AE75F5E1D6A48F5E1754A692FDC167ADE628(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->get_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0();
		return L_1;
	}

IL_0010:
	{
		bool L_2 = PlatformInformation_get_IsIOS_m314080A5FF94D29E352F4E3FCA4870CBB67E3840(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_3 = ((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->get_DEPENDENCY_NOT_FOUND_ERROR_IOS_1();
		return L_3;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_4 = ((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->get_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2();
		return L_4;
	}
}
// System.String Firebase.ErrorMessages::get_DllNotFoundExceptionErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DllNotFoundExceptionErrorMessage_m493D1E37E274C2D633EB65991F5B26102E3F6595 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorMessages_get_DllNotFoundExceptionErrorMessage_m493D1E37E274C2D633EB65991F5B26102E3F6595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0 = PlatformInformation_get_IsAndroid_mF6B9AE75F5E1D6A48F5E1754A692FDC167ADE628(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->get_DLL_NOT_FOUND_ERROR_ANDROID_3();
		V_0 = L_1;
		goto IL_0030;
	}

IL_0015:
	{
		bool L_2 = PlatformInformation_get_IsIOS_m314080A5FF94D29E352F4E3FCA4870CBB67E3840(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_3 = ((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->get_DLL_NOT_FOUND_ERROR_IOS_4();
		V_0 = L_3;
		goto IL_0030;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_4 = ((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->get_DLL_NOT_FOUND_ERROR_GENERIC_5();
		V_0 = L_4;
	}

IL_0030:
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
		String_t* L_6 = ErrorMessages_get_DependencyNotFoundErrorMessage_m93703910D97FC22ECA3B89EEF8681C6F29989106(/*hidden argument*/NULL);
		String_t* L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Firebase.ErrorMessages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessages__cctor_mC64C25A9DFBF5FA4B8784803560444FA59FDD7DC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorMessages__cctor_mC64C25A9DFBF5FA4B8784803560444FA59FDD7DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->set_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_0(_stringLiteralEA5B9DDB87B05728AF950352BA404136EF4EA09B);
		((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->set_DEPENDENCY_NOT_FOUND_ERROR_IOS_1(_stringLiteralA69B6F8510FC3A441BACCF626DC509E0C431FF1F);
		((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->set_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_2(_stringLiteralE6F00725B1CE2641D3D5ED19F65223CA4D3F8BAE);
		((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->set_DLL_NOT_FOUND_ERROR_ANDROID_3(_stringLiteral403CDB792BDB39DFA5B32B9F5BF62F3460A11FFC);
		((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->set_DLL_NOT_FOUND_ERROR_IOS_4(_stringLiteral1976A864796DBEDF326708C78B035AAFD37943BD);
		((ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_StaticFields*)il2cpp_codegen_static_fields_for(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var))->set_DLL_NOT_FOUND_ERROR_GENERIC_5(_stringLiteral24ED59ED9090E09DB40A7847435D91BFAE584ECF);
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
// System.Void Firebase.FirebaseApp::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__ctor_mB94B4439B6474A9B3420A388F4C847153BB7DA2B (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.FirebaseApp::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__cctor_m65C207A2EB72FE3DF40D35D1018C27881D66EB62 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp__cctor_m65C207A2EB72FE3DF40D35D1018C27881D66EB62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_disposeLock_2(L_0);
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_1 = (Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D *)il2cpp_codegen_object_new(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFF10F06C038C842A2C0172778461CFE1F3D2F6CC(L_1, /*hidden argument*/Dictionary_2__ctor_mFF10F06C038C842A2C0172778461CFE1F3D2F6CC_RuntimeMethod_var);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_nameToProxy_5(L_1);
		Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * L_2 = (Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 *)il2cpp_codegen_object_new(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3C25C443F1B1748269C9C20D1EACADAFE590E1A9(L_2, /*hidden argument*/Dictionary_2__ctor_m3C25C443F1B1748269C9C20D1EACADAFE590E1A9_RuntimeMethod_var);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_cPtrToProxy_6(L_2);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_AppUtilCallbacksInitialized_7((bool)0);
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_3, /*hidden argument*/NULL);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_AppUtilCallbacksLock_8(L_3);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_PreventOnAllAppsDestroyed_9((bool)0);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_crashlyticsInitializationAttempted_10((bool)0);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_CheckDependenciesThread_13((-1));
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_4, /*hidden argument*/NULL);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_CheckDependenciesThreadLock_14(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogUtil_InitializeLogging_m05046FDF1759F0A851931F7FCF743FAA24BDB434(/*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.FirebaseApp::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Finalize_mBA9B05FC454D571B021370352E3DAA24A927C964 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		FirebaseApp_Dispose_mD97452CFB97FC00105EB0369582537ED1C457A93(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
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
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_Dispose_mD97452CFB97FC00105EB0369582537ED1C457A93 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_Dispose_mD97452CFB97FC00105EB0369582537ED1C457A93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_AppDisposed_4();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = __this->get_AppDisposed_4();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_1);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_1, __this, L_2, /*hidden argument*/NULL);
		__this->set_AppDisposed_4((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)NULL);
	}

IL_0023:
	{
		FirebaseApp_RemoveReference_mF1E15EE01A41D7674FAFDAB777CF637071F907E0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.FirebaseApp::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___closureToExecute0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___closureToExecute0;
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		goto IL_002a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t *)__exception_local);
			Exception_t * L_1 = V_0;
			NullCheck(L_1);
			Exception_t * L_2 = VirtFuncInvoker0< Exception_t * >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_1);
			if (!((DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596 *)IsInstClass((RuntimeObject*)L_2, DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var)))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
			String_t* L_3 = ErrorMessages_get_DllNotFoundExceptionErrorMessage_m493D1E37E274C2D633EB65991F5B26102E3F6595(/*hidden argument*/NULL);
			InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_4 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var);
			InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14(L_4, 1, L_3, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D_RuntimeMethod_var);
		}

IL_0028:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D_RuntimeMethod_var);
		}
	} // end catch (depth: 1)

IL_002a:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_0 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B3_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		String_t* L_0 = FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C(/*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_1 = FirebaseApp_GetInstance_mED18364B5B6A567DEDDBFE38F5CE174FF8171196(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_3 = V_0;
		G_B3_0 = L_3;
		goto IL_001c;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_4 = FirebaseApp_Create_m9A391D6EC41EE45EAA3CCAE368F182EAD69791ED(/*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_GetInstance_mED18364B5B6A567DEDDBFE38F5CE174FF8171196 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_GetInstance_mED18364B5B6A567DEDDBFE38F5CE174FF8171196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA(/*hidden argument*/NULL);
		V_0 = (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)NULL;
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			String_t* L_3 = ___name0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_mABD3D175BBCE88050893B6E15BADA46BFE7375D1(L_2, L_3, (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mABD3D175BBCE88050893B6E15BADA46BFE7375D1_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0037;
			}
		}

IL_0025:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_5 = V_0;
			if (L_5)
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_6 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			String_t* L_7 = ___name0;
			NullCheck(L_6);
			Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115_RuntimeMethod_var);
		}

IL_0037:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_8 = V_0;
			V_2 = L_8;
			IL2CPP_LEAVE(0x45, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0045:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_10 = V_2;
		return L_10;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_Create_m9A391D6EC41EE45EAA3CCAE368F182EAD69791ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_Create_m9A391D6EC41EE45EAA3CCAE368F182EAD69791ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_16();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * L_1 = (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 *)il2cpp_codegen_object_new(CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0_il2cpp_TypeInfo_var);
		CreateDelegate__ctor_m9B61AF9F4EFF9CCA9FC10B8BDB5E8AD7130E4DE1(L_1, NULL, (intptr_t)((intptr_t)FirebaseApp_U3CCreateU3Em__0_m0C29C0EE9E16A55E80148E3233D6491114F11CA6_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_16(L_1);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_16();
		String_t* L_3 = FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C(/*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_4 = FirebaseApp_GetInstance_mED18364B5B6A567DEDDBFE38F5CE174FF8171196(L_3, /*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_5 = FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_3();
		return L_0;
	}
}
// Firebase.LogLevel Firebase.FirebaseApp::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_get_LogLevel_mF5210CA8F87660D4B3747792C00C98579142CAAF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_get_LogLevel_mF5210CA8F87660D4B3747792C00C98579142CAAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		int32_t L_0 = AppUtilPINVOKE_Firebase_App_FirebaseApp_GetLogLevelInternal_m64D61C2F951379C639BE99996C5B8DDA0CF7ABCE(/*hidden argument*/NULL);
		return (int32_t)(L_0);
	}
}
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_AppDisposed_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_2 = __this->get_address_of_AppDisposed_4();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_2, ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_8) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_AppDisposed_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** L_2 = __this->get_address_of_AppDisposed_4();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = V_1;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = InterlockedCompareExchangeImpl<EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *>((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B **)L_2, ((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8 = V_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_8) == ((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::AddReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AddReference_m1B148D579E5DBB9E6608813E714769757F33142B (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_AddReference_m1B148D579E5DBB9E6608813E714769757F33142B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA(/*hidden argument*/NULL);
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		__this->set_swigCMemOwn_1((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		String_t* L_3 = FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Dictionary_2_set_Item_mE35649D2E86CEDB104C0489DB836619ECE559B78(L_2, L_3, __this, /*hidden argument*/Dictionary_2_set_Item_mE35649D2E86CEDB104C0489DB836619ECE559B78_RuntimeMethod_var);
		Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * L_4 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_cPtrToProxy_6();
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_5 = __this->get_address_of_swigCPtr_0();
		intptr_t L_6 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Dictionary_2_set_Item_m11C0967C76F78C48B5BCBECEC12AE868FB44441D(L_4, (intptr_t)L_6, __this, /*hidden argument*/Dictionary_2_set_Item_m11C0967C76F78C48B5BCBECEC12AE868FB44441D_RuntimeMethod_var);
		IL2CPP_LEAVE(0x4B, FINALLY_0044);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004b:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::RemoveReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RemoveReference_mF1E15EE01A41D7674FAFDAB777CF637071F907E0 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_RemoveReference_mF1E15EE01A41D7674FAFDAB777CF637071F907E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA(/*hidden argument*/NULL);
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			V_1 = (intptr_t)L_3;
			intptr_t L_4 = V_1;
			bool L_5 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0087;
			}
		}

IL_002d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			bool L_6 = __this->get_swigCMemOwn_1();
			if (!L_6)
			{
				goto IL_0087;
			}
		}

IL_003e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_7 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			NullCheck(L_7);
			int32_t L_8 = Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA(L_7, /*hidden argument*/Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA_RuntimeMethod_var);
			V_2 = L_8;
			Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * L_9 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_cPtrToProxy_6();
			intptr_t L_10 = V_1;
			NullCheck(L_9);
			Dictionary_2_Remove_m5D4563C331A3FF5094A2A9B3A8EA500DD30F9D28(L_9, (intptr_t)L_10, /*hidden argument*/Dictionary_2_Remove_m5D4563C331A3FF5094A2A9B3A8EA500DD30F9D28_RuntimeMethod_var);
			Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_11 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			String_t* L_12 = FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_11);
			Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115(L_11, L_12, /*hidden argument*/Dictionary_2_Remove_m73A4FFF962A4E1ED8A7DE00C6ACFADB0AEEB5115_RuntimeMethod_var);
			FirebaseApp_ReleaseReferenceInternal_m251EC6B33F516335E844BC8CBC7531205D41C934(__this, /*hidden argument*/NULL);
			int32_t L_13 = V_2;
			if ((((int32_t)L_13) <= ((int32_t)0)))
			{
				goto IL_0087;
			}
		}

IL_0073:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_14 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
			NullCheck(L_14);
			int32_t L_15 = Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA(L_14, /*hidden argument*/Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0087;
			}
		}

IL_0082:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			FirebaseApp_OnAllAppsDestroyed_m6D2ADF3AFBC105388CB7D63FA431CF5BAF9FA94D(/*hidden argument*/NULL);
		}

IL_0087:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_16;
			memset((&L_16), 0, sizeof(L_16));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_16), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_16);
			IL2CPP_LEAVE(0xAB, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		RuntimeObject * L_17 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_17, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(164)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ab:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfNull_m408BCFBB4ED87F4FF412F374897F083E87897315 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_ThrowIfNull_m408BCFBB4ED87F4FF412F374897F083E87897315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_0 = __this->get_address_of_swigCPtr_0();
		intptr_t L_1 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_0, /*hidden argument*/NULL);
		bool L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_3 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_3, _stringLiteralF56258CA08196A0AA345480C655C78D0172F29E6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseApp_ThrowIfNull_m408BCFBB4ED87F4FF412F374897F083E87897315_RuntimeMethod_var);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::InitializeAppUtilCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * V_4 = NULL;
	EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B14_0 = 0;
	int32_t G_B16_0 = 0;
	String_t* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	String_t* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	String_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	int32_t G_B20_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_AppUtilCallbacksLock_8();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			bool L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_AppUtilCallbacksInitialized_7();
			if (!L_2)
			{
				goto IL_001b;
			}
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x207, FINALLY_0200);
		}

IL_001b:
		{
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_3 = (EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124*)(EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124*)SZArrayNew(EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_4 = L_3;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_5 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_5, _stringLiteral04B9FAB0E66C2DAB7301E7D1C74019B4F500DAAF, _stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_4);
			ArrayElementTypeCheck (L_4, L_5);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_5);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_6 = L_4;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_7 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_7, _stringLiteralD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF, _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_7);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_7);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_8 = L_6;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_9 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_9, _stringLiteral6A83A8E44E2406EE1D423FE59CB3FB07EC1B2147, _stringLiteralA37BC83F5B58D09130EA87C7BFA23EEF1ED5CE5D, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, L_9);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_9);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_10 = L_8;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_11 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_11, _stringLiteral39655E1CF62FCA36F81637138EABB8E0E88FF960, _stringLiteral3818B2A66126D8DEEF8DD9AFC89B116464489DA5, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_11);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_11);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_12 = L_10;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_13 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_13, _stringLiteral1611D456D2CEE02CE1487EE8445E48898D131F6B, _stringLiteralD8E3A88F5BFAC46D4EA8953E6A2EA7D3C25746CC, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_13);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_13);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_14 = L_12;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_15 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_15, _stringLiteralADA172ACC20A09E7D83BFE71E65356790E5B24CE, _stringLiteral3D20C767EAE028E07642EC56369E049DCB56F6C8, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_15);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_15);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_16 = L_14;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_17 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_17, _stringLiteral161FE474EAA8E6DC3E89D180279498786FB79C9D, _stringLiteral9897861EE3629BE78B707B3A0C46193347531E30, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, L_17);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_17);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_18 = L_16;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_19 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_19, _stringLiteral0FBCAB8C3D9EDED5D0224DC45891EB0E0AAB4BB3, _stringLiteralC2BB0CEDEC57E9981F22698838128030E062BF12, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(7), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_19);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_20 = L_18;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_21 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_21, _stringLiteralAF3E6E43968D1C156E887454B8F9BDB7723036D3, _stringLiteral1103241B0617CC2365FF633B3B7D5125D1128C22, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, L_21);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(8), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_21);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_22 = L_20;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_23 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_23, _stringLiteral47655613208A2442002F378BF374CC45952A31F8, _stringLiteral7AAEF17DD886943DA28485F945C0BC92C838450F, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_23);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_23);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_24 = L_22;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_25 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_25, _stringLiteralEE248ED951626ABDD49B64B81CAEAF341755AF6C, _stringLiteral469058482DD7BE31765E4E966F8C98EA4B3B6930, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_24);
			ArrayElementTypeCheck (L_24, L_25);
			(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_25);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_26 = L_24;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_27 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_27, _stringLiteral7EA8F2DF39C94049CBEAACE46B64E4034C3E90C1, _stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_27);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_27);
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_28 = L_26;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_29 = (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)il2cpp_codegen_object_new(EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4_il2cpp_TypeInfo_var);
			EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2(L_29, _stringLiteral16687478A33D5A15482DF6D441B61A0189583C64, _stringLiteral548196CBB5E5F5105E575F464FE92F73144DFB34, (bool)1, /*hidden argument*/NULL);
			NullCheck(L_28);
			ArrayElementTypeCheck (L_28, L_29);
			(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 *)L_29);
			V_1 = L_28;
			bool L_30 = PlatformInformation_get_IsAndroid_mF6B9AE75F5E1D6A48F5E1754A692FDC167ADE628(/*hidden argument*/NULL);
			V_2 = L_30;
			V_3 = (bool)0;
			bool L_31 = V_2;
			if (L_31)
			{
				goto IL_0134;
			}
		}

IL_012c:
		{
			AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2((bool)0, /*hidden argument*/NULL);
			V_3 = (bool)1;
		}

IL_0134:
		{
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_32 = V_1;
			V_5 = L_32;
			V_6 = 0;
			goto IL_01ea;
		}

IL_013f:
		{
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_33 = V_5;
			int32_t L_34 = V_6;
			NullCheck(L_33);
			int32_t L_35 = L_34;
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
			V_4 = L_36;
			V_7 = (bool)0;
		}

IL_0149:
		try
		{ // begin try (depth: 2)
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_37 = V_4;
			NullCheck(L_37);
			String_t* L_38 = EnableModuleParams_get_CSharpClassName_m5C21BC47A020FE24984E1A282267CE62CF09080B_inline(L_37, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_39 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_38, FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064_RuntimeMethod_var);
			V_7 = (bool)((((int32_t)((((RuntimeObject*)(Type_t *)L_39) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0168;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0162;
			throw e;
		}

CATCH_0162:
		{ // begin catch(System.Exception)
			goto IL_0168;
		} // end catch (depth: 2)

IL_0168:
		{
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_40 = V_4;
			NullCheck(L_40);
			String_t* L_41 = EnableModuleParams_get_CppModuleName_mE57521DAC3F8972C81AFBC72DB70FE79A9F946B3_inline(L_40, /*hidden argument*/NULL);
			bool L_42 = AppUtil_GetEnabledAppCallbackByName_m4E31F50E6B3C90FF204A4BC57293B0A1C5F81513(L_41, /*hidden argument*/NULL);
			V_8 = L_42;
			bool L_43 = V_7;
			if (!L_43)
			{
				goto IL_0196;
			}
		}

IL_017d:
		{
			bool L_44 = V_3;
			if (L_44)
			{
				goto IL_0193;
			}
		}

IL_0183:
		{
			bool L_45 = V_8;
			if (L_45)
			{
				goto IL_0193;
			}
		}

IL_018a:
		{
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_46 = V_4;
			NullCheck(L_46);
			bool L_47 = EnableModuleParams_get_AlwaysEnable_m76B3B18100019E68E79EA0A0B320B1EAE0AB8260_inline(L_46, /*hidden argument*/NULL);
			G_B14_0 = ((int32_t)(L_47));
			goto IL_0194;
		}

IL_0193:
		{
			G_B14_0 = 1;
		}

IL_0194:
		{
			G_B16_0 = G_B14_0;
			goto IL_0197;
		}

IL_0196:
		{
			G_B16_0 = 0;
		}

IL_0197:
		{
			V_9 = (bool)G_B16_0;
			bool L_48 = V_9;
			bool L_49 = V_8;
			if ((((int32_t)L_48) == ((int32_t)L_49)))
			{
				goto IL_01d6;
			}
		}

IL_01a2:
		{
			bool L_50 = V_9;
			G_B18_0 = _stringLiteral955802D1A6D5235C4CF60C6BA2074F90F06CECCE;
			G_B18_1 = 1;
			if (!L_50)
			{
				G_B19_0 = _stringLiteral955802D1A6D5235C4CF60C6BA2074F90F06CECCE;
				G_B19_1 = 1;
				goto IL_01b9;
			}
		}

IL_01af:
		{
			G_B20_0 = _stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC;
			G_B20_1 = G_B18_0;
			G_B20_2 = G_B18_1;
			goto IL_01be;
		}

IL_01b9:
		{
			G_B20_0 = _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
			G_B20_1 = G_B19_0;
			G_B20_2 = G_B19_1;
		}

IL_01be:
		{
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_51 = V_4;
			NullCheck(L_51);
			String_t* L_52 = EnableModuleParams_get_CppModuleName_mE57521DAC3F8972C81AFBC72DB70FE79A9F946B3_inline(L_51, /*hidden argument*/NULL);
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_53 = V_4;
			NullCheck(L_53);
			String_t* L_54 = EnableModuleParams_get_CSharpClassName_m5C21BC47A020FE24984E1A282267CE62CF09080B_inline(L_53, /*hidden argument*/NULL);
			String_t* L_55 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(G_B20_1, G_B20_0, L_52, L_54, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
			LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(G_B20_2, L_55, /*hidden argument*/NULL);
		}

IL_01d6:
		{
			EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * L_56 = V_4;
			NullCheck(L_56);
			String_t* L_57 = EnableModuleParams_get_CppModuleName_mE57521DAC3F8972C81AFBC72DB70FE79A9F946B3_inline(L_56, /*hidden argument*/NULL);
			bool L_58 = V_9;
			AppUtil_SetEnabledAppCallbackByName_m59AF9169D18540D471ECB1A999A5F7B67D0B63BC(L_57, L_58, /*hidden argument*/NULL);
			int32_t L_59 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		}

IL_01ea:
		{
			int32_t L_60 = V_6;
			EnableModuleParamsU5BU5D_tAEF4DAFCE66560174F91F9BCAF7303D112191124* L_61 = V_5;
			NullCheck(L_61);
			if ((((int32_t)L_60) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length)))))))
			{
				goto IL_013f;
			}
		}

IL_01f5:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_AppUtilCallbacksInitialized_7((bool)1);
			IL2CPP_LEAVE(0x207, FINALLY_0200);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0200;
	}

FINALLY_0200:
	{ // begin finally (depth: 1)
		RuntimeObject * L_62 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_62, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(512)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(512)
	{
		IL2CPP_JUMP_TBL(0x207, IL_0207)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0207:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::OnAllAppsDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_OnAllAppsDestroyed_m6D2ADF3AFBC105388CB7D63FA431CF5BAF9FA94D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_OnAllAppsDestroyed_m6D2ADF3AFBC105388CB7D63FA431CF5BAF9FA94D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		bool L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_PreventOnAllAppsDestroyed_9();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_1 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA(L_1, /*hidden argument*/Dictionary_2_get_Count_mE6BC3936D23056B6E36C278089A7CAFFCE0524FA_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_AppUtilCallbacksLock_8();
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_4, /*hidden argument*/NULL);
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			bool L_5 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_AppUtilCallbacksInitialized_7();
			if (!L_5)
			{
				goto IL_0047;
			}
		}

IL_0031:
		{
			bool L_6 = PlatformInformation_get_IsAndroid_mF6B9AE75F5E1D6A48F5E1754A692FDC167ADE628(/*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0041;
			}
		}

IL_003b:
		{
			AppUtil_SetEnabledAllAppCallbacks_m40DACCE1222844931485D67E3885D9ACD1C31FF2((bool)0, /*hidden argument*/NULL);
		}

IL_0041:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_AppUtilCallbacksInitialized_7((bool)0);
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0053:
	{
		return;
	}
}
// System.Uri Firebase.FirebaseApp::UrlStringToUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * FirebaseApp_UrlStringToUri_mA6A34CF111210B3561C2450F87640A23BC9BCA51 (String_t* ___urlString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_UrlStringToUri_mA6A34CF111210B3561C2450F87640A23BC9BCA51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___urlString0;
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		String_t* L_2 = ___urlString0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0021;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0019;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.UriFormatException)
		V_0 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
		goto IL_0021;
	} // end catch (depth: 1)

IL_0021:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = V_0;
		return L_4;
	}
}
// System.Object Firebase.FirebaseApp::WeakReferenceGetTarget(System.WeakReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FirebaseApp_WeakReferenceGetTarget_m4F195CE3072FD67139BDC76BAB407034828B2C3C (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___weakReference0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_WeakReferenceGetTarget_m4F195CE3072FD67139BDC76BAB407034828B2C3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_0 = ___weakReference0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_1 = ___weakReference0;
		NullCheck(L_1);
		RuntimeObject * L_2 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_1);
		V_0 = L_2;
		goto IL_001c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0012;
		throw e;
	}

CATCH_0012:
	{ // begin catch(System.InvalidOperationException)
		V_0 = NULL;
		goto IL_001c;
	} // end catch (depth: 1)

IL_001a:
	{
		return NULL;
	}

IL_001c:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Firebase.FirebaseApp::InitializeCrashlyticsIfPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	MethodInfo_t * V_2 = NULL;
	bool V_3 = false;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Assembly_t * L_0 = Assembly_Load_m3B24B1EFB2FF6E40186586C3BE135D335BBF3A0A(_stringLiteral41AFC5CF6BD87FAE855E565E56413D254EFDD312, /*hidden argument*/NULL);
			V_0 = L_0;
			Assembly_t * L_1 = V_0;
			NullCheck(L_1);
			Type_t * L_2 = VirtFuncInvoker1< Type_t *, String_t* >::Invoke(20 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_1, _stringLiteralA3A98A8B1C98564A92ABAE5D3EB9AB9D7723903A);
			V_1 = L_2;
			Type_t * L_3 = V_1;
			if (L_3)
			{
				goto IL_0029;
			}
		}

IL_001d:
		{
			InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_4 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var);
			InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14(L_4, 1, _stringLiteral238329B64A3729607F223FFEFA394456AE114908, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B_RuntimeMethod_var);
		}

IL_0029:
		{
			Type_t * L_5 = V_1;
			NullCheck(L_5);
			MethodInfo_t * L_6 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_5, _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54, ((int32_t)40), /*hidden argument*/NULL);
			V_2 = L_6;
			MethodInfo_t * L_7 = V_2;
			if (L_7)
			{
				goto IL_0049;
			}
		}

IL_003d:
		{
			InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_8 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var);
			InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14(L_8, 1, _stringLiteral62550204912BC90809B03D0FE60F2B4874EB15F8, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B_RuntimeMethod_var);
		}

IL_0049:
		{
			MethodInfo_t * L_9 = V_2;
			NullCheck(L_9);
			MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_9, NULL, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL, /*hidden argument*/NULL);
			goto IL_006f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0057;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_005f;
		throw e;
	}

CATCH_0057:
	{ // begin catch(System.IO.FileNotFoundException)
		V_3 = (bool)0;
		goto IL_0071;
	} // end catch (depth: 1)

CATCH_005f:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		Exception_t * L_10 = V_4;
		InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_11 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var);
		InitializationException__ctor_m56641135A502F6D70F771A69157A0D674EB99DD3(L_11, 1, _stringLiteral324FB463A34E73070FCEDC655BCD2F40B2E47971, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_006f:
	{
		return (bool)1;
	}

IL_0071:
	{
		bool L_12 = V_3;
		return L_12;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateAndTrack(Firebase.FirebaseApp_CreateDelegate,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * ___createDelegate0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___existingProxy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Exception_t * V_8 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_9 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_10 = NULL;
	String_t* V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA(/*hidden argument*/NULL);
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * L_0 = FirebaseAppUtils_get_Instance_m79B79F13BD6329A947B640DB886DC398439A90BF_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_Create_m1B30952F7479043520E3D7023F331D038F6B2125(L_0, /*hidden argument*/NULL);
		Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * L_1 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_nameToProxy_5();
		V_2 = L_1;
		RuntimeObject * L_2 = V_2;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			FirebaseApp_InitializeAppUtilCallbacks_m598537A6D9F6327DAA4E5398BB645C5B7CA81064(/*hidden argument*/NULL);
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_3), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		}

IL_002f:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_3 = PlatformInformation_get_DefaultConfigLocation_mCC41CAB77CCA5F822E67C9B8D86478606777A06C(/*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
				FirebaseApp_AppSetDefaultConfigPath_m55D859EEC14CA1FFEF3DC3422F5CE8C1328E097F(L_3, /*hidden argument*/NULL);
				CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * L_4 = ___createDelegate0;
				NullCheck(L_4);
				FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_5 = CreateDelegate_Invoke_m9FC551133A4F9301FB4F107B90F7C98A66F95BE9(L_4, /*hidden argument*/NULL);
				V_1 = L_5;
				bool L_6 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
				if (!L_6)
				{
					goto IL_0050;
				}
			}

IL_004a:
			{
				Exception_t * L_7 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26_RuntimeMethod_var);
			}

IL_0050:
			{
				FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_8 = V_1;
				if (L_8)
				{
					goto IL_0062;
				}
			}

IL_0056:
			{
				InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_9 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var);
				InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14(L_9, 1, _stringLiteral380FCBD323D8B608651CCA1F4D65A0B1AA362A2A, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26_RuntimeMethod_var);
			}

IL_0062:
			{
				FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_10 = V_1;
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
				HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_11 = FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86(L_10, /*hidden argument*/NULL);
				V_3 = L_11;
				goto IL_00ee;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_006e;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00e4;
			throw e;
		}

CATCH_006e:
		{ // begin catch(System.ApplicationException)
			{
				V_4 = ((ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)__exception_local);
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
				FirebaseApp_OnAllAppsDestroyed_m6D2ADF3AFBC105388CB7D63FA431CF5BAF9FA94D(/*hidden argument*/NULL);
				ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_12 = V_4;
				NullCheck(L_12);
				String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
				V_5 = L_13;
				V_6 = 1;
				String_t* L_14 = V_5;
				NullCheck(L_14);
				int32_t L_15 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_14, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, /*hidden argument*/NULL);
				V_7 = L_15;
				int32_t L_16 = V_7;
				if ((((int32_t)L_16) < ((int32_t)0)))
				{
					goto IL_00b5;
				}
			}

IL_0097:
			{
				String_t* L_17 = V_5;
				int32_t L_18 = V_7;
				NullCheck(L_17);
				String_t* L_19 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_17, 0, L_18, /*hidden argument*/NULL);
				int32_t L_20 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_19, /*hidden argument*/NULL);
				V_6 = L_20;
				String_t* L_21 = V_5;
				int32_t L_22 = V_7;
				NullCheck(L_21);
				String_t* L_23 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)), /*hidden argument*/NULL);
				V_5 = L_23;
			}

IL_00b5:
			{
				String_t* L_24 = V_5;
				NullCheck(L_24);
				int32_t L_25 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_24, _stringLiteral1B7B4B5C42CA1C2ED60073710A5266DC268AB4EB, /*hidden argument*/NULL);
				if ((((int32_t)L_25) < ((int32_t)0)))
				{
					goto IL_00da;
				}
			}

IL_00c7:
			{
				String_t* L_26 = V_5;
				IL2CPP_RUNTIME_CLASS_INIT(ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var);
				String_t* L_27 = ErrorMessages_get_DependencyNotFoundErrorMessage_m93703910D97FC22ECA3B89EEF8681C6F29989106(/*hidden argument*/NULL);
				String_t* L_28 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_26, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_27, /*hidden argument*/NULL);
				V_5 = L_28;
			}

IL_00da:
			{
				int32_t L_29 = V_6;
				String_t* L_30 = V_5;
				InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_31 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var);
				InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14(L_31, L_29, L_30, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26_RuntimeMethod_var);
			}
		} // end catch (depth: 2)

CATCH_00e4:
		{ // begin catch(System.Exception)
			V_8 = ((Exception_t *)__exception_local);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			FirebaseApp_OnAllAppsDestroyed_m6D2ADF3AFBC105388CB7D63FA431CF5BAF9FA94D(/*hidden argument*/NULL);
			Exception_t * L_32 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, FirebaseApp_CreateAndTrack_m7FC684DE29AF92053981EB1323B38DBC4D34AC26_RuntimeMethod_var);
		} // end catch (depth: 2)

IL_00ee:
		{
			intptr_t L_33 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_3), /*hidden argument*/NULL);
			bool L_34 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_33, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_010c;
			}
		}

IL_0104:
		{
			V_9 = (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)NULL;
			IL2CPP_LEAVE(0x202, FINALLY_01d0);
		}

IL_010c:
		{
			V_10 = (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)NULL;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * L_35 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_cPtrToProxy_6();
			intptr_t L_36 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_3), /*hidden argument*/NULL);
			NullCheck(L_35);
			bool L_37 = Dictionary_2_TryGetValue_m897CB1E1E85B5420551BA39A79F33E380D02EEEA(L_35, (intptr_t)L_36, (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D **)(&V_10), /*hidden argument*/Dictionary_2_TryGetValue_m897CB1E1E85B5420551BA39A79F33E380D02EEEA_RuntimeMethod_var);
			if (!L_37)
			{
				goto IL_015b;
			}
		}

IL_0127:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_38 = V_10;
			if (!L_38)
			{
				goto IL_015b;
			}
		}

IL_012e:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_39 = ___existingProxy1;
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_40 = V_10;
			if ((((RuntimeObject*)(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)L_39) == ((RuntimeObject*)(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)L_40)))
			{
				goto IL_0152;
			}
		}

IL_0136:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_41 = ___existingProxy1;
			NullCheck(L_41);
			String_t* L_42 = FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8_inline(L_41, /*hidden argument*/NULL);
			String_t* L_43 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralB7EFBEA6AABC35E96367379C5A6B509BB4044717, L_42, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
			LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(3, L_43, /*hidden argument*/NULL);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_44 = ___existingProxy1;
			NullCheck(L_44);
			FirebaseApp_Dispose_mD97452CFB97FC00105EB0369582537ED1C457A93(L_44, /*hidden argument*/NULL);
		}

IL_0152:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_45 = V_10;
			V_9 = L_45;
			IL2CPP_LEAVE(0x202, FINALLY_01d0);
		}

IL_015b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * L_46 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_cPtrToProxy_6();
			NullCheck(L_46);
			int32_t L_47 = Dictionary_2_get_Count_m48374F40728F7E5FC8EAA23E458292E5475B4EB3(L_46, /*hidden argument*/Dictionary_2_get_Count_m48374F40728F7E5FC8EAA23E458292E5475B4EB3_RuntimeMethod_var);
			if (L_47)
			{
				goto IL_019d;
			}
		}

IL_016a:
		{
			String_t* L_48 = PlatformInformation_get_RuntimeName_m7DC9B4B120826252A1359FBB00EEA9CCA0B9FE81(/*hidden argument*/NULL);
			String_t* L_49 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral875842D645C31A13810035132C84A4C226BFDDA6, L_48, /*hidden argument*/NULL);
			V_11 = L_49;
			String_t* L_50 = V_11;
			String_t* L_51 = VersionInfo_get_SdkVersion_m98A33172434D6EA468C4FF32AC941045D88DCF8B(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164(L_50, L_51, /*hidden argument*/NULL);
			String_t* L_52 = V_11;
			String_t* L_53 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_52, _stringLiteralDE83EFF84A2045FE5379CA94C53B51BA575BD5A6, /*hidden argument*/NULL);
			String_t* L_54 = PlatformInformation_get_RuntimeVersion_m449590D737405693CC7C1AF5878FBAED5B49852F(/*hidden argument*/NULL);
			FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164(L_53, L_54, /*hidden argument*/NULL);
		}

IL_019d:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_55 = V_1;
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_56 = V_1;
			NullCheck(L_56);
			String_t* L_57 = FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75(L_56, /*hidden argument*/NULL);
			NullCheck(L_55);
			L_55->set_name_3(L_57);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_58 = V_1;
			NullCheck(L_58);
			FirebaseApp_AddReference_m1B148D579E5DBB9E6608813E714769757F33142B(L_58, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			bool L_59 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_crashlyticsInitializationAttempted_10();
			if (L_59)
			{
				goto IL_01cb;
			}
		}

IL_01b9:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			bool L_60 = FirebaseApp_IsCheckDependenciesRunning_m35488E6B310C9CF1BC00E4464028166723C3F078(/*hidden argument*/NULL);
			if (L_60)
			{
				goto IL_01cb;
			}
		}

IL_01c3:
		{
			V_0 = (bool)1;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_crashlyticsInitializationAttempted_10((bool)1);
		}

IL_01cb:
		{
			IL2CPP_LEAVE(0x1D7, FINALLY_01d0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01d0;
	}

FINALLY_01d0:
	{ // begin finally (depth: 1)
		RuntimeObject * L_61 = V_2;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_61, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(464)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(464)
	{
		IL2CPP_JUMP_TBL(0x202, IL_0202)
		IL2CPP_JUMP_TBL(0x1D7, IL_01d7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01d7:
	{
		bool L_62 = V_0;
		if (!L_62)
		{
			goto IL_0200;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_63 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_17();
		if (L_63)
		{
			goto IL_01f5;
		}
	}
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_64 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_64, NULL, (intptr_t)((intptr_t)FirebaseApp_U3CCreateAndTrackU3Em__1_m9C34C3C32726662CBE52EDB06D70C5E197AF62A5_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_17(L_64);
	}

IL_01f5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_65 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_17();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t51D07B8757CB709D7830B3431AF44BA204633631_il2cpp_TypeInfo_var);
		FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5(L_65, /*hidden argument*/FirebaseHandler_RunOnMainThread_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m9D9C566E73448622BD4162A06522653697A773B5_RuntimeMethod_var);
	}

IL_0200:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_66 = V_1;
		return L_66;
	}

IL_0202:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_67 = V_9;
		return L_67;
	}
}
// System.Void Firebase.FirebaseApp::ThrowIfCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThreadLock_14();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			int32_t L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThread_13();
			if ((((int32_t)L_2) == ((int32_t)(-1))))
			{
				goto IL_0036;
			}
		}

IL_0017:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			int32_t L_3 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThread_13();
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_4 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
			NullCheck(L_4);
			int32_t L_5 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_3) == ((int32_t)L_5)))
			{
				goto IL_0036;
			}
		}

IL_002b:
		{
			InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, _stringLiteralC79C1E7C1AB013FFB3AD9A42073405EF4995E70F, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, FirebaseApp_ThrowIfCheckDependenciesRunning_m6452309AE10D2E53CCA8457A4D8A181B164D05EA_RuntimeMethod_var);
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0042:
	{
		return;
	}
}
// System.Boolean Firebase.FirebaseApp::IsCheckDependenciesRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_IsCheckDependenciesRunning_m35488E6B310C9CF1BC00E4464028166723C3F078 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_IsCheckDependenciesRunning_m35488E6B310C9CF1BC00E4464028166723C3F078_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThreadLock_14();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		int32_t L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_CheckDependenciesThread_13();
		V_1 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		IL2CPP_LEAVE(0x24, FINALLY_001d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// Firebase.AppOptions Firebase.FirebaseApp::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * FirebaseApp_get_Options_m98E649DAB99D126DC16D6E78682F933B02049180 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_get_Options_m98E649DAB99D126DC16D6E78682F933B02049180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseApp_ThrowIfNull_m408BCFBB4ED87F4FF412F374897F083E87897315(__this, /*hidden argument*/NULL);
		AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * L_0 = FirebaseApp_options_m246546AF14ED87EA3EDB8095EA99C5AA2396E8B4(__this, /*hidden argument*/NULL);
		AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * L_1 = (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F *)il2cpp_codegen_object_new(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F_il2cpp_TypeInfo_var);
		AppOptions__ctor_m4B51654E54F4784FA7A21269288E4DB9A11DDEC4(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.AppOptionsInternal Firebase.FirebaseApp::options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * FirebaseApp_options_m246546AF14ED87EA3EDB8095EA99C5AA2396E8B4 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_options_m246546AF14ED87EA3EDB8095EA99C5AA2396E8B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		intptr_t L_1 = AppUtilPINVOKE_Firebase_App_FirebaseApp_options_m2860C63F3B2A12C2358DB5B674B07CAE5EDE4E5D(L_0, /*hidden argument*/NULL);
		AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * L_2 = (AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 *)il2cpp_codegen_object_new(AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8_il2cpp_TypeInfo_var);
		AppOptionsInternal__ctor_mBA3D4999FA58E5D0E10F920846372ACD71CDEDD0(L_2, (intptr_t)L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, FirebaseApp_options_m246546AF14ED87EA3EDB8095EA99C5AA2396E8B4_RuntimeMethod_var);
	}

IL_0022:
	{
		AppOptionsInternal_tBC5D797EDB9EBD1113A5254647921787FBE266E8 * L_5 = V_0;
		return L_5;
	}
}
// System.String Firebase.FirebaseApp::get_NameInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_FirebaseApp_NameInternal_get_m3FCAAB68F8E03CE3A3079B717D5C596D4561310F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseApp_get_NameInternal_m89112573EBE5801863EA50B17FBAE20CBE855C75_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::CreateInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_CreateInternal_m7C9DA4F992AD0B435BE57A04D5BE3537AB2A0233 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_CreateInternal_m7C9DA4F992AD0B435BE57A04D5BE3537AB2A0233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_1 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B3_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		intptr_t L_0 = AppUtilPINVOKE_Firebase_App_FirebaseApp_CreateInternal__SWIG_0_m880301BF18F95C1602A9C5D802DDAE626D45CAD2(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		intptr_t L_1 = V_0;
		bool L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		G_B3_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)(NULL));
		goto IL_0023;
	}

IL_001c:
	{
		intptr_t L_3 = V_0;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_4 = (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)il2cpp_codegen_object_new(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp__ctor_mB94B4439B6474A9B3420A388F4C847153BB7DA2B(L_4, (intptr_t)L_3, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0023:
	{
		V_1 = G_B3_0;
		bool L_5 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		Exception_t * L_6 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, FirebaseApp_CreateInternal_m7C9DA4F992AD0B435BE57A04D5BE3537AB2A0233_RuntimeMethod_var);
	}

IL_0034:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_7 = V_1;
		return L_7;
	}
}
// System.Void Firebase.FirebaseApp::ReleaseReferenceInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_ReleaseReferenceInternal_m251EC6B33F516335E844BC8CBC7531205D41C934 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_ReleaseReferenceInternal_m251EC6B33F516335E844BC8CBC7531205D41C934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1 = FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_FirebaseApp_ReleaseReferenceInternal_m97C1DE32BCE04F1AC59A117C6ED30E138E424D26(L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseApp_ReleaseReferenceInternal_m251EC6B33F516335E844BC8CBC7531205D41C934_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::RegisterLibraryInternal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164 (String_t* ___library0, String_t* ___version1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___library0;
		String_t* L_1 = ___version1;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_FirebaseApp_RegisterLibraryInternal_mE23204CA5E247273D5F52CBB42F8D708C27C1DC9(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseApp_RegisterLibraryInternal_mEE0AF7BC02554570144A1305095A22FC07602164_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.FirebaseApp::AppSetDefaultConfigPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_AppSetDefaultConfigPath_m55D859EEC14CA1FFEF3DC3422F5CE8C1328E097F (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_AppSetDefaultConfigPath_m55D859EEC14CA1FFEF3DC3422F5CE8C1328E097F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_FirebaseApp_AppSetDefaultConfigPath_mD2E944BB42CC3E9F6F443F3D6DC65CF9E4F639F3(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, FirebaseApp_AppSetDefaultConfigPath_m55D859EEC14CA1FFEF3DC3422F5CE8C1328E097F_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.String Firebase.FirebaseApp::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_0 = AppUtilPINVOKE_Firebase_App_FirebaseApp_DefaultName_get_m13F1175243A022F0686B765261DF2FFC68B1822F(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, FirebaseApp_get_DefaultName_mFAACACB5590298942D3A75F2A6BC53BD6531963C_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// Firebase.FirebaseApp Firebase.FirebaseApp::<Create>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_U3CCreateU3Em__0_m0C29C0EE9E16A55E80148E3233D6491114F11CA6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_U3CCreateU3Em__0_m0C29C0EE9E16A55E80148E3233D6491114F11CA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = FirebaseApp_CreateInternal_m7C9DA4F992AD0B435BE57A04D5BE3537AB2A0233(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Firebase.FirebaseApp::<CreateAndTrack>m__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseApp_U3CCreateAndTrackU3Em__1_m9C34C3C32726662CBE52EDB06D70C5E197AF62A5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseApp_U3CCreateAndTrackU3Em__1_m9C34C3C32726662CBE52EDB06D70C5E197AF62A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		bool L_0 = FirebaseApp_InitializeCrashlyticsIfPresent_m28C2D06F823206C421BF3D241335A8FA4D26A91B(/*hidden argument*/NULL);
		return L_0;
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
// System.Void Firebase.Platform.FirebaseAppUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils__ctor_m69CA1CBCD58CB3128DF35E9560A3D1D38005845F (FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.FirebaseAppUtils Firebase.Platform.FirebaseAppUtils::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * FirebaseAppUtils_get_Instance_m79B79F13BD6329A947B640DB886DC398439A90BF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAppUtils_get_Instance_m79B79F13BD6329A947B640DB886DC398439A90BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * L_0 = ((FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtils::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils_TranslateDllNotFoundException_m6E4E3109BD0827EE0E675EE9CD50E9C6EE343356 (FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAppUtils_TranslateDllNotFoundException_m6E4E3109BD0827EE0E675EE9CD50E9C6EE343356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtils::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils_PollCallbacks_m0A88A069EC5477A1CC9BFCEDC55DED431EE64E91 (FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * __this, const RuntimeMethod* method)
{
	{
		AppUtil_PollCallbacks_m75E222C3BCE3563C9C27265D3AE011E3E342E527(/*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.PlatformLogLevel Firebase.Platform.FirebaseAppUtils::GetLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseAppUtils_GetLogLevel_m9E036F13631BCE81463AA50592FBCD54E9CB09D7 (FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAppUtils_GetLogLevel_m9E036F13631BCE81463AA50592FBCD54E9CB09D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		int32_t L_0 = FirebaseApp_get_LogLevel_mF5210CA8F87660D4B3747792C00C98579142CAAF(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0013;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(Firebase.InitializationException)
		V_0 = 1;
		goto IL_0013;
	} // end catch (depth: 1)

IL_0013:
	{
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		int32_t L_2 = LogUtil_ConvertLogLevel_mD765D2120AA5F1681CFFCB822C189152704565FC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtils__cctor_mD68087540805827D81757968316C3971FF48B537 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAppUtils__cctor_mD68087540805827D81757968316C3971FF48B537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * L_0 = (FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E *)il2cpp_codegen_object_new(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		FirebaseAppUtils__ctor_m69CA1CBCD58CB3128DF35E9560A3D1D38005845F(L_0, /*hidden argument*/NULL);
		((FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
// System.Void Firebase.Unity.Editor.FirebaseEditorExtensions::SetEditorP12Password(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorExtensions_SetEditorP12Password_m7EDA2F7808F7F61FEDAE603293EC5409F1195022 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___p12Password1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String Firebase.Unity.Editor.FirebaseEditorExtensions::GetEditorP12Password(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseEditorExtensions_GetEditorP12Password_mDCABA88F7DFF34CF4FE687BF70FD5150A325CD5F (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorExtensions_GetEditorP12Password_mDCABA88F7DFF34CF4FE687BF70FD5150A325CD5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Firebase.Unity.Editor.FirebaseEditorExtensions::SetEditorP12FileName(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorExtensions_SetEditorP12FileName_m2E3AFED73FBD223576E1C2053AFEF694002CFA29 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___p12Filename1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String Firebase.Unity.Editor.FirebaseEditorExtensions::GetEditorP12FileName(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseEditorExtensions_GetEditorP12FileName_mF5C096B058399025F1D6B55BDE367B4E4F37FE42 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorExtensions_GetEditorP12FileName_mF5C096B058399025F1D6B55BDE367B4E4F37FE42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Firebase.Unity.Editor.FirebaseEditorExtensions::SetEditorServiceAccountEmail(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorExtensions_SetEditorServiceAccountEmail_mAA7C738A48464C8DD84B6AF7B409292C3E8B48A9 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___email1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String Firebase.Unity.Editor.FirebaseEditorExtensions::GetEditorServiceAccountEmail(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseEditorExtensions_GetEditorServiceAccountEmail_m214A056554923947FF1C05E749922457ED17F0AE (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorExtensions_GetEditorServiceAccountEmail_m214A056554923947FF1C05E749922457ED17F0AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Firebase.Unity.Editor.FirebaseEditorExtensions::SetEditorAuthUserId(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorExtensions_SetEditorAuthUserId_mFAD8613E82156DA8BBC3E686DD35AE74BAAB1D54 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___uid1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String Firebase.Unity.Editor.FirebaseEditorExtensions::GetEditorAuthUserId(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseEditorExtensions_GetEditorAuthUserId_m6BB379B4D96BA75F488582B3E0FD3F01F0632269 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorExtensions_GetEditorAuthUserId_m6BB379B4D96BA75F488582B3E0FD3F01F0632269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Firebase.Unity.Editor.FirebaseEditorExtensions::SetCertPemFile(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorExtensions_SetCertPemFile_m8A967B4FD8AA4C5A47C530C0BA466788B7BDC0DF (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___certName1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String Firebase.Unity.Editor.FirebaseEditorExtensions::GetCertPemFile(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseEditorExtensions_GetCertPemFile_m089CFFE9DF69A0CC16CB1AE7F08D7CC5DCC95873 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorExtensions_GetCertPemFile_m089CFFE9DF69A0CC16CB1AE7F08D7CC5DCC95873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
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
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___errorCode0;
		FirebaseException_set_ErrorCode_mE216C4C0EBAACC7ADA04ED328DEC1474680F9B5A_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Firebase.FirebaseException::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseException_get_ErrorCode_mA7E9CF1AB755AEEE49032E4AC4A7A253C3735F60 (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Firebase.FirebaseException::set_ErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException_set_ErrorCode_mE216C4C0EBAACC7ADA04ED328DEC1474680F9B5A (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_17(L_0);
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
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.FutureBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Finalize_m02E7843DEC68FBDDCA2B009E905FE4657C2B04AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
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
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
			AppUtilPINVOKE_Firebase_App_delete_FutureBase_mC0371BBEAC15767EEC2E7FEAFB5261B2D7273129(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		return;
	}
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		int32_t L_1 = AppUtilPINVOKE_Firebase_App_FutureBase_status_m69559C80656F21136A45099E3C62CBC74C2A1BCD(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA_RuntimeMethod_var);
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		int32_t L_1 = AppUtilPINVOKE_Firebase_App_FutureBase_error_mAA54B287095DA9B85322B3CE60E9CAF44D0B9048(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03_RuntimeMethod_var);
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_1 = AppUtilPINVOKE_Firebase_App_FutureBase_error_message_m070740D938581C3EA594AD8BA0C3B60016F8D442(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774_RuntimeMethod_var);
	}

IL_001c:
	{
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
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_mCE6B67DCF469CF7CC9CC8A5C6C2E6CAC73D6366F (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InitializationException__ctor_mCE6B67DCF469CF7CC9CC8A5C6C2E6CAC73D6366F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___result0;
		InitializationException_set_InitResult_mD6E68B41830F64CB54B3BF7FFE915263D8AD8E34_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14 (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___result0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___result0;
		InitializationException_set_InitResult_mD6E68B41830F64CB54B3BF7FFE915263D8AD8E34_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m56641135A502F6D70F771A69157A0D674EB99DD3 (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___result0, String_t* ___message1, Exception_t * ___inner2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InitializationException__ctor_m56641135A502F6D70F771A69157A0D674EB99DD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		Exception_t * L_1 = ___inner2;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___result0;
		InitializationException_set_InitResult_mD6E68B41830F64CB54B3BF7FFE915263D8AD8E34_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.InitializationException::set_InitResult(Firebase.InitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException_set_InitResult_mD6E68B41830F64CB54B3BF7FFE915263D8AD8E34 (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CInitResultU3Ek__BackingField_17(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107(int32_t ___logLevel0, char* ___message1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message1' to managed representation
	String_t* ____message1_unmarshaled = NULL;
	____message1_unmarshaled = il2cpp_codegen_marshal_string_result(___message1);

	// Managed method invocation
	LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107(___logLevel0, ____message1_unmarshaled, NULL);

}
// System.Void Firebase.LogUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil__cctor_m3A18E1D17E9D3E61E2A8B33C51742249F708BB0A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogUtil__cctor_m3A18E1D17E9D3E61E2A8B33C51742249F708BB0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->set__instance_0((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 *)NULL);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->set_InitializeLoggingLock_1(L_0);
		LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * L_1 = (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 *)il2cpp_codegen_object_new(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogUtil__ctor_mE6F41CDC7EFF92D76E3D07B5F8350BF7D5A4983D(L_1, /*hidden argument*/NULL);
		((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->set__instance_0(L_1);
		return;
	}
}
// System.Void Firebase.LogUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil__ctor_mE6F41CDC7EFF92D76E3D07B5F8350BF7D5A4983D (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogUtil__ctor_mE6F41CDC7EFF92D76E3D07B5F8350BF7D5A4983D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * L_0 = ((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_3();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * L_1 = (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 *)il2cpp_codegen_object_new(LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84_il2cpp_TypeInfo_var);
		LogMessageDelegate__ctor_mEBA3FFB53CCE522DBB1B5571A5623A649E6643F0(L_1, NULL, (intptr_t)((intptr_t)LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_3(L_1);
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * L_2 = ((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_3();
		AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.LogUtil::InitializeLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_InitializeLogging_m05046FDF1759F0A851931F7FCF743FAA24BDB434 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogUtil_InitializeLogging_m05046FDF1759F0A851931F7FCF743FAA24BDB434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_StaticFields*)il2cpp_codegen_static_fields_for(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var))->get_InitializeLoggingLock_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		AppUtil_AppEnableLogCallback_m01A441841A004A6048FCFC012F083BFAA3581C66((bool)1, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x1E, FINALLY_0017);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0017;
	}

FINALLY_0017:
	{ // begin finally (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_2, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(23)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(23)
	{
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001e:
	{
		return;
	}
}
// Firebase.Platform.PlatformLogLevel Firebase.LogUtil::ConvertLogLevel(Firebase.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogUtil_ConvertLogLevel_mD765D2120AA5F1681CFFCB822C189152704565FC (int32_t ___logLevel0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___logLevel0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0021;
			}
			case 3:
			{
				goto IL_0023;
			}
			case 4:
			{
				goto IL_0025;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001f:
	{
		return (int32_t)(0);
	}

IL_0021:
	{
		return (int32_t)(2);
	}

IL_0023:
	{
		return (int32_t)(3);
	}

IL_0025:
	{
		return (int32_t)(4);
	}

IL_0027:
	{
		return (int32_t)(1);
	}
}
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___logLevel0;
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		int32_t L_1 = LogUtil_ConvertLogLevel_mD765D2120AA5F1681CFFCB822C189152704565FC(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA65FB8012E13AA044A6FF15E9792D2755AF84B86(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.LogUtil::LogMessageFromCallback(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogUtil_LogMessageFromCallback_m7B4B1B33C46B05A14DE066D91BB2110DF44B8107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		bool L_0 = FirebaseLogger_get_CanRedirectNativeLogs_mA3ED5F874C3D698FB2D1656B3B4E1EAFE257BBF4(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___logLevel0;
		String_t* L_2 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void Firebase.LogUtil::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Finalize_mD288B9870DD8D7AF744044513FCA62F9AB42A85C (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		LogUtil_Dispose_m3E431D1105B6EBDC3183FA2B55AA7608607BBC6D(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Firebase.LogUtil::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Dispose_mB12D003420083CAA79A613F44A635DA5418C989D (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogUtil_Dispose_mB12D003420083CAA79A613F44A635DA5418C989D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogUtil_Dispose_m3E431D1105B6EBDC3183FA2B55AA7608607BBC6D(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.LogUtil::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_Dispose_m3E431D1105B6EBDC3183FA2B55AA7608607BBC6D (LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_2();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		AppUtil_SetLogFunction_m9B6FD50FE9307EC41EB21DD82665887C9F6514BB((LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 *)NULL, /*hidden argument*/NULL);
		__this->set__disposed_2((bool)1);
	}

IL_0018:
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
// System.Void Firebase.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_mD5BA102663DCE67244B79EF374E5641E765AB5CB (MonoPInvokeCallbackAttribute_tF7B8E107CCA490884BAD9F808FA46A4943C293AA * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.StringStringMap::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap__ctor_mB3137F09FFB1EC3F5621EA75DBBEF82F9487D366 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.StringStringMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap__ctor_mDD72D1A9A58D226FEA04CB062E9240FBF4B0949E (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap__ctor_mDD72D1A9A58D226FEA04CB062E9240FBF4B0949E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		intptr_t L_0 = AppUtilPINVOKE_Firebase_App_new_StringStringMap__SWIG_0_m86FE2CFAD5F22EA239913F770E943D1A2AAA4326(/*hidden argument*/NULL);
		StringStringMap__ctor_mB3137F09FFB1EC3F5621EA75DBBEF82F9487D366(__this, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, StringStringMap__ctor_mDD72D1A9A58D226FEA04CB062E9240FBF4B0949E_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.StringStringMap::getCPtr(Firebase.StringStringMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  StringStringMap_getCPtr_m7DDDDE0EC47182907217F5620BDEDF5BC8018657 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_getCPtr_m7DDDDE0EC47182907217F5620BDEDF5BC8018657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.StringStringMap::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Finalize_m54B7DA5EEEDF3E469B05EC36A6FCE520DE2AF925 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(22 /* System.Void Firebase.StringStringMap::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
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
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.StringStringMap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Dispose_mA58EFAC215289EDDB29347D7FB6EC3E9E84FADDF (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_Dispose_mA58EFAC215289EDDB29347D7FB6EC3E9E84FADDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
			AppUtilPINVOKE_Firebase_App_delete_StringStringMap_mE6FF26B91AFEF51D02907B55961C4A8045C3E0BB(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		return;
	}
}
// System.String Firebase.StringStringMap::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringStringMap_get_Item_mB384423BD033B98EE3457212BE65092712C56789 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		String_t* L_1 = StringStringMap_getitem_m9E38CEC82B11AC188D75FA0BBB8A8751AC30D6D4(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Firebase.StringStringMap::set_Item(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_set_Item_m8A9BD489465331D5D800240D38CBB7965925F1F0 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		String_t* L_1 = ___value1;
		StringStringMap_setitem_m17A4FFDF71A27F385C53EC0C18EC02BE031CEE0F(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Firebase.StringStringMap::TryGetValue(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_TryGetValue_m6EF0C9A964D2D834925293A31A337070066BFE31 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		bool L_1 = StringStringMap_ContainsKey_mFF9F5FC22F5DF7900847009A2587F31967F11CCF(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		String_t** L_2 = ___value1;
		String_t* L_3 = ___key0;
		String_t* L_4 = StringStringMap_get_Item_mB384423BD033B98EE3457212BE65092712C56789(__this, L_3, /*hidden argument*/NULL);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_4);
		return (bool)1;
	}

IL_0017:
	{
		String_t** L_5 = ___value1;
		*((RuntimeObject **)L_5) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)NULL);
		return (bool)0;
	}
}
// System.Int32 Firebase.StringStringMap::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringStringMap_get_Count_m907D4DD769A90CAA0683591119FDC3728EEA5BB3 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = StringStringMap_size_mBB463BF4F9C6625F91343E1E8F38418A790F1D00(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Firebase.StringStringMap::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_get_IsReadOnly_m96FF99B82D36FD2E3BA738A31E98197987F9AA01 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Collections.Generic.ICollection`1<System.String> Firebase.StringStringMap::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStringMap_get_Keys_m913897400DEF518DFD7D6E0CCEB1FE2026A2B2D3 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_get_Keys_m913897400DEF518DFD7D6E0CCEB1FE2026A2B2D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		int32_t L_1 = StringStringMap_get_Count_m907D4DD769A90CAA0683591119FDC3728EEA5BB3(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_3 = StringStringMap_create_iterator_begin_m3F118062973941F86B02039418B2A2E5475F4377(__this, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_3;
		V_3 = 0;
		goto IL_0033;
	}

IL_0022:
	{
		RuntimeObject* L_4 = V_0;
		intptr_t L_5 = V_2;
		String_t* L_6 = StringStringMap_get_next_key_m5748FA89B2C25838202E9E28D1DFB4FB8C33CE73(__this, (intptr_t)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_4, L_6);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_10 = V_2;
		StringStringMap_destroy_iterator_m345F0B0BBC506B42F149223404B1A9F205232F87(__this, (intptr_t)L_10, /*hidden argument*/NULL);
	}

IL_0041:
	{
		RuntimeObject* L_11 = V_0;
		return L_11;
	}
}
// System.Collections.Generic.ICollection`1<System.String> Firebase.StringStringMap::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStringMap_get_Values_m56432463067868C092985B3D5A2066463C3FB7AC (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_get_Values_m56432463067868C092985B3D5A2066463C3FB7AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * L_1 = StringStringMap_GetEnumerator_m55C288A948D94A096AD2FA8D042B8B816E6A6C9E(__this, /*hidden argument*/NULL);
		V_2 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_0012:
		{
			StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * L_2 = V_2;
			NullCheck(L_2);
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_3 = StringStringMapEnumerator_get_Current_m76DE586A735687200DC7ACF803FEF75527302F06(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			RuntimeObject* L_4 = V_0;
			String_t* L_5 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			NullCheck(L_4);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_4, L_5);
		}

IL_0026:
		{
			StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * L_6 = V_2;
			NullCheck(L_6);
			bool L_7 = StringStringMapEnumerator_MoveNext_m22BD0722C730E02430014E65174344AA499F336F(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0012;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		{
			StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_0042;
			}
		}

IL_003c:
		{
			StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * L_9 = V_2;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(54)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0043:
	{
		RuntimeObject* L_10 = V_0;
		return L_10;
	}
}
// System.Void Firebase.StringStringMap::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Add_m47B75C347EDA853CA95EFE263E2B645A0241D430 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_Add_m47B75C347EDA853CA95EFE263E2B645A0241D430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		String_t* L_1 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		StringStringMap_Add_m9D2175007BBA9E8488671E9C13A08F247D5C2AED(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Firebase.StringStringMap::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_Remove_m3443C8BF4781ADB1C64089E6DA44095D341329D2 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_Remove_m3443C8BF4781ADB1C64089E6DA44095D341329D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_0 = ___item0;
		bool L_1 = StringStringMap_Contains_mE32677A31CE147FDD041B47D9D48914312DB8AF4(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_2 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		bool L_3 = StringStringMap_Remove_m3E16E65DA11460219114402300F67FA76D87B408(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean Firebase.StringStringMap::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_Contains_mE32677A31CE147FDD041B47D9D48914312DB8AF4 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_Contains_mE32677A31CE147FDD041B47D9D48914312DB8AF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		String_t* L_1 = StringStringMap_get_Item_mB384423BD033B98EE3457212BE65092712C56789(__this, L_0, /*hidden argument*/NULL);
		String_t* L_2 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		bool L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		return (bool)1;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Void Firebase.StringStringMap::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.String>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_CopyTo_mD1D62132C4D6B43C716FBDD75A6628BD7DF618F8 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_CopyTo_mD1D62132C4D6B43C716FBDD75A6628BD7DF618F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, StringStringMap_CopyTo_mD1D62132C4D6B43C716FBDD75A6628BD7DF618F8_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___arrayIndex1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_3, _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4, _stringLiteralFB12F16C75DE3806ED28E20C65FB81D432F0D52F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StringStringMap_CopyTo_mD1D62132C4D6B43C716FBDD75A6628BD7DF618F8_RuntimeMethod_var);
	}

IL_0028:
	{
		KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* L_4 = ___array0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_4);
		int32_t L_5 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)(RuntimeArray *)L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_6, _stringLiteralF2A5607525186BE61B973E77753BBA0D8227A406, _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, StringStringMap_CopyTo_mD1D62132C4D6B43C716FBDD75A6628BD7DF618F8_RuntimeMethod_var);
	}

IL_0044:
	{
		int32_t L_7 = ___arrayIndex1;
		int32_t L_8 = StringStringMap_get_Count_m907D4DD769A90CAA0683591119FDC3728EEA5BB3(__this, /*hidden argument*/NULL);
		KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* L_9 = ___array0;
		NullCheck(L_9);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8))) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))))
		{
			goto IL_005f;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, _stringLiteral87335D17F4C1DED94C576C65C1DC4F16D278C988, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, StringStringMap_CopyTo_mD1D62132C4D6B43C716FBDD75A6628BD7DF618F8_RuntimeMethod_var);
	}

IL_005f:
	{
		RuntimeObject* L_11 = StringStringMap_get_Keys_m913897400DEF518DFD7D6E0CCEB1FE2026A2B2D3(__this, /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323(L_12, L_11, /*hidden argument*/List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_12;
		V_1 = 0;
		goto IL_0099;
	}

IL_0072:
	{
		RuntimeObject* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		String_t* L_15 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var, L_13, L_14);
		V_2 = L_15;
		KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* L_16 = ___array0;
		String_t* L_17 = V_2;
		String_t* L_18 = V_2;
		String_t* L_19 = StringStringMap_get_Item_mB384423BD033B98EE3457212BE65092712C56789(__this, L_18, /*hidden argument*/NULL);
		KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m0119BCDA2BA84CD54D128DD6D692F4CEF57F602F((&L_20), L_17, L_19, /*hidden argument*/KeyValuePair_2__ctor_m0119BCDA2BA84CD54D128DD6D692F4CEF57F602F_RuntimeMethod_var);
		KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_21 = L_20;
		RuntimeObject * L_22 = Box(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_il2cpp_TypeInfo_var, &L_21);
		int32_t L_23 = ___arrayIndex1;
		int32_t L_24 = V_1;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_16);
		Array_SetValue_mD28884941182C5B7118CFBA3D55DB9CEA8797455((RuntimeArray *)(RuntimeArray *)L_16, L_22, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24)), /*hidden argument*/NULL);
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0099:
	{
		int32_t L_26 = V_1;
		RuntimeObject* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_27);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0072;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Firebase.StringStringMap::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<string,string>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStringMap_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CstringU2CstringU3EU3E_GetEnumerator_m90054F1D2FAC7C835F072097638462CE5493A794 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CstringU2CstringU3EU3E_GetEnumerator_m90054F1D2FAC7C835F072097638462CE5493A794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * L_0 = (StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 *)il2cpp_codegen_object_new(StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846_il2cpp_TypeInfo_var);
		StringStringMapEnumerator__ctor_m765FC216E9A67EA91E8D360C32ED59B5EF59A43A(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.IEnumerator Firebase.StringStringMap::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStringMap_System_Collections_IEnumerable_GetEnumerator_m85EB42397DC75F324F35121091E81C6F86E9984C (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_System_Collections_IEnumerable_GetEnumerator_m85EB42397DC75F324F35121091E81C6F86E9984C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * L_0 = (StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 *)il2cpp_codegen_object_new(StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846_il2cpp_TypeInfo_var);
		StringStringMapEnumerator__ctor_m765FC216E9A67EA91E8D360C32ED59B5EF59A43A(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Firebase.StringStringMap_StringStringMapEnumerator Firebase.StringStringMap::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * StringStringMap_GetEnumerator_m55C288A948D94A096AD2FA8D042B8B816E6A6C9E (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_GetEnumerator_m55C288A948D94A096AD2FA8D042B8B816E6A6C9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * L_0 = (StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 *)il2cpp_codegen_object_new(StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846_il2cpp_TypeInfo_var);
		StringStringMapEnumerator__ctor_m765FC216E9A67EA91E8D360C32ED59B5EF59A43A(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt32 Firebase.StringStringMap::size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t StringStringMap_size_mBB463BF4F9C6625F91343E1E8F38418A790F1D00 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_size_mBB463BF4F9C6625F91343E1E8F38418A790F1D00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		uint32_t L_1 = AppUtilPINVOKE_Firebase_App_StringStringMap_size_mD20871B9533E4CF7FD79FF3C67ED7ECA09259481(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StringStringMap_size_mBB463BF4F9C6625F91343E1E8F38418A790F1D00_RuntimeMethod_var);
	}

IL_001c:
	{
		uint32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.StringStringMap::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Clear_mB1FFA2B7D6635E95F3A55805C39BE0AD3B14F21E (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_Clear_mB1FFA2B7D6635E95F3A55805C39BE0AD3B14F21E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_StringStringMap_Clear_m76C59B1A8B83BBBA5FFE4943C4DD96B735A3637B(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, StringStringMap_Clear_mB1FFA2B7D6635E95F3A55805C39BE0AD3B14F21E_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.String Firebase.StringStringMap::getitem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringStringMap_getitem_m9E38CEC82B11AC188D75FA0BBB8A8751AC30D6D4 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_getitem_m9E38CEC82B11AC188D75FA0BBB8A8751AC30D6D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_2 = AppUtilPINVOKE_Firebase_App_StringStringMap_getitem_mAC201F586854608D53D0B2BCF43DBAC036D016A9(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, StringStringMap_getitem_m9E38CEC82B11AC188D75FA0BBB8A8751AC30D6D4_RuntimeMethod_var);
	}

IL_001d:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.StringStringMap::setitem(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_setitem_m17A4FFDF71A27F385C53EC0C18EC02BE031CEE0F (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, String_t* ___x1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_setitem_m17A4FFDF71A27F385C53EC0C18EC02BE031CEE0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___key0;
		String_t* L_2 = ___x1;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_StringStringMap_setitem_mD798D2464A2E7926F427D191CD45D382E2A91865(L_0, L_1, L_2, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, StringStringMap_setitem_m17A4FFDF71A27F385C53EC0C18EC02BE031CEE0F_RuntimeMethod_var);
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean Firebase.StringStringMap::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_ContainsKey_mFF9F5FC22F5DF7900847009A2587F31967F11CCF (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_ContainsKey_mFF9F5FC22F5DF7900847009A2587F31967F11CCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		bool L_2 = AppUtilPINVOKE_Firebase_App_StringStringMap_ContainsKey_mFFC2203AA62CE2FCD679C281A0EFF037B9D2676F(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, StringStringMap_ContainsKey_mFF9F5FC22F5DF7900847009A2587F31967F11CCF_RuntimeMethod_var);
	}

IL_001d:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.StringStringMap::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_Add_m9D2175007BBA9E8488671E9C13A08F247D5C2AED (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, String_t* ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_Add_m9D2175007BBA9E8488671E9C13A08F247D5C2AED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___key0;
		String_t* L_2 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_StringStringMap_Add_m1E7A1505A3BF61D7D21F291888C94D66689ED6A6(L_0, L_1, L_2, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, StringStringMap_Add_m9D2175007BBA9E8488671E9C13A08F247D5C2AED_RuntimeMethod_var);
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean Firebase.StringStringMap::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMap_Remove_m3E16E65DA11460219114402300F67FA76D87B408 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_Remove_m3E16E65DA11460219114402300F67FA76D87B408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		bool L_2 = AppUtilPINVOKE_Firebase_App_StringStringMap_Remove_m0DEC2E4F4B23CFE922D9FD242FE49113C66948E2(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, StringStringMap_Remove_m3E16E65DA11460219114402300F67FA76D87B408_RuntimeMethod_var);
	}

IL_001d:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.IntPtr Firebase.StringStringMap::create_iterator_begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StringStringMap_create_iterator_begin_m3F118062973941F86B02039418B2A2E5475F4377 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_create_iterator_begin_m3F118062973941F86B02039418B2A2E5475F4377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		intptr_t L_1 = AppUtilPINVOKE_Firebase_App_StringStringMap_create_iterator_begin_mFC6E8519A20F8F97DB611433F71449086C732F29(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StringStringMap_create_iterator_begin_m3F118062973941F86B02039418B2A2E5475F4377_RuntimeMethod_var);
	}

IL_001c:
	{
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
// System.String Firebase.StringStringMap::get_next_key(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringStringMap_get_next_key_m5748FA89B2C25838202E9E28D1DFB4FB8C33CE73 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, intptr_t ___swigiterator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_get_next_key_m5748FA89B2C25838202E9E28D1DFB4FB8C33CE73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		intptr_t L_1 = ___swigiterator0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		String_t* L_2 = AppUtilPINVOKE_Firebase_App_StringStringMap_get_next_key_m7539283E7C89880066AD59BC20EE0D825611D9ED(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, StringStringMap_get_next_key_m5748FA89B2C25838202E9E28D1DFB4FB8C33CE73_RuntimeMethod_var);
	}

IL_001d:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.StringStringMap::destroy_iterator(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMap_destroy_iterator_m345F0B0BBC506B42F149223404B1A9F205232F87 (StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * __this, intptr_t ___swigiterator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMap_destroy_iterator_m345F0B0BBC506B42F149223404B1A9F205232F87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		intptr_t L_1 = ___swigiterator0;
		IL2CPP_RUNTIME_CLASS_INIT(AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_il2cpp_TypeInfo_var);
		AppUtilPINVOKE_Firebase_App_StringStringMap_destroy_iterator_mC5E9F64192EEC4D6B1255AECB433FC9884131CC0(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StringStringMap_destroy_iterator_m345F0B0BBC506B42F149223404B1A9F205232F87_RuntimeMethod_var);
	}

IL_001c:
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
// System.String Firebase.VersionInfo::get_SdkVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VersionInfo_get_SdkVersion_m98A33172434D6EA468C4FF32AC941045D88DCF8B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VersionInfo_get_SdkVersion_m98A33172434D6EA468C4FF32AC941045D88DCF8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3AF2A135CDF924D3759DEF7E5281C195A034CDC6;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m88D96246E0C2DD75CFC4054F09FA9044A5B6FA90 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper__cctor_m88D96246E0C2DD75CFC4054F09FA9044A5B6FA90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_0 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_1 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_2 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_3 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_4 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_5 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_6 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_7 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_8 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_9 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_10 = (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 *)il2cpp_codegen_object_new(ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * L_11 = (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m9B64B0E9472C1DDAA639843324FD57FBCCE07E08(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * L_12 = (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m9B64B0E9472C1DDAA639843324FD57FBCCE07E08(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * L_13 = (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m9B64B0E9472C1DDAA639843324FD57FBCCE07E08(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_14 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_15 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_16 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_17 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_18 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_19 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_20 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_21 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_22 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_23 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * L_24 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AppUtil_m73FDAC85B33251A5207C88493A40F2F24D634676(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * L_25 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * L_26 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * L_27 = ((SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AppUtil_m8F9C20ECB599940EF0CFCFF5598BD3C3222E2B37(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m06C48C4611CDA458CA1AF651ED06BF7FF7EDF536 (SWIGExceptionHelper_t0F8B210957665026A77C6F87FDCECFE20FCE40B9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AppUtil(Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AppUtil_m73FDAC85B33251A5207C88493A40F2F24D634676 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___applicationDelegate0, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___arithmeticDelegate1, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___divideByZeroDelegate2, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___indexOutOfRangeDelegate3, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___invalidCastDelegate4, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___invalidOperationDelegate5, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___ioDelegate6, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___nullReferenceDelegate7, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___outOfMemoryDelegate8, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___overflowDelegate9, ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_AppUtil)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AppUtil(Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AppUtil_m8F9C20ECB599940EF0CFCFF5598BD3C3222E2B37 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentDelegate0, ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_AppUtil)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingApplicationException_mD6D4D05834648B9CE669A89E0AD6CD0D32A0EDEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_2 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArithmeticException_m99B7D12BD99B0EAE887BC2C4B43366133758A5BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * L_2 = (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 *)il2cpp_codegen_object_new(ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingDivideByZeroException_mD01159299A641E72ED233ACA5F9049D89B916FEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * L_2 = (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 *)il2cpp_codegen_object_new(DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m917EAD3BCF29EFE9E6450F3420BE2917F60CC2F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_2 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidCastException_mF21809DB109F445315F916048C030A4F86843301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_2 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidOperationException_m3C9E61FD1588B6CF1950AC28B4CC3599A7E4E16D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIOException_mE89EF518A4630B7ACD06C6C2E31E6CA3FCB01774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_2 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingNullReferenceException_m8C550DB92EB91F9325BBAF8DDF2A868F082EABCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOutOfMemoryException_mB184DCD107C95ED1930E66177083BB532FC6E037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * L_2 = (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC *)il2cpp_codegen_object_new(OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOverflowException_mE247FE196CCC5A806A4941FC95F6270BAE75653F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_2 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingSystemException_m0BFC9561278749A88CC8847749084DE5FBCC5E15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_2 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentException_m1D154F67ADBC4A696102A0BAAAE4FF18BC2D8B1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		Exception_t * L_2 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentNullException_mCB01A40C26F2595EE0928F65A06D942BEF9F881D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_8 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m355EE981BB1BAA35BB8E5C5EC2E90625C1C95166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A(L_8, /*hidden argument*/NULL);
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
// System.Boolean Firebase.AppUtilPINVOKE_SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Exception_t * L_0 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE, L_2, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_5 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, SWIGPendingException_Set_m3016052808B54728D457EB1D4E8E7306D806098A_RuntimeMethod_var);
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		int32_t L_10 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x59, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.AppUtilPINVOKE_SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Exception_t *)NULL;
		int32_t L_0 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (AppUtilPINVOKE_t1F50EBB0B0CDCF275E08D722B6829539265736BD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = ((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		Exception_t * L_8 = V_0;
		return L_8;
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.AppUtilPINVOKE_SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m8EE8BC5E0ABB17F0F9D0A2F615EE4987FD86F3B0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGStringHelper__cctor_m8EE8BC5E0ABB17F0F9D0A2F615EE4987FD86F3B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * L_0 = (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 *)il2cpp_codegen_object_new(SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_mED39AF7AB0675F58D7C5E732BB50C419BF321299(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * L_1 = ((SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_AppUtil_m72D311A8F2D513C5602B6F4E7936C2910DBECA15(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m9F305BAB06F185B49FD5AC05A407928C69D672F6 (SWIGStringHelper_t84FBFEFF7EA2E7560FA47BDB7E5B9A20BCA31ABF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.AppUtilPINVOKE_SWIGStringHelper::SWIGRegisterStringCallback_AppUtil(Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AppUtil_m72D311A8F2D513C5602B6F4E7936C2910DBECA15 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_AppUtil)(____stringDelegate0_marshaled);

}
// System.String Firebase.AppUtilPINVOKE_SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m411964D0112A7FBA74A5AA7693C8AC07D24F13BC (String_t* ___cString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___cString0;
		return L_0;
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
// System.Void Firebase.FirebaseApp_CreateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateDelegate__ctor_m9B61AF9F4EFF9CCA9FC10B8BDB5E8AD7130E4DE1 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Firebase.FirebaseApp Firebase.FirebaseApp_CreateDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * CreateDelegate_Invoke_m9FC551133A4F9301FB4F107B90F7C98A66F95BE9 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * __this, const RuntimeMethod* method)
{
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * result = NULL;
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
				typedef FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.FirebaseApp_CreateDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateDelegate_BeginInvoke_mE55A9209FBD926992A08A1F0C0DCAC9083CC66A5 (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// Firebase.FirebaseApp Firebase.FirebaseApp_CreateDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * CreateDelegate_EndInvoke_mA8FE3700C59A150FAA37B17BDAA7A44319C1116E (CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.FirebaseApp_EnableModuleParams::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams__ctor_mC9619ED6B8BE82D305359BB53BDE6274A8A2D2C2 (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___csharp0, String_t* ___cpp1, bool ___always2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___csharp0;
		EnableModuleParams_set_CSharpClassName_mB1413BCF93E8A3B658798ED556E586C47981F018_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___cpp1;
		EnableModuleParams_set_CppModuleName_m780B77AD33765B83D0675C02876BB379B9EFCCEB_inline(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = ___always2;
		EnableModuleParams_set_AlwaysEnable_m38C379905DD5810F629E35AD34DD0F677990ACFE_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String Firebase.FirebaseApp_EnableModuleParams::get_CppModuleName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CppModuleName_mE57521DAC3F8972C81AFBC72DB70FE79A9F946B3 (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCppModuleNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Firebase.FirebaseApp_EnableModuleParams::set_CppModuleName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams_set_CppModuleName_m780B77AD33765B83D0675C02876BB379B9EFCCEB (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCppModuleNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Firebase.FirebaseApp_EnableModuleParams::get_CSharpClassName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CSharpClassName_m5C21BC47A020FE24984E1A282267CE62CF09080B (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCSharpClassNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.FirebaseApp_EnableModuleParams::set_CSharpClassName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams_set_CSharpClassName_mB1413BCF93E8A3B658798ED556E586C47981F018 (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCSharpClassNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean Firebase.FirebaseApp_EnableModuleParams::get_AlwaysEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnableModuleParams_get_AlwaysEnable_m76B3B18100019E68E79EA0A0B320B1EAE0AB8260 (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAlwaysEnableU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.FirebaseApp_EnableModuleParams::set_AlwaysEnable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableModuleParams_set_AlwaysEnable_m38C379905DD5810F629E35AD34DD0F677990ACFE (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAlwaysEnableU3Ek__BackingField_2(L_0);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * __this, int32_t ___log_level0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	il2cppPInvokeFunc(___log_level0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

}
// System.Void Firebase.LogUtil_LogMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate__ctor_mEBA3FFB53CCE522DBB1B5571A5623A649E6643F0 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.LogUtil_LogMessageDelegate::Invoke(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate_Invoke_mB54C38843065556AF65D1E42C9DDC9AFAFA5C5E8 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * __this, int32_t ___log_level0, String_t* ___message1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___log_level0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___log_level0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___log_level0, ___message1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___log_level0, ___message1);
					else
						GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___log_level0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___log_level0, ___message1);
					else
						VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___log_level0, ___message1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___log_level0) - 1), ___message1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___log_level0, ___message1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.LogUtil_LogMessageDelegate::BeginInvoke(Firebase.LogLevel,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogMessageDelegate_BeginInvoke_m9A9B00026484A1266F2E8E1101699C83D2755654 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * __this, int32_t ___log_level0, String_t* ___message1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogMessageDelegate_BeginInvoke_m9A9B00026484A1266F2E8E1101699C83D2755654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200_il2cpp_TypeInfo_var, &___log_level0);
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.LogUtil_LogMessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessageDelegate_EndInvoke_m13C568B3D481DF381F37AAEF2FA598025FDB8C95 (LogMessageDelegate_tA2E3C07710334F0F6F81098ECB5A95F7747C3E84 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.StringStringMap_StringStringMapEnumerator::.ctor(Firebase.StringStringMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMapEnumerator__ctor_m765FC216E9A67EA91E8D360C32ED59B5EF59A43A (StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * __this, StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * ___collection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMapEnumerator__ctor_m765FC216E9A67EA91E8D360C32ED59B5EF59A43A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * L_0 = ___collection0;
		__this->set_collectionRef_0(L_0);
		StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * L_1 = ___collection0;
		NullCheck(L_1);
		RuntimeObject* L_2 = StringStringMap_get_Keys_m913897400DEF518DFD7D6E0CCEB1FE2026A2B2D3(L_1, /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323(L_3, L_2, /*hidden argument*/List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		__this->set_keyCollection_1(L_3);
		__this->set_currentIndex_2((-1));
		__this->set_currentObject_3(NULL);
		StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * L_4 = __this->get_collectionRef_0();
		NullCheck(L_4);
		int32_t L_5 = StringStringMap_get_Count_m907D4DD769A90CAA0683591119FDC3728EEA5BB3(L_4, /*hidden argument*/NULL);
		__this->set_currentSize_4(L_5);
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.String> Firebase.StringStringMap_StringStringMapEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  StringStringMapEnumerator_get_Current_m76DE586A735687200DC7ACF803FEF75527302F06 (StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMapEnumerator_get_Current_m76DE586A735687200DC7ACF803FEF75527302F06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_currentIndex_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, _stringLiteral88B277217AED4CBAA42043A4D5CD8DB154680BFA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, StringStringMapEnumerator_get_Current_m76DE586A735687200DC7ACF803FEF75527302F06_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_2 = __this->get_currentIndex_2();
		int32_t L_3 = __this->get_currentSize_4();
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))))
		{
			goto IL_0035;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, _stringLiteralD7D6709CAC9D8FCE4933C82CDA34EE45277DBD95, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, StringStringMapEnumerator_get_Current_m76DE586A735687200DC7ACF803FEF75527302F06_RuntimeMethod_var);
	}

IL_0035:
	{
		RuntimeObject * L_5 = __this->get_currentObject_3();
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, _stringLiteral572FD223BFCEC6E8E552A7CC84FEDA3269F3A5F7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, StringStringMapEnumerator_get_Current_m76DE586A735687200DC7ACF803FEF75527302F06_RuntimeMethod_var);
	}

IL_004b:
	{
		RuntimeObject * L_7 = __this->get_currentObject_3();
		return ((*(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)UnBox(L_7, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_il2cpp_TypeInfo_var))));
	}
}
// System.Object Firebase.StringStringMap_StringStringMapEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * StringStringMapEnumerator_System_Collections_IEnumerator_get_Current_m9427EB0A54BECC080668E8FFBC3833403DC55994 (StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMapEnumerator_System_Collections_IEnumerator_get_Current_m9427EB0A54BECC080668E8FFBC3833403DC55994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_0 = StringStringMapEnumerator_get_Current_m76DE586A735687200DC7ACF803FEF75527302F06(__this, /*hidden argument*/NULL);
		KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_1 = L_0;
		RuntimeObject * L_2 = Box(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Boolean Firebase.StringStringMap_StringStringMapEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStringMapEnumerator_MoveNext_m22BD0722C730E02430014E65174344AA499F336F (StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMapEnumerator_MoveNext_m22BD0722C730E02430014E65174344AA499F336F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * L_0 = __this->get_collectionRef_0();
		NullCheck(L_0);
		int32_t L_1 = StringStringMap_get_Count_m907D4DD769A90CAA0683591119FDC3728EEA5BB3(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_currentIndex_2();
		int32_t L_3 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))) >= ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_currentSize_4();
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_7 = __this->get_currentIndex_2();
		__this->set_currentIndex_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		RuntimeObject* L_8 = __this->get_keyCollection_1();
		int32_t L_9 = __this->get_currentIndex_2();
		NullCheck(L_8);
		String_t* L_10 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847_il2cpp_TypeInfo_var, L_8, L_9);
		V_2 = L_10;
		String_t* L_11 = V_2;
		StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * L_12 = __this->get_collectionRef_0();
		String_t* L_13 = V_2;
		NullCheck(L_12);
		String_t* L_14 = StringStringMap_get_Item_mB384423BD033B98EE3457212BE65092712C56789(L_12, L_13, /*hidden argument*/NULL);
		KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_15;
		memset((&L_15), 0, sizeof(L_15));
		KeyValuePair_2__ctor_m0119BCDA2BA84CD54D128DD6D692F4CEF57F602F((&L_15), L_11, L_14, /*hidden argument*/KeyValuePair_2__ctor_m0119BCDA2BA84CD54D128DD6D692F4CEF57F602F_RuntimeMethod_var);
		KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_16 = L_15;
		RuntimeObject * L_17 = Box(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_il2cpp_TypeInfo_var, &L_16);
		__this->set_currentObject_3(L_17);
		goto IL_0076;
	}

IL_006f:
	{
		__this->set_currentObject_3(NULL);
	}

IL_0076:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Void Firebase.StringStringMap_StringStringMapEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMapEnumerator_Reset_m71559FB9DF7506B0DBD523E327E02E6B4405A84E (StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringStringMapEnumerator_Reset_m71559FB9DF7506B0DBD523E327E02E6B4405A84E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_currentIndex_2((-1));
		__this->set_currentObject_3(NULL);
		StringStringMap_tF74E9FD18DED9B60199AE2B22B56069A83C2BEC2 * L_0 = __this->get_collectionRef_0();
		NullCheck(L_0);
		int32_t L_1 = StringStringMap_get_Count_m907D4DD769A90CAA0683591119FDC3728EEA5BB3(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_currentSize_4();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, _stringLiteral572FD223BFCEC6E8E552A7CC84FEDA3269F3A5F7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StringStringMapEnumerator_Reset_m71559FB9DF7506B0DBD523E327E02E6B4405A84E_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Firebase.StringStringMap_StringStringMapEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringMapEnumerator_Dispose_m1B7713DE735B05E182D29A076ED15B7720E91BD6 (StringStringMapEnumerator_t9E6004CFCCC3AA5F43495D3459C907FFAF956846 * __this, const RuntimeMethod* method)
{
	{
		__this->set_currentIndex_2((-1));
		__this->set_currentObject_3(NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m9B64B0E9472C1DDAA639843324FD57FBCCE07E08 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_mD10622418D792C1CDA2D02B0117C251187C52D74 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___paramName1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), ___paramName1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m0410594AB6ABF10A9740F06B324A5A6C059E39B9 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_mE24172C5085232AD4E4A4EAC36FBF77A79A93C31 (ExceptionArgumentDelegate_t1AA80F883D60128F2D0AC8B6585E7E5E24046CA1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m4E04BD56501AA698F333F3189D232E0DD8BE66A0 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_mE907915DC5B6A911DE7F253DF0E0D82F63B23A06 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * __this, String_t* ___message0, const RuntimeMethod* method)
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
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
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
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m72D31AEE58624296E481B8F6C28EDF28C445F92B (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_mCD778A944D0755D6227785C17547B6F3FCCB9D59 (ExceptionDelegate_tDD1A55BD95B6728CB90312C6FD53BF55FD0AEF17 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mED39AF7AB0675F58D7C5E732BB50C419BF321299 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_mE2D5B14F87E5528B7095C2B08CFD4B10A4926BDF (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
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
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef String_t* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_m071087F52EF4FF4FB5914D2D986CD4607DFDE8E7 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.String Firebase.AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m4A38AD7D0C3965603592F826BC582D78A7FB7AA0 (SWIGStringDelegate_tB27940DE2B521137937A0B37C46010B0A28E7394 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_DatabaseUrl_mB06D163A37683E7B36BA8268035ABEB005A87FB9_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___value0, const RuntimeMethod* method)
{
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___value0;
		__this->set_U3CDatabaseUrlU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_AppId_m4B5BA1B974CB6388A1ECDE5170945EA7D0202501_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_ApiKey_m42DFAA546F61385DBDAD31B93E12A3A23B7FC468_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CApiKeyU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_MessageSenderId_m778712C8ED6C08E1E0E3FCBC23BE1CFAD0336835_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageSenderIdU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_StorageBucket_mE44829D9949FFF08FDD4ED72F8D16259A9809373_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CStorageBucketU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_ProjectId_m56FE1094D175376A26E44F102A482B772CAADDA4_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CProjectIdU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AppOptions_set_PackageName_mE97F6696842F899D803C0B0B02A557F6C47B01C6_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPackageNameU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8_inline (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CSharpClassName_m5C21BC47A020FE24984E1A282267CE62CF09080B_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCSharpClassNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnableModuleParams_get_CppModuleName_mE57521DAC3F8972C81AFBC72DB70FE79A9F946B3_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCppModuleNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnableModuleParams_get_AlwaysEnable_m76B3B18100019E68E79EA0A0B320B1EAE0AB8260_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAlwaysEnableU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * FirebaseAppUtils_get_Instance_m79B79F13BD6329A947B640DB886DC398439A90BF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAppUtils_get_Instance_m79B79F13BD6329A947B640DB886DC398439A90BFFirebase_App_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var);
		FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E * L_0 = ((FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtils_t86B9E61AA656961E3D8804C20A5A5386692B5F3E_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseException_set_ErrorCode_mE216C4C0EBAACC7ADA04ED328DEC1474680F9B5A_inline (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitializationException_set_InitResult_mD6E68B41830F64CB54B3BF7FFE915263D8AD8E34_inline (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CInitResultU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_CSharpClassName_mB1413BCF93E8A3B658798ED556E586C47981F018_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCSharpClassNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_CppModuleName_m780B77AD33765B83D0675C02876BB379B9EFCCEB_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCppModuleNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnableModuleParams_set_AlwaysEnable_m38C379905DD5810F629E35AD34DD0F677990ACFE_inline (EnableModuleParams_t1E38BCF2E1F88CBD6FA517A17184C47CC73CF8D4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAlwaysEnableU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
