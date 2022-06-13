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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>
struct CacheDict_2_t4D7FFB59CB1E33398FCBBDC6A739780EC97F3F14;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45;
// System.Dynamic.Utils.CacheDict`2/Entry<System.Type,System.Reflection.MethodInfo>[]
struct EntryU5BU5D_t3E4AEFAA0ABBD054E4E392601E3F1035C4BE044F;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Linq.Expressions.Compiler.DelegateHelpers/TypeInfo
struct TypeInfo_tCB7C5D68A7D2E103EE385F6A98C4D4650B40C3EA;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateHelpers_t53462A7EFA44884CDFCED4FD8E5B4B23C3355E21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeInfo_tCB7C5D68A7D2E103EE385F6A98C4D4650B40C3EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3F61292BB81F31E8772CDD8E979180F58971ACEC;
IL2CPP_EXTERN_C String_t* _stringLiteral62DC780D907DFCB6F3A8D1F831DB97E0BA327B8D;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral6BEBD9F607428C1FE4D2E28576D75E48DB2D961C;
IL2CPP_EXTERN_C String_t* _stringLiteral9D0E978C2541B8A36DFB07E397656689CE9E713F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7E78BE66617B9AE36B6A6E170E3545EE25C1D11;
IL2CPP_EXTERN_C String_t* _stringLiteralB9F145AB19A709D5B620C9ECA85F4249FCDD7A8D;
IL2CPP_EXTERN_C String_t* _stringLiteralE68F97D6FE7BDE1580C3707638EA581299D01EDE;
IL2CPP_EXTERN_C String_t* _stringLiteralF592ECC3A1212A67A57DD1C238C4347055593AD5;
IL2CPP_EXTERN_C const RuntimeMethod* CacheDict_2__ctor_m0F4765979864C9F6DD7E47A0C1D1660B3F3BF9A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Max_m2E60496646FFAAB20A13DEE9F52EC21F0054B72B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Min_mF34A8C52F05D82106B957FFEFD4AC109780D5D1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_GetActionType_mB2149FF0863683C12CAB613047F7B65BE37A01C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_GetFuncType_mDD1BD8824C9A10940943E7F07B2D3EB9DDB51172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Action_10_tC87B1FF87A5AEEF831CFFF813B113BCEC4441B1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_11_tDC3906C70C5FC1EFEFE2CFE01616FED82BD1D387_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_12_t0CC03D306E7B48D9F9C43BCA3703BC7CF7F0C65B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_13_t7C9531D2FD2F6FAB96D74A53B17C2A522E1DCE7C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_14_tC827F24EEE3EF978B6D774EEC9FF647166D8E7E1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_15_t140E740FBFC554D71582DFA657A5EC5154CDDDFD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_16_t91FCA2E110B50079CFAE045F23BE39D967D85B67_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_1_t7D823428ED3712A9B99087C923EC89B623C7A2C2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_2_t72E6313162A96F729F4F003F8246DADD5C18BFD2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_3_t8140A6367F178061F15F4055A8BCA40393541A2A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_4_tD28D42A4292463F705B47F880EFB511B545E542E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_5_tA6AFF6C73F02C52B05DEC41CE33883D526D3E721_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_6_tA2A1629295002396E2D175189FD493D52EC11D8D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_7_t11EDC9C1645CB59C334DA9085E3555BBC628D0BE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_8_tEBB57D09BE09B4493165BBD8F99903F7F69F4B7B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_9_t4ED61496E86F1D25A4273CBAE1464432C57F638D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_10_tE1221E6727CF61297E985CA2DE308EBDC0485CD2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_11_t715A31F4725D40447FD715C44D8B28E37268A8B7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_12_t928609915489D59AACB40DF936C0C8153CE0FC22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_13_t3E487C23B6F8F5CFDDC1751381477E1F4DD394E1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_14_t15221195B06499F07BA6723F50C2BC74F91D1C8D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_15_tCA3FB59004C4941A2B06C9B9CE2D3FDA4476FF05_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_16_tDA2F449DE5FD9DB63EF5F4262DA580A7C5154DB6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_17_t0A417EC2D7881B7B8D4C839DB2EAD9D456B57D6D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_1_tB66A3A54F7A3CB45DDFC2A21ECB6B6CD5FC9CD7B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_2_t8C79C0C3A7EFB0365BA38FD899BFF5EE4A55B0CE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_3_tFF348B8F726F8029B5CF70BB8AF9F2D8CFBAD55F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_4_t537E296C9208AF1A8F123F978E9D350F64C495E7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_5_t44AD8987729F713D8C10BB9B6D80AF0126E7E895_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_6_t5CF500FFB07829DA3B05A2F03193CBDA745BCB68_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_7_t0F6DFF63092937ACE8FEBC88FC2D05D6B9905D67_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_8_t335672908455757400843274C17B20DCE96BDBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_9_t0E4968536FB6CA8785EDF3909543D9FF3B5A51FC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD7A92A53AC93772205DA609EE6D57CD672A8EBE1 
{
public:

public:
};


// System.Object


// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE  : public RuntimeObject
{
public:
	// System.Int32 System.Dynamic.Utils.CacheDict`2::_mask
	int32_t ____mask_0;
	// System.Dynamic.Utils.CacheDict`2/Entry<TKey,TValue>[] System.Dynamic.Utils.CacheDict`2::_entries
	EntryU5BU5D_t3E4AEFAA0ABBD054E4E392601E3F1035C4BE044F* ____entries_1;

public:
	inline static int32_t get_offset_of__mask_0() { return static_cast<int32_t>(offsetof(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE, ____mask_0)); }
	inline int32_t get__mask_0() const { return ____mask_0; }
	inline int32_t* get_address_of__mask_0() { return &____mask_0; }
	inline void set__mask_0(int32_t value)
	{
		____mask_0 = value;
	}

	inline static int32_t get_offset_of__entries_1() { return static_cast<int32_t>(offsetof(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE, ____entries_1)); }
	inline EntryU5BU5D_t3E4AEFAA0ABBD054E4E392601E3F1035C4BE044F* get__entries_1() const { return ____entries_1; }
	inline EntryU5BU5D_t3E4AEFAA0ABBD054E4E392601E3F1035C4BE044F** get_address_of__entries_1() { return &____entries_1; }
	inline void set__entries_1(EntryU5BU5D_t3E4AEFAA0ABBD054E4E392601E3F1035C4BE044F* value)
	{
		____entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entries_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Linq.Expressions.Compiler.DelegateHelpers
struct DelegateHelpers_t53462A7EFA44884CDFCED4FD8E5B4B23C3355E21  : public RuntimeObject
{
public:

public:
};

struct DelegateHelpers_t53462A7EFA44884CDFCED4FD8E5B4B23C3355E21_StaticFields
{
public:
	// System.Linq.Expressions.Compiler.DelegateHelpers/TypeInfo System.Linq.Expressions.Compiler.DelegateHelpers::_DelegateCache
	TypeInfo_tCB7C5D68A7D2E103EE385F6A98C4D4650B40C3EA * ____DelegateCache_0;

public:
	inline static int32_t get_offset_of__DelegateCache_0() { return static_cast<int32_t>(offsetof(DelegateHelpers_t53462A7EFA44884CDFCED4FD8E5B4B23C3355E21_StaticFields, ____DelegateCache_0)); }
	inline TypeInfo_tCB7C5D68A7D2E103EE385F6A98C4D4650B40C3EA * get__DelegateCache_0() const { return ____DelegateCache_0; }
	inline TypeInfo_tCB7C5D68A7D2E103EE385F6A98C4D4650B40C3EA ** get_address_of__DelegateCache_0() { return &____DelegateCache_0; }
	inline void set__DelegateCache_0(TypeInfo_tCB7C5D68A7D2E103EE385F6A98C4D4650B40C3EA * value)
	{
		____DelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____DelegateCache_0), (void*)value);
	}
};


// System.Linq.Enumerable
struct Enumerable_t928C505614FDD67F6D61FB58BED73235DF569B0E  : public RuntimeObject
{
public:

public:
};


// System.Linq.Error
struct Error_t2D04CC8BAE165E534F2E8EDD93065E47E2C3405D  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Error
struct Error_t664FF1BC68C1CC58CDAD27ADFA76F11566491012  : public RuntimeObject
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


// System.Linq.Expressions.Strings
struct Strings_t9B11E0633D7437BEE624F9A07F5EB7D217E29C07  : public RuntimeObject
{
public:

public:
};


