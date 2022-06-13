#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement,System.Boolean>
struct Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>
struct IEnumerable_1_t1DF61E1B544C8E724AF497697E8240E8E4DC7386;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>
struct List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement[]
struct GUIElementU5BU5D_tFDB8CA59E1F1580F4F106334F4AB187C85FFB26A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t6C51436424F3B78EBF7BB5BB0FDFA6484B80EA9B;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// Baracuda.Monitoring.Internal.Utilities.FormatData
struct FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877;
// UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E;
// UnityEngine.GUISettings
struct GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0;
// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Baracuda.Monitoring.Interface.IMonitorUnit
struct IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D;
// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_t33EB90F8608437E6CF501D8067E96D0305E85104;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tEFDBAEBFD6E376A4BF2A953EBDC73A8714A82102;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer
struct MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8;
// Baracuda.Monitoring.MonitoringUIController
struct MonitoringUIController_t5B44C99F71B7218F5F723C914DE30FD3B877BFE6;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;
// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307;
// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement
struct GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMonitorProfile_t1A828B05BBC69025F81600D47835C7F10AC1D7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral732E6DFF6A0E543BD26C1936B7AA5AA61DB76591;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3969D2C3B753EEA6472EAA0FAFE56A82655C9C;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIElement_SetActive_m0F5FBB76A2CAB72163C9E825EDCD19D889909975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GUIElement_Update_m708789750216B6465F00A08294F1C031EE190543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m03E65FE413A55841FD0922DDFDE55415C40310CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__0_mE0B4C988989C787443173866DB0860E5275B5053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__1_m3375BA4D9594F4AB1FBC5D6FE25463675EC8AB82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__2_mDCAE50235EEAFF9A858258F8E3C2A2F3413406DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__3_mDC03B526B8D4533717144AA8154D4971C059A52F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t454C2EDB2B70F8A2ADFA374E7525DD776BF2CEBC 
{
public:

public:
};


// System.Object


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


// System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>
struct List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GUIElementU5BU5D_tFDB8CA59E1F1580F4F106334F4AB187C85FFB26A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C, ____items_1)); }
	inline GUIElementU5BU5D_tFDB8CA59E1F1580F4F106334F4AB187C85FFB26A* get__items_1() const { return ____items_1; }
	inline GUIElementU5BU5D_tFDB8CA59E1F1580F4F106334F4AB187C85FFB26A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GUIElementU5BU5D_tFDB8CA59E1F1580F4F106334F4AB187C85FFB26A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GUIElementU5BU5D_tFDB8CA59E1F1580F4F106334F4AB187C85FFB26A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C_StaticFields, ____emptyArray_5)); }
	inline GUIElementU5BU5D_tFDB8CA59E1F1580F4F106334F4AB187C85FFB26A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GUIElementU5BU5D_tFDB8CA59E1F1580F4F106334F4AB187C85FFB26A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GUIElementU5BU5D_tFDB8CA59E1F1580F4F106334F4AB187C85FFB26A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Image_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tooltip_2), (void*)value);
	}
};

struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Text_3)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Text_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Image_4)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Image_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TextImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___none_6)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_none_6() const { return ___none_6; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___none_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
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

// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307  : public RuntimeObject
{
public:
	// Baracuda.Monitoring.Interface.IMonitorUnit Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass36_0::unit
	RuntimeObject* ___unit_0;

public:
	inline static int32_t get_offset_of_unit_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307, ___unit_0)); }
	inline RuntimeObject* get_unit_0() const { return ___unit_0; }
	inline RuntimeObject** get_address_of_unit_0() { return &___unit_0; }
	inline void set_unit_0(RuntimeObject* value)
	{
		___unit_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unit_0), (void*)value);
	}
};


// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement
struct GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B  : public RuntimeObject
{
public:
	// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_0;
	// System.Int32 Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_1;
	// System.String Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::<Content>k__BackingField
	String_t* ___U3CContentU3Ek__BackingField_2;
	// Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::<FormatData>k__BackingField
	FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * ___U3CFormatDataU3Ek__BackingField_3;
	// System.Int32 Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::_size
	int32_t ____size_4;

public:
	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B, ___U3CEnabledU3Ek__BackingField_0)); }
	inline bool get_U3CEnabledU3Ek__BackingField_0() const { return ___U3CEnabledU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_0() { return &___U3CEnabledU3Ek__BackingField_0; }
	inline void set_U3CEnabledU3Ek__BackingField_0(bool value)
	{
		___U3CEnabledU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B, ___U3CIDU3Ek__BackingField_1)); }
	inline int32_t get_U3CIDU3Ek__BackingField_1() const { return ___U3CIDU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIDU3Ek__BackingField_1() { return &___U3CIDU3Ek__BackingField_1; }
	inline void set_U3CIDU3Ek__BackingField_1(int32_t value)
	{
		___U3CIDU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CContentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B, ___U3CContentU3Ek__BackingField_2)); }
	inline String_t* get_U3CContentU3Ek__BackingField_2() const { return ___U3CContentU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CContentU3Ek__BackingField_2() { return &___U3CContentU3Ek__BackingField_2; }
	inline void set_U3CContentU3Ek__BackingField_2(String_t* value)
	{
		___U3CContentU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContentU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFormatDataU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B, ___U3CFormatDataU3Ek__BackingField_3)); }
	inline FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * get_U3CFormatDataU3Ek__BackingField_3() const { return ___U3CFormatDataU3Ek__BackingField_3; }
	inline FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 ** get_address_of_U3CFormatDataU3Ek__BackingField_3() { return &___U3CFormatDataU3Ek__BackingField_3; }
	inline void set_U3CFormatDataU3Ek__BackingField_3(FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * value)
	{
		___U3CFormatDataU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFormatDataU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of__size_4() { return static_cast<int32_t>(offsetof(GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B, ____size_4)); }
	inline int32_t get__size_4() const { return ____size_4; }
	inline int32_t* get_address_of__size_4() { return &____size_4; }
	inline void set__size_4(int32_t value)
	{
		____size_4 = value;
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t6C51436424F3B78EBF7BB5BB0FDFA6484B80EA9B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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


// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_t33EB90F8608437E6CF501D8067E96D0305E85104  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tEFDBAEBFD6E376A4BF2A953EBDC73A8714A82102  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
struct Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3 
{
public:
	// UnityEngine.GUIStyle Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context::style
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style_0;

public:
	inline static int32_t get_offset_of_style_0() { return static_cast<int32_t>(offsetof(Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3, ___style_0)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_style_0() const { return ___style_0; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_style_0() { return &___style_0; }
	inline void set_style_0(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___style_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___style_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
struct Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshaled_pinvoke
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke* ___style_0;
};
// Native definition for COM marshalling of Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
struct Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshaled_com
{
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com* ___style_0;
};

// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding
struct MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 
{
public:
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding::top
	float ___top_0;
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding::bot
	float ___bot_1;
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding::left
	float ___left_2;
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding::right
	float ___right_3;

public:
	inline static int32_t get_offset_of_top_0() { return static_cast<int32_t>(offsetof(MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2, ___top_0)); }
	inline float get_top_0() const { return ___top_0; }
	inline float* get_address_of_top_0() { return &___top_0; }
	inline void set_top_0(float value)
	{
		___top_0 = value;
	}

	inline static int32_t get_offset_of_bot_1() { return static_cast<int32_t>(offsetof(MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2, ___bot_1)); }
	inline float get_bot_1() const { return ___bot_1; }
	inline float* get_address_of_bot_1() { return &___bot_1; }
	inline void set_bot_1(float value)
	{
		___bot_1 = value;
	}

	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2, ___left_2)); }
	inline float get_left_2() const { return ___left_2; }
	inline float* get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(float value)
	{
		___left_2 = value;
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2, ___right_3)); }
	inline float get_right_3() const { return ___right_3; }
	inline float* get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(float value)
	{
		___right_3 = value;
	}
};


// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData
struct ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5 
{
public:
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData::Width
	float ___Width_0;
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData::Height
	float ___Height_1;
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData::HalfHeight
	float ___HalfHeight_2;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5, ___Width_0)); }
	inline float get_Width_0() const { return ___Width_0; }
	inline float* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(float value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5, ___Height_1)); }
	inline float get_Height_1() const { return ___Height_1; }
	inline float* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(float value)
	{
		___Height_1 = value;
	}

	inline static int32_t get_offset_of_HalfHeight_2() { return static_cast<int32_t>(offsetof(ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5, ___HalfHeight_2)); }
	inline float get_HalfHeight_2() const { return ___HalfHeight_2; }
	inline float* get_address_of_HalfHeight_2() { return &___HalfHeight_2; }
	inline void set_HalfHeight_2(float value)
	{
		___HalfHeight_2 = value;
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

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.ScaleMode
struct ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49 
{
public:
	// System.Int32 UnityEngine.ScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Baracuda.Monitoring.UIPosition
struct UIPosition_tDCAC59BE86DEA6F71F0A4D5DA1ABD86760FB57E4 
{
public:
	// System.Int32 Baracuda.Monitoring.UIPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UIPosition_tDCAC59BE86DEA6F71F0A4D5DA1ABD86760FB57E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Baracuda.Monitoring.Internal.Utilities.FormatData
struct FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877  : public RuntimeObject
{
public:
	// System.String Baracuda.Monitoring.Internal.Utilities.FormatData::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_0;
	// System.Boolean Baracuda.Monitoring.Internal.Utilities.FormatData::<ShowIndexer>k__BackingField
	bool ___U3CShowIndexerU3Ek__BackingField_1;
	// System.String Baracuda.Monitoring.Internal.Utilities.FormatData::<Label>k__BackingField
	String_t* ___U3CLabelU3Ek__BackingField_2;
	// System.Int32 Baracuda.Monitoring.Internal.Utilities.FormatData::<FontSize>k__BackingField
	int32_t ___U3CFontSizeU3Ek__BackingField_3;
	// Baracuda.Monitoring.UIPosition Baracuda.Monitoring.Internal.Utilities.FormatData::<Position>k__BackingField
	int32_t ___U3CPositionU3Ek__BackingField_4;
	// System.Boolean Baracuda.Monitoring.Internal.Utilities.FormatData::<AllowGrouping>k__BackingField
	bool ___U3CAllowGroupingU3Ek__BackingField_5;
	// System.String Baracuda.Monitoring.Internal.Utilities.FormatData::<Group>k__BackingField
	String_t* ___U3CGroupU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CFormatU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877, ___U3CFormatU3Ek__BackingField_0)); }
	inline String_t* get_U3CFormatU3Ek__BackingField_0() const { return ___U3CFormatU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CFormatU3Ek__BackingField_0() { return &___U3CFormatU3Ek__BackingField_0; }
	inline void set_U3CFormatU3Ek__BackingField_0(String_t* value)
	{
		___U3CFormatU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFormatU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShowIndexerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877, ___U3CShowIndexerU3Ek__BackingField_1)); }
	inline bool get_U3CShowIndexerU3Ek__BackingField_1() const { return ___U3CShowIndexerU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CShowIndexerU3Ek__BackingField_1() { return &___U3CShowIndexerU3Ek__BackingField_1; }
	inline void set_U3CShowIndexerU3Ek__BackingField_1(bool value)
	{
		___U3CShowIndexerU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CLabelU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877, ___U3CLabelU3Ek__BackingField_2)); }
	inline String_t* get_U3CLabelU3Ek__BackingField_2() const { return ___U3CLabelU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CLabelU3Ek__BackingField_2() { return &___U3CLabelU3Ek__BackingField_2; }
	inline void set_U3CLabelU3Ek__BackingField_2(String_t* value)
	{
		___U3CLabelU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLabelU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFontSizeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877, ___U3CFontSizeU3Ek__BackingField_3)); }
	inline int32_t get_U3CFontSizeU3Ek__BackingField_3() const { return ___U3CFontSizeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFontSizeU3Ek__BackingField_3() { return &___U3CFontSizeU3Ek__BackingField_3; }
	inline void set_U3CFontSizeU3Ek__BackingField_3(int32_t value)
	{
		___U3CFontSizeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877, ___U3CPositionU3Ek__BackingField_4)); }
	inline int32_t get_U3CPositionU3Ek__BackingField_4() const { return ___U3CPositionU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CPositionU3Ek__BackingField_4() { return &___U3CPositionU3Ek__BackingField_4; }
	inline void set_U3CPositionU3Ek__BackingField_4(int32_t value)
	{
		___U3CPositionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CAllowGroupingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877, ___U3CAllowGroupingU3Ek__BackingField_5)); }
	inline bool get_U3CAllowGroupingU3Ek__BackingField_5() const { return ___U3CAllowGroupingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CAllowGroupingU3Ek__BackingField_5() { return &___U3CAllowGroupingU3Ek__BackingField_5; }
	inline void set_U3CAllowGroupingU3Ek__BackingField_5(bool value)
	{
		___U3CAllowGroupingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGroupU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877, ___U3CGroupU3Ek__BackingField_6)); }
	inline String_t* get_U3CGroupU3Ek__BackingField_6() const { return ___U3CGroupU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CGroupU3Ek__BackingField_6() { return &___U3CGroupU3Ek__BackingField_6; }
	inline void set_U3CGroupU3Ek__BackingField_6(String_t* value)
	{
		___U3CGroupU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGroupU3Ek__BackingField_6), (void*)value);
	}
};


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement,System.Boolean>
struct Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___m_Styles_31;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Font_4)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_box_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_box_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_button_6)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_button_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_toggle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_toggle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_label_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textField_9)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textArea_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_window_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSlider_12)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSlider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumb_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumbExtent_14() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumbExtent_14)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumbExtent_14() const { return ___m_horizontalSliderThumbExtent_14; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumbExtent_14() { return &___m_horizontalSliderThumbExtent_14; }
	inline void set_m_horizontalSliderThumbExtent_14(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumbExtent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumbExtent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_15() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSlider_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSlider_15() const { return ___m_verticalSlider_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSlider_15() { return &___m_verticalSlider_15; }
	inline void set_m_verticalSlider_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSlider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSlider_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_16() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumb_16)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumb_16() const { return ___m_verticalSliderThumb_16; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumb_16() { return &___m_verticalSliderThumb_16; }
	inline void set_m_verticalSliderThumb_16(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumb_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumb_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumbExtent_17() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumbExtent_17)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumbExtent_17() const { return ___m_verticalSliderThumbExtent_17; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumbExtent_17() { return &___m_verticalSliderThumbExtent_17; }
	inline void set_m_verticalSliderThumbExtent_17(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumbExtent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumbExtent_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_SliderMixed_18() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_SliderMixed_18)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SliderMixed_18() const { return ___m_SliderMixed_18; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SliderMixed_18() { return &___m_SliderMixed_18; }
	inline void set_m_SliderMixed_18(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SliderMixed_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SliderMixed_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_19() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbar_19)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbar_19() const { return ___m_horizontalScrollbar_19; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbar_19() { return &___m_horizontalScrollbar_19; }
	inline void set_m_horizontalScrollbar_19(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbar_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbar_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_20() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarThumb_20)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarThumb_20() const { return ___m_horizontalScrollbarThumb_20; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarThumb_20() { return &___m_horizontalScrollbarThumb_20; }
	inline void set_m_horizontalScrollbarThumb_20(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarThumb_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarThumb_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_21() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarLeftButton_21)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarLeftButton_21() const { return ___m_horizontalScrollbarLeftButton_21; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarLeftButton_21() { return &___m_horizontalScrollbarLeftButton_21; }
	inline void set_m_horizontalScrollbarLeftButton_21(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarLeftButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarLeftButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_22() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarRightButton_22)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarRightButton_22() const { return ___m_horizontalScrollbarRightButton_22; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarRightButton_22() { return &___m_horizontalScrollbarRightButton_22; }
	inline void set_m_horizontalScrollbarRightButton_22(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarRightButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarRightButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_23() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbar_23)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbar_23() const { return ___m_verticalScrollbar_23; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbar_23() { return &___m_verticalScrollbar_23; }
	inline void set_m_verticalScrollbar_23(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbar_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbar_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_24() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarThumb_24)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarThumb_24() const { return ___m_verticalScrollbarThumb_24; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarThumb_24() { return &___m_verticalScrollbarThumb_24; }
	inline void set_m_verticalScrollbarThumb_24(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarThumb_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarThumb_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_25() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarUpButton_25)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarUpButton_25() const { return ___m_verticalScrollbarUpButton_25; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarUpButton_25() { return &___m_verticalScrollbarUpButton_25; }
	inline void set_m_verticalScrollbarUpButton_25(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarUpButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarUpButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_26() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarDownButton_26)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarDownButton_26() const { return ___m_verticalScrollbarDownButton_26; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarDownButton_26() { return &___m_verticalScrollbarDownButton_26; }
	inline void set_m_verticalScrollbarDownButton_26(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarDownButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarDownButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollView_27() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_ScrollView_27)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_ScrollView_27() const { return ___m_ScrollView_27; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_ScrollView_27() { return &___m_ScrollView_27; }
	inline void set_m_ScrollView_27(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_ScrollView_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollView_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_28() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_CustomStyles_28)); }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* get_m_CustomStyles_28() const { return ___m_CustomStyles_28; }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70** get_address_of_m_CustomStyles_28() { return &___m_CustomStyles_28; }
	inline void set_m_CustomStyles_28(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* value)
	{
		___m_CustomStyles_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomStyles_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_29() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Settings_29)); }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * get_m_Settings_29() const { return ___m_Settings_29; }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 ** get_address_of_m_Settings_29() { return &___m_Settings_29; }
	inline void set_m_Settings_29(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * value)
	{
		___m_Settings_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Styles_31() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Styles_31)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_m_Styles_31() const { return ___m_Styles_31; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_m_Styles_31() { return &___m_Styles_31; }
	inline void set_m_Styles_31(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___m_Styles_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Styles_31), (void*)value);
	}
};

struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___current_33;

public:
	inline static int32_t get_offset_of_ms_Error_30() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___ms_Error_30)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_ms_Error_30() const { return ___ms_Error_30; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_ms_Error_30() { return &___ms_Error_30; }
	inline void set_ms_Error_30(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___ms_Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_Error_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_32() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___m_SkinChanged_32)); }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * get_m_SkinChanged_32() const { return ___m_SkinChanged_32; }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E ** get_address_of_m_SkinChanged_32() { return &___m_SkinChanged_32; }
	inline void set_m_SkinChanged_32(SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * value)
	{
		___m_SkinChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_current_33() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___current_33)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_current_33() const { return ___current_33; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_current_33() { return &___current_33; }
	inline void set_current_33(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___current_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_33), (void*)value);
	}
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Baracuda.Monitoring.MonitoredBehaviour
struct MonitoredBehaviour_t7FB19EB465CB2B947BD759A1D907E3BAA3CDB0F1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Baracuda.Monitoring.MonitoringUIController
struct MonitoringUIController_t5B44C99F71B7218F5F723C914DE30FD3B877BFE6  : public MonitoredBehaviour_t7FB19EB465CB2B947BD759A1D907E3BAA3CDB0F1
{
public:

public:
};


// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer
struct MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8  : public MonitoringUIController_t5B44C99F71B7218F5F723C914DE30FD3B877BFE6
{
public:
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::elementSpacing
	float ___elementSpacing_4;
	// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::windowMargin
	MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2  ___windowMargin_5;
	// Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/MarginOrPadding Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::elementPadding
	MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2  ___elementPadding_6;
	// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::overrideScale
	bool ___overrideScale_7;
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::scale
	float ___scale_8;
	// UnityEngine.Color Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::backgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___backgroundColor_9;
	// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::logStartMessage
	bool ___logStartMessage_10;
	// System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement> Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::_unitsUpperLeft
	List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * ____unitsUpperLeft_11;
	// System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement> Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::_unitsUpperRight
	List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * ____unitsUpperRight_12;
	// System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement> Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::_unitsLowerLeft
	List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * ____unitsLowerLeft_13;
	// System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement> Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::_unitsLowerRight
	List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * ____unitsLowerRight_14;
	// UnityEngine.GUIContent Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::_content
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ____content_15;
	// UnityEngine.Texture2D Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::_backgroundTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____backgroundTexture_16;
	// UnityEngine.Vector3 Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::_scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____scale_17;

public:
	inline static int32_t get_offset_of_elementSpacing_4() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ___elementSpacing_4)); }
	inline float get_elementSpacing_4() const { return ___elementSpacing_4; }
	inline float* get_address_of_elementSpacing_4() { return &___elementSpacing_4; }
	inline void set_elementSpacing_4(float value)
	{
		___elementSpacing_4 = value;
	}

	inline static int32_t get_offset_of_windowMargin_5() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ___windowMargin_5)); }
	inline MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2  get_windowMargin_5() const { return ___windowMargin_5; }
	inline MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * get_address_of_windowMargin_5() { return &___windowMargin_5; }
	inline void set_windowMargin_5(MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2  value)
	{
		___windowMargin_5 = value;
	}

	inline static int32_t get_offset_of_elementPadding_6() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ___elementPadding_6)); }
	inline MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2  get_elementPadding_6() const { return ___elementPadding_6; }
	inline MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * get_address_of_elementPadding_6() { return &___elementPadding_6; }
	inline void set_elementPadding_6(MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2  value)
	{
		___elementPadding_6 = value;
	}

	inline static int32_t get_offset_of_overrideScale_7() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ___overrideScale_7)); }
	inline bool get_overrideScale_7() const { return ___overrideScale_7; }
	inline bool* get_address_of_overrideScale_7() { return &___overrideScale_7; }
	inline void set_overrideScale_7(bool value)
	{
		___overrideScale_7 = value;
	}

	inline static int32_t get_offset_of_scale_8() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ___scale_8)); }
	inline float get_scale_8() const { return ___scale_8; }
	inline float* get_address_of_scale_8() { return &___scale_8; }
	inline void set_scale_8(float value)
	{
		___scale_8 = value;
	}

	inline static int32_t get_offset_of_backgroundColor_9() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ___backgroundColor_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_backgroundColor_9() const { return ___backgroundColor_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_backgroundColor_9() { return &___backgroundColor_9; }
	inline void set_backgroundColor_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___backgroundColor_9 = value;
	}

	inline static int32_t get_offset_of_logStartMessage_10() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ___logStartMessage_10)); }
	inline bool get_logStartMessage_10() const { return ___logStartMessage_10; }
	inline bool* get_address_of_logStartMessage_10() { return &___logStartMessage_10; }
	inline void set_logStartMessage_10(bool value)
	{
		___logStartMessage_10 = value;
	}

	inline static int32_t get_offset_of__unitsUpperLeft_11() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ____unitsUpperLeft_11)); }
	inline List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * get__unitsUpperLeft_11() const { return ____unitsUpperLeft_11; }
	inline List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C ** get_address_of__unitsUpperLeft_11() { return &____unitsUpperLeft_11; }
	inline void set__unitsUpperLeft_11(List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * value)
	{
		____unitsUpperLeft_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unitsUpperLeft_11), (void*)value);
	}

	inline static int32_t get_offset_of__unitsUpperRight_12() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ____unitsUpperRight_12)); }
	inline List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * get__unitsUpperRight_12() const { return ____unitsUpperRight_12; }
	inline List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C ** get_address_of__unitsUpperRight_12() { return &____unitsUpperRight_12; }
	inline void set__unitsUpperRight_12(List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * value)
	{
		____unitsUpperRight_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unitsUpperRight_12), (void*)value);
	}

	inline static int32_t get_offset_of__unitsLowerLeft_13() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ____unitsLowerLeft_13)); }
	inline List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * get__unitsLowerLeft_13() const { return ____unitsLowerLeft_13; }
	inline List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C ** get_address_of__unitsLowerLeft_13() { return &____unitsLowerLeft_13; }
	inline void set__unitsLowerLeft_13(List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * value)
	{
		____unitsLowerLeft_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unitsLowerLeft_13), (void*)value);
	}

	inline static int32_t get_offset_of__unitsLowerRight_14() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ____unitsLowerRight_14)); }
	inline List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * get__unitsLowerRight_14() const { return ____unitsLowerRight_14; }
	inline List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C ** get_address_of__unitsLowerRight_14() { return &____unitsLowerRight_14; }
	inline void set__unitsLowerRight_14(List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * value)
	{
		____unitsLowerRight_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unitsLowerRight_14), (void*)value);
	}

	inline static int32_t get_offset_of__content_15() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ____content_15)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get__content_15() const { return ____content_15; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of__content_15() { return &____content_15; }
	inline void set__content_15(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		____content_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_15), (void*)value);
	}

	inline static int32_t get_offset_of__backgroundTexture_16() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ____backgroundTexture_16)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__backgroundTexture_16() const { return ____backgroundTexture_16; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__backgroundTexture_16() { return &____backgroundTexture_16; }
	inline void set__backgroundTexture_16(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____backgroundTexture_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____backgroundTexture_16), (void*)value);
	}

	inline static int32_t get_offset_of__scale_17() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8, ____scale_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__scale_17() const { return ____scale_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__scale_17() { return &____scale_17; }
	inline void set__scale_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____scale_17 = value;
	}
};

