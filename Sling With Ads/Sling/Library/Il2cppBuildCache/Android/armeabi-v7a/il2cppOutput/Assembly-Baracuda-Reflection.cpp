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

// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125;
// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1;
// System.Func`2<System.Type[],System.Type>
struct Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t0DF027D1C7415CBB03F663A5D5ACE52D29226059;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_tC1469845CEBD36D92E7FE77DA40BA86D0F5DD295;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t7371CA721C62572380049BFDF1E23202E4E35496;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t7893F3E646CA021CE48865708B04C4CDA68D7388;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_tB4F4A6EFD4950033CCAA8CCFC21AA9D447EC68ED;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// Baracuda.Pooling.Interface.IObjectPool`1<System.Text.StringBuilder>
struct IObjectPool_1_t7AA614E1B85A195E42DB2FB52EDFDF7AAE61A046;
// System.Collections.Generic.IReadOnlyList`1<System.String>
struct IReadOnlyList_1_t8A22534532B8BFCBF574EE57E96049616329FF80;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Reflection.MemberInfo>
struct KeyCollection_t97F2177324F7BC40BBA93A3380277CD7B8061C6A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct KeyCollection_tBAB43AE8797408A3A15FEF791CC563CDA48AE405;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.String>
struct KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646;
// System.Collections.Generic.List`1<System.Reflection.Assembly>
struct List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F;
// System.Collections.Generic.List`1<System.Reflection.FieldInfo>
struct List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Reflection.PropertyInfo>
struct List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Reflection.MemberInfo>
struct ValueCollection_t249A253C6896F76AA59A4B0039E3834DD205F9C1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct ValueCollection_tDD2E0C132B29951F3A40C22A99538A8DA70B4AA5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.String>
struct ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Reflection.MemberInfo>[]
struct EntryU5BU5D_tCBBC317F7902F8BA4FF0462B4FB5E432C5FD67FE;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>[]
struct EntryU5BU5D_tAB10C4B656D9F9410CE2F0A070CC09D560E73F45;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.String>[]
struct EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A;
// System.Collections.Generic.HashSet`1/Slot<System.Type>[]
struct SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C;
// System.Reflection.AssemblyName
struct AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Baracuda.Reflection.DisableAssemblyReflectionAttribute
struct DisableAssemblyReflectionAttribute_tDC6B2590ED0210DC437F5FF57515361FFC7D9CBE;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_tC8BCE1D3E22F82F78095824C7EB2F62A6DAD2492;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.ResolveEventHandler
struct ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_tCA4C0AB8B98C6C03134BC8AB17DD4C76D8091FDF;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F;
// Baracuda.Reflection.ReflectionExtensions/<>c
struct U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentCollectionPool_2_t0E86E92718DFE6785B59F3FFFBCF799EB964BD60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentCollectionPool_2_t1BEB7C1227083AD7B40CB0CF8B8EB3CAB4931ECF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentCollectionPool_2_t949DE923B7F23FFB6788F50CCB6B33DDD7083E34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentCollectionPool_2_tA1B71807398C5E6906FD16BF95039EB0BAA326E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t80387D89E0F8D97849A5FBC8A0BFC0DAC0BB2FA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t8A22534532B8BFCBF574EE57E96049616329FF80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral072BA90B274B502615639084DC3D7FCC63407A24;
IL2CPP_EXTERN_C String_t* _stringLiteral08E36322C6909BA7D5E359346CB9865D7ACC6436;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral0C04CD91AEBB050BE21D6AD24AABF576BC020AC5;
IL2CPP_EXTERN_C String_t* _stringLiteral0F26962BBF0AB64227DC46C547E0AB86DE47E540;
IL2CPP_EXTERN_C String_t* _stringLiteral0FAAD6F8CD67196FDCAD20D4F7FE08C93EEA0028;
IL2CPP_EXTERN_C String_t* _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18;
IL2CPP_EXTERN_C String_t* _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral2024BDFC61B150E6AC3937C8FF7C584207481F19;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
IL2CPP_EXTERN_C String_t* _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral333367166FE3823931285ABCABC2B018C554CC6D;
IL2CPP_EXTERN_C String_t* _stringLiteral3680357E36BF098D58315A89BD03F078921BEFD9;
IL2CPP_EXTERN_C String_t* _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
IL2CPP_EXTERN_C String_t* _stringLiteral4784CA4E159D86F8767CCC55143536AF34801074;
IL2CPP_EXTERN_C String_t* _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B41A58E45555854EC2026B9B5F8243AA9E7ED4B;
IL2CPP_EXTERN_C String_t* _stringLiteral5C27A0B1BADE691B5E081C6206EA2258803AD35B;
IL2CPP_EXTERN_C String_t* _stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64;
IL2CPP_EXTERN_C String_t* _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8C975CC62CF419550282B028FB7E3A1F591D06;
IL2CPP_EXTERN_C String_t* _stringLiteral6D6D8E86DBD851D1A807A44DC76915458B0CA61A;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9;
IL2CPP_EXTERN_C String_t* _stringLiteral6FA4C59C48F20F657EA95225B529B162ECF44EAB;
IL2CPP_EXTERN_C String_t* _stringLiteral712F33D9E400722539C857AE7446D579F1115962;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A;
IL2CPP_EXTERN_C String_t* _stringLiteral8192EF02E079142FD5CA69DC024E6EF19381C3B6;
IL2CPP_EXTERN_C String_t* _stringLiteral82A7DC8A7D43BCA912EA8F0A6CA746727E5C7BA6;
IL2CPP_EXTERN_C String_t* _stringLiteral84151DE9802C0943FEB2C77FEF117D8E1026B86A;
IL2CPP_EXTERN_C String_t* _stringLiteral848A97F7360A08955AB3B08A739AFC04D590A51A;
IL2CPP_EXTERN_C String_t* _stringLiteral8E4F4950D758CB892E288EFD25E487C0A27A7D3A;
IL2CPP_EXTERN_C String_t* _stringLiteral94152201B24834B0EF60CA96399C126BAED45FB6;
IL2CPP_EXTERN_C String_t* _stringLiteral979BEF74EBFAB7697A86533A10926355727B6C8A;
IL2CPP_EXTERN_C String_t* _stringLiteral987B9B487877190C202FEE95CC46DE49CCA879AA;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralAC2EE18D39AEBF678C806F61D16E38AA1A8B2849;
IL2CPP_EXTERN_C String_t* _stringLiteralB12933F4DC58820F9722BDF423F448FD91C0EE8A;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892;
IL2CPP_EXTERN_C String_t* _stringLiteralB7E7D625DFBC9C92FA0449D5E3E0BE263DECD0EA;
IL2CPP_EXTERN_C String_t* _stringLiteralBABD9227D6C69F52EAA129E77EFDDCA60D759DF9;
IL2CPP_EXTERN_C String_t* _stringLiteralBC23F745A5F01C32298CF51EEA0749B852775358;
IL2CPP_EXTERN_C String_t* _stringLiteralBCA7DDD073AD5DB21CC612ADB1833BF1A5D32261;
IL2CPP_EXTERN_C String_t* _stringLiteralBD2F86A6F80C957D36F5792A1101E475BB128D86;
IL2CPP_EXTERN_C String_t* _stringLiteralBF45CADC16AD267EA891B4231D162B68FDED748D;
IL2CPP_EXTERN_C String_t* _stringLiteralBFC45650C963261F1B046FEBC27ABA14BCBA8F11;
IL2CPP_EXTERN_C String_t* _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB;
IL2CPP_EXTERN_C String_t* _stringLiteralC3A8E77BFEC96D39BC81E775AA2148ABFCC7B627;
IL2CPP_EXTERN_C String_t* _stringLiteralC740CA2C6483814A1BF1E5922B73D9F4AFE93E72;
IL2CPP_EXTERN_C String_t* _stringLiteralC7F8833B1D1C15BE72D16AB61C891445A5F649A7;
IL2CPP_EXTERN_C String_t* _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346;
IL2CPP_EXTERN_C String_t* _stringLiteralD5C1F833B9BE779404488EC6DDA5379616471E78;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2;
IL2CPP_EXTERN_C String_t* _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
IL2CPP_EXTERN_C String_t* _stringLiteralDB47297909F3BD6EDB8AD67A8511975233214355;
IL2CPP_EXTERN_C String_t* _stringLiteralDC58B310513517CDBD557C46B0E45FE5C7B11872;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
IL2CPP_EXTERN_C String_t* _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A;
IL2CPP_EXTERN_C String_t* _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralE5AE18385283D6C5462AF087AEC09F611FA4015E;
IL2CPP_EXTERN_C String_t* _stringLiteralE75F4F4A9D67BC98BA7DB8DBE3C519516572DA4E;
IL2CPP_EXTERN_C String_t* _stringLiteralE895F499BC653C0CA36FB31C5936FC768CAD263E;
IL2CPP_EXTERN_C String_t* _stringLiteralEC2CDFF92ABD4D491B88F9CD19FE5E614EE529C7;
IL2CPP_EXTERN_C String_t* _stringLiteralEE18A03A42C3630065A4A851B24F01948FD8026C;
IL2CPP_EXTERN_C String_t* _stringLiteralF08339D4FE85DC41A1A67350BEBFF4F037C2EC98;
IL2CPP_EXTERN_C String_t* _stringLiteralF13E4BFF086D4E511E68B0617B76ACC5BD5AFFE7;
IL2CPP_EXTERN_C String_t* _stringLiteralF16D8766C3E454E6B20DC525B5017CAC8D0BDC90;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF784248D4F987160AD49E300C16506516FD2D5D4;
IL2CPP_EXTERN_C String_t* _stringLiteralFE6B7E72961EFAC1F608AD025001BB0C4D2114CC;
IL2CPP_EXTERN_C String_t* _stringLiteralFFA36FEC765CE9140429C3C852A895A05B9F710A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssemblyProfiler_GetFilteredAssembliesInternal_mFFB085B3F1917DEB5F1E0966DD8C0954450812A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentCollectionPool_2_Get_m0B2440B6157F055190D3916B89C3AB4A09016086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentCollectionPool_2_Get_m53111F2712905BCE35CEB111888CBCB235B39B4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentCollectionPool_2_Get_m5646C51C8C7CEC0A32FABF3ED60E13FA5850B8A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentCollectionPool_2_Get_m6CE5C5CAC6C0EC60F972BCDCAA4BF0CD071B5F31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentCollectionPool_2_Release_m42AD968D542FE354387EF3690D91D9F9BC1F5E3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentCollectionPool_2_Release_m5E97F2524A060EFE169E2E9E6F93E0E77495F525_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentCollectionPool_2_Release_m60FE8E5B27CF533C887D8A98ED3438584F6C8956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentCollectionPool_2_Release_mA3363C1702BF0E9C3F12F5E22379CEB9D97E7086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4B5B9E3F4080B1F5CA9CDBC73439C4DFBBAE9B14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mEFC16E9C55BA4C60D7388C5B6EDD2252BD0E8482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m082C91C62C26D9C258ECD9114D21C6796306492F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m3B8ED093D0D55BB86D9153E5F173B34BC9EAA972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mCEFD03397F22B96A02906212C1935847C8689191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3EB3EB3FA9E674D490542CDED5CBE0876CF0A651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD9198DB32EB268B2B200F0427C9DA107BC1BBFF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisType_t_m413A4E5DEAA1E28CF48909C8802E2507977738CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_TisType_t_m44E870C102A4A7A2292D5BAE3F42EAE56CCF8706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_GetActionType_mB2149FF0863683C12CAB613047F7B65BE37A01C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_GetFuncType_mDD1BD8824C9A10940943E7F07B2D3EB9DDB51172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mB1917B0D55AD8BC6D29A8E885F252329C34F1B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m98C2790A1F81CB176570DA96E0EDF6F00AD6AEDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mFEE173F2E6F13D352AE7E8F0A74C3FD0230256D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m9B43F632323B60736442287C26EB9F657F1D8923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mE129D6DB83AF93A8435DB6F55D315EE8F3181CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mE8128D89AB1F9C09262BA54E82CF98D2DA7AF2A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mFA0DE1D314F5BB462DF727E48669CD75EF51C264_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7DF0FFC189D95EEFE99C4A9E3EE47904F346434D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23D4BA538BA13A3A977CF1ECFAE956BC2D200900_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m32C6795B1E9BACBF1251E8055F79D0A72E86AB64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m468D67D809EE62B01DDE4A0A739A36BAD219E2F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m6F75A339123100E4CB18CFF7A06FC184EDEF9683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB2CE10C5396AA1FDB680D3725ADDBE12BCE0462E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mE8CF8F2C3006FDB51D8E10854643529CD0605434_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB663AB1DC0DB6B4D360A48453C83402B7750F24A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionExtensions_GetEnumerableType_m4B98394DF5AB42C8A6C66AB51B7966DD0491F27E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionExtensions_GetMemberUnderlyingType_m514EFF936F3A99ED547E12C8431EBFDEE2530B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionExtensions_HasAttribute_TisDisableAssemblyReflectionAttribute_tDC6B2590ED0210DC437F5FF57515361FFC7D9CBE_m79C43E17408646617EF5AB79FFBF84D367B8392E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateMatchingDelegateU3Eb__14_0_m4C9EB99B494AF24BA30E45309D18D0852F182320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateMatchingDelegateU3Eb__15_0_m1CE715A59C851A68BE512444EABE23C0DC43A628_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetEnumerableTypeU3Eb__47_0_mAE9CCD695998C1A8FAD15F4CC57948E23E4BCF64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Delegate_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_t58021767EFD70313A4DB609BB2EC63167C586EDE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IList_1_tCFBEF0BE66D2411D5AEA86FDF1C1E71F013AA724_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_t2F377D93C74B8090B226DCC307AB5BB600181453_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Stack_1_t8B41AD867BA211178643B3152EFA0052D0D10E8A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5_0_0_0_var;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9FEC46990BFFB2E7BB25265B641BE6779E23F1FD 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCBBC317F7902F8BA4FF0462B4FB5E432C5FD67FE* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t97F2177324F7BC40BBA93A3380277CD7B8061C6A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t249A253C6896F76AA59A4B0039E3834DD205F9C1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___entries_1)); }
	inline EntryU5BU5D_tCBBC317F7902F8BA4FF0462B4FB5E432C5FD67FE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCBBC317F7902F8BA4FF0462B4FB5E432C5FD67FE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCBBC317F7902F8BA4FF0462B4FB5E432C5FD67FE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___keys_7)); }
	inline KeyCollection_t97F2177324F7BC40BBA93A3380277CD7B8061C6A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t97F2177324F7BC40BBA93A3380277CD7B8061C6A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t97F2177324F7BC40BBA93A3380277CD7B8061C6A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___values_8)); }
	inline ValueCollection_t249A253C6896F76AA59A4B0039E3834DD205F9C1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t249A253C6896F76AA59A4B0039E3834DD205F9C1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t249A253C6896F76AA59A4B0039E3834DD205F9C1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAB10C4B656D9F9410CE2F0A070CC09D560E73F45* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tBAB43AE8797408A3A15FEF791CC563CDA48AE405 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDD2E0C132B29951F3A40C22A99538A8DA70B4AA5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___entries_1)); }
	inline EntryU5BU5D_tAB10C4B656D9F9410CE2F0A070CC09D560E73F45* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAB10C4B656D9F9410CE2F0A070CC09D560E73F45** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAB10C4B656D9F9410CE2F0A070CC09D560E73F45* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___keys_7)); }
	inline KeyCollection_tBAB43AE8797408A3A15FEF791CC563CDA48AE405 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBAB43AE8797408A3A15FEF791CC563CDA48AE405 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBAB43AE8797408A3A15FEF791CC563CDA48AE405 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___values_8)); }
	inline ValueCollection_tDD2E0C132B29951F3A40C22A99538A8DA70B4AA5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDD2E0C132B29951F3A40C22A99538A8DA70B4AA5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDD2E0C132B29951F3A40C22A99538A8DA70B4AA5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___entries_1)); }
	inline EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t781EDDBE5235AA95E2871158B003AB1EDBDB383A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___keys_7)); }
	inline KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9F7BDD2BD3F3743A41D9E432DCBE8D91C5D95646 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ___values_8)); }
	inline ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB729CAD6B3DCF5C8942A973BCFBCF503FC8E2099 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69* ____slots_8;
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
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____slots_8)); }
	inline SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Reflection.Assembly>
struct List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F, ____items_1)); }
	inline AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* get__items_1() const { return ____items_1; }
	inline AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F_StaticFields, ____emptyArray_5)); }
	inline AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Reflection.FieldInfo>
struct List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673, ____items_1)); }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* get__items_1() const { return ____items_1; }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673_StaticFields, ____emptyArray_5)); }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____items_1)); }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* get__items_1() const { return ____items_1; }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_StaticFields, ____emptyArray_5)); }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4, ____items_1)); }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* get__items_1() const { return ____items_1; }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4_StaticFields, ____emptyArray_5)); }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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


// System.Collections.Generic.List`1<System.Reflection.PropertyInfo>
struct List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521, ____items_1)); }
	inline PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* get__items_1() const { return ____items_1; }
	inline PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521_StaticFields, ____emptyArray_5)); }
	inline PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Type>
struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____items_1)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get__items_1() const { return ____items_1; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_StaticFields, ____emptyArray_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tE4D6C003BC1865A17252C52084641CA1BD0861E7  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// Baracuda.Reflection.AssemblyProfiler
struct AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4  : public RuntimeObject
{
public:

public:
};

struct AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_StaticFields
{
public:
	// System.String[] Baracuda.Reflection.AssemblyProfiler::bannedAssemblyPrefixes
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___bannedAssemblyPrefixes_0;
	// System.String[] Baracuda.Reflection.AssemblyProfiler::bannedAssemblyNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___bannedAssemblyNames_1;

public:
	inline static int32_t get_offset_of_bannedAssemblyPrefixes_0() { return static_cast<int32_t>(offsetof(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_StaticFields, ___bannedAssemblyPrefixes_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_bannedAssemblyPrefixes_0() const { return ___bannedAssemblyPrefixes_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_bannedAssemblyPrefixes_0() { return &___bannedAssemblyPrefixes_0; }
	inline void set_bannedAssemblyPrefixes_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___bannedAssemblyPrefixes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannedAssemblyPrefixes_0), (void*)value);
	}

	inline static int32_t get_offset_of_bannedAssemblyNames_1() { return static_cast<int32_t>(offsetof(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_StaticFields, ___bannedAssemblyNames_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_bannedAssemblyNames_1() const { return ___bannedAssemblyNames_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_bannedAssemblyNames_1() { return &___bannedAssemblyNames_1; }
	inline void set_bannedAssemblyNames_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___bannedAssemblyNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannedAssemblyNames_1), (void*)value);
	}
};


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660  : public RuntimeObject
{
public:

public:
};

struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * ___s_lambdaDelegateCache_0;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// Baracuda.Reflection.ReflectionExtensions/<>c
struct U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields
{
public:
	// Baracuda.Reflection.ReflectionExtensions/<>c Baracuda.Reflection.ReflectionExtensions/<>c::<>9
	U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Baracuda.Reflection.ReflectionExtensions/<>c::<>9__14_0
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * ___U3CU3E9__14_0_1;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Baracuda.Reflection.ReflectionExtensions/<>c::<>9__15_0
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * ___U3CU3E9__15_0_2;
	// System.Func`2<System.Type,System.Boolean> Baracuda.Reflection.ReflectionExtensions/<>c::<>9__47_0
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___U3CU3E9__47_0_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields, ___U3CU3E9__15_0_2)); }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * get_U3CU3E9__15_0_2() const { return ___U3CU3E9__15_0_2; }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF ** get_address_of_U3CU3E9__15_0_2() { return &___U3CU3E9__15_0_2; }
	inline void set_U3CU3E9__15_0_2(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * value)
	{
		___U3CU3E9__15_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__47_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields, ___U3CU3E9__47_0_3)); }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * get_U3CU3E9__47_0_3() const { return ___U3CU3E9__47_0_3; }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 ** get_address_of_U3CU3E9__47_0_3() { return &___U3CU3E9__47_0_3; }
	inline void set_U3CU3E9__47_0_3(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * value)
	{
		___U3CU3E9__47_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__47_0_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
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


// Baracuda.Reflection.DisableAssemblyReflectionAttribute
struct DisableAssemblyReflectionAttribute_tDC6B2590ED0210DC437F5FF57515361FFC7D9CBE  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Reflection.EventInfo
struct EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t6E27B946DE3E58DCAC2BF10DF7992922E7D8987F * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_add_event_0), (void*)value);
	}
};


// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct IntPtr_t 
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
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// Baracuda.Pooling.Concretions.PooledStringBuilder
struct PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 
{
public:
	// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Value
	StringBuilder_t * ___Value_0;
	// Baracuda.Pooling.Interface.IObjectPool`1<System.Text.StringBuilder> Baracuda.Pooling.Concretions.PooledStringBuilder::_pool
	RuntimeObject* ____pool_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9, ___Value_0)); }
	inline StringBuilder_t * get_Value_0() const { return ___Value_0; }
	inline StringBuilder_t ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(StringBuilder_t * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of__pool_1() { return static_cast<int32_t>(offsetof(PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9, ____pool_1)); }
	inline RuntimeObject* get__pool_1() const { return ____pool_1; }
	inline RuntimeObject** get_address_of__pool_1() { return &____pool_1; }
	inline void set__pool_1(RuntimeObject* value)
	{
		____pool_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Baracuda.Pooling.Concretions.PooledStringBuilder
struct PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshaled_pinvoke
{
	char* ___Value_0;
	RuntimeObject* ____pool_1;
};
// Native definition for COM marshalling of Baracuda.Pooling.Concretions.PooledStringBuilder
struct PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshaled_com
{
	Il2CppChar* ___Value_0;
	RuntimeObject* ____pool_1;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
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
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// Baracuda.Reflection.ReflectionExtensions/<>c__DisplayClass64_0
struct U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541 
{
public:
	// System.Type Baracuda.Reflection.ReflectionExtensions/<>c__DisplayClass64_0::type
	Type_t * ___type_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Baracuda.Reflection.ReflectionExtensions/<>c__DisplayClass64_0::dictionary
	Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * ___dictionary_1;
	// System.String Baracuda.Reflection.ReflectionExtensions/<>c__DisplayClass64_0::memberName
	String_t* ___memberName_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_dictionary_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541, ___dictionary_1)); }
	inline Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * get_dictionary_1() const { return ___dictionary_1; }
	inline Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** get_address_of_dictionary_1() { return &___dictionary_1; }
	inline void set_dictionary_1(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * value)
	{
		___dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_1), (void*)value);
	}

	inline static int32_t get_offset_of_memberName_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541, ___memberName_2)); }
	inline String_t* get_memberName_2() const { return ___memberName_2; }
	inline String_t** get_address_of_memberName_2() { return &___memberName_2; }
	inline void set_memberName_2(String_t* value)
	{
		___memberName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberName_2), (void*)value);
	}
};


// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___DomainUnload_13)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ProcessExit_14)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ResourceResolve_15)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___TypeResolve_16)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___FirstChanceException_18)); }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___compatibility_switch_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ___default_domain_10)); }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
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

