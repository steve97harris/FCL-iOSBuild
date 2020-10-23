#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Dynamic.BindingRestrictions
struct BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC;
// System.Linq.Expressions.BlockExpression
struct BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB;
// System.Linq.Expressions.CatchBlock
struct CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB;
// System.Dynamic.ExpandoClass
struct ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D;
// System.Dynamic.ExpandoObject
struct ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.CompilerServices.IStrongBox
struct IStrongBox_t37B8B513E3C7EF457F23D5089D694BE7F6095F54;
// System.Linq.Expressions.Interpreter.Instruction
struct Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2;
// System.Linq.Expressions.Interpreter.Interpreter
struct Interpreter_t72F078C1054752C763660835B3B3488A135D178B;
// System.Linq.Expressions.Interpreter.LocalVariable
struct LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Linq.Expressions.Interpreter.OrInstruction
struct OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Linq.Expressions.Interpreter.RightShiftInstruction
struct RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Linq.Expressions.Interpreter.SubInstruction
struct SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD;
// System.Linq.Expressions.Interpreter.SubOvfInstruction
struct SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT
struct CastInstructionNoT_t9C4D91B95D55BEB4F8E995F8E4CE167C8606110B;
// System.Dynamic.ExpandoObject/ExpandoData
struct ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7;
// System.Dynamic.ExpandoObject/KeyCollection
struct KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127;
// System.Dynamic.ExpandoObject/MetaExpando
struct MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47;
// System.Dynamic.ExpandoObject/ValueCollection
struct ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234;
// System.Linq.Expressions.Interpreter.OrInstruction/OrByte
struct OrByte_t201A377B95ABC243F185019710B98220335474B0;
// System.Linq.Expressions.Interpreter.OrInstruction/OrInt16
struct OrInt16_tDCAC652458E4A355ED5945D621DB6CDE47766A90;
// System.Linq.Expressions.Interpreter.OrInstruction/OrInt32
struct OrInt32_tBB86B9EC780E61CDE55CE0A6C7DDB168C3BE70FF;
// System.Linq.Expressions.Interpreter.OrInstruction/OrInt64
struct OrInt64_t7DB4AF687896C3540F17A785CD195748FC5B31F0;
// System.Linq.Expressions.Interpreter.OrInstruction/OrSByte
struct OrSByte_tBD96031881884B43042D1825F549982894E1627E;
// System.Linq.Expressions.Interpreter.OrInstruction/OrUInt16
struct OrUInt16_t88C758255AE7C9D2CFF3033E2CE589B7C74A3E3F;
// System.Linq.Expressions.Interpreter.OrInstruction/OrUInt32
struct OrUInt32_t9982D5B99CDCA5A4C41529753D5D71AF6FF740BC;
// System.Linq.Expressions.Interpreter.OrInstruction/OrUInt64
struct OrUInt64_tE09557C73068791FE26C2FDB13BADDB4069285AA;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftByte
struct RightShiftByte_t5F287F9A98BD517088EBEBB5762D9B5547411F02;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt16
struct RightShiftInt16_t2CE116D1706B0B2E1BBC6F132D090C0B344DA147;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt32
struct RightShiftInt32_t28B8326998E527389A4C0B7F66CB0CDC2997AECD;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt64
struct RightShiftInt64_tD5FE689CDEC4FB15BE4001CE537725EA23C90692;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftSByte
struct RightShiftSByte_t3BAA90C2005D7DBF702594A81C6FD7DB336FAE60;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt16
struct RightShiftUInt16_t4107CD5715606EAAF84FFAFA9B8DD0261B14CBF6;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt32
struct RightShiftUInt32_tBE3AD1CB4803EE031AB2D8FBFAC118DA0C36C077;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt64
struct RightShiftUInt64_t11D41A57381AEE78C426DE33130B91A7D55876BB;
// System.Linq.Expressions.Interpreter.SubInstruction/SubDouble
struct SubDouble_tD043A690C939E826740F3980649781CF246DCDF2;
// System.Linq.Expressions.Interpreter.SubInstruction/SubInt16
struct SubInt16_t54BA31141EB907D849DEA9B01CF7BC6D50D6990A;
// System.Linq.Expressions.Interpreter.SubInstruction/SubInt32
struct SubInt32_t45C297528948D24B11B80E5D5F9160424C4FB6A5;
// System.Linq.Expressions.Interpreter.SubInstruction/SubInt64
struct SubInt64_t2A292A0D8C604FDE28954B60EF80E36285F47511;
// System.Linq.Expressions.Interpreter.SubInstruction/SubSingle
struct SubSingle_t2561FE69D9CDA0F6C0A1A8958CF2417D34541B26;
// System.Linq.Expressions.Interpreter.SubInstruction/SubUInt16
struct SubUInt16_tCBA7FBA9D5D99CB82C5E63FE3218C6F80E13EFBD;
// System.Linq.Expressions.Interpreter.SubInstruction/SubUInt32
struct SubUInt32_t4DFA170330F70C0F8F9F211169DC93235FF64BAF;
// System.Linq.Expressions.Interpreter.SubInstruction/SubUInt64
struct SubUInt64_t986CC4C6FC8D2F5D1601D820D690EAE039CB21CC;
// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt16
struct SubOvfInt16_tAEAF2F6A8C023CE3CBB545F3CF87B52081F7D1F0;
// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt32
struct SubOvfInt32_tB06ACE45D8557990B724B37C14C83ABB0EBEB019;
// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt64
struct SubOvfInt64_t9BC0A0C8BFBCC9B1CBF3A7468DE27A8F5BA13D8B;
// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt16
struct SubOvfUInt16_t44B387BAA3E156B5D3A023F247C9FC208905B53F;
// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt32
struct SubOvfUInt32_tB163618E06EE74B7F7F2D6B80F217B712A5DF6A0;
// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt64
struct SubOvfUInt64_t321A38C66A5A2020B95D7E7042AB287565C4B18E;
// System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT/Ref
struct Ref_t168CC06E3E836CBD2DA362F99B022F5D79504E10;
// System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT/Value
struct Value_t291D50D67C4EC0983FA0B027505922ED0110765D;
// System.Dynamic.ExpandoObject/KeyCollection/<GetEnumerator>d__15
struct U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B;
// System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6
struct U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8;
// System.Dynamic.ExpandoObject/ValueCollection/<GetEnumerator>d__15
struct U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.WeakReference>>
struct Dictionary_2_tCBFADFB0DA6360308C8BF88F72963B47106EBD52;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_tF5978845C2912DCA5471ADD9480357E32BB03D1E;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t25F6568124205E1DCEEEFEF9FFD485B340114892;
// System.Collections.Generic.IList`1<System.Linq.Expressions.ParameterExpression>
struct IList_1_t577FCBB6A17E4D24559E5AD6C70155CFF0DFACAC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct KeyCollection_t7BB4B236B23C57AB5915BEDB01D77702CFD10FB4;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct ValueCollection_tBB278FFC214913E5F8D2805B3FAC62FDF7A9748B;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Dynamic.DynamicMetaObject[]
struct DynamicMetaObjectU5BU5D_t42D6D3818EB1DC2B3EAC2434CA3E7489874E0421;
// System.Collections.Generic.Dictionary`2/Entry<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>[]
struct EntryU5BU5D_t1DB26BC686C5A56AD750737006F54BD221750830;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Runtime.CompilerServices.IStrongBox[]
struct IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E;
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

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStrongBox_t37B8B513E3C7EF457F23D5089D694BE7F6095F54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
IL2CPP_EXTERN_C String_t* _stringLiteralCF088CD7CED04705BD5E7559DBB7DD9A14559182;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9F075D45997E73C2F61005C8C5A35D2FCAEB4C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m5A39E55363E4D9BA3CB364B80A3C8701AF672C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_mCB5C4BDEB03233F12B542819ACA65DAB8F3FEFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m5323B88ED2E3A1BE919D98A96DD9C6C02B150BA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubOvfInt16_Run_m8BE084817E985B962CA87DE2D70F5E614D0E23E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubOvfInt32_Run_m4784CFCCA1A23F78D01E19D1FEE7D90A8571D107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubOvfInt64_Run_mBC5428D91F0F20DEA87DB4A6A1958D6A7F528B7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubOvfUInt16_Run_m1FC5C9CB4C2C57A567577E8D7F5EDC963A746EE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubOvfUInt32_Run_mAB1BE31073F2BFCE0D0E104D7F555E54F1C08DF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubOvfUInt64_Run_m62A723627B1B0EBA117EE6EC7C7FEA1A965DA53A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDynamicMemberNamesU3Ed__6_System_Collections_IEnumerator_Reset_mD3BA146EE253D7A429E19897BDA26F1A497E5916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_m6755CA50231CABD3DAFE930F00E78252C9595BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_m9FD23DF9D9AF4FF1906DD57F9EACDEEBBE0C6AB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Value_ConvertNull_mA3E3A08DD5953CC5A4645CFAD29F2EEB2F2BC4F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ExpressionQuoter_GetBox_mB02A80E9219C417E14C0DDFB99A2470B67FE640E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExpressionQuoter_VisitBlock_mA5024528E72CFF2667DEDDD3C9E010211C3B59B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExpressionQuoter_VisitCatchBlock_m8AAA05FD5B7498B1089179E435A7F8B04670AEAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExpressionQuoter_VisitParameter_m366F220775FD67A62D50727A0ED333194602BD7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExpressionQuoter__ctor_mDB9205961C23968CAE09AD410055116D8B9C84CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OrByte_Run_mDC2087F2327032925CDC4BA7B0A803298922F2AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OrInt16_Run_mD568484D668650C9D589942AE774EAA1B4F9542D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OrInt32_Run_m95BED0BDF2A097AAA2889C9745EADC9B2EDA56BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OrInt64_Run_m9B2AEB50A01FB9197242D4D5403B6A34BFDD193F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OrSByte_Run_m6B46A8DCA7ED709339FE35AB20782B21256C1D18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OrUInt16_Run_mB2DAEFBE48BBF1EF5EDDBA402DC7BE7899500161_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OrUInt32_Run_mC067ACEE1317B8186D8CFB378B0806620A830510_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OrUInt64_Run_m7DC5517D31D9AB0E4B01C060E0BE5BD96729DE8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RightShiftByte_Run_mC57B8F624AA8BA764BF0A402BB8A1F825AFCE84B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RightShiftInt16_Run_mBAE3FD81D50E054555D4841BA212D954F4264D06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RightShiftInt32_Run_m3056C2C19FA33883607EA228B9748B4EDFF7FDFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RightShiftInt64_Run_mABD6A9FEE3D65D2F5EFD38B9099D62D58CDB003E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RightShiftSByte_Run_m5D27D574AD4717809853648260398B706081BD29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RightShiftUInt16_Run_m9B3B239EA6F4DE9B372C4E2BC1CEDC09E9B999A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RightShiftUInt32_Run_m2503B8DE9FBEF96812810B62FE6A14E5CC8818F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RightShiftUInt64_Run_m42180FB75ACB54928764DDBC502CE73454347F9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubDouble_Run_m20F5CD5690D93EAAA9D79A95C307C8BA398EEB9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubInt16_Run_m3D80EE86FDD25CA5F5C609DC1E573E76142E69E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubInt32_Run_m7626275DFE049CC0D8A4859F2D06313D3C1E5C45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubInt64_Run_m97AA42AE199F682E15A5F4F75472BF17B99329CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubOvfInt16_Run_m8BE084817E985B962CA87DE2D70F5E614D0E23E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubOvfInt32_Run_m4784CFCCA1A23F78D01E19D1FEE7D90A8571D107_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubOvfInt64_Run_mBC5428D91F0F20DEA87DB4A6A1958D6A7F528B7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubOvfUInt16_Run_m1FC5C9CB4C2C57A567577E8D7F5EDC963A746EE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubOvfUInt32_Run_mAB1BE31073F2BFCE0D0E104D7F555E54F1C08DF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubOvfUInt64_Run_m62A723627B1B0EBA117EE6EC7C7FEA1A965DA53A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubSingle_Run_mDBFC5925448092099F1DC058B90C1FED9F0178D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubUInt16_Run_m528B2AEF45C5C2638CD643BBD88A8AE1AE726A91_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubUInt32_Run_m71D9464F4299B02FCD93A2372E209B3781D61A91_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubUInt64_Run_m6454BF59E6345A1DB5B46DAB5F76B0977C07401D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetDynamicMemberNamesU3Ed__6_MoveNext_m6242D4CCB88D04BC92D761BCE8D1FC0CDA216474_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetDynamicMemberNamesU3Ed__6_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mF05E0A905C664AD577DDD12904E2A7450F47FA3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetDynamicMemberNamesU3Ed__6_System_Collections_IEnumerator_Reset_mD3BA146EE253D7A429E19897BDA26F1A497E5916_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__15_MoveNext_m5BFB3BB77674B95AEF33589D04296BC37A45E13D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__15_MoveNext_m95A8B95F2D7303E31BFEE64922DDC3F0206F7095_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_m6755CA50231CABD3DAFE930F00E78252C9595BF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_m9FD23DF9D9AF4FF1906DD57F9EACDEEBBE0C6AB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Value_ConvertNull_mA3E3A08DD5953CC5A4645CFAD29F2EEB2F2BC4F4_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct  Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1DB26BC686C5A56AD750737006F54BD221750830* ___entries_1;
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
	KeyCollection_t7BB4B236B23C57AB5915BEDB01D77702CFD10FB4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBB278FFC214913E5F8D2805B3FAC62FDF7A9748B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___entries_1)); }
	inline EntryU5BU5D_t1DB26BC686C5A56AD750737006F54BD221750830* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1DB26BC686C5A56AD750737006F54BD221750830** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1DB26BC686C5A56AD750737006F54BD221750830* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___keys_7)); }
	inline KeyCollection_t7BB4B236B23C57AB5915BEDB01D77702CFD10FB4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t7BB4B236B23C57AB5915BEDB01D77702CFD10FB4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t7BB4B236B23C57AB5915BEDB01D77702CFD10FB4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___values_8)); }
	inline ValueCollection_tBB278FFC214913E5F8D2805B3FAC62FDF7A9748B * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBB278FFC214913E5F8D2805B3FAC62FDF7A9748B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBB278FFC214913E5F8D2805B3FAC62FDF7A9748B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct  HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____slots_8)); }
	inline SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct  Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____array_0)); }
	inline HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* get__array_0() const { return ____array_0; }
	inline HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct  ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Dynamic.DynamicMetaObject
struct  DynamicMetaObject_t5279001ADBFAB6EF015CAC54937F4E9F003881C3  : public RuntimeObject
{
public:
	// System.Linq.Expressions.Expression System.Dynamic.DynamicMetaObject::<Expression>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CExpressionU3Ek__BackingField_1;
	// System.Dynamic.BindingRestrictions System.Dynamic.DynamicMetaObject::<Restrictions>k__BackingField
	BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC * ___U3CRestrictionsU3Ek__BackingField_2;
	// System.Object System.Dynamic.DynamicMetaObject::<Value>k__BackingField
	RuntimeObject * ___U3CValueU3Ek__BackingField_3;
	// System.Boolean System.Dynamic.DynamicMetaObject::<HasValue>k__BackingField
	bool ___U3CHasValueU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CExpressionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DynamicMetaObject_t5279001ADBFAB6EF015CAC54937F4E9F003881C3, ___U3CExpressionU3Ek__BackingField_1)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CExpressionU3Ek__BackingField_1() const { return ___U3CExpressionU3Ek__BackingField_1; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CExpressionU3Ek__BackingField_1() { return &___U3CExpressionU3Ek__BackingField_1; }
	inline void set_U3CExpressionU3Ek__BackingField_1(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CExpressionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExpressionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRestrictionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DynamicMetaObject_t5279001ADBFAB6EF015CAC54937F4E9F003881C3, ___U3CRestrictionsU3Ek__BackingField_2)); }
	inline BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC * get_U3CRestrictionsU3Ek__BackingField_2() const { return ___U3CRestrictionsU3Ek__BackingField_2; }
	inline BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC ** get_address_of_U3CRestrictionsU3Ek__BackingField_2() { return &___U3CRestrictionsU3Ek__BackingField_2; }
	inline void set_U3CRestrictionsU3Ek__BackingField_2(BindingRestrictions_t03E14FA0517A70DEDA502032CE956595EF6E0DFC * value)
	{
		___U3CRestrictionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRestrictionsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DynamicMetaObject_t5279001ADBFAB6EF015CAC54937F4E9F003881C3, ___U3CValueU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CValueU3Ek__BackingField_3() const { return ___U3CValueU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CValueU3Ek__BackingField_3() { return &___U3CValueU3Ek__BackingField_3; }
	inline void set_U3CValueU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CValueU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHasValueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DynamicMetaObject_t5279001ADBFAB6EF015CAC54937F4E9F003881C3, ___U3CHasValueU3Ek__BackingField_4)); }
	inline bool get_U3CHasValueU3Ek__BackingField_4() const { return ___U3CHasValueU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CHasValueU3Ek__BackingField_4() { return &___U3CHasValueU3Ek__BackingField_4; }
	inline void set_U3CHasValueU3Ek__BackingField_4(bool value)
	{
		___U3CHasValueU3Ek__BackingField_4 = value;
	}
};