// System.Threading.Tasks.TaskExtensions
struct TaskExtensions_tFD9B66CDABF02C9B5137E14CBD217D5A4E8E459F  : public RuntimeObject
{
public:

public:
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

// System.Linq.Expressions.Compiler.DelegateHelpers/TypeInfo
struct TypeInfo_tCB7C5D68A7D2E103EE385F6A98C4D4650B40C3EA  : public RuntimeObject
{
public:

public:
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.Linq.Expressions.Expression/TryGetFuncActionArgsResult
struct TryGetFuncActionArgsResult_t2EEAA6B7F56E118EB80D2C2F706A5C6895373BF8 
{
public:
	// System.Int32 System.Linq.Expressions.Expression/TryGetFuncActionArgsResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TryGetFuncActionArgsResult_t2EEAA6B7F56E118EB80D2C2F706A5C6895373BF8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
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


// System.Void System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheDict_2__ctor_m00697894AA73CE236834AB326F94431441B26B2D_gshared (CacheDict_2_t4D7FFB59CB1E33398FCBBDC6A739780EC97F3F14 * __this, int32_t ___size0, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Compiler.DelegateHelpers/TypeInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInfo__ctor_m06A7565C7792C5DA0ABE859A6089AC9CFD7AF24C (TypeInfo_tCB7C5D68A7D2E103EE385F6A98C4D4650B40C3EA * __this, const RuntimeMethod* method);
// System.Exception System.Linq.Error::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599 (float ___f0, const RuntimeMethod* method);
// System.Exception System.Linq.Error::NoElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (const RuntimeMethod* method);
// System.Boolean System.Double::IsNaN(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347 (double ___d0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.Linq.Expressions.Strings::get_TypeMustNotBeByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_TypeMustNotBeByRef_m8A284BD0FDC2EC8C927F132C2B38641C4897AD93 (const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.String System.Linq.Expressions.Strings::get_IncorrectNumberOfTypeArgsForFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_IncorrectNumberOfTypeArgsForFunc_m37D29C6A6D5E65A43B619294BC6F95E336B37DBA (const RuntimeMethod* method);
// System.String System.Linq.Expressions.Strings::get_IncorrectNumberOfTypeArgsForAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_IncorrectNumberOfTypeArgsForAction_mDBB43DA976EE353E292E348697ACAEC5A0F58323 (const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsByRef_mDB28F5482F9AE4407101B294CD3ADB01106CA4A3 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPointer_mAD86040E1709C9A16431CB66C3D247A3DB9EBCEE (Type_t * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression/TryGetFuncActionArgsResult System.Linq.Expressions.Expression::ValidateTryGetFuncActionArgs(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Expression_ValidateTryGetFuncActionArgs_mA168B7AA8FB5F99756C30ADD4AD487A3A1BC774F (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___typeArgs0, const RuntimeMethod* method);
// System.Exception System.Linq.Expressions.Error::TypeMustNotBeByRef(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_TypeMustNotBeByRef_mC11650C353BC3C69E93320CBFCEA50DB8CD8B089 (String_t* ___paramName0, const RuntimeMethod* method);
// System.Type System.Linq.Expressions.Compiler.DelegateHelpers::GetFuncType(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * DelegateHelpers_GetFuncType_m7C44A0845A97C0AAC4FF5377AF04074DF7C4E051 (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types0, const RuntimeMethod* method);
// System.Exception System.Linq.Expressions.Error::IncorrectNumberOfTypeArgsForFunc(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_IncorrectNumberOfTypeArgsForFunc_m18B9F1F1F5CC9DDBE0F7072C4AA24746C650A3AD (String_t* ___paramName0, const RuntimeMethod* method);
// System.Type System.Linq.Expressions.Compiler.DelegateHelpers::GetActionType(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * DelegateHelpers_GetActionType_m83B3D14C39927F30402C33410200B3FCA24CF324 (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types0, const RuntimeMethod* method);
// System.Exception System.Linq.Expressions.Error::IncorrectNumberOfTypeArgsForAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_IncorrectNumberOfTypeArgsForAction_mE88BF07C695CEDC52742B13D1996BC75111813D7 (String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>::.ctor(System.Int32)
inline void CacheDict_2__ctor_m0F4765979864C9F6DD7E47A0C1D1660B3F3BF9A5 (CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * __this, int32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE *, int32_t, const RuntimeMethod*))CacheDict_2__ctor_m00697894AA73CE236834AB326F94431441B26B2D_gshared)(__this, ___size0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.Type System.Linq.Expressions.Compiler.DelegateHelpers::GetFuncType(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * DelegateHelpers_GetFuncType_m7C44A0845A97C0AAC4FF5377AF04074DF7C4E051 (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_10_tE1221E6727CF61297E985CA2DE308EBDC0485CD2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_11_t715A31F4725D40447FD715C44D8B28E37268A8B7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_12_t928609915489D59AACB40DF936C0C8153CE0FC22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_13_t3E487C23B6F8F5CFDDC1751381477E1F4DD394E1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_14_t15221195B06499F07BA6723F50C2BC74F91D1C8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_15_tCA3FB59004C4941A2B06C9B9CE2D3FDA4476FF05_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_16_tDA2F449DE5FD9DB63EF5F4262DA580A7C5154DB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_17_t0A417EC2D7881B7B8D4C839DB2EAD9D456B57D6D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tB66A3A54F7A3CB45DDFC2A21ECB6B6CD5FC9CD7B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8C79C0C3A7EFB0365BA38FD899BFF5EE4A55B0CE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tFF348B8F726F8029B5CF70BB8AF9F2D8CFBAD55F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_4_t537E296C9208AF1A8F123F978E9D350F64C495E7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_5_t44AD8987729F713D8C10BB9B6D80AF0126E7E895_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_6_t5CF500FFB07829DA3B05A2F03193CBDA745BCB68_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_7_t0F6DFF63092937ACE8FEBC88FC2D05D6B9905D67_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_8_t335672908455757400843274C17B20DCE96BDBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_9_t0E4968536FB6CA8785EDF3909543D9FF3B5A51FC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_0 = ___types0;
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_0077;
			}
			case 3:
			{
				goto IL_0088;
			}
			case 4:
			{
				goto IL_0099;
			}
			case 5:
			{
				goto IL_00aa;
			}
			case 6:
			{
				goto IL_00bb;
			}
			case 7:
			{
				goto IL_00cc;
			}
			case 8:
			{
				goto IL_00dd;
			}
			case 9:
			{
				goto IL_00ee;
			}
			case 10:
			{
				goto IL_00ff;
			}
			case 11:
			{
				goto IL_0110;
			}
			case 12:
			{
				goto IL_0121;
			}
			case 13:
			{
				goto IL_0132;
			}
			case 14:
			{
				goto IL_0143;
			}
			case 15:
			{
				goto IL_0154;
			}
			case 16:
			{
				goto IL_0165;
			}
		}
	}
	{
		goto IL_0176;
	}

IL_0055:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Func_1_tB66A3A54F7A3CB45DDFC2A21ECB6B6CD5FC9CD7B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_4 = ___types0;
		NullCheck(L_3);
		Type_t * L_5;
		L_5 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_3, L_4);
		return L_5;
	}

IL_0066:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (Func_2_t8C79C0C3A7EFB0365BA38FD899BFF5EE4A55B0CE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8 = ___types0;
		NullCheck(L_7);
		Type_t * L_9;
		L_9 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_7, L_8);
		return L_9;
	}