// System.Reflection.AssemblyContentType
struct AssemblyContentType_t3D610214A4025EDAEA27C569340C2AC5B0B828AE 
{
public:
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyContentType_t3D610214A4025EDAEA27C569340C2AC5B0B828AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct AssemblyHashAlgorithm_tAC2C042FAE3F5BCF6BEFA05671C2BE09A85D6E66 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_tAC2C042FAE3F5BCF6BEFA05671C2BE09A85D6E66, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.AssemblyNameFlags
struct AssemblyNameFlags_t18020151897CB7FD3FA390EE3999ECCA3FEA7622 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t18020151897CB7FD3FA390EE3999ECCA3FEA7622, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct AssemblyVersionCompatibility_t686857D4C42019A45D4309AB80A2517E3D34BEDD 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t686857D4C42019A45D4309AB80A2517E3D34BEDD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
struct Exception_t  : public RuntimeObject
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

// System.Reflection.MemberTypes
struct MemberTypes_tA4C0F24E8DE2439AA9E716F96FF8D394F26A5EDE 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberTypes_tA4C0F24E8DE2439AA9E716F96FF8D394F26A5EDE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
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


// System.Reflection.ProcessorArchitecture
struct ProcessorArchitecture_t80DDC787E34DBB9769E1CA90689FDB0131D60AAB 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t80DDC787E34DBB9769E1CA90689FDB0131D60AAB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// System.Reflection.AssemblyName
struct AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_tCA4C0AB8B98C6C03134BC8AB17DD4C76D8091FDF * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codebase_1), (void*)value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___cultureinfo_6)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cultureinfo_6), (void*)value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___keypair_9)); }
	inline StrongNameKeyPair_tCA4C0AB8B98C6C03134BC8AB17DD4C76D8091FDF * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_tCA4C0AB8B98C6C03134BC8AB17DD4C76D8091FDF ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_tCA4C0AB8B98C6C03134BC8AB17DD4C76D8091FDF * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keypair_9), (void*)value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___publicKey_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publicKey_10), (void*)value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___keyToken_11)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyToken_11), (void*)value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___version_13)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_version_13() const { return ___version_13; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_13), (void*)value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}

	inline static int32_t get_offset_of_contentType_15() { return static_cast<int32_t>(offsetof(AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824, ___contentType_15)); }
	inline int32_t get_contentType_15() const { return ___contentType_15; }
	inline int32_t* get_address_of_contentType_15() { return &___contentType_15; }
	inline void set_contentType_15(int32_t value)
	{
		___contentType_15 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_tCA4C0AB8B98C6C03134BC8AB17DD4C76D8091FDF * ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_tCA4C0AB8B98C6C03134BC8AB17DD4C76D8091FDF * ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
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

// Baracuda.Reflection.ReflectionExtensions
struct ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441  : public RuntimeObject
{
public:

public:
};

struct ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.String> Baracuda.Reflection.ReflectionExtensions::typeCache
	Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * ___typeCache_1;
	// System.Collections.Generic.HashSet`1<System.Type> Baracuda.Reflection.ReflectionExtensions::numericTypes
	HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * ___numericTypes_2;
	// System.Collections.Generic.HashSet`1<System.Type> Baracuda.Reflection.ReflectionExtensions::integerTypes
	HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * ___integerTypes_3;
	// System.Collections.Generic.HashSet`1<System.Type> Baracuda.Reflection.ReflectionExtensions::decimalTypes
	HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * ___decimalTypes_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>> Baracuda.Reflection.ReflectionExtensions::memberCache
	Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * ___memberCache_5;

public:
	inline static int32_t get_offset_of_typeCache_1() { return static_cast<int32_t>(offsetof(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields, ___typeCache_1)); }
	inline Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * get_typeCache_1() const { return ___typeCache_1; }
	inline Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 ** get_address_of_typeCache_1() { return &___typeCache_1; }
	inline void set_typeCache_1(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * value)
	{
		___typeCache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeCache_1), (void*)value);
	}

	inline static int32_t get_offset_of_numericTypes_2() { return static_cast<int32_t>(offsetof(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields, ___numericTypes_2)); }
	inline HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * get_numericTypes_2() const { return ___numericTypes_2; }
	inline HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 ** get_address_of_numericTypes_2() { return &___numericTypes_2; }
	inline void set_numericTypes_2(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * value)
	{
		___numericTypes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numericTypes_2), (void*)value);
	}

	inline static int32_t get_offset_of_integerTypes_3() { return static_cast<int32_t>(offsetof(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields, ___integerTypes_3)); }
	inline HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * get_integerTypes_3() const { return ___integerTypes_3; }
	inline HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 ** get_address_of_integerTypes_3() { return &___integerTypes_3; }
	inline void set_integerTypes_3(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * value)
	{
		___integerTypes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___integerTypes_3), (void*)value);
	}

	inline static int32_t get_offset_of_decimalTypes_4() { return static_cast<int32_t>(offsetof(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields, ___decimalTypes_4)); }
	inline HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * get_decimalTypes_4() const { return ___decimalTypes_4; }
	inline HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 ** get_address_of_decimalTypes_4() { return &___decimalTypes_4; }
	inline void set_decimalTypes_4(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * value)
	{
		___decimalTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decimalTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_memberCache_5() { return static_cast<int32_t>(offsetof(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields, ___memberCache_5)); }
	inline Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * get_memberCache_5() const { return ___memberCache_5; }
	inline Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 ** get_address_of_memberCache_5() { return &___memberCache_5; }
	inline void set_memberCache_5(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * value)
	{
		___memberCache_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberCache_5), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
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


// System.Func`2<System.Type[],System.Type>
struct Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Assembly_t * m_Items[1];

public:
	inline Assembly_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t * value)
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
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
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemberInfo_t * m_Items[1];