struct MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields
{
public:
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::lastLowerLeftHeight
	float ___lastLowerLeftHeight_18;
	// System.Single Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::lastLowerRightHeight
	float ___lastLowerRightHeight_19;
	// System.Int32 Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::topLeftRows
	int32_t ___topLeftRows_20;
	// System.Int32 Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::topRightRows
	int32_t ___topRightRows_21;

public:
	inline static int32_t get_offset_of_lastLowerLeftHeight_18() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields, ___lastLowerLeftHeight_18)); }
	inline float get_lastLowerLeftHeight_18() const { return ___lastLowerLeftHeight_18; }
	inline float* get_address_of_lastLowerLeftHeight_18() { return &___lastLowerLeftHeight_18; }
	inline void set_lastLowerLeftHeight_18(float value)
	{
		___lastLowerLeftHeight_18 = value;
	}

	inline static int32_t get_offset_of_lastLowerRightHeight_19() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields, ___lastLowerRightHeight_19)); }
	inline float get_lastLowerRightHeight_19() const { return ___lastLowerRightHeight_19; }
	inline float* get_address_of_lastLowerRightHeight_19() { return &___lastLowerRightHeight_19; }
	inline void set_lastLowerRightHeight_19(float value)
	{
		___lastLowerRightHeight_19 = value;
	}

	inline static int32_t get_offset_of_topLeftRows_20() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields, ___topLeftRows_20)); }
	inline int32_t get_topLeftRows_20() const { return ___topLeftRows_20; }
	inline int32_t* get_address_of_topLeftRows_20() { return &___topLeftRows_20; }
	inline void set_topLeftRows_20(int32_t value)
	{
		___topLeftRows_20 = value;
	}

	inline static int32_t get_offset_of_topRightRows_21() { return static_cast<int32_t>(offsetof(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields, ___topRightRows_21)); }
	inline int32_t get_topRightRows_21() const { return ___topRightRows_21; }
	inline int32_t* get_address_of_topRightRows_21() { return &___topRightRows_21; }
	inline void set_topRightRows_21(int32_t value)
	{
		___topRightRows_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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

IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke(const GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726& unmarshaled, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_back(const GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke& marshaled, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_pinvoke_cleanup(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_com(const GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726& unmarshaled, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_com_back(const GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com& marshaled, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshal_com_cleanup(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com& marshaled);

// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_First_TisRuntimeObject_m24A685394AAEB22D562E51D9B0F4E6B5BAB2C03C_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::UpdateScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_UpdateScale_m661FCBDAA3D25A61D7DB44A3AE83A6D5846A7FC1 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_matrix_m071711DB6CD94992416D9E039AD6B25383B46222 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F (const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context::.ctor(UnityEngine.GUIStyle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Context__ctor_mF9F348FCE4E22154EFD53615096E61EC11175586_inline (Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenData__ctor_m143399ECD6A90E9F4AF4A56C134AE708D5465E17 (ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5 * __this, float ___width0, float ___height1, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawUpperLeft(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawUpperLeft_mBD029281377A8B4151F34529EF448AFC0A8B346C (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  ___ctx0, ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  ___screenData1, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawUpperRight(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawUpperRight_mFBCCC8C40BB91BF30494F86CBB8A1A4D7DD3F5E9 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  ___ctx0, ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  ___screenData1, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawLowerLeft(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawLowerLeft_mD288F6F00FC4F3EF4FFA83A1876B232FAC4A7FE1 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  ___ctx0, ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  ___screenData1, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawLowerRight(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawLowerRight_m82015FB1BBC7BA6756355270B7D1EE6B9250FBB8 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  ___ctx0, ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  ___screenData1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>::get_Item(System.Int32)
inline GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_inline (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * (*) (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GUIElement_get_Enabled_mDB9C1C4D45A141C38DA6274191A6A053DA752C6C_inline (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, const RuntimeMethod* method);
// System.String Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_Content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GUIElement_get_Content_m4A3F659E59133D36B02461754A81AFBA2BCF8D36_inline (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content0, const RuntimeMethod* method);
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawUpperLeft>g__ElementRect|26_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  MonitoringGUIDrawer_U3CDrawUpperLeftU3Eg__ElementRectU7C26_0_mA72058134C2D966D592FF05C3DEE17330E3C1B33 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___textRect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, int32_t ___scaleMode2, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>::get_Count()
inline int32_t List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_inline (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawLowerLeft>g__ElementRect|27_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  MonitoringGUIDrawer_U3CDrawLowerLeftU3Eg__ElementRectU7C27_0_m232B4A72C2E941BEE7F840638FE5F43C7C351BB9 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___textRect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method);
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawUpperRight>g__ElementRect|28_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  MonitoringGUIDrawer_U3CDrawUpperRightU3Eg__ElementRectU7C28_0_mB599FC5361F16F94FC25586628A887B5DD3EF17C (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___textRect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method);
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawLowerRight>g__ElementRect|29_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  MonitoringGUIDrawer_U3CDrawLowerRightU3Eg__ElementRectU7C29_0_mDFA2FBC3969610EEBC078E856273DC15566B5003 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___textRect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnUnitDisposedInternal(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitDisposedInternal_m30D3C31E44380DFB762937157A15372B19621A44_inline (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, RuntimeObject* ___unit0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnUnitCreatedInternal(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitCreatedInternal_mBE89BFA59BE8ADF9EB15F986229119CBB2E580BE_inline (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, RuntimeObject* ___unit0, const RuntimeMethod* method);
// Baracuda.Monitoring.UIPosition Baracuda.Monitoring.Internal.Utilities.FormatData::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormatData_get_Position_mD5A47D36183E0F72B8C1CA23BDA103DE6D27A96C_inline (FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * __this, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::.ctor(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIElement__ctor_m6BBEE5336268EFB331913C897AA07591862F135C (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, RuntimeObject* ___unit0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>::Add(!0)
inline void List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00 (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * __this, GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C *, GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m384E33A633BD5F665DA905919BC28F87A4453859 (U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D (Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Linq.Enumerable::First<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221 (RuntimeObject* ___source0, Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 * ___predicate1, const RuntimeMethod* method)
{
	return ((  GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * (*) (RuntimeObject*, Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 *, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_m24A685394AAEB22D562E51D9B0F4E6B5BAB2C03C_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>::Remove(!0)
inline bool List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * __this, GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C *, GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement>::.ctor(System.Int32)
inline void List_1__ctor_m03E65FE413A55841FD0922DDFDE55415C40310CE (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.GUIContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mC57EB7929C7079750DF0FBFE6001732F74926A42 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.MonitoringUIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringUIController__ctor_mE5FAB51C8F511FB1425A1684247E56D9B3E16500 (MonitoringUIController_t5B44C99F71B7218F5F723C914DE30FD3B877BFE6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m4976D69877F052A2BF4FDC3558F5697412BE08C3 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GUIElement_get_ID_mD9332192C78F31EC0C48647D622AF39274BE383B_inline (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::set_Enabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIElement_set_Enabled_m6650A4F5FF00FC3DCF8568AE4F7E753D41142C27_inline (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, bool ___value0, const RuntimeMethod* method);
// Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_FormatData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * GUIElement_get_FormatData_mA535C3AFF4E5673A3EA2461CE550C648954DCBC8_inline (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, const RuntimeMethod* method);
// System.Int32 Baracuda.Monitoring.Internal.Utilities.FormatData::get_FontSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormatData_get_FontSize_mAF34A4A5756313676582DBBC97FA27FD357A2ACB_inline (FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::Update(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIElement_Update_m708789750216B6465F00A08294F1C031EE190543 (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.StringBuilderPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilderPool_Get_mAE9C8CA2ED8D833973655A636A3B4F943DE2517D (const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String Baracuda.Pooling.Concretions.StringBuilderPool::Release(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderPool_Release_m0A1C306DDA21B2202A32EC9C8D498C4FC864E12A (StringBuilder_t * ___toRelease0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::set_Content(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIElement_set_Content_mA50D3211FBADA27CB101F90F796EB7C166BA263B_inline (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, String_t* ___value0, const RuntimeMethod* method);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mD1E3F152ACD6BD147E989A997C57E08162D6A423 (EmbeddedAttribute_t6C51436424F3B78EBF7BB5BB0FDFA6484B80EA9B * __this, const RuntimeMethod* method)
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
// System.Void System.Runtime.CompilerServices.IsByRefLikeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsByRefLikeAttribute__ctor_mC93212E0C30725075730688A5FA5EE3A96A0E99B (IsByRefLikeAttribute_t33EB90F8608437E6CF501D8067E96D0305E85104 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mA3D432423E93780B6F6ADB8001F617CD7479111E (IsReadOnlyAttribute_tEFDBAEBFD6E376A4BF2A953EBDC73A8714A82102 * __this, const RuntimeMethod* method)
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
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_Start_mE27A964E79C4452BFC5BD083802632AD9D73C63B (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _backgroundTexture = new Texture2D(1, 1);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_0, 1, 1, /*hidden argument*/NULL);
		__this->set__backgroundTexture_16(L_0);
		// _backgroundTexture.SetPixel(0, 0, backgroundColor);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = __this->get__backgroundTexture_16();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = __this->get_backgroundColor_9();
		NullCheck(L_1);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_1, 0, 0, L_2, /*hidden argument*/NULL);
		// _backgroundTexture.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = __this->get__backgroundTexture_16();
		NullCheck(L_3);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_3, /*hidden argument*/NULL);
		// UpdateScale();
		MonitoringGUIDrawer_UpdateScale_m661FCBDAA3D25A61D7DB44A3AE83A6D5846A7FC1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnValidate_m220EEFC3F0324D0E15FCFE2D966EFDB4AA05D59E (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, const RuntimeMethod* method)
{
	{
		// UpdateScale();
		MonitoringGUIDrawer_UpdateScale_m661FCBDAA3D25A61D7DB44A3AE83A6D5846A7FC1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::UpdateScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_UpdateScale_m661FCBDAA3D25A61D7DB44A3AE83A6D5846A7FC1 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, const RuntimeMethod* method)
{
	{
		// if (overrideScale)
		bool L_0 = __this->get_overrideScale_7();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// _scale = new Vector3(scale, scale, 1);
		float L_1 = __this->get_scale_8();
		float L_2 = __this->get_scale_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), L_1, L_2, (1.0f), /*hidden argument*/NULL);
		__this->set__scale_17(L_3);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnGUI_m2E70D71165ABB063F9520C3EB24051AA7FDE9EE4 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, _scale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get__scale_17();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3;
		L_3 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_matrix_m071711DB6CD94992416D9E039AD6B25383B46222(L_3, /*hidden argument*/NULL);
		// var ctx = new Context(GUI.skin.label);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_4;
		L_4 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_4);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5;
		L_5 = GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83(L_4, /*hidden argument*/NULL);
		Context__ctor_mF9F348FCE4E22154EFD53615096E61EC11175586_inline((Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3 *)(&V_0), L_5, /*hidden argument*/NULL);
		// var screenData = new ScreenData(Screen.width / _scale.x, Screen.height / _scale.y);
		int32_t L_6;
		L_6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of__scale_17();
		float L_8 = L_7->get_x_2();
		int32_t L_9;
		L_9 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of__scale_17();
		float L_11 = L_10->get_y_3();
		ScreenData__ctor_m143399ECD6A90E9F4AF4A56C134AE708D5465E17((ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5 *)(&V_1), ((float)((float)((float)((float)L_6))/(float)L_8)), ((float)((float)((float)((float)L_9))/(float)L_11)), /*hidden argument*/NULL);
		// DrawUpperLeft(ctx, screenData);
		Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  L_12 = V_0;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_13 = V_1;
		MonitoringGUIDrawer_DrawUpperLeft_mBD029281377A8B4151F34529EF448AFC0A8B346C(__this, L_12, L_13, /*hidden argument*/NULL);
		// DrawUpperRight(ctx, screenData);
		Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  L_14 = V_0;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_15 = V_1;
		MonitoringGUIDrawer_DrawUpperRight_mFBCCC8C40BB91BF30494F86CBB8A1A4D7DD3F5E9(__this, L_14, L_15, /*hidden argument*/NULL);
		// DrawLowerLeft(ctx, screenData);
		Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  L_16 = V_0;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_17 = V_1;
		MonitoringGUIDrawer_DrawLowerLeft_mD288F6F00FC4F3EF4FFA83A1876B232FAC4A7FE1(__this, L_16, L_17, /*hidden argument*/NULL);
		// DrawLowerRight(ctx, screenData);
		Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  L_18 = V_0;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_19 = V_1;
		MonitoringGUIDrawer_DrawLowerRight_m82015FB1BBC7BA6756355270B7D1EE6B9250FBB8(__this, L_18, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawUpperLeft(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawUpperLeft_mBD029281377A8B4151F34529EF448AFC0A8B346C (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  ___ctx0, ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  ___screenData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * V_4 = NULL;
	String_t* V_5 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// var xPos = windowMargin.left;
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_0 = __this->get_address_of_windowMargin_5();
		float L_1 = L_0->get_left_2();
		V_0 = L_1;
		// var yPos = windowMargin.top;
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_2 = __this->get_address_of_windowMargin_5();
		float L_3 = L_2->get_top_0();
		V_1 = L_3;
		// var maxWidth = 0f;
		V_2 = (0.0f);
		// topLeftRows = 1;
		((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->set_topLeftRows_20(1);
		// for (var i = 0; i < _unitsUpperLeft.Count; i++)
		V_3 = 0;
		goto IL_0121;
	}

IL_002b:
	{
		// var guiElement = _unitsUpperLeft[i];
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_4 = __this->get__unitsUpperLeft_11();
		int32_t L_5 = V_3;
		NullCheck(L_4);
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_6;
		L_6 = List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_RuntimeMethod_var);
		V_4 = L_6;
		// if (!guiElement.Enabled)
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_7 = V_4;
		NullCheck(L_7);
		bool L_8;
		L_8 = GUIElement_get_Enabled_mDB9C1C4D45A141C38DA6274191A6A053DA752C6C_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_011d;
		}
	}
	{
		// var displayString = guiElement.Content;
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_9 = V_4;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GUIElement_get_Content_m4A3F659E59133D36B02461754A81AFBA2BCF8D36_inline(L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		// _content.text = displayString;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_11 = __this->get__content_15();
		String_t* L_12 = V_5;
		NullCheck(L_11);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_11, L_12, /*hidden argument*/NULL);
		// var textRect = new Rect();
		il2cpp_codegen_initobj((&V_6), sizeof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 ));
		// var textDimensions = ctx.style.CalcSize(_content);
		Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  L_13 = ___ctx0;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_14 = L_13.get_style_0();
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_15 = __this->get__content_15();
		NullCheck(L_14);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D(L_14, L_15, /*hidden argument*/NULL);
		V_7 = L_16;
		// var elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_7;
		float L_18 = V_0;
		float L_19 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20;
		L_20 = MonitoringGUIDrawer_U3CDrawUpperLeftU3Eg__ElementRectU7C26_0_mA72058134C2D966D592FF05C3DEE17330E3C1B33(__this, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_6), L_17, L_18, L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		// maxWidth = Mathf.Max(maxWidth, elementRect.width);
		float L_21 = V_2;
		float L_22;
		L_22 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_8), /*hidden argument*/NULL);
		float L_23;
		L_23 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_21, L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		// if (elementRect.y + elementRect.height + lastLowerLeftHeight > screenData.Height && elementRect.height < screenData.Height)
		float L_24;
		L_24 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_8), /*hidden argument*/NULL);
		float L_25;
		L_25 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_8), /*hidden argument*/NULL);
		float L_26 = ((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->get_lastLowerLeftHeight_18();
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_27 = ___screenData1;
		float L_28 = L_27.get_Height_1();
		if ((!(((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_24, (float)L_25)), (float)L_26))) > ((float)L_28))))
		{
			goto IL_00f5;
		}
	}
	{
		float L_29;
		L_29 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_8), /*hidden argument*/NULL);
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_30 = ___screenData1;
		float L_31 = L_30.get_Height_1();
		if ((!(((float)L_29) < ((float)L_31))))
		{
			goto IL_00f5;
		}
	}
	{
		// topLeftRows++;
		int32_t L_32 = ((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->get_topLeftRows_20();
		((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->set_topLeftRows_20(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)));
		// yPos = windowMargin.top;
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_33 = __this->get_address_of_windowMargin_5();
		float L_34 = L_33->get_top_0();
		V_1 = L_34;
		// xPos += maxWidth + elementSpacing;
		float L_35 = V_0;
		float L_36 = V_2;
		float L_37 = __this->get_elementSpacing_4();
		V_0 = ((float)il2cpp_codegen_add((float)L_35, (float)((float)il2cpp_codegen_add((float)L_36, (float)L_37))));
		// maxWidth = 0f;
		V_2 = (0.0f);
		// elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = V_7;
		float L_39 = V_0;
		float L_40 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_41;
		L_41 = MonitoringGUIDrawer_U3CDrawUpperLeftU3Eg__ElementRectU7C26_0_mA72058134C2D966D592FF05C3DEE17330E3C1B33(__this, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_6), L_38, L_39, L_40, /*hidden argument*/NULL);
		V_8 = L_41;
	}

IL_00f5:
	{
		// GUI.DrawTexture(elementRect, _backgroundTexture, ScaleMode.StretchToFill);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_42 = V_8;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_43 = __this->get__backgroundTexture_16();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E(L_42, L_43, 0, /*hidden argument*/NULL);
		// GUI.Label(textRect, displayString);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_44 = V_6;
		String_t* L_45 = V_5;
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_44, L_45, /*hidden argument*/NULL);
		// yPos += elementRect.height + elementSpacing;
		float L_46 = V_1;
		float L_47;
		L_47 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_8), /*hidden argument*/NULL);
		float L_48 = __this->get_elementSpacing_4();
		V_1 = ((float)il2cpp_codegen_add((float)L_46, (float)((float)il2cpp_codegen_add((float)L_47, (float)L_48))));
	}

IL_011d:
	{
		// for (var i = 0; i < _unitsUpperLeft.Count; i++)
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_0121:
	{
		// for (var i = 0; i < _unitsUpperLeft.Count; i++)
		int32_t L_50 = V_3;
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_51 = __this->get__unitsUpperLeft_11();
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_inline(L_51, /*hidden argument*/List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_RuntimeMethod_var);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawLowerLeft(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawLowerLeft_mD288F6F00FC4F3EF4FFA83A1876B232FAC4A7FE1 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  ___ctx0, ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  ___screenData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * V_5 = NULL;
	String_t* V_6 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// var xPos = windowMargin.left;
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_0 = __this->get_address_of_windowMargin_5();
		float L_1 = L_0->get_left_2();
		V_0 = L_1;
		// var yPos = screenData.Height - windowMargin.bot;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_2 = ___screenData1;
		float L_3 = L_2.get_Height_1();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_4 = __this->get_address_of_windowMargin_5();
		float L_5 = L_4->get_bot_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_3, (float)L_5));
		// var maxWidth = 0f;
		V_2 = (0.0f);
		// var maxHeight = 0f;
		V_3 = (0.0f);
		// for (var i = _unitsLowerLeft.Count - 1; i >= 0; i--)
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_6 = __this->get__unitsLowerLeft_13();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_inline(L_6, /*hidden argument*/List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		goto IL_017a;
	}

IL_003f:
	{
		// var guiElement = _unitsLowerLeft[i];
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_8 = __this->get__unitsLowerLeft_13();
		int32_t L_9 = V_4;
		NullCheck(L_8);
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_10;
		L_10 = List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_RuntimeMethod_var);
		V_5 = L_10;
		// if (!guiElement.Enabled)
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_11 = V_5;
		NullCheck(L_11);
		bool L_12;
		L_12 = GUIElement_get_Enabled_mDB9C1C4D45A141C38DA6274191A6A053DA752C6C_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0174;
		}
	}
	{
		// var displayString = guiElement.Content;
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_13 = V_5;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GUIElement_get_Content_m4A3F659E59133D36B02461754A81AFBA2BCF8D36_inline(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		// _content.text = displayString;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_15 = __this->get__content_15();
		String_t* L_16 = V_6;
		NullCheck(L_15);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_15, L_16, /*hidden argument*/NULL);
		// var textRect = new Rect();
		il2cpp_codegen_initobj((&V_7), sizeof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 ));
		// var textDimensions = ctx.style.CalcSize(_content);
		Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  L_17 = ___ctx0;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_18 = L_17.get_style_0();
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_19 = __this->get__content_15();
		NullCheck(L_18);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D(L_18, L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		// var elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_8;
		float L_22 = V_0;
		float L_23 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_24;
		L_24 = MonitoringGUIDrawer_U3CDrawLowerLeftU3Eg__ElementRectU7C27_0_m232B4A72C2E941BEE7F840638FE5F43C7C351BB9(__this, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_7), L_21, L_22, L_23, /*hidden argument*/NULL);
		V_9 = L_24;
		// maxWidth = Mathf.Max(maxWidth, elementRect.width);
		float L_25 = V_2;
		float L_26;
		L_26 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_9), /*hidden argument*/NULL);
		float L_27;
		L_27 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		// if (topLeftRows > 1 && screenData.Height - yPos > screenData.HalfHeight)
		int32_t L_28 = ((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->get_topLeftRows_20();
		if ((((int32_t)L_28) <= ((int32_t)1)))
		{
			goto IL_00f3;
		}
	}
	{
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_29 = ___screenData1;
		float L_30 = L_29.get_Height_1();
		float L_31 = V_1;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_32 = ___screenData1;
		float L_33 = L_32.get_HalfHeight_2();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_30, (float)L_31))) > ((float)L_33))))
		{
			goto IL_00f3;
		}
	}
	{
		// yPos = screenData.Height - windowMargin.bot;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_34 = ___screenData1;
		float L_35 = L_34.get_Height_1();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_36 = __this->get_address_of_windowMargin_5();
		float L_37 = L_36->get_bot_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_35, (float)L_37));
		// xPos += maxWidth + elementSpacing;
		float L_38 = V_0;
		float L_39 = V_2;
		float L_40 = __this->get_elementSpacing_4();
		V_0 = ((float)il2cpp_codegen_add((float)L_38, (float)((float)il2cpp_codegen_add((float)L_39, (float)L_40))));
		// maxWidth = 0f;
		V_2 = (0.0f);
		// elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41 = V_8;
		float L_42 = V_0;
		float L_43 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_44;
		L_44 = MonitoringGUIDrawer_U3CDrawLowerLeftU3Eg__ElementRectU7C27_0_m232B4A72C2E941BEE7F840638FE5F43C7C351BB9(__this, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_7), L_41, L_42, L_43, /*hidden argument*/NULL);
		V_9 = L_44;
		// }
		goto IL_013d;
	}