IL_0077:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (Func_3_tFF348B8F726F8029B5CF70BB8AF9F2D8CFBAD55F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_12 = ___types0;
		NullCheck(L_11);
		Type_t * L_13;
		L_13 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_11, L_12);
		return L_13;
	}

IL_0088:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (Func_4_t537E296C9208AF1A8F123F978E9D350F64C495E7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_14, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_16 = ___types0;
		NullCheck(L_15);
		Type_t * L_17;
		L_17 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_15, L_16);
		return L_17;
	}

IL_0099:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (Func_5_t44AD8987729F713D8C10BB9B6D80AF0126E7E895_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_18, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_20 = ___types0;
		NullCheck(L_19);
		Type_t * L_21;
		L_21 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_19, L_20);
		return L_21;
	}

IL_00aa:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (Func_6_t5CF500FFB07829DA3B05A2F03193CBDA745BCB68_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_22, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_24 = ___types0;
		NullCheck(L_23);
		Type_t * L_25;
		L_25 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_23, L_24);
		return L_25;
	}

IL_00bb:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (Func_7_t0F6DFF63092937ACE8FEBC88FC2D05D6B9905D67_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_26, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_28 = ___types0;
		NullCheck(L_27);
		Type_t * L_29;
		L_29 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_27, L_28);
		return L_29;
	}

IL_00cc:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_30 = { reinterpret_cast<intptr_t> (Func_8_t335672908455757400843274C17B20DCE96BDBA3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_31;
		L_31 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_30, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_32 = ___types0;
		NullCheck(L_31);
		Type_t * L_33;
		L_33 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_31, L_32);
		return L_33;
	}

IL_00dd:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_34 = { reinterpret_cast<intptr_t> (Func_9_t0E4968536FB6CA8785EDF3909543D9FF3B5A51FC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_35;
		L_35 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_34, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_36 = ___types0;
		NullCheck(L_35);
		Type_t * L_37;
		L_37 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_35, L_36);
		return L_37;
	}

IL_00ee:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_38 = { reinterpret_cast<intptr_t> (Func_10_tE1221E6727CF61297E985CA2DE308EBDC0485CD2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39;
		L_39 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_38, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_40 = ___types0;
		NullCheck(L_39);
		Type_t * L_41;
		L_41 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_39, L_40);
		return L_41;
	}

IL_00ff:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_42 = { reinterpret_cast<intptr_t> (Func_11_t715A31F4725D40447FD715C44D8B28E37268A8B7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43;
		L_43 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_42, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_44 = ___types0;
		NullCheck(L_43);
		Type_t * L_45;
		L_45 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_43, L_44);
		return L_45;
	}

IL_0110:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_46 = { reinterpret_cast<intptr_t> (Func_12_t928609915489D59AACB40DF936C0C8153CE0FC22_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_47;
		L_47 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_46, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_48 = ___types0;
		NullCheck(L_47);
		Type_t * L_49;
		L_49 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_47, L_48);
		return L_49;
	}

IL_0121:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_50 = { reinterpret_cast<intptr_t> (Func_13_t3E487C23B6F8F5CFDDC1751381477E1F4DD394E1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_51;
		L_51 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_50, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_52 = ___types0;
		NullCheck(L_51);
		Type_t * L_53;
		L_53 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_51, L_52);
		return L_53;
	}

IL_0132:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_54 = { reinterpret_cast<intptr_t> (Func_14_t15221195B06499F07BA6723F50C2BC74F91D1C8D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_55;
		L_55 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_54, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_56 = ___types0;
		NullCheck(L_55);
		Type_t * L_57;
		L_57 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_55, L_56);
		return L_57;
	}

IL_0143:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_58 = { reinterpret_cast<intptr_t> (Func_15_tCA3FB59004C4941A2B06C9B9CE2D3FDA4476FF05_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59;
		L_59 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_58, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_60 = ___types0;
		NullCheck(L_59);
		Type_t * L_61;
		L_61 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_59, L_60);
		return L_61;
	}

IL_0154:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_62 = { reinterpret_cast<intptr_t> (Func_16_tDA2F449DE5FD9DB63EF5F4262DA580A7C5154DB6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_63;
		L_63 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_62, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_64 = ___types0;
		NullCheck(L_63);
		Type_t * L_65;
		L_65 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_63, L_64);
		return L_65;
	}

IL_0165:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_66 = { reinterpret_cast<intptr_t> (Func_17_t0A417EC2D7881B7B8D4C839DB2EAD9D456B57D6D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_67;
		L_67 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_66, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_68 = ___types0;
		NullCheck(L_67);
		Type_t * L_69;
		L_69 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_67, L_68);
		return L_69;
	}