public:
	inline MemberInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean Baracuda.Reflection.ReflectionExtensions::HasAttribute<System.Object>(System.Reflection.ICustomAttributeProvider,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_HasAttribute_TisRuntimeObject_m621ABABA648A18AD39251719AFCE990CD5EEDFFD_gshared (RuntimeObject* ___provider0, bool ___inherited1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_mD248DD20C01000944006DA903D282009D2524A9E_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 Baracuda.Pooling.Abstractions.ConcurrentCollectionPool`2<System.Object,System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConcurrentCollectionPool_2_Get_m5921289FF248930ECD8DCEC5E80C6741AC68903F_gshared (const RuntimeMethod* method);
// System.Void Baracuda.Pooling.Abstractions.ConcurrentCollectionPool`2<System.Object,System.Object>::Release(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentCollectionPool_2_Release_m11BAB9997C8E514AAFBEE01F31A61D3E0E10EE85_gshared (RuntimeObject * ___toRelease0, const RuntimeMethod* method);
// System.Boolean Baracuda.Reflection.ReflectionExtensions::EqualsNone<System.Object>(T,T,T,T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReflectionExtensions_EqualsNone_TisRuntimeObject_m3530FC9307D921672D574DC585C85D78EF14012C_gshared_inline (RuntimeObject * ___target0, RuntimeObject * ___otherA1, RuntimeObject * ___otherB2, RuntimeObject * ___otherC3, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.String>()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Reflection.Assembly[] Baracuda.Reflection.AssemblyProfiler::GetFilteredAssembliesInternal(System.String[],System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* AssemblyProfiler_GetFilteredAssembliesInternal_mFFB085B3F1917DEB5F1E0966DD8C0954450812A0_inline (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___excludeNames0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___excludePrefixes1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Reflection.Assembly>::.ctor(System.Int32)
inline void List_1__ctor_mB663AB1DC0DB6B4D360A48453C83402B7750F24A (List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E (const RuntimeMethod* method);
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* AppDomain_GetAssemblies_m7397BD0461B4D6BA76AE0974DE9FBEDAF70AEBFD (AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * __this, const RuntimeMethod* method);
// System.Boolean Baracuda.Reflection.AssemblyProfiler::IsAssemblyValid(System.Reflection.Assembly,System.Collections.Generic.IReadOnlyList`1<System.String>,System.Collections.Generic.IReadOnlyList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssemblyProfiler_IsAssemblyValid_mE9E6122EF4BC750D45D97DD6AA7B07C1FB0E9D0F (Assembly_t * ___assembly0, RuntimeObject* ___excludeNames1, RuntimeObject* ___excludePrefixes2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Reflection.Assembly>::Add(!0)
inline void List_1_Add_m7DF0FFC189D95EEFE99C4A9E3EE47904F346434D (List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F * __this, Assembly_t * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F *, Assembly_t *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<System.Reflection.Assembly>::ToArray()
inline AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* List_1_ToArray_m23D4BA538BA13A3A977CF1ECFAE956BC2D200900 (List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F * __this, const RuntimeMethod* method)
{
	return ((  AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* (*) (List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::HasAttribute<Baracuda.Reflection.DisableAssemblyReflectionAttribute>(System.Reflection.ICustomAttributeProvider,System.Boolean)
inline bool ReflectionExtensions_HasAttribute_TisDisableAssemblyReflectionAttribute_tDC6B2590ED0210DC437F5FF57515361FFC7D9CBE_m79C43E17408646617EF5AB79FFBF84D367B8392E (RuntimeObject* ___provider0, bool ___inherited1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, bool, const RuntimeMethod*))ReflectionExtensions_HasAttribute_TisRuntimeObject_m621ABABA648A18AD39251719AFCE990CD5EEDFFD_gshared)(___provider0, ___inherited1, method);
}
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6 (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Reflection.AssemblyName::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m8558532350989A6DE33C188FD1A470187DFEA911_inline (AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F (MethodBase_t * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Reflection.ParameterInfo,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFEE173F2E6F13D352AE7E8F0A74C3FD0230256D0 (Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Reflection.ParameterInfo,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_TisType_t_m44E870C102A4A7A2292D5BAE3F42EAE56CCF8706 (RuntimeObject* ___source0, Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<System.Type[],System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m98C2790A1F81CB176570DA96E0EDF6F00AD6AEDE (Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Concat_TisType_t_m413A4E5DEAA1E28CF48909C8802E2507977738CA (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_mD248DD20C01000944006DA903D282009D2524A9E_gshared)(___first0, ___second1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// !1 System.Func`2<System.Type[],System.Type>::Invoke(!0)
inline Type_t * Func_2_Invoke_mB1917B0D55AD8BC6D29A8E885F252329C34F1B17 (Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 * __this, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___arg0, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_CreateDelegate_mD954193E6BDB389B280C40745D55EAD681576121 (Type_t * ___type0, RuntimeObject * ___target1, String_t* ___method2, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_CreateDelegate_m4B6F4C6A4A3C1B2C55CD01FEA15E0C801CADCB24 (Type_t * ___type0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Contains(!0)
inline bool HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3 (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * __this, Type_t * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *, Type_t *, const RuntimeMethod*))HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared)(__this, ___item0, method);
}
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsStruct(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsStruct_mF784D4674A222ADECE5403EA31D581358B66D20B_inline (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsByRef_mDB28F5482F9AE4407101B294CD3ADB01106CA4A3 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsSealed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsSealed_m688591A832F192E584223CFA48F37EA06C0C0AA5 (Type_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetInterface(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetInterface_m1241E49F8C5AD57533E962F9D3B62751DAF7D18A (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsString(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsString_mD66B585D4CA20C3376BB57497BD8D1A46CBED89E_inline (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07 (Type_t * __this, const RuntimeMethod* method);
// System.Type[] Baracuda.Reflection.ReflectionExtensions::GetDeclaringTypes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ReflectionExtensions_GetDeclaringTypes_mD791FB22FF6281FB2F04F0CCDB1FE74BE8C273B4 (Type_t * ___type0, bool ___includeThis1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPublic_mE4BAD3A9E7F21231E4A579F7CF8F2DE4C5E8E0AC (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsNestedPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsNestedPublic_m699F4C8E5B0FEE0197BE12CD1A4143421B51E820 (Type_t * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEF0800D4AF607E61714C92A76911B4780C4D0A29 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753 (RuntimeObject* ___source0, Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared)(___source0, ___predicate1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline Type_t * Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_gshared)(___source0, method);
}
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Type Baracuda.Reflection.ReflectionExtensions::GetEnumerableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ReflectionExtensions_GetEnumerableType_m4B98394DF5AB42C8A6C66AB51B7966DD0491F27E (Type_t * ___type0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String Baracuda.Reflection.ReflectionExtensions::ToTypeKeyWord(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_ToTypeKeyWord_mC1543509E0F8949EEFC790FACE110666AD51B457_inline (String_t* ___typeName0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method);
// Baracuda.Pooling.Concretions.PooledStringBuilder Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::GetDisposable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9  ConcurrentStringBuilderPool_GetDisposable_m80DC1A3AECB527640B4416FB8B80A4570CCA2E53 (const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m6A9F30F50501260FD67DAFCAE70446DAA6B29B11_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared)(___source0, method);
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mF4FAD12F83A60C44901A6B5E6E01B23C40088864_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String Baracuda.Pooling.Concretions.PooledStringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PooledStringBuilder_ToString_m0E218A1BAC36ED7C0FA22AAC7B928452E428DB99 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.String>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mCEFD03397F22B96A02906212C1935847C8689191 (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * __this, Type_t * ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 *, Type_t *, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * ConcurrentStringBuilderPool_Get_m52C1985DBEE85963ACC1851D1E273C8FA3798179 (const RuntimeMethod* method);
// System.String Baracuda.Reflection.ReflectionExtensions::ToSyntaxString(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_ToSyntaxString_mDA48D337E5939D333C9BE4DB18C847402C434ED6_inline (Type_t * ___type0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618 (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910 (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * __this, Type_t * ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 *, Type_t *, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::ReleaseStringBuilder(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentStringBuilderPool_ReleaseStringBuilder_m5AC7AA961261F72B39C993B821B8A8C8F035EBF7 (StringBuilder_t * ___toRelease0, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m471FDAF5737609AC21BC3403301DE4BB20B737DC (String_t* ___s0, const RuntimeMethod* method);
// !0 Baracuda.Pooling.Abstractions.ConcurrentCollectionPool`2<System.Collections.Generic.List`1<System.Type>,System.Type>::Get()
inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85 (const RuntimeMethod* method)
{
	return ((  List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * (*) (const RuntimeMethod*))ConcurrentCollectionPool_2_Get_m5921289FF248930ECD8DCEC5E80C6741AC68903F_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<System.Type>::Add(!0)
inline void List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * __this, Type_t * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *, Type_t *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<System.Type>::ToArray()
inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* List_1_ToArray_mB2CE10C5396AA1FDB680D3725ADDBE12BCE0462E (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * __this, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* (*) (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void Baracuda.Pooling.Abstractions.ConcurrentCollectionPool`2<System.Collections.Generic.List`1<System.Type>,System.Type>::Release(!0)
inline void ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288 (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * ___toRelease0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *, const RuntimeMethod*))ConcurrentCollectionPool_2_Release_m11BAB9997C8E514AAFBEE01F31A61D3E0E10EE85_gshared)(___toRelease0, method);
}
// System.Object Baracuda.Reflection.ReflectionExtensions::GetMemberValue(System.String,System.Type,System.Object,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReflectionExtensions_GetMemberValue_m8DD4E0F98B40388E563D15F724C21CB33822F0AE (String_t* ___memberName0, Type_t * ___type1, RuntimeObject * ___target2, int32_t ___flags3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3B8ED093D0D55BB86D9153E5F173B34BC9EAA972 (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * __this, Type_t * ___key0, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 *, Type_t *, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m082C91C62C26D9C258ECD9114D21C6796306492F (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * __this, String_t* ___key0, MemberInfo_t ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD *, String_t*, MemberInfo_t **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PropertyInfo_GetValue_m2E9CA9EBD5971D3A30DDCB07A720A978AB9E18AE (PropertyInfo_t * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Reflection.FieldInfo Baracuda.Reflection.ReflectionExtensions::GetFieldIncludeBaseTypes(System.Type,System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * ReflectionExtensions_GetFieldIncludeBaseTypes_m4FFA0A89A70C377FD3CB652CFBFC312DFB028AF0 (Type_t * ___type0, String_t* ___fieldName1, int32_t ___flags2, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_m5E2B5FF4334B861A92933D078C4B06FA11AA731A (FieldInfo_t * ___left0, FieldInfo_t * ___right1, const RuntimeMethod* method);
// System.Void Baracuda.Reflection.ReflectionExtensions::<GetMemberValue>g__Cache|64_0(System.Reflection.MemberInfo,Baracuda.Reflection.ReflectionExtensions/<>c__DisplayClass64_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions_U3CGetMemberValueU3Eg__CacheU7C64_0_m1CB48B07E91615EEFA49098B439B26CEE8849A0F (MemberInfo_t * ___member0, U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541 * p1, const RuntimeMethod* method);
// System.Reflection.MethodInfo Baracuda.Reflection.ReflectionExtensions::GetMethodIncludeBaseTypes(System.Type,System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionExtensions_GetMethodIncludeBaseTypes_m63D9FCBC5344C3E3517406255EEE3FA493A2FD9F (Type_t * ___type0, String_t* ___methodName1, int32_t ___flags2, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mDE1DAA5D330E9C975AC6423FC2D06862637BE68D (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.Reflection.PropertyInfo Baracuda.Reflection.ReflectionExtensions::GetPropertyIncludeBaseTypes(System.Type,System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * ReflectionExtensions_GetPropertyIncludeBaseTypes_mF52693D4BA6100F6DA9FA117A1FF19997B9E39BB (Type_t * ___type0, String_t* ___propertyName1, int32_t ___flags2, const RuntimeMethod* method);
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mB4C6169DC83174E7712055F0973BC55469AD9962 (PropertyInfo_t * ___left0, PropertyInfo_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::op_Equality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Equality_m317FBF38CA6FD67D08400CC9A15FEC250E5D4751 (FieldInfo_t * ___left0, FieldInfo_t * ___right1, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_m3C862A51D0B10889115A9EB53CBBDC7C3883D26F (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Boolean System.Reflection.PropertyInfo::op_Equality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Equality_m94A58A417AD82DA8ABCE4B0DCAA3019A586D5B16 (PropertyInfo_t * ___left0, PropertyInfo_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_mC78C53FBCEF409A2EBD689D6781D23C62E6161F2 (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.EventInfo::op_Equality(System.Reflection.EventInfo,System.Reflection.EventInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInfo_op_Equality_m7E6B543C0D5F69E27360762D04F0054818298127 (EventInfo_t * ___left0, EventInfo_t * ___right1, const RuntimeMethod* method);
// !0 Baracuda.Pooling.Abstractions.ConcurrentCollectionPool`2<System.Collections.Generic.List`1<System.Reflection.FieldInfo>,System.Reflection.FieldInfo>::Get()
inline List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673 * ConcurrentCollectionPool_2_Get_m53111F2712905BCE35CEB111888CBCB235B39B4F (const RuntimeMethod* method)
{
	return ((  List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673 * (*) (const RuntimeMethod*))ConcurrentCollectionPool_2_Get_m5921289FF248930ECD8DCEC5E80C6741AC68903F_gshared)(method);
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::EqualsNone<System.Type>(T,T,T,T)
inline bool ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_inline (Type_t * ___target0, Type_t * ___otherA1, Type_t * ___otherB2, Type_t * ___otherC3, const RuntimeMethod* method)
{
	return ((  bool (*) (Type_t *, Type_t *, Type_t *, Type_t *, const RuntimeMethod*))ReflectionExtensions_EqualsNone_TisRuntimeObject_m3530FC9307D921672D574DC585C85D78EF14012C_gshared_inline)(___target0, ___otherA1, ___otherB2, ___otherC3, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
inline int32_t List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_inline (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
inline Type_t * List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_inline (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.FieldInfo>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m9B43F632323B60736442287C26EB9F657F1D8923 (List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// !0[] System.Collections.Generic.List`1<System.Reflection.FieldInfo>::ToArray()
inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* List_1_ToArray_m32C6795B1E9BACBF1251E8055F79D0A72E86AB64 (List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673 * __this, const RuntimeMethod* method)
{
	return ((  FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* (*) (List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void Baracuda.Pooling.Abstractions.ConcurrentCollectionPool`2<System.Collections.Generic.List`1<System.Reflection.FieldInfo>,System.Reflection.FieldInfo>::Release(!0)
inline void ConcurrentCollectionPool_2_Release_m60FE8E5B27CF533C887D8A98ED3438584F6C8956 (List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673 * ___toRelease0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673 *, const RuntimeMethod*))ConcurrentCollectionPool_2_Release_m11BAB9997C8E514AAFBEE01F31A61D3E0E10EE85_gshared)(___toRelease0, method);
}
// !0 Baracuda.Pooling.Abstractions.ConcurrentCollectionPool`2<System.Collections.Generic.List`1<System.Reflection.PropertyInfo>,System.Reflection.PropertyInfo>::Get()
inline List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521 * ConcurrentCollectionPool_2_Get_m6CE5C5CAC6C0EC60F972BCDCAA4BF0CD071B5F31 (const RuntimeMethod* method)
{
	return ((  List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521 * (*) (const RuntimeMethod*))ConcurrentCollectionPool_2_Get_m5921289FF248930ECD8DCEC5E80C6741AC68903F_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.PropertyInfo>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mE129D6DB83AF93A8435DB6F55D315EE8F3181CEF (List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// !0[] System.Collections.Generic.List`1<System.Reflection.PropertyInfo>::ToArray()
inline PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* List_1_ToArray_mE8CF8F2C3006FDB51D8E10854643529CD0605434 (List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521 * __this, const RuntimeMethod* method)
{
	return ((  PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* (*) (List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void Baracuda.Pooling.Abstractions.ConcurrentCollectionPool`2<System.Collections.Generic.List`1<System.Reflection.PropertyInfo>,System.Reflection.PropertyInfo>::Release(!0)
inline void ConcurrentCollectionPool_2_Release_m42AD968D542FE354387EF3690D91D9F9BC1F5E3D (List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521 * ___toRelease0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521 *, const RuntimeMethod*))ConcurrentCollectionPool_2_Release_m11BAB9997C8E514AAFBEE01F31A61D3E0E10EE85_gshared)(___toRelease0, method);
}
// !0 Baracuda.Pooling.Abstractions.ConcurrentCollectionPool`2<System.Collections.Generic.List`1<System.Reflection.MethodInfo>,System.Reflection.MethodInfo>::Get()
inline List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * ConcurrentCollectionPool_2_Get_m5646C51C8C7CEC0A32FABF3ED60E13FA5850B8A4 (const RuntimeMethod* method)
{
	return ((  List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * (*) (const RuntimeMethod*))ConcurrentCollectionPool_2_Get_m5921289FF248930ECD8DCEC5E80C6741AC68903F_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mE8128D89AB1F9C09262BA54E82CF98D2DA7AF2A3 (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// !0[] System.Collections.Generic.List`1<System.Reflection.MethodInfo>::ToArray()
inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* List_1_ToArray_m468D67D809EE62B01DDE4A0A739A36BAD219E2F0 (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * __this, const RuntimeMethod* method)
{
	return ((  MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* (*) (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void Baracuda.Pooling.Abstractions.ConcurrentCollectionPool`2<System.Collections.Generic.List`1<System.Reflection.MethodInfo>,System.Reflection.MethodInfo>::Release(!0)
inline void ConcurrentCollectionPool_2_Release_mA3363C1702BF0E9C3F12F5E22379CEB9D97E7086 (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * ___toRelease0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 *, const RuntimeMethod*))ConcurrentCollectionPool_2_Release_m11BAB9997C8E514AAFBEE01F31A61D3E0E10EE85_gshared)(___toRelease0, method);
}
// !0 Baracuda.Pooling.Abstractions.ConcurrentCollectionPool`2<System.Collections.Generic.List`1<System.Reflection.MemberInfo>,System.Reflection.MemberInfo>::Get()
inline List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * ConcurrentCollectionPool_2_Get_m0B2440B6157F055190D3916B89C3AB4A09016086 (const RuntimeMethod* method)
{
	return ((  List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * (*) (const RuntimeMethod*))ConcurrentCollectionPool_2_Get_m5921289FF248930ECD8DCEC5E80C6741AC68903F_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mFA0DE1D314F5BB462DF727E48669CD75EF51C264 (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// !0[] System.Collections.Generic.List`1<System.Reflection.MemberInfo>::ToArray()
inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* List_1_ToArray_m6F75A339123100E4CB18CFF7A06FC184EDEF9683 (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * __this, const RuntimeMethod* method)
{
	return ((  MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* (*) (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void Baracuda.Pooling.Abstractions.ConcurrentCollectionPool`2<System.Collections.Generic.List`1<System.Reflection.MemberInfo>,System.Reflection.MemberInfo>::Release(!0)
inline void ConcurrentCollectionPool_2_Release_m5E97F2524A060EFE169E2E9E6F93E0E77495F525 (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * ___toRelease0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 *, const RuntimeMethod*))ConcurrentCollectionPool_2_Release_m11BAB9997C8E514AAFBEE01F31A61D3E0E10EE85_gshared)(___toRelease0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::.ctor()
inline void Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27 (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Type>::.ctor()
inline void HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Add(!0)
inline bool HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6 (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * __this, Type_t * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *, Type_t *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::.ctor()
inline void Dictionary_2__ctor_m3EB3EB3FA9E674D490542CDED5CBE0876CF0A651 (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>::Add(!0,!1)
inline void Dictionary_2_Add_m4B5B9E3F4080B1F5CA9CDBC73439C4DFBBAE9B14 (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * __this, String_t* ___key0, MemberInfo_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD *, String_t*, MemberInfo_t *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>::.ctor()
inline void Dictionary_2__ctor_mD9198DB32EB268B2B200F0427C9DA107BC1BBFF9 (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::Add(!0,!1)
inline void Dictionary_2_Add_mEFC16E9C55BA4C60D7388C5B6EDD2252BD0E8482 (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * __this, Type_t * ___key0, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 *, Type_t *, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Baracuda.Reflection.ReflectionExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m54EB8B338C8F221E7CC559202997AD773EAC82F0 (U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m471FDAF5737609AC21BC3403301DE4BB20B737DC (String_t* ___s0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3^(int32_t)L_4)), (int32_t)((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Reflection.Assembly[] Baracuda.Reflection.AssemblyProfiler::GetFilteredAssemblies(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* AssemblyProfiler_GetFilteredAssemblies_m0476A53238D368A13541E56BE1884AC11D4D08AC (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___excludeNames0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___excludePrefixes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_1 = NULL;
	{
		// return GetFilteredAssembliesInternal(excludeNames ?? Array.Empty<string>(), excludePrefixes ?? Array.Empty<string>());
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___excludeNames0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline(/*hidden argument*/Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		G_B2_0 = L_2;
	}

IL_000a:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___excludePrefixes1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = G_B2_0;
			goto IL_0014;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5;
		L_5 = Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline(/*hidden argument*/Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var);
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_6;
		L_6 = AssemblyProfiler_GetFilteredAssembliesInternal_mFFB085B3F1917DEB5F1E0966DD8C0954450812A0_inline(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Reflection.Assembly[] Baracuda.Reflection.AssemblyProfiler::GetFilteredAssembliesInternal(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* AssemblyProfiler_GetFilteredAssembliesInternal_mFFB085B3F1917DEB5F1E0966DD8C0954450812A0 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___excludeNames0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___excludePrefixes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7DF0FFC189D95EEFE99C4A9E3EE47904F346434D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23D4BA538BA13A3A977CF1ECFAE956BC2D200900_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB663AB1DC0DB6B4D360A48453C83402B7750F24A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F * V_0 = NULL;
	AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (excludeNames == null)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___excludeNames0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(excludeNames));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC23F745A5F01C32298CF51EEA0749B852775358)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssemblyProfiler_GetFilteredAssembliesInternal_mFFB085B3F1917DEB5F1E0966DD8C0954450812A0_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (excludePrefixes == null)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___excludePrefixes1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// throw new ArgumentNullException(nameof(excludePrefixes));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral987B9B487877190C202FEE95CC46DE49CCA879AA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssemblyProfiler_GetFilteredAssembliesInternal_mFFB085B3F1917DEB5F1E0966DD8C0954450812A0_RuntimeMethod_var)));
	}

IL_001c:
	{
		// var filteredAssemblies = new List<Assembly>(30);
		List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F * L_4 = (List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F *)il2cpp_codegen_object_new(List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F_il2cpp_TypeInfo_var);
		List_1__ctor_mB663AB1DC0DB6B4D360A48453C83402B7750F24A(L_4, ((int32_t)30), /*hidden argument*/List_1__ctor_mB663AB1DC0DB6B4D360A48453C83402B7750F24A_RuntimeMethod_var);
		V_0 = L_4;
		// var assemblies = AppDomain.CurrentDomain.GetAssemblies();
		AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * L_5;
		L_5 = AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E(/*hidden argument*/NULL);
		NullCheck(L_5);
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_6;
		L_6 = AppDomain_GetAssemblies_m7397BD0461B4D6BA76AE0974DE9FBEDAF70AEBFD(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (var i = 0; i < assemblies.Length; i++)
		V_2 = 0;
		goto IL_004c;
	}

IL_0033:
	{
		// var assembly = assemblies[i];
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Assembly_t * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// if (assembly.IsAssemblyValid(excludeNames, excludePrefixes))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = ___excludeNames0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = ___excludePrefixes1;
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = AssemblyProfiler_IsAssemblyValid_mE9E6122EF4BC750D45D97DD6AA7B07C1FB0E9D0F(L_10, (RuntimeObject*)(RuntimeObject*)L_11, (RuntimeObject*)(RuntimeObject*)L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		// filteredAssemblies.Add(assemblies[i]);
		List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F * L_14 = V_0;
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Assembly_t * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		List_1_Add_m7DF0FFC189D95EEFE99C4A9E3EE47904F346434D(L_14, L_18, /*hidden argument*/List_1_Add_m7DF0FFC189D95EEFE99C4A9E3EE47904F346434D_RuntimeMethod_var);
	}

IL_0048:
	{
		// for (var i = 0; i < assemblies.Length; i++)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004c:
	{
		// for (var i = 0; i < assemblies.Length; i++)
		int32_t L_20 = V_2;
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0033;
		}
	}
	{
		// return filteredAssemblies.ToArray();
		List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F * L_22 = V_0;
		NullCheck(L_22);
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_23;
		L_23 = List_1_ToArray_m23D4BA538BA13A3A977CF1ECFAE956BC2D200900(L_22, /*hidden argument*/List_1_ToArray_m23D4BA538BA13A3A977CF1ECFAE956BC2D200900_RuntimeMethod_var);
		return L_23;
	}
}
// System.Boolean Baracuda.Reflection.AssemblyProfiler::IsAssemblyValid(System.Reflection.Assembly,System.Collections.Generic.IReadOnlyList`1<System.String>,System.Collections.Generic.IReadOnlyList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssemblyProfiler_IsAssemblyValid_mE9E6122EF4BC750D45D97DD6AA7B07C1FB0E9D0F (Assembly_t * ___assembly0, RuntimeObject* ___excludeNames1, RuntimeObject* ___excludePrefixes2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t80387D89E0F8D97849A5FBC8A0BFC0DAC0BB2FA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t8A22534532B8BFCBF574EE57E96049616329FF80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_HasAttribute_TisDisableAssemblyReflectionAttribute_tDC6B2590ED0210DC437F5FF57515361FFC7D9CBE_m79C43E17408646617EF5AB79FFBF84D367B8392E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	{
		// if (assembly.HasAttribute<DisableAssemblyReflectionAttribute>())
		Assembly_t * L_0 = ___assembly0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ReflectionExtensions_HasAttribute_TisDisableAssemblyReflectionAttribute_tDC6B2590ED0210DC437F5FF57515361FFC7D9CBE_m79C43E17408646617EF5AB79FFBF84D367B8392E(L_0, (bool)1, /*hidden argument*/ReflectionExtensions_HasAttribute_TisDisableAssemblyReflectionAttribute_tDC6B2590ED0210DC437F5FF57515361FFC7D9CBE_m79C43E17408646617EF5AB79FFBF84D367B8392E_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// var assemblyFullName = assembly.FullName;
		Assembly_t * L_2 = ___assembly0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_2);
		V_0 = L_3;
		// for (var i = 0; i < bannedAssemblyPrefixes.Length; i++)
		V_2 = 0;
		goto IL_0035;
	}

IL_0016:
	{
		// var prefix = bannedAssemblyPrefixes[i];
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ((AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_StaticFields*)il2cpp_codegen_static_fields_for(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var))->get_bannedAssemblyPrefixes_0();
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// if (!string.IsNullOrWhiteSpace(prefix) && assemblyFullName.StartsWith(prefix))
		String_t* L_8 = V_3;
		bool L_9;
		L_9 = String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_10 = V_0;
		String_t* L_11 = V_3;
		NullCheck(L_10);
		bool L_12;
		L_12 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0031;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0031:
	{
		// for (var i = 0; i < bannedAssemblyPrefixes.Length; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0035:
	{
		// for (var i = 0; i < bannedAssemblyPrefixes.Length; i++)
		int32_t L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = ((AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_StaticFields*)il2cpp_codegen_static_fields_for(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var))->get_bannedAssemblyPrefixes_0();
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		// for (var i = 0; i < excludePrefixes.Count; i++)
		V_4 = 0;
		goto IL_0069;
	}

IL_0044:
	{
		// var prefix = excludePrefixes[i];
		RuntimeObject* L_16 = ___excludePrefixes2;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<System.String>::get_Item(System.Int32) */, IReadOnlyList_1_t8A22534532B8BFCBF574EE57E96049616329FF80_il2cpp_TypeInfo_var, L_16, L_17);
		V_5 = L_18;
		// if (!string.IsNullOrWhiteSpace(prefix) && assemblyFullName.StartsWith(prefix))
		String_t* L_19 = V_5;
		bool L_20;
		L_20 = String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_21 = V_0;
		String_t* L_22 = V_5;
		NullCheck(L_21);
		bool L_23;
		L_23 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0063;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0063:
	{
		// for (var i = 0; i < excludePrefixes.Count; i++)
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0069:
	{
		// for (var i = 0; i < excludePrefixes.Count; i++)
		int32_t L_25 = V_4;
		RuntimeObject* L_26 = ___excludePrefixes2;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.String>::get_Count() */, IReadOnlyCollection_1_t80387D89E0F8D97849A5FBC8A0BFC0DAC0BB2FA7_il2cpp_TypeInfo_var, L_26);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0044;
		}
	}
	{
		// var assemblyShortName = assembly.GetName().Name;
		Assembly_t * L_28 = ___assembly0;
		NullCheck(L_28);
		AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824 * L_29;
		L_29 = VirtFuncInvoker0< AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824 * >::Invoke(16 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_28);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = AssemblyName_get_Name_m8558532350989A6DE33C188FD1A470187DFEA911_inline(L_29, /*hidden argument*/NULL);
		V_1 = L_30;
		// for (var i = 0; i < bannedAssemblyNames.Length; i++)
		V_6 = 0;
		goto IL_00a0;
	}

IL_0084:
	{
		// var name = bannedAssemblyNames[i];
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = ((AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_StaticFields*)il2cpp_codegen_static_fields_for(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var))->get_bannedAssemblyNames_1();
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		String_t* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_7 = L_34;
		// if (assemblyShortName == name)
		String_t* L_35 = V_1;
		String_t* L_36 = V_7;
		bool L_37;
		L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_009a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_009a:
	{
		// for (var i = 0; i < bannedAssemblyNames.Length; i++)
		int32_t L_38 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00a0:
	{
		// for (var i = 0; i < bannedAssemblyNames.Length; i++)
		int32_t L_39 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = ((AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_StaticFields*)il2cpp_codegen_static_fields_for(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var))->get_bannedAssemblyNames_1();
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0084;
		}
	}
	{
		// for (var i = 0; i < excludeNames.Count; i++)
		V_8 = 0;
		goto IL_00cc;
	}

IL_00b0:
	{
		// var name = excludeNames[i];
		RuntimeObject* L_41 = ___excludeNames1;
		int32_t L_42 = V_8;
		NullCheck(L_41);
		String_t* L_43;
		L_43 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<System.String>::get_Item(System.Int32) */, IReadOnlyList_1_t8A22534532B8BFCBF574EE57E96049616329FF80_il2cpp_TypeInfo_var, L_41, L_42);
		V_9 = L_43;
		// if (assemblyShortName == name)
		String_t* L_44 = V_1;
		String_t* L_45 = V_9;
		bool L_46;
		L_46 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_44, L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_00c6;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00c6:
	{
		// for (var i = 0; i < excludeNames.Count; i++)
		int32_t L_47 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00cc:
	{
		// for (var i = 0; i < excludeNames.Count; i++)
		int32_t L_48 = V_8;
		RuntimeObject* L_49 = ___excludeNames1;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.String>::get_Count() */, IReadOnlyCollection_1_t80387D89E0F8D97849A5FBC8A0BFC0DAC0BB2FA7_il2cpp_TypeInfo_var, L_49);
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_00b0;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Baracuda.Reflection.AssemblyProfiler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyProfiler__cctor_mE0D9F972CB715800ABEC144D88BD214D4CC8CDA4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08E36322C6909BA7D5E359346CB9865D7ACC6436);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2024BDFC61B150E6AC3937C8FF7C584207481F19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral333367166FE3823931285ABCABC2B018C554CC6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D6D8E86DBD851D1A807A44DC76915458B0CA61A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848A97F7360A08955AB3B08A739AFC04D590A51A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E4F4950D758CB892E288EFD25E487C0A27A7D3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBABD9227D6C69F52EAA129E77EFDDCA60D759DF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7F8833B1D1C15BE72D16AB61C891445A5F649A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC58B310513517CDBD557C46B0E45FE5C7B11872);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5AE18385283D6C5462AF087AEC09F611FA4015E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2CDFF92ABD4D491B88F9CD19FE5E614EE529C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF784248D4F987160AD49E300C16506516FD2D5D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string[] bannedAssemblyPrefixes = new string[]
		// {
		//     "Newtonsoft",
		//     "netstandard",
		//     "System",
		//     "Unity",
		//     "Microsoft",
		//     "Mono.",
		//     "mscorlib",
		//     "NSubstitute",
		//     "nunit.",
		//     "JetBrains",
		//     "GeNa."
		// };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral08E36322C6909BA7D5E359346CB9865D7ACC6436);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral08E36322C6909BA7D5E359346CB9865D7ACC6436);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral6D6D8E86DBD851D1A807A44DC76915458B0CA61A);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral6D6D8E86DBD851D1A807A44DC76915458B0CA61A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5FF374709F3F171D980E4E8BEA80A7954877FE64);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralDC58B310513517CDBD557C46B0E45FE5C7B11872);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDC58B310513517CDBD557C46B0E45FE5C7B11872);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralE5AE18385283D6C5462AF087AEC09F611FA4015E);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralE5AE18385283D6C5462AF087AEC09F611FA4015E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral848A97F7360A08955AB3B08A739AFC04D590A51A);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral848A97F7360A08955AB3B08A739AFC04D590A51A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralBABD9227D6C69F52EAA129E77EFDDCA60D759DF9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralBABD9227D6C69F52EAA129E77EFDDCA60D759DF9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral333367166FE3823931285ABCABC2B018C554CC6D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral333367166FE3823931285ABCABC2B018C554CC6D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral2024BDFC61B150E6AC3937C8FF7C584207481F19);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral2024BDFC61B150E6AC3937C8FF7C584207481F19);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralF784248D4F987160AD49E300C16506516FD2D5D4);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralF784248D4F987160AD49E300C16506516FD2D5D4);
		((AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_StaticFields*)il2cpp_codegen_static_fields_for(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var))->set_bannedAssemblyPrefixes_0(L_11);
		// private static readonly string[] bannedAssemblyNames = new string[]
		// {
		//     "mcs",
		//     "AssetStoreTools",
		//     "PPv2URPConverters"
		// };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralC7F8833B1D1C15BE72D16AB61C891445A5F649A7);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC7F8833B1D1C15BE72D16AB61C891445A5F649A7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral8E4F4950D758CB892E288EFD25E487C0A27A7D3A);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8E4F4950D758CB892E288EFD25E487C0A27A7D3A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralEC2CDFF92ABD4D491B88F9CD19FE5E614EE529C7);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEC2CDFF92ABD4D491B88F9CD19FE5E614EE529C7);
		((AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_StaticFields*)il2cpp_codegen_static_fields_for(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var))->set_bannedAssemblyNames_1(L_15);
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
// System.Void Baracuda.Reflection.DisableAssemblyReflectionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableAssemblyReflectionAttribute__ctor_mFCC4EB49EAAEB39413159C2A213B8A915D998FD9 (DisableAssemblyReflectionAttribute_tDC6B2590ED0210DC437F5FF57515361FFC7D9CBE * __this, const RuntimeMethod* method)
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
// System.Reflection.MethodInfo Baracuda.Reflection.ReflectionExtensions::GetInvokeMethod(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionExtensions_GetInvokeMethod_mC4FA3DAB4E6B0AE2629F95B0F703B2DB3CF9ABDE (Type_t * ___type0, int32_t ___flags1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type.GetMethod("Invoke", flags);
		Type_t * L_0 = ___type0;
		int32_t L_1 = ___flags1;
		NullCheck(L_0);
		MethodInfo_t * L_2;
		L_2 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_0, _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Reflection.FieldInfo Baracuda.Reflection.ReflectionExtensions::AsFieldInfo(System.Reflection.EventInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * ReflectionExtensions_AsFieldInfo_m125509830FC77EFC83CE4D49FD8FBCD968866659 (EventInfo_t * ___eventInfo0, const RuntimeMethod* method)
{
	Type_t * G_B2_0 = NULL;
	Type_t * G_B1_0 = NULL;
	{
		// return eventInfo.DeclaringType?.GetField(eventInfo.Name, EVENT_FLAGS);
		EventInfo_t * L_0 = ___eventInfo0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		Type_t * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000c;
		}
	}
	{
		return (FieldInfo_t *)NULL;
	}

IL_000c:
	{
		EventInfo_t * L_3 = ___eventInfo0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		NullCheck(G_B2_0);
		FieldInfo_t * L_5;
		L_5 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(42 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, G_B2_0, L_4, ((int32_t)124));
		return L_5;
	}
}
// System.Delegate Baracuda.Reflection.ReflectionExtensions::CreateMatchingDelegate(System.Reflection.MethodInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * ReflectionExtensions_CreateMatchingDelegate_mA1617A268863292B9DF09DF38D4E0B3972EB531F (MethodInfo_t * ___methodInfo0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisType_t_m413A4E5DEAA1E28CF48909C8802E2507977738CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_TisType_t_m44E870C102A4A7A2292D5BAE3F42EAE56CCF8706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_GetActionType_mB2149FF0863683C12CAB613047F7B65BE37A01C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_GetFuncType_mDD1BD8824C9A10940943E7F07B2D3EB9DDB51172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mB1917B0D55AD8BC6D29A8E885F252329C34F1B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m98C2790A1F81CB176570DA96E0EDF6F00AD6AEDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mFEE173F2E6F13D352AE7E8F0A74C3FD0230256D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateMatchingDelegateU3Eb__14_0_m4C9EB99B494AF24BA30E45309D18D0852F182320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * G_B2_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* G_B2_1 = NULL;
	bool G_B2_2 = false;
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * G_B1_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* G_B1_1 = NULL;
	bool G_B1_2 = false;
	{
		// var isVoid = methodInfo.ReturnType == typeof(void);
		MethodInfo_t * L_0 = ___methodInfo0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_0);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_3, /*hidden argument*/NULL);
		// var isStatic = methodInfo.IsStatic;
		MethodInfo_t * L_5 = ___methodInfo0;
		NullCheck(L_5);
		bool L_6;
		L_6 = MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// var types = methodInfo.GetParameters().Select(p => p.ParameterType);
		MethodInfo_t * L_7 = ___methodInfo0;
		NullCheck(L_7);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_8;
		L_8 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var);
		Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * L_9 = ((U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var))->get_U3CU3E9__14_0_1();
		Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * L_10 = L_9;
		G_B1_0 = L_10;
		G_B1_1 = L_8;
		G_B1_2 = L_4;
		if (L_10)
		{
			G_B2_0 = L_10;
			G_B2_1 = L_8;
			G_B2_2 = L_4;
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var);
		U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 * L_11 = ((U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * L_12 = (Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF *)il2cpp_codegen_object_new(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF_il2cpp_TypeInfo_var);
		Func_2__ctor_mFEE173F2E6F13D352AE7E8F0A74C3FD0230256D0(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateMatchingDelegateU3Eb__14_0_m4C9EB99B494AF24BA30E45309D18D0852F182320_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mFEE173F2E6F13D352AE7E8F0A74C3FD0230256D0_RuntimeMethod_var);
		Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * L_13 = L_12;
		((U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var))->set_U3CU3E9__14_0_1(L_13);
		G_B2_0 = L_13;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0041:
	{
		RuntimeObject* L_14;
		L_14 = Enumerable_Select_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_TisType_t_m44E870C102A4A7A2292D5BAE3F42EAE56CCF8706((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_TisType_t_m44E870C102A4A7A2292D5BAE3F42EAE56CCF8706_RuntimeMethod_var);
		V_2 = L_14;
		// if (isVoid)
		if (!G_B2_2)
		{
			goto IL_0058;
		}
	}
	{
		// getType = Expression.GetActionType;
		Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 * L_15 = (Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 *)il2cpp_codegen_object_new(Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477_il2cpp_TypeInfo_var);
		Func_2__ctor_m98C2790A1F81CB176570DA96E0EDF6F00AD6AEDE(L_15, NULL, (intptr_t)((intptr_t)Expression_GetActionType_mB2149FF0863683C12CAB613047F7B65BE37A01C8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m98C2790A1F81CB176570DA96E0EDF6F00AD6AEDE_RuntimeMethod_var);
		V_0 = L_15;
		// }
		goto IL_007b;
	}

IL_0058:
	{
		// getType = Expression.GetFuncType;
		Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 * L_16 = (Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 *)il2cpp_codegen_object_new(Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477_il2cpp_TypeInfo_var);
		Func_2__ctor_m98C2790A1F81CB176570DA96E0EDF6F00AD6AEDE(L_16, NULL, (intptr_t)((intptr_t)Expression_GetFuncType_mDD1BD8824C9A10940943E7F07B2D3EB9DDB51172_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m98C2790A1F81CB176570DA96E0EDF6F00AD6AEDE_RuntimeMethod_var);
		V_0 = L_16;
		// types = types.Concat(new[] {methodInfo.ReturnType});
		RuntimeObject* L_17 = V_2;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_18 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_19 = L_18;
		MethodInfo_t * L_20 = ___methodInfo0;
		NullCheck(L_20);
		Type_t * L_21;
		L_21 = VirtFuncInvoker0< Type_t * >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_20);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_21);
		RuntimeObject* L_22;
		L_22 = Enumerable_Concat_TisType_t_m413A4E5DEAA1E28CF48909C8802E2507977738CA(L_17, (RuntimeObject*)(RuntimeObject*)L_19, /*hidden argument*/Enumerable_Concat_TisType_t_m413A4E5DEAA1E28CF48909C8802E2507977738CA_RuntimeMethod_var);
		V_2 = L_22;
	}

IL_007b:
	{
		// return isStatic
		//     ? Delegate.CreateDelegate(getType(types.ToArray()), methodInfo)
		//     : Delegate.CreateDelegate(getType(types.ToArray()), target, methodInfo.Name);
		bool L_23 = V_1;
		if (L_23)
		{
			goto IL_0097;
		}
	}
	{
		Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 * L_24 = V_0;
		RuntimeObject* L_25 = V_2;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_26;
		L_26 = Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945(L_25, /*hidden argument*/Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
		NullCheck(L_24);
		Type_t * L_27;
		L_27 = Func_2_Invoke_mB1917B0D55AD8BC6D29A8E885F252329C34F1B17(L_24, L_26, /*hidden argument*/Func_2_Invoke_mB1917B0D55AD8BC6D29A8E885F252329C34F1B17_RuntimeMethod_var);
		RuntimeObject * L_28 = ___target1;
		MethodInfo_t * L_29 = ___methodInfo0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_29);
		Delegate_t * L_31;
		L_31 = Delegate_CreateDelegate_mD954193E6BDB389B280C40745D55EAD681576121(L_27, L_28, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_0097:
	{
		Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 * L_32 = V_0;
		RuntimeObject* L_33 = V_2;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_34;
		L_34 = Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945(L_33, /*hidden argument*/Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
		NullCheck(L_32);
		Type_t * L_35;
		L_35 = Func_2_Invoke_mB1917B0D55AD8BC6D29A8E885F252329C34F1B17(L_32, L_34, /*hidden argument*/Func_2_Invoke_mB1917B0D55AD8BC6D29A8E885F252329C34F1B17_RuntimeMethod_var);
		MethodInfo_t * L_36 = ___methodInfo0;
		Delegate_t * L_37;
		L_37 = Delegate_CreateDelegate_m4B6F4C6A4A3C1B2C55CD01FEA15E0C801CADCB24(L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}
}
// System.Delegate Baracuda.Reflection.ReflectionExtensions::CreateMatchingDelegate(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * ReflectionExtensions_CreateMatchingDelegate_m948AF1C51114A4977CB3A34BC9462EEED274C291 (MethodInfo_t * ___methodInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisType_t_m413A4E5DEAA1E28CF48909C8802E2507977738CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_TisType_t_m44E870C102A4A7A2292D5BAE3F42EAE56CCF8706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_GetActionType_mB2149FF0863683C12CAB613047F7B65BE37A01C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_GetFuncType_mDD1BD8824C9A10940943E7F07B2D3EB9DDB51172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mB1917B0D55AD8BC6D29A8E885F252329C34F1B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m98C2790A1F81CB176570DA96E0EDF6F00AD6AEDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mFEE173F2E6F13D352AE7E8F0A74C3FD0230256D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateMatchingDelegateU3Eb__15_0_m1CE715A59C851A68BE512444EABE23C0DC43A628_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * G_B2_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* G_B2_1 = NULL;
	bool G_B2_2 = false;
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * G_B1_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* G_B1_1 = NULL;
	bool G_B1_2 = false;
	{
		// var isVoid = methodInfo.ReturnType == typeof(void);
		MethodInfo_t * L_0 = ___methodInfo0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_0);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_3, /*hidden argument*/NULL);
		// var types = methodInfo.GetParameters().Select(p => p.ParameterType);
		MethodInfo_t * L_5 = ___methodInfo0;
		NullCheck(L_5);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_6;
		L_6 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var);
		Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * L_7 = ((U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var))->get_U3CU3E9__15_0_2();
		Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = L_6;
		G_B1_2 = L_4;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_6;
			G_B2_2 = L_4;
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var);
		U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 * L_9 = ((U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * L_10 = (Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF *)il2cpp_codegen_object_new(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF_il2cpp_TypeInfo_var);
		Func_2__ctor_mFEE173F2E6F13D352AE7E8F0A74C3FD0230256D0(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateMatchingDelegateU3Eb__15_0_m1CE715A59C851A68BE512444EABE23C0DC43A628_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mFEE173F2E6F13D352AE7E8F0A74C3FD0230256D0_RuntimeMethod_var);
		Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * L_11 = L_10;
		((U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var))->set_U3CU3E9__15_0_2(L_11);
		G_B2_0 = L_11;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_003a:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_Select_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_TisType_t_m44E870C102A4A7A2292D5BAE3F42EAE56CCF8706((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_TisType_t_m44E870C102A4A7A2292D5BAE3F42EAE56CCF8706_RuntimeMethod_var);
		V_1 = L_12;
		// if (isVoid)
		if (!G_B2_2)
		{
			goto IL_0051;
		}
	}
	{
		// getType = Expression.GetActionType;
		Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 * L_13 = (Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 *)il2cpp_codegen_object_new(Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477_il2cpp_TypeInfo_var);
		Func_2__ctor_m98C2790A1F81CB176570DA96E0EDF6F00AD6AEDE(L_13, NULL, (intptr_t)((intptr_t)Expression_GetActionType_mB2149FF0863683C12CAB613047F7B65BE37A01C8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m98C2790A1F81CB176570DA96E0EDF6F00AD6AEDE_RuntimeMethod_var);
		V_0 = L_13;
		// }
		goto IL_0074;
	}

IL_0051:
	{
		// getType = Expression.GetFuncType;
		Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 * L_14 = (Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 *)il2cpp_codegen_object_new(Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477_il2cpp_TypeInfo_var);
		Func_2__ctor_m98C2790A1F81CB176570DA96E0EDF6F00AD6AEDE(L_14, NULL, (intptr_t)((intptr_t)Expression_GetFuncType_mDD1BD8824C9A10940943E7F07B2D3EB9DDB51172_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m98C2790A1F81CB176570DA96E0EDF6F00AD6AEDE_RuntimeMethod_var);
		V_0 = L_14;
		// types = types.Concat(new[] {methodInfo.ReturnType});
		RuntimeObject* L_15 = V_1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_16 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_17 = L_16;
		MethodInfo_t * L_18 = ___methodInfo0;
		NullCheck(L_18);
		Type_t * L_19;
		L_19 = VirtFuncInvoker0< Type_t * >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_19);
		RuntimeObject* L_20;
		L_20 = Enumerable_Concat_TisType_t_m413A4E5DEAA1E28CF48909C8802E2507977738CA(L_15, (RuntimeObject*)(RuntimeObject*)L_17, /*hidden argument*/Enumerable_Concat_TisType_t_m413A4E5DEAA1E28CF48909C8802E2507977738CA_RuntimeMethod_var);
		V_1 = L_20;
	}

IL_0074:
	{
		// return Delegate.CreateDelegate(getType(types.ToArray()), methodInfo);
		Func_2_t608F94EAED261D46D4C3DF4590896FCBFB430477 * L_21 = V_0;
		RuntimeObject* L_22 = V_1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_23;
		L_23 = Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945(L_22, /*hidden argument*/Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
		NullCheck(L_21);
		Type_t * L_24;
		L_24 = Func_2_Invoke_mB1917B0D55AD8BC6D29A8E885F252329C34F1B17(L_21, L_23, /*hidden argument*/Func_2_Invoke_mB1917B0D55AD8BC6D29A8E885F252329C34F1B17_RuntimeMethod_var);
		MethodInfo_t * L_25 = ___methodInfo0;
		Delegate_t * L_26;
		L_26 = Delegate_CreateDelegate_m4B6F4C6A4A3C1B2C55CD01FEA15E0C801CADCB24(L_24, L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsNumeric(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsNumeric_m5112B4520809DF16481E4FA9F209936177F719A6 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return numericTypes.Contains(type) || numericTypes.Contains(Nullable.GetUnderlyingType(type));
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_0 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_numericTypes_2();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3(L_0, L_1, /*hidden argument*/HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_3 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_numericTypes_2();
		Type_t * L_4 = ___type0;
		Type_t * L_5;
		L_5 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3(L_3, L_5, /*hidden argument*/HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var);
		return L_6;
	}

IL_001e:
	{
		return (bool)1;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsFloatingPoint(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsFloatingPoint_m02A54742B05FA267EAD1B7BBF912ABE14BCEABCF (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return decimalTypes.Contains(type) || decimalTypes.Contains(Nullable.GetUnderlyingType(type));
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_0 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_decimalTypes_4();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3(L_0, L_1, /*hidden argument*/HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_3 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_decimalTypes_4();
		Type_t * L_4 = ___type0;
		Type_t * L_5;
		L_5 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3(L_3, L_5, /*hidden argument*/HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var);
		return L_6;
	}

IL_001e:
	{
		return (bool)1;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsInteger(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsInteger_m30DB2FFC40D66592256FFF67DF695C34D0782549 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return integerTypes.Contains(type) || integerTypes.Contains(Nullable.GetUnderlyingType(type));
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_0 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_integerTypes_3();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3(L_0, L_1, /*hidden argument*/HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_3 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_integerTypes_3();
		Type_t * L_4 = ___type0;
		Type_t * L_5;
		L_5 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3(L_3, L_5, /*hidden argument*/HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var);
		return L_6;
	}

IL_001e:
	{
		return (bool)1;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsInt32(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsInt32_mF553A57DFC8B0A0E78BEB32C265E242F4E3E4B7A (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type == typeof(int);
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsInt64(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsInt64_mA6D7B256D5EEE6D2E9F981D31CB50D5EDECFCF5E (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type == typeof(long);
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsSingle(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsSingle_mB9CCCA4F02A397EA973E355F4D19B803166A49D4 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type == typeof(float);
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsDouble(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsDouble_mC331BEE421363D04B987D50363DC28D300770E31 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type == typeof(float);
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsString(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsString_mD66B585D4CA20C3376BB57497BD8D1A46CBED89E (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type == typeof(string);
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsStruct(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsStruct_mF784D4674A222ADECE5403EA31D581358B66D20B (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		// return type.IsValueType && !type.IsEnum && !type.IsPrimitive;
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(74 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_4, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsReadonlyRefStruct(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsReadonlyRefStruct_mEA3FDBDAE3483B8B4A33AB6AFA0944FD4919635A (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type.IsStruct() && type.IsByRef;
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ReflectionExtensions_IsStruct_mF784D4674A222ADECE5403EA31D581358B66D20B_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsByRef_mDB28F5482F9AE4407101B294CD3ADB01106CA4A3(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsStatic(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsStatic_mFF67FE738DDFF8C1416924D8FB991C775834D529 (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		// return type.IsAbstract && type.IsSealed;
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsSealed_m688591A832F192E584223CFA48F37EA06C0C0AA5(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsList(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsList_m246652F9F8B74FF3B09134225B714D5E995D74E0 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2F377D93C74B8090B226DCC307AB5BB600181453_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type.IsGenericType && type.GetGenericTypeDefinition() == typeof(List<>);
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (List_1_t2F377D93C74B8090B226DCC307AB5BB600181453_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001e:
	{
		return (bool)0;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsDictionary(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsDictionary_mE5DE60B8A3B44E9BA0562A68E8174026192A3754 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t58021767EFD70313A4DB609BB2EC63167C586EDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type.IsGenericType && type.GetGenericTypeDefinition() == typeof(Dictionary<,>);
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (Dictionary_2_t58021767EFD70313A4DB609BB2EC63167C586EDE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001e:
	{
		return (bool)0;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsStack(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsStack_mF778598D439EB84F62CB607641CBB44954729991 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t8B41AD867BA211178643B3152EFA0052D0D10E8A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type.IsGenericType && type.GetGenericTypeDefinition() == typeof(Stack<>);
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (Stack_1_t8B41AD867BA211178643B3152EFA0052D0D10E8A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001e:
	{
		return (bool)0;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsIEnumerable(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsIEnumerable_m7C62D2D4AB061DD573D80F408D78EDDD04FB7AF6 (Type_t * ___type0, bool ___excludeStrings1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84151DE9802C0943FEB2C77FEF117D8E1026B86A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return excludeStrings
		//     ? type.GetInterface(nameof(IEnumerable)) != null && !type.IsString()
		//     : type.GetInterface(nameof(IEnumerable)) != null;
		bool L_0 = ___excludeStrings1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = ___type0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Type_GetInterface_m1241E49F8C5AD57533E962F9D3B62751DAF7D18A(L_1, _stringLiteral84151DE9802C0943FEB2C77FEF117D8E1026B86A, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Type_GetInterface_m1241E49F8C5AD57533E962F9D3B62751DAF7D18A(L_4, _stringLiteral84151DE9802C0943FEB2C77FEF117D8E1026B86A, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		Type_t * L_7 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = ReflectionExtensions_IsString_mD66B585D4CA20C3376BB57497BD8D1A46CBED89E_inline(L_7, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		return (bool)0;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsGenericIEnumerable(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsGenericIEnumerable_m119B930C4016643672F5C41E9D373EF7C709FB91 (Type_t * ___type0, bool ___excludeStrings1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	{
		// if (excludeStrings && type.IsString())
		bool L_0 = ___excludeStrings1;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		Type_t * L_1 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = ReflectionExtensions_IsString_mD66B585D4CA20C3376BB57497BD8D1A46CBED89E_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000d:
	{
		// if (type.IsInterface && type.GetGenericTypeDefinition() == typeof(IEnumerable<>))
		Type_t * L_3 = ___type0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_5 = ___type0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_5);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// for (var i = 0; i < type.GetInterfaces().Length; i++)
		V_0 = 0;
		goto IL_0060;
	}

IL_0032:
	{
		// var interfaceType = type.GetInterfaces()[i];
		Type_t * L_10 = ___type0;
		NullCheck(L_10);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_11;
		L_11 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(47 /* System.Type[] System.Type::GetInterfaces() */, L_10);
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Type_t * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_1 = L_14;
		// if (interfaceType.IsGenericType && interfaceType.GetGenericTypeDefinition() == typeof(IEnumerable<>))
		Type_t * L_15 = V_1;
		NullCheck(L_15);
		bool L_16;
		L_16 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericType() */, L_15);
		if (!L_16)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_17 = V_1;
		NullCheck(L_17);
		Type_t * L_18;
		L_18 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_17);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		bool L_21;
		L_21 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_18, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_005c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_005c:
	{
		// for (var i = 0; i < type.GetInterfaces().Length; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0060:
	{
		// for (var i = 0; i < type.GetInterfaces().Length; i++)
		int32_t L_23 = V_0;
		Type_t * L_24 = ___type0;
		NullCheck(L_24);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_25;
		L_25 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(47 /* System.Type[] System.Type::GetInterfaces() */, L_24);
		NullCheck(L_25);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_0032;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsGenericIDictionary(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsGenericIDictionary_mD7974A728B4A135C0A227B3D4C8B29ECADD08921 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	{
		// if (type.IsInterface && type.GetGenericTypeDefinition() == typeof(IDictionary<,>))
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0021:
	{
		// for (var i = 0; i < type.GetInterfaces().Length; i++)
		V_0 = 0;
		goto IL_0053;
	}

IL_0025:
	{
		// var interfaceType = type.GetInterfaces()[i];
		Type_t * L_7 = ___type0;
		NullCheck(L_7);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8;
		L_8 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(47 /* System.Type[] System.Type::GetInterfaces() */, L_7);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Type_t * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		// if (interfaceType.IsGenericType && interfaceType.GetGenericTypeDefinition() == typeof(IDictionary<,>))
		Type_t * L_12 = V_1;
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericType() */, L_12);
		if (!L_13)
		{
			goto IL_004f;
		}
	}
	{
		Type_t * L_14 = V_1;
		NullCheck(L_14);
		Type_t * L_15;
		L_15 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_14);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_16, /*hidden argument*/NULL);
		bool L_18;
		L_18 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_15, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_004f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// for (var i = 0; i < type.GetInterfaces().Length; i++)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0053:
	{
		// for (var i = 0; i < type.GetInterfaces().Length; i++)
		int32_t L_20 = V_0;
		Type_t * L_21 = ___type0;
		NullCheck(L_21);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_22;
		L_22 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(47 /* System.Type[] System.Type::GetInterfaces() */, L_21);
		NullCheck(L_22);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsGenericIList(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsGenericIList_mC0CB0AAAFB0F4FFC69BFF10A29A3BB5F6A38F70B (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCFBEF0BE66D2411D5AEA86FDF1C1E71F013AA724_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t * V_2 = NULL;
	{
		// if (type.IsInterface && type.GetGenericTypeDefinition() == typeof(IList<>))
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IList_1_tCFBEF0BE66D2411D5AEA86FDF1C1E71F013AA724_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0021:
	{
		// var interfaces = type.GetInterfaces();
		Type_t * L_7 = ___type0;
		NullCheck(L_7);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8;
		L_8 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(47 /* System.Type[] System.Type::GetInterfaces() */, L_7);
		V_0 = L_8;
		// for (var i = 0; i < interfaces.Length; i++)
		V_1 = 0;
		goto IL_0055;
	}

IL_002c:
	{
		// var @interface = interfaces[i];
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Type_t * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		// if (@interface.IsGenericType && @interface.GetGenericTypeDefinition() == typeof(IList<>))
		Type_t * L_13 = V_2;
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericType() */, L_13);
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		Type_t * L_15 = V_2;
		NullCheck(L_15);
		Type_t * L_16;
		L_16 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_15);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (IList_1_tCFBEF0BE66D2411D5AEA86FDF1C1E71F013AA724_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0051;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0051:
	{
		// for (var i = 0; i < interfaces.Length; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0055:
	{
		// for (var i = 0; i < interfaces.Length; i++)
		int32_t L_21 = V_1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsAccessible(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsAccessible_m57A62C3DABAD5854601FC16107EB9F1A9401CE38 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t * V_2 = NULL;
	{
		// var baseTypes = type.GetDeclaringTypes(true);
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1;
		L_1 = ReflectionExtensions_GetDeclaringTypes_mD791FB22FF6281FB2F04F0CCDB1FE74BE8C273B4(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		// for (var i = 0; i < baseTypes.Length; i++)
		V_1 = 0;
		goto IL_0026;
	}

IL_000c:
	{
		// var baseType = baseTypes[i];
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Type_t * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (!baseType.IsPublic && !baseType.IsNestedPublic)
		Type_t * L_6 = V_2;
		NullCheck(L_6);
		bool L_7;
		L_7 = Type_get_IsPublic_mE4BAD3A9E7F21231E4A579F7CF8F2DE4C5E8E0AC(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_8 = V_2;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsNestedPublic_m699F4C8E5B0FEE0197BE12CD1A4143421B51E820(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0022:
	{
		// for (var i = 0; i < baseTypes.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0026:
	{
		// for (var i = 0; i < baseTypes.Length; i++)
		int32_t L_11 = V_1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_000c;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsVector(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsVector_m8B9180A73F9E4D904A8C37970F3F946C34FF41F2 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (type == typeof(Vector2) || type == typeof(Vector3) || type == typeof(Vector4));
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		Type_t * L_4 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_4, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		Type_t * L_8 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_8, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0035:
	{
		return (bool)1;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsVectorInt(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsVectorInt_m47AB11458362D3E346C5EC24E06C0CCDA2D2E73A (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (type == typeof(Vector2Int) || type == typeof(Vector3Int));
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		Type_t * L_4 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0023:
	{
		return (bool)1;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsColor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsColor_m21BB4125C858061684077E60191C4E48504FC04B (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (type == typeof(Color) || type == typeof(Color32));
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		Type_t * L_4 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0023:
	{
		return (bool)1;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsDelegate(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsDelegate_mAE56C005EB3CB9A4613E1283FFCB43CD31D4164B (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(Delegate).IsAssignableFrom(type.BaseType);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Delegate_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		return L_4;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsSubclassOrAssignable(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsSubclassOrAssignable_m67814752DFC95ACCD14A8B0353AEA159491C2B1E (Type_t * ___type0, Type_t * ___inheritsFrom1, const RuntimeMethod* method)
{
	{
		// return type.IsSubclassOf(inheritsFrom) || type.IsAssignableFrom(inheritsFrom);
		Type_t * L_0 = ___type0;
		Type_t * L_1 = ___inheritsFrom1;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, Type_t * >::Invoke(111 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		Type_t * L_3 = ___type0;
		Type_t * L_4 = ___inheritsFrom1;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_3, L_4);
		return L_5;
	}

IL_0011:
	{
		return (bool)1;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions::IsSubclassOfRawGeneric(System.Type,System.Type,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsSubclassOfRawGeneric_mC7E2DB8AE3C687E87C3760A09A7B0E57FEAE81F1 (Type_t * ___toCheck0, Type_t * ___generic1, bool ___includeSelf2, int32_t ___maxDepth3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	Type_t * G_B7_0 = NULL;
	{
		// if (!includeSelf && toCheck == generic)
		bool L_0 = ___includeSelf2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Type_t * L_1 = ___toCheck0;
		Type_t * L_2 = ___generic1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000e:
	{
		// var index = 0;
		V_0 = 0;
		goto IL_0041;
	}

IL_0012:
	{
		// var current = toCheck.IsGenericType ? toCheck.GetGenericTypeDefinition() : toCheck;
		Type_t * L_4 = ___toCheck0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (L_5)
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_6 = ___toCheck0;
		G_B7_0 = L_6;
		goto IL_0023;
	}

IL_001d:
	{
		Type_t * L_7 = ___toCheck0;
		NullCheck(L_7);
		Type_t * L_8;
		L_8 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_7);
		G_B7_0 = L_8;
	}

IL_0023:
	{
		V_1 = G_B7_0;
		// if (generic == current)
		Type_t * L_9 = ___generic1;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_002f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// toCheck = toCheck.BaseType;
		Type_t * L_12 = ___toCheck0;
		NullCheck(L_12);
		Type_t * L_13;
		L_13 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_12);
		___toCheck0 = L_13;
		// if (index++ > maxDepth)
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = ___maxDepth3;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_0041;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0041:
	{
		// while (toCheck != null && toCheck != typeof(object))
		Type_t * L_17 = ___toCheck0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_17, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_19 = ___toCheck0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21;
		L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
		bool L_22;
		L_22 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_19, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0012;
		}
	}

IL_005c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Type Baracuda.Reflection.ReflectionExtensions::GetUnderlying(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ReflectionExtensions_GetUnderlying_m4ED0CFC59A0566A8BC1587E4FA8F69488A5115B4 (Type_t * ___nullableType0, const RuntimeMethod* method)
{
	Type_t * G_B2_0 = NULL;
	Type_t * G_B1_0 = NULL;
	{
		// => Nullable.GetUnderlyingType(nullableType) ?? nullableType;
		Type_t * L_0 = ___nullableType0;
		Type_t * L_1;
		L_1 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_0, /*hidden argument*/NULL);
		Type_t * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000b;
		}
	}
	{
		Type_t * L_3 = ___nullableType0;
		G_B2_0 = L_3;
	}

IL_000b:
	{
		return G_B2_0;
	}
}
// System.Type Baracuda.Reflection.ReflectionExtensions::GetEnumerableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ReflectionExtensions_GetEnumerableType_m4B98394DF5AB42C8A6C66AB51B7966DD0491F27E (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetEnumerableTypeU3Eb__47_0_mAE9CCD695998C1A8FAD15F4CC57948E23E4BCF64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * G_B7_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B7_1 = NULL;
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * G_B6_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B6_1 = NULL;
	Type_t * G_B9_0 = NULL;
	Type_t * G_B8_0 = NULL;
	{
		// if (type == null)
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_mEF0800D4AF607E61714C92A76911B4780C4D0A29(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionExtensions_GetEnumerableType_m4B98394DF5AB42C8A6C66AB51B7966DD0491F27E_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (type.IsGenericType && type.GetGenericTypeDefinition() == typeof(IEnumerable<>))
		Type_t * L_3 = ___type0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericType() */, L_3);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		Type_t * L_5 = ___type0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_5);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		// return type.GetGenericArguments()[0];
		Type_t * L_10 = ___type0;
		NullCheck(L_10);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_11;
		L_11 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(102 /* System.Type[] System.Type::GetGenericArguments() */, L_10);
		NullCheck(L_11);
		int32_t L_12 = 0;
		Type_t * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		return L_13;
	}

IL_0037:
	{
		// var face = (from i in type.GetInterfaces()
		//     where i.IsGenericType && i.GetGenericTypeDefinition() == typeof(IEnumerable<>)
		//     select i).FirstOrDefault();
		Type_t * L_14 = ___type0;
		NullCheck(L_14);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_15;
		L_15 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(47 /* System.Type[] System.Type::GetInterfaces() */, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var);
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_16 = ((U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var))->get_U3CU3E9__47_0_3();
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_17 = L_16;
		G_B6_0 = L_17;
		G_B6_1 = L_15;
		if (L_17)
		{
			G_B7_0 = L_17;
			G_B7_1 = L_15;
			goto IL_005c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var);
		U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 * L_18 = ((U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_19 = (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *)il2cpp_codegen_object_new(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D(L_19, L_18, (intptr_t)((intptr_t)U3CU3Ec_U3CGetEnumerableTypeU3Eb__47_0_mAE9CCD695998C1A8FAD15F4CC57948E23E4BCF64_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_20 = L_19;
		((U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var))->set_U3CU3E9__47_0_3(L_20);
		G_B7_0 = L_20;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		RuntimeObject* L_21;
		L_21 = Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753((RuntimeObject*)(RuntimeObject*)G_B7_1, G_B7_0, /*hidden argument*/Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		Type_t * L_22;
		L_22 = Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727(L_21, /*hidden argument*/Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727_RuntimeMethod_var);
		// if (face == null)
		Type_t * L_23 = L_22;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_23, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B8_0 = L_23;
		if (!L_24)
		{
			G_B9_0 = L_23;
			goto IL_007f;
		}
	}
	{
		// throw new ArgumentException("Does not represent an enumerable type.", "type");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_25 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral712F33D9E400722539C857AE7446D579F1115962)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionExtensions_GetEnumerableType_m4B98394DF5AB42C8A6C66AB51B7966DD0491F27E_RuntimeMethod_var)));
	}

IL_007f:
	{
		// return GetEnumerableType(face);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = ReflectionExtensions_GetEnumerableType_m4B98394DF5AB42C8A6C66AB51B7966DD0491F27E(G_B9_0, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Type Baracuda.Reflection.ReflectionExtensions::GetMemberUnderlyingType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ReflectionExtensions_GetMemberUnderlyingType_m514EFF936F3A99ED547E12C8431EBFDEE2530B5F (MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (member.MemberType)
		MemberInfo_t * L_0 = ___member0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)16))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_003a;
	}

IL_0016:
	{
		// return ((FieldInfo) member).FieldType;
		MemberInfo_t * L_5 = ___member0;
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_5, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_5, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_6;
	}

IL_0022:
	{
		// return ((PropertyInfo) member).PropertyType;
		MemberInfo_t * L_7 = ___member0;
		NullCheck(((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_7, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_8;
		L_8 = VirtFuncInvoker0< Type_t * >::Invoke(21 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_7, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_8;
	}

IL_002e:
	{
		// return ((EventInfo) member).EventHandlerType;
		MemberInfo_t * L_9 = ___member0;
		NullCheck(((EventInfo_t *)CastclassClass((RuntimeObject*)L_9, EventInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_10;
		L_10 = VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.EventInfo::get_EventHandlerType() */, ((EventInfo_t *)CastclassClass((RuntimeObject*)L_9, EventInfo_t_il2cpp_TypeInfo_var)));
		return L_10;
	}

IL_003a:
	{
		// throw new ArgumentException("MemberInfo must be if type FieldInfo, PropertyInfo or EventInfo",
		//     nameof(member));
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC2EE18D39AEBF678C806F61D16E38AA1A8B2849)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4784CA4E159D86F8767CCC55143536AF34801074)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionExtensions_GetMemberUnderlyingType_m514EFF936F3A99ED547E12C8431EBFDEE2530B5F_RuntimeMethod_var)));
	}
}
// System.String Baracuda.Reflection.ReflectionExtensions::GetEventSignatureString(System.Reflection.EventInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_GetEventSignatureString_m97F167D1F57B73735FAECCFCF4ACD265373D8E7C (EventInfo_t * ___eventInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F26962BBF0AB64227DC46C547E0AB86DE47E540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	MethodInfo_t * G_B2_0 = NULL;
	MethodInfo_t * G_B1_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* G_B3_0 = NULL;
	{
		// var methodInfo = eventInfo.EventHandlerType.GetMethod("Invoke");
		EventInfo_t * L_0 = ___eventInfo0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.EventInfo::get_EventHandlerType() */, L_0);
		NullCheck(L_1);
		MethodInfo_t * L_2;
		L_2 = Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF(L_1, _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2, /*hidden argument*/NULL);
		// var parameters = methodInfo?.GetParameters();
		MethodInfo_t * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0017;
		}
	}
	{
		G_B3_0 = ((ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B*)(NULL));
		goto IL_001c;
	}

IL_0017:
	{
		NullCheck(G_B2_0);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_4;
		L_4 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, G_B2_0);
		G_B3_0 = L_4;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		// var formatted = $"{eventInfo.Name}(";
		EventInfo_t * L_5 = ___eventInfo0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		V_1 = L_7;
		// if (parameters == null || parameters.Length == 0)
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_9 = V_0;
		NullCheck(L_9);
		if ((((RuntimeArray*)L_9)->max_length))
		{
			goto IL_0041;
		}
	}

IL_0035:
	{
		// return $"{formatted}void)";
		String_t* L_10 = V_1;
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_10, _stringLiteral0F26962BBF0AB64227DC46C547E0AB86DE47E540, /*hidden argument*/NULL);
		return L_11;
	}

IL_0041:
	{
		// for (var i = 0; i < parameters.Length; i++)
		V_2 = 0;
		goto IL_0089;
	}

IL_0045:
	{
		// formatted = $"{formatted}{parameters[i].ParameterType.Name.ToTypeKeyWord()} {parameters[i].Name}, ";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		String_t* L_14 = V_1;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_13;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_16 = V_0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Type_t * L_20;
		L_20 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_19);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		String_t* L_22;
		L_22 = ReflectionExtensions_ToTypeKeyWord_mC1543509E0F8949EEFC790FACE110666AD51B457_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_22);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_22);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_15;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_25 = V_0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_28);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_29);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_29);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_24;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		String_t* L_31;
		L_31 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_30, /*hidden argument*/NULL);
		V_1 = L_31;
		// for (var i = 0; i < parameters.Length; i++)
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0089:
	{
		// for (var i = 0; i < parameters.Length; i++)
		int32_t L_33 = V_2;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		// return $"{formatted.Remove(formatted.Length - 2, 2)})";
		String_t* L_35 = V_1;
		String_t* L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_38;
		L_38 = String_Remove_mA7DE3D6FE3344FD65108B33BD1DE8020D22ADAC0(L_35, ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)2)), 2, /*hidden argument*/NULL);
		String_t* L_39;
		L_39 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_38, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		return L_39;
	}
}
// System.String Baracuda.Reflection.ReflectionExtensions::GetSignatureString(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_GetSignatureString_mCB8BB5659986B87577D955306D76D98645FFE4B7 (MethodInfo_t * ___methodInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_0 = NULL;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// var parameters = methodInfo.GetParameters();
		MethodInfo_t * L_0 = ___methodInfo0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1;
		L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		V_0 = L_1;
		// var stringBuilder = ConcurrentStringBuilderPool.GetDisposable();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9  L_2;
		L_2 = ConcurrentStringBuilderPool_GetDisposable_m80DC1A3AECB527640B4416FB8B80A4570CCA2E53(/*hidden argument*/NULL);
		V_1 = L_2;
		// stringBuilder.Append(methodInfo.ReturnType.Name);
		MethodInfo_t * L_3 = ___methodInfo0;
		NullCheck(L_3);
		Type_t * L_4;
		L_4 = VirtFuncInvoker0< Type_t * >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		StringBuilder_t * L_6;
		L_6 = PooledStringBuilder_Append_m6A9F30F50501260FD67DAFCAE70446DAA6B29B11_inline((PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *)(&V_1), L_5, /*hidden argument*/NULL);
		// if (parameters.Any())
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_7 = V_0;
		bool L_8;
		L_8 = Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F((RuntimeObject*)(RuntimeObject*)L_7, /*hidden argument*/Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_009f;
		}
	}
	{
		// stringBuilder.Append(' ');
		StringBuilder_t * L_9;
		L_9 = PooledStringBuilder_Append_mF4FAD12F83A60C44901A6B5E6E01B23C40088864_inline((PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *)(&V_1), ((int32_t)32), /*hidden argument*/NULL);
		// stringBuilder.Append('(');
		StringBuilder_t * L_10;
		L_10 = PooledStringBuilder_Append_mF4FAD12F83A60C44901A6B5E6E01B23C40088864_inline((PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *)(&V_1), ((int32_t)40), /*hidden argument*/NULL);
		// for (var i = 0; i < parameters.Length; i++)
		V_2 = 0;
		goto IL_008f;
	}

IL_0040:
	{
		// stringBuilder.Append(parameters[i].ParameterType.Name);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Type_t * L_15;
		L_15 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_14);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		StringBuilder_t * L_17;
		L_17 = PooledStringBuilder_Append_m6A9F30F50501260FD67DAFCAE70446DAA6B29B11_inline((PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *)(&V_1), L_16, /*hidden argument*/NULL);
		// stringBuilder.Append(' ');
		StringBuilder_t * L_18;
		L_18 = PooledStringBuilder_Append_mF4FAD12F83A60C44901A6B5E6E01B23C40088864_inline((PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *)(&V_1), ((int32_t)32), /*hidden argument*/NULL);
		// stringBuilder.Append(parameters[i].Name);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_19 = V_0;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_22);
		StringBuilder_t * L_24;
		L_24 = PooledStringBuilder_Append_m6A9F30F50501260FD67DAFCAE70446DAA6B29B11_inline((PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *)(&V_1), L_23, /*hidden argument*/NULL);
		// if (i != parameters.Length - 1)
		int32_t L_25 = V_2;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))), (int32_t)1)))))
		{
			goto IL_008b;
		}
	}
	{
		// stringBuilder.Append(',');
		StringBuilder_t * L_27;
		L_27 = PooledStringBuilder_Append_mF4FAD12F83A60C44901A6B5E6E01B23C40088864_inline((PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *)(&V_1), ((int32_t)44), /*hidden argument*/NULL);
		// stringBuilder.Append(' ');
		StringBuilder_t * L_28;
		L_28 = PooledStringBuilder_Append_mF4FAD12F83A60C44901A6B5E6E01B23C40088864_inline((PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *)(&V_1), ((int32_t)32), /*hidden argument*/NULL);
	}

IL_008b:
	{
		// for (var i = 0; i < parameters.Length; i++)
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_008f:
	{
		// for (var i = 0; i < parameters.Length; i++)
		int32_t L_30 = V_2;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		// stringBuilder.Append(')');
		StringBuilder_t * L_32;
		L_32 = PooledStringBuilder_Append_mF4FAD12F83A60C44901A6B5E6E01B23C40088864_inline((PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *)(&V_1), ((int32_t)41), /*hidden argument*/NULL);
	}

IL_009f:
	{
		// return stringBuilder.ToString();
		String_t* L_33;
		L_33 = PooledStringBuilder_ToString_m0E218A1BAC36ED7C0FA22AAC7B928452E428DB99((PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *)(&V_1), /*hidden argument*/NULL);
		return L_33;
	}
}
// System.String Baracuda.Reflection.ReflectionExtensions::ToSyntaxString(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_ToSyntaxString_mDA48D337E5939D333C9BE4DB18C847402C434ED6 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mCEFD03397F22B96A02906212C1935847C8689191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2F86A6F80C957D36F5792A1101E475BB128D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC740CA2C6483814A1BF1E5922B73D9F4AFE93E72);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	StringBuilder_t * V_2 = NULL;
	StringBuilder_t * V_3 = NULL;
	String_t* V_4 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		// if (typeCache.TryGetValue(type, out var value))
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_0 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_typeCache_1();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mCEFD03397F22B96A02906212C1935847C8689191(L_0, L_1, (String_t**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mCEFD03397F22B96A02906212C1935847C8689191_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return value;
		String_t* L_3 = V_0;
		return L_3;
	}

IL_0011:
	{
		// if (type.IsGenericType)
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (!L_5)
		{
			goto IL_00d6;
		}
	}
	{
		// var builder = ConcurrentStringBuilderPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		StringBuilder_t * L_6;
		L_6 = ConcurrentStringBuilderPool_Get_m52C1985DBEE85963ACC1851D1E273C8FA3798179(/*hidden argument*/NULL);
		V_2 = L_6;
		// var argBuilder = ConcurrentStringBuilderPool.Get();
		StringBuilder_t * L_7;
		L_7 = ConcurrentStringBuilderPool_Get_m52C1985DBEE85963ACC1851D1E273C8FA3798179(/*hidden argument*/NULL);
		V_3 = L_7;
		// var arguments = type.GetGenericArguments();
		Type_t * L_8 = ___type0;
		NullCheck(L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9;
		L_9 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(102 /* System.Type[] System.Type::GetGenericArguments() */, L_8);
		// foreach (var t in arguments)
		V_5 = L_9;
		V_6 = 0;
		goto IL_0069;
	}

IL_0035:
	{
		// foreach (var t in arguments)
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_10 = V_5;
		int32_t L_11 = V_6;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Type_t * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// var arg = ToSyntaxString(t);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = ReflectionExtensions_ToSyntaxString_mDA48D337E5939D333C9BE4DB18C847402C434ED6_inline(L_13, /*hidden argument*/NULL);
		V_7 = L_14;
		// if (argBuilder.Length > 0)
		StringBuilder_t * L_15 = V_3;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		// argBuilder.AppendFormat(", {0}", arg);
		StringBuilder_t * L_17 = V_3;
		String_t* L_18 = V_7;
		NullCheck(L_17);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_17, _stringLiteralC740CA2C6483814A1BF1E5922B73D9F4AFE93E72, L_18, /*hidden argument*/NULL);
		// }
		goto IL_0063;
	}

IL_005a:
	{
		// argBuilder.Append(arg);
		StringBuilder_t * L_20 = V_3;
		String_t* L_21 = V_7;
		NullCheck(L_20);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_20, L_21, /*hidden argument*/NULL);
	}

IL_0063:
	{
		int32_t L_23 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0069:
	{
		// foreach (var t in arguments)
		int32_t L_24 = V_6;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		// if (argBuilder.Length > 0)
		StringBuilder_t * L_26 = V_3;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		// builder.AppendFormat("{0}<{1}>", type.Name.Split('`')[0],
		//     argBuilder.ToString().ToTypeKeyWord());
		StringBuilder_t * L_28 = V_2;
		Type_t * L_29 = ___type0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_29);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_31 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_32 = L_31;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)96));
		NullCheck(L_30);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33;
		L_33 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_30, L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		int32_t L_34 = 0;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		StringBuilder_t * L_36 = V_3;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		String_t* L_38;
		L_38 = ReflectionExtensions_ToTypeKeyWord_mC1543509E0F8949EEFC790FACE110666AD51B457_inline(L_37, /*hidden argument*/NULL);
		NullCheck(L_28);
		StringBuilder_t * L_39;
		L_39 = StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_28, _stringLiteralBD2F86A6F80C957D36F5792A1101E475BB128D86, L_35, L_38, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// var retType = builder.ToString().Replace('+', '.');
		StringBuilder_t * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_41, ((int32_t)43), ((int32_t)46), /*hidden argument*/NULL);
		V_4 = L_42;
		// typeCache.Add(type, retType);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_43 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_typeCache_1();
		Type_t * L_44 = ___type0;
		String_t* L_45 = V_4;
		NullCheck(L_43);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_43, L_44, L_45, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		// ConcurrentStringBuilderPool.ReleaseStringBuilder(builder);
		StringBuilder_t * L_46 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		ConcurrentStringBuilderPool_ReleaseStringBuilder_m5AC7AA961261F72B39C993B821B8A8C8F035EBF7(L_46, /*hidden argument*/NULL);
		// ConcurrentStringBuilderPool.ReleaseStringBuilder(argBuilder);
		StringBuilder_t * L_47 = V_3;
		ConcurrentStringBuilderPool_ReleaseStringBuilder_m5AC7AA961261F72B39C993B821B8A8C8F035EBF7(L_47, /*hidden argument*/NULL);
		// return retType;
		String_t* L_48 = V_4;
		return L_48;
	}

IL_00d6:
	{
		// var str = ToTypeKeyWord(type.Name).Replace('+', '.');
		Type_t * L_49 = ___type0;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_49);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		String_t* L_51;
		L_51 = ReflectionExtensions_ToTypeKeyWord_mC1543509E0F8949EEFC790FACE110666AD51B457_inline(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		String_t* L_52;
		L_52 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_51, ((int32_t)43), ((int32_t)46), /*hidden argument*/NULL);
		V_1 = L_52;
		// typeCache.Add(type, str);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_53 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_typeCache_1();
		Type_t * L_54 = ___type0;
		String_t* L_55 = V_1;
		NullCheck(L_53);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_53, L_54, L_55, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		// return str;
		String_t* L_56 = V_1;
		return L_56;
	}
}
// System.String Baracuda.Reflection.ReflectionExtensions::ToTypeKeyWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_ToTypeKeyWord_mC1543509E0F8949EEFC790FACE110666AD51B457 (String_t* ___typeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072BA90B274B502615639084DC3D7FCC63407A24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3680357E36BF098D58315A89BD03F078921BEFD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B41A58E45555854EC2026B9B5F8243AA9E7ED4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C8C975CC62CF419550282B028FB7E3A1F591D06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FA4C59C48F20F657EA95225B529B162ECF44EAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral979BEF74EBFAB7697A86533A10926355727B6C8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB12933F4DC58820F9722BDF423F448FD91C0EE8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7E7D625DFBC9C92FA0449D5E3E0BE263DECD0EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA7DDD073AD5DB21CC612ADB1833BF1A5D32261);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF45CADC16AD267EA891B4231D162B68FDED748D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB47297909F3BD6EDB8AD67A8511975233214355);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3165827D406DD8F354BE7515C630A771E98916A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE75F4F4A9D67BC98BA7DB8DBE3C519516572DA4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE895F499BC653C0CA36FB31C5936FC768CAD263E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF13E4BFF086D4E511E68B0617B76ACC5BD5AFFE7);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___typeName0;
		if (!L_0)
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_1 = ___typeName0;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m471FDAF5737609AC21BC3403301DE4BB20B737DC(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1615808600)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)697196164)))))
		{
			goto IL_0043;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)423635464))))
		{
			goto IL_0165;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)679076413))))
		{
			goto IL_017a;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)697196164))))
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_027c;
	}

IL_0043:
	{
		uint32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)1323747186)))))
		{
			goto IL_0066;
		}
	}
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)765439473))))
		{
			goto IL_01f5;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1323747186))))
		{
			goto IL_0204;
		}
	}
	{
		goto IL_027c;
	}

IL_0066:
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1324880019))))
		{
			goto IL_01e3;
		}
	}
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1615808600))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_027c;
	}

IL_0081:
	{
		uint32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-885417665)))))
		{
			goto IL_00c4;
		}
	}
	{
		uint32_t L_14 = V_0;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-1583721377)))))
		{
			goto IL_00a9;
		}
	}
	{
		uint32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1907995608))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1583721377))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_027c;
	}

IL_00a9:
	{
		uint32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1515522836))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-885417665))))
		{
			goto IL_0150;
		}
	}
	{
		goto IL_027c;
	}

IL_00c4:
	{
		uint32_t L_19 = V_0;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-443652902)))))
		{
			goto IL_00e7;
		}
	}
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-756280212))))
		{
			goto IL_01b9;
		}
	}
	{
		uint32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-443652902))))
		{
			goto IL_0213;
		}
	}
	{
		goto IL_027c;
	}

IL_00e7:
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-325762209))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-243833591))))
		{
			goto IL_0126;
		}
	}
	{
		goto IL_027c;
	}

IL_00fc:
	{
		String_t* L_24 = ___typeName0;
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteralBCA7DDD073AD5DB21CC612ADB1833BF1A5D32261, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0222;
		}
	}
	{
		goto IL_027c;
	}

IL_0111:
	{
		String_t* L_26 = ___typeName0;
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteralDB47297909F3BD6EDB8AD67A8511975233214355, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0228;
		}
	}
	{
		goto IL_027c;
	}

IL_0126:
	{
		String_t* L_28 = ___typeName0;
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteralE895F499BC653C0CA36FB31C5936FC768CAD263E, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_022e;
		}
	}
	{
		goto IL_027c;
	}

IL_013b:
	{
		String_t* L_30 = ___typeName0;
		bool L_31;
		L_31 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_30, _stringLiteral6C8C975CC62CF419550282B028FB7E3A1F591D06, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_027c;
	}

IL_0150:
	{
		String_t* L_32 = ___typeName0;
		bool L_33;
		L_33 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_32, _stringLiteral072BA90B274B502615639084DC3D7FCC63407A24, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_023a;
		}
	}
	{
		goto IL_027c;
	}

IL_0165:
	{
		String_t* L_34 = ___typeName0;
		bool L_35;
		L_35 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_34, _stringLiteral6FA4C59C48F20F657EA95225B529B162ECF44EAB, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_027c;
	}

IL_017a:
	{
		String_t* L_36 = ___typeName0;
		bool L_37;
		L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_36, _stringLiteralE75F4F4A9D67BC98BA7DB8DBE3C519516572DA4E, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0246;
		}
	}
	{
		goto IL_027c;
	}

IL_018f:
	{
		String_t* L_38 = ___typeName0;
		bool L_39;
		L_39 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_38, _stringLiteral5B41A58E45555854EC2026B9B5F8243AA9E7ED4B, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_024c;
		}
	}
	{
		goto IL_027c;
	}

IL_01a4:
	{
		String_t* L_40 = ___typeName0;
		bool L_41;
		L_41 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_40, _stringLiteralF13E4BFF086D4E511E68B0617B76ACC5BD5AFFE7, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0252;
		}
	}
	{
		goto IL_027c;
	}

IL_01b9:
	{
		String_t* L_42 = ___typeName0;
		bool L_43;
		L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_42, _stringLiteralB12933F4DC58820F9722BDF423F448FD91C0EE8A, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_027c;
	}

IL_01ce:
	{
		String_t* L_44 = ___typeName0;
		bool L_45;
		L_45 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_44, _stringLiteralB7E7D625DFBC9C92FA0449D5E3E0BE263DECD0EA, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_025e;
		}
	}
	{
		goto IL_027c;
	}

IL_01e3:
	{
		String_t* L_46 = ___typeName0;
		bool L_47;
		L_47 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_46, _stringLiteralBF45CADC16AD267EA891B4231D162B68FDED748D, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_0264;
		}
	}
	{
		goto IL_027c;
	}

IL_01f5:
	{
		String_t* L_48 = ___typeName0;
		bool L_49;
		L_49 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_48, _stringLiteral979BEF74EBFAB7697A86533A10926355727B6C8A, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_026a;
		}
	}
	{
		goto IL_027c;
	}

IL_0204:
	{
		String_t* L_50 = ___typeName0;
		bool L_51;
		L_51 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_50, _stringLiteral3680357E36BF098D58315A89BD03F078921BEFD9, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_027c;
	}

IL_0213:
	{
		String_t* L_52 = ___typeName0;
		bool L_53;
		L_53 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_52, _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0276;
		}
	}
	{
		goto IL_027c;
	}

IL_0222:
	{
		// return "string";
		return _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
	}

IL_0228:
	{
		// return "int";
		return _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
	}

IL_022e:
	{
		// return "float";
		return _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
	}

IL_0234:
	{
		// return "bool";
		return _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2;
	}

IL_023a:
	{
		// return "byte";
		return _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
	}

IL_0240:
	{
		// return "sbyte";
		return _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB;
	}

IL_0246:
	{
		// return "char";
		return _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
	}

IL_024c:
	{
		// return "decimal";
		return _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D;
	}

IL_0252:
	{
		// return "double";
		return _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
	}

IL_0258:
	{
		// return "uint";
		return _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A;
	}

IL_025e:
	{
		// return "long";
		return _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
	}

IL_0264:
	{
		// return "ulong";
		return _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1;
	}

IL_026a:
	{
		// return "short";
		return _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
	}

IL_0270:
	{
		// return "ushort";
		return _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E;
	}

IL_0276:
	{
		// return "object";
		return _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18;
	}

IL_027c:
	{
		// return typeName;
		String_t* L_54 = ___typeName0;
		return L_54;
	}
}
// System.String Baracuda.Reflection.ReflectionExtensions::ToFullTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_ToFullTypeName_m236F13FCA9B19400BC224B8EADB35A9212F7D387 (String_t* ___typeKeyword0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C04CD91AEBB050BE21D6AD24AABF576BC020AC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FAAD6F8CD67196FDCAD20D4F7FE08C93EEA0028);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C27A0B1BADE691B5E081C6206EA2258803AD35B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8192EF02E079142FD5CA69DC024E6EF19381C3B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82A7DC8A7D43BCA912EA8F0A6CA746727E5C7BA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94152201B24834B0EF60CA96399C126BAED45FB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC45650C963261F1B046FEBC27ABA14BCBA8F11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3A8E77BFEC96D39BC81E775AA2148ABFCC7B627);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5C1F833B9BE779404488EC6DDA5379616471E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3165827D406DD8F354BE7515C630A771E98916A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE18A03A42C3630065A4A851B24F01948FD8026C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF08339D4FE85DC41A1A67350BEBFF4F037C2EC98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF16D8766C3E454E6B20DC525B5017CAC8D0BDC90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE6B7E72961EFAC1F608AD025001BB0C4D2114CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFA36FEC765CE9140429C3C852A895A05B9F710A);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___typeKeyword0;
		if (!L_0)
		{
			goto IL_02b5;
		}
	}
	{
		String_t* L_1 = ___typeKeyword0;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m471FDAF5737609AC21BC3403301DE4BB20B737DC(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1595207928)))))
		{
			goto IL_009c;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1630192034)))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)520654156)))))
		{
			goto IL_0043;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)398550328))))
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)520654156))))
		{
			goto IL_0228;
		}
	}
	{
		goto IL_02b5;
	}