IL_00f3:
	{
		// else if (topLeftRows == 1 && screenData.Height - yPos > screenData.Height)
		int32_t L_45 = ((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->get_topLeftRows_20();
		if ((!(((uint32_t)L_45) == ((uint32_t)1))))
		{
			goto IL_013d;
		}
	}
	{
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_46 = ___screenData1;
		float L_47 = L_46.get_Height_1();
		float L_48 = V_1;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_49 = ___screenData1;
		float L_50 = L_49.get_Height_1();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_47, (float)L_48))) > ((float)L_50))))
		{
			goto IL_013d;
		}
	}
	{
		// yPos = screenData.Height - windowMargin.bot;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_51 = ___screenData1;
		float L_52 = L_51.get_Height_1();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_53 = __this->get_address_of_windowMargin_5();
		float L_54 = L_53->get_bot_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_52, (float)L_54));
		// xPos += maxWidth + elementSpacing;
		float L_55 = V_0;
		float L_56 = V_2;
		float L_57 = __this->get_elementSpacing_4();
		V_0 = ((float)il2cpp_codegen_add((float)L_55, (float)((float)il2cpp_codegen_add((float)L_56, (float)L_57))));
		// maxWidth = 0f;
		V_2 = (0.0f);
		// elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58 = V_8;
		float L_59 = V_0;
		float L_60 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_61;
		L_61 = MonitoringGUIDrawer_U3CDrawLowerLeftU3Eg__ElementRectU7C27_0_m232B4A72C2E941BEE7F840638FE5F43C7C351BB9(__this, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_7), L_58, L_59, L_60, /*hidden argument*/NULL);
		V_9 = L_61;
	}

IL_013d:
	{
		// GUI.DrawTexture(elementRect, _backgroundTexture, ScaleMode.StretchToFill);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_62 = V_9;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_63 = __this->get__backgroundTexture_16();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E(L_62, L_63, 0, /*hidden argument*/NULL);
		// GUI.Label(textRect, displayString);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_64 = V_7;
		String_t* L_65 = V_6;
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_64, L_65, /*hidden argument*/NULL);
		// yPos -= elementRect.height + elementSpacing;
		float L_66 = V_1;
		float L_67;
		L_67 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_9), /*hidden argument*/NULL);
		float L_68 = __this->get_elementSpacing_4();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_66, (float)((float)il2cpp_codegen_add((float)L_67, (float)L_68))));
		// maxHeight = Mathf.Max(screenData.Height - yPos, maxHeight);
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_69 = ___screenData1;
		float L_70 = L_69.get_Height_1();
		float L_71 = V_1;
		float L_72 = V_3;
		float L_73;
		L_73 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)il2cpp_codegen_subtract((float)L_70, (float)L_71)), L_72, /*hidden argument*/NULL);
		V_3 = L_73;
	}

IL_0174:
	{
		// for (var i = _unitsLowerLeft.Count - 1; i >= 0; i--)
		int32_t L_74 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)1));
	}

IL_017a:
	{
		// for (var i = _unitsLowerLeft.Count - 1; i >= 0; i--)
		int32_t L_75 = V_4;
		if ((((int32_t)L_75) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// lastLowerLeftHeight = maxHeight;
		float L_76 = V_3;
		((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->set_lastLowerLeftHeight_18(L_76);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawUpperRight(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawUpperRight_mFBCCC8C40BB91BF30494F86CBB8A1A4D7DD3F5E9 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  ___ctx0, ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  ___screenData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * V_4 = NULL;
	String_t* V_5 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// var xPos = screenData.Width;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_0 = ___screenData1;
		float L_1 = L_0.get_Width_0();
		V_0 = L_1;
		// var yPos = windowMargin.top;
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_2 = __this->get_address_of_windowMargin_5();
		float L_3 = L_2->get_top_0();
		V_1 = L_3;
		// var maxWidth = 0f;
		V_2 = (0.0f);
		// topRightRows = 1;
		((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->set_topRightRows_21(1);
		// for (var i = 0; i < _unitsUpperRight.Count; i++)
		V_3 = 0;
		goto IL_011c;
	}

IL_0026:
	{
		// var guiElement = _unitsUpperRight[i];
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_4 = __this->get__unitsUpperRight_12();
		int32_t L_5 = V_3;
		NullCheck(L_4);
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_6;
		L_6 = List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_RuntimeMethod_var);
		V_4 = L_6;
		// if (!guiElement.Enabled)
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_7 = V_4;
		NullCheck(L_7);
		bool L_8;
		L_8 = GUIElement_get_Enabled_mDB9C1C4D45A141C38DA6274191A6A053DA752C6C_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0118;
		}
	}
	{
		// var displayString = guiElement.Content;
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_9 = V_4;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GUIElement_get_Content_m4A3F659E59133D36B02461754A81AFBA2BCF8D36_inline(L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		// _content.text = displayString;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_11 = __this->get__content_15();
		String_t* L_12 = V_5;
		NullCheck(L_11);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_11, L_12, /*hidden argument*/NULL);
		// var textRect = new Rect();
		il2cpp_codegen_initobj((&V_6), sizeof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 ));
		// var textDimensions = ctx.style.CalcSize(_content);
		Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  L_13 = ___ctx0;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_14 = L_13.get_style_0();
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_15 = __this->get__content_15();
		NullCheck(L_14);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D(L_14, L_15, /*hidden argument*/NULL);
		V_7 = L_16;
		// var elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_7;
		float L_18 = V_0;
		float L_19 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20;
		L_20 = MonitoringGUIDrawer_U3CDrawUpperRightU3Eg__ElementRectU7C28_0_mB599FC5361F16F94FC25586628A887B5DD3EF17C(__this, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_6), L_17, L_18, L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		// maxWidth = Mathf.Max(maxWidth, elementRect.width);
		float L_21 = V_2;
		float L_22;
		L_22 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_8), /*hidden argument*/NULL);
		float L_23;
		L_23 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_21, L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		// if (elementRect.y + elementRect.height + lastLowerRightHeight > screenData.Height && elementRect.height < screenData.Height)
		float L_24;
		L_24 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_8), /*hidden argument*/NULL);
		float L_25;
		L_25 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_8), /*hidden argument*/NULL);
		float L_26 = ((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->get_lastLowerRightHeight_19();
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_27 = ___screenData1;
		float L_28 = L_27.get_Height_1();
		if ((!(((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_24, (float)L_25)), (float)L_26))) > ((float)L_28))))
		{
			goto IL_00f0;
		}
	}
	{
		float L_29;
		L_29 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_8), /*hidden argument*/NULL);
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_30 = ___screenData1;
		float L_31 = L_30.get_Height_1();
		if ((!(((float)L_29) < ((float)L_31))))
		{
			goto IL_00f0;
		}
	}
	{
		// topRightRows++;
		int32_t L_32 = ((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->get_topRightRows_21();
		((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->set_topRightRows_21(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)));
		// yPos = windowMargin.top;
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_33 = __this->get_address_of_windowMargin_5();
		float L_34 = L_33->get_top_0();
		V_1 = L_34;
		// xPos -= (maxWidth + elementSpacing);
		float L_35 = V_0;
		float L_36 = V_2;
		float L_37 = __this->get_elementSpacing_4();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_35, (float)((float)il2cpp_codegen_add((float)L_36, (float)L_37))));
		// maxWidth = 0f;
		V_2 = (0.0f);
		// elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = V_7;
		float L_39 = V_0;
		float L_40 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_41;
		L_41 = MonitoringGUIDrawer_U3CDrawUpperRightU3Eg__ElementRectU7C28_0_mB599FC5361F16F94FC25586628A887B5DD3EF17C(__this, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_6), L_38, L_39, L_40, /*hidden argument*/NULL);
		V_8 = L_41;
	}

IL_00f0:
	{
		// GUI.DrawTexture(elementRect, _backgroundTexture, ScaleMode.StretchToFill);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_42 = V_8;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_43 = __this->get__backgroundTexture_16();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E(L_42, L_43, 0, /*hidden argument*/NULL);
		// GUI.Label(textRect, displayString);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_44 = V_6;
		String_t* L_45 = V_5;
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_44, L_45, /*hidden argument*/NULL);
		// yPos += elementRect.height + elementSpacing;
		float L_46 = V_1;
		float L_47;
		L_47 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_8), /*hidden argument*/NULL);
		float L_48 = __this->get_elementSpacing_4();
		V_1 = ((float)il2cpp_codegen_add((float)L_46, (float)((float)il2cpp_codegen_add((float)L_47, (float)L_48))));
	}

