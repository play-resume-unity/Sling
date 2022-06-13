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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.Text.StringBuilder>
struct Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B;
// Baracuda.Pooling.Abstractions.ConcurrentObjectPool`1<System.Object>
struct ConcurrentObjectPool_1_t3AAF6885A51D1112D0C3350DC5F9A2D40CC52A1F;
// Baracuda.Pooling.Abstractions.ConcurrentObjectPool`1<System.Text.StringBuilder>
struct ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA;
// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Text.StringBuilder>
struct Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<Baracuda.Pooling.Abstractions.ObjectPool>
struct HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2;
// System.Collections.Generic.IEqualityComparer`1<Baracuda.Pooling.Abstractions.ObjectPool>
struct IEqualityComparer_1_t1F1346EDEFCE5B3B58CA9703CAC22109CCB8D933;
// Baracuda.Pooling.Interface.IObjectPool`1<System.Object>
struct IObjectPool_1_tD5AE3C97861CD803BE66C62086C77CAC1E08FFB6;
// Baracuda.Pooling.Interface.IObjectPool`1<System.Text.StringBuilder>
struct IObjectPool_1_t7AA614E1B85A195E42DB2FB52EDFDF7AAE61A046;
// System.Collections.Generic.IReadOnlyCollection`1<Baracuda.Pooling.Abstractions.ObjectPool>
struct IReadOnlyCollection_1_tA494E30F1BC28F765A8CD2770EA93F5F14342AAC;
// Baracuda.Pooling.Abstractions.ObjectPoolT`1<System.Object>
struct ObjectPoolT_1_t3F6161F332C5BAF3BA6506C76B809AEC3391D29A;
// Baracuda.Pooling.Abstractions.ObjectPoolT`1<System.Text.StringBuilder>
struct ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011;
// Baracuda.Pooling.Abstractions.ObjectPool`1<System.Object>
struct ObjectPool_1_t199CBD4030A60DF2FC11C526BFC7CBD843DBB140;
// Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>
struct ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE;
// System.Collections.Generic.Stack`1<System.Text.StringBuilder>
struct Stack_1_t62C4DDF6C951350F3D712756E9201B92F8215722;
// System.Collections.Generic.HashSet`1/Slot<Baracuda.Pooling.Abstractions.ObjectPool>[]
struct SlotU5BU5D_tD49E142D952F6E382BB23FFC01EADBE43C6E194B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t07FCD04C85CD281D82FBE2F68064BFD3F65C55F9;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t828C812BEF072FFC21417EDB80C2D660001EF60F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Baracuda.Pooling.Abstractions.ObjectPool
struct ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c
struct U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F;
// Baracuda.Pooling.Concretions.StringBuilderPool/<>c
struct U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IObjectPool_1_t7AA614E1B85A195E42DB2FB52EDFDF7AAE61A046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m9413588E6DDE5DB4E0F3272CC1C593482CB28A09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentObjectPool_1__ctor_m538400A29BBE8415BB153E3F1405F8D337146A34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mECECA6BA340A44DE5EC51D4FDF05299A5475D9B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m37F3855D30ED8928F8BB661F3AEFACC08644F478_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m1253BA1C3377155BD2B107C71FEABA6FA6267C59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPoolT_1__ctor_m15D51176C7E5D6184D025237268AF0ACD4108A19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_GetDisposable_m566784A9ACBD212E6B6444D49E22974652F4ED2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__6_0_mD0CDCC9CD1AB085D776808EF2A270A01D0B0BA03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__6_0_mF6CDBD552627E8307CD64C6F1090DEBBC18F4086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__6_1_m8F3B049F806B1D09F95CD603F6E9E3696FCE65A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__6_1_m9493EB6D135463757A4E3156FA5EA42D54A16FA1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t39A706E080B9B4EAB8AD141B52CC43FF2A0D350B 
{
public:

public:
};


// System.Object


// System.Collections.Generic.HashSet`1<Baracuda.Pooling.Abstractions.ObjectPool>
struct HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tD49E142D952F6E382BB23FFC01EADBE43C6E194B* ____slots_8;
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
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2, ____slots_8)); }
	inline SlotU5BU5D_tD49E142D952F6E382BB23FFC01EADBE43C6E194B* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tD49E142D952F6E382BB23FFC01EADBE43C6E194B** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tD49E142D952F6E382BB23FFC01EADBE43C6E194B* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t194FF6BED0107164A0A47626368B70B1A500DEB0  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool
struct ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D  : public RuntimeObject
{
public:

public:
};

struct ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_StaticFields
{
public:
	// Baracuda.Pooling.Abstractions.ConcurrentObjectPool`1<System.Text.StringBuilder> Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::pool
	ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_StaticFields, ___pool_0)); }
	inline ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA * get_pool_0() const { return ___pool_0; }
	inline ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}
};


// Baracuda.Pooling.Abstractions.ObjectPool
struct ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298  : public RuntimeObject
{
public:

public:
};

struct ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<Baracuda.Pooling.Abstractions.ObjectPool> Baracuda.Pooling.Abstractions.ObjectPool::activePools
	HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2 * ___activePools_0;

public:
	inline static int32_t get_offset_of_activePools_0() { return static_cast<int32_t>(offsetof(ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_StaticFields, ___activePools_0)); }
	inline HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2 * get_activePools_0() const { return ___activePools_0; }
	inline HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2 ** get_address_of_activePools_0() { return &___activePools_0; }
	inline void set_activePools_0(HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2 * value)
	{
		___activePools_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePools_0), (void*)value);
	}
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


// Baracuda.Pooling.Concretions.StringBuilderPool
struct StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602  : public RuntimeObject
{
public:

public:
};

struct StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_StaticFields
{
public:
	// Baracuda.Pooling.Abstractions.ObjectPoolT`1<System.Text.StringBuilder> Baracuda.Pooling.Concretions.StringBuilderPool::pool
	ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_StaticFields, ___pool_0)); }
	inline ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011 * get_pool_0() const { return ___pool_0; }
	inline ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
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

// Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c
struct U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F_StaticFields
{
public:
	// Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c::<>9
	U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Baracuda.Pooling.Concretions.StringBuilderPool/<>c
struct U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98_StaticFields
{
public:
	// Baracuda.Pooling.Concretions.StringBuilderPool/<>c Baracuda.Pooling.Concretions.StringBuilderPool/<>c::<>9
	U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>
struct ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE  : public ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298
{
public:
	// System.Int32 Baracuda.Pooling.Abstractions.ObjectPool`1::<CountAll>k__BackingField
	int32_t ___U3CCountAllU3Ek__BackingField_1;
	// System.Collections.Generic.Stack`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1::<Stack>k__BackingField
	Stack_1_t62C4DDF6C951350F3D712756E9201B92F8215722 * ___U3CStackU3Ek__BackingField_2;
	// System.Func`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1::<CreateFunc>k__BackingField
	Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 * ___U3CCreateFuncU3Ek__BackingField_3;
	// System.Action`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1::<ActionOnGet>k__BackingField
	Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * ___U3CActionOnGetU3Ek__BackingField_4;
	// System.Action`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1::<ActionOnRelease>k__BackingField
	Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * ___U3CActionOnReleaseU3Ek__BackingField_5;
	// System.Action`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1::<ActionOnDestroy>k__BackingField
	Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * ___U3CActionOnDestroyU3Ek__BackingField_6;
	// System.Int32 Baracuda.Pooling.Abstractions.ObjectPool`1::<MaxSize>k__BackingField
	int32_t ___U3CMaxSizeU3Ek__BackingField_7;
	// System.Boolean Baracuda.Pooling.Abstractions.ObjectPool`1::<CollectionCheck>k__BackingField
	bool ___U3CCollectionCheckU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CCountAllU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE, ___U3CCountAllU3Ek__BackingField_1)); }
	inline int32_t get_U3CCountAllU3Ek__BackingField_1() const { return ___U3CCountAllU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CCountAllU3Ek__BackingField_1() { return &___U3CCountAllU3Ek__BackingField_1; }
	inline void set_U3CCountAllU3Ek__BackingField_1(int32_t value)
	{
		___U3CCountAllU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CStackU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE, ___U3CStackU3Ek__BackingField_2)); }
	inline Stack_1_t62C4DDF6C951350F3D712756E9201B92F8215722 * get_U3CStackU3Ek__BackingField_2() const { return ___U3CStackU3Ek__BackingField_2; }
	inline Stack_1_t62C4DDF6C951350F3D712756E9201B92F8215722 ** get_address_of_U3CStackU3Ek__BackingField_2() { return &___U3CStackU3Ek__BackingField_2; }
	inline void set_U3CStackU3Ek__BackingField_2(Stack_1_t62C4DDF6C951350F3D712756E9201B92F8215722 * value)
	{
		___U3CStackU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStackU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCreateFuncU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE, ___U3CCreateFuncU3Ek__BackingField_3)); }
	inline Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 * get_U3CCreateFuncU3Ek__BackingField_3() const { return ___U3CCreateFuncU3Ek__BackingField_3; }
	inline Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 ** get_address_of_U3CCreateFuncU3Ek__BackingField_3() { return &___U3CCreateFuncU3Ek__BackingField_3; }
	inline void set_U3CCreateFuncU3Ek__BackingField_3(Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 * value)
	{
		___U3CCreateFuncU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCreateFuncU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActionOnGetU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE, ___U3CActionOnGetU3Ek__BackingField_4)); }
	inline Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * get_U3CActionOnGetU3Ek__BackingField_4() const { return ___U3CActionOnGetU3Ek__BackingField_4; }
	inline Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B ** get_address_of_U3CActionOnGetU3Ek__BackingField_4() { return &___U3CActionOnGetU3Ek__BackingField_4; }
	inline void set_U3CActionOnGetU3Ek__BackingField_4(Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * value)
	{
		___U3CActionOnGetU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActionOnGetU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActionOnReleaseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE, ___U3CActionOnReleaseU3Ek__BackingField_5)); }
	inline Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * get_U3CActionOnReleaseU3Ek__BackingField_5() const { return ___U3CActionOnReleaseU3Ek__BackingField_5; }
	inline Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B ** get_address_of_U3CActionOnReleaseU3Ek__BackingField_5() { return &___U3CActionOnReleaseU3Ek__BackingField_5; }
	inline void set_U3CActionOnReleaseU3Ek__BackingField_5(Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * value)
	{
		___U3CActionOnReleaseU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActionOnReleaseU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActionOnDestroyU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE, ___U3CActionOnDestroyU3Ek__BackingField_6)); }
	inline Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * get_U3CActionOnDestroyU3Ek__BackingField_6() const { return ___U3CActionOnDestroyU3Ek__BackingField_6; }
	inline Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B ** get_address_of_U3CActionOnDestroyU3Ek__BackingField_6() { return &___U3CActionOnDestroyU3Ek__BackingField_6; }
	inline void set_U3CActionOnDestroyU3Ek__BackingField_6(Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * value)
	{
		___U3CActionOnDestroyU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActionOnDestroyU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMaxSizeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE, ___U3CMaxSizeU3Ek__BackingField_7)); }
	inline int32_t get_U3CMaxSizeU3Ek__BackingField_7() const { return ___U3CMaxSizeU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CMaxSizeU3Ek__BackingField_7() { return &___U3CMaxSizeU3Ek__BackingField_7; }
	inline void set_U3CMaxSizeU3Ek__BackingField_7(int32_t value)
	{
		___U3CMaxSizeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CCollectionCheckU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE, ___U3CCollectionCheckU3Ek__BackingField_8)); }
	inline bool get_U3CCollectionCheckU3Ek__BackingField_8() const { return ___U3CCollectionCheckU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CCollectionCheckU3Ek__BackingField_8() { return &___U3CCollectionCheckU3Ek__BackingField_8; }
	inline void set_U3CCollectionCheckU3Ek__BackingField_8(bool value)
	{
		___U3CCollectionCheckU3Ek__BackingField_8 = value;
	}
};

struct ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.String> Baracuda.Pooling.Abstractions.ObjectPool`1::typeCache
	Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * ___typeCache_9;

public:
	inline static int32_t get_offset_of_typeCache_9() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE_StaticFields, ___typeCache_9)); }
	inline Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * get_typeCache_9() const { return ___typeCache_9; }
	inline Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 ** get_address_of_typeCache_9() { return &___typeCache_9; }
	inline void set_typeCache_9(Dictionary_2_t606AA85440D2767289243C98586DE3C541D183D0 * value)
	{
		___typeCache_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeCache_9), (void*)value);
	}
};


// Baracuda.Pooling.Utils.PooledObject`1<System.Object>
struct PooledObject_1_tC7161F76C4AD0A2A336D91EB3EC645A42341E6CE 
{
public:
	// T Baracuda.Pooling.Utils.PooledObject`1::Value
	RuntimeObject * ___Value_0;
	// Baracuda.Pooling.Interface.IObjectPool`1<T> Baracuda.Pooling.Utils.PooledObject`1::_pool
	RuntimeObject* ____pool_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(PooledObject_1_tC7161F76C4AD0A2A336D91EB3EC645A42341E6CE, ___Value_0)); }
	inline RuntimeObject * get_Value_0() const { return ___Value_0; }
	inline RuntimeObject ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(RuntimeObject * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of__pool_1() { return static_cast<int32_t>(offsetof(PooledObject_1_tC7161F76C4AD0A2A336D91EB3EC645A42341E6CE, ____pool_1)); }
	inline RuntimeObject* get__pool_1() const { return ____pool_1; }
	inline RuntimeObject** get_address_of__pool_1() { return &____pool_1; }
	inline void set__pool_1(RuntimeObject* value)
	{
		____pool_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_1), (void*)value);
	}
};