IL_0043:
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1219850847))))
		{
			goto IL_0237;
		}
	}
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1630192034))))
		{
			goto IL_016e;
		}
	}
	{
		goto IL_02b5;
	}

IL_005e:
	{
		uint32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)-1779859874)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1683620383))))
		{
			goto IL_0144;
		}
	}
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1779859874))))
		{
			goto IL_0183;
		}
	}
	{
		goto IL_02b5;
	}

IL_0081:
	{
		uint32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1627741842))))
		{
			goto IL_01c2;
		}
	}
	{
		uint32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1595207928))))
		{
			goto IL_0201;
		}
	}
	{
		goto IL_02b5;
	}

IL_009c:
	{
		uint32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-1172149291)))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_16 = V_0;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1471413475)))))
		{
			goto IL_00c7;
		}
	}
	{
		uint32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1497080443))))
		{
			goto IL_01ec;
		}
	}
	{
		uint32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1471413475))))
		{
			goto IL_01d7;
		}
	}
	{
		goto IL_02b5;
	}

IL_00c7:
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1194980166))))
		{
			goto IL_0246;
		}
	}
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1172149291))))
		{
			goto IL_0159;
		}
	}
	{
		goto IL_02b5;
	}

IL_00df:
	{
		uint32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-929786563)))))
		{
			goto IL_0102;
		}
	}
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1024663725))))
		{
			goto IL_01ad;
		}
	}
	{
		uint32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-929786563))))
		{
			goto IL_0216;
		}
	}
	{
		goto IL_02b5;
	}