IL_0118:
	{
		// for (var i = 0; i < _unitsUpperRight.Count; i++)
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_011c:
	{
		// for (var i = 0; i < _unitsUpperRight.Count; i++)
		int32_t L_50 = V_3;
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_51 = __this->get__unitsUpperRight_12();
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_inline(L_51, /*hidden argument*/List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_RuntimeMethod_var);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_0026;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::DrawLowerRight(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context,Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_DrawLowerRight_m82015FB1BBC7BA6756355270B7D1EE6B9250FBB8 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  ___ctx0, ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  ___screenData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * V_5 = NULL;
	String_t* V_6 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// var xPos = screenData.Width;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_0 = ___screenData1;
		float L_1 = L_0.get_Width_0();
		V_0 = L_1;
		// var yPos = screenData.Height - windowMargin.bot;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_2 = ___screenData1;
		float L_3 = L_2.get_Height_1();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_4 = __this->get_address_of_windowMargin_5();
		float L_5 = L_4->get_bot_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_3, (float)L_5));
		// var maxWidth = 0f;
		V_2 = (0.0f);
		// var maxHeight = 0f;
		V_3 = (0.0f);
		// for (var i = _unitsLowerRight.Count - 1; i >= 0; i--)
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_6 = __this->get__unitsLowerRight_14();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_inline(L_6, /*hidden argument*/List_1_get_Count_m774CA9E08C66072B97EA266259436FF6AA5F6AF1_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		goto IL_0175;
	}

IL_003a:
	{
		// var guiElement = _unitsLowerRight[i];
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_8 = __this->get__unitsLowerRight_14();
		int32_t L_9 = V_4;
		NullCheck(L_8);
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_10;
		L_10 = List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m201D2812C58D2718F950C0D30E622EE9B2F5503E_RuntimeMethod_var);
		V_5 = L_10;
		// if (!guiElement.Enabled)
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_11 = V_5;
		NullCheck(L_11);
		bool L_12;
		L_12 = GUIElement_get_Enabled_mDB9C1C4D45A141C38DA6274191A6A053DA752C6C_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_016f;
		}
	}
	{
		// var displayString = guiElement.Content;
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_13 = V_5;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GUIElement_get_Content_m4A3F659E59133D36B02461754A81AFBA2BCF8D36_inline(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		// _content.text = displayString;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_15 = __this->get__content_15();
		String_t* L_16 = V_6;
		NullCheck(L_15);
		GUIContent_set_text_m1F36FE3E6B6C7058D94808769DE7C104FC85FAFB(L_15, L_16, /*hidden argument*/NULL);
		// var textRect = new Rect();
		il2cpp_codegen_initobj((&V_7), sizeof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 ));
		// var textDimensions = ctx.style.CalcSize(_content);
		Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3  L_17 = ___ctx0;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_18 = L_17.get_style_0();
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_19 = __this->get__content_15();
		NullCheck(L_18);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D(L_18, L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		// var elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_8;
		float L_22 = V_0;
		float L_23 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_24;
		L_24 = MonitoringGUIDrawer_U3CDrawLowerRightU3Eg__ElementRectU7C29_0_mDFA2FBC3969610EEBC078E856273DC15566B5003(__this, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_7), L_21, L_22, L_23, /*hidden argument*/NULL);
		V_9 = L_24;
		// maxWidth = Mathf.Max(maxWidth, elementRect.width);
		float L_25 = V_2;
		float L_26;
		L_26 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_9), /*hidden argument*/NULL);
		float L_27;
		L_27 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		// if (topRightRows > 1 && screenData.Height - yPos > screenData.HalfHeight)
		int32_t L_28 = ((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->get_topRightRows_21();
		if ((((int32_t)L_28) <= ((int32_t)1)))
		{
			goto IL_00ee;
		}
	}
	{
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_29 = ___screenData1;
		float L_30 = L_29.get_Height_1();
		float L_31 = V_1;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_32 = ___screenData1;
		float L_33 = L_32.get_HalfHeight_2();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_30, (float)L_31))) > ((float)L_33))))
		{
			goto IL_00ee;
		}
	}
	{
		// yPos = screenData.Height - windowMargin.bot;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_34 = ___screenData1;
		float L_35 = L_34.get_Height_1();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_36 = __this->get_address_of_windowMargin_5();
		float L_37 = L_36->get_bot_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_35, (float)L_37));
		// xPos -= maxWidth + elementSpacing;
		float L_38 = V_0;
		float L_39 = V_2;
		float L_40 = __this->get_elementSpacing_4();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_38, (float)((float)il2cpp_codegen_add((float)L_39, (float)L_40))));
		// maxWidth = 0f;
		V_2 = (0.0f);
		// elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41 = V_8;
		float L_42 = V_0;
		float L_43 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_44;
		L_44 = MonitoringGUIDrawer_U3CDrawLowerRightU3Eg__ElementRectU7C29_0_mDFA2FBC3969610EEBC078E856273DC15566B5003(__this, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_7), L_41, L_42, L_43, /*hidden argument*/NULL);
		V_9 = L_44;
		// }
		goto IL_0138;
	}

IL_00ee:
	{
		// else if (topRightRows == 1 && screenData.Height - yPos > screenData.Height)
		int32_t L_45 = ((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->get_topRightRows_21();
		if ((!(((uint32_t)L_45) == ((uint32_t)1))))
		{
			goto IL_0138;
		}
	}
	{
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_46 = ___screenData1;
		float L_47 = L_46.get_Height_1();
		float L_48 = V_1;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_49 = ___screenData1;
		float L_50 = L_49.get_Height_1();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_47, (float)L_48))) > ((float)L_50))))
		{
			goto IL_0138;
		}
	}
	{
		// yPos = screenData.Height - windowMargin.bot;
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_51 = ___screenData1;
		float L_52 = L_51.get_Height_1();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_53 = __this->get_address_of_windowMargin_5();
		float L_54 = L_53->get_bot_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_52, (float)L_54));
		// xPos -= maxWidth + elementSpacing;
		float L_55 = V_0;
		float L_56 = V_2;
		float L_57 = __this->get_elementSpacing_4();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_55, (float)((float)il2cpp_codegen_add((float)L_56, (float)L_57))));
		// maxWidth = 0f;
		V_2 = (0.0f);
		// elementRect = ElementRect(ref textRect, textDimensions, xPos, yPos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58 = V_8;
		float L_59 = V_0;
		float L_60 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_61;
		L_61 = MonitoringGUIDrawer_U3CDrawLowerRightU3Eg__ElementRectU7C29_0_mDFA2FBC3969610EEBC078E856273DC15566B5003(__this, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_7), L_58, L_59, L_60, /*hidden argument*/NULL);
		V_9 = L_61;
	}

IL_0138:
	{
		// GUI.DrawTexture(elementRect, _backgroundTexture, ScaleMode.StretchToFill);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_62 = V_9;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_63 = __this->get__backgroundTexture_16();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E(L_62, L_63, 0, /*hidden argument*/NULL);
		// GUI.Label(textRect, displayString);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_64 = V_7;
		String_t* L_65 = V_6;
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_64, L_65, /*hidden argument*/NULL);
		// yPos -= elementRect.height + elementSpacing;
		float L_66 = V_1;
		float L_67;
		L_67 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_9), /*hidden argument*/NULL);
		float L_68 = __this->get_elementSpacing_4();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_66, (float)((float)il2cpp_codegen_add((float)L_67, (float)L_68))));
		// maxHeight = Mathf.Max(screenData.Height - yPos, maxHeight);
		ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5  L_69 = ___screenData1;
		float L_70 = L_69.get_Height_1();
		float L_71 = V_1;
		float L_72 = V_3;
		float L_73;
		L_73 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)il2cpp_codegen_subtract((float)L_70, (float)L_71)), L_72, /*hidden argument*/NULL);
		V_3 = L_73;
	}

IL_016f:
	{
		// for (var i = _unitsLowerRight.Count - 1; i >= 0; i--)
		int32_t L_74 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)1));
	}