IL_0176:
	{
		return (Type_t *)NULL;
	}
}
// System.Type System.Linq.Expressions.Compiler.DelegateHelpers::GetActionType(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * DelegateHelpers_GetActionType_m83B3D14C39927F30402C33410200B3FCA24CF324 (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_10_tC87B1FF87A5AEEF831CFFF813B113BCEC4441B1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_11_tDC3906C70C5FC1EFEFE2CFE01616FED82BD1D387_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_12_t0CC03D306E7B48D9F9C43BCA3703BC7CF7F0C65B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_13_t7C9531D2FD2F6FAB96D74A53B17C2A522E1DCE7C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_14_tC827F24EEE3EF978B6D774EEC9FF647166D8E7E1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_15_t140E740FBFC554D71582DFA657A5EC5154CDDDFD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_16_t91FCA2E110B50079CFAE045F23BE39D967D85B67_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7D823428ED3712A9B99087C923EC89B623C7A2C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t72E6313162A96F729F4F003F8246DADD5C18BFD2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t8140A6367F178061F15F4055A8BCA40393541A2A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4_tD28D42A4292463F705B47F880EFB511B545E542E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_5_tA6AFF6C73F02C52B05DEC41CE33883D526D3E721_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_6_tA2A1629295002396E2D175189FD493D52EC11D8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_7_t11EDC9C1645CB59C334DA9085E3555BBC628D0BE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_8_tEBB57D09BE09B4493165BBD8F99903F7F69F4B7B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_9_t4ED61496E86F1D25A4273CBAE1464432C57F638D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_0 = ___types0;
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0053;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0080;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00a2;
			}
			case 6:
			{
				goto IL_00b3;
			}
			case 7:
			{
				goto IL_00c4;
			}
			case 8:
			{
				goto IL_00d5;
			}
			case 9:
			{
				goto IL_00e6;
			}
			case 10:
			{
				goto IL_00f7;
			}
			case 11:
			{
				goto IL_0108;
			}
			case 12:
			{
				goto IL_0119;
			}
			case 13:
			{
				goto IL_012a;
			}
			case 14:
			{
				goto IL_013b;
			}
			case 15:
			{
				goto IL_014c;
			}
			case 16:
			{
				goto IL_015d;
			}
		}
	}
	{
		goto IL_016e;
	}

IL_0053:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_005e:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (Action_1_t7D823428ED3712A9B99087C923EC89B623C7A2C2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = ___types0;
		NullCheck(L_5);
		Type_t * L_7;
		L_7 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_5, L_6);
		return L_7;
	}

IL_006f:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (Action_2_t72E6313162A96F729F4F003F8246DADD5C18BFD2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_10 = ___types0;
		NullCheck(L_9);
		Type_t * L_11;
		L_11 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_9, L_10);
		return L_11;
	}

IL_0080:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_12 = { reinterpret_cast<intptr_t> (Action_3_t8140A6367F178061F15F4055A8BCA40393541A2A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13;
		L_13 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_12, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_14 = ___types0;
		NullCheck(L_13);
		Type_t * L_15;
		L_15 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_13, L_14);
		return L_15;
	}

IL_0091:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (Action_4_tD28D42A4292463F705B47F880EFB511B545E542E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_16, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_18 = ___types0;
		NullCheck(L_17);
		Type_t * L_19;
		L_19 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_17, L_18);
		return L_19;
	}

IL_00a2:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (Action_5_tA6AFF6C73F02C52B05DEC41CE33883D526D3E721_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21;
		L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_22 = ___types0;
		NullCheck(L_21);
		Type_t * L_23;
		L_23 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_21, L_22);
		return L_23;
	}

IL_00b3:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (Action_6_tA2A1629295002396E2D175189FD493D52EC11D8D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_24, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_26 = ___types0;
		NullCheck(L_25);
		Type_t * L_27;
		L_27 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_25, L_26);
		return L_27;
	}

IL_00c4:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (Action_7_t11EDC9C1645CB59C334DA9085E3555BBC628D0BE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29;
		L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_28, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_30 = ___types0;
		NullCheck(L_29);
		Type_t * L_31;
		L_31 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_29, L_30);
		return L_31;
	}

IL_00d5:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_32 = { reinterpret_cast<intptr_t> (Action_8_tEBB57D09BE09B4493165BBD8F99903F7F69F4B7B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33;
		L_33 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_32, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_34 = ___types0;
		NullCheck(L_33);
		Type_t * L_35;
		L_35 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_33, L_34);
		return L_35;
	}

IL_00e6:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_36 = { reinterpret_cast<intptr_t> (Action_9_t4ED61496E86F1D25A4273CBAE1464432C57F638D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37;
		L_37 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_36, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_38 = ___types0;
		NullCheck(L_37);
		Type_t * L_39;
		L_39 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_37, L_38);
		return L_39;
	}

IL_00f7:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_40 = { reinterpret_cast<intptr_t> (Action_10_tC87B1FF87A5AEEF831CFFF813B113BCEC4441B1F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_41;
		L_41 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_40, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_42 = ___types0;
		NullCheck(L_41);
		Type_t * L_43;
		L_43 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_41, L_42);
		return L_43;
	}

IL_0108:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_44 = { reinterpret_cast<intptr_t> (Action_11_tDC3906C70C5FC1EFEFE2CFE01616FED82BD1D387_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45;
		L_45 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_44, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_46 = ___types0;
		NullCheck(L_45);
		Type_t * L_47;
		L_47 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_45, L_46);
		return L_47;
	}

IL_0119:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_48 = { reinterpret_cast<intptr_t> (Action_12_t0CC03D306E7B48D9F9C43BCA3703BC7CF7F0C65B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_49;
		L_49 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_48, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_50 = ___types0;
		NullCheck(L_49);
		Type_t * L_51;
		L_51 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_49, L_50);
		return L_51;
	}