IL_0102:
	{
		uint32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-879216991))))
		{
			goto IL_0198;
		}
	}
	{
		uint32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-206502776))))
		{
			goto IL_012f;
		}
	}
	{
		goto IL_02b5;
	}

IL_011a:
	{
		String_t* L_26 = ___typeKeyword0;
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0255;
		}
	}
	{
		goto IL_02b5;
	}

IL_012f:
	{
		String_t* L_28 = ___typeKeyword0;
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_025b;
		}
	}
	{
		goto IL_02b5;
	}

IL_0144:
	{
		String_t* L_30 = ___typeKeyword0;
		bool L_31;
		L_31 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_30, _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0261;
		}
	}
	{
		goto IL_02b5;
	}

IL_0159:
	{
		String_t* L_32 = ___typeKeyword0;
		bool L_33;
		L_33 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_32, _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_0267;
		}
	}
	{
		goto IL_02b5;
	}

IL_016e:
	{
		String_t* L_34 = ___typeKeyword0;
		bool L_35;
		L_35 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_34, _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_026d;
		}
	}
	{
		goto IL_02b5;
	}

IL_0183:
	{
		String_t* L_36 = ___typeKeyword0;
		bool L_37;
		L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_36, _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0273;
		}
	}
	{
		goto IL_02b5;
	}

IL_0198:
	{
		String_t* L_38 = ___typeKeyword0;
		bool L_39;
		L_39 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_38, _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_01ad:
	{
		String_t* L_40 = ___typeKeyword0;
		bool L_41;
		L_41 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_40, _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_027f;
		}
	}
	{
		goto IL_02b5;
	}

IL_01c2:
	{
		String_t* L_42 = ___typeKeyword0;
		bool L_43;
		L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_42, _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_0285;
		}
	}
	{
		goto IL_02b5;
	}

IL_01d7:
	{
		String_t* L_44 = ___typeKeyword0;
		bool L_45;
		L_45 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_44, _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_028b;
		}
	}
	{
		goto IL_02b5;
	}

IL_01ec:
	{
		String_t* L_46 = ___typeKeyword0;
		bool L_47;
		L_47 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_46, _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_0291;
		}
	}
	{
		goto IL_02b5;
	}

IL_0201:
	{
		String_t* L_48 = ___typeKeyword0;
		bool L_49;
		L_49 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_48, _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_0297;
		}
	}
	{
		goto IL_02b5;
	}