struct DynamicMetaObject_t5279001ADBFAB6EF015CAC54937F4E9F003881C3_StaticFields
{
public:
	// System.Dynamic.DynamicMetaObject[] System.Dynamic.DynamicMetaObject::EmptyMetaObjects
	DynamicMetaObjectU5BU5D_t42D6D3818EB1DC2B3EAC2434CA3E7489874E0421* ___EmptyMetaObjects_0;

public:
	inline static int32_t get_offset_of_EmptyMetaObjects_0() { return static_cast<int32_t>(offsetof(DynamicMetaObject_t5279001ADBFAB6EF015CAC54937F4E9F003881C3_StaticFields, ___EmptyMetaObjects_0)); }
	inline DynamicMetaObjectU5BU5D_t42D6D3818EB1DC2B3EAC2434CA3E7489874E0421* get_EmptyMetaObjects_0() const { return ___EmptyMetaObjects_0; }
	inline DynamicMetaObjectU5BU5D_t42D6D3818EB1DC2B3EAC2434CA3E7489874E0421** get_address_of_EmptyMetaObjects_0() { return &___EmptyMetaObjects_0; }
	inline void set_EmptyMetaObjects_0(DynamicMetaObjectU5BU5D_t42D6D3818EB1DC2B3EAC2434CA3E7489874E0421* value)
	{
		___EmptyMetaObjects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyMetaObjects_0), (void*)value);
	}
};


// System.Dynamic.ExpandoClass
struct  ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D  : public RuntimeObject
{
public:
	// System.String[] System.Dynamic.ExpandoClass::_keys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____keys_0;
	// System.Int32 System.Dynamic.ExpandoClass::_hashCode
	int32_t ____hashCode_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.WeakReference>> System.Dynamic.ExpandoClass::_transitions
	Dictionary_2_tCBFADFB0DA6360308C8BF88F72963B47106EBD52 * ____transitions_2;

public:
	inline static int32_t get_offset_of__keys_0() { return static_cast<int32_t>(offsetof(ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D, ____keys_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__keys_0() const { return ____keys_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__keys_0() { return &____keys_0; }
	inline void set__keys_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_0), (void*)value);
	}

	inline static int32_t get_offset_of__hashCode_1() { return static_cast<int32_t>(offsetof(ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D, ____hashCode_1)); }
	inline int32_t get__hashCode_1() const { return ____hashCode_1; }
	inline int32_t* get_address_of__hashCode_1() { return &____hashCode_1; }
	inline void set__hashCode_1(int32_t value)
	{
		____hashCode_1 = value;
	}

	inline static int32_t get_offset_of__transitions_2() { return static_cast<int32_t>(offsetof(ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D, ____transitions_2)); }
	inline Dictionary_2_tCBFADFB0DA6360308C8BF88F72963B47106EBD52 * get__transitions_2() const { return ____transitions_2; }
	inline Dictionary_2_tCBFADFB0DA6360308C8BF88F72963B47106EBD52 ** get_address_of__transitions_2() { return &____transitions_2; }
	inline void set__transitions_2(Dictionary_2_tCBFADFB0DA6360308C8BF88F72963B47106EBD52 * value)
	{
		____transitions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transitions_2), (void*)value);
	}
};

struct ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D_StaticFields
{
public:
	// System.Dynamic.ExpandoClass System.Dynamic.ExpandoClass::Empty
	ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * ___Empty_3;

public:
	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D_StaticFields, ___Empty_3)); }
	inline ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * get_Empty_3() const { return ___Empty_3; }
	inline ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D ** get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * value)
	{
		___Empty_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_3), (void*)value);
	}
};


// System.Dynamic.ExpandoObject
struct  ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315  : public RuntimeObject
{
public:
	// System.Object System.Dynamic.ExpandoObject::LockObject
	RuntimeObject * ___LockObject_5;
	// System.Dynamic.ExpandoObject_ExpandoData System.Dynamic.ExpandoObject::_data
	ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * ____data_6;
	// System.Int32 System.Dynamic.ExpandoObject::_count
	int32_t ____count_7;
	// System.ComponentModel.PropertyChangedEventHandler System.Dynamic.ExpandoObject::_propertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ____propertyChanged_9;

public:
	inline static int32_t get_offset_of_LockObject_5() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315, ___LockObject_5)); }
	inline RuntimeObject * get_LockObject_5() const { return ___LockObject_5; }
	inline RuntimeObject ** get_address_of_LockObject_5() { return &___LockObject_5; }
	inline void set_LockObject_5(RuntimeObject * value)
	{
		___LockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LockObject_5), (void*)value);
	}

	inline static int32_t get_offset_of__data_6() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315, ____data_6)); }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * get__data_6() const { return ____data_6; }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 ** get_address_of__data_6() { return &____data_6; }
	inline void set__data_6(ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * value)
	{
		____data_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_6), (void*)value);
	}

	inline static int32_t get_offset_of__count_7() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315, ____count_7)); }
	inline int32_t get__count_7() const { return ____count_7; }
	inline int32_t* get_address_of__count_7() { return &____count_7; }
	inline void set__count_7(int32_t value)
	{
		____count_7 = value;
	}

	inline static int32_t get_offset_of__propertyChanged_9() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315, ____propertyChanged_9)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get__propertyChanged_9() const { return ____propertyChanged_9; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of__propertyChanged_9() { return &____propertyChanged_9; }
	inline void set__propertyChanged_9(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		____propertyChanged_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyChanged_9), (void*)value);
	}
};

struct ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::ExpandoTryGetValue
	MethodInfo_t * ___ExpandoTryGetValue_0;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::ExpandoTrySetValue
	MethodInfo_t * ___ExpandoTrySetValue_1;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::ExpandoTryDeleteValue
	MethodInfo_t * ___ExpandoTryDeleteValue_2;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::ExpandoPromoteClass
	MethodInfo_t * ___ExpandoPromoteClass_3;
	// System.Reflection.MethodInfo System.Dynamic.ExpandoObject::ExpandoCheckVersion
	MethodInfo_t * ___ExpandoCheckVersion_4;
	// System.Object System.Dynamic.ExpandoObject::Uninitialized
	RuntimeObject * ___Uninitialized_8;

public:
	inline static int32_t get_offset_of_ExpandoTryGetValue_0() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields, ___ExpandoTryGetValue_0)); }
	inline MethodInfo_t * get_ExpandoTryGetValue_0() const { return ___ExpandoTryGetValue_0; }
	inline MethodInfo_t ** get_address_of_ExpandoTryGetValue_0() { return &___ExpandoTryGetValue_0; }
	inline void set_ExpandoTryGetValue_0(MethodInfo_t * value)
	{
		___ExpandoTryGetValue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpandoTryGetValue_0), (void*)value);
	}

	inline static int32_t get_offset_of_ExpandoTrySetValue_1() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields, ___ExpandoTrySetValue_1)); }
	inline MethodInfo_t * get_ExpandoTrySetValue_1() const { return ___ExpandoTrySetValue_1; }
	inline MethodInfo_t ** get_address_of_ExpandoTrySetValue_1() { return &___ExpandoTrySetValue_1; }
	inline void set_ExpandoTrySetValue_1(MethodInfo_t * value)
	{
		___ExpandoTrySetValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpandoTrySetValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_ExpandoTryDeleteValue_2() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields, ___ExpandoTryDeleteValue_2)); }
	inline MethodInfo_t * get_ExpandoTryDeleteValue_2() const { return ___ExpandoTryDeleteValue_2; }
	inline MethodInfo_t ** get_address_of_ExpandoTryDeleteValue_2() { return &___ExpandoTryDeleteValue_2; }
	inline void set_ExpandoTryDeleteValue_2(MethodInfo_t * value)
	{
		___ExpandoTryDeleteValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpandoTryDeleteValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_ExpandoPromoteClass_3() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields, ___ExpandoPromoteClass_3)); }
	inline MethodInfo_t * get_ExpandoPromoteClass_3() const { return ___ExpandoPromoteClass_3; }
	inline MethodInfo_t ** get_address_of_ExpandoPromoteClass_3() { return &___ExpandoPromoteClass_3; }
	inline void set_ExpandoPromoteClass_3(MethodInfo_t * value)
	{
		___ExpandoPromoteClass_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpandoPromoteClass_3), (void*)value);
	}

	inline static int32_t get_offset_of_ExpandoCheckVersion_4() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields, ___ExpandoCheckVersion_4)); }
	inline MethodInfo_t * get_ExpandoCheckVersion_4() const { return ___ExpandoCheckVersion_4; }
	inline MethodInfo_t ** get_address_of_ExpandoCheckVersion_4() { return &___ExpandoCheckVersion_4; }
	inline void set_ExpandoCheckVersion_4(MethodInfo_t * value)
	{
		___ExpandoCheckVersion_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpandoCheckVersion_4), (void*)value);
	}

	inline static int32_t get_offset_of_Uninitialized_8() { return static_cast<int32_t>(offsetof(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields, ___Uninitialized_8)); }
	inline RuntimeObject * get_Uninitialized_8() const { return ___Uninitialized_8; }
	inline RuntimeObject ** get_address_of_Uninitialized_8() { return &___Uninitialized_8; }
	inline void set_Uninitialized_8(RuntimeObject * value)
	{
		___Uninitialized_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Uninitialized_8), (void*)value);
	}
};


// System.Dynamic.ExpandoObject_ExpandoData
struct  ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7  : public RuntimeObject
{
public:
	// System.Dynamic.ExpandoClass System.Dynamic.ExpandoObject_ExpandoData::Class
	ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * ___Class_1;
	// System.Object[] System.Dynamic.ExpandoObject_ExpandoData::_dataArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____dataArray_2;
	// System.Int32 System.Dynamic.ExpandoObject_ExpandoData::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of_Class_1() { return static_cast<int32_t>(offsetof(ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7, ___Class_1)); }
	inline ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * get_Class_1() const { return ___Class_1; }
	inline ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D ** get_address_of_Class_1() { return &___Class_1; }
	inline void set_Class_1(ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * value)
	{
		___Class_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Class_1), (void*)value);
	}

	inline static int32_t get_offset_of__dataArray_2() { return static_cast<int32_t>(offsetof(ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7, ____dataArray_2)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__dataArray_2() const { return ____dataArray_2; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__dataArray_2() { return &____dataArray_2; }
	inline void set__dataArray_2(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____dataArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataArray_2), (void*)value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7_StaticFields
{
public:
	// System.Dynamic.ExpandoObject_ExpandoData System.Dynamic.ExpandoObject_ExpandoData::Empty
	ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7_StaticFields, ___Empty_0)); }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * get_Empty_0() const { return ___Empty_0; }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Dynamic.ExpandoObject_KeyCollection
struct  KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127  : public RuntimeObject
{
public:
	// System.Dynamic.ExpandoObject System.Dynamic.ExpandoObject_KeyCollection::_expando
	ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315 * ____expando_0;
	// System.Int32 System.Dynamic.ExpandoObject_KeyCollection::_expandoVersion
	int32_t ____expandoVersion_1;
	// System.Int32 System.Dynamic.ExpandoObject_KeyCollection::_expandoCount
	int32_t ____expandoCount_2;
	// System.Dynamic.ExpandoObject_ExpandoData System.Dynamic.ExpandoObject_KeyCollection::_expandoData
	ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * ____expandoData_3;

public:
	inline static int32_t get_offset_of__expando_0() { return static_cast<int32_t>(offsetof(KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127, ____expando_0)); }
	inline ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315 * get__expando_0() const { return ____expando_0; }
	inline ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315 ** get_address_of__expando_0() { return &____expando_0; }
	inline void set__expando_0(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315 * value)
	{
		____expando_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____expando_0), (void*)value);
	}

	inline static int32_t get_offset_of__expandoVersion_1() { return static_cast<int32_t>(offsetof(KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127, ____expandoVersion_1)); }
	inline int32_t get__expandoVersion_1() const { return ____expandoVersion_1; }
	inline int32_t* get_address_of__expandoVersion_1() { return &____expandoVersion_1; }
	inline void set__expandoVersion_1(int32_t value)
	{
		____expandoVersion_1 = value;
	}

	inline static int32_t get_offset_of__expandoCount_2() { return static_cast<int32_t>(offsetof(KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127, ____expandoCount_2)); }
	inline int32_t get__expandoCount_2() const { return ____expandoCount_2; }
	inline int32_t* get_address_of__expandoCount_2() { return &____expandoCount_2; }
	inline void set__expandoCount_2(int32_t value)
	{
		____expandoCount_2 = value;
	}

	inline static int32_t get_offset_of__expandoData_3() { return static_cast<int32_t>(offsetof(KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127, ____expandoData_3)); }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * get__expandoData_3() const { return ____expandoData_3; }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 ** get_address_of__expandoData_3() { return &____expandoData_3; }
	inline void set__expandoData_3(ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * value)
	{
		____expandoData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____expandoData_3), (void*)value);
	}
};


// System.Dynamic.ExpandoObject_KeyCollection_<GetEnumerator>d__15
struct  U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B  : public RuntimeObject
{
public:
	// System.Int32 System.Dynamic.ExpandoObject_KeyCollection_<GetEnumerator>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String System.Dynamic.ExpandoObject_KeyCollection_<GetEnumerator>d__15::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Dynamic.ExpandoObject_KeyCollection System.Dynamic.ExpandoObject_KeyCollection_<GetEnumerator>d__15::<>4__this
	KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 * ___U3CU3E4__this_2;
	// System.Int32 System.Dynamic.ExpandoObject_KeyCollection_<GetEnumerator>d__15::<i>5__1
	int32_t ___U3CiU3E5__1_3;
	// System.Int32 System.Dynamic.ExpandoObject_KeyCollection_<GetEnumerator>d__15::<n>5__2
	int32_t ___U3CnU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B, ___U3CU3E4__this_2)); }
	inline KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B, ___U3CiU3E5__1_3)); }
	inline int32_t get_U3CiU3E5__1_3() const { return ___U3CiU3E5__1_3; }
	inline int32_t* get_address_of_U3CiU3E5__1_3() { return &___U3CiU3E5__1_3; }
	inline void set_U3CiU3E5__1_3(int32_t value)
	{
		___U3CiU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CnU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B, ___U3CnU3E5__2_4)); }
	inline int32_t get_U3CnU3E5__2_4() const { return ___U3CnU3E5__2_4; }
	inline int32_t* get_address_of_U3CnU3E5__2_4() { return &___U3CnU3E5__2_4; }
	inline void set_U3CnU3E5__2_4(int32_t value)
	{
		___U3CnU3E5__2_4 = value;
	}
};


// System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6
struct  U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8  : public RuntimeObject
{
public:
	// System.Int32 System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Dynamic.ExpandoObject_MetaExpando System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::<>4__this
	MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47 * ___U3CU3E4__this_3;
	// System.Dynamic.ExpandoObject_ExpandoData System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::<expandoData>5__1
	ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * ___U3CexpandoDataU3E5__1_4;
	// System.Dynamic.ExpandoClass System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::<klass>5__2
	ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * ___U3CklassU3E5__2_5;
	// System.Int32 System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::<i>5__3
	int32_t ___U3CiU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CU3E4__this_3)); }
	inline MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexpandoDataU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CexpandoDataU3E5__1_4)); }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * get_U3CexpandoDataU3E5__1_4() const { return ___U3CexpandoDataU3E5__1_4; }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 ** get_address_of_U3CexpandoDataU3E5__1_4() { return &___U3CexpandoDataU3E5__1_4; }
	inline void set_U3CexpandoDataU3E5__1_4(ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * value)
	{
		___U3CexpandoDataU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexpandoDataU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CklassU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CklassU3E5__2_5)); }
	inline ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * get_U3CklassU3E5__2_5() const { return ___U3CklassU3E5__2_5; }
	inline ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D ** get_address_of_U3CklassU3E5__2_5() { return &___U3CklassU3E5__2_5; }
	inline void set_U3CklassU3E5__2_5(ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * value)
	{
		___U3CklassU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CklassU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8, ___U3CiU3E5__3_6)); }
	inline int32_t get_U3CiU3E5__3_6() const { return ___U3CiU3E5__3_6; }
	inline int32_t* get_address_of_U3CiU3E5__3_6() { return &___U3CiU3E5__3_6; }
	inline void set_U3CiU3E5__3_6(int32_t value)
	{
		___U3CiU3E5__3_6 = value;
	}
};