IL_012a:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_52 = { reinterpret_cast<intptr_t> (Action_13_t7C9531D2FD2F6FAB96D74A53B17C2A522E1DCE7C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_53;
		L_53 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_52, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_54 = ___types0;
		NullCheck(L_53);
		Type_t * L_55;
		L_55 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_53, L_54);
		return L_55;
	}

IL_013b:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_56 = { reinterpret_cast<intptr_t> (Action_14_tC827F24EEE3EF978B6D774EEC9FF647166D8E7E1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_57;
		L_57 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_56, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_58 = ___types0;
		NullCheck(L_57);
		Type_t * L_59;
		L_59 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_57, L_58);
		return L_59;
	}

IL_014c:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_60 = { reinterpret_cast<intptr_t> (Action_15_t140E740FBFC554D71582DFA657A5EC5154CDDDFD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_61;
		L_61 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_60, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_62 = ___types0;
		NullCheck(L_61);
		Type_t * L_63;
		L_63 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_61, L_62);
		return L_63;
	}

IL_015d:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_64 = { reinterpret_cast<intptr_t> (Action_16_t91FCA2E110B50079CFAE045F23BE39D967D85B67_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_65;
		L_65 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_64, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_66 = ___types0;
		NullCheck(L_65);
		Type_t * L_67;
		L_67 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(98 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_65, L_66);
		return L_67;
	}

IL_016e:
	{
		return (Type_t *)NULL;
	}
}
// System.Void System.Linq.Expressions.Compiler.DelegateHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelpers__cctor_m5DD02AD2BCF54612FD08DDD182DC71B74DCA1C6D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateHelpers_t53462A7EFA44884CDFCED4FD8E5B4B23C3355E21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeInfo_tCB7C5D68A7D2E103EE385F6A98C4D4650B40C3EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeInfo_tCB7C5D68A7D2E103EE385F6A98C4D4650B40C3EA * L_0 = (TypeInfo_tCB7C5D68A7D2E103EE385F6A98C4D4650B40C3EA *)il2cpp_codegen_object_new(TypeInfo_tCB7C5D68A7D2E103EE385F6A98C4D4650B40C3EA_il2cpp_TypeInfo_var);
		TypeInfo__ctor_m06A7565C7792C5DA0ABE859A6089AC9CFD7AF24C(L_0, /*hidden argument*/NULL);
		((DelegateHelpers_t53462A7EFA44884CDFCED4FD8E5B4B23C3355E21_StaticFields*)il2cpp_codegen_static_fields_for(DelegateHelpers_t53462A7EFA44884CDFCED4FD8E5B4B23C3355E21_il2cpp_TypeInfo_var))->set__DelegateCache_0(L_0);
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
// System.Single System.Linq.Enumerable::Min(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Enumerable_Min_mF34A8C52F05D82106B957FFEFD4AC109780D5D1E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	float V_3 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Min_mF34A8C52F05D82106B957FFEFD4AC109780D5D1E_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = (0.0f);
		V_1 = (bool)0;
		RuntimeObject* L_2 = ___source0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003d;
		}

IL_001f:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			float L_5;
			L_5 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0039;
			}
		}

IL_0029:
		{
			float L_7 = V_3;
			float L_8 = V_0;
			if ((((float)L_7) < ((float)L_8)))
			{
				goto IL_0035;
			}
		}

IL_002d:
		{
			float L_9 = V_3;
			bool L_10;
			L_10 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_003d;
			}
		}

IL_0035:
		{
			float L_11 = V_3;
			V_0 = L_11;
			goto IL_003d;
		}

IL_0039:
		{
			float L_12 = V_3;
			V_0 = L_12;
			V_1 = (bool)1;
		}

IL_003d:
		{
			RuntimeObject* L_13 = V_2;
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_001f;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x51, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_2;
			if (!L_15)
			{
				goto IL_0050;
			}
		}

IL_004a:
		{
			RuntimeObject* L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_16);
		}

IL_0050:
		{
			IL2CPP_END_FINALLY(71)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x51, IL_0051)
	}

IL_0051:
	{
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0056;
		}
	}
	{
		float L_18 = V_0;
		return L_18;
	}

IL_0056:
	{
		Exception_t * L_19;
		L_19 = Error_NoElements_mB89E91246572F009281D79730950808F17C3F353(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Min_mF34A8C52F05D82106B957FFEFD4AC109780D5D1E_RuntimeMethod_var)));
	}
}
// System.Single System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Enumerable_Max_m2E60496646FFAAB20A13DEE9F52EC21F0054B72B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	float V_3 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1;
		L_1 = Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Max_m2E60496646FFAAB20A13DEE9F52EC21F0054B72B_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = (0.0f);
		V_1 = (bool)0;
		RuntimeObject* L_2 = ___source0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_001f:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			float L_5;
			L_5 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_003a;
			}
		}

IL_0029:
		{
			float L_7 = V_3;
			float L_8 = V_0;
			if ((((float)L_7) > ((float)L_8)))
			{
				goto IL_0036;
			}
		}

IL_002d:
		{
			float L_9 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
			bool L_10;
			L_10 = Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347(((double)((double)L_9)), /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_003e;
			}
		}

IL_0036:
		{
			float L_11 = V_3;
			V_0 = L_11;
			goto IL_003e;
		}

IL_003a:
		{
			float L_12 = V_3;
			V_0 = L_12;
			V_1 = (bool)1;
		}