IL_0216:
	{
		String_t* L_50 = ___typeKeyword0;
		bool L_51;
		L_51 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_50, _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_029d;
		}
	}
	{
		goto IL_02b5;
	}

IL_0228:
	{
		String_t* L_52 = ___typeKeyword0;
		bool L_53;
		L_53 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_52, _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_02a3;
		}
	}
	{
		goto IL_02b5;
	}

IL_0237:
	{
		String_t* L_54 = ___typeKeyword0;
		bool L_55;
		L_55 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_54, _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_02a9;
		}
	}
	{
		goto IL_02b5;
	}

IL_0246:
	{
		String_t* L_56 = ___typeKeyword0;
		bool L_57;
		L_57 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_56, _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_02af;
		}
	}
	{
		goto IL_02b5;
	}

IL_0255:
	{
		// return "System.String";
		return _stringLiteral8192EF02E079142FD5CA69DC024E6EF19381C3B6;
	}

IL_025b:
	{
		// return "System.SByte";
		return _stringLiteralFE6B7E72961EFAC1F608AD025001BB0C4D2114CC;
	}

IL_0261:
	{
		// return "System.Byte";
		return _stringLiteralEE18A03A42C3630065A4A851B24F01948FD8026C;
	}

IL_0267:
	{
		// return "System.Int16";
		return _stringLiteralC3A8E77BFEC96D39BC81E775AA2148ABFCC7B627;
	}

IL_026d:
	{
		// return "System.UInt16";
		return _stringLiteralF16D8766C3E454E6B20DC525B5017CAC8D0BDC90;
	}

IL_0273:
	{
		// return "System.Int32";
		return _stringLiteral7F56C40C06116CBCE1B696BD5C1A625A7F907C6A;
	}

IL_0279:
	{
		// return "System.UInt32";
		return _stringLiteralFFA36FEC765CE9140429C3C852A895A05B9F710A;
	}

IL_027f:
	{
		// return "System.Int64";
		return _stringLiteral0FAAD6F8CD67196FDCAD20D4F7FE08C93EEA0028;
	}

IL_0285:
	{
		// return "System.UInt64";
		return _stringLiteral82A7DC8A7D43BCA912EA8F0A6CA746727E5C7BA6;
	}

IL_028b:
	{
		// return "System.Char";
		return _stringLiteral0C04CD91AEBB050BE21D6AD24AABF576BC020AC5;
	}

IL_0291:
	{
		// return "System.Single";
		return _stringLiteralB58A28AAA151D2AE59CA0EF015F5F931C6447892;
	}

IL_0297:
	{
		// return "System.Double";
		return _stringLiteralF08339D4FE85DC41A1A67350BEBFF4F037C2EC98;
	}

IL_029d:
	{
		// return "System.Boolean";
		return _stringLiteralD5C1F833B9BE779404488EC6DDA5379616471E78;
	}

IL_02a3:
	{
		// return "System.Decimal";
		return _stringLiteralBFC45650C963261F1B046FEBC27ABA14BCBA8F11;
	}

IL_02a9:
	{
		// return "System.Void";
		return _stringLiteral5C27A0B1BADE691B5E081C6206EA2258803AD35B;
	}

IL_02af:
	{
		// return "System.Object";
		return _stringLiteral94152201B24834B0EF60CA96399C126BAED45FB6;
	}

IL_02b5:
	{
		// return typeKeyword;
		String_t* L_58 = ___typeKeyword0;
		return L_58;
	}
}
// System.Type[] Baracuda.Reflection.ReflectionExtensions::GetBaseTypes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ReflectionExtensions_GetBaseTypes_mC459E778540FA94731EFD277BF2A31F1E711DD5A (Type_t * ___type0, bool ___includeThis1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB2CE10C5396AA1FDB680D3725ADDBE12BCE0462E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * V_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_1 = NULL;
	{
		// var temp = ConcurrentListPool<Type>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_0;
		L_0 = ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85(/*hidden argument*/ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		V_0 = L_0;
		// if (includeThis)
		bool L_1 = ___includeThis1;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// temp.Add(type);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_2 = V_0;
		Type_t * L_3 = ___type0;
		NullCheck(L_2);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_2, L_3, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		goto IL_004a;
	}

IL_0012:
	{
		// temp.Add(type.BaseType);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_4 = V_0;
		Type_t * L_5 = ___type0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_5);
		NullCheck(L_4);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_4, L_6, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		// type = type.BaseType;
		Type_t * L_7 = ___type0;
		NullCheck(L_7);
		Type_t * L_8;
		L_8 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_7);
		___type0 = L_8;
		// if(type == typeof(MonoBehaviour) || type == typeof(ScriptableObject))
		Type_t * L_9 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_9, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0058;
		}
	}
	{
		Type_t * L_13 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_13, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0058;
		}
	}

IL_004a:
	{
		// while (type.BaseType != null)
		Type_t * L_17 = ___type0;
		NullCheck(L_17);
		Type_t * L_18;
		L_18 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_17);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_18, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0012;
		}
	}

IL_0058:
	{
		// var array = temp.ToArray();
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_20 = V_0;
		NullCheck(L_20);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_21;
		L_21 = List_1_ToArray_mB2CE10C5396AA1FDB680D3725ADDBE12BCE0462E(L_20, /*hidden argument*/List_1_ToArray_mB2CE10C5396AA1FDB680D3725ADDBE12BCE0462E_RuntimeMethod_var);
		V_1 = L_21;
		// ConcurrentListPool<Type>.Release(temp);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288(L_22, /*hidden argument*/ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		// return array;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_23 = V_1;
		return L_23;
	}
}
// System.Type[] Baracuda.Reflection.ReflectionExtensions::GetDeclaringTypes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ReflectionExtensions_GetDeclaringTypes_mD791FB22FF6281FB2F04F0CCDB1FE74BE8C273B4 (Type_t * ___type0, bool ___includeThis1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB2CE10C5396AA1FDB680D3725ADDBE12BCE0462E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * V_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_1 = NULL;
	{
		// var temp = ConcurrentListPool<Type>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_0;
		L_0 = ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85(/*hidden argument*/ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		V_0 = L_0;
		// if (includeThis)
		bool L_1 = ___includeThis1;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// temp.Add(type);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_2 = V_0;
		Type_t * L_3 = ___type0;
		NullCheck(L_2);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_2, L_3, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		goto IL_0026;
	}

IL_0012:
	{
		// temp.Add(type.DeclaringType);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_4 = V_0;
		Type_t * L_5 = ___type0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_5);
		NullCheck(L_4);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_4, L_6, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		// type = type.DeclaringType;
		Type_t * L_7 = ___type0;
		NullCheck(L_7);
		Type_t * L_8;
		L_8 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		___type0 = L_8;
	}

IL_0026:
	{
		// while (type.DeclaringType != null)
		Type_t * L_9 = ___type0;
		NullCheck(L_9);
		Type_t * L_10;
		L_10 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_10, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0012;
		}
	}
	{
		// var array = temp.ToArray();
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_12 = V_0;
		NullCheck(L_12);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_13;
		L_13 = List_1_ToArray_mB2CE10C5396AA1FDB680D3725ADDBE12BCE0462E(L_12, /*hidden argument*/List_1_ToArray_mB2CE10C5396AA1FDB680D3725ADDBE12BCE0462E_RuntimeMethod_var);
		V_1 = L_13;
		// ConcurrentListPool<Type>.Release(temp);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288(L_14, /*hidden argument*/ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		// return array;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_15 = V_1;
		return L_15;
	}
}
// System.Type[] Baracuda.Reflection.ReflectionExtensions::GetBaseTypesExcludeUnityTypes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ReflectionExtensions_GetBaseTypesExcludeUnityTypes_mFC6C381FB2E11DB57E6653440EB56F93ED598913 (Type_t * ___type0, bool ___includeThis1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB2CE10C5396AA1FDB680D3725ADDBE12BCE0462E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * V_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_1 = NULL;
	{
		// var temp = ConcurrentListPool<Type>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_0;
		L_0 = ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85(/*hidden argument*/ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		V_0 = L_0;
		// if (includeThis)
		bool L_1 = ___includeThis1;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// temp.Add(type);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_2 = V_0;
		Type_t * L_3 = ___type0;
		NullCheck(L_2);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_2, L_3, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		goto IL_0054;
	}

IL_0012:
	{
		// if(type.BaseType == typeof(MonoBehaviour) || type.BaseType == typeof(ScriptableObject))
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_4);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0062;
		}
	}
	{
		Type_t * L_9 = ___type0;
		NullCheck(L_9);
		Type_t * L_10;
		L_10 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_10, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0062;
		}
	}
	{
		// temp.Add(type.BaseType);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_14 = V_0;
		Type_t * L_15 = ___type0;
		NullCheck(L_15);
		Type_t * L_16;
		L_16 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_15);
		NullCheck(L_14);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_14, L_16, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		// type = type.BaseType;
		Type_t * L_17 = ___type0;
		NullCheck(L_17);
		Type_t * L_18;
		L_18 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_17);
		___type0 = L_18;
	}

IL_0054:
	{
		// while (type.BaseType != null)
		Type_t * L_19 = ___type0;
		NullCheck(L_19);
		Type_t * L_20;
		L_20 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_20, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0012;
		}
	}

IL_0062:
	{
		// var array = temp.ToArray();
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_22 = V_0;
		NullCheck(L_22);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_23;
		L_23 = List_1_ToArray_mB2CE10C5396AA1FDB680D3725ADDBE12BCE0462E(L_22, /*hidden argument*/List_1_ToArray_mB2CE10C5396AA1FDB680D3725ADDBE12BCE0462E_RuntimeMethod_var);
		V_1 = L_23;
		// ConcurrentListPool<Type>.Release(temp);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288(L_24, /*hidden argument*/ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		// return array;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_25 = V_1;
		return L_25;
	}
}
// System.Object Baracuda.Reflection.ReflectionExtensions::GetMemberValue(System.Type,System.String,System.Object,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReflectionExtensions_GetMemberValue_m928000E616C06D85AE83C458827366E8F2F53DFD (Type_t * ___type0, String_t* ___memberName1, RuntimeObject * ___target2, int32_t ___flags3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMemberValue(memberName, type, target, flags);
		String_t* L_0 = ___memberName1;
		Type_t * L_1 = ___type0;
		RuntimeObject * L_2 = ___target2;
		int32_t L_3 = ___flags3;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		RuntimeObject * L_4;
		L_4 = ReflectionExtensions_GetMemberValue_m8DD4E0F98B40388E563D15F724C21CB33822F0AE(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object Baracuda.Reflection.ReflectionExtensions::GetMemberValue(System.String,System.Type,System.Object,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReflectionExtensions_GetMemberValue_m8DD4E0F98B40388E563D15F724C21CB33822F0AE (String_t* ___memberName0, Type_t * ___type1, RuntimeObject * ___target2, int32_t ___flags3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m082C91C62C26D9C258ECD9114D21C6796306492F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3B8ED093D0D55BB86D9153E5F173B34BC9EAA972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541  V_0;
	memset((&V_0), 0, sizeof(V_0));
	MemberInfo_t * V_1 = NULL;
	FieldInfo_t * V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	PropertyInfo_t * V_4 = NULL;
	FieldInfo_t * V_5 = NULL;
	PropertyInfo_t * V_6 = NULL;
	MethodInfo_t * V_7 = NULL;
	{
		Type_t * L_0 = ___type1;
		(&V_0)->set_type_0(L_0);
		String_t* L_1 = ___memberName0;
		(&V_0)->set_memberName_2(L_1);
		// if (memberCache.TryGetValue(type, out var dictionary) &&
		//     dictionary.TryGetValue(memberName, out var memberInfo))
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * L_2 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_memberCache_5();
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541  L_3 = V_0;
		Type_t * L_4 = L_3.get_type_0();
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** L_5 = (&V_0)->get_address_of_dictionary_1();
		NullCheck(L_2);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_m3B8ED093D0D55BB86D9153E5F173B34BC9EAA972(L_2, L_4, (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD **)L_5, /*hidden argument*/Dictionary_2_TryGetValue_m3B8ED093D0D55BB86D9153E5F173B34BC9EAA972_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0084;
		}
	}
	{
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541  L_7 = V_0;
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_8 = L_7.get_dictionary_1();
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541  L_9 = V_0;
		String_t* L_10 = L_9.get_memberName_2();
		NullCheck(L_8);
		bool L_11;
		L_11 = Dictionary_2_TryGetValue_m082C91C62C26D9C258ECD9114D21C6796306492F(L_8, L_10, (MemberInfo_t **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m082C91C62C26D9C258ECD9114D21C6796306492F_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0084;
		}
	}
	{
		MemberInfo_t * L_12 = V_1;
		V_5 = ((FieldInfo_t *)IsInstClass((RuntimeObject*)L_12, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t * L_13 = V_5;
		if (L_13)
		{
			goto IL_0064;
		}
	}
	{
		MemberInfo_t * L_14 = V_1;
		V_6 = ((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_14, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_15 = V_6;
		if (L_15)
		{
			goto IL_006d;
		}
	}
	{
		MemberInfo_t * L_16 = V_1;
		V_7 = ((MethodInfo_t *)IsInstClass((RuntimeObject*)L_16, MethodInfo_t_il2cpp_TypeInfo_var));
		MethodInfo_t * L_17 = V_7;
		if (L_17)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_0084;
	}

IL_0064:
	{
		// case FieldInfo fi: return fi.GetValue(target);
		FieldInfo_t * L_18 = V_5;
		RuntimeObject * L_19 = ___target2;
		NullCheck(L_18);
		RuntimeObject * L_20;
		L_20 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_18, L_19);
		return L_20;
	}

IL_006d:
	{
		// case PropertyInfo pi: return pi.GetValue(target);
		PropertyInfo_t * L_21 = V_6;
		RuntimeObject * L_22 = ___target2;
		NullCheck(L_21);
		RuntimeObject * L_23;
		L_23 = PropertyInfo_GetValue_m2E9CA9EBD5971D3A30DDCB07A720A978AB9E18AE(L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_0076:
	{
		// case MethodInfo mi: return mi.Invoke(target, Array.Empty<object>());
		MethodInfo_t * L_24 = V_7;
		RuntimeObject * L_25 = ___target2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26;
		L_26 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_24);
		RuntimeObject * L_27;
		L_27 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_0084:
	{
		// var fieldInfo = type.GetFieldIncludeBaseTypes(memberName, flags);
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541  L_28 = V_0;
		Type_t * L_29 = L_28.get_type_0();
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541  L_30 = V_0;
		String_t* L_31 = L_30.get_memberName_2();
		int32_t L_32 = ___flags3;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		FieldInfo_t * L_33;
		L_33 = ReflectionExtensions_GetFieldIncludeBaseTypes_m4FFA0A89A70C377FD3CB652CFBFC312DFB028AF0(L_29, L_31, L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		// if (fieldInfo != null)
		FieldInfo_t * L_34 = V_2;
		bool L_35;
		L_35 = FieldInfo_op_Inequality_m5E2B5FF4334B861A92933D078C4B06FA11AA731A(L_34, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00b0;
		}
	}
	{
		// Cache(fieldInfo);
		FieldInfo_t * L_36 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		ReflectionExtensions_U3CGetMemberValueU3Eg__CacheU7C64_0_m1CB48B07E91615EEFA49098B439B26CEE8849A0F(L_36, (U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541 *)(&V_0), /*hidden argument*/NULL);
		// return fieldInfo.GetValue(target);
		FieldInfo_t * L_37 = V_2;
		RuntimeObject * L_38 = ___target2;
		NullCheck(L_37);
		RuntimeObject * L_39;
		L_39 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_37, L_38);
		return L_39;
	}

IL_00b0:
	{
		// var methodInfo = type.GetMethodIncludeBaseTypes(memberName, flags);
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541  L_40 = V_0;
		Type_t * L_41 = L_40.get_type_0();
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541  L_42 = V_0;
		String_t* L_43 = L_42.get_memberName_2();
		int32_t L_44 = ___flags3;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		MethodInfo_t * L_45;
		L_45 = ReflectionExtensions_GetMethodIncludeBaseTypes_m63D9FCBC5344C3E3517406255EEE3FA493A2FD9F(L_41, L_43, L_44, /*hidden argument*/NULL);
		V_3 = L_45;
		// if (methodInfo != null)
		MethodInfo_t * L_46 = V_3;
		bool L_47;
		L_47 = MethodInfo_op_Inequality_mDE1DAA5D330E9C975AC6423FC2D06862637BE68D(L_46, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_00e1;
		}
	}
	{
		// Cache(methodInfo);
		MethodInfo_t * L_48 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		ReflectionExtensions_U3CGetMemberValueU3Eg__CacheU7C64_0_m1CB48B07E91615EEFA49098B439B26CEE8849A0F(L_48, (U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541 *)(&V_0), /*hidden argument*/NULL);
		// return methodInfo.Invoke(target, Array.Empty<object>());
		MethodInfo_t * L_49 = V_3;
		RuntimeObject * L_50 = ___target2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_51;
		L_51 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_49);
		RuntimeObject * L_52;
		L_52 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_49, L_50, L_51, /*hidden argument*/NULL);
		return L_52;
	}

IL_00e1:
	{
		// var propertyInfo = type.GetPropertyIncludeBaseTypes(memberName, flags);
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541  L_53 = V_0;
		Type_t * L_54 = L_53.get_type_0();
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541  L_55 = V_0;
		String_t* L_56 = L_55.get_memberName_2();
		int32_t L_57 = ___flags3;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		PropertyInfo_t * L_58;
		L_58 = ReflectionExtensions_GetPropertyIncludeBaseTypes_mF52693D4BA6100F6DA9FA117A1FF19997B9E39BB(L_54, L_56, L_57, /*hidden argument*/NULL);
		V_4 = L_58;
		// if (propertyInfo != null)
		PropertyInfo_t * L_59 = V_4;
		bool L_60;
		L_60 = PropertyInfo_op_Inequality_mB4C6169DC83174E7712055F0973BC55469AD9962(L_59, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0111;
		}
	}
	{
		// Cache(propertyInfo);
		PropertyInfo_t * L_61 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		ReflectionExtensions_U3CGetMemberValueU3Eg__CacheU7C64_0_m1CB48B07E91615EEFA49098B439B26CEE8849A0F(L_61, (U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541 *)(&V_0), /*hidden argument*/NULL);
		// return propertyInfo.GetValue(target);
		PropertyInfo_t * L_62 = V_4;
		RuntimeObject * L_63 = ___target2;
		NullCheck(L_62);
		RuntimeObject * L_64;
		L_64 = PropertyInfo_GetValue_m2E9CA9EBD5971D3A30DDCB07A720A978AB9E18AE(L_62, L_63, /*hidden argument*/NULL);
		return L_64;
	}

IL_0111:
	{
		// return null;
		return NULL;
	}
}
// System.Reflection.FieldInfo Baracuda.Reflection.ReflectionExtensions::GetFieldIncludeBaseTypes(System.Type,System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * ReflectionExtensions_GetFieldIncludeBaseTypes_m4FFA0A89A70C377FD3CB652CFBFC312DFB028AF0 (Type_t * ___type0, String_t* ___fieldName1, int32_t ___flags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		// FieldInfo fieldInfo = null;
		V_0 = (FieldInfo_t *)NULL;
		// var targetType = type;
		Type_t * L_0 = ___type0;
		V_1 = L_0;
		goto IL_0021;
	}

IL_0006:
	{
		// fieldInfo = targetType.GetField(fieldName, flags);
		Type_t * L_1 = V_1;
		String_t* L_2 = ___fieldName1;
		int32_t L_3 = ___flags2;
		NullCheck(L_1);
		FieldInfo_t * L_4;
		L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(42 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, L_3);
		V_0 = L_4;
		// targetType = targetType.BaseType;
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_5);
		V_1 = L_6;
		// if (targetType == null)
		Type_t * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_7, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0021;
		}
	}
	{
		// return null;
		return (FieldInfo_t *)NULL;
	}

IL_0021:
	{
		// while (fieldInfo == null)
		FieldInfo_t * L_9 = V_0;
		bool L_10;
		L_10 = FieldInfo_op_Equality_m317FBF38CA6FD67D08400CC9A15FEC250E5D4751(L_9, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0006;
		}
	}
	{
		// return fieldInfo;
		FieldInfo_t * L_11 = V_0;
		return L_11;
	}
}
// System.Reflection.PropertyInfo Baracuda.Reflection.ReflectionExtensions::GetPropertyIncludeBaseTypes(System.Type,System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * ReflectionExtensions_GetPropertyIncludeBaseTypes_mF52693D4BA6100F6DA9FA117A1FF19997B9E39BB (Type_t * ___type0, String_t* ___propertyName1, int32_t ___flags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		// PropertyInfo propertyInfo = null;
		V_0 = (PropertyInfo_t *)NULL;
		// var targetType = type;
		Type_t * L_0 = ___type0;
		V_1 = L_0;
		goto IL_0021;
	}

IL_0006:
	{
		// propertyInfo = targetType.GetProperty(propertyName, flags);
		Type_t * L_1 = V_1;
		String_t* L_2 = ___propertyName1;
		int32_t L_3 = ___flags2;
		NullCheck(L_1);
		PropertyInfo_t * L_4;
		L_4 = Type_GetProperty_m3C862A51D0B10889115A9EB53CBBDC7C3883D26F(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// targetType = targetType.BaseType;
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_5);
		V_1 = L_6;
		// if (targetType == null)
		Type_t * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_7, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0021;
		}
	}
	{
		// return null;
		return (PropertyInfo_t *)NULL;
	}

IL_0021:
	{
		// while (propertyInfo == null)
		PropertyInfo_t * L_9 = V_0;
		bool L_10;
		L_10 = PropertyInfo_op_Equality_m94A58A417AD82DA8ABCE4B0DCAA3019A586D5B16(L_9, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0006;
		}
	}
	{
		// return propertyInfo;
		PropertyInfo_t * L_11 = V_0;
		return L_11;
	}
}
// System.Reflection.MethodInfo Baracuda.Reflection.ReflectionExtensions::GetMethodIncludeBaseTypes(System.Type,System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionExtensions_GetMethodIncludeBaseTypes_m63D9FCBC5344C3E3517406255EEE3FA493A2FD9F (Type_t * ___type0, String_t* ___methodName1, int32_t ___flags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// MethodInfo methodInfo = null;
		V_0 = (MethodInfo_t *)NULL;
		// var targetType = type;
		Type_t * L_0 = ___type0;
		V_1 = L_0;
		// var value = 0;
		V_2 = 0;
		goto IL_002c;
	}

IL_0008:
	{
		// methodInfo = targetType.GetMethod(methodName, flags);
		Type_t * L_1 = V_1;
		String_t* L_2 = ___methodName1;
		int32_t L_3 = ___flags2;
		NullCheck(L_1);
		MethodInfo_t * L_4;
		L_4 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// targetType = targetType.BaseType;
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_5);
		V_1 = L_6;
		// if (targetType == null || value++ > 10)
		Type_t * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_7, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)10))))
		{
			goto IL_002c;
		}
	}

IL_002a:
	{
		// return null;
		return (MethodInfo_t *)NULL;
	}

IL_002c:
	{
		// while (methodInfo == null)
		MethodInfo_t * L_11 = V_0;
		bool L_12;
		L_12 = MethodInfo_op_Equality_mC78C53FBCEF409A2EBD689D6781D23C62E6161F2(L_11, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0008;
		}
	}
	{
		// return methodInfo;
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// System.Reflection.EventInfo Baracuda.Reflection.ReflectionExtensions::GetEventIncludeBaseTypes(System.Type,System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventInfo_t * ReflectionExtensions_GetEventIncludeBaseTypes_m544CE3CCCEF769B7F891A4FDC1B61C05406ED34F (Type_t * ___type0, String_t* ___eventName1, int32_t ___flags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventInfo_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		// EventInfo eventInfo = null;
		V_0 = (EventInfo_t *)NULL;
		// var targetType = type;
		Type_t * L_0 = ___type0;
		V_1 = L_0;
		goto IL_0021;
	}

IL_0006:
	{
		// eventInfo = targetType.GetEvent(eventName, flags);
		Type_t * L_1 = V_1;
		String_t* L_2 = ___eventName1;
		int32_t L_3 = ___flags2;
		NullCheck(L_1);
		EventInfo_t * L_4;
		L_4 = VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(49 /* System.Reflection.EventInfo System.Type::GetEvent(System.String,System.Reflection.BindingFlags) */, L_1, L_2, L_3);
		V_0 = L_4;
		// targetType = targetType.BaseType;
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_5);
		V_1 = L_6;
		// if (targetType == null)
		Type_t * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_7, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0021;
		}
	}
	{
		// return null;
		return (EventInfo_t *)NULL;
	}