// System.Dynamic.ExpandoObject_ValueCollection
struct  ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234  : public RuntimeObject
{
public:
	// System.Dynamic.ExpandoObject System.Dynamic.ExpandoObject_ValueCollection::_expando
	ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315 * ____expando_0;
	// System.Int32 System.Dynamic.ExpandoObject_ValueCollection::_expandoVersion
	int32_t ____expandoVersion_1;
	// System.Int32 System.Dynamic.ExpandoObject_ValueCollection::_expandoCount
	int32_t ____expandoCount_2;
	// System.Dynamic.ExpandoObject_ExpandoData System.Dynamic.ExpandoObject_ValueCollection::_expandoData
	ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * ____expandoData_3;

public:
	inline static int32_t get_offset_of__expando_0() { return static_cast<int32_t>(offsetof(ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234, ____expando_0)); }
	inline ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315 * get__expando_0() const { return ____expando_0; }
	inline ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315 ** get_address_of__expando_0() { return &____expando_0; }
	inline void set__expando_0(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315 * value)
	{
		____expando_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____expando_0), (void*)value);
	}

	inline static int32_t get_offset_of__expandoVersion_1() { return static_cast<int32_t>(offsetof(ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234, ____expandoVersion_1)); }
	inline int32_t get__expandoVersion_1() const { return ____expandoVersion_1; }
	inline int32_t* get_address_of__expandoVersion_1() { return &____expandoVersion_1; }
	inline void set__expandoVersion_1(int32_t value)
	{
		____expandoVersion_1 = value;
	}

	inline static int32_t get_offset_of__expandoCount_2() { return static_cast<int32_t>(offsetof(ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234, ____expandoCount_2)); }
	inline int32_t get__expandoCount_2() const { return ____expandoCount_2; }
	inline int32_t* get_address_of__expandoCount_2() { return &____expandoCount_2; }
	inline void set__expandoCount_2(int32_t value)
	{
		____expandoCount_2 = value;
	}

	inline static int32_t get_offset_of__expandoData_3() { return static_cast<int32_t>(offsetof(ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234, ____expandoData_3)); }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * get__expandoData_3() const { return ____expandoData_3; }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 ** get_address_of__expandoData_3() { return &____expandoData_3; }
	inline void set__expandoData_3(ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * value)
	{
		____expandoData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____expandoData_3), (void*)value);
	}
};


// System.Dynamic.ExpandoObject_ValueCollection_<GetEnumerator>d__15
struct  U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98  : public RuntimeObject
{
public:
	// System.Int32 System.Dynamic.ExpandoObject_ValueCollection_<GetEnumerator>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object System.Dynamic.ExpandoObject_ValueCollection_<GetEnumerator>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Dynamic.ExpandoObject_ValueCollection System.Dynamic.ExpandoObject_ValueCollection_<GetEnumerator>d__15::<>4__this
	ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234 * ___U3CU3E4__this_2;
	// System.Dynamic.ExpandoObject_ExpandoData System.Dynamic.ExpandoObject_ValueCollection_<GetEnumerator>d__15::<data>5__1
	ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * ___U3CdataU3E5__1_3;
	// System.Int32 System.Dynamic.ExpandoObject_ValueCollection_<GetEnumerator>d__15::<i>5__2
	int32_t ___U3CiU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98, ___U3CU3E4__this_2)); }
	inline ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98, ___U3CdataU3E5__1_3)); }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * get_U3CdataU3E5__1_3() const { return ___U3CdataU3E5__1_3; }
	inline ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 ** get_address_of_U3CdataU3E5__1_3() { return &___U3CdataU3E5__1_3; }
	inline void set_U3CdataU3E5__1_3(ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * value)
	{
		___U3CdataU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98, ___U3CiU3E5__2_4)); }
	inline int32_t get_U3CiU3E5__2_4() const { return ___U3CiU3E5__2_4; }
	inline int32_t* get_address_of_U3CiU3E5__2_4() { return &___U3CiU3E5__2_4; }
	inline void set_U3CiU3E5__2_4(int32_t value)
	{
		___U3CiU3E5__2_4 = value;
	}
};


// System.Linq.Expressions.CatchBlock
struct  CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.CatchBlock::<Variable>k__BackingField
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___U3CVariableU3Ek__BackingField_0;
	// System.Type System.Linq.Expressions.CatchBlock::<Test>k__BackingField
	Type_t * ___U3CTestU3Ek__BackingField_1;
	// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::<Body>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CBodyU3Ek__BackingField_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::<Filter>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CFilterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CVariableU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB, ___U3CVariableU3Ek__BackingField_0)); }
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * get_U3CVariableU3Ek__BackingField_0() const { return ___U3CVariableU3Ek__BackingField_0; }
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** get_address_of_U3CVariableU3Ek__BackingField_0() { return &___U3CVariableU3Ek__BackingField_0; }
	inline void set_U3CVariableU3Ek__BackingField_0(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		___U3CVariableU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVariableU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTestU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB, ___U3CTestU3Ek__BackingField_1)); }
	inline Type_t * get_U3CTestU3Ek__BackingField_1() const { return ___U3CTestU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CTestU3Ek__BackingField_1() { return &___U3CTestU3Ek__BackingField_1; }
	inline void set_U3CTestU3Ek__BackingField_1(Type_t * value)
	{
		___U3CTestU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBodyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB, ___U3CBodyU3Ek__BackingField_2)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CBodyU3Ek__BackingField_2() const { return ___U3CBodyU3Ek__BackingField_2; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CBodyU3Ek__BackingField_2() { return &___U3CBodyU3Ek__BackingField_2; }
	inline void set_U3CBodyU3Ek__BackingField_2(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CBodyU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBodyU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFilterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB, ___U3CFilterU3Ek__BackingField_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CFilterU3Ek__BackingField_3() const { return ___U3CFilterU3Ek__BackingField_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CFilterU3Ek__BackingField_3() { return &___U3CFilterU3Ek__BackingField_3; }
	inline void set_U3CFilterU3Ek__BackingField_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CFilterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFilterU3Ek__BackingField_3), (void*)value);
	}
};


// System.Linq.Expressions.Expression
struct  Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660  : public RuntimeObject
{
public:

public:
};

struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression_ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaFactories_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legacyCtorSupportTable_2), (void*)value);
	}
};


// System.Linq.Expressions.ExpressionVisitor
struct  ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Interpreter.Instruction
struct  Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Interpreter.InterpretedFrame
struct  InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2  : public RuntimeObject
{
public:
	// System.Linq.Expressions.Interpreter.Interpreter System.Linq.Expressions.Interpreter.InterpretedFrame::Interpreter
	Interpreter_t72F078C1054752C763660835B3B3488A135D178B * ___Interpreter_1;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.InterpretedFrame::_parent
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ____parent_2;
	// System.Int32[] System.Linq.Expressions.Interpreter.InterpretedFrame::_continuations
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____continuations_3;
	// System.Int32 System.Linq.Expressions.Interpreter.InterpretedFrame::_continuationIndex
	int32_t ____continuationIndex_4;
	// System.Int32 System.Linq.Expressions.Interpreter.InterpretedFrame::_pendingContinuation
	int32_t ____pendingContinuation_5;
	// System.Object System.Linq.Expressions.Interpreter.InterpretedFrame::_pendingValue
	RuntimeObject * ____pendingValue_6;
	// System.Object[] System.Linq.Expressions.Interpreter.InterpretedFrame::Data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Data_7;
	// System.Runtime.CompilerServices.IStrongBox[] System.Linq.Expressions.Interpreter.InterpretedFrame::Closure
	IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F* ___Closure_8;
	// System.Int32 System.Linq.Expressions.Interpreter.InterpretedFrame::StackIndex
	int32_t ___StackIndex_9;
	// System.Int32 System.Linq.Expressions.Interpreter.InterpretedFrame::InstructionIndex
	int32_t ___InstructionIndex_10;

public:
	inline static int32_t get_offset_of_Interpreter_1() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ___Interpreter_1)); }
	inline Interpreter_t72F078C1054752C763660835B3B3488A135D178B * get_Interpreter_1() const { return ___Interpreter_1; }
	inline Interpreter_t72F078C1054752C763660835B3B3488A135D178B ** get_address_of_Interpreter_1() { return &___Interpreter_1; }
	inline void set_Interpreter_1(Interpreter_t72F078C1054752C763660835B3B3488A135D178B * value)
	{
		___Interpreter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Interpreter_1), (void*)value);
	}

	inline static int32_t get_offset_of__parent_2() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ____parent_2)); }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * get__parent_2() const { return ____parent_2; }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 ** get_address_of__parent_2() { return &____parent_2; }
	inline void set__parent_2(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * value)
	{
		____parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_2), (void*)value);
	}

	inline static int32_t get_offset_of__continuations_3() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ____continuations_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__continuations_3() const { return ____continuations_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__continuations_3() { return &____continuations_3; }
	inline void set__continuations_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____continuations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____continuations_3), (void*)value);
	}

	inline static int32_t get_offset_of__continuationIndex_4() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ____continuationIndex_4)); }
	inline int32_t get__continuationIndex_4() const { return ____continuationIndex_4; }
	inline int32_t* get_address_of__continuationIndex_4() { return &____continuationIndex_4; }
	inline void set__continuationIndex_4(int32_t value)
	{
		____continuationIndex_4 = value;
	}

	inline static int32_t get_offset_of__pendingContinuation_5() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ____pendingContinuation_5)); }
	inline int32_t get__pendingContinuation_5() const { return ____pendingContinuation_5; }
	inline int32_t* get_address_of__pendingContinuation_5() { return &____pendingContinuation_5; }
	inline void set__pendingContinuation_5(int32_t value)
	{
		____pendingContinuation_5 = value;
	}

	inline static int32_t get_offset_of__pendingValue_6() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ____pendingValue_6)); }
	inline RuntimeObject * get__pendingValue_6() const { return ____pendingValue_6; }
	inline RuntimeObject ** get_address_of__pendingValue_6() { return &____pendingValue_6; }
	inline void set__pendingValue_6(RuntimeObject * value)
	{
		____pendingValue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pendingValue_6), (void*)value);
	}

	inline static int32_t get_offset_of_Data_7() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ___Data_7)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Data_7() const { return ___Data_7; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Data_7() { return &___Data_7; }
	inline void set_Data_7(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Data_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_7), (void*)value);
	}

	inline static int32_t get_offset_of_Closure_8() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ___Closure_8)); }
	inline IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F* get_Closure_8() const { return ___Closure_8; }
	inline IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F** get_address_of_Closure_8() { return &___Closure_8; }
	inline void set_Closure_8(IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F* value)
	{
		___Closure_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Closure_8), (void*)value);
	}

	inline static int32_t get_offset_of_StackIndex_9() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ___StackIndex_9)); }
	inline int32_t get_StackIndex_9() const { return ___StackIndex_9; }
	inline int32_t* get_address_of_StackIndex_9() { return &___StackIndex_9; }
	inline void set_StackIndex_9(int32_t value)
	{
		___StackIndex_9 = value;
	}

	inline static int32_t get_offset_of_InstructionIndex_10() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ___InstructionIndex_10)); }
	inline int32_t get_InstructionIndex_10() const { return ___InstructionIndex_10; }
	inline int32_t* get_address_of_InstructionIndex_10() { return &___InstructionIndex_10; }
	inline void set_InstructionIndex_10(int32_t value)
	{
		___InstructionIndex_10 = value;
	}
};

struct InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2_ThreadStaticFields
{
public:
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.InterpretedFrame::s_currentFrame
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___s_currentFrame_0;

public:
	inline static int32_t get_offset_of_s_currentFrame_0() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2_ThreadStaticFields, ___s_currentFrame_0)); }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * get_s_currentFrame_0() const { return ___s_currentFrame_0; }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 ** get_address_of_s_currentFrame_0() { return &___s_currentFrame_0; }
	inline void set_s_currentFrame_0(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * value)
	{
		___s_currentFrame_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentFrame_0), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.LocalVariable
struct  LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Expressions.Interpreter.LocalVariable::Index
	int32_t ___Index_0;
	// System.Int32 System.Linq.Expressions.Interpreter.LocalVariable::_flags
	int32_t ____flags_1;