IL_003e:
		{
			RuntimeObject* L_13 = V_2;
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_001f;
			}
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_2;
			if (!L_15)
			{
				goto IL_0051;
			}
		}

IL_004b:
		{
			RuntimeObject* L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_16);
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(72)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		float L_18 = V_0;
		return L_18;
	}

IL_0057:
	{
		Exception_t * L_19;
		L_19 = Error_NoElements_mB89E91246572F009281D79730950808F17C3F353(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Max_m2E60496646FFAAB20A13DEE9F52EC21F0054B72B_RuntimeMethod_var)));
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
// System.Exception System.Linq.Error::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Linq.Error::MoreThanOneElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_MoreThanOneElement_mDB56C9FA4C344A86553D6AFB66D10B290302C53A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BEBD9F607428C1FE4D2E28576D75E48DB2D961C);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, _stringLiteral6BEBD9F607428C1FE4D2E28576D75E48DB2D961C, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Exception System.Linq.Error::MoreThanOneMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D0E978C2541B8A36DFB07E397656689CE9E713F);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, _stringLiteral9D0E978C2541B8A36DFB07E397656689CE9E713F, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Exception System.Linq.Error::NoElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7E78BE66617B9AE36B6A6E170E3545EE25C1D11);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, _stringLiteralB7E78BE66617B9AE36B6A6E170E3545EE25C1D11, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Exception System.Linq.Error::NoMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE68F97D6FE7BDE1580C3707638EA581299D01EDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_0, _stringLiteralE68F97D6FE7BDE1580C3707638EA581299D01EDE, /*hidden argument*/NULL);
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
// System.Exception System.Linq.Expressions.Error::TypeMustNotBeByRef(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_TypeMustNotBeByRef_mC11650C353BC3C69E93320CBFCEA50DB8CD8B089 (String_t* ___paramName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Strings_get_TypeMustNotBeByRef_m8A284BD0FDC2EC8C927F132C2B38641C4897AD93(/*hidden argument*/NULL);
		String_t* L_1 = ___paramName0;
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Exception System.Linq.Expressions.Error::IncorrectNumberOfTypeArgsForFunc(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_IncorrectNumberOfTypeArgsForFunc_m18B9F1F1F5CC9DDBE0F7072C4AA24746C650A3AD (String_t* ___paramName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Strings_get_IncorrectNumberOfTypeArgsForFunc_m37D29C6A6D5E65A43B619294BC6F95E336B37DBA(/*hidden argument*/NULL);
		String_t* L_1 = ___paramName0;
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Exception System.Linq.Expressions.Error::IncorrectNumberOfTypeArgsForAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_IncorrectNumberOfTypeArgsForAction_mE88BF07C695CEDC52742B13D1996BC75111813D7 (String_t* ___paramName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Strings_get_IncorrectNumberOfTypeArgsForAction_mDBB43DA976EE353E292E348697ACAEC5A0F58323(/*hidden argument*/NULL);
		String_t* L_1 = ___paramName0;
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Linq.Expressions.Expression/TryGetFuncActionArgsResult System.Linq.Expressions.Expression::ValidateTryGetFuncActionArgs(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Expression_ValidateTryGetFuncActionArgs_mA168B7AA8FB5F99756C30ADD4AD487A3A1BC774F (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___typeArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_0 = ___typeArgs0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0005:
	{
		V_0 = 0;
		goto IL_0042;
	}

IL_0009:
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1 = ___typeArgs0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Type_t * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Type_t * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0018;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0018:
	{
		Type_t * L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = Type_get_IsByRef_mDB28F5482F9AE4407101B294CD3ADB01106CA4A3(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0022;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0022:
	{
		Type_t * L_9 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_9, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_13 = V_1;
		NullCheck(L_13);
		bool L_14;
		L_14 = Type_get_IsPointer_mAD86040E1709C9A16431CB66C3D247A3DB9EBCEE(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_003e;
		}
	}

IL_003c:
	{
		return (int32_t)(3);
	}

IL_003e:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_16 = V_0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_17 = ___typeArgs0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0009;
		}
	}
	{
		return (int32_t)(0);
	}
}
// System.Type System.Linq.Expressions.Expression::GetFuncType(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Expression_GetFuncType_mDD1BD8824C9A10940943E7F07B2D3EB9DDB51172 (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___typeArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateHelpers_t53462A7EFA44884CDFCED4FD8E5B4B23C3355E21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * G_B7_0 = NULL;
	Type_t * G_B6_0 = NULL;
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_0 = ___typeArgs0;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Expression_ValidateTryGetFuncActionArgs_mA168B7AA8FB5F99756C30ADD4AD487A3A1BC774F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0027;
	}

IL_0011:
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62DC780D907DFCB6F3A8D1F831DB97E0BA327B8D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Expression_GetFuncType_mDD1BD8824C9A10940943E7F07B2D3EB9DDB51172_RuntimeMethod_var)));
	}

IL_001c:
	{
		Exception_t * L_5;
		L_5 = Error_TypeMustNotBeByRef_mC11650C353BC3C69E93320CBFCEA50DB8CD8B089(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62DC780D907DFCB6F3A8D1F831DB97E0BA327B8D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Expression_GetFuncType_mDD1BD8824C9A10940943E7F07B2D3EB9DDB51172_RuntimeMethod_var)));
	}