IL_0021:
	{
		// while (eventInfo == null)
		EventInfo_t * L_9 = V_0;
		bool L_10;
		L_10 = EventInfo_op_Equality_m7E6B543C0D5F69E27360762D04F0054818298127(L_9, (EventInfo_t *)NULL, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0006;
		}
	}
	{
		// return eventInfo;
		EventInfo_t * L_11 = V_0;
		return L_11;
	}
}
// System.Reflection.FieldInfo[] Baracuda.Reflection.ReflectionExtensions::GetFieldsIncludeBaseTypes(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* ReflectionExtensions_GetFieldsIncludeBaseTypes_m7BB5823503692A3CCADECD8CDA0AB24D94E81FA8 (Type_t * ___type0, int32_t ___flags1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Get_m53111F2712905BCE35CEB111888CBCB235B39B4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Release_m60FE8E5B27CF533C887D8A98ED3438584F6C8956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_t949DE923B7F23FFB6788F50CCB6B33DDD7083E34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m9B43F632323B60736442287C26EB9F657F1D8923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m32C6795B1E9BACBF1251E8055F79D0A72E86AB64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673 * V_0 = NULL;
	List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * V_1 = NULL;
	Type_t * V_2 = NULL;
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_3 = NULL;
	int32_t V_4 = 0;
	Type_t * G_B4_0 = NULL;
	{
		// var fieldInfos = ConcurrentListPool<FieldInfo>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_t949DE923B7F23FFB6788F50CCB6B33DDD7083E34_il2cpp_TypeInfo_var);
		List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673 * L_0;
		L_0 = ConcurrentCollectionPool_2_Get_m53111F2712905BCE35CEB111888CBCB235B39B4F(/*hidden argument*/ConcurrentCollectionPool_2_Get_m53111F2712905BCE35CEB111888CBCB235B39B4F_RuntimeMethod_var);
		V_0 = L_0;
		// var typesToCheck = ConcurrentListPool<Type>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_1;
		L_1 = ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85(/*hidden argument*/ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		V_1 = L_1;
		// var targetType = type;
		Type_t * L_2 = ___type0;
		V_2 = L_2;
		goto IL_0024;
	}

IL_0010:
	{
		// typesToCheck.Add(targetType);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_3 = V_1;
		Type_t * L_4 = V_2;
		NullCheck(L_3);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_3, L_4, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		// targetType = targetType?.BaseType;
		Type_t * L_5 = V_2;
		if (L_5)
		{
			goto IL_001d;
		}
	}
	{
		G_B4_0 = ((Type_t *)(NULL));
		goto IL_0023;
	}

IL_001d:
	{
		Type_t * L_6 = V_2;
		NullCheck(L_6);
		Type_t * L_7;
		L_7 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_6);
		G_B4_0 = L_7;
	}

IL_0023:
	{
		V_2 = G_B4_0;
	}

IL_0024:
	{
		// while (targetType.EqualsNone(typeof(MonoBehaviour), typeof(ScriptableObject), typeof(object)))
		Type_t * L_8 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_inline(L_8, L_10, L_12, L_14, /*hidden argument*/ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_0010;
		}
	}
	{
		// for (var i = typesToCheck.Count - 1; i >= 0; i--)
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_inline(L_16, /*hidden argument*/List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		goto IL_0070;
	}

IL_0056:
	{
		// fieldInfos.AddRange(typesToCheck[i].GetFields(flags));
		List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673 * L_18 = V_0;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_19 = V_1;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Type_t * L_21;
		L_21 = List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_RuntimeMethod_var);
		int32_t L_22 = ___flags1;
		NullCheck(L_21);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_23;
		L_23 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_21, L_22);
		NullCheck(L_18);
		List_1_AddRange_m9B43F632323B60736442287C26EB9F657F1D8923(L_18, (RuntimeObject*)(RuntimeObject*)L_23, /*hidden argument*/List_1_AddRange_m9B43F632323B60736442287C26EB9F657F1D8923_RuntimeMethod_var);
		// for (var i = typesToCheck.Count - 1; i >= 0; i--)
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
	}

IL_0070:
	{
		// for (var i = typesToCheck.Count - 1; i >= 0; i--)
		int32_t L_25 = V_4;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// var array = fieldInfos.ToArray();
		List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673 * L_26 = V_0;
		NullCheck(L_26);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_27;
		L_27 = List_1_ToArray_m32C6795B1E9BACBF1251E8055F79D0A72E86AB64(L_26, /*hidden argument*/List_1_ToArray_m32C6795B1E9BACBF1251E8055F79D0A72E86AB64_RuntimeMethod_var);
		V_3 = L_27;
		// ConcurrentListPool<Type>.Release(typesToCheck);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288(L_28, /*hidden argument*/ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		// ConcurrentListPool<FieldInfo>.Release(fieldInfos);
		List_1_t29978C6BDDC6DA4798ACEF5241A2422794E64673 * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_t949DE923B7F23FFB6788F50CCB6B33DDD7083E34_il2cpp_TypeInfo_var);
		ConcurrentCollectionPool_2_Release_m60FE8E5B27CF533C887D8A98ED3438584F6C8956(L_29, /*hidden argument*/ConcurrentCollectionPool_2_Release_m60FE8E5B27CF533C887D8A98ED3438584F6C8956_RuntimeMethod_var);
		// return array;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_30 = V_3;
		return L_30;
	}
}
// System.Reflection.PropertyInfo[] Baracuda.Reflection.ReflectionExtensions::GetPropertiesIncludeBaseTypes(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* ReflectionExtensions_GetPropertiesIncludeBaseTypes_mB2C9F64CA5EE293052E55D836757A2E79DCC3A3B (Type_t * ___type0, int32_t ___flags1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Get_m6CE5C5CAC6C0EC60F972BCDCAA4BF0CD071B5F31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Release_m42AD968D542FE354387EF3690D91D9F9BC1F5E3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_t1BEB7C1227083AD7B40CB0CF8B8EB3CAB4931ECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mE129D6DB83AF93A8435DB6F55D315EE8F3181CEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mE8CF8F2C3006FDB51D8E10854643529CD0605434_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521 * V_0 = NULL;
	List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * V_1 = NULL;
	Type_t * V_2 = NULL;
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* V_3 = NULL;
	int32_t V_4 = 0;
	Type_t * G_B4_0 = NULL;
	{
		// var propertyInfos = ConcurrentListPool<PropertyInfo>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_t1BEB7C1227083AD7B40CB0CF8B8EB3CAB4931ECF_il2cpp_TypeInfo_var);
		List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521 * L_0;
		L_0 = ConcurrentCollectionPool_2_Get_m6CE5C5CAC6C0EC60F972BCDCAA4BF0CD071B5F31(/*hidden argument*/ConcurrentCollectionPool_2_Get_m6CE5C5CAC6C0EC60F972BCDCAA4BF0CD071B5F31_RuntimeMethod_var);
		V_0 = L_0;
		// var typesToCheck = ConcurrentListPool<Type>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_1;
		L_1 = ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85(/*hidden argument*/ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		V_1 = L_1;
		// var targetType = type;
		Type_t * L_2 = ___type0;
		V_2 = L_2;
		goto IL_0024;
	}

IL_0010:
	{
		// typesToCheck.Add(targetType);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_3 = V_1;
		Type_t * L_4 = V_2;
		NullCheck(L_3);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_3, L_4, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		// targetType = targetType?.BaseType;
		Type_t * L_5 = V_2;
		if (L_5)
		{
			goto IL_001d;
		}
	}
	{
		G_B4_0 = ((Type_t *)(NULL));
		goto IL_0023;
	}

IL_001d:
	{
		Type_t * L_6 = V_2;
		NullCheck(L_6);
		Type_t * L_7;
		L_7 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_6);
		G_B4_0 = L_7;
	}

IL_0023:
	{
		V_2 = G_B4_0;
	}

IL_0024:
	{
		// while (targetType.EqualsNone(typeof(MonoBehaviour), typeof(ScriptableObject), typeof(object)))
		Type_t * L_8 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_inline(L_8, L_10, L_12, L_14, /*hidden argument*/ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_0010;
		}
	}
	{
		// for (var i = typesToCheck.Count - 1; i >= 0; i--)
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_inline(L_16, /*hidden argument*/List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		goto IL_0070;
	}

IL_0056:
	{
		// propertyInfos.AddRange(typesToCheck[i].GetProperties(flags));
		List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521 * L_18 = V_0;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_19 = V_1;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Type_t * L_21;
		L_21 = List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_RuntimeMethod_var);
		int32_t L_22 = ___flags1;
		NullCheck(L_21);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_23;
		L_23 = VirtFuncInvoker1< PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*, int32_t >::Invoke(56 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_21, L_22);
		NullCheck(L_18);
		List_1_AddRange_mE129D6DB83AF93A8435DB6F55D315EE8F3181CEF(L_18, (RuntimeObject*)(RuntimeObject*)L_23, /*hidden argument*/List_1_AddRange_mE129D6DB83AF93A8435DB6F55D315EE8F3181CEF_RuntimeMethod_var);
		// for (var i = typesToCheck.Count - 1; i >= 0; i--)
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
	}

IL_0070:
	{
		// for (var i = typesToCheck.Count - 1; i >= 0; i--)
		int32_t L_25 = V_4;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// var array = propertyInfos.ToArray();
		List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521 * L_26 = V_0;
		NullCheck(L_26);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_27;
		L_27 = List_1_ToArray_mE8CF8F2C3006FDB51D8E10854643529CD0605434(L_26, /*hidden argument*/List_1_ToArray_mE8CF8F2C3006FDB51D8E10854643529CD0605434_RuntimeMethod_var);
		V_3 = L_27;
		// ConcurrentListPool<Type>.Release(typesToCheck);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288(L_28, /*hidden argument*/ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		// ConcurrentListPool<PropertyInfo>.Release(propertyInfos);
		List_1_t6D217E5C7E8FD2DA6CE90941A9E364AEFB622521 * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_t1BEB7C1227083AD7B40CB0CF8B8EB3CAB4931ECF_il2cpp_TypeInfo_var);
		ConcurrentCollectionPool_2_Release_m42AD968D542FE354387EF3690D91D9F9BC1F5E3D(L_29, /*hidden argument*/ConcurrentCollectionPool_2_Release_m42AD968D542FE354387EF3690D91D9F9BC1F5E3D_RuntimeMethod_var);
		// return array;
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_30 = V_3;
		return L_30;
	}
}
// System.Reflection.MethodInfo[] Baracuda.Reflection.ReflectionExtensions::GetMethodsIncludeBaseTypes(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* ReflectionExtensions_GetMethodsIncludeBaseTypes_m951EF47D3E9C1C53E0AFE6F1BC8E4AD8BB72C60D (Type_t * ___type0, int32_t ___flags1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Get_m5646C51C8C7CEC0A32FABF3ED60E13FA5850B8A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Release_mA3363C1702BF0E9C3F12F5E22379CEB9D97E7086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_t0E86E92718DFE6785B59F3FFFBCF799EB964BD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mE8128D89AB1F9C09262BA54E82CF98D2DA7AF2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m468D67D809EE62B01DDE4A0A739A36BAD219E2F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * V_0 = NULL;
	List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * V_1 = NULL;
	Type_t * V_2 = NULL;
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* V_3 = NULL;
	int32_t V_4 = 0;
	Type_t * G_B4_0 = NULL;
	{
		// var methodInfos = ConcurrentListPool<MethodInfo>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_t0E86E92718DFE6785B59F3FFFBCF799EB964BD60_il2cpp_TypeInfo_var);
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_0;
		L_0 = ConcurrentCollectionPool_2_Get_m5646C51C8C7CEC0A32FABF3ED60E13FA5850B8A4(/*hidden argument*/ConcurrentCollectionPool_2_Get_m5646C51C8C7CEC0A32FABF3ED60E13FA5850B8A4_RuntimeMethod_var);
		V_0 = L_0;
		// var typesToCheck = ConcurrentListPool<Type>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_1;
		L_1 = ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85(/*hidden argument*/ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		V_1 = L_1;
		// var targetType = type;
		Type_t * L_2 = ___type0;
		V_2 = L_2;
		goto IL_0024;
	}

IL_0010:
	{
		// typesToCheck.Add(targetType);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_3 = V_1;
		Type_t * L_4 = V_2;
		NullCheck(L_3);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_3, L_4, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		// targetType = targetType?.BaseType;
		Type_t * L_5 = V_2;
		if (L_5)
		{
			goto IL_001d;
		}
	}
	{
		G_B4_0 = ((Type_t *)(NULL));
		goto IL_0023;
	}

IL_001d:
	{
		Type_t * L_6 = V_2;
		NullCheck(L_6);
		Type_t * L_7;
		L_7 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_6);
		G_B4_0 = L_7;
	}

IL_0023:
	{
		V_2 = G_B4_0;
	}

IL_0024:
	{
		// while (targetType.EqualsNone(typeof(MonoBehaviour), typeof(ScriptableObject), typeof(object)))
		Type_t * L_8 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_inline(L_8, L_10, L_12, L_14, /*hidden argument*/ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_0010;
		}
	}
	{
		// for (var i = typesToCheck.Count - 1; i >= 0; i--)
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_inline(L_16, /*hidden argument*/List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		goto IL_0070;
	}

IL_0056:
	{
		// methodInfos.AddRange(typesToCheck[i].GetMethods(flags));
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_18 = V_0;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_19 = V_1;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Type_t * L_21;
		L_21 = List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_RuntimeMethod_var);
		int32_t L_22 = ___flags1;
		NullCheck(L_21);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_23;
		L_23 = VirtFuncInvoker1< MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E*, int32_t >::Invoke(41 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_21, L_22);
		NullCheck(L_18);
		List_1_AddRange_mE8128D89AB1F9C09262BA54E82CF98D2DA7AF2A3(L_18, (RuntimeObject*)(RuntimeObject*)L_23, /*hidden argument*/List_1_AddRange_mE8128D89AB1F9C09262BA54E82CF98D2DA7AF2A3_RuntimeMethod_var);
		// for (var i = typesToCheck.Count - 1; i >= 0; i--)
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
	}

IL_0070:
	{
		// for (var i = typesToCheck.Count - 1; i >= 0; i--)
		int32_t L_25 = V_4;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// var array = methodInfos.ToArray();
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_26 = V_0;
		NullCheck(L_26);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_27;
		L_27 = List_1_ToArray_m468D67D809EE62B01DDE4A0A739A36BAD219E2F0(L_26, /*hidden argument*/List_1_ToArray_m468D67D809EE62B01DDE4A0A739A36BAD219E2F0_RuntimeMethod_var);
		V_3 = L_27;
		// ConcurrentListPool<Type>.Release(typesToCheck);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288(L_28, /*hidden argument*/ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		// ConcurrentListPool<MethodInfo>.Release(methodInfos);
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_t0E86E92718DFE6785B59F3FFFBCF799EB964BD60_il2cpp_TypeInfo_var);
		ConcurrentCollectionPool_2_Release_mA3363C1702BF0E9C3F12F5E22379CEB9D97E7086(L_29, /*hidden argument*/ConcurrentCollectionPool_2_Release_mA3363C1702BF0E9C3F12F5E22379CEB9D97E7086_RuntimeMethod_var);
		// return array;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_30 = V_3;
		return L_30;
	}
}
// System.Reflection.MemberInfo[] Baracuda.Reflection.ReflectionExtensions::GetMembersIncludeBaseTypes(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ReflectionExtensions_GetMembersIncludeBaseTypes_m85E053074BFD2BDB7A642C786ECE31CBB66DB60B (Type_t * ___type0, int32_t ___flags1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Get_m0B2440B6157F055190D3916B89C3AB4A09016086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Release_m5E97F2524A060EFE169E2E9E6F93E0E77495F525_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_tA1B71807398C5E6906FD16BF95039EB0BAA326E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mFA0DE1D314F5BB462DF727E48669CD75EF51C264_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m6F75A339123100E4CB18CFF7A06FC184EDEF9683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * V_0 = NULL;
	List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * V_1 = NULL;
	Type_t * V_2 = NULL;
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* V_3 = NULL;
	int32_t V_4 = 0;
	Type_t * G_B4_0 = NULL;
	{
		// var memberInfos = ConcurrentListPool<MemberInfo>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tA1B71807398C5E6906FD16BF95039EB0BAA326E6_il2cpp_TypeInfo_var);
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_0;
		L_0 = ConcurrentCollectionPool_2_Get_m0B2440B6157F055190D3916B89C3AB4A09016086(/*hidden argument*/ConcurrentCollectionPool_2_Get_m0B2440B6157F055190D3916B89C3AB4A09016086_RuntimeMethod_var);
		V_0 = L_0;
		// var typesToCheck = ConcurrentListPool<Type>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_1;
		L_1 = ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85(/*hidden argument*/ConcurrentCollectionPool_2_Get_mDA40BDD2F4D599670E58C44F6DB8A49DDB27BF85_RuntimeMethod_var);
		V_1 = L_1;
		// var targetType = type;
		Type_t * L_2 = ___type0;
		V_2 = L_2;
		goto IL_0024;
	}

IL_0010:
	{
		// typesToCheck.Add(targetType);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_3 = V_1;
		Type_t * L_4 = V_2;
		NullCheck(L_3);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_3, L_4, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		// targetType = targetType?.BaseType;
		Type_t * L_5 = V_2;
		if (L_5)
		{
			goto IL_001d;
		}
	}
	{
		G_B4_0 = ((Type_t *)(NULL));
		goto IL_0023;
	}

IL_001d:
	{
		Type_t * L_6 = V_2;
		NullCheck(L_6);
		Type_t * L_7;
		L_7 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_6);
		G_B4_0 = L_7;
	}

IL_0023:
	{
		V_2 = G_B4_0;
	}

IL_0024:
	{
		// while (targetType.EqualsNone(typeof(MonoBehaviour), typeof(ScriptableObject), typeof(object)))
		Type_t * L_8 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_inline(L_8, L_10, L_12, L_14, /*hidden argument*/ReflectionExtensions_EqualsNone_TisType_t_m01E29C5B22C8D8008EFC04F97AABC65EED45CA0E_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_0010;
		}
	}
	{
		// for (var i = typesToCheck.Count - 1; i >= 0; i--)
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_inline(L_16, /*hidden argument*/List_1_get_Count_m1B765A1E8C1E378192FF47343E7F963528EC0C68_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		goto IL_0070;
	}

IL_0056:
	{
		// memberInfos.AddRange(typesToCheck[i].GetMembers(flags));
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_18 = V_0;
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_19 = V_1;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Type_t * L_21;
		L_21 = List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m4EEB8109480E37331F99941B207234C4C073C063_RuntimeMethod_var);
		int32_t L_22 = ___flags1;
		NullCheck(L_21);
		MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_23;
		L_23 = VirtFuncInvoker1< MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E*, int32_t >::Invoke(61 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_21, L_22);
		NullCheck(L_18);
		List_1_AddRange_mFA0DE1D314F5BB462DF727E48669CD75EF51C264(L_18, (RuntimeObject*)(RuntimeObject*)L_23, /*hidden argument*/List_1_AddRange_mFA0DE1D314F5BB462DF727E48669CD75EF51C264_RuntimeMethod_var);
		// for (var i = typesToCheck.Count - 1; i >= 0; i--)
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
	}