public:
	inline static int32_t get_offset_of_Index_0() { return static_cast<int32_t>(offsetof(LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409, ___Index_0)); }
	inline int32_t get_Index_0() const { return ___Index_0; }
	inline int32_t* get_address_of_Index_0() { return &___Index_0; }
	inline void set_Index_0(int32_t value)
	{
		___Index_0 = value;
	}

	inline static int32_t get_offset_of__flags_1() { return static_cast<int32_t>(offsetof(LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409, ____flags_1)); }
	inline int32_t get__flags_1() const { return ____flags_1; }
	inline int32_t* get_address_of__flags_1() { return &____flags_1; }
	inline void set__flags_1(int32_t value)
	{
		____flags_1 = value;
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Dynamic.BindingRestrictions_TestBuilder_AndNode
struct  AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84 
{
public:
	// System.Int32 System.Dynamic.BindingRestrictions_TestBuilder_AndNode::Depth
	int32_t ___Depth_0;
	// System.Linq.Expressions.Expression System.Dynamic.BindingRestrictions_TestBuilder_AndNode::Node
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___Node_1;

public:
	inline static int32_t get_offset_of_Depth_0() { return static_cast<int32_t>(offsetof(AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84, ___Depth_0)); }
	inline int32_t get_Depth_0() const { return ___Depth_0; }
	inline int32_t* get_address_of_Depth_0() { return &___Depth_0; }
	inline void set_Depth_0(int32_t value)
	{
		___Depth_0 = value;
	}

	inline static int32_t get_offset_of_Node_1() { return static_cast<int32_t>(offsetof(AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84, ___Node_1)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_Node_1() const { return ___Node_1; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_Node_1() { return &___Node_1; }
	inline void set_Node_1(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___Node_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Node_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Dynamic.BindingRestrictions/TestBuilder/AndNode
struct AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshaled_pinvoke
{
	int32_t ___Depth_0;
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___Node_1;
};
// Native definition for COM marshalling of System.Dynamic.BindingRestrictions/TestBuilder/AndNode
struct AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshaled_com
{
	int32_t ___Depth_0;
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___Node_1;
};

// System.Dynamic.ExpandoObject_MetaExpando
struct  MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47  : public DynamicMetaObject_t5279001ADBFAB6EF015CAC54937F4E9F003881C3
{
public:

public:
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

// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Linq.Expressions.BlockExpression
struct  BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:

public:
};


// System.Linq.Expressions.ConstantExpression
struct  ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Object System.Linq.Expressions.ConstantExpression::<Value>k__BackingField
	RuntimeObject * ___U3CValueU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB, ___U3CValueU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CValueU3Ek__BackingField_3() const { return ___U3CValueU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CValueU3Ek__BackingField_3() { return &___U3CValueU3Ek__BackingField_3; }
	inline void set_U3CValueU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CValueU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_3), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.CastInstruction
struct  CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Boolean
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Boolean_0;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Byte
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Byte_1;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Char
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Char_2;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_DateTime
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_DateTime_3;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Decimal
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Decimal_4;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Double
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Double_5;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Int16
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Int16_6;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Int32
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Int32_7;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Int64
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Int64_8;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_SByte
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_SByte_9;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Single
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Single_10;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_String
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_String_11;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_UInt16
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_UInt16_12;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_UInt32
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_UInt32_13;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_UInt64
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_UInt64_14;

public:
	inline static int32_t get_offset_of_s_Boolean_0() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Boolean_0)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Boolean_0() const { return ___s_Boolean_0; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Boolean_0() { return &___s_Boolean_0; }
	inline void set_s_Boolean_0(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Boolean_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Boolean_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Byte_1() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Byte_1)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Byte_1() const { return ___s_Byte_1; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Byte_1() { return &___s_Byte_1; }
	inline void set_s_Byte_1(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Byte_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Byte_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Char_2() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Char_2)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Char_2() const { return ___s_Char_2; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Char_2() { return &___s_Char_2; }
	inline void set_s_Char_2(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Char_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Char_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DateTime_3() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_DateTime_3)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_DateTime_3() const { return ___s_DateTime_3; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_DateTime_3() { return &___s_DateTime_3; }
	inline void set_s_DateTime_3(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_DateTime_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DateTime_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Decimal_4() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Decimal_4)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Decimal_4() const { return ___s_Decimal_4; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Decimal_4() { return &___s_Decimal_4; }
	inline void set_s_Decimal_4(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Decimal_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Decimal_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_Double_5() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Double_5)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Double_5() const { return ___s_Double_5; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Double_5() { return &___s_Double_5; }
	inline void set_s_Double_5(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Double_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Double_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int16_6() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Int16_6)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Int16_6() const { return ___s_Int16_6; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Int16_6() { return &___s_Int16_6; }
	inline void set_s_Int16_6(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Int16_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_7() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Int32_7)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Int32_7() const { return ___s_Int32_7; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Int32_7() { return &___s_Int32_7; }
	inline void set_s_Int32_7(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Int32_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_8() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Int64_8)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Int64_8() const { return ___s_Int64_8; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Int64_8() { return &___s_Int64_8; }
	inline void set_s_Int64_8(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Int64_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_SByte_9() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_SByte_9)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_SByte_9() const { return ___s_SByte_9; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_SByte_9() { return &___s_SByte_9; }
	inline void set_s_SByte_9(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_SByte_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SByte_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_Single_10() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Single_10)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Single_10() const { return ___s_Single_10; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Single_10() { return &___s_Single_10; }
	inline void set_s_Single_10(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Single_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Single_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_String_11() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_String_11)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_String_11() const { return ___s_String_11; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_String_11() { return &___s_String_11; }
	inline void set_s_String_11(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_String_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_String_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_12() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_UInt16_12)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_UInt16_12() const { return ___s_UInt16_12; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_UInt16_12() { return &___s_UInt16_12; }
	inline void set_s_UInt16_12(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_UInt16_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_13() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_UInt32_13)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_UInt32_13() const { return ___s_UInt32_13; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_UInt32_13() { return &___s_UInt32_13; }
	inline void set_s_UInt32_13(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_UInt32_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_14() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_UInt64_14)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_UInt64_14() const { return ___s_UInt64_14; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_UInt64_14() { return &___s_UInt64_14; }
	inline void set_s_UInt64_14(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_UInt64_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_14), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.InstructionList_DebugView_InstructionView
struct  InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD 
{
public:
	// System.Int32 System.Linq.Expressions.Interpreter.InstructionList_DebugView_InstructionView::_index
	int32_t ____index_0;
	// System.Int32 System.Linq.Expressions.Interpreter.InstructionList_DebugView_InstructionView::_stackDepth
	int32_t ____stackDepth_1;
	// System.Int32 System.Linq.Expressions.Interpreter.InstructionList_DebugView_InstructionView::_continuationsDepth
	int32_t ____continuationsDepth_2;
	// System.String System.Linq.Expressions.Interpreter.InstructionList_DebugView_InstructionView::_name
	String_t* ____name_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.InstructionList_DebugView_InstructionView::_instruction
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ____instruction_4;

public:
	inline static int32_t get_offset_of__index_0() { return static_cast<int32_t>(offsetof(InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD, ____index_0)); }
	inline int32_t get__index_0() const { return ____index_0; }
	inline int32_t* get_address_of__index_0() { return &____index_0; }
	inline void set__index_0(int32_t value)
	{
		____index_0 = value;
	}

	inline static int32_t get_offset_of__stackDepth_1() { return static_cast<int32_t>(offsetof(InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD, ____stackDepth_1)); }
	inline int32_t get__stackDepth_1() const { return ____stackDepth_1; }
	inline int32_t* get_address_of__stackDepth_1() { return &____stackDepth_1; }
	inline void set__stackDepth_1(int32_t value)
	{
		____stackDepth_1 = value;
	}

	inline static int32_t get_offset_of__continuationsDepth_2() { return static_cast<int32_t>(offsetof(InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD, ____continuationsDepth_2)); }
	inline int32_t get__continuationsDepth_2() const { return ____continuationsDepth_2; }
	inline int32_t* get_address_of__continuationsDepth_2() { return &____continuationsDepth_2; }
	inline void set__continuationsDepth_2(int32_t value)
	{
		____continuationsDepth_2 = value;
	}

	inline static int32_t get_offset_of__name_3() { return static_cast<int32_t>(offsetof(InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD, ____name_3)); }
	inline String_t* get__name_3() const { return ____name_3; }
	inline String_t** get_address_of__name_3() { return &____name_3; }
	inline void set__name_3(String_t* value)
	{
		____name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_3), (void*)value);
	}

	inline static int32_t get_offset_of__instruction_4() { return static_cast<int32_t>(offsetof(InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD, ____instruction_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get__instruction_4() const { return ____instruction_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of__instruction_4() { return &____instruction_4; }
	inline void set__instruction_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		____instruction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instruction_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView
struct InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshaled_pinvoke
{
	int32_t ____index_0;
	int32_t ____stackDepth_1;
	int32_t ____continuationsDepth_2;
	char* ____name_3;
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ____instruction_4;
};
// Native definition for COM marshalling of System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView
struct InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshaled_com
{
	int32_t ____index_0;
	int32_t ____stackDepth_1;
	int32_t ____continuationsDepth_2;
	Il2CppChar* ____name_3;
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ____instruction_4;
};

// System.Linq.Expressions.Interpreter.OrInstruction
struct  OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_SByte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_SByte_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_Byte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Byte_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_5;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_6;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_7;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_Boolean
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Boolean_8;

public:
	inline static int32_t get_offset_of_s_SByte_0() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_SByte_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_SByte_0() const { return ___s_SByte_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_SByte_0() { return &___s_SByte_0; }
	inline void set_s_SByte_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_SByte_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SByte_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int16_1() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_Int16_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_1() const { return ___s_Int16_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_1() { return &___s_Int16_1; }
	inline void set_s_Int16_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_2() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_Int32_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_2() const { return ___s_Int32_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_2() { return &___s_Int32_2; }
	inline void set_s_Int32_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_3() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_Int64_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_3() const { return ___s_Int64_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_3() { return &___s_Int64_3; }
	inline void set_s_Int64_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Byte_4() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_Byte_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Byte_4() const { return ___s_Byte_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Byte_4() { return &___s_Byte_4; }
	inline void set_s_Byte_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Byte_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Byte_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_5() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_UInt16_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_5() const { return ___s_UInt16_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_5() { return &___s_UInt16_5; }
	inline void set_s_UInt16_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_6() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_UInt32_6)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_6() const { return ___s_UInt32_6; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_6() { return &___s_UInt32_6; }
	inline void set_s_UInt32_6(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_7() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_UInt64_7)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_7() const { return ___s_UInt64_7; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_7() { return &___s_UInt64_7; }
	inline void set_s_UInt64_7(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Boolean_8() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_Boolean_8)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Boolean_8() const { return ___s_Boolean_8; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Boolean_8() { return &___s_Boolean_8; }
	inline void set_s_Boolean_8(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Boolean_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Boolean_8), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.QuoteInstruction_ExpressionQuoter
struct  ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE  : public ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4
{
public:
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction_ExpressionQuoter::_variables
	Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction_ExpressionQuoter::_frame
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction_ExpressionQuoter::_shadowedVars
	Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * ____shadowedVars_2;

public:
	inline static int32_t get_offset_of__variables_0() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____variables_0)); }
	inline Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * get__variables_0() const { return ____variables_0; }
	inline Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 ** get_address_of__variables_0() { return &____variables_0; }
	inline void set__variables_0(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * value)
	{
		____variables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____variables_0), (void*)value);
	}

	inline static int32_t get_offset_of__frame_1() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____frame_1)); }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * get__frame_1() const { return ____frame_1; }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 ** get_address_of__frame_1() { return &____frame_1; }
	inline void set__frame_1(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * value)
	{
		____frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frame_1), (void*)value);
	}

	inline static int32_t get_offset_of__shadowedVars_2() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____shadowedVars_2)); }
	inline Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * get__shadowedVars_2() const { return ____shadowedVars_2; }
	inline Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 ** get_address_of__shadowedVars_2() { return &____shadowedVars_2; }
	inline void set__shadowedVars_2(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * value)
	{
		____shadowedVars_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shadowedVars_2), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction
struct  RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_SByte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_SByte_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_Byte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Byte_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_5;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_6;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_7;

public:
	inline static int32_t get_offset_of_s_SByte_0() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_SByte_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_SByte_0() const { return ___s_SByte_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_SByte_0() { return &___s_SByte_0; }
	inline void set_s_SByte_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_SByte_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SByte_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int16_1() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_Int16_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_1() const { return ___s_Int16_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_1() { return &___s_Int16_1; }
	inline void set_s_Int16_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_2() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_Int32_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_2() const { return ___s_Int32_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_2() { return &___s_Int32_2; }
	inline void set_s_Int32_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_3() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_Int64_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_3() const { return ___s_Int64_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_3() { return &___s_Int64_3; }
	inline void set_s_Int64_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Byte_4() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_Byte_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Byte_4() const { return ___s_Byte_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Byte_4() { return &___s_Byte_4; }
	inline void set_s_Byte_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Byte_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Byte_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_5() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_UInt16_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_5() const { return ___s_UInt16_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_5() { return &___s_UInt16_5; }
	inline void set_s_UInt16_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_6() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_UInt32_6)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_6() const { return ___s_UInt32_6; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_6() { return &___s_UInt32_6; }
	inline void set_s_UInt32_6(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_7() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_UInt64_7)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_7() const { return ___s_UInt64_7; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_7() { return &___s_UInt64_7; }
	inline void set_s_UInt64_7(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_7), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.SubInstruction
struct  SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_5;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_Single
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Single_6;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_Double
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Double_7;

public:
	inline static int32_t get_offset_of_s_Int16_0() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_Int16_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_0() const { return ___s_Int16_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_0() { return &___s_Int16_0; }
	inline void set_s_Int16_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_1() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_Int32_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_1() const { return ___s_Int32_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_1() { return &___s_Int32_1; }
	inline void set_s_Int32_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_2() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_Int64_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_2() const { return ___s_Int64_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_2() { return &___s_Int64_2; }
	inline void set_s_Int64_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_3() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_UInt16_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_3() const { return ___s_UInt16_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_3() { return &___s_UInt16_3; }
	inline void set_s_UInt16_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_4() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_UInt32_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_4() const { return ___s_UInt32_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_4() { return &___s_UInt32_4; }
	inline void set_s_UInt32_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_5() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_UInt64_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_5() const { return ___s_UInt64_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_5() { return &___s_UInt64_5; }
	inline void set_s_UInt64_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Single_6() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_Single_6)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Single_6() const { return ___s_Single_6; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Single_6() { return &___s_Single_6; }
	inline void set_s_Single_6(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Single_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Single_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_Double_7() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_Double_7)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Double_7() const { return ___s_Double_7; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Double_7() { return &___s_Double_7; }
	inline void set_s_Double_7(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Double_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Double_7), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction
struct  SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubOvfInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubOvfInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubOvfInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubOvfInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubOvfInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubOvfInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_5;

public:
	inline static int32_t get_offset_of_s_Int16_0() { return static_cast<int32_t>(offsetof(SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields, ___s_Int16_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_0() const { return ___s_Int16_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_0() { return &___s_Int16_0; }
	inline void set_s_Int16_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_1() { return static_cast<int32_t>(offsetof(SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields, ___s_Int32_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_1() const { return ___s_Int32_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_1() { return &___s_Int32_1; }
	inline void set_s_Int32_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_2() { return static_cast<int32_t>(offsetof(SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields, ___s_Int64_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_2() const { return ___s_Int64_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_2() { return &___s_Int64_2; }
	inline void set_s_Int64_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_3() { return static_cast<int32_t>(offsetof(SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields, ___s_UInt16_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_3() const { return ___s_UInt16_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_3() { return &___s_UInt16_3; }
	inline void set_s_UInt16_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_4() { return static_cast<int32_t>(offsetof(SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields, ___s_UInt32_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_4() const { return ___s_UInt32_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_4() { return &___s_UInt32_4; }
	inline void set_s_UInt32_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_5() { return static_cast<int32_t>(offsetof(SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields, ___s_UInt64_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_5() const { return ___s_UInt64_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_5() { return &___s_UInt64_5; }
	inline void set_s_UInt64_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_5), (void*)value);
	}
};


// System.Linq.Expressions.MemberExpression
struct  MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::<Expression>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CExpressionU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CExpressionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622, ___U3CExpressionU3Ek__BackingField_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CExpressionU3Ek__BackingField_3() const { return ___U3CExpressionU3Ek__BackingField_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CExpressionU3Ek__BackingField_3() { return &___U3CExpressionU3Ek__BackingField_3; }
	inline void set_U3CExpressionU3Ek__BackingField_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CExpressionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExpressionU3Ek__BackingField_3), (void*)value);
	}
};


// System.Linq.Expressions.ParameterExpression
struct  ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
	}
};


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.Threading.ReaderWriterLockSlim_TimeoutTracker
struct  TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B 
{
public:
	// System.Int32 System.Threading.ReaderWriterLockSlim_TimeoutTracker::m_total
	int32_t ___m_total_0;
	// System.Int32 System.Threading.ReaderWriterLockSlim_TimeoutTracker::m_start
	int32_t ___m_start_1;

public:
	inline static int32_t get_offset_of_m_total_0() { return static_cast<int32_t>(offsetof(TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B, ___m_total_0)); }
	inline int32_t get_m_total_0() const { return ___m_total_0; }
	inline int32_t* get_address_of_m_total_0() { return &___m_total_0; }
	inline void set_m_total_0(int32_t value)
	{
		___m_total_0 = value;
	}

	inline static int32_t get_offset_of_m_start_1() { return static_cast<int32_t>(offsetof(TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B, ___m_start_1)); }
	inline int32_t get_m_start_1() const { return ___m_start_1; }
	inline int32_t* get_address_of_m_start_1() { return &___m_start_1; }
	inline void set_m_start_1(int32_t value)
	{
		___m_start_1 = value;
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
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


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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

// System.Linq.Expressions.ExpressionType
struct  ExpressionType_t5DFF595F84E155FA27FA8929A81459546074CE51 
{
public:
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExpressionType_t5DFF595F84E155FA27FA8929A81459546074CE51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Linq.Expressions.Interpreter.CastInstruction_CastInstructionNoT
struct  CastInstructionNoT_t9C4D91B95D55BEB4F8E995F8E4CE167C8606110B  : public CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F
{
public:
	// System.Type System.Linq.Expressions.Interpreter.CastInstruction_CastInstructionNoT::_t
	Type_t * ____t_15;

public:
	inline static int32_t get_offset_of__t_15() { return static_cast<int32_t>(offsetof(CastInstructionNoT_t9C4D91B95D55BEB4F8E995F8E4CE167C8606110B, ____t_15)); }
	inline Type_t * get__t_15() const { return ____t_15; }
	inline Type_t ** get_address_of__t_15() { return &____t_15; }
	inline void set__t_15(Type_t * value)
	{
		____t_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____t_15), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.OrInstruction_OrByte
struct  OrByte_t201A377B95ABC243F185019710B98220335474B0  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction_OrInt16
struct  OrInt16_tDCAC652458E4A355ED5945D621DB6CDE47766A90  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction_OrInt32
struct  OrInt32_tBB86B9EC780E61CDE55CE0A6C7DDB168C3BE70FF  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction_OrInt64
struct  OrInt64_t7DB4AF687896C3540F17A785CD195748FC5B31F0  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction_OrSByte
struct  OrSByte_tBD96031881884B43042D1825F549982894E1627E  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction_OrUInt16
struct  OrUInt16_t88C758255AE7C9D2CFF3033E2CE589B7C74A3E3F  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction_OrUInt32
struct  OrUInt32_t9982D5B99CDCA5A4C41529753D5D71AF6FF740BC  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction_OrUInt64
struct  OrUInt64_tE09557C73068791FE26C2FDB13BADDB4069285AA  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftByte
struct  RightShiftByte_t5F287F9A98BD517088EBEBB5762D9B5547411F02  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftInt16
struct  RightShiftInt16_t2CE116D1706B0B2E1BBC6F132D090C0B344DA147  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftInt32
struct  RightShiftInt32_t28B8326998E527389A4C0B7F66CB0CDC2997AECD  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftInt64
struct  RightShiftInt64_tD5FE689CDEC4FB15BE4001CE537725EA23C90692  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftSByte
struct  RightShiftSByte_t3BAA90C2005D7DBF702594A81C6FD7DB336FAE60  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftUInt16
struct  RightShiftUInt16_t4107CD5715606EAAF84FFAFA9B8DD0261B14CBF6  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftUInt32
struct  RightShiftUInt32_tBE3AD1CB4803EE031AB2D8FBFAC118DA0C36C077  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftUInt64
struct  RightShiftUInt64_t11D41A57381AEE78C426DE33130B91A7D55876BB  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction_SubDouble
struct  SubDouble_tD043A690C939E826740F3980649781CF246DCDF2  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction_SubInt16
struct  SubInt16_t54BA31141EB907D849DEA9B01CF7BC6D50D6990A  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction_SubInt32
struct  SubInt32_t45C297528948D24B11B80E5D5F9160424C4FB6A5  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction_SubInt64
struct  SubInt64_t2A292A0D8C604FDE28954B60EF80E36285F47511  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction_SubSingle
struct  SubSingle_t2561FE69D9CDA0F6C0A1A8958CF2417D34541B26  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction_SubUInt16
struct  SubUInt16_tCBA7FBA9D5D99CB82C5E63FE3218C6F80E13EFBD  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction_SubUInt32
struct  SubUInt32_t4DFA170330F70C0F8F9F211169DC93235FF64BAF  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction_SubUInt64
struct  SubUInt64_t986CC4C6FC8D2F5D1601D820D690EAE039CB21CC  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfInt16
struct  SubOvfInt16_tAEAF2F6A8C023CE3CBB545F3CF87B52081F7D1F0  : public SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfInt32
struct  SubOvfInt32_tB06ACE45D8557990B724B37C14C83ABB0EBEB019  : public SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfInt64
struct  SubOvfInt64_t9BC0A0C8BFBCC9B1CBF3A7468DE27A8F5BA13D8B  : public SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfUInt16
struct  SubOvfUInt16_t44B387BAA3E156B5D3A023F247C9FC208905B53F  : public SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfUInt32
struct  SubOvfUInt32_tB163618E06EE74B7F7F2D6B80F217B712A5DF6A0  : public SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfUInt64
struct  SubOvfUInt64_t321A38C66A5A2020B95D7E7042AB287565C4B18E  : public SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721
{
public:

public:
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


// System.Linq.Expressions.Interpreter.CastInstruction_CastInstructionNoT_Ref
struct  Ref_t168CC06E3E836CBD2DA362F99B022F5D79504E10  : public CastInstructionNoT_t9C4D91B95D55BEB4F8E995F8E4CE167C8606110B
{
public:

public:
};


// System.Linq.Expressions.Interpreter.CastInstruction_CastInstructionNoT_Value
struct  Value_t291D50D67C4EC0983FA0B027505922ED0110765D  : public CastInstructionNoT_t9C4D91B95D55BEB4F8E995F8E4CE167C8606110B
{
public:

public:
};


// System.Linq.Expressions.UnaryExpression
struct  UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Type System.Linq.Expressions.UnaryExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.UnaryExpression::<NodeType>k__BackingField
	int32_t ___U3CNodeTypeU3Ek__BackingField_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::<Operand>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3COperandU3Ek__BackingField_5;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::<Method>k__BackingField
	MethodInfo_t * ___U3CMethodU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3CTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_3() const { return ___U3CTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_3() { return &___U3CTypeU3Ek__BackingField_3; }
	inline void set_U3CTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNodeTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3CNodeTypeU3Ek__BackingField_4)); }
	inline int32_t get_U3CNodeTypeU3Ek__BackingField_4() const { return ___U3CNodeTypeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CNodeTypeU3Ek__BackingField_4() { return &___U3CNodeTypeU3Ek__BackingField_4; }
	inline void set_U3CNodeTypeU3Ek__BackingField_4(int32_t value)
	{
		___U3CNodeTypeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3COperandU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3COperandU3Ek__BackingField_5)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3COperandU3Ek__BackingField_5() const { return ___U3COperandU3Ek__BackingField_5; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3COperandU3Ek__BackingField_5() { return &___U3COperandU3Ek__BackingField_5; }
	inline void set_U3COperandU3Ek__BackingField_5(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3COperandU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COperandU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3CMethodU3Ek__BackingField_6)); }
	inline MethodInfo_t * get_U3CMethodU3Ek__BackingField_6() const { return ___U3CMethodU3Ek__BackingField_6; }
	inline MethodInfo_t ** get_address_of_U3CMethodU3Ek__BackingField_6() { return &___U3CMethodU3Ek__BackingField_6; }
	inline void set_U3CMethodU3Ek__BackingField_6(MethodInfo_t * value)
	{
		___U3CMethodU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_6), (void*)value);
	}
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


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * m_Items[1];

public:
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Runtime.CompilerServices.IStrongBox[]
struct IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
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


// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2D719EE02B7FE98B5D6E9515334C594836D2C0C7_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9D936778F28043838186FC2037F47460DA7925B9_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);

// System.Object System.Linq.Expressions.Interpreter.InterpretedFrame::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InterpretedFrame::Push(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968 (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InterpretedFrame::Push(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpretedFrame_Push_m3D471A0B71F06B515A5AC6CD955F00C8240428ED (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.OrInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F (OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InterpretedFrame::Push(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpretedFrame_Push_mC1E4D132AA581DA23B173C5E8416F09D703E9A60 (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InterpretedFrame::Push(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpretedFrame_Push_m8993875D202411807B024C272CA71C3852BE6C71 (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InterpretedFrame::Push(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpretedFrame_Push_m99C008FE2B0E5842A182DBDFE7144A40960EEE8B (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, int8_t ___value0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InterpretedFrame::Push(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpretedFrame_Push_m1E7E0894F3C4290DB002A0FFAE6D8EFEFC881797 (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::.ctor()
inline void Stack_1__ctor_m5323B88ED2E3A1BE919D98A96DD9C6C02B150BA2 (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionVisitor__ctor_m45ACF0744BAD52FCD928645D7D4173CA25DD332A (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.BlockExpression::get_Variables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * BlockExpression_get_Variables_mBA633EEB35C122AD8BDC6DA51BD768D839945533 (BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_mCB5C4BDEB03233F12B542819ACA65DAB8F3FEFA0 (ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 *, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m2D719EE02B7FE98B5D6E9515334C594836D2C0C7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void HashSet_1__ctor_m5A39E55363E4D9BA3CB364B80A3C8701AF672C9D (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m9D936778F28043838186FC2037F47460DA7925B9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(!0)
inline void Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Linq.Expressions.Expression[] System.Dynamic.Utils.ExpressionVisitorUtils::VisitBlockExpressions(System.Linq.Expressions.ExpressionVisitor,System.Linq.Expressions.BlockExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* ExpressionVisitorUtils_VisitBlockExpressions_m7233DD6AAC10E8C700B7BA0EBA7798B09A81D1E2 (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * ___visitor0, BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * ___block1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769 (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.CatchBlock::get_Variable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * CatchBlock_get_Body_m9EE90AA7A3BBD028A1032648E1722BEC8EF5E190_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::get_Filter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * CatchBlock_get_Filter_mC92D5E87F42D09D8FCF9BF0BF5F096359A81665D_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method);
// System.Type System.Linq.Expressions.CatchBlock::get_Test()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * CatchBlock_get_Test_m9F57E603AC71DE8C69057B4B366BEF47823E3247_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method);
// System.Linq.Expressions.CatchBlock System.Linq.Expressions.Expression::MakeCatchBlock(System.Type,System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * Expression_MakeCatchBlock_m1CBF3ECC3A08691C0841347214D681F03E42D370 (Type_t * ___type0, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___variable1, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___body2, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___filter3, const RuntimeMethod* method);
// System.Runtime.CompilerServices.IStrongBox System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::GetBox(System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExpressionQuoter_GetBox_mB02A80E9219C417E14C0DDFB99A2470B67FE640E (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___variable0, const RuntimeMethod* method);
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * Expression_Constant_mEEA1BB10F0EE0D668C36114629468DA1D840601C (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Linq.Expressions.MemberExpression System.Linq.Expressions.Expression::Field(System.Linq.Expressions.Expression,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * Expression_Field_mE764DA3894D8BE7A1713A3410EB21774BB84244C (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___expression0, String_t* ___fieldName1, const RuntimeMethod* method);
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Convert(System.Linq.Expressions.Expression,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * Expression_Convert_m494826A3729B238263D95E7D7B0E236DE3B1CDA7 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___expression0, Type_t * ___type1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9F075D45997E73C2F61005C8C5A35D2FCAEB4C1E (Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___key0, LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Linq.Expressions.Interpreter.LocalVariable::get_InClosure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalVariable_get_InClosure_mA3903B46C398E3BE8086ABC39A061D4844FB32B3 (LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E (const RuntimeMethod* method);
// System.Void System.Threading.ReaderWriterLockSlim/TimeoutTracker::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553 (TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Int32 System.Threading.ReaderWriterLockSlim/TimeoutTracker::get_RemainingMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeoutTracker_get_RemainingMilliseconds_m2DF873714961B9BED784F45364703221E4259F04 (TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.ReaderWriterLockSlim/TimeoutTracker::get_IsExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeoutTracker_get_IsExpired_mE4ED4EDAA3A57C06198F451E21D347640DB1EA38 (TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90 (RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.SubInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA (SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD * __this, const RuntimeMethod* method);
// System.Object System.Linq.Expressions.Interpreter.ScriptingRuntimeHelpers::Int32ToObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptingRuntimeHelpers_Int32ToObject_m53DFEFE8224BE36C871A324BC94308094F7E9281 (int32_t ___i0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53 (SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CastInstructionNoT__ctor_m340CB277F4601E785560A9E43FF8C55B74B74115 (CastInstructionNoT_t9C4D91B95D55BEB4F8E995F8E4CE167C8606110B * __this, Type_t * ___t0, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m669954F23A336EC873149F0ED0D291F2B509017A (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String[] System.Dynamic.ExpandoClass::get_Keys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ExpandoClass_get_Keys_m2DDCC513EA663E6AB643E0C70E48182AB6BE9BEC_inline (ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * __this, const RuntimeMethod* method);
// System.Void System.Dynamic.ExpandoObject/KeyCollection::CheckVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection_CheckVersion_mDDA02950D0BA22DD43F0EAEC02F272E76AC85133 (KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 * __this, const RuntimeMethod* method);
// System.Object System.Dynamic.ExpandoObject/ExpandoData::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExpandoData_get_Item_mFD0F9424CDDB9EDDCF181AD3CBF1593D027239A1 (ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Dynamic.ExpandoObject System.Dynamic.ExpandoObject/MetaExpando::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315 * MetaExpando_get_Value_m280DAD79B64E61E2B13E8CE09F5A1F7D15E7EB3C (MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47 * __this, const RuntimeMethod* method);
// System.Void System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDynamicMemberNamesU3Ed__6__ctor_m761364DD5C69E3E134AAE84F4AE8AEC24FABE0A3 (U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.String> System.Dynamic.ExpandoObject/MetaExpando/<GetDynamicMemberNames>d__6::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDynamicMemberNamesU3Ed__6_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mF05E0A905C664AD577DDD12904E2A7450F47FA3E (U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * __this, const RuntimeMethod* method);
// System.Void System.Dynamic.ExpandoObject/ValueCollection::CheckVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CheckVersion_m17699ED33F4C4ED3FF77E52E4F2C27BD94F6BD92 (ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234 * __this, const RuntimeMethod* method);
// System.String System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView::GetValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InstructionView_GetValue_m492D36D7E84197BE0D6B72B4A817C7FCABA9798D_inline (InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView::.ctor(System.Linq.Expressions.Interpreter.Instruction,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionView__ctor_mF6423A25DA30B2181436EB22FDF802B79BA72FB0 (InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD * __this, Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___instruction0, String_t* ___name1, int32_t ___index2, int32_t ___stackDepth3, int32_t ___continuationsDepth4, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction_OrByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrByte_Run_mDC2087F2327032925CDC4BA7B0A803298922F2AB (OrByte_t201A377B95ABC243F185019710B98220335474B0 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrByte_Run_mDC2087F2327032925CDC4BA7B0A803298922F2AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		NullCheck(L_7);
		InterpretedFrame_Push_m3D471A0B71F06B515A5AC6CD955F00C8240428ED(L_7, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((*(uint8_t*)((uint8_t*)UnBox(L_8, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))))|(int32_t)((*(uint8_t*)((uint8_t*)UnBox(L_9, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))))))))), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction_OrByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrByte__ctor_mD100C34306F91802EDD57AA962C85500339A5014 (OrByte_t201A377B95ABC243F185019710B98220335474B0 * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction_OrInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrInt16_Run_mD568484D668650C9D589942AE774EAA1B4F9542D (OrInt16_tDCAC652458E4A355ED5945D621DB6CDE47766A90 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrInt16_Run_mD568484D668650C9D589942AE774EAA1B4F9542D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		NullCheck(L_7);
		InterpretedFrame_Push_mC1E4D132AA581DA23B173C5E8416F09D703E9A60(L_7, (((int16_t)((int16_t)((int32_t)((int32_t)((*(int16_t*)((int16_t*)UnBox(L_8, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))|(int32_t)((*(int16_t*)((int16_t*)UnBox(L_9, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))))))), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction_OrInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrInt16__ctor_mFF74098E42EC2E0DF3EFA2A1ABABA82FA44404F2 (OrInt16_tDCAC652458E4A355ED5945D621DB6CDE47766A90 * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction_OrInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrInt32_Run_m95BED0BDF2A097AAA2889C9745EADC9B2EDA56BA (OrInt32_tBB86B9EC780E61CDE55CE0A6C7DDB168C3BE70FF * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrInt32_Run_m95BED0BDF2A097AAA2889C9745EADC9B2EDA56BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		NullCheck(L_7);
		InterpretedFrame_Push_m8993875D202411807B024C272CA71C3852BE6C71(L_7, ((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_8, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))|(int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction_OrInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrInt32__ctor_m5B96C1FAF3492AB2FE8501333976A4B83C766D91 (OrInt32_tBB86B9EC780E61CDE55CE0A6C7DDB168C3BE70FF * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction_OrInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrInt64_Run_m9B2AEB50A01FB9197242D4D5403B6A34BFDD193F (OrInt64_t7DB4AF687896C3540F17A785CD195748FC5B31F0 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrInt64_Run_m9B2AEB50A01FB9197242D4D5403B6A34BFDD193F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		int64_t L_10 = ((int64_t)((int64_t)((*(int64_t*)((int64_t*)UnBox(L_8, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))|(int64_t)((*(int64_t*)((int64_t*)UnBox(L_9, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_11 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_7, L_11, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction_OrInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrInt64__ctor_m395A23F4B0B933C16AA64BA9F72EFB855501FC5A (OrInt64_t7DB4AF687896C3540F17A785CD195748FC5B31F0 * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction_OrSByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrSByte_Run_m6B46A8DCA7ED709339FE35AB20782B21256C1D18 (OrSByte_tBD96031881884B43042D1825F549982894E1627E * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrSByte_Run_m6B46A8DCA7ED709339FE35AB20782B21256C1D18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		NullCheck(L_7);
		InterpretedFrame_Push_m99C008FE2B0E5842A182DBDFE7144A40960EEE8B(L_7, (((int8_t)((int8_t)((int32_t)((int32_t)((*(int8_t*)((int8_t*)UnBox(L_8, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))))|(int32_t)((*(int8_t*)((int8_t*)UnBox(L_9, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))))))))), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction_OrSByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrSByte__ctor_m29B90A6539A9AD6371CF06407E0ADB6032B47344 (OrSByte_tBD96031881884B43042D1825F549982894E1627E * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction_OrUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrUInt16_Run_mB2DAEFBE48BBF1EF5EDDBA402DC7BE7899500161 (OrUInt16_t88C758255AE7C9D2CFF3033E2CE589B7C74A3E3F * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrUInt16_Run_mB2DAEFBE48BBF1EF5EDDBA402DC7BE7899500161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		NullCheck(L_7);
		InterpretedFrame_Push_m1E7E0894F3C4290DB002A0FFAE6D8EFEFC881797(L_7, (uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_8, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))|(int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_9, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))))))), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction_OrUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrUInt16__ctor_mE4C828B280869201C5330289E4D71C1C455EFC38 (OrUInt16_t88C758255AE7C9D2CFF3033E2CE589B7C74A3E3F * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction_OrUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrUInt32_Run_mC067ACEE1317B8186D8CFB378B0806620A830510 (OrUInt32_t9982D5B99CDCA5A4C41529753D5D71AF6FF740BC * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrUInt32_Run_mC067ACEE1317B8186D8CFB378B0806620A830510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		uint32_t L_10 = ((uint32_t)((int32_t)((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_8, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var))))|(int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_9, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_11 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_7, L_11, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction_OrUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrUInt32__ctor_mDDA496D8083127FD41372FE565D01A78B3E9D41B (OrUInt32_t9982D5B99CDCA5A4C41529753D5D71AF6FF740BC * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction_OrUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrUInt64_Run_m7DC5517D31D9AB0E4B01C060E0BE5BD96729DE8B (OrUInt64_tE09557C73068791FE26C2FDB13BADDB4069285AA * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrUInt64_Run_m7DC5517D31D9AB0E4B01C060E0BE5BD96729DE8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		uint64_t L_10 = ((uint64_t)((int64_t)((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_8, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))))|(int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_9, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_11 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_7, L_11, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction_OrUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrUInt64__ctor_m1D3C17556C2E9DDA8F50B17E2095629744D3852E (OrUInt64_tE09557C73068791FE26C2FDB13BADDB4069285AA * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Void System.Linq.Expressions.Interpreter.QuoteInstruction_ExpressionQuoter::.ctor(System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>,System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionQuoter__ctor_mDB9205961C23968CAE09AD410055116D8B9C84CA (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * ___hoistedVariables0, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionQuoter__ctor_mDB9205961C23968CAE09AD410055116D8B9C84CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_0 = (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)il2cpp_codegen_object_new(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958_il2cpp_TypeInfo_var);
		Stack_1__ctor_m5323B88ED2E3A1BE919D98A96DD9C6C02B150BA2(L_0, /*hidden argument*/Stack_1__ctor_m5323B88ED2E3A1BE919D98A96DD9C6C02B150BA2_RuntimeMethod_var);
		__this->set__shadowedVars_2(L_0);
		ExpressionVisitor__ctor_m45ACF0744BAD52FCD928645D7D4173CA25DD332A(__this, /*hidden argument*/NULL);
		Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * L_1 = ___hoistedVariables0;
		__this->set__variables_0(L_1);
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame1;
		__this->set__frame_1(L_2);
		return;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction_ExpressionQuoter::VisitBlock(System.Linq.Expressions.BlockExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ExpressionQuoter_VisitBlock_mA5024528E72CFF2667DEDDD3C9E010211C3B59B3 (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionQuoter_VisitBlock_mA5024528E72CFF2667DEDDD3C9E010211C3B59B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* V_0 = NULL;
	{
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_0 = ___node0;
		NullCheck(L_0);
		ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * L_1 = BlockExpression_get_Variables_mBA633EEB35C122AD8BDC6DA51BD768D839945533(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = ReadOnlyCollection_1_get_Count_mCB5C4BDEB03233F12B542819ACA65DAB8F3FEFA0(L_1, /*hidden argument*/ReadOnlyCollection_1_get_Count_mCB5C4BDEB03233F12B542819ACA65DAB8F3FEFA0_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_3 = __this->get__shadowedVars_2();
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_4 = ___node0;
		NullCheck(L_4);
		ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * L_5 = BlockExpression_get_Variables_mBA633EEB35C122AD8BDC6DA51BD768D839945533(L_4, /*hidden argument*/NULL);
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_6 = (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)il2cpp_codegen_object_new(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m5A39E55363E4D9BA3CB364B80A3C8701AF672C9D(L_6, L_5, /*hidden argument*/HashSet_1__ctor_m5A39E55363E4D9BA3CB364B80A3C8701AF672C9D_RuntimeMethod_var);
		NullCheck(L_3);
		Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C(L_3, L_6, /*hidden argument*/Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
	}

IL_0024:
	{
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_7 = ___node0;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_8 = ExpressionVisitorUtils_VisitBlockExpressions_m7233DD6AAC10E8C700B7BA0EBA7798B09A81D1E2(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_9 = ___node0;
		NullCheck(L_9);
		ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * L_10 = BlockExpression_get_Variables_mBA633EEB35C122AD8BDC6DA51BD768D839945533(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = ReadOnlyCollection_1_get_Count_mCB5C4BDEB03233F12B542819ACA65DAB8F3FEFA0(L_10, /*hidden argument*/ReadOnlyCollection_1_get_Count_mCB5C4BDEB03233F12B542819ACA65DAB8F3FEFA0_RuntimeMethod_var);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_12 = __this->get__shadowedVars_2();
		NullCheck(L_12);
		Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769(L_12, /*hidden argument*/Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
	}

IL_0046:
	{
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_13 = V_0;
		if (L_13)
		{
			goto IL_004b;
		}
	}
	{
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_14 = ___node0;
		return L_14;
	}

IL_004b:
	{
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_15 = ___node0;
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_16 = ___node0;
		NullCheck(L_16);
		ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * L_17 = BlockExpression_get_Variables_mBA633EEB35C122AD8BDC6DA51BD768D839945533(L_16, /*hidden argument*/NULL);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_18 = V_0;
		NullCheck(L_15);
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_19 = VirtFuncInvoker2< BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB *, ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 *, ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* >::Invoke(14 /* System.Linq.Expressions.BlockExpression System.Linq.Expressions.BlockExpression::Rewrite(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.Expression[]) */, L_15, L_17, L_18);
		return L_19;
	}
}
// System.Linq.Expressions.CatchBlock System.Linq.Expressions.Interpreter.QuoteInstruction_ExpressionQuoter::VisitCatchBlock(System.Linq.Expressions.CatchBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * ExpressionQuoter_VisitCatchBlock_m8AAA05FD5B7498B1089179E435A7F8B04670AEAD (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionQuoter_VisitCatchBlock_m8AAA05FD5B7498B1089179E435A7F8B04670AEAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * V_0 = NULL;
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * V_1 = NULL;
	{
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_0 = ___node0;
		NullCheck(L_0);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_1 = CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_2 = __this->get__shadowedVars_2();
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_3 = (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)il2cpp_codegen_object_new(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B(L_3, /*hidden argument*/HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var);
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_4 = L_3;
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_5 = ___node0;
		NullCheck(L_5);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_6 = CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE(L_4, L_6, /*hidden argument*/HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var);
		NullCheck(L_2);
		Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C(L_2, L_4, /*hidden argument*/Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
	}

IL_0025:
	{
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_7 = ___node0;
		NullCheck(L_7);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_8 = CatchBlock_get_Body_m9EE90AA7A3BBD028A1032648E1722BEC8EF5E190_inline(L_7, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_9 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_8);
		V_0 = L_9;
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_10 = ___node0;
		NullCheck(L_10);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_11 = CatchBlock_get_Filter_mC92D5E87F42D09D8FCF9BF0BF5F096359A81665D_inline(L_10, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_12 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_11);
		V_1 = L_12;
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_13 = ___node0;
		NullCheck(L_13);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_14 = CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_15 = __this->get__shadowedVars_2();
		NullCheck(L_15);
		Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769(L_15, /*hidden argument*/Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
	}

IL_0053:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_16 = V_0;
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_17 = ___node0;
		NullCheck(L_17);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_18 = CatchBlock_get_Body_m9EE90AA7A3BBD028A1032648E1722BEC8EF5E190_inline(L_17, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_16) == ((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_18))))
		{
			goto IL_0067;
		}
	}
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_19 = V_1;
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_20 = ___node0;
		NullCheck(L_20);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_21 = CatchBlock_get_Filter_mC92D5E87F42D09D8FCF9BF0BF5F096359A81665D_inline(L_20, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_19) == ((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_21))))
		{
			goto IL_0067;
		}
	}
	{
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_22 = ___node0;
		return L_22;
	}

IL_0067:
	{
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_23 = ___node0;
		NullCheck(L_23);
		Type_t * L_24 = CatchBlock_get_Test_m9F57E603AC71DE8C69057B4B366BEF47823E3247_inline(L_23, /*hidden argument*/NULL);
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_25 = ___node0;
		NullCheck(L_25);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_26 = CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline(L_25, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_27 = V_0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_29 = Expression_MakeCatchBlock_m1CBF3ECC3A08691C0841347214D681F03E42D370(L_24, L_26, L_27, L_28, /*hidden argument*/NULL);
		return L_29;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction_ExpressionQuoter::VisitParameter(System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ExpressionQuoter_VisitParameter_m366F220775FD67A62D50727A0ED333194602BD7B (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionQuoter_VisitParameter_m366F220775FD67A62D50727A0ED333194602BD7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = ___node0;
		RuntimeObject* L_1 = ExpressionQuoter_GetBox_mB02A80E9219C417E14C0DDFB99A2470B67FE640E(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_3 = ___node0;
		return L_3;
	}

IL_000d:
	{
		RuntimeObject* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_5 = Expression_Constant_mEEA1BB10F0EE0D668C36114629468DA1D840601C(L_4, /*hidden argument*/NULL);
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_6 = Expression_Field_mE764DA3894D8BE7A1713A3410EB21774BB84244C(L_5, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_7 = ___node0;
		NullCheck(L_7);
		Type_t * L_8 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_7);
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_9 = Expression_Convert_m494826A3729B238263D95E7D7B0E236DE3B1CDA7(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Runtime.CompilerServices.IStrongBox System.Linq.Expressions.Interpreter.QuoteInstruction_ExpressionQuoter::GetBox(System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExpressionQuoter_GetBox_mB02A80E9219C417E14C0DDFB99A2470B67FE640E (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___variable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionQuoter_GetBox_mB02A80E9219C417E14C0DDFB99A2470B67FE640E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * V_0 = NULL;
	{
		Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * L_0 = __this->get__variables_0();
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_1 = ___variable0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m9F075D45997E73C2F61005C8C5A35D2FCAEB4C1E(L_0, L_1, (LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9F075D45997E73C2F61005C8C5A35D2FCAEB4C1E_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = LocalVariable_get_InClosure_mA3903B46C398E3BE8086ABC39A061D4844FB32B3(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = __this->get__frame_1();
		NullCheck(L_5);
		IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F* L_6 = L_5->get_Closure_8();
		LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_Index_0();
		NullCheck(L_6);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_11 = __this->get__frame_1();
		NullCheck(L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11->get_Data_7();
		LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_Index_0();
		NullCheck(L_12);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IStrongBox_t37B8B513E3C7EF457F23D5089D694BE7F6095F54_il2cpp_TypeInfo_var));
	}

IL_0043:
	{
		return (RuntimeObject*)NULL;
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
// System.Void System.Threading.ReaderWriterLockSlim_TimeoutTracker::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553 (TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___millisecondsTimeout0;
		if ((((int32_t)L_0) >= ((int32_t)(-1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, _stringLiteralCF088CD7CED04705BD5E7559DBB7DD9A14559182, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553_RuntimeMethod_var);
	}

IL_000f:
	{
		int32_t L_2 = ___millisecondsTimeout0;
		__this->set_m_total_0(L_2);
		int32_t L_3 = __this->get_m_total_0();
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = __this->get_m_total_0();
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		__this->set_m_start_1(L_5);
		return;
	}

IL_0033:
	{
		__this->set_m_start_1(0);
		return;
	}
}
IL2CPP_EXTERN_C  void TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553_AdjustorThunk (RuntimeObject * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * _thisAdjusted = reinterpret_cast<TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B *>(__this + _offset);
	TimeoutTracker__ctor_mD01DAC1C1322B0E6DB8D847D6BB02DF0DEC14553(_thisAdjusted, ___millisecondsTimeout0, method);
}
// System.Int32 System.Threading.ReaderWriterLockSlim_TimeoutTracker::get_RemainingMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeoutTracker_get_RemainingMilliseconds_m2DF873714961B9BED784F45364703221E4259F04 (TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_total_0();
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_m_total_0();
		if (L_1)
		{
			goto IL_0018;
		}
	}

IL_0011:
	{
		int32_t L_2 = __this->get_m_total_0();
		return L_2;
	}

IL_0018:
	{
		int32_t L_3 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		int32_t L_4 = __this->get_m_start_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_m_total_0();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0034;
		}
	}

IL_0032:
	{
		return 0;
	}

IL_0034:
	{
		int32_t L_8 = __this->get_m_total_0();
		int32_t L_9 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9));
	}
}
IL2CPP_EXTERN_C  int32_t TimeoutTracker_get_RemainingMilliseconds_m2DF873714961B9BED784F45364703221E4259F04_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * _thisAdjusted = reinterpret_cast<TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B *>(__this + _offset);
	return TimeoutTracker_get_RemainingMilliseconds_m2DF873714961B9BED784F45364703221E4259F04(_thisAdjusted, method);
}
// System.Boolean System.Threading.ReaderWriterLockSlim_TimeoutTracker::get_IsExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeoutTracker_get_IsExpired_mE4ED4EDAA3A57C06198F451E21D347640DB1EA38 (TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = TimeoutTracker_get_RemainingMilliseconds_m2DF873714961B9BED784F45364703221E4259F04((TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B *)__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool TimeoutTracker_get_IsExpired_mE4ED4EDAA3A57C06198F451E21D347640DB1EA38_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B * _thisAdjusted = reinterpret_cast<TimeoutTracker_t30DFBDD66B9D67047C10336C0B262B75C40C3F2B *>(__this + _offset);
	return TimeoutTracker_get_IsExpired_mE4ED4EDAA3A57C06198F451E21D347640DB1EA38(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftByte_Run_mC57B8F624AA8BA764BF0A402BB8A1F825AFCE84B (RightShiftByte_t5F287F9A98BD517088EBEBB5762D9B5547411F02 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RightShiftByte_Run_mC57B8F624AA8BA764BF0A402BB8A1F825AFCE84B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m3D471A0B71F06B515A5AC6CD955F00C8240428ED(L_7, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((*(uint8_t*)((uint8_t*)UnBox(L_8, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))))>>(int32_t)((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)31)))))))), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftByte__ctor_mA1145E54B69D479AA0DA5B5BA383C2EA66765031 (RightShiftByte_t5F287F9A98BD517088EBEBB5762D9B5547411F02 * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftInt16_Run_mBAE3FD81D50E054555D4841BA212D954F4264D06 (RightShiftInt16_t2CE116D1706B0B2E1BBC6F132D090C0B344DA147 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RightShiftInt16_Run_mBAE3FD81D50E054555D4841BA212D954F4264D06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_mC1E4D132AA581DA23B173C5E8416F09D703E9A60(L_7, (((int16_t)((int16_t)((int32_t)((int32_t)((*(int16_t*)((int16_t*)UnBox(L_8, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))>>(int32_t)((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)31)))))))), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftInt16__ctor_mC01A9D049AAFA63D2EB105597B7F953F2860DDB4 (RightShiftInt16_t2CE116D1706B0B2E1BBC6F132D090C0B344DA147 * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftInt32_Run_m3056C2C19FA33883607EA228B9748B4EDFF7FDFE (RightShiftInt32_t28B8326998E527389A4C0B7F66CB0CDC2997AECD * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RightShiftInt32_Run_m3056C2C19FA33883607EA228B9748B4EDFF7FDFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0033;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m8993875D202411807B024C272CA71C3852BE6C71(L_7, ((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_8, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))>>(int32_t)((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)31))))), /*hidden argument*/NULL);
	}

IL_0033:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftInt32__ctor_mC6D29CDB860F0A82FFC7AE6247E4C7C8B4011588 (RightShiftInt32_t28B8326998E527389A4C0B7F66CB0CDC2997AECD * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftInt64_Run_mABD6A9FEE3D65D2F5EFD38B9099D62D58CDB003E (RightShiftInt64_tD5FE689CDEC4FB15BE4001CE537725EA23C90692 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RightShiftInt64_Run_mABD6A9FEE3D65D2F5EFD38B9099D62D58CDB003E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0038;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		int64_t L_10 = ((int64_t)((int64_t)((*(int64_t*)((int64_t*)UnBox(L_8, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))>>(int32_t)((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)63)))));
		RuntimeObject * L_11 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_7, L_11, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftInt64__ctor_m2F29A4492259F8CE30C32ECC9C432D42CE55EE4A (RightShiftInt64_tD5FE689CDEC4FB15BE4001CE537725EA23C90692 * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftSByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftSByte_Run_m5D27D574AD4717809853648260398B706081BD29 (RightShiftSByte_t3BAA90C2005D7DBF702594A81C6FD7DB336FAE60 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RightShiftSByte_Run_m5D27D574AD4717809853648260398B706081BD29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m99C008FE2B0E5842A182DBDFE7144A40960EEE8B(L_7, (((int8_t)((int8_t)((int32_t)((int32_t)((*(int8_t*)((int8_t*)UnBox(L_8, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))))>>(int32_t)((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)31)))))))), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftSByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftSByte__ctor_m2A768467F2EC7E5F7709B804832F97B6DB818E43 (RightShiftSByte_t3BAA90C2005D7DBF702594A81C6FD7DB336FAE60 * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftUInt16_Run_m9B3B239EA6F4DE9B372C4E2BC1CEDC09E9B999A2 (RightShiftUInt16_t4107CD5715606EAAF84FFAFA9B8DD0261B14CBF6 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RightShiftUInt16_Run_m9B3B239EA6F4DE9B372C4E2BC1CEDC09E9B999A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m1E7E0894F3C4290DB002A0FFAE6D8EFEFC881797(L_7, (uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_8, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))>>(int32_t)((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)31)))))))), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftUInt16__ctor_m0A75F929605819493A82EBF26E4EBB561030C287 (RightShiftUInt16_t4107CD5715606EAAF84FFAFA9B8DD0261B14CBF6 * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftUInt32_Run_m2503B8DE9FBEF96812810B62FE6A14E5CC8818F5 (RightShiftUInt32_tBE3AD1CB4803EE031AB2D8FBFAC118DA0C36C077 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RightShiftUInt32_Run_m2503B8DE9FBEF96812810B62FE6A14E5CC8818F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0038;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		uint32_t L_10 = ((uint32_t)((int32_t)((uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_8, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var))))>>((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)31))))));
		RuntimeObject * L_11 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_7, L_11, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftUInt32__ctor_mBA72BBE75A60A1B05E724E80CDFFDB1F937022B0 (RightShiftUInt32_tBE3AD1CB4803EE031AB2D8FBFAC118DA0C36C077 * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftUInt64_Run_m42180FB75ACB54928764DDBC502CE73454347F9A (RightShiftUInt64_t11D41A57381AEE78C426DE33130B91A7D55876BB * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RightShiftUInt64_Run_m42180FB75ACB54928764DDBC502CE73454347F9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0038;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		uint64_t L_10 = ((uint64_t)((int64_t)((uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_8, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))))>>((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)63))))));
		RuntimeObject * L_11 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_7, L_11, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction_RightShiftUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftUInt64__ctor_mD9E803AE24A5C405737D7282D4AA2B1C74B01BD6 (RightShiftUInt64_t11D41A57381AEE78C426DE33130B91A7D55876BB * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction_SubDouble::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubDouble_Run_m20F5CD5690D93EAAA9D79A95C307C8BA398EEB9C (SubDouble_tD043A690C939E826740F3980649781CF246DCDF2 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubDouble_Run_m20F5CD5690D93EAAA9D79A95C307C8BA398EEB9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		double L_18 = ((double)il2cpp_codegen_subtract((double)((*(double*)((double*)UnBox(L_16, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), (double)((*(double*)((double*)UnBox(L_17, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction_SubDouble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubDouble__ctor_m1FF8A0A7D9C279C83567CBFC70AD5680772C83C9 (SubDouble_tD043A690C939E826740F3980649781CF246DCDF2 * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction_SubInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubInt16_Run_m3D80EE86FDD25CA5F5C609DC1E573E76142E69E2 (SubInt16_t54BA31141EB907D849DEA9B01CF7BC6D50D6990A * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubInt16_Run_m3D80EE86FDD25CA5F5C609DC1E573E76142E69E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		int16_t L_18 = (((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), (int32_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))))))));
		RuntimeObject * L_19 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction_SubInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubInt16__ctor_mDA0DA993160E54FDF83FBCC1D6BC89C8A53BFA09 (SubInt16_t54BA31141EB907D849DEA9B01CF7BC6D50D6990A * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction_SubInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubInt32_Run_m7626275DFE049CC0D8A4859F2D06313D3C1E5C45 (SubInt32_t45C297528948D24B11B80E5D5F9160424C4FB6A5 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubInt32_Run_m7626275DFE049CC0D8A4859F2D06313D3C1E5C45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		RuntimeObject * L_18 = ScriptingRuntimeHelpers_Int32ToObject_m53DFEFE8224BE36C871A324BC94308094F7E9281(((int32_t)il2cpp_codegen_subtract((int32_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), (int32_t)((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		G_B4_0 = L_18;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_19 = ___frame0;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		L_19->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction_SubInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubInt32__ctor_m30ABDD2D4917653AE145846F0A425820FB519FE3 (SubInt32_t45C297528948D24B11B80E5D5F9160424C4FB6A5 * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction_SubInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubInt64_Run_m97AA42AE199F682E15A5F4F75472BF17B99329CE (SubInt64_t2A292A0D8C604FDE28954B60EF80E36285F47511 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubInt64_Run_m97AA42AE199F682E15A5F4F75472BF17B99329CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		int64_t L_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)((*(int64_t*)((int64_t*)UnBox(L_16, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_17, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction_SubInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubInt64__ctor_mBD2CD6959E24DC4B061A5030140FE26CB5DE1DA5 (SubInt64_t2A292A0D8C604FDE28954B60EF80E36285F47511 * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction_SubSingle::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubSingle_Run_mDBFC5925448092099F1DC058B90C1FED9F0178D4 (SubSingle_t2561FE69D9CDA0F6C0A1A8958CF2417D34541B26 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubSingle_Run_mDBFC5925448092099F1DC058B90C1FED9F0178D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		float L_18 = ((float)il2cpp_codegen_subtract((float)((*(float*)((float*)UnBox(L_16, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))), (float)((*(float*)((float*)UnBox(L_17, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction_SubSingle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubSingle__ctor_m8A1B4CC51ECB70E2C01951B1B71EF74FA4B7AFA8 (SubSingle_t2561FE69D9CDA0F6C0A1A8958CF2417D34541B26 * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction_SubUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubUInt16_Run_m528B2AEF45C5C2638CD643BBD88A8AE1AE726A91 (SubUInt16_tCBA7FBA9D5D99CB82C5E63FE3218C6F80E13EFBD * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubUInt16_Run_m528B2AEF45C5C2638CD643BBD88A8AE1AE726A91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		uint16_t L_18 = ((uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), (int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))))))));
		RuntimeObject * L_19 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction_SubUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubUInt16__ctor_m8E57C7B5BDC07D06EE62421DBA4B0BC00467A68C (SubUInt16_tCBA7FBA9D5D99CB82C5E63FE3218C6F80E13EFBD * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction_SubUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubUInt32_Run_m71D9464F4299B02FCD93A2372E209B3781D61A91 (SubUInt32_t4DFA170330F70C0F8F9F211169DC93235FF64BAF * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubUInt32_Run_m71D9464F4299B02FCD93A2372E209B3781D61A91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		uint32_t L_18 = ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_16, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))), (int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction_SubUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubUInt32__ctor_m794962DDFF9080F814854DE626A3E82571CEA4EC (SubUInt32_t4DFA170330F70C0F8F9F211169DC93235FF64BAF * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction_SubUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubUInt64_Run_m6454BF59E6345A1DB5B46DAB5F76B0977C07401D (SubUInt64_t986CC4C6FC8D2F5D1601D820D690EAE039CB21CC * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubUInt64_Run_m6454BF59E6345A1DB5B46DAB5F76B0977C07401D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		uint64_t L_18 = ((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_16, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), (int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_17, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction_SubUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubUInt64__ctor_mE839E2649EA048FB887F2AB50FCCB09B14ED102D (SubUInt64_t986CC4C6FC8D2F5D1601D820D690EAE039CB21CC * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubOvfInt16_Run_m8BE084817E985B962CA87DE2D70F5E614D0E23E7 (SubOvfInt16_tAEAF2F6A8C023CE3CBB545F3CF87B52081F7D1F0 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubOvfInt16_Run_m8BE084817E985B962CA87DE2D70F5E614D0E23E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if (((int64_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) - (int64_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) < (int64_t)kIl2CppInt32Min) || ((int64_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) - (int64_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfInt16_Run_m8BE084817E985B962CA87DE2D70F5E614D0E23E7_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_subtract((int32_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), (int32_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))))) > 32767LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfInt16_Run_m8BE084817E985B962CA87DE2D70F5E614D0E23E7_RuntimeMethod_var);
		int16_t L_18 = (((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), (int32_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))))))));
		RuntimeObject * L_19 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfInt16__ctor_m637C9BFFC0279DC553872CD809F9E32D3B8E3667 (SubOvfInt16_tAEAF2F6A8C023CE3CBB545F3CF87B52081F7D1F0 * __this, const RuntimeMethod* method)
{
	{
		SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubOvfInt32_Run_m4784CFCCA1A23F78D01E19D1FEE7D90A8571D107 (SubOvfInt32_tB06ACE45D8557990B724B37C14C83ABB0EBEB019 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubOvfInt32_Run_m4784CFCCA1A23F78D01E19D1FEE7D90A8571D107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if (((int64_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) - (int64_t)((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) < (int64_t)kIl2CppInt32Min) || ((int64_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) - (int64_t)((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfInt32_Run_m4784CFCCA1A23F78D01E19D1FEE7D90A8571D107_RuntimeMethod_var);
		RuntimeObject * L_18 = ScriptingRuntimeHelpers_Int32ToObject_m53DFEFE8224BE36C871A324BC94308094F7E9281(((int32_t)il2cpp_codegen_subtract((int32_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), (int32_t)((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		G_B4_0 = L_18;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_19 = ___frame0;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		L_19->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfInt32__ctor_mAD96CF3D75B4FA888932489E7AC4CBC365ACA655 (SubOvfInt32_tB06ACE45D8557990B724B37C14C83ABB0EBEB019 * __this, const RuntimeMethod* method)
{
	{
		SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubOvfInt64_Run_mBC5428D91F0F20DEA87DB4A6A1958D6A7F528B7F (SubOvfInt64_t9BC0A0C8BFBCC9B1CBF3A7468DE27A8F5BA13D8B * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubOvfInt64_Run_mBC5428D91F0F20DEA87DB4A6A1958D6A7F528B7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if (il2cpp_codegen_check_sub_overflow((int64_t)((*(int64_t*)((int64_t*)UnBox(L_16, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_17, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfInt64_Run_mBC5428D91F0F20DEA87DB4A6A1958D6A7F528B7F_RuntimeMethod_var);
		int64_t L_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)((*(int64_t*)((int64_t*)UnBox(L_16, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_17, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfInt64__ctor_m59499A1EC54ED4F58D4CF59066C0BB93A4C35528 (SubOvfInt64_t9BC0A0C8BFBCC9B1CBF3A7468DE27A8F5BA13D8B * __this, const RuntimeMethod* method)
{
	{
		SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubOvfUInt16_Run_m1FC5C9CB4C2C57A567577E8D7F5EDC963A746EE5 (SubOvfUInt16_t44B387BAA3E156B5D3A023F247C9FC208905B53F * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubOvfUInt16_Run_m1FC5C9CB4C2C57A567577E8D7F5EDC963A746EE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if (((int64_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))) - (int64_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))) < (int64_t)kIl2CppInt32Min) || ((int64_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))) - (int64_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfUInt16_Run_m1FC5C9CB4C2C57A567577E8D7F5EDC963A746EE5_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_subtract((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), (int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))))) > 65535LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfUInt16_Run_m1FC5C9CB4C2C57A567577E8D7F5EDC963A746EE5_RuntimeMethod_var);
		uint16_t L_18 = (((uint16_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), (int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))))))));
		RuntimeObject * L_19 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfUInt16__ctor_m20708D9334E4ED2700E9AAC1AB7BFABD29891E9C (SubOvfUInt16_t44B387BAA3E156B5D3A023F247C9FC208905B53F * __this, const RuntimeMethod* method)
{
	{
		SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubOvfUInt32_Run_mAB1BE31073F2BFCE0D0E104D7F555E54F1C08DF5 (SubOvfUInt32_tB163618E06EE74B7F7F2D6B80F217B712A5DF6A0 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubOvfUInt32_Run_mAB1BE31073F2BFCE0D0E104D7F555E54F1C08DF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if ((uint64_t)(uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_16, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))) - (uint64_t)(uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))) > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfUInt32_Run_mAB1BE31073F2BFCE0D0E104D7F555E54F1C08DF5_RuntimeMethod_var);
		uint32_t L_18 = ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_16, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))), (int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfUInt32__ctor_mDCE122ACA10DB424E027B8626C9B56CBE635C7C3 (SubOvfUInt32_tB163618E06EE74B7F7F2D6B80F217B712A5DF6A0 * __this, const RuntimeMethod* method)
{
	{
		SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubOvfUInt64_Run_m62A723627B1B0EBA117EE6EC7C7FEA1A965DA53A (SubOvfUInt64_t321A38C66A5A2020B95D7E7042AB287565C4B18E * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubOvfUInt64_Run_m62A723627B1B0EBA117EE6EC7C7FEA1A965DA53A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if ((uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_16, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))) < (uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_17, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfUInt64_Run_m62A723627B1B0EBA117EE6EC7C7FEA1A965DA53A_RuntimeMethod_var);
		uint64_t L_18 = ((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_16, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), (int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_17, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction_SubOvfUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfUInt64__ctor_m985D1E1BDB5A6CAE2B459DBE2FB7F4A66480B7B5 (SubOvfUInt64_t321A38C66A5A2020B95D7E7042AB287565C4B18E * __this, const RuntimeMethod* method)
{
	{
		SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: System.Dynamic.BindingRestrictions/TestBuilder/AndNode
IL2CPP_EXTERN_C void AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshal_pinvoke(const AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84& unmarshaled, AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Node_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'AndNode': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_1Exception, NULL);
}
IL2CPP_EXTERN_C void AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshal_pinvoke_back(const AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshaled_pinvoke& marshaled, AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84& unmarshaled)
{
	Exception_t* ___Node_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'AndNode': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Dynamic.BindingRestrictions/TestBuilder/AndNode
IL2CPP_EXTERN_C void AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshal_pinvoke_cleanup(AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Dynamic.BindingRestrictions/TestBuilder/AndNode
IL2CPP_EXTERN_C void AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshal_com(const AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84& unmarshaled, AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshaled_com& marshaled)
{
	Exception_t* ___Node_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'AndNode': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_1Exception, NULL);
}
IL2CPP_EXTERN_C void AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshal_com_back(const AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshaled_com& marshaled, AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84& unmarshaled)
{
	Exception_t* ___Node_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'AndNode': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Dynamic.BindingRestrictions/TestBuilder/AndNode
IL2CPP_EXTERN_C void AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshal_com_cleanup(AndNode_tBC4D2CE3DAC80DED8A115F6007A0AB7DA59D4A84_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Expressions.Interpreter.CastInstruction_CastInstructionNoT_Ref::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ref__ctor_m550731B94572A3B459EB3FB79FE9CBB7DDD7CB61 (Ref_t168CC06E3E836CBD2DA362F99B022F5D79504E10 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___t0;
		CastInstructionNoT__ctor_m340CB277F4601E785560A9E43FF8C55B74B74115(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.Interpreter.CastInstruction_CastInstructionNoT_Ref::ConvertNull(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ref_ConvertNull_m7D21AC470187CBFE42C40B8F58CCBBBD4EA20E71 (Ref_t168CC06E3E836CBD2DA362F99B022F5D79504E10 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_0, NULL, /*hidden argument*/NULL);
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
// System.Void System.Linq.Expressions.Interpreter.CastInstruction_CastInstructionNoT_Value::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Value__ctor_m2884D85DAE284D0EF6B356A394D09128FA12CE03 (Value_t291D50D67C4EC0983FA0B027505922ED0110765D * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___t0;
		CastInstructionNoT__ctor_m340CB277F4601E785560A9E43FF8C55B74B74115(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.Interpreter.CastInstruction_CastInstructionNoT_Value::ConvertNull(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Value_ConvertNull_mA3E3A08DD5953CC5A4645CFAD29F2EEB2F2BC4F4 (Value_t291D50D67C4EC0983FA0B027505922ED0110765D * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Value_ConvertNull_mA3E3A08DD5953CC5A4645CFAD29F2EEB2F2BC4F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_0 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m669954F23A336EC873149F0ED0D291F2B509017A(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Value_ConvertNull_mA3E3A08DD5953CC5A4645CFAD29F2EEB2F2BC4F4_RuntimeMethod_var);
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
// System.Void System.Dynamic.ExpandoObject_KeyCollection_<GetEnumerator>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__15__ctor_m55CF005087F4FBEDAD44E2344153628D09A8233F (U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void System.Dynamic.ExpandoObject_KeyCollection_<GetEnumerator>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__15_System_IDisposable_Dispose_mADF7018D4B5CD43664CFEC383FF20F4B1AE207B4 (U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean System.Dynamic.ExpandoObject_KeyCollection_<GetEnumerator>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__15_MoveNext_m95A8B95F2D7303E31BFEE64922DDC3F0206F7095 (U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__15_MoveNext_m95A8B95F2D7303E31BFEE64922DDC3F0206F7095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0083;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		__this->set_U3CiU3E5__1_3(0);
		KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 * L_4 = V_1;
		NullCheck(L_4);
		ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * L_5 = L_4->get__expandoData_3();
		NullCheck(L_5);
		ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * L_6 = L_5->get_Class_1();
		NullCheck(L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ExpandoClass_get_Keys_m2DDCC513EA663E6AB643E0C70E48182AB6BE9BEC_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		__this->set_U3CnU3E5__2_4((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))));
		goto IL_009a;
	}

IL_003f:
	{
		KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 * L_8 = V_1;
		NullCheck(L_8);
		KeyCollection_CheckVersion_mDDA02950D0BA22DD43F0EAEC02F272E76AC85133(L_8, /*hidden argument*/NULL);
		KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 * L_9 = V_1;
		NullCheck(L_9);
		ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * L_10 = L_9->get__expandoData_3();
		int32_t L_11 = __this->get_U3CiU3E5__1_3();
		NullCheck(L_10);
		RuntimeObject * L_12 = ExpandoData_get_Item_mFD0F9424CDDB9EDDCF181AD3CBF1593D027239A1(L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_il2cpp_TypeInfo_var);
		RuntimeObject * L_13 = ((ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields*)il2cpp_codegen_static_fields_for(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_il2cpp_TypeInfo_var))->get_Uninitialized_8();
		if ((((RuntimeObject*)(RuntimeObject *)L_12) == ((RuntimeObject*)(RuntimeObject *)L_13)))
		{
			goto IL_008a;
		}
	}
	{
		KeyCollection_tD61CF836DE4821C14F19974E65A19C96F3121127 * L_14 = V_1;
		NullCheck(L_14);
		ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * L_15 = L_14->get__expandoData_3();
		NullCheck(L_15);
		ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * L_16 = L_15->get_Class_1();
		NullCheck(L_16);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = ExpandoClass_get_Keys_m2DDCC513EA663E6AB643E0C70E48182AB6BE9BEC_inline(L_16, /*hidden argument*/NULL);
		int32_t L_18 = __this->get_U3CiU3E5__1_3();
		NullCheck(L_17);
		int32_t L_19 = L_18;
		String_t* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		__this->set_U3CU3E2__current_1(L_20);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0083:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_008a:
	{
		int32_t L_21 = __this->get_U3CiU3E5__1_3();
		V_2 = L_21;
		int32_t L_22 = V_2;
		__this->set_U3CiU3E5__1_3(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
	}

IL_009a:
	{
		int32_t L_23 = __this->get_U3CiU3E5__1_3();
		int32_t L_24 = __this->get_U3CnU3E5__2_4();
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}
}
// System.String System.Dynamic.ExpandoObject_KeyCollection_<GetEnumerator>d__15::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CGetEnumeratorU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_mFCE5A79DE96CB2ACF55856C6791EE2459511E65F (U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void System.Dynamic.ExpandoObject_KeyCollection_<GetEnumerator>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_m6755CA50231CABD3DAFE930F00E78252C9595BF2 (U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_m6755CA50231CABD3DAFE930F00E78252C9595BF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_m6755CA50231CABD3DAFE930F00E78252C9595BF2_RuntimeMethod_var);
	}
}
// System.Object System.Dynamic.ExpandoObject_KeyCollection_<GetEnumerator>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_get_Current_m95F9691C02DF85DBCB40D908012C0DBDA9B95BC8 (U3CGetEnumeratorU3Ed__15_t636C6D6822935840E58F692F91B39332E967EF1B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDynamicMemberNamesU3Ed__6__ctor_m761364DD5C69E3E134AAE84F4AE8AEC24FABE0A3 (U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDynamicMemberNamesU3Ed__6_System_IDisposable_Dispose_m2FF036807D28EEA9C705F8AC85A9595A582711EC (U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetDynamicMemberNamesU3Ed__6_MoveNext_m6242D4CCB88D04BC92D761BCE8D1FC0CDA216474 (U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDynamicMemberNamesU3Ed__6_MoveNext_m6242D4CCB88D04BC92D761BCE8D1FC0CDA216474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0082;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47 * L_4 = V_1;
		NullCheck(L_4);
		ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315 * L_5 = MetaExpando_get_Value_m280DAD79B64E61E2B13E8CE09F5A1F7D15E7EB3C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * L_6 = L_5->get__data_6();
		__this->set_U3CexpandoDataU3E5__1_4(L_6);
		ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * L_7 = __this->get_U3CexpandoDataU3E5__1_4();
		NullCheck(L_7);
		ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * L_8 = L_7->get_Class_1();
		__this->set_U3CklassU3E5__2_5(L_8);
		__this->set_U3CiU3E5__3_6(0);
		goto IL_0099;
	}

IL_0049:
	{
		ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * L_9 = __this->get_U3CexpandoDataU3E5__1_4();
		int32_t L_10 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_9);
		RuntimeObject * L_11 = ExpandoData_get_Item_mFD0F9424CDDB9EDDCF181AD3CBF1593D027239A1(L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_il2cpp_TypeInfo_var);
		RuntimeObject * L_12 = ((ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields*)il2cpp_codegen_static_fields_for(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_il2cpp_TypeInfo_var))->get_Uninitialized_8();
		if ((((RuntimeObject*)(RuntimeObject *)L_11) == ((RuntimeObject*)(RuntimeObject *)L_12)))
		{
			goto IL_0089;
		}
	}
	{
		ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * L_13 = __this->get_U3CklassU3E5__2_5();
		NullCheck(L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = ExpandoClass_get_Keys_m2DDCC513EA663E6AB643E0C70E48182AB6BE9BEC_inline(L_13, /*hidden argument*/NULL);
		int32_t L_15 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0082:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0089:
	{
		int32_t L_18 = __this->get_U3CiU3E5__3_6();
		V_2 = L_18;
		int32_t L_19 = V_2;
		__this->set_U3CiU3E5__3_6(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
	}

IL_0099:
	{
		int32_t L_20 = __this->get_U3CiU3E5__3_6();
		ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * L_21 = __this->get_U3CklassU3E5__2_5();
		NullCheck(L_21);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = ExpandoClass_get_Keys_m2DDCC513EA663E6AB643E0C70E48182AB6BE9BEC_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}
}
// System.String System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CGetDynamicMemberNamesU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_m79863FEDD753A41E7E4847C878B1EE5046468BBC (U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDynamicMemberNamesU3Ed__6_System_Collections_IEnumerator_Reset_mD3BA146EE253D7A429E19897BDA26F1A497E5916 (U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDynamicMemberNamesU3Ed__6_System_Collections_IEnumerator_Reset_mD3BA146EE253D7A429E19897BDA26F1A497E5916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetDynamicMemberNamesU3Ed__6_System_Collections_IEnumerator_Reset_mD3BA146EE253D7A429E19897BDA26F1A497E5916_RuntimeMethod_var);
	}
}
// System.Object System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetDynamicMemberNamesU3Ed__6_System_Collections_IEnumerator_get_Current_m3ED071ADCDCCFAD3BB1FC612B316BF07D2C6FC15 (U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDynamicMemberNamesU3Ed__6_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mF05E0A905C664AD577DDD12904E2A7450F47FA3E (U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDynamicMemberNamesU3Ed__6_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mF05E0A905C664AD577DDD12904E2A7450F47FA3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * L_3 = (U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 *)il2cpp_codegen_object_new(U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8_il2cpp_TypeInfo_var);
		U3CGetDynamicMemberNamesU3Ed__6__ctor_m761364DD5C69E3E134AAE84F4AE8AEC24FABE0A3(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * L_4 = V_0;
		MetaExpando_t7563F5DB72E7ACD9C14C68B52A8EDE3E332B9E47 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator System.Dynamic.ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDynamicMemberNamesU3Ed__6_System_Collections_IEnumerable_GetEnumerator_mE816CEADEAD19EAA9D61071CD332193B56D7C63D (U3CGetDynamicMemberNamesU3Ed__6_t20587BAE489B15CDE50733EE9B5B5B150ECE29F8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CGetDynamicMemberNamesU3Ed__6_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mF05E0A905C664AD577DDD12904E2A7450F47FA3E(__this, /*hidden argument*/NULL);
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
// System.Void System.Dynamic.ExpandoObject_ValueCollection_<GetEnumerator>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__15__ctor_m977CF53A2AC834BE76BD41D5346DEDE84C9D7697 (U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void System.Dynamic.ExpandoObject_ValueCollection_<GetEnumerator>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__15_System_IDisposable_Dispose_mC0A74119F6BD2084FBD8F5953EE973336833F3FC (U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean System.Dynamic.ExpandoObject_ValueCollection_<GetEnumerator>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__15_MoveNext_m5BFB3BB77674B95AEF33589D04296BC37A45E13D (U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__15_MoveNext_m5BFB3BB77674B95AEF33589D04296BC37A45E13D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0068;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234 * L_4 = V_1;
		NullCheck(L_4);
		ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315 * L_5 = L_4->get__expando_0();
		NullCheck(L_5);
		ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * L_6 = L_5->get__data_6();
		__this->set_U3CdataU3E5__1_3(L_6);
		__this->set_U3CiU3E5__2_4(0);
		goto IL_007f;
	}

IL_0038:
	{
		ValueCollection_tCBD85527B133533997DC0E42EB83D37BCD483234 * L_7 = V_1;
		NullCheck(L_7);
		ValueCollection_CheckVersion_m17699ED33F4C4ED3FF77E52E4F2C27BD94F6BD92(L_7, /*hidden argument*/NULL);
		ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * L_8 = __this->get_U3CdataU3E5__1_3();
		int32_t L_9 = __this->get_U3CiU3E5__2_4();
		NullCheck(L_8);
		RuntimeObject * L_10 = ExpandoData_get_Item_mFD0F9424CDDB9EDDCF181AD3CBF1593D027239A1(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		RuntimeObject * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_il2cpp_TypeInfo_var);
		RuntimeObject * L_12 = ((ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_StaticFields*)il2cpp_codegen_static_fields_for(ExpandoObject_t12886EDF3CA8DD10C970226F277CD291FC912315_il2cpp_TypeInfo_var))->get_Uninitialized_8();
		if ((((RuntimeObject*)(RuntimeObject *)L_11) == ((RuntimeObject*)(RuntimeObject *)L_12)))
		{
			goto IL_006f;
		}
	}
	{
		RuntimeObject * L_13 = V_2;
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0068:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_006f:
	{
		int32_t L_14 = __this->get_U3CiU3E5__2_4();
		V_3 = L_14;
		int32_t L_15 = V_3;
		__this->set_U3CiU3E5__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
	}

IL_007f:
	{
		int32_t L_16 = __this->get_U3CiU3E5__2_4();
		ExpandoData_t676C12D0D3BA87574240F2ECBC36B790F3CF6EE7 * L_17 = __this->get_U3CdataU3E5__1_3();
		NullCheck(L_17);
		ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * L_18 = L_17->get_Class_1();
		NullCheck(L_18);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = ExpandoClass_get_Keys_m2DDCC513EA663E6AB643E0C70E48182AB6BE9BEC_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}
}
// System.Object System.Dynamic.ExpandoObject_ValueCollection_<GetEnumerator>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC268C670A37619ADC6EC637937E96545ACB487CE (U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void System.Dynamic.ExpandoObject_ValueCollection_<GetEnumerator>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_m9FD23DF9D9AF4FF1906DD57F9EACDEEBBE0C6AB1 (U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_m9FD23DF9D9AF4FF1906DD57F9EACDEEBBE0C6AB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_Reset_m9FD23DF9D9AF4FF1906DD57F9EACDEEBBE0C6AB1_RuntimeMethod_var);
	}
}
// System.Object System.Dynamic.ExpandoObject_ValueCollection_<GetEnumerator>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__15_System_Collections_IEnumerator_get_Current_m5E1C5666EDEE80D3F7388C0B96080DE949D5F47F (U3CGetEnumeratorU3Ed__15_t1664E7B41DCF0520B808013038503CCA11C46F98 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView
IL2CPP_EXTERN_C void InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshal_pinvoke(const InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD& unmarshaled, InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshaled_pinvoke& marshaled)
{
	Exception_t* ____instruction_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_instruction' of type 'InstructionView': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____instruction_4Exception, NULL);
}
IL2CPP_EXTERN_C void InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshal_pinvoke_back(const InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshaled_pinvoke& marshaled, InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD& unmarshaled)
{
	Exception_t* ____instruction_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_instruction' of type 'InstructionView': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____instruction_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView
IL2CPP_EXTERN_C void InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshal_pinvoke_cleanup(InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView
IL2CPP_EXTERN_C void InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshal_com(const InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD& unmarshaled, InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshaled_com& marshaled)
{
	Exception_t* ____instruction_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_instruction' of type 'InstructionView': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____instruction_4Exception, NULL);
}
IL2CPP_EXTERN_C void InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshal_com_back(const InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshaled_com& marshaled, InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD& unmarshaled)
{
	Exception_t* ____instruction_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_instruction' of type 'InstructionView': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____instruction_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView
IL2CPP_EXTERN_C void InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshal_com_cleanup(InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD_marshaled_com& marshaled)
{
}
// System.String System.Linq.Expressions.Interpreter.InstructionList_DebugView_InstructionView::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstructionView_GetValue_m492D36D7E84197BE0D6B72B4A817C7FCABA9798D (InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InstructionView_GetValue_m492D36D7E84197BE0D6B72B4A817C7FCABA9798D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD * _thisAdjusted = reinterpret_cast<InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD *>(__this + _offset);
	return InstructionView_GetValue_m492D36D7E84197BE0D6B72B4A817C7FCABA9798D_inline(_thisAdjusted, method);
}
// System.Void System.Linq.Expressions.Interpreter.InstructionList_DebugView_InstructionView::.ctor(System.Linq.Expressions.Interpreter.Instruction,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionView__ctor_mF6423A25DA30B2181436EB22FDF802B79BA72FB0 (InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD * __this, Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___instruction0, String_t* ___name1, int32_t ___index2, int32_t ___stackDepth3, int32_t ___continuationsDepth4, const RuntimeMethod* method)
{
	{
		Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * L_0 = ___instruction0;
		__this->set__instruction_4(L_0);
		String_t* L_1 = ___name1;
		__this->set__name_3(L_1);
		int32_t L_2 = ___index2;
		__this->set__index_0(L_2);
		int32_t L_3 = ___stackDepth3;
		__this->set__stackDepth_1(L_3);
		int32_t L_4 = ___continuationsDepth4;
		__this->set__continuationsDepth_2(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void InstructionView__ctor_mF6423A25DA30B2181436EB22FDF802B79BA72FB0_AdjustorThunk (RuntimeObject * __this, Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___instruction0, String_t* ___name1, int32_t ___index2, int32_t ___stackDepth3, int32_t ___continuationsDepth4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD * _thisAdjusted = reinterpret_cast<InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD *>(__this + _offset);
	InstructionView__ctor_mF6423A25DA30B2181436EB22FDF802B79BA72FB0(_thisAdjusted, ___instruction0, ___name1, ___index2, ___stackDepth3, ___continuationsDepth4, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method)
{
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = __this->get_U3CVariableU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * CatchBlock_get_Body_m9EE90AA7A3BBD028A1032648E1722BEC8EF5E190_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get_U3CBodyU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * CatchBlock_get_Filter_mC92D5E87F42D09D8FCF9BF0BF5F096359A81665D_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get_U3CFilterU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * CatchBlock_get_Test_m9F57E603AC71DE8C69057B4B366BEF47823E3247_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CTestU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ExpandoClass_get_Keys_m2DDCC513EA663E6AB643E0C70E48182AB6BE9BEC_inline (ExpandoClass_t75F880AA893C9E1A55EC551C7CC2FF037425047D * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get__keys_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InstructionView_GetValue_m492D36D7E84197BE0D6B72B4A817C7FCABA9798D_inline (InstructionView_tDFAD12AD4DF45E2C42F932657312888680A8FEBD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_3();
		return L_0;
	}
}