IL_0175:
	{
		// for (var i = _unitsLowerRight.Count - 1; i >= 0; i--)
		int32_t L_75 = V_4;
		if ((((int32_t)L_75) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// lastLowerRightHeight = maxHeight;
		float L_76 = V_3;
		((MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_StaticFields*)il2cpp_codegen_static_fields_for(MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8_il2cpp_TypeInfo_var))->set_lastLowerRightHeight_19(L_76);
		// }
		return;
	}
}
// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonitoringGUIDrawer_IsVisible_mE4FE36C2A53E7F7D434EA7672855598DA8CEA2C3 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, const RuntimeMethod* method)
{
	{
		// return enabled;
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::ShowMonitoringUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_ShowMonitoringUI_m36D8BDBA210039C227D6BBDE4FF45DA2B8814B78 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, const RuntimeMethod* method)
{
	{
		// enabled = true;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::HideMonitoringUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_HideMonitoringUI_mDD66783E09B38DF9CD15D51CB7DF6483C574DF02 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, const RuntimeMethod* method)
{
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnUnitDisposed(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitDisposed_m12B6EEEABAF733F6EEE0821289D4D6EB12D84474 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, RuntimeObject* ___unit0, const RuntimeMethod* method)
{
	{
		// OnUnitDisposedInternal(unit);
		RuntimeObject* L_0 = ___unit0;
		MonitoringGUIDrawer_OnUnitDisposedInternal_m30D3C31E44380DFB762937157A15372B19621A44_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnUnitCreated(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitCreated_mF1AFC9580D5A9ABE7B26CC6C7D3CA605F8C95FD8 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, RuntimeObject* ___unit0, const RuntimeMethod* method)
{
	{
		// OnUnitCreatedInternal(unit);
		RuntimeObject* L_0 = ___unit0;
		MonitoringGUIDrawer_OnUnitCreatedInternal_mBE89BFA59BE8ADF9EB15F986229119CBB2E580BE_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnUnitCreatedInternal(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitCreatedInternal_mBE89BFA59BE8ADF9EB15F986229119CBB2E580BE (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, RuntimeObject* ___unit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorProfile_t1A828B05BBC69025F81600D47835C7F10AC1D7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (unit.Profile.FormatData.Position)
		RuntimeObject* L_0 = ___unit0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Baracuda.Monitoring.Interface.IMonitorProfile Baracuda.Monitoring.Interface.IMonitorUnit::get_Profile() */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * L_2;
		L_2 = InterfaceFuncInvoker0< FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * >::Invoke(8 /* Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.Interface.IMonitorProfile::get_FormatData() */, IMonitorProfile_t1A828B05BBC69025F81600D47835C7F10AC1D7BA_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FormatData_get_Position_mD5A47D36183E0F72B8C1CA23BDA103DE6D27A96C_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_005e;
			}
		}
	}
	{
		return;
	}

IL_0028:
	{
		// _unitsUpperLeft.Add(new GUIElement(unit));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_5 = __this->get__unitsUpperLeft_11();
		RuntimeObject* L_6 = ___unit0;
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_7 = (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B *)il2cpp_codegen_object_new(GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_il2cpp_TypeInfo_var);
		GUIElement__ctor_m6BBEE5336268EFB331913C897AA07591862F135C(L_7, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00(L_5, L_7, /*hidden argument*/List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00_RuntimeMethod_var);
		// break;
		return;
	}

IL_003a:
	{
		// _unitsUpperRight.Add(new GUIElement(unit));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_8 = __this->get__unitsUpperRight_12();
		RuntimeObject* L_9 = ___unit0;
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_10 = (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B *)il2cpp_codegen_object_new(GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_il2cpp_TypeInfo_var);
		GUIElement__ctor_m6BBEE5336268EFB331913C897AA07591862F135C(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00(L_8, L_10, /*hidden argument*/List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00_RuntimeMethod_var);
		// break;
		return;
	}

IL_004c:
	{
		// _unitsLowerLeft.Add(new GUIElement(unit));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_11 = __this->get__unitsLowerLeft_13();
		RuntimeObject* L_12 = ___unit0;
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_13 = (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B *)il2cpp_codegen_object_new(GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_il2cpp_TypeInfo_var);
		GUIElement__ctor_m6BBEE5336268EFB331913C897AA07591862F135C(L_13, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00(L_11, L_13, /*hidden argument*/List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00_RuntimeMethod_var);
		// break;
		return;
	}

IL_005e:
	{
		// _unitsLowerRight.Add(new GUIElement(unit));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_14 = __this->get__unitsLowerRight_14();
		RuntimeObject* L_15 = ___unit0;
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_16 = (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B *)il2cpp_codegen_object_new(GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_il2cpp_TypeInfo_var);
		GUIElement__ctor_m6BBEE5336268EFB331913C897AA07591862F135C(L_16, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00(L_14, L_16, /*hidden argument*/List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::OnUnitDisposedInternal(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitDisposedInternal_m30D3C31E44380DFB762937157A15372B19621A44 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, RuntimeObject* ___unit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorProfile_t1A828B05BBC69025F81600D47835C7F10AC1D7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__0_mE0B4C988989C787443173866DB0860E5275B5053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__1_m3375BA4D9594F4AB1FBC5D6FE25463675EC8AB82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__2_mDCAE50235EEAFF9A858258F8E3C2A2F3413406DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__3_mDC03B526B8D4533717144AA8154D4971C059A52F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_0 = (U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass36_0__ctor_m384E33A633BD5F665DA905919BC28F87A4453859(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_1 = V_0;
		RuntimeObject* L_2 = ___unit0;
		NullCheck(L_1);
		L_1->set_unit_0(L_2);
		// switch (unit.Profile.FormatData.Position)
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->get_unit_0();
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Baracuda.Monitoring.Interface.IMonitorProfile Baracuda.Monitoring.Interface.IMonitorUnit::get_Profile() */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * L_6;
		L_6 = InterfaceFuncInvoker0< FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * >::Invoke(8 /* Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.Interface.IMonitorProfile::get_FormatData() */, IMonitorProfile_t1A828B05BBC69025F81600D47835C7F10AC1D7BA_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = FormatData_get_Position_mD5A47D36183E0F72B8C1CA23BDA103DE6D27A96C_inline(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		switch (L_8)
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_0082;
			}
			case 3:
			{
				goto IL_00a6;
			}
		}
	}
	{
		return;
	}

IL_003a:
	{
		// _unitsUpperLeft.Remove(_unitsUpperLeft.First(element => element.ID == unit.UniqueID));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_9 = __this->get__unitsUpperLeft_11();
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_10 = __this->get__unitsUpperLeft_11();
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_11 = V_0;
		Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 * L_12 = (Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 *)il2cpp_codegen_object_new(Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800_il2cpp_TypeInfo_var);
		Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__0_mE0B4C988989C787443173866DB0860E5275B5053_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D_RuntimeMethod_var);
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_13;
		L_13 = Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221(L_10, L_12, /*hidden argument*/Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221_RuntimeMethod_var);
		NullCheck(L_9);
		bool L_14;
		L_14 = List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC(L_9, L_13, /*hidden argument*/List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC_RuntimeMethod_var);
		// break;
		return;
	}

IL_005e:
	{
		// _unitsUpperRight.Remove(_unitsUpperRight.First(element => element.ID == unit.UniqueID));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_15 = __this->get__unitsUpperRight_12();
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_16 = __this->get__unitsUpperRight_12();
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_17 = V_0;
		Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 * L_18 = (Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 *)il2cpp_codegen_object_new(Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800_il2cpp_TypeInfo_var);
		Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__1_m3375BA4D9594F4AB1FBC5D6FE25463675EC8AB82_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D_RuntimeMethod_var);
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_19;
		L_19 = Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221(L_16, L_18, /*hidden argument*/Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221_RuntimeMethod_var);
		NullCheck(L_15);
		bool L_20;
		L_20 = List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC(L_15, L_19, /*hidden argument*/List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC_RuntimeMethod_var);
		// break;
		return;
	}

IL_0082:
	{
		// _unitsLowerLeft.Remove(_unitsLowerLeft.First(element => element.ID == unit.UniqueID));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_21 = __this->get__unitsLowerLeft_13();
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_22 = __this->get__unitsLowerLeft_13();
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_23 = V_0;
		Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 * L_24 = (Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 *)il2cpp_codegen_object_new(Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800_il2cpp_TypeInfo_var);
		Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D(L_24, L_23, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__2_mDCAE50235EEAFF9A858258F8E3C2A2F3413406DD_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D_RuntimeMethod_var);
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_25;
		L_25 = Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221(L_22, L_24, /*hidden argument*/Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221_RuntimeMethod_var);
		NullCheck(L_21);
		bool L_26;
		L_26 = List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC(L_21, L_25, /*hidden argument*/List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC_RuntimeMethod_var);
		// break;
		return;
	}

IL_00a6:
	{
		// _unitsLowerRight.Remove(_unitsLowerRight.First(element => element.ID == unit.UniqueID));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_27 = __this->get__unitsLowerRight_14();
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_28 = __this->get__unitsLowerRight_14();
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_29 = V_0;
		Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 * L_30 = (Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 *)il2cpp_codegen_object_new(Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800_il2cpp_TypeInfo_var);
		Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D(L_30, L_29, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__3_mDC03B526B8D4533717144AA8154D4971C059A52F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D_RuntimeMethod_var);
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_31;
		L_31 = Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221(L_28, L_30, /*hidden argument*/Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221_RuntimeMethod_var);
		NullCheck(L_27);
		bool L_32;
		L_32 = List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC(L_27, L_31, /*hidden argument*/List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringGUIDrawer__ctor_m58F102D6CAB1104303EE9AD54A5DCB531CB8A550 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m03E65FE413A55841FD0922DDFDE55415C40310CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float elementSpacing = 2f;
		__this->set_elementSpacing_4((2.0f));
		// [SerializeField] private Color backgroundColor = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_backgroundColor_9(L_0);
		// [SerializeField] private bool logStartMessage = true;
		__this->set_logStartMessage_10((bool)1);
		// private readonly List<GUIElement> _unitsUpperLeft = new List<GUIElement>(100);
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_1 = (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C *)il2cpp_codegen_object_new(List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C_il2cpp_TypeInfo_var);
		List_1__ctor_m03E65FE413A55841FD0922DDFDE55415C40310CE(L_1, ((int32_t)100), /*hidden argument*/List_1__ctor_m03E65FE413A55841FD0922DDFDE55415C40310CE_RuntimeMethod_var);
		__this->set__unitsUpperLeft_11(L_1);
		// private readonly List<GUIElement> _unitsUpperRight = new List<GUIElement>(100);
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_2 = (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C *)il2cpp_codegen_object_new(List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C_il2cpp_TypeInfo_var);
		List_1__ctor_m03E65FE413A55841FD0922DDFDE55415C40310CE(L_2, ((int32_t)100), /*hidden argument*/List_1__ctor_m03E65FE413A55841FD0922DDFDE55415C40310CE_RuntimeMethod_var);
		__this->set__unitsUpperRight_12(L_2);
		// private readonly List<GUIElement> _unitsLowerLeft = new List<GUIElement>(100);
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_3 = (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C *)il2cpp_codegen_object_new(List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C_il2cpp_TypeInfo_var);
		List_1__ctor_m03E65FE413A55841FD0922DDFDE55415C40310CE(L_3, ((int32_t)100), /*hidden argument*/List_1__ctor_m03E65FE413A55841FD0922DDFDE55415C40310CE_RuntimeMethod_var);
		__this->set__unitsLowerLeft_13(L_3);
		// private readonly List<GUIElement> _unitsLowerRight = new List<GUIElement>(100);
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_4 = (List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C *)il2cpp_codegen_object_new(List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C_il2cpp_TypeInfo_var);
		List_1__ctor_m03E65FE413A55841FD0922DDFDE55415C40310CE(L_4, ((int32_t)100), /*hidden argument*/List_1__ctor_m03E65FE413A55841FD0922DDFDE55415C40310CE_RuntimeMethod_var);
		__this->set__unitsLowerRight_14(L_4);
		// private readonly GUIContent _content = new GUIContent();
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_5 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_mC57EB7929C7079750DF0FBFE6001732F74926A42(L_5, /*hidden argument*/NULL);
		__this->set__content_15(L_5);
		// private Vector3 _scale = Vector3.one;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		__this->set__scale_17(L_6);
		MonitoringUIController__ctor_mE5FAB51C8F511FB1425A1684247E56D9B3E16500(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawUpperLeft>g__ElementRect|26_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  MonitoringGUIDrawer_U3CDrawUpperLeftU3Eg__ElementRectU7C26_0_mA72058134C2D966D592FF05C3DEE17330E3C1B33 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___textRect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// textRect.width = textDimensions.x;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_0 = ___textRect0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___textDimensions1;
		float L_2 = L_1.get_x_0();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_0, L_2, /*hidden argument*/NULL);
		// textRect.height = textDimensions.y;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_3 = ___textRect0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___textDimensions1;
		float L_5 = L_4.get_y_1();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_3, L_5, /*hidden argument*/NULL);
		// textRect.x = x;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_6 = ___textRect0;
		float L_7 = ___x2;
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_6, L_7, /*hidden argument*/NULL);
		// textRect.y = y;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_8 = ___textRect0;
		float L_9 = ___y3;
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_8, L_9, /*hidden argument*/NULL);
		// var elementRect = new Rect(textRect);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_10 = ___textRect0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11 = (*(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_10);
		Rect__ctor_m4976D69877F052A2BF4FDC3558F5697412BE08C3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), L_11, /*hidden argument*/NULL);
		// elementRect.height += elementPadding.top + elementPadding.bot;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_12 = (&V_0);
		float L_13;
		L_13 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_12, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_14 = __this->get_address_of_elementPadding_6();
		float L_15 = L_14->get_top_0();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_16 = __this->get_address_of_elementPadding_6();
		float L_17 = L_16->get_bot_1();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_12, ((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_add((float)L_15, (float)L_17)))), /*hidden argument*/NULL);
		// elementRect.width += elementPadding.right + elementPadding.left;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_18 = (&V_0);
		float L_19;
		L_19 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_18, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_20 = __this->get_address_of_elementPadding_6();
		float L_21 = L_20->get_right_3();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_22 = __this->get_address_of_elementPadding_6();
		float L_23 = L_22->get_left_2();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_18, ((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_add((float)L_21, (float)L_23)))), /*hidden argument*/NULL);
		// textRect.x += elementPadding.left;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_24 = ___textRect0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_25 = L_24;
		float L_26;
		L_26 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_25, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_27 = __this->get_address_of_elementPadding_6();
		float L_28 = L_27->get_left_2();
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_25, ((float)il2cpp_codegen_add((float)L_26, (float)L_28)), /*hidden argument*/NULL);
		// textRect.y += elementPadding.top;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_29 = ___textRect0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_30 = L_29;
		float L_31;
		L_31 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_30, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_32 = __this->get_address_of_elementPadding_6();
		float L_33 = L_32->get_top_0();
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_30, ((float)il2cpp_codegen_add((float)L_31, (float)L_33)), /*hidden argument*/NULL);
		// return elementRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_34 = V_0;
		return L_34;
	}
}
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawLowerLeft>g__ElementRect|27_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  MonitoringGUIDrawer_U3CDrawLowerLeftU3Eg__ElementRectU7C27_0_m232B4A72C2E941BEE7F840638FE5F43C7C351BB9 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___textRect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// textRect.width = textDimensions.x;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_0 = ___textRect0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___textDimensions1;
		float L_2 = L_1.get_x_0();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_0, L_2, /*hidden argument*/NULL);
		// textRect.height = textDimensions.y;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_3 = ___textRect0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___textDimensions1;
		float L_5 = L_4.get_y_1();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_3, L_5, /*hidden argument*/NULL);
		// textRect.x = x;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_6 = ___textRect0;
		float L_7 = ___x2;
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_6, L_7, /*hidden argument*/NULL);
		// textRect.y = y;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_8 = ___textRect0;
		float L_9 = ___y3;
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_8, L_9, /*hidden argument*/NULL);
		// var elementRect = new Rect(textRect);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_10 = ___textRect0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11 = (*(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_10);
		Rect__ctor_m4976D69877F052A2BF4FDC3558F5697412BE08C3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), L_11, /*hidden argument*/NULL);
		// elementRect.height += elementPadding.top + elementPadding.bot;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_12 = (&V_0);
		float L_13;
		L_13 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_12, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_14 = __this->get_address_of_elementPadding_6();
		float L_15 = L_14->get_top_0();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_16 = __this->get_address_of_elementPadding_6();
		float L_17 = L_16->get_bot_1();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_12, ((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_add((float)L_15, (float)L_17)))), /*hidden argument*/NULL);
		// elementRect.width += elementPadding.right + elementPadding.left;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_18 = (&V_0);
		float L_19;
		L_19 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_18, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_20 = __this->get_address_of_elementPadding_6();
		float L_21 = L_20->get_right_3();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_22 = __this->get_address_of_elementPadding_6();
		float L_23 = L_22->get_left_2();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_18, ((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_add((float)L_21, (float)L_23)))), /*hidden argument*/NULL);
		// textRect.x += elementPadding.left;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_24 = ___textRect0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_25 = L_24;
		float L_26;
		L_26 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_25, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_27 = __this->get_address_of_elementPadding_6();
		float L_28 = L_27->get_left_2();
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_25, ((float)il2cpp_codegen_add((float)L_26, (float)L_28)), /*hidden argument*/NULL);
		// textRect.y += elementPadding.top;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_29 = ___textRect0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_30 = L_29;
		float L_31;
		L_31 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_30, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_32 = __this->get_address_of_elementPadding_6();
		float L_33 = L_32->get_top_0();
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_30, ((float)il2cpp_codegen_add((float)L_31, (float)L_33)), /*hidden argument*/NULL);
		// textRect.y -= elementRect.height;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_34 = ___textRect0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_35 = L_34;
		float L_36;
		L_36 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_35, /*hidden argument*/NULL);
		float L_37;
		L_37 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_35, ((float)il2cpp_codegen_subtract((float)L_36, (float)L_37)), /*hidden argument*/NULL);
		// elementRect.y -= elementRect.height;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_38 = (&V_0);
		float L_39;
		L_39 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_38, /*hidden argument*/NULL);
		float L_40;
		L_40 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_38, ((float)il2cpp_codegen_subtract((float)L_39, (float)L_40)), /*hidden argument*/NULL);
		// return elementRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_41 = V_0;
		return L_41;
	}
}
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawUpperRight>g__ElementRect|28_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  MonitoringGUIDrawer_U3CDrawUpperRightU3Eg__ElementRectU7C28_0_mB599FC5361F16F94FC25586628A887B5DD3EF17C (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___textRect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// textRect.width = textDimensions.x;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_0 = ___textRect0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___textDimensions1;
		float L_2 = L_1.get_x_0();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_0, L_2, /*hidden argument*/NULL);
		// textRect.height = textDimensions.y;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_3 = ___textRect0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___textDimensions1;
		float L_5 = L_4.get_y_1();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_3, L_5, /*hidden argument*/NULL);
		// textRect.x = x - (textRect.width + windowMargin.right + elementPadding.right);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_6 = ___textRect0;
		float L_7 = ___x2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_8 = ___textRect0;
		float L_9;
		L_9 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_8, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_10 = __this->get_address_of_windowMargin_5();
		float L_11 = L_10->get_right_3();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_12 = __this->get_address_of_elementPadding_6();
		float L_13 = L_12->get_right_3();
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_6, ((float)il2cpp_codegen_subtract((float)L_7, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_9, (float)L_11)), (float)L_13)))), /*hidden argument*/NULL);
		// textRect.y = y;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_14 = ___textRect0;
		float L_15 = ___y3;
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_14, L_15, /*hidden argument*/NULL);
		// var elementRect = new Rect(textRect);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_16 = ___textRect0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17 = (*(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_16);
		Rect__ctor_m4976D69877F052A2BF4FDC3558F5697412BE08C3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), L_17, /*hidden argument*/NULL);
		// elementRect.height += elementPadding.top + elementPadding.bot;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_18 = (&V_0);
		float L_19;
		L_19 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_18, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_20 = __this->get_address_of_elementPadding_6();
		float L_21 = L_20->get_top_0();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_22 = __this->get_address_of_elementPadding_6();
		float L_23 = L_22->get_bot_1();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_18, ((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_add((float)L_21, (float)L_23)))), /*hidden argument*/NULL);
		// elementRect.width += elementPadding.right + elementPadding.left;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_24 = (&V_0);
		float L_25;
		L_25 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_24, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_26 = __this->get_address_of_elementPadding_6();
		float L_27 = L_26->get_right_3();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_28 = __this->get_address_of_elementPadding_6();
		float L_29 = L_28->get_left_2();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_24, ((float)il2cpp_codegen_add((float)L_25, (float)((float)il2cpp_codegen_add((float)L_27, (float)L_29)))), /*hidden argument*/NULL);
		// elementRect.x -= elementPadding.left;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_30 = (&V_0);
		float L_31;
		L_31 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_30, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_32 = __this->get_address_of_elementPadding_6();
		float L_33 = L_32->get_left_2();
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_30, ((float)il2cpp_codegen_subtract((float)L_31, (float)L_33)), /*hidden argument*/NULL);
		// textRect.y += elementPadding.top;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_34 = ___textRect0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_35 = L_34;
		float L_36;
		L_36 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_35, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_37 = __this->get_address_of_elementPadding_6();
		float L_38 = L_37->get_top_0();
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_35, ((float)il2cpp_codegen_add((float)L_36, (float)L_38)), /*hidden argument*/NULL);
		// return elementRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_39 = V_0;
		return L_39;
	}
}
// UnityEngine.Rect Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer::<DrawLowerRight>g__ElementRect|29_0(UnityEngine.Rect&,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  MonitoringGUIDrawer_U3CDrawLowerRightU3Eg__ElementRectU7C29_0_mDFA2FBC3969610EEBC078E856273DC15566B5003 (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___textRect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textDimensions1, float ___x2, float ___y3, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// textRect.width = textDimensions.x;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_0 = ___textRect0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___textDimensions1;
		float L_2 = L_1.get_x_0();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_0, L_2, /*hidden argument*/NULL);
		// textRect.height = textDimensions.y;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_3 = ___textRect0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___textDimensions1;
		float L_5 = L_4.get_y_1();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_3, L_5, /*hidden argument*/NULL);
		// textRect.x = x - (textRect.width + windowMargin.right + elementPadding.right);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_6 = ___textRect0;
		float L_7 = ___x2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_8 = ___textRect0;
		float L_9;
		L_9 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_8, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_10 = __this->get_address_of_windowMargin_5();
		float L_11 = L_10->get_right_3();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_12 = __this->get_address_of_elementPadding_6();
		float L_13 = L_12->get_right_3();
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_6, ((float)il2cpp_codegen_subtract((float)L_7, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_9, (float)L_11)), (float)L_13)))), /*hidden argument*/NULL);
		// textRect.y = y;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_14 = ___textRect0;
		float L_15 = ___y3;
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_14, L_15, /*hidden argument*/NULL);
		// var elementRect = new Rect(textRect);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_16 = ___textRect0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17 = (*(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_16);
		Rect__ctor_m4976D69877F052A2BF4FDC3558F5697412BE08C3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), L_17, /*hidden argument*/NULL);
		// elementRect.height += elementPadding.top + elementPadding.bot;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_18 = (&V_0);
		float L_19;
		L_19 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_18, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_20 = __this->get_address_of_elementPadding_6();
		float L_21 = L_20->get_top_0();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_22 = __this->get_address_of_elementPadding_6();
		float L_23 = L_22->get_bot_1();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_18, ((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_add((float)L_21, (float)L_23)))), /*hidden argument*/NULL);
		// elementRect.width += elementPadding.right + elementPadding.left;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_24 = (&V_0);
		float L_25;
		L_25 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_24, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_26 = __this->get_address_of_elementPadding_6();
		float L_27 = L_26->get_right_3();
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_28 = __this->get_address_of_elementPadding_6();
		float L_29 = L_28->get_left_2();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_24, ((float)il2cpp_codegen_add((float)L_25, (float)((float)il2cpp_codegen_add((float)L_27, (float)L_29)))), /*hidden argument*/NULL);
		// elementRect.x -= elementPadding.left;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_30 = (&V_0);
		float L_31;
		L_31 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_30, /*hidden argument*/NULL);
		MarginOrPadding_t41AF557C4B5A565C6A909B49447E66C764FA8AF2 * L_32 = __this->get_address_of_elementPadding_6();
		float L_33 = L_32->get_left_2();
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_30, ((float)il2cpp_codegen_subtract((float)L_31, (float)L_33)), /*hidden argument*/NULL);
		// textRect.y -= elementRect.height;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_34 = ___textRect0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_35 = L_34;
		float L_36;
		L_36 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_35, /*hidden argument*/NULL);
		float L_37;
		L_37 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_35, ((float)il2cpp_codegen_subtract((float)L_36, (float)L_37)), /*hidden argument*/NULL);
		// elementRect.y -= elementRect.height;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_38 = (&V_0);
		float L_39;
		L_39 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_38, /*hidden argument*/NULL);
		float L_40;
		L_40 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_38, ((float)il2cpp_codegen_subtract((float)L_39, (float)L_40)), /*hidden argument*/NULL);
		// return elementRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_41 = V_0;
		return L_41;
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
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m384E33A633BD5F665DA905919BC28F87A4453859 (U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass36_0::<OnUnitDisposedInternal>b__0(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__0_mE0B4C988989C787443173866DB0860E5275B5053 (U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * __this, GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _unitsUpperLeft.Remove(_unitsUpperLeft.First(element => element.ID == unit.UniqueID));
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_0 = ___element0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GUIElement_get_ID_mD9332192C78F31EC0C48647D622AF39274BE383B_inline(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2 = __this->get_unit_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Baracuda.Monitoring.Interface.IMonitorUnit::get_UniqueID() */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_2);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass36_0::<OnUnitDisposedInternal>b__1(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__1_m3375BA4D9594F4AB1FBC5D6FE25463675EC8AB82 (U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * __this, GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _unitsUpperRight.Remove(_unitsUpperRight.First(element => element.ID == unit.UniqueID));
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_0 = ___element0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GUIElement_get_ID_mD9332192C78F31EC0C48647D622AF39274BE383B_inline(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2 = __this->get_unit_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Baracuda.Monitoring.Interface.IMonitorUnit::get_UniqueID() */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_2);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass36_0::<OnUnitDisposedInternal>b__2(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__2_mDCAE50235EEAFF9A858258F8E3C2A2F3413406DD (U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * __this, GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _unitsLowerLeft.Remove(_unitsLowerLeft.First(element => element.ID == unit.UniqueID));
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_0 = ___element0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GUIElement_get_ID_mD9332192C78F31EC0C48647D622AF39274BE383B_inline(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2 = __this->get_unit_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Baracuda.Monitoring.Interface.IMonitorUnit::get_UniqueID() */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_2);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/<>c__DisplayClass36_0::<OnUnitDisposedInternal>b__3(Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__3_mDC03B526B8D4533717144AA8154D4971C059A52F (U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * __this, GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _unitsLowerRight.Remove(_unitsLowerRight.First(element => element.ID == unit.UniqueID));
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_0 = ___element0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GUIElement_get_ID_mD9332192C78F31EC0C48647D622AF39274BE383B_inline(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2 = __this->get_unit_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Baracuda.Monitoring.Interface.IMonitorUnit::get_UniqueID() */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_2);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
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


// Conversion methods for marshalling of: Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
IL2CPP_EXTERN_C void Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshal_pinvoke(const Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3& unmarshaled, Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___style_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'style' of type 'Context': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___style_0Exception, NULL);
}
IL2CPP_EXTERN_C void Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshal_pinvoke_back(const Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshaled_pinvoke& marshaled, Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3& unmarshaled)
{
	Exception_t* ___style_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'style' of type 'Context': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___style_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
IL2CPP_EXTERN_C void Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshal_pinvoke_cleanup(Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
IL2CPP_EXTERN_C void Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshal_com(const Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3& unmarshaled, Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshaled_com& marshaled)
{
	Exception_t* ___style_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'style' of type 'Context': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___style_0Exception, NULL);
}
IL2CPP_EXTERN_C void Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshal_com_back(const Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshaled_com& marshaled, Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3& unmarshaled)
{
	Exception_t* ___style_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'style' of type 'Context': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___style_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context
IL2CPP_EXTERN_C void Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshal_com_cleanup(Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3_marshaled_com& marshaled)
{
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/Context::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context__ctor_mF9F348FCE4E22154EFD53615096E61EC11175586 (Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style0, const RuntimeMethod* method)
{
	{
		// this.style = style;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___style0;
		__this->set_style_0(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Context__ctor_mF9F348FCE4E22154EFD53615096E61EC11175586_AdjustorThunk (RuntimeObject * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3 * _thisAdjusted = reinterpret_cast<Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3 *>(__this + _offset);
	Context__ctor_mF9F348FCE4E22154EFD53615096E61EC11175586_inline(_thisAdjusted, ___style0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIElement_get_Enabled_mDB9C1C4D45A141C38DA6274191A6A053DA752C6C (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; private set; }
		bool L_0 = __this->get_U3CEnabledU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIElement_set_Enabled_m6650A4F5FF00FC3DCF8568AE4F7E753D41142C27 (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CEnabledU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIElement_get_ID_mD9332192C78F31EC0C48647D622AF39274BE383B (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, const RuntimeMethod* method)
{
	{
		// public int ID { get; }
		int32_t L_0 = __this->get_U3CIDU3Ek__BackingField_1();
		return L_0;
	}
}
// System.String Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIElement_get_Content_m4A3F659E59133D36B02461754A81AFBA2BCF8D36 (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, const RuntimeMethod* method)
{
	{
		// public string Content { [MethodImpl(MethodImplOptions.AggressiveInlining)] get; private set; }
		String_t* L_0 = __this->get_U3CContentU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::set_Content(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIElement_set_Content_mA50D3211FBADA27CB101F90F796EB7C166BA263B (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Content { [MethodImpl(MethodImplOptions.AggressiveInlining)] get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CContentU3Ek__BackingField_2(L_0);
		return;
	}
}
// Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::get_FormatData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * GUIElement_get_FormatData_mA535C3AFF4E5673A3EA2461CE550C648954DCBC8 (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, const RuntimeMethod* method)
{
	{
		// public FormatData FormatData { [MethodImpl(MethodImplOptions.AggressiveInlining)] get; }
		FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * L_0 = __this->get_U3CFormatDataU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::.ctor(Baracuda.Monitoring.Interface.IMonitorUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIElement__ctor_m6BBEE5336268EFB331913C897AA07591862F135C (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, RuntimeObject* ___unit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIElement_SetActive_m0F5FBB76A2CAB72163C9E825EDCD19D889909975_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIElement_Update_m708789750216B6465F00A08294F1C031EE190543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorProfile_t1A828B05BBC69025F81600D47835C7F10AC1D7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GUIElement(IMonitorUnit unit)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// unit.ValueUpdated += Update;
		RuntimeObject* L_0 = ___unit0;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_1, __this, (intptr_t)((intptr_t)GUIElement_Update_m708789750216B6465F00A08294F1C031EE190543_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * >::Invoke(8 /* System.Void Baracuda.Monitoring.Interface.IMonitorUnit::add_ValueUpdated(System.Action`1<System.String>) */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_0, L_1);
		// unit.ActiveStateChanged += SetActive;
		RuntimeObject* L_2 = ___unit0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_3, __this, (intptr_t)((intptr_t)GUIElement_SetActive_m0F5FBB76A2CAB72163C9E825EDCD19D889909975_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(6 /* System.Void Baracuda.Monitoring.Interface.IMonitorUnit::add_ActiveStateChanged(System.Action`1<System.Boolean>) */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_2, L_3);
		// Enabled = unit.Enabled;
		RuntimeObject* L_4 = ___unit0;
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Baracuda.Monitoring.Interface.IMonitorUnit::get_Enabled() */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_4);
		GUIElement_set_Enabled_m6650A4F5FF00FC3DCF8568AE4F7E753D41142C27_inline(__this, L_5, /*hidden argument*/NULL);
		// FormatData = unit.Profile.FormatData;
		RuntimeObject* L_6 = ___unit0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Baracuda.Monitoring.Interface.IMonitorProfile Baracuda.Monitoring.Interface.IMonitorUnit::get_Profile() */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * L_8;
		L_8 = InterfaceFuncInvoker0< FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * >::Invoke(8 /* Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.Interface.IMonitorProfile::get_FormatData() */, IMonitorProfile_t1A828B05BBC69025F81600D47835C7F10AC1D7BA_il2cpp_TypeInfo_var, L_7);
		__this->set_U3CFormatDataU3Ek__BackingField_3(L_8);
		// ID = unit.UniqueID;
		RuntimeObject* L_9 = ___unit0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Baracuda.Monitoring.Interface.IMonitorUnit::get_UniqueID() */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_9);
		__this->set_U3CIDU3Ek__BackingField_1(L_10);
		// _size = Mathf.Max(FormatData.FontSize, 14);
		FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * L_11;
		L_11 = GUIElement_get_FormatData_mA535C3AFF4E5673A3EA2461CE550C648954DCBC8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = FormatData_get_FontSize_mAF34A4A5756313676582DBBC97FA27FD357A2ACB_inline(L_11, /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_12, ((int32_t)14), /*hidden argument*/NULL);
		__this->set__size_4(L_13);
		// Update(unit.GetState());
		RuntimeObject* L_14 = ___unit0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(13 /* System.String Baracuda.Monitoring.Interface.IMonitorUnit::GetState() */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_14);
		GUIElement_Update_m708789750216B6465F00A08294F1C031EE190543(__this, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::Update(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIElement_Update_m708789750216B6465F00A08294F1C031EE190543 (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral732E6DFF6A0E543BD26C1936B7AA5AA61DB76591);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3969D2C3B753EEA6472EAA0FAFE56A82655C9C);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// var sb = StringBuilderPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var);
		StringBuilder_t * L_0;
		L_0 = StringBuilderPool_Get_mAE9C8CA2ED8D833973655A636A3B4F943DE2517D(/*hidden argument*/NULL);
		V_0 = L_0;
		// sb.Append("<size=");
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral732E6DFF6A0E543BD26C1936B7AA5AA61DB76591, /*hidden argument*/NULL);
		// sb.Append(_size);
		StringBuilder_t * L_3 = V_0;
		int32_t L_4 = __this->get__size_4();
		NullCheck(L_3);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD(L_3, L_4, /*hidden argument*/NULL);
		// sb.Append('>');
		StringBuilder_t * L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_6, ((int32_t)62), /*hidden argument*/NULL);
		// sb.Append(text);
		StringBuilder_t * L_8 = V_0;
		String_t* L_9 = ___text0;
		NullCheck(L_8);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_8, L_9, /*hidden argument*/NULL);
		// sb.Append("</size>");
		StringBuilder_t * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteralEB3969D2C3B753EEA6472EAA0FAFE56A82655C9C, /*hidden argument*/NULL);
		// Content = StringBuilderPool.Release(sb);
		StringBuilder_t * L_13 = V_0;
		String_t* L_14;
		L_14 = StringBuilderPool_Release_m0A1C306DDA21B2202A32EC9C8D498C4FC864E12A(L_13, /*hidden argument*/NULL);
		GUIElement_set_Content_mA50D3211FBADA27CB101F90F796EB7C166BA263B_inline(__this, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/GUIElement::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIElement_SetActive_m0F5FBB76A2CAB72163C9E825EDCD19D889909975 (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, bool ___activeState0, const RuntimeMethod* method)
{
	{
		// Enabled = activeState;
		bool L_0 = ___activeState0;
		GUIElement_set_Enabled_m6650A4F5FF00FC3DCF8568AE4F7E753D41142C27_inline(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Baracuda.Monitoring.UI.IMGUI.MonitoringGUIDrawer/ScreenData::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenData__ctor_m143399ECD6A90E9F4AF4A56C134AE708D5465E17 (ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5 * __this, float ___width0, float ___height1, const RuntimeMethod* method)
{
	{
		// Width = width;
		float L_0 = ___width0;
		__this->set_Width_0(L_0);
		// Height = height;
		float L_1 = ___height1;
		__this->set_Height_1(L_1);
		// HalfHeight = height * .5f;
		float L_2 = ___height1;
		__this->set_HalfHeight_2(((float)il2cpp_codegen_multiply((float)L_2, (float)(0.5f))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ScreenData__ctor_m143399ECD6A90E9F4AF4A56C134AE708D5465E17_AdjustorThunk (RuntimeObject * __this, float ___width0, float ___height1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5 * _thisAdjusted = reinterpret_cast<ScreenData_t5EF568E14F37A2952049B94035C7B0A9A6FD4EA5 *>(__this + _offset);
	ScreenData__ctor_m143399ECD6A90E9F4AF4A56C134AE708D5465E17(_thisAdjusted, ___width0, ___height1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Context__ctor_mF9F348FCE4E22154EFD53615096E61EC11175586_inline (Context_t66F09E03465A5C49937C4BA5D9BA0F127939BDF3 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style0, const RuntimeMethod* method)
{
	{
		// this.style = style;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ___style0;
		__this->set_style_0(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GUIElement_get_Enabled_mDB9C1C4D45A141C38DA6274191A6A053DA752C6C_inline (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; private set; }
		bool L_0 = __this->get_U3CEnabledU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GUIElement_get_Content_m4A3F659E59133D36B02461754A81AFBA2BCF8D36_inline (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, const RuntimeMethod* method)
{
	{
		// public string Content { [MethodImpl(MethodImplOptions.AggressiveInlining)] get; private set; }
		String_t* L_0 = __this->get_U3CContentU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitDisposedInternal_m30D3C31E44380DFB762937157A15372B19621A44_inline (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, RuntimeObject* ___unit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorProfile_t1A828B05BBC69025F81600D47835C7F10AC1D7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__0_mE0B4C988989C787443173866DB0860E5275B5053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__1_m3375BA4D9594F4AB1FBC5D6FE25463675EC8AB82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__2_mDCAE50235EEAFF9A858258F8E3C2A2F3413406DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__3_mDC03B526B8D4533717144AA8154D4971C059A52F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_0 = (U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass36_0__ctor_m384E33A633BD5F665DA905919BC28F87A4453859(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_1 = V_0;
		RuntimeObject* L_2 = ___unit0;
		NullCheck(L_1);
		L_1->set_unit_0(L_2);
		// switch (unit.Profile.FormatData.Position)
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->get_unit_0();
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Baracuda.Monitoring.Interface.IMonitorProfile Baracuda.Monitoring.Interface.IMonitorUnit::get_Profile() */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * L_6;
		L_6 = InterfaceFuncInvoker0< FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * >::Invoke(8 /* Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.Interface.IMonitorProfile::get_FormatData() */, IMonitorProfile_t1A828B05BBC69025F81600D47835C7F10AC1D7BA_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = FormatData_get_Position_mD5A47D36183E0F72B8C1CA23BDA103DE6D27A96C_inline(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		switch (L_8)
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_0082;
			}
			case 3:
			{
				goto IL_00a6;
			}
		}
	}
	{
		return;
	}

IL_003a:
	{
		// _unitsUpperLeft.Remove(_unitsUpperLeft.First(element => element.ID == unit.UniqueID));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_9 = __this->get__unitsUpperLeft_11();
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_10 = __this->get__unitsUpperLeft_11();
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_11 = V_0;
		Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 * L_12 = (Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 *)il2cpp_codegen_object_new(Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800_il2cpp_TypeInfo_var);
		Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__0_mE0B4C988989C787443173866DB0860E5275B5053_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D_RuntimeMethod_var);
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_13;
		L_13 = Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221(L_10, L_12, /*hidden argument*/Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221_RuntimeMethod_var);
		NullCheck(L_9);
		bool L_14;
		L_14 = List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC(L_9, L_13, /*hidden argument*/List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC_RuntimeMethod_var);
		// break;
		return;
	}

IL_005e:
	{
		// _unitsUpperRight.Remove(_unitsUpperRight.First(element => element.ID == unit.UniqueID));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_15 = __this->get__unitsUpperRight_12();
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_16 = __this->get__unitsUpperRight_12();
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_17 = V_0;
		Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 * L_18 = (Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 *)il2cpp_codegen_object_new(Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800_il2cpp_TypeInfo_var);
		Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__1_m3375BA4D9594F4AB1FBC5D6FE25463675EC8AB82_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D_RuntimeMethod_var);
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_19;
		L_19 = Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221(L_16, L_18, /*hidden argument*/Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221_RuntimeMethod_var);
		NullCheck(L_15);
		bool L_20;
		L_20 = List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC(L_15, L_19, /*hidden argument*/List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC_RuntimeMethod_var);
		// break;
		return;
	}

IL_0082:
	{
		// _unitsLowerLeft.Remove(_unitsLowerLeft.First(element => element.ID == unit.UniqueID));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_21 = __this->get__unitsLowerLeft_13();
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_22 = __this->get__unitsLowerLeft_13();
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_23 = V_0;
		Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 * L_24 = (Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 *)il2cpp_codegen_object_new(Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800_il2cpp_TypeInfo_var);
		Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D(L_24, L_23, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__2_mDCAE50235EEAFF9A858258F8E3C2A2F3413406DD_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D_RuntimeMethod_var);
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_25;
		L_25 = Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221(L_22, L_24, /*hidden argument*/Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221_RuntimeMethod_var);
		NullCheck(L_21);
		bool L_26;
		L_26 = List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC(L_21, L_25, /*hidden argument*/List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC_RuntimeMethod_var);
		// break;
		return;
	}

IL_00a6:
	{
		// _unitsLowerRight.Remove(_unitsLowerRight.First(element => element.ID == unit.UniqueID));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_27 = __this->get__unitsLowerRight_14();
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_28 = __this->get__unitsLowerRight_14();
		U3CU3Ec__DisplayClass36_0_t96768A02C322C2A06FFF3B02C5EEBBF1AB2F9307 * L_29 = V_0;
		Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 * L_30 = (Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800 *)il2cpp_codegen_object_new(Func_2_tC0BED75729ACFCC4179235337DAE288E212E3800_il2cpp_TypeInfo_var);
		Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D(L_30, L_29, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass36_0_U3COnUnitDisposedInternalU3Eb__3_mDC03B526B8D4533717144AA8154D4971C059A52F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCF69D5A28B1F9F62B634E0A269BA5ED6B5D4E66D_RuntimeMethod_var);
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_31;
		L_31 = Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221(L_28, L_30, /*hidden argument*/Enumerable_First_TisGUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_mB75D5FAE65F8D7E9361B304D7DBFE8E939E30221_RuntimeMethod_var);
		NullCheck(L_27);
		bool L_32;
		L_32 = List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC(L_27, L_31, /*hidden argument*/List_1_Remove_m80F500EA64633AD82821254B826A2EDE726EE5BC_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonitoringGUIDrawer_OnUnitCreatedInternal_mBE89BFA59BE8ADF9EB15F986229119CBB2E580BE_inline (MonitoringGUIDrawer_t0CE4B79C103180BA0B17FC5FD1509EBBCB76B0F8 * __this, RuntimeObject* ___unit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorProfile_t1A828B05BBC69025F81600D47835C7F10AC1D7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (unit.Profile.FormatData.Position)
		RuntimeObject* L_0 = ___unit0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Baracuda.Monitoring.Interface.IMonitorProfile Baracuda.Monitoring.Interface.IMonitorUnit::get_Profile() */, IMonitorUnit_tCBA5D3747AA4FA6D52E40E3221BFF4055F5F494D_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * L_2;
		L_2 = InterfaceFuncInvoker0< FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * >::Invoke(8 /* Baracuda.Monitoring.Internal.Utilities.FormatData Baracuda.Monitoring.Interface.IMonitorProfile::get_FormatData() */, IMonitorProfile_t1A828B05BBC69025F81600D47835C7F10AC1D7BA_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FormatData_get_Position_mD5A47D36183E0F72B8C1CA23BDA103DE6D27A96C_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_005e;
			}
		}
	}
	{
		return;
	}

IL_0028:
	{
		// _unitsUpperLeft.Add(new GUIElement(unit));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_5 = __this->get__unitsUpperLeft_11();
		RuntimeObject* L_6 = ___unit0;
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_7 = (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B *)il2cpp_codegen_object_new(GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_il2cpp_TypeInfo_var);
		GUIElement__ctor_m6BBEE5336268EFB331913C897AA07591862F135C(L_7, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00(L_5, L_7, /*hidden argument*/List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00_RuntimeMethod_var);
		// break;
		return;
	}

IL_003a:
	{
		// _unitsUpperRight.Add(new GUIElement(unit));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_8 = __this->get__unitsUpperRight_12();
		RuntimeObject* L_9 = ___unit0;
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_10 = (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B *)il2cpp_codegen_object_new(GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_il2cpp_TypeInfo_var);
		GUIElement__ctor_m6BBEE5336268EFB331913C897AA07591862F135C(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00(L_8, L_10, /*hidden argument*/List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00_RuntimeMethod_var);
		// break;
		return;
	}

IL_004c:
	{
		// _unitsLowerLeft.Add(new GUIElement(unit));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_11 = __this->get__unitsLowerLeft_13();
		RuntimeObject* L_12 = ___unit0;
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_13 = (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B *)il2cpp_codegen_object_new(GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_il2cpp_TypeInfo_var);
		GUIElement__ctor_m6BBEE5336268EFB331913C897AA07591862F135C(L_13, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00(L_11, L_13, /*hidden argument*/List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00_RuntimeMethod_var);
		// break;
		return;
	}

IL_005e:
	{
		// _unitsLowerRight.Add(new GUIElement(unit));
		List_1_t07A2AD52DE45C30F08F731281F6237F11DCD360C * L_14 = __this->get__unitsLowerRight_14();
		RuntimeObject* L_15 = ___unit0;
		GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * L_16 = (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B *)il2cpp_codegen_object_new(GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B_il2cpp_TypeInfo_var);
		GUIElement__ctor_m6BBEE5336268EFB331913C897AA07591862F135C(L_16, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00(L_14, L_16, /*hidden argument*/List_1_Add_m5204AFA3007109A01B6171349035EF770D7F5B00_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormatData_get_Position_mD5A47D36183E0F72B8C1CA23BDA103DE6D27A96C_inline (FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * __this, const RuntimeMethod* method)
{
	{
		// public UIPosition Position { get; }
		int32_t L_0 = __this->get_U3CPositionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GUIElement_get_ID_mD9332192C78F31EC0C48647D622AF39274BE383B_inline (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, const RuntimeMethod* method)
{
	{
		// public int ID { get; }
		int32_t L_0 = __this->get_U3CIDU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIElement_set_Enabled_m6650A4F5FF00FC3DCF8568AE4F7E753D41142C27_inline (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CEnabledU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * GUIElement_get_FormatData_mA535C3AFF4E5673A3EA2461CE550C648954DCBC8_inline (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, const RuntimeMethod* method)
{
	{
		// public FormatData FormatData { [MethodImpl(MethodImplOptions.AggressiveInlining)] get; }
		FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * L_0 = __this->get_U3CFormatDataU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FormatData_get_FontSize_mAF34A4A5756313676582DBBC97FA27FD357A2ACB_inline (FormatData_tCF4AE90DEC9EEA5B4D7E3BD87BCA0C27C79AD877 * __this, const RuntimeMethod* method)
{
	{
		// public int FontSize { get; }
		int32_t L_0 = __this->get_U3CFontSizeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIElement_set_Content_mA50D3211FBADA27CB101F90F796EB7C166BA263B_inline (GUIElement_tD691FACB8BFD16478D767FCEAEF85744DDCE323B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Content { [MethodImpl(MethodImplOptions.AggressiveInlining)] get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CContentU3Ek__BackingField_2(L_0);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