IL_0027:
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = ___typeArgs0;
		IL2CPP_RUNTIME_CLASS_INIT(DelegateHelpers_t53462A7EFA44884CDFCED4FD8E5B4B23C3355E21_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = DelegateHelpers_GetFuncType_m7C44A0845A97C0AAC4FF5377AF04074DF7C4E051(L_6, /*hidden argument*/NULL);
		Type_t * L_8 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_8, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B6_0 = L_8;
		if (!L_9)
		{
			G_B7_0 = L_8;
			goto IL_0041;
		}
	}
	{
		Exception_t * L_10;
		L_10 = Error_IncorrectNumberOfTypeArgsForFunc_m18B9F1F1F5CC9DDBE0F7072C4AA24746C650A3AD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62DC780D907DFCB6F3A8D1F831DB97E0BA327B8D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Expression_GetFuncType_mDD1BD8824C9A10940943E7F07B2D3EB9DDB51172_RuntimeMethod_var)));
	}

IL_0041:
	{
		return G_B7_0;
	}
}
// System.Type System.Linq.Expressions.Expression::GetActionType(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Expression_GetActionType_mB2149FF0863683C12CAB613047F7B65BE37A01C8 (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___typeArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateHelpers_t53462A7EFA44884CDFCED4FD8E5B4B23C3355E21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * G_B7_0 = NULL;
	Type_t * G_B6_0 = NULL;
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_0 = ___typeArgs0;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Expression_ValidateTryGetFuncActionArgs_mA168B7AA8FB5F99756C30ADD4AD487A3A1BC774F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0027;
	}

IL_0011:
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62DC780D907DFCB6F3A8D1F831DB97E0BA327B8D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Expression_GetActionType_mB2149FF0863683C12CAB613047F7B65BE37A01C8_RuntimeMethod_var)));
	}

IL_001c:
	{
		Exception_t * L_5;
		L_5 = Error_TypeMustNotBeByRef_mC11650C353BC3C69E93320CBFCEA50DB8CD8B089(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62DC780D907DFCB6F3A8D1F831DB97E0BA327B8D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Expression_GetActionType_mB2149FF0863683C12CAB613047F7B65BE37A01C8_RuntimeMethod_var)));
	}

IL_0027:
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = ___typeArgs0;
		IL2CPP_RUNTIME_CLASS_INIT(DelegateHelpers_t53462A7EFA44884CDFCED4FD8E5B4B23C3355E21_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = DelegateHelpers_GetActionType_m83B3D14C39927F30402C33410200B3FCA24CF324(L_6, /*hidden argument*/NULL);
		Type_t * L_8 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_8, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B6_0 = L_8;
		if (!L_9)
		{
			G_B7_0 = L_8;
			goto IL_0041;
		}
	}
	{
		Exception_t * L_10;
		L_10 = Error_IncorrectNumberOfTypeArgsForAction_mE88BF07C695CEDC52742B13D1996BC75111813D7(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62DC780D907DFCB6F3A8D1F831DB97E0BA327B8D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Expression_GetActionType_mB2149FF0863683C12CAB613047F7B65BE37A01C8_RuntimeMethod_var)));
	}

IL_0041:
	{
		return G_B7_0;
	}
}
// System.Void System.Linq.Expressions.Expression::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expression__cctor_m69557D69429E0BF3BEDD70DD10F659876E6968E3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2__ctor_m0F4765979864C9F6DD7E47A0C1D1660B3F3BF9A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * L_0 = (CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE *)il2cpp_codegen_object_new(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE_il2cpp_TypeInfo_var);
		CacheDict_2__ctor_m0F4765979864C9F6DD7E47A0C1D1660B3F3BF9A5(L_0, ((int32_t)40), /*hidden argument*/CacheDict_2__ctor_m0F4765979864C9F6DD7E47A0C1D1660B3F3BF9A5_RuntimeMethod_var);
		((Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields*)il2cpp_codegen_static_fields_for(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var))->set_s_lambdaDelegateCache_0(L_0);
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
// System.String System.Linq.Expressions.Strings::get_TypeMustNotBeByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_TypeMustNotBeByRef_m8A284BD0FDC2EC8C927F132C2B38641C4897AD93 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF592ECC3A1212A67A57DD1C238C4347055593AD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF592ECC3A1212A67A57DD1C238C4347055593AD5;
	}
}
// System.String System.Linq.Expressions.Strings::get_IncorrectNumberOfTypeArgsForFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_IncorrectNumberOfTypeArgsForFunc_m37D29C6A6D5E65A43B619294BC6F95E336B37DBA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F61292BB81F31E8772CDD8E979180F58971ACEC);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3F61292BB81F31E8772CDD8E979180F58971ACEC;
	}
}
// System.String System.Linq.Expressions.Strings::get_IncorrectNumberOfTypeArgsForAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_get_IncorrectNumberOfTypeArgsForAction_mDBB43DA976EE353E292E348697ACAEC5A0F58323 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9F145AB19A709D5B620C9ECA85F4249FCDD7A8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralB9F145AB19A709D5B620C9ECA85F4249FCDD7A8D;
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
// System.Void System.Linq.Expressions.Compiler.DelegateHelpers/TypeInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInfo__ctor_m06A7565C7792C5DA0ABE859A6089AC9CFD7AF24C (TypeInfo_tCB7C5D68A7D2E103EE385F6A98C4D4650B40C3EA * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