// Baracuda.Pooling.Utils.PooledObject`1<System.Text.StringBuilder>
struct PooledObject_1_t91D613CEC3E4EBB6559F2036F13EED332C75EED8 
{
public:
	// T Baracuda.Pooling.Utils.PooledObject`1::Value
	StringBuilder_t * ___Value_0;
	// Baracuda.Pooling.Interface.IObjectPool`1<T> Baracuda.Pooling.Utils.PooledObject`1::_pool
	RuntimeObject* ____pool_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(PooledObject_1_t91D613CEC3E4EBB6559F2036F13EED332C75EED8, ___Value_0)); }
	inline StringBuilder_t * get_Value_0() const { return ___Value_0; }
	inline StringBuilder_t ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(StringBuilder_t * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of__pool_1() { return static_cast<int32_t>(offsetof(PooledObject_1_t91D613CEC3E4EBB6559F2036F13EED332C75EED8, ____pool_1)); }
	inline RuntimeObject* get__pool_1() const { return ____pool_1; }
	inline RuntimeObject** get_address_of__pool_1() { return &____pool_1; }
	inline void set__pool_1(RuntimeObject* value)
	{
		____pool_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_1), (void*)value);
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
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


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t07FCD04C85CD281D82FBE2F68064BFD3F65C55F9  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t828C812BEF072FFC21417EDB80C2D660001EF60F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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


// Baracuda.Pooling.Abstractions.ConcurrentObjectPool`1<System.Text.StringBuilder>
struct ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA  : public ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE
{
public:

public:
};