IL_0070:
	{
		// for (var i = typesToCheck.Count - 1; i >= 0; i--)
		int32_t L_25 = V_4;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// var array = memberInfos.ToArray();
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_26 = V_0;
		NullCheck(L_26);
		MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_27;
		L_27 = List_1_ToArray_m6F75A339123100E4CB18CFF7A06FC184EDEF9683(L_26, /*hidden argument*/List_1_ToArray_m6F75A339123100E4CB18CFF7A06FC184EDEF9683_RuntimeMethod_var);
		V_3 = L_27;
		// ConcurrentListPool<Type>.Release(typesToCheck);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tFA500A3A40755F428DA9BBD12DA2CC8949AE7816_il2cpp_TypeInfo_var);
		ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288(L_28, /*hidden argument*/ConcurrentCollectionPool_2_Release_mD61E124F6CF0A860C255ACAC39B55C4FE0E6E288_RuntimeMethod_var);
		// ConcurrentListPool<MemberInfo>.Release(memberInfos);
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentCollectionPool_2_tA1B71807398C5E6906FD16BF95039EB0BAA326E6_il2cpp_TypeInfo_var);
		ConcurrentCollectionPool_2_Release_m5E97F2524A060EFE169E2E9E6F93E0E77495F525(L_29, /*hidden argument*/ConcurrentCollectionPool_2_Release_m5E97F2524A060EFE169E2E9E6F93E0E77495F525_RuntimeMethod_var);
		// return array;
		MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_30 = V_3;
		return L_30;
	}
}
// System.Void Baracuda.Reflection.ReflectionExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions__cctor_m3F97918EA9250F2E538DBE46E78C322AF1A5AFA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3EB3EB3FA9E674D490542CDED5CBE0876CF0A651_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<Type, string> typeCache = new Dictionary<Type, string>();
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_0 = (Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 *)il2cpp_codegen_object_new(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27(L_0, /*hidden argument*/Dictionary_2__ctor_m98D1D89FA627EFF725A6112AFFBD3CBF6CB8CE27_RuntimeMethod_var);
		((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->set_typeCache_1(L_0);
		// private static readonly HashSet<Type> numericTypes = new HashSet<Type>
		// {
		//     typeof(byte),
		//     typeof(sbyte),
		//     typeof(short),
		//     typeof(ushort),
		//     typeof(int),
		//     typeof(uint),
		//     typeof(long),
		//     typeof(ulong),
		//     typeof(float),
		//     typeof(double),
		//     typeof(decimal),
		// };
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_1 = (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *)il2cpp_codegen_object_new(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D(L_1, /*hidden argument*/HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_2 = L_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_2, L_4, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_6 = L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_9;
		L_9 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_6, L_8, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_10 = L_6;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_13;
		L_13 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_10, L_12, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_14 = L_10;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var) };
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_17;
		L_17 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_14, L_16, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_18 = L_14;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_21;
		L_21 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_18, L_20, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_22 = L_18;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_23 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_24;
		L_24 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_25;
		L_25 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_22, L_24, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_26 = L_22;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_27 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		Type_t * L_28;
		L_28 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_29;
		L_29 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_26, L_28, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_30 = L_26;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_31, /*hidden argument*/NULL);
		NullCheck(L_30);
		bool L_33;
		L_33 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_30, L_32, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_34 = L_30;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_35 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_36;
		L_36 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		bool L_37;
		L_37 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_34, L_36, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_38 = L_34;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_39 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_40;
		L_40 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		bool L_41;
		L_41 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_38, L_40, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_42 = L_38;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		bool L_45;
		L_45 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_42, L_44, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->set_numericTypes_2(L_42);
		// private static readonly HashSet<Type> integerTypes = new HashSet<Type>
		// {
		//     typeof(byte),
		//     typeof(sbyte),
		//     typeof(short),
		//     typeof(ushort),
		//     typeof(int),
		//     typeof(uint),
		//     typeof(long),
		//     typeof(ulong),
		// };
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_46 = (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *)il2cpp_codegen_object_new(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D(L_46, /*hidden argument*/HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_47 = L_46;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_48 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_49;
		L_49 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_48, /*hidden argument*/NULL);
		NullCheck(L_47);
		bool L_50;
		L_50 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_47, L_49, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_51 = L_47;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_52 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		Type_t * L_53;
		L_53 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_52, /*hidden argument*/NULL);
		NullCheck(L_51);
		bool L_54;
		L_54 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_51, L_53, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_55 = L_51;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_56 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_57;
		L_57 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_56, /*hidden argument*/NULL);
		NullCheck(L_55);
		bool L_58;
		L_58 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_55, L_57, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_59 = L_55;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_60 = { reinterpret_cast<intptr_t> (UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var) };
		Type_t * L_61;
		L_61 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_60, /*hidden argument*/NULL);
		NullCheck(L_59);
		bool L_62;
		L_62 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_59, L_61, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_63 = L_59;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_64 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_65;
		L_65 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_64, /*hidden argument*/NULL);
		NullCheck(L_63);
		bool L_66;
		L_66 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_63, L_65, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_67 = L_63;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_68 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_69;
		L_69 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_68, /*hidden argument*/NULL);
		NullCheck(L_67);
		bool L_70;
		L_70 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_67, L_69, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_71 = L_67;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_72 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		Type_t * L_73;
		L_73 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_72, /*hidden argument*/NULL);
		NullCheck(L_71);
		bool L_74;
		L_74 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_71, L_73, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_75 = L_71;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_76 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		Type_t * L_77;
		L_77 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_76, /*hidden argument*/NULL);
		NullCheck(L_75);
		bool L_78;
		L_78 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_75, L_77, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->set_integerTypes_3(L_75);
		// private static readonly HashSet<Type> decimalTypes = new HashSet<Type>
		// {
		//     typeof(float),
		//     typeof(double),
		//     typeof(decimal),
		// };
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_79 = (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *)il2cpp_codegen_object_new(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D(L_79, /*hidden argument*/HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_80 = L_79;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_81 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_82;
		L_82 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_81, /*hidden argument*/NULL);
		NullCheck(L_80);
		bool L_83;
		L_83 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_80, L_82, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_84 = L_80;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_85 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_86;
		L_86 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_85, /*hidden argument*/NULL);
		NullCheck(L_84);
		bool L_87;
		L_87 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_84, L_86, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_88 = L_84;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_89 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_90;
		L_90 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_89, /*hidden argument*/NULL);
		NullCheck(L_88);
		bool L_91;
		L_91 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_88, L_90, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->set_decimalTypes_4(L_88);
		// private static readonly Dictionary<Type, Dictionary<string, MemberInfo>> memberCache =
		//     new Dictionary<Type, Dictionary<string, MemberInfo>>();
		Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * L_92 = (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 *)il2cpp_codegen_object_new(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3EB3EB3FA9E674D490542CDED5CBE0876CF0A651(L_92, /*hidden argument*/Dictionary_2__ctor_m3EB3EB3FA9E674D490542CDED5CBE0876CF0A651_RuntimeMethod_var);
		((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->set_memberCache_5(L_92);
		return;
	}
}
// System.Void Baracuda.Reflection.ReflectionExtensions::<GetMemberValue>g__Cache|64_0(System.Reflection.MemberInfo,Baracuda.Reflection.ReflectionExtensions/<>c__DisplayClass64_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions_U3CGetMemberValueU3Eg__CacheU7C64_0_m1CB48B07E91615EEFA49098B439B26CEE8849A0F (MemberInfo_t * ___member0, U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541 * p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4B5B9E3F4080B1F5CA9CDBC73439C4DFBBAE9B14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mEFC16E9C55BA4C60D7388C5B6EDD2252BD0E8482_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3B8ED093D0D55BB86D9153E5F173B34BC9EAA972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD9198DB32EB268B2B200F0427C9DA107BC1BBFF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (memberCache.TryGetValue(type, out dictionary))
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * L_0 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_memberCache_5();
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541 * L_1 = p1;
		Type_t * L_2 = L_1->get_type_0();
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541 * L_3 = p1;
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** L_4 = L_3->get_address_of_dictionary_1();
		NullCheck(L_0);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m3B8ED093D0D55BB86D9153E5F173B34BC9EAA972(L_0, L_2, (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD **)L_4, /*hidden argument*/Dictionary_2_TryGetValue_m3B8ED093D0D55BB86D9153E5F173B34BC9EAA972_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// dictionary.Add(memberName, member);
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541 * L_6 = p1;
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_7 = L_6->get_dictionary_1();
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541 * L_8 = p1;
		String_t* L_9 = L_8->get_memberName_2();
		MemberInfo_t * L_10 = ___member0;
		NullCheck(L_7);
		Dictionary_2_Add_m4B5B9E3F4080B1F5CA9CDBC73439C4DFBBAE9B14(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m4B5B9E3F4080B1F5CA9CDBC73439C4DFBBAE9B14_RuntimeMethod_var);
		// }
		return;
	}

IL_002b:
	{
		// memberCache.Add(type, new Dictionary<string, MemberInfo>(){{memberName, member}});
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * L_11 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_memberCache_5();
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541 * L_12 = p1;
		Type_t * L_13 = L_12->get_type_0();
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_14 = (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD *)il2cpp_codegen_object_new(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD9198DB32EB268B2B200F0427C9DA107BC1BBFF9(L_14, /*hidden argument*/Dictionary_2__ctor_mD9198DB32EB268B2B200F0427C9DA107BC1BBFF9_RuntimeMethod_var);
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_15 = L_14;
		U3CU3Ec__DisplayClass64_0_t872F1E80B090B9F0DAAADA5D4B210E74C8946541 * L_16 = p1;
		String_t* L_17 = L_16->get_memberName_2();
		MemberInfo_t * L_18 = ___member0;
		NullCheck(L_15);
		Dictionary_2_Add_m4B5B9E3F4080B1F5CA9CDBC73439C4DFBBAE9B14(L_15, L_17, L_18, /*hidden argument*/Dictionary_2_Add_m4B5B9E3F4080B1F5CA9CDBC73439C4DFBBAE9B14_RuntimeMethod_var);
		NullCheck(L_11);
		Dictionary_2_Add_mEFC16E9C55BA4C60D7388C5B6EDD2252BD0E8482(L_11, L_13, L_15, /*hidden argument*/Dictionary_2_Add_mEFC16E9C55BA4C60D7388C5B6EDD2252BD0E8482_RuntimeMethod_var);
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
// System.Void Baracuda.Reflection.ReflectionExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m438BEC96D71FE559B39B5BEE2E5BF615F8363D36 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 * L_0 = (U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 *)il2cpp_codegen_object_new(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m54EB8B338C8F221E7CC559202997AD773EAC82F0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Baracuda.Reflection.ReflectionExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m54EB8B338C8F221E7CC559202997AD773EAC82F0 (U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type Baracuda.Reflection.ReflectionExtensions/<>c::<CreateMatchingDelegate>b__14_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CCreateMatchingDelegateU3Eb__14_0_m4C9EB99B494AF24BA30E45309D18D0852F182320 (U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___p0, const RuntimeMethod* method)
{
	{
		// var types = methodInfo.GetParameters().Select(p => p.ParameterType);
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___p0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		return L_1;
	}
}
// System.Type Baracuda.Reflection.ReflectionExtensions/<>c::<CreateMatchingDelegate>b__15_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CCreateMatchingDelegateU3Eb__15_0_m1CE715A59C851A68BE512444EABE23C0DC43A628 (U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___p0, const RuntimeMethod* method)
{
	{
		// var types = methodInfo.GetParameters().Select(p => p.ParameterType);
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___p0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		return L_1;
	}
}
// System.Boolean Baracuda.Reflection.ReflectionExtensions/<>c::<GetEnumerableType>b__47_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetEnumerableTypeU3Eb__47_0_mAE9CCD695998C1A8FAD15F4CC57948E23E4BCF64 (U3CU3Ec_tC0BAE5320FF8484CF5744F21B92A7FACB0D1A965 * __this, Type_t * ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// where i.IsGenericType && i.GetGenericTypeDefinition() == typeof(IEnumerable<>)
		Type_t * L_0 = ___i0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_2 = ___i0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(103 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001e:
	{
		return (bool)0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* AssemblyProfiler_GetFilteredAssembliesInternal_mFFB085B3F1917DEB5F1E0966DD8C0954450812A0_inline (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___excludeNames0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___excludePrefixes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7DF0FFC189D95EEFE99C4A9E3EE47904F346434D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23D4BA538BA13A3A977CF1ECFAE956BC2D200900_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB663AB1DC0DB6B4D360A48453C83402B7750F24A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F * V_0 = NULL;
	AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (excludeNames == null)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___excludeNames0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(excludeNames));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC23F745A5F01C32298CF51EEA0749B852775358)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssemblyProfiler_GetFilteredAssembliesInternal_mFFB085B3F1917DEB5F1E0966DD8C0954450812A0_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (excludePrefixes == null)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___excludePrefixes1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// throw new ArgumentNullException(nameof(excludePrefixes));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral987B9B487877190C202FEE95CC46DE49CCA879AA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AssemblyProfiler_GetFilteredAssembliesInternal_mFFB085B3F1917DEB5F1E0966DD8C0954450812A0_RuntimeMethod_var)));
	}

IL_001c:
	{
		// var filteredAssemblies = new List<Assembly>(30);
		List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F * L_4 = (List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F *)il2cpp_codegen_object_new(List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F_il2cpp_TypeInfo_var);
		List_1__ctor_mB663AB1DC0DB6B4D360A48453C83402B7750F24A(L_4, ((int32_t)30), /*hidden argument*/List_1__ctor_mB663AB1DC0DB6B4D360A48453C83402B7750F24A_RuntimeMethod_var);
		V_0 = L_4;
		// var assemblies = AppDomain.CurrentDomain.GetAssemblies();
		AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * L_5;
		L_5 = AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E(/*hidden argument*/NULL);
		NullCheck(L_5);
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_6;
		L_6 = AppDomain_GetAssemblies_m7397BD0461B4D6BA76AE0974DE9FBEDAF70AEBFD(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (var i = 0; i < assemblies.Length; i++)
		V_2 = 0;
		goto IL_004c;
	}

IL_0033:
	{
		// var assembly = assemblies[i];
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Assembly_t * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// if (assembly.IsAssemblyValid(excludeNames, excludePrefixes))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = ___excludeNames0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = ___excludePrefixes1;
		IL2CPP_RUNTIME_CLASS_INIT(AssemblyProfiler_tA54571A3430C834B4DDC2B9305A93F6FC54CC1A4_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = AssemblyProfiler_IsAssemblyValid_mE9E6122EF4BC750D45D97DD6AA7B07C1FB0E9D0F(L_10, (RuntimeObject*)(RuntimeObject*)L_11, (RuntimeObject*)(RuntimeObject*)L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		// filteredAssemblies.Add(assemblies[i]);
		List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F * L_14 = V_0;
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Assembly_t * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		List_1_Add_m7DF0FFC189D95EEFE99C4A9E3EE47904F346434D(L_14, L_18, /*hidden argument*/List_1_Add_m7DF0FFC189D95EEFE99C4A9E3EE47904F346434D_RuntimeMethod_var);
	}

IL_0048:
	{
		// for (var i = 0; i < assemblies.Length; i++)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004c:
	{
		// for (var i = 0; i < assemblies.Length; i++)
		int32_t L_20 = V_2;
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0033;
		}
	}
	{
		// return filteredAssemblies.ToArray();
		List_1_tC56F505A823BDAC4F0E5B416C8230CA749FAFC1F * L_22 = V_0;
		NullCheck(L_22);
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_23;
		L_23 = List_1_ToArray_m23D4BA538BA13A3A977CF1ECFAE956BC2D200900(L_22, /*hidden argument*/List_1_ToArray_m23D4BA538BA13A3A977CF1ECFAE956BC2D200900_RuntimeMethod_var);
		return L_23;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m8558532350989A6DE33C188FD1A470187DFEA911_inline (AssemblyName_t066E458E26373ECD644F79643E9D4483212C9824 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsStruct_mF784D4674A222ADECE5403EA31D581358B66D20B_inline (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		// return type.IsValueType && !type.IsEnum && !type.IsPrimitive;
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(74 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_4, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsString_mD66B585D4CA20C3376BB57497BD8D1A46CBED89E_inline (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type == typeof(string);
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_ToTypeKeyWord_mC1543509E0F8949EEFC790FACE110666AD51B457_inline (String_t* ___typeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072BA90B274B502615639084DC3D7FCC63407A24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3680357E36BF098D58315A89BD03F078921BEFD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B41A58E45555854EC2026B9B5F8243AA9E7ED4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C8C975CC62CF419550282B028FB7E3A1F591D06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FA4C59C48F20F657EA95225B529B162ECF44EAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral979BEF74EBFAB7697A86533A10926355727B6C8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB12933F4DC58820F9722BDF423F448FD91C0EE8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7E7D625DFBC9C92FA0449D5E3E0BE263DECD0EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA7DDD073AD5DB21CC612ADB1833BF1A5D32261);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF45CADC16AD267EA891B4231D162B68FDED748D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB47297909F3BD6EDB8AD67A8511975233214355);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3165827D406DD8F354BE7515C630A771E98916A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE75F4F4A9D67BC98BA7DB8DBE3C519516572DA4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE895F499BC653C0CA36FB31C5936FC768CAD263E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF13E4BFF086D4E511E68B0617B76ACC5BD5AFFE7);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___typeName0;
		if (!L_0)
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_1 = ___typeName0;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m471FDAF5737609AC21BC3403301DE4BB20B737DC(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1615808600)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)697196164)))))
		{
			goto IL_0043;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)423635464))))
		{
			goto IL_0165;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)679076413))))
		{
			goto IL_017a;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)697196164))))
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_027c;
	}

IL_0043:
	{
		uint32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)1323747186)))))
		{
			goto IL_0066;
		}
	}
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)765439473))))
		{
			goto IL_01f5;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1323747186))))
		{
			goto IL_0204;
		}
	}
	{
		goto IL_027c;
	}

IL_0066:
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1324880019))))
		{
			goto IL_01e3;
		}
	}
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1615808600))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_027c;
	}

IL_0081:
	{
		uint32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-885417665)))))
		{
			goto IL_00c4;
		}
	}
	{
		uint32_t L_14 = V_0;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-1583721377)))))
		{
			goto IL_00a9;
		}
	}
	{
		uint32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1907995608))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1583721377))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_027c;
	}

IL_00a9:
	{
		uint32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1515522836))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-885417665))))
		{
			goto IL_0150;
		}
	}
	{
		goto IL_027c;
	}

IL_00c4:
	{
		uint32_t L_19 = V_0;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-443652902)))))
		{
			goto IL_00e7;
		}
	}
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-756280212))))
		{
			goto IL_01b9;
		}
	}
	{
		uint32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-443652902))))
		{
			goto IL_0213;
		}
	}
	{
		goto IL_027c;
	}

IL_00e7:
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-325762209))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-243833591))))
		{
			goto IL_0126;
		}
	}
	{
		goto IL_027c;
	}

IL_00fc:
	{
		String_t* L_24 = ___typeName0;
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteralBCA7DDD073AD5DB21CC612ADB1833BF1A5D32261, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0222;
		}
	}
	{
		goto IL_027c;
	}

IL_0111:
	{
		String_t* L_26 = ___typeName0;
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteralDB47297909F3BD6EDB8AD67A8511975233214355, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0228;
		}
	}
	{
		goto IL_027c;
	}

IL_0126:
	{
		String_t* L_28 = ___typeName0;
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteralE895F499BC653C0CA36FB31C5936FC768CAD263E, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_022e;
		}
	}
	{
		goto IL_027c;
	}

IL_013b:
	{
		String_t* L_30 = ___typeName0;
		bool L_31;
		L_31 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_30, _stringLiteral6C8C975CC62CF419550282B028FB7E3A1F591D06, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_027c;
	}

IL_0150:
	{
		String_t* L_32 = ___typeName0;
		bool L_33;
		L_33 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_32, _stringLiteral072BA90B274B502615639084DC3D7FCC63407A24, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_023a;
		}
	}
	{
		goto IL_027c;
	}

IL_0165:
	{
		String_t* L_34 = ___typeName0;
		bool L_35;
		L_35 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_34, _stringLiteral6FA4C59C48F20F657EA95225B529B162ECF44EAB, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_027c;
	}

IL_017a:
	{
		String_t* L_36 = ___typeName0;
		bool L_37;
		L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_36, _stringLiteralE75F4F4A9D67BC98BA7DB8DBE3C519516572DA4E, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0246;
		}
	}
	{
		goto IL_027c;
	}

IL_018f:
	{
		String_t* L_38 = ___typeName0;
		bool L_39;
		L_39 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_38, _stringLiteral5B41A58E45555854EC2026B9B5F8243AA9E7ED4B, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_024c;
		}
	}
	{
		goto IL_027c;
	}

IL_01a4:
	{
		String_t* L_40 = ___typeName0;
		bool L_41;
		L_41 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_40, _stringLiteralF13E4BFF086D4E511E68B0617B76ACC5BD5AFFE7, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0252;
		}
	}
	{
		goto IL_027c;
	}

IL_01b9:
	{
		String_t* L_42 = ___typeName0;
		bool L_43;
		L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_42, _stringLiteralB12933F4DC58820F9722BDF423F448FD91C0EE8A, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_027c;
	}

IL_01ce:
	{
		String_t* L_44 = ___typeName0;
		bool L_45;
		L_45 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_44, _stringLiteralB7E7D625DFBC9C92FA0449D5E3E0BE263DECD0EA, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_025e;
		}
	}
	{
		goto IL_027c;
	}

IL_01e3:
	{
		String_t* L_46 = ___typeName0;
		bool L_47;
		L_47 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_46, _stringLiteralBF45CADC16AD267EA891B4231D162B68FDED748D, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_0264;
		}
	}
	{
		goto IL_027c;
	}

IL_01f5:
	{
		String_t* L_48 = ___typeName0;
		bool L_49;
		L_49 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_48, _stringLiteral979BEF74EBFAB7697A86533A10926355727B6C8A, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_026a;
		}
	}
	{
		goto IL_027c;
	}

IL_0204:
	{
		String_t* L_50 = ___typeName0;
		bool L_51;
		L_51 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_50, _stringLiteral3680357E36BF098D58315A89BD03F078921BEFD9, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_0270;
		}
	}
	{
		goto IL_027c;
	}

IL_0213:
	{
		String_t* L_52 = ___typeName0;
		bool L_53;
		L_53 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_52, _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0276;
		}
	}
	{
		goto IL_027c;
	}

IL_0222:
	{
		// return "string";
		return _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
	}

IL_0228:
	{
		// return "int";
		return _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
	}

IL_022e:
	{
		// return "float";
		return _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
	}

IL_0234:
	{
		// return "bool";
		return _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2;
	}

IL_023a:
	{
		// return "byte";
		return _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
	}

IL_0240:
	{
		// return "sbyte";
		return _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB;
	}

IL_0246:
	{
		// return "char";
		return _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
	}

IL_024c:
	{
		// return "decimal";
		return _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D;
	}

IL_0252:
	{
		// return "double";
		return _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
	}

IL_0258:
	{
		// return "uint";
		return _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A;
	}

IL_025e:
	{
		// return "long";
		return _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
	}

IL_0264:
	{
		// return "ulong";
		return _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1;
	}

IL_026a:
	{
		// return "short";
		return _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
	}

IL_0270:
	{
		// return "ushort";
		return _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E;
	}

IL_0276:
	{
		// return "object";
		return _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18;
	}

IL_027c:
	{
		// return typeName;
		String_t* L_54 = ___typeName0;
		return L_54;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m6A9F30F50501260FD67DAFCAE70446DAA6B29B11_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mF4FAD12F83A60C44901A6B5E6E01B23C40088864_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		Il2CppChar L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_ToSyntaxString_mDA48D337E5939D333C9BE4DB18C847402C434ED6_inline (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mCEFD03397F22B96A02906212C1935847C8689191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2F86A6F80C957D36F5792A1101E475BB128D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC740CA2C6483814A1BF1E5922B73D9F4AFE93E72);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	StringBuilder_t * V_2 = NULL;
	StringBuilder_t * V_3 = NULL;
	String_t* V_4 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		// if (typeCache.TryGetValue(type, out var value))
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_0 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_typeCache_1();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mCEFD03397F22B96A02906212C1935847C8689191(L_0, L_1, (String_t**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mCEFD03397F22B96A02906212C1935847C8689191_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return value;
		String_t* L_3 = V_0;
		return L_3;
	}

IL_0011:
	{
		// if (type.IsGenericType)
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (!L_5)
		{
			goto IL_00d6;
		}
	}
	{
		// var builder = ConcurrentStringBuilderPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		StringBuilder_t * L_6;
		L_6 = ConcurrentStringBuilderPool_Get_m52C1985DBEE85963ACC1851D1E273C8FA3798179(/*hidden argument*/NULL);
		V_2 = L_6;
		// var argBuilder = ConcurrentStringBuilderPool.Get();
		StringBuilder_t * L_7;
		L_7 = ConcurrentStringBuilderPool_Get_m52C1985DBEE85963ACC1851D1E273C8FA3798179(/*hidden argument*/NULL);
		V_3 = L_7;
		// var arguments = type.GetGenericArguments();
		Type_t * L_8 = ___type0;
		NullCheck(L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9;
		L_9 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(102 /* System.Type[] System.Type::GetGenericArguments() */, L_8);
		// foreach (var t in arguments)
		V_5 = L_9;
		V_6 = 0;
		goto IL_0069;
	}

IL_0035:
	{
		// foreach (var t in arguments)
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_10 = V_5;
		int32_t L_11 = V_6;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Type_t * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// var arg = ToSyntaxString(t);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = ReflectionExtensions_ToSyntaxString_mDA48D337E5939D333C9BE4DB18C847402C434ED6_inline(L_13, /*hidden argument*/NULL);
		V_7 = L_14;
		// if (argBuilder.Length > 0)
		StringBuilder_t * L_15 = V_3;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		// argBuilder.AppendFormat(", {0}", arg);
		StringBuilder_t * L_17 = V_3;
		String_t* L_18 = V_7;
		NullCheck(L_17);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_17, _stringLiteralC740CA2C6483814A1BF1E5922B73D9F4AFE93E72, L_18, /*hidden argument*/NULL);
		// }
		goto IL_0063;
	}

IL_005a:
	{
		// argBuilder.Append(arg);
		StringBuilder_t * L_20 = V_3;
		String_t* L_21 = V_7;
		NullCheck(L_20);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_20, L_21, /*hidden argument*/NULL);
	}

IL_0063:
	{
		int32_t L_23 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0069:
	{
		// foreach (var t in arguments)
		int32_t L_24 = V_6;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		// if (argBuilder.Length > 0)
		StringBuilder_t * L_26 = V_3;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		// builder.AppendFormat("{0}<{1}>", type.Name.Split('`')[0],
		//     argBuilder.ToString().ToTypeKeyWord());
		StringBuilder_t * L_28 = V_2;
		Type_t * L_29 = ___type0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_29);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_31 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_32 = L_31;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)96));
		NullCheck(L_30);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33;
		L_33 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_30, L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		int32_t L_34 = 0;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		StringBuilder_t * L_36 = V_3;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		String_t* L_38;
		L_38 = ReflectionExtensions_ToTypeKeyWord_mC1543509E0F8949EEFC790FACE110666AD51B457_inline(L_37, /*hidden argument*/NULL);
		NullCheck(L_28);
		StringBuilder_t * L_39;
		L_39 = StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_28, _stringLiteralBD2F86A6F80C957D36F5792A1101E475BB128D86, L_35, L_38, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// var retType = builder.ToString().Replace('+', '.');
		StringBuilder_t * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_41, ((int32_t)43), ((int32_t)46), /*hidden argument*/NULL);
		V_4 = L_42;
		// typeCache.Add(type, retType);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_43 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_typeCache_1();
		Type_t * L_44 = ___type0;
		String_t* L_45 = V_4;
		NullCheck(L_43);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_43, L_44, L_45, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		// ConcurrentStringBuilderPool.ReleaseStringBuilder(builder);
		StringBuilder_t * L_46 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		ConcurrentStringBuilderPool_ReleaseStringBuilder_m5AC7AA961261F72B39C993B821B8A8C8F035EBF7(L_46, /*hidden argument*/NULL);
		// ConcurrentStringBuilderPool.ReleaseStringBuilder(argBuilder);
		StringBuilder_t * L_47 = V_3;
		ConcurrentStringBuilderPool_ReleaseStringBuilder_m5AC7AA961261F72B39C993B821B8A8C8F035EBF7(L_47, /*hidden argument*/NULL);
		// return retType;
		String_t* L_48 = V_4;
		return L_48;
	}

IL_00d6:
	{
		// var str = ToTypeKeyWord(type.Name).Replace('+', '.');
		Type_t * L_49 = ___type0;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_49);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var);
		String_t* L_51;
		L_51 = ReflectionExtensions_ToTypeKeyWord_mC1543509E0F8949EEFC790FACE110666AD51B457_inline(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		String_t* L_52;
		L_52 = String_Replace_mD912844A1141FE8771F55255C4A8D29C80C47618(L_51, ((int32_t)43), ((int32_t)46), /*hidden argument*/NULL);
		V_1 = L_52;
		// typeCache.Add(type, str);
		Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * L_53 = ((ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionExtensions_t0F84A0C65F313BD258F2BB8A3F6DA0CB8EBF2441_il2cpp_TypeInfo_var))->get_typeCache_1();
		Type_t * L_54 = ___type0;
		String_t* L_55 = V_1;
		NullCheck(L_53);
		Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910(L_53, L_54, L_55, /*hidden argument*/Dictionary_2_Add_mB493D036ACBC228EF9BBC089D9573A045F25C910_RuntimeMethod_var);
		// return str;
		String_t* L_56 = V_1;
		return L_56;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReflectionExtensions_EqualsNone_TisRuntimeObject_m3530FC9307D921672D574DC585C85D78EF14012C_gshared_inline (RuntimeObject * ___target0, RuntimeObject * ___otherA1, RuntimeObject * ___otherB2, RuntimeObject * ___otherC3, const RuntimeMethod* method)
{
	{
		// return !(target.Equals(otherA) || target.Equals(otherB) || target.Equals(otherC));
		RuntimeObject * L_0 = ___target0;
		RuntimeObject * L_1 = ___otherA1;
		NullCheck((RuntimeObject *)L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_0, (RuntimeObject *)L_1);
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_3 = ___target0;
		RuntimeObject * L_4 = ___otherB2;
		NullCheck((RuntimeObject *)L_3);
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_3, (RuntimeObject *)L_4);
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_6 = ___target0;
		RuntimeObject * L_7 = ___otherC3;
		NullCheck((RuntimeObject *)L_6);
		bool L_8;
		L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_6, (RuntimeObject *)L_7);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_003b:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