// Baracuda.Pooling.Abstractions.ObjectPoolT`1<System.Text.StringBuilder>
struct ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011  : public ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE
{
public:

public:
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

// System.Action`1<System.Text.StringBuilder>
struct Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Text.StringBuilder>
struct Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Baracuda.Pooling.Abstractions.ConcurrentObjectPool`1<System.Object>::.ctor(System.Func`1<T>,System.Action`1<T>,System.Action`1<T>,System.Action`1<T>,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentObjectPool_1__ctor_mC9FDED31B9FADFF291B4FB83DD9794894E0CF7C2_gshared (ConcurrentObjectPool_1_t3AAF6885A51D1112D0C3350DC5F9A2D40CC52A1F * __this, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___createFunc0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___actionOnGet1, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___actionOnRelease2, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___actionOnDestroy3, bool ___collectionCheck4, int32_t ___defaultCapacity5, int32_t ___maxSize6, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// Baracuda.Pooling.Utils.PooledObject`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1<System.Object>::GetDisposable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tC7161F76C4AD0A2A336D91EB3EC645A42341E6CE  ObjectPool_1_GetDisposable_m508F2AF10A629DD8C7E8AB726629128153525BD4_gshared (ObjectPool_1_t199CBD4030A60DF2FC11C526BFC7CBD843DBB140 * __this, const RuntimeMethod* method);
// System.Void Baracuda.Pooling.Abstractions.ObjectPoolT`1<System.Object>::.ctor(System.Func`1<T>,System.Action`1<T>,System.Action`1<T>,System.Action`1<T>,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoolT_1__ctor_m90457339A5D3F8AE02E5B4C1E67FAA58011A5FE4_gshared (ObjectPoolT_1_t3F6161F332C5BAF3BA6506C76B809AEC3391D29A * __this, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___createFunc0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___actionOnGet1, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___actionOnRelease2, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___actionOnDestroy3, bool ___collectionCheck4, int32_t ___defaultCapacity5, int32_t ___maxSize6, const RuntimeMethod* method);

// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void Baracuda.Pooling.Concretions.PooledStringBuilder::.ctor(Baracuda.Pooling.Interface.IObjectPool`1<System.Text.StringBuilder>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledStringBuilder__ctor_mA56DDEA70AF9FB56894A216A1F0B605DBFACE11E (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, RuntimeObject* ___pool0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Text.StringBuilder>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mECECA6BA340A44DE5EC51D4FDF05299A5475D9B6 (Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Text.StringBuilder>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9413588E6DDE5DB4E0F3272CC1C593482CB28A09 (Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Baracuda.Pooling.Abstractions.ConcurrentObjectPool`1<System.Text.StringBuilder>::.ctor(System.Func`1<T>,System.Action`1<T>,System.Action`1<T>,System.Action`1<T>,System.Boolean,System.Int32,System.Int32)
inline void ConcurrentObjectPool_1__ctor_m538400A29BBE8415BB153E3F1405F8D337146A34 (ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA * __this, Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 * ___createFunc0, Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * ___actionOnGet1, Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * ___actionOnRelease2, Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * ___actionOnDestroy3, bool ___collectionCheck4, int32_t ___defaultCapacity5, int32_t ___maxSize6, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA *, Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 *, Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B *, Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B *, Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B *, bool, int32_t, int32_t, const RuntimeMethod*))ConcurrentObjectPool_1__ctor_mC9FDED31B9FADFF291B4FB83DD9794894E0CF7C2_gshared)(__this, ___createFunc0, ___actionOnGet1, ___actionOnRelease2, ___actionOnDestroy3, ___collectionCheck4, ___defaultCapacity5, ___maxSize6, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<Baracuda.Pooling.Abstractions.ObjectPool>::Add(!0)
inline bool HashSet_1_Add_m37F3855D30ED8928F8BB661F3AEFACC08644F478 (HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2 * __this, ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2 *, ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298 *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::ReleaseUnmanagedResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_ReleaseUnmanagedResources_m6DF7C42B345203E959E0C81C0F72D280D0B6AE22 (ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298 * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<Baracuda.Pooling.Abstractions.ObjectPool>::.ctor()
inline void HashSet_1__ctor_m1253BA1C3377155BD2B107C71FEABA6FA6267C59 (HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void Baracuda.Pooling.Concretions.PooledStringBuilder::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledStringBuilder_System_IDisposable_Dispose_mA4B5768C4F11749D5DD580602018DF405E4B3DB2 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, const RuntimeMethod* method);
// System.String Baracuda.Pooling.Concretions.PooledStringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PooledStringBuilder_ToString_m0E218A1BAC36ED7C0FA22AAC7B928452E428DB99 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mF4FAD12F83A60C44901A6B5E6E01B23C40088864_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB (StringBuilder_t * __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m0EA6A4FF90B8F24A8E2EBA4AB7DF51B788856007_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m3BE4C94FB7DDD0AB42515FC321FBD03B81A03A1C (StringBuilder_t * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m4D6FCD9D4E03934155B20410F659352B0B7F7977_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m4B771D7BFE8A65C9A504EC5847A699EB678B02DB (StringBuilder_t * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mB6716CA07D071BD496AA53FE247182A7FE3146F7_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m6A9F30F50501260FD67DAFCAE70446DAA6B29B11_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m1835CBF49F6DAFA2AF554D6CC1056CE0DA05BE09_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m8DA7E8B858ADF12EF8CE62A4083B60510B1D1510 (StringBuilder_t * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mD374DF28BDA5809C9DDB381CB910FBB170E813E7_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mAD0BCB56ADBC3805F92DAE3A62645435176F78F7 (StringBuilder_t * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m4B7B160C22D9D7FEFCCC37CD13936EE08698F046_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2A0A1B4CB618B3E54066A410ADE613650F11D497 (StringBuilder_t * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mE604728CDF5524F3F6076EF6A421B390B6EFEB21_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m5D3A8746416033F84CC51CFA86BC7A497D6E8A31 (StringBuilder_t * __this, float ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m42EC7E66184E8BBF5955D1C7E82F91A0AFAEACE3_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, float ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m7AB8F81608D77A17FF201F39EE04A2E417C86995 (StringBuilder_t * __this, double ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mDA46B5ED3E56CA78685524B5389679313C6E2CDC_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, double ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m4268B63E42DA97ACA5A5FFBFD5022EEC9C8E2E10 (StringBuilder_t * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Decimal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m02629404E77C050122AC55BF528830E42C878BDB_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method);
// Baracuda.Pooling.Utils.PooledObject`1<T> Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::GetDisposable()
inline PooledObject_1_t91D613CEC3E4EBB6559F2036F13EED332C75EED8  ObjectPool_1_GetDisposable_m566784A9ACBD212E6B6444D49E22974652F4ED2E (ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE * __this, const RuntimeMethod* method)
{
	return ((  PooledObject_1_t91D613CEC3E4EBB6559F2036F13EED332C75EED8  (*) (ObjectPool_1_tAAAC9C05E53AFAB3B5D8C3D692A32A104AAB0CDE *, const RuntimeMethod*))ObjectPool_1_GetDisposable_m508F2AF10A629DD8C7E8AB726629128153525BD4_gshared)(__this, method);
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPoolT`1<System.Text.StringBuilder>::.ctor(System.Func`1<T>,System.Action`1<T>,System.Action`1<T>,System.Action`1<T>,System.Boolean,System.Int32,System.Int32)
inline void ObjectPoolT_1__ctor_m15D51176C7E5D6184D025237268AF0ACD4108A19 (ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011 * __this, Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 * ___createFunc0, Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * ___actionOnGet1, Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * ___actionOnRelease2, Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * ___actionOnDestroy3, bool ___collectionCheck4, int32_t ___defaultCapacity5, int32_t ___maxSize6, const RuntimeMethod* method)
{
	((  void (*) (ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011 *, Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 *, Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B *, Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B *, Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B *, bool, int32_t, int32_t, const RuntimeMethod*))ObjectPoolT_1__ctor_m90457339A5D3F8AE02E5B4C1E67FAA58011A5FE4_gshared)(__this, ___createFunc0, ___actionOnGet1, ___actionOnRelease2, ___actionOnDestroy3, ___collectionCheck4, ___defaultCapacity5, ___maxSize6, method);
}
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDFAE346F621E54C28AC0961AD7CEF3F8467B044B (U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4421A43ABE6CB9CBADECDE1FDBE556F4C6FA907D (U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98 * __this, const RuntimeMethod* method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD3DED676D31DEA0E1C0B30307EA4269998BE5409 (String_t* ___s0, const RuntimeMethod* method)
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
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentStringBuilderPool_Init_m901C900462D0203A9F01FDDD767B369CEE34CDDD (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * ConcurrentStringBuilderPool_Get_m52C1985DBEE85963ACC1851D1E273C8FA3798179 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA * L_0 = ((ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_StaticFields*)il2cpp_codegen_static_fields_for(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var))->get_pool_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = VirtFuncInvoker0< StringBuilder_t * >::Invoke(12 /* T Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::Get() */, L_0);
		return L_1;
	}
}
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::ReleaseStringBuilder(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentStringBuilderPool_ReleaseStringBuilder_m5AC7AA961261F72B39C993B821B8A8C8F035EBF7 (StringBuilder_t * ___toRelease0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA * L_0 = ((ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_StaticFields*)il2cpp_codegen_static_fields_for(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var))->get_pool_0();
		StringBuilder_t * L_1 = ___toRelease0;
		NullCheck(L_0);
		VirtActionInvoker1< StringBuilder_t * >::Invoke(13 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::Release(T) */, L_0, L_1);
		// }
		return;
	}
}
// System.String Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::Release(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConcurrentStringBuilderPool_Release_m665B89CC6E3B74E24FD7588CB9D46B7C532F5386 (StringBuilder_t * ___toRelease0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var str = toRelease.ToString();
		StringBuilder_t * L_0 = ___toRelease0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		// pool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA * L_2 = ((ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_StaticFields*)il2cpp_codegen_static_fields_for(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var))->get_pool_0();
		StringBuilder_t * L_3 = ___toRelease0;
		NullCheck(L_2);
		VirtActionInvoker1< StringBuilder_t * >::Invoke(13 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::Release(T) */, L_2, L_3);
		// return str;
		return L_1;
	}
}
// Baracuda.Pooling.Concretions.PooledStringBuilder Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::GetDisposable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9  ConcurrentStringBuilderPool_GetDisposable_m80DC1A3AECB527640B4416FB8B80A4570CCA2E53 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new PooledStringBuilder(pool);
		IL2CPP_RUNTIME_CLASS_INIT(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA * L_0 = ((ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_StaticFields*)il2cpp_codegen_static_fields_for(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var))->get_pool_0();
		PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		PooledStringBuilder__ctor_mA56DDEA70AF9FB56894A216A1F0B605DBFACE11E((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentStringBuilderPool__cctor_mBCDACB66C5AAD1A890C14114F13FADB6D15617E7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m9413588E6DDE5DB4E0F3272CC1C593482CB28A09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentObjectPool_1__ctor_m538400A29BBE8415BB153E3F1405F8D337146A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mECECA6BA340A44DE5EC51D4FDF05299A5475D9B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__6_0_mD0CDCC9CD1AB085D776808EF2A270A01D0B0BA03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__6_1_m9493EB6D135463757A4E3156FA5EA42D54A16FA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ConcurrentObjectPool<StringBuilder> pool =
		//     new ConcurrentObjectPool<StringBuilder>(() => new StringBuilder(100), actionOnRelease: builder => builder.Clear());
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F_il2cpp_TypeInfo_var);
		U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F * L_0 = ((U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 * L_1 = (Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 *)il2cpp_codegen_object_new(Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332_il2cpp_TypeInfo_var);
		Func_1__ctor_mECECA6BA340A44DE5EC51D4FDF05299A5475D9B6(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__6_0_mD0CDCC9CD1AB085D776808EF2A270A01D0B0BA03_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mECECA6BA340A44DE5EC51D4FDF05299A5475D9B6_RuntimeMethod_var);
		U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F * L_2 = ((U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * L_3 = (Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B *)il2cpp_codegen_object_new(Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B_il2cpp_TypeInfo_var);
		Action_1__ctor_m9413588E6DDE5DB4E0F3272CC1C593482CB28A09(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__6_1_m9493EB6D135463757A4E3156FA5EA42D54A16FA1_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m9413588E6DDE5DB4E0F3272CC1C593482CB28A09_RuntimeMethod_var);
		ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA * L_4 = (ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA *)il2cpp_codegen_object_new(ConcurrentObjectPool_1_t39E18F7C3DEA5C1311D7C8227C24B441F5CCEAFA_il2cpp_TypeInfo_var);
		ConcurrentObjectPool_1__ctor_m538400A29BBE8415BB153E3F1405F8D337146A34(L_4, L_1, (Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B *)NULL, L_3, (Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B *)NULL, (bool)1, 1, ((int32_t)10000), /*hidden argument*/ConcurrentObjectPool_1__ctor_m538400A29BBE8415BB153E3F1405F8D337146A34_RuntimeMethod_var);
		((ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_StaticFields*)il2cpp_codegen_static_fields_for(ConcurrentStringBuilderPool_t47E62B259251E514701E8DB83CD958D1D554584D_il2cpp_TypeInfo_var))->set_pool_0(L_4);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m4CC4E1907E139B5BB2A07B6FFF8AA18B826D3CF0 (EmbeddedAttribute_t07FCD04C85CD281D82FBE2F68064BFD3F65C55F9 * __this, const RuntimeMethod* method)
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m82624CA8031B86356C0461C1F8F99F4D8DF16497 (IsReadOnlyAttribute_t828C812BEF072FFC21417EDB80C2D660001EF60F * __this, const RuntimeMethod* method)
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
// System.Collections.Generic.IReadOnlyCollection`1<Baracuda.Pooling.Abstractions.ObjectPool> Baracuda.Pooling.Abstractions.ObjectPool::get_ActivePools()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_get_ActivePools_m6A55DDB3ADAC01F56FEB80E0632786A3ADE6EF4B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IReadOnlyCollection<ObjectPool> ActivePools => activePools;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_il2cpp_TypeInfo_var);
		HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2 * L_0 = ((ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_il2cpp_TypeInfo_var))->get_activePools_0();
		return L_0;
	}
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool__ctor_m20575AA776F4785511CBB8D0D33810E8B60F69FC (ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m37F3855D30ED8928F8BB661F3AEFACC08644F478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ObjectPool()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// activePools.Add(this);
		IL2CPP_RUNTIME_CLASS_INIT(ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_il2cpp_TypeInfo_var);
		HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2 * L_0 = ((ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_il2cpp_TypeInfo_var))->get_activePools_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = HashSet_1_Add_m37F3855D30ED8928F8BB661F3AEFACC08644F478(L_0, __this, /*hidden argument*/HashSet_1_Add_m37F3855D30ED8928F8BB661F3AEFACC08644F478_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::ReleaseUnmanagedResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_ReleaseUnmanagedResources_m6DF7C42B345203E959E0C81C0F72D280D0B6AE22 (ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298 * __this, const RuntimeMethod* method)
{
	{
		// Clear();
		VirtActionInvoker0::Invoke(5 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool::Clear() */, __this);
		// }
		return;
	}
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Dispose_m62C6D13F9F53580811A969DE9640A23723637D31 (ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		// ReleaseUnmanagedResources();
		ObjectPool_ReleaseUnmanagedResources_m6DF7C42B345203E959E0C81C0F72D280D0B6AE22(__this, /*hidden argument*/NULL);
		// if (disposing)
		bool L_0 = ___disposing0;
		// }
		return;
	}
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Dispose_m0D2C3A245A714DB30E99C98B782952DF45D28CA1 (ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool::Dispose(System.Boolean) */, __this, (bool)1);
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_Finalize_m9343A2F49DFCB4EF23DB342F89A45F2E799F6471 (ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Dispose(false);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10, IL_0010)
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Pooling.Abstractions.ObjectPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool__cctor_mF8E73A169B6F0554696910CC6DADC8EC5F201BBE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m1253BA1C3377155BD2B107C71FEABA6FA6267C59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly HashSet<ObjectPool> activePools = new HashSet<ObjectPool>();
		HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2 * L_0 = (HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2 *)il2cpp_codegen_object_new(HashSet_1_t004B59CF2B540AB718EE1E5BE662ADAC8FE40EB2_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m1253BA1C3377155BD2B107C71FEABA6FA6267C59(L_0, /*hidden argument*/HashSet_1__ctor_m1253BA1C3377155BD2B107C71FEABA6FA6267C59_RuntimeMethod_var);
		((ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPool_t04034CC54D9DA31665C799E22A5CECC040B31298_il2cpp_TypeInfo_var))->set_activePools_0(L_0);
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
// Conversion methods for marshalling of: Baracuda.Pooling.Concretions.PooledStringBuilder
IL2CPP_EXTERN_C void PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshal_pinvoke(const PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9& unmarshaled, PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshaled_pinvoke& marshaled)
{
	Exception_t* ____pool_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pool' of type 'PooledStringBuilder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pool_1Exception, NULL);
}
IL2CPP_EXTERN_C void PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshal_pinvoke_back(const PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshaled_pinvoke& marshaled, PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9& unmarshaled)
{
	Exception_t* ____pool_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pool' of type 'PooledStringBuilder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pool_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Baracuda.Pooling.Concretions.PooledStringBuilder
IL2CPP_EXTERN_C void PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshal_pinvoke_cleanup(PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Baracuda.Pooling.Concretions.PooledStringBuilder
IL2CPP_EXTERN_C void PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshal_com(const PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9& unmarshaled, PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshaled_com& marshaled)
{
	Exception_t* ____pool_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pool' of type 'PooledStringBuilder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pool_1Exception, NULL);
}
IL2CPP_EXTERN_C void PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshal_com_back(const PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshaled_com& marshaled, PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9& unmarshaled)
{
	Exception_t* ____pool_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pool' of type 'PooledStringBuilder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pool_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Baracuda.Pooling.Concretions.PooledStringBuilder
IL2CPP_EXTERN_C void PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshal_com_cleanup(PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9_marshaled_com& marshaled)
{
}
// System.Void Baracuda.Pooling.Concretions.PooledStringBuilder::.ctor(Baracuda.Pooling.Interface.IObjectPool`1<System.Text.StringBuilder>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledStringBuilder__ctor_mA56DDEA70AF9FB56894A216A1F0B605DBFACE11E (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, RuntimeObject* ___pool0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectPool_1_t7AA614E1B85A195E42DB2FB52EDFDF7AAE61A046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value = pool.Get();
		RuntimeObject* L_0 = ___pool0;
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = InterfaceFuncInvoker0< StringBuilder_t * >::Invoke(1 /* T Baracuda.Pooling.Interface.IObjectPool`1<System.Text.StringBuilder>::Get() */, IObjectPool_1_t7AA614E1B85A195E42DB2FB52EDFDF7AAE61A046_il2cpp_TypeInfo_var, L_0);
		__this->set_Value_0(L_1);
		// _pool = pool;
		RuntimeObject* L_2 = ___pool0;
		__this->set__pool_1(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PooledStringBuilder__ctor_mA56DDEA70AF9FB56894A216A1F0B605DBFACE11E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___pool0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	PooledStringBuilder__ctor_mA56DDEA70AF9FB56894A216A1F0B605DBFACE11E(_thisAdjusted, ___pool0, method);
}
// System.Void Baracuda.Pooling.Concretions.PooledStringBuilder::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledStringBuilder_System_IDisposable_Dispose_mA4B5768C4F11749D5DD580602018DF405E4B3DB2 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectPool_1_t7AA614E1B85A195E42DB2FB52EDFDF7AAE61A046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _pool.Release(Value);
		RuntimeObject* L_0 = __this->get__pool_1();
		StringBuilder_t * L_1 = __this->get_Value_0();
		NullCheck(L_0);
		InterfaceActionInvoker1< StringBuilder_t * >::Invoke(3 /* System.Void Baracuda.Pooling.Interface.IObjectPool`1<System.Text.StringBuilder>::Release(T) */, IObjectPool_1_t7AA614E1B85A195E42DB2FB52EDFDF7AAE61A046_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PooledStringBuilder_System_IDisposable_Dispose_mA4B5768C4F11749D5DD580602018DF405E4B3DB2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	PooledStringBuilder_System_IDisposable_Dispose_mA4B5768C4F11749D5DD580602018DF405E4B3DB2(_thisAdjusted, method);
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::op_Implicit(Baracuda.Pooling.Concretions.PooledStringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_op_Implicit_m6327D5948C3B78750A25DC1E80D194DBE50B3748 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9  ___pooledObject0, const RuntimeMethod* method)
{
	{
		// return pooledObject.Value;
		PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9  L_0 = ___pooledObject0;
		StringBuilder_t * L_1 = L_0.get_Value_0();
		return L_1;
	}
}
// System.String Baracuda.Pooling.Concretions.PooledStringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PooledStringBuilder_ToString_m0E218A1BAC36ED7C0FA22AAC7B928452E428DB99 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, const RuntimeMethod* method)
{
	{
		// return Value.ToString();
		StringBuilder_t * L_0 = __this->get_Value_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* PooledStringBuilder_ToString_m0E218A1BAC36ED7C0FA22AAC7B928452E428DB99_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PooledStringBuilder_ToString_m0E218A1BAC36ED7C0FA22AAC7B928452E428DB99(_thisAdjusted, method);
	return _returnValue;
}
// System.String Baracuda.Pooling.Concretions.PooledStringBuilder::op_Implicit(Baracuda.Pooling.Concretions.PooledStringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PooledStringBuilder_op_Implicit_mDDF2A01E1B11BC32F73075CAE7544BB627926C26 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9  ___current0, const RuntimeMethod* method)
{
	{
		// return current.ToString();
		String_t* L_0;
		L_0 = PooledStringBuilder_ToString_m0E218A1BAC36ED7C0FA22AAC7B928452E428DB99((PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *)(&___current0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mF4FAD12F83A60C44901A6B5E6E01B23C40088864 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  StringBuilder_t * PooledStringBuilder_Append_mF4FAD12F83A60C44901A6B5E6E01B23C40088864_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	StringBuilder_t * _returnValue;
	_returnValue = PooledStringBuilder_Append_mF4FAD12F83A60C44901A6B5E6E01B23C40088864_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m0EA6A4FF90B8F24A8E2EBA4AB7DF51B788856007 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method)
{
	{
		// return Value.Append(value, repeatCount);
		StringBuilder_t * L_0 = __this->get_Value_0();
		Il2CppChar L_1 = ___value0;
		int32_t L_2 = ___repeatCount1;
		NullCheck(L_0);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t * PooledStringBuilder_Append_m0EA6A4FF90B8F24A8E2EBA4AB7DF51B788856007_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	StringBuilder_t * _returnValue;
	_returnValue = PooledStringBuilder_Append_m0EA6A4FF90B8F24A8E2EBA4AB7DF51B788856007_inline(_thisAdjusted, ___value0, ___repeatCount1, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m4D6FCD9D4E03934155B20410F659352B0B7F7977 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m3BE4C94FB7DDD0AB42515FC321FBD03B81A03A1C(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t * PooledStringBuilder_Append_m4D6FCD9D4E03934155B20410F659352B0B7F7977_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	StringBuilder_t * _returnValue;
	_returnValue = PooledStringBuilder_Append_m4D6FCD9D4E03934155B20410F659352B0B7F7977_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mB6716CA07D071BD496AA53FE247182A7FE3146F7 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method)
{
	{
		// return Value.Append(value, startIndex, charCount);
		StringBuilder_t * L_0 = __this->get_Value_0();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___value0;
		int32_t L_2 = ___startIndex1;
		int32_t L_3 = ___charCount2;
		NullCheck(L_0);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_m4B771D7BFE8A65C9A504EC5847A699EB678B02DB(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t * PooledStringBuilder_Append_mB6716CA07D071BD496AA53FE247182A7FE3146F7_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	StringBuilder_t * _returnValue;
	_returnValue = PooledStringBuilder_Append_mB6716CA07D071BD496AA53FE247182A7FE3146F7_inline(_thisAdjusted, ___value0, ___startIndex1, ___charCount2, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m6A9F30F50501260FD67DAFCAE70446DAA6B29B11 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, String_t* ___value0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  StringBuilder_t * PooledStringBuilder_Append_m6A9F30F50501260FD67DAFCAE70446DAA6B29B11_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	StringBuilder_t * _returnValue;
	_returnValue = PooledStringBuilder_Append_m6A9F30F50501260FD67DAFCAE70446DAA6B29B11_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m1835CBF49F6DAFA2AF554D6CC1056CE0DA05BE09 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t * PooledStringBuilder_Append_m1835CBF49F6DAFA2AF554D6CC1056CE0DA05BE09_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	StringBuilder_t * _returnValue;
	_returnValue = PooledStringBuilder_Append_m1835CBF49F6DAFA2AF554D6CC1056CE0DA05BE09_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mD374DF28BDA5809C9DDB381CB910FBB170E813E7 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m8DA7E8B858ADF12EF8CE62A4083B60510B1D1510(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t * PooledStringBuilder_Append_mD374DF28BDA5809C9DDB381CB910FBB170E813E7_AdjustorThunk (RuntimeObject * __this, int64_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	StringBuilder_t * _returnValue;
	_returnValue = PooledStringBuilder_Append_mD374DF28BDA5809C9DDB381CB910FBB170E813E7_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m4B7B160C22D9D7FEFCCC37CD13936EE08698F046 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, int16_t ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		int16_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mAD0BCB56ADBC3805F92DAE3A62645435176F78F7(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t * PooledStringBuilder_Append_m4B7B160C22D9D7FEFCCC37CD13936EE08698F046_AdjustorThunk (RuntimeObject * __this, int16_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	StringBuilder_t * _returnValue;
	_returnValue = PooledStringBuilder_Append_m4B7B160C22D9D7FEFCCC37CD13936EE08698F046_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mE604728CDF5524F3F6076EF6A421B390B6EFEB21 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m2A0A1B4CB618B3E54066A410ADE613650F11D497(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t * PooledStringBuilder_Append_mE604728CDF5524F3F6076EF6A421B390B6EFEB21_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	StringBuilder_t * _returnValue;
	_returnValue = PooledStringBuilder_Append_mE604728CDF5524F3F6076EF6A421B390B6EFEB21_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m42EC7E66184E8BBF5955D1C7E82F91A0AFAEACE3 (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		float L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m5D3A8746416033F84CC51CFA86BC7A497D6E8A31(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t * PooledStringBuilder_Append_m42EC7E66184E8BBF5955D1C7E82F91A0AFAEACE3_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	StringBuilder_t * _returnValue;
	_returnValue = PooledStringBuilder_Append_m42EC7E66184E8BBF5955D1C7E82F91A0AFAEACE3_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mDA46B5ED3E56CA78685524B5389679313C6E2CDC (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		double L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m7AB8F81608D77A17FF201F39EE04A2E417C86995(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t * PooledStringBuilder_Append_mDA46B5ED3E56CA78685524B5389679313C6E2CDC_AdjustorThunk (RuntimeObject * __this, double ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	StringBuilder_t * _returnValue;
	_returnValue = PooledStringBuilder_Append_mDA46B5ED3E56CA78685524B5389679313C6E2CDC_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.PooledStringBuilder::Append(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m02629404E77C050122AC55BF528830E42C878BDB (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m4268B63E42DA97ACA5A5FFBFD5022EEC9C8E2E10(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  StringBuilder_t * PooledStringBuilder_Append_m02629404E77C050122AC55BF528830E42C878BDB_AdjustorThunk (RuntimeObject * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * _thisAdjusted = reinterpret_cast<PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 *>(__this + _offset);
	StringBuilder_t * _returnValue;
	_returnValue = PooledStringBuilder_Append_m02629404E77C050122AC55BF528830E42C878BDB_inline(_thisAdjusted, ___value0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilderPool_Init_m6D7FA80DEE93177F21B0AFA6B907C8B6D65E3CD8 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.StringBuilderPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilderPool_Get_mAE9C8CA2ED8D833973655A636A3B4F943DE2517D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var);
		ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011 * L_0 = ((StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_StaticFields*)il2cpp_codegen_static_fields_for(StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var))->get_pool_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = VirtFuncInvoker0< StringBuilder_t * >::Invoke(12 /* T Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::Get() */, L_0);
		return L_1;
	}
}
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool::ReleaseStringBuilder(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilderPool_ReleaseStringBuilder_m40EC47F98D913DA248D8B575AFF63D36E566CA1B (StringBuilder_t * ___toRelease0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var);
		ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011 * L_0 = ((StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_StaticFields*)il2cpp_codegen_static_fields_for(StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var))->get_pool_0();
		StringBuilder_t * L_1 = ___toRelease0;
		NullCheck(L_0);
		VirtActionInvoker1< StringBuilder_t * >::Invoke(13 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::Release(T) */, L_0, L_1);
		// }
		return;
	}
}
// System.String Baracuda.Pooling.Concretions.StringBuilderPool::Release(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderPool_Release_m0A1C306DDA21B2202A32EC9C8D498C4FC864E12A (StringBuilder_t * ___toRelease0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var str = toRelease.ToString();
		StringBuilder_t * L_0 = ___toRelease0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		// pool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var);
		ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011 * L_2 = ((StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_StaticFields*)il2cpp_codegen_static_fields_for(StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var))->get_pool_0();
		StringBuilder_t * L_3 = ___toRelease0;
		NullCheck(L_2);
		VirtActionInvoker1< StringBuilder_t * >::Invoke(13 /* System.Void Baracuda.Pooling.Abstractions.ObjectPool`1<System.Text.StringBuilder>::Release(T) */, L_2, L_3);
		// return str;
		return L_1;
	}
}
// Baracuda.Pooling.Utils.PooledObject`1<System.Text.StringBuilder> Baracuda.Pooling.Concretions.StringBuilderPool::GetDisposable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_t91D613CEC3E4EBB6559F2036F13EED332C75EED8  StringBuilderPool_GetDisposable_m0B1CF2D37C0DB35AD3C0DA7DD0183E0A594EC5D2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_GetDisposable_m566784A9ACBD212E6B6444D49E22974652F4ED2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pool.GetDisposable();
		IL2CPP_RUNTIME_CLASS_INIT(StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var);
		ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011 * L_0 = ((StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_StaticFields*)il2cpp_codegen_static_fields_for(StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var))->get_pool_0();
		NullCheck(L_0);
		PooledObject_1_t91D613CEC3E4EBB6559F2036F13EED332C75EED8  L_1;
		L_1 = ObjectPool_1_GetDisposable_m566784A9ACBD212E6B6444D49E22974652F4ED2E(L_0, /*hidden argument*/ObjectPool_1_GetDisposable_m566784A9ACBD212E6B6444D49E22974652F4ED2E_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilderPool__cctor_m46A81AAA5726B41D0F84D69C8FBE4EAF18EACDD2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m9413588E6DDE5DB4E0F3272CC1C593482CB28A09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mECECA6BA340A44DE5EC51D4FDF05299A5475D9B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPoolT_1__ctor_m15D51176C7E5D6184D025237268AF0ACD4108A19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__6_0_mF6CDBD552627E8307CD64C6F1090DEBBC18F4086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__6_1_m8F3B049F806B1D09F95CD603F6E9E3696FCE65A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ObjectPoolT<StringBuilder> pool =
		//     new ObjectPoolT<StringBuilder>(() => new StringBuilder(100), actionOnRelease: builder => builder.Clear());
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98_il2cpp_TypeInfo_var);
		U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98 * L_0 = ((U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 * L_1 = (Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332 *)il2cpp_codegen_object_new(Func_1_t73B81EB6D8D6D40630855D70A98B62409B6DD332_il2cpp_TypeInfo_var);
		Func_1__ctor_mECECA6BA340A44DE5EC51D4FDF05299A5475D9B6(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__6_0_mF6CDBD552627E8307CD64C6F1090DEBBC18F4086_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mECECA6BA340A44DE5EC51D4FDF05299A5475D9B6_RuntimeMethod_var);
		U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98 * L_2 = ((U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B * L_3 = (Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B *)il2cpp_codegen_object_new(Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B_il2cpp_TypeInfo_var);
		Action_1__ctor_m9413588E6DDE5DB4E0F3272CC1C593482CB28A09(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__6_1_m8F3B049F806B1D09F95CD603F6E9E3696FCE65A2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m9413588E6DDE5DB4E0F3272CC1C593482CB28A09_RuntimeMethod_var);
		ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011 * L_4 = (ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011 *)il2cpp_codegen_object_new(ObjectPoolT_1_tACACD1F55AEAD91450A276F340ACB01A82160011_il2cpp_TypeInfo_var);
		ObjectPoolT_1__ctor_m15D51176C7E5D6184D025237268AF0ACD4108A19(L_4, L_1, (Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B *)NULL, L_3, (Action_1_tCF2C305DBE461020EF5FBDB044A838B3D7D6C28B *)NULL, (bool)1, 1, ((int32_t)10000), /*hidden argument*/ObjectPoolT_1__ctor_m15D51176C7E5D6184D025237268AF0ACD4108A19_RuntimeMethod_var);
		((StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_StaticFields*)il2cpp_codegen_static_fields_for(StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var))->set_pool_0(L_4);
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
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m34A9E95C038FBB77CB856A52D26BDEE1878E4032 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F * L_0 = (U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F *)il2cpp_codegen_object_new(U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDFAE346F621E54C28AC0961AD7CEF3F8467B044B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDFAE346F621E54C28AC0961AD7CEF3F8467B044B (U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c::<.cctor>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * U3CU3Ec_U3C_cctorU3Eb__6_0_mD0CDCC9CD1AB085D776808EF2A270A01D0B0BA03 (U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new ConcurrentObjectPool<StringBuilder>(() => new StringBuilder(100), actionOnRelease: builder => builder.Clear());
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_0, ((int32_t)100), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Baracuda.Pooling.Concretions.ConcurrentStringBuilderPool/<>c::<.cctor>b__6_1(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__6_1_m9493EB6D135463757A4E3156FA5EA42D54A16FA1 (U3CU3Ec_t02FA4C7B554F71512C2FFE12F45B0D2127D0E35F * __this, StringBuilder_t * ___builder0, const RuntimeMethod* method)
{
	{
		// new ConcurrentObjectPool<StringBuilder>(() => new StringBuilder(100), actionOnRelease: builder => builder.Clear());
		StringBuilder_t * L_0 = ___builder0;
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_0, /*hidden argument*/NULL);
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
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2959B0FB30C9758B20757CD7493DFBD54971F2ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98 * L_0 = (U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98 *)il2cpp_codegen_object_new(U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4421A43ABE6CB9CBADECDE1FDBE556F4C6FA907D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4421A43ABE6CB9CBADECDE1FDBE556F4C6FA907D (U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.StringBuilder Baracuda.Pooling.Concretions.StringBuilderPool/<>c::<.cctor>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * U3CU3Ec_U3C_cctorU3Eb__6_0_mF6CDBD552627E8307CD64C6F1090DEBBC18F4086 (U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new ObjectPoolT<StringBuilder>(() => new StringBuilder(100), actionOnRelease: builder => builder.Clear());
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_0, ((int32_t)100), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Baracuda.Pooling.Concretions.StringBuilderPool/<>c::<.cctor>b__6_1(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__6_1_m8F3B049F806B1D09F95CD603F6E9E3696FCE65A2 (U3CU3Ec_t2FAAA47C5C43D02AF4CC7C4C6EF5D1F9B2ECCD98 * __this, StringBuilder_t * ___builder0, const RuntimeMethod* method)
{
	{
		// new ObjectPoolT<StringBuilder>(() => new StringBuilder(100), actionOnRelease: builder => builder.Clear());
		StringBuilder_t * L_0 = ___builder0;
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_0, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m0EA6A4FF90B8F24A8E2EBA4AB7DF51B788856007_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method)
{
	{
		// return Value.Append(value, repeatCount);
		StringBuilder_t * L_0 = __this->get_Value_0();
		Il2CppChar L_1 = ___value0;
		int32_t L_2 = ___repeatCount1;
		NullCheck(L_0);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m4D6FCD9D4E03934155B20410F659352B0B7F7977_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m3BE4C94FB7DDD0AB42515FC321FBD03B81A03A1C(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mB6716CA07D071BD496AA53FE247182A7FE3146F7_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method)
{
	{
		// return Value.Append(value, startIndex, charCount);
		StringBuilder_t * L_0 = __this->get_Value_0();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___value0;
		int32_t L_2 = ___startIndex1;
		int32_t L_3 = ___charCount2;
		NullCheck(L_0);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_m4B771D7BFE8A65C9A504EC5847A699EB678B02DB(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m1835CBF49F6DAFA2AF554D6CC1056CE0DA05BE09_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mD374DF28BDA5809C9DDB381CB910FBB170E813E7_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m8DA7E8B858ADF12EF8CE62A4083B60510B1D1510(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m4B7B160C22D9D7FEFCCC37CD13936EE08698F046_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, int16_t ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		int16_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mAD0BCB56ADBC3805F92DAE3A62645435176F78F7(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mE604728CDF5524F3F6076EF6A421B390B6EFEB21_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m2A0A1B4CB618B3E54066A410ADE613650F11D497(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m42EC7E66184E8BBF5955D1C7E82F91A0AFAEACE3_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		float L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m5D3A8746416033F84CC51CFA86BC7A497D6E8A31(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_mDA46B5ED3E56CA78685524B5389679313C6E2CDC_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		double L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m7AB8F81608D77A17FF201F39EE04A2E417C86995(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * PooledStringBuilder_Append_m02629404E77C050122AC55BF528830E42C878BDB_inline (PooledStringBuilder_t08CDE60394EC6226C5F4E9494DCB5DF7A64024B9 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		// return Value.Append(value);
		StringBuilder_t * L_0 = __this->get_Value_0();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m4268B63E42DA97ACA5A5FFBFD5022EEC9C8E2E10(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
