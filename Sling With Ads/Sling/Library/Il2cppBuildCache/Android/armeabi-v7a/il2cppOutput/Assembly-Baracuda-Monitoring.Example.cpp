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

// System.Action`1<Baracuda.Monitoring.Example.Scripts.InputMode>
struct Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`1<System.Int32Enum>
struct Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09;
// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9;
// Baracuda.Monitoring.MonitoredSingleton`1<Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor>
struct MonitoredSingleton_1_t574418D7711B3F90B019A47B3DAE3EDF55B82B2A;
// Baracuda.Monitoring.MonitoredSingleton`1<System.Object>
struct MonitoredSingleton_1_t80ACE05A8D6D8A4B193B24677EE2AE3B2DFB582C;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<Baracuda.Monitoring.Example.Scripts.Projectile>
struct Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6;
// Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1<System.Int32>
struct ValueObject_1_tE42E22C2F4482457F78F41CE9A2BE8B32EC82642;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Baracuda.Monitoring.Example.Scripts.Projectile[]
struct ProjectileU5BU5D_t1A6F157EC47C5FF229645AF95A778C0970B43743;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Baracuda.Monitoring.Example.Scripts.AmmunitionPack
struct AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor
struct FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07;
// FilterController
struct FilterController_tE99B422A85D6AA873CFB71BFF162F6126966F20C;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Baracuda.Monitoring.Example.Scripts.GenericsExample
struct GenericsExample_tAAB8A99F73CA2C3C6F6E64D4D53C9B44F03028D5;
// Baracuda.Monitoring.Example.Scripts.HitBox
struct HitBox_tBDA174738404E2EBE9D79BAB886ABC36DB70E5AB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Baracuda.Monitoring.Example.Scripts.IDamageable
struct IDamageable_t6C137867CAE20F10B8C7B527F191D64B41EDF2EE;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Baracuda.Monitoring.Example.Scripts.IPlayerInput
struct IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951;
// Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput
struct LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Baracuda.Monitoring.Example.Scripts.MonitorInput
struct MonitorInput_tDD0488D336A590114F17EC7B3BD7D9863E4FE0F1;
// Baracuda.Monitoring.MonitoredBehaviour
struct MonitoredBehaviour_t7FB19EB465CB2B947BD759A1D907E3BAA3CDB0F1;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Baracuda.Monitoring.Example.Scripts.PlayerMovement
struct PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64;
// Baracuda.Monitoring.Example.Scripts.PlayerWeapon
struct PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61;
// Baracuda.Monitoring.Example.Scripts.Projectile
struct Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E;
// Baracuda.Monitoring.Example.Scripts.ProjectilePool
struct ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Baracuda.Monitoring.Example.Scripts.ShootingTarget
struct ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5
struct U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Baracuda.Monitoring.Example.Scripts.GenericsExample/IntValueObject
struct IntValueObject_t046547CD0EB5D55C4EC9DE796F9194D2F71D8776;
// Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__41
struct U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5;
// Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6
struct U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF;
// Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11
struct U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDamageable_t6C137867CAE20F10B8C7B527F191D64B41EDF2EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntValueObject_t046547CD0EB5D55C4EC9DE796F9194D2F71D8776_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonitoringUI_t5CC3A3622531862A1CF837BFDCF5079E58557B93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0837041AD0EE0643F6824EDD39A94236A4C64E77;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral228AB9E61C52401E2BCC03F161ECA5B69A14DC54;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2782E60458C315FD9CCA88FAAA60C80198F1751C;
IL2CPP_EXTERN_C String_t* _stringLiteral32B3E6D6F1633A27671CD1FFEC132F2C3B158F79;
IL2CPP_EXTERN_C String_t* _stringLiteral41F34472FD1EC18AB899F5BD0C1EA11201795341;
IL2CPP_EXTERN_C String_t* _stringLiteral4C8E53BB00CB458F66CD314AADF58285ABC31E61;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0483570A78643AE1FD9C1B5E0DE2FBC10DF38F;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8A45D0D8311C8D73121FDD6C8B401E1AD3C58E0E;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteralACBF7A4CD422476FEB006274145662AE739D5833;
IL2CPP_EXTERN_C String_t* _stringLiteralBA0318C58431FE2137800A0147599057929A2F71;
IL2CPP_EXTERN_C String_t* _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203;
IL2CPP_EXTERN_C String_t* _stringLiteralC66FB6A39237C31222C78DEDB1295C5BD1F974B4;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF53BF2C8EE68F8DC4E5C530B55D3D7F9A6DA3D83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mD79C9E890CF9FBA5249755229C3465BEF9E06015_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC2EEB227949FF6517A085ECC9E0FC1F8897A5546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_m9C9FFE99ECE8711B2E1AD57AE39F8DA9DC56B6C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_mE998DF92240DB3AE14F41F68031438A8A3A010BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisPlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61_mF5282FA6715E746A08D7D6D777A66C007C482FF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FilterController_OnToggleFilter_mE20CE9A30DDF2B815F6F5930FB953C816C31A772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIDamageable_t6C137867CAE20F10B8C7B527F191D64B41EDF2EE_mAA049B3F4155E65F1D65CE679B4E0A96409F9AA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitoredSingleton_1__ctor_mFF5ED5BAFE29EFF0F4DBB268517C7E5D10CEBCE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisProjectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_mAB9CFF6F69AD2F11B8D06D80B8B79C0EB88E79AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mC36B1C4D2A0FCBD11D5241607DB0BA454635C4AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mFFA0B04310B155AE0014FEA27DD765C79FC241B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCF6641FF23152EE5C64B5F532CB722CAC5BAEADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCooldownCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m34FE814A743C73C651F4297462CB50CF5FF2E75A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCooldownCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_mA87BC9259E84C7B65772C65C05C3015B70BE88C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSecondForceU3Ed__6_System_Collections_IEnumerator_Reset_mAEF7C04C27FA6DD4E283754B9D664995C698D4C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__41_System_Collections_IEnumerator_Reset_mFABFF37F4F846B9A64162D2AF257DBD4CCF400DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueObject_1__ctor_m27B95BD763C34EE90C81FD685FE77EE2D16DAD04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueObject_1_set_Value_m47266E8B40EFD980D319546E9D7EE5E57895EE78_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9C36489FC5B0BD14C1A9273297B38E263FB393CA 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Queue`1<Baracuda.Monitoring.Example.Scripts.Projectile>
struct Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ProjectileU5BU5D_t1A6F157EC47C5FF229645AF95A778C0970B43743* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6, ____array_0)); }
	inline ProjectileU5BU5D_t1A6F157EC47C5FF229645AF95A778C0970B43743* get__array_0() const { return ____array_0; }
	inline ProjectileU5BU5D_t1A6F157EC47C5FF229645AF95A778C0970B43743** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ProjectileU5BU5D_t1A6F157EC47C5FF229645AF95A778C0970B43743* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Baracuda.Monitoring.MonitoredObject
struct MonitoredObject_tEE324B082C8E8BAEB7608CEB6519226F0C3E0BD0  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5
struct U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352  : public RuntimeObject
{
public:
	// System.Int32 Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Baracuda.Monitoring.Example.Scripts.AmmunitionPack Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::<>4__this
	AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352, ___U3CU3E4__this_2)); }
	inline AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__41
struct U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5  : public RuntimeObject
{
public:
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__41::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Baracuda.Monitoring.Example.Scripts.PlayerMovement Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__41::<>4__this
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5, ___U3CU3E4__this_2)); }
	inline PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11
struct U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C  : public RuntimeObject
{
public:
	// System.Int32 Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Baracuda.Monitoring.Example.Scripts.ShootingTarget Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::<>4__this
	ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C, ___U3CU3E4__this_2)); }
	inline ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1<System.Int32>
struct ValueObject_1_tE42E22C2F4482457F78F41CE9A2BE8B32EC82642  : public MonitoredObject_tEE324B082C8E8BAEB7608CEB6519226F0C3E0BD0
{
public:
	// T Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1::<Value>k__BackingField
	int32_t ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ValueObject_1_tE42E22C2F4482457F78F41CE9A2BE8B32EC82642, ___U3CValueU3Ek__BackingField_0)); }
	inline int32_t get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(int32_t value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.CollisionFlags
struct CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorLockMode
struct CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04, ___value___2)); }
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

// Baracuda.Monitoring.Example.Scripts.GroundStatus
struct GroundStatus_tC1FA3E955D520E3C0A38906CB0793439EEBE8E86 
{
public:
	// System.Int32 Baracuda.Monitoring.Example.Scripts.GroundStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GroundStatus_tC1FA3E955D520E3C0A38906CB0793439EEBE8E86, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Baracuda.Monitoring.Example.Scripts.InputMode
struct InputMode_t1B6FF67FF44F9E68947B4137A4DEB78F9D74B113 
{
public:
	// System.Int32 Baracuda.Monitoring.Example.Scripts.InputMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputMode_t1B6FF67FF44F9E68947B4137A4DEB78F9D74B113, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.QueryTriggerInteraction
struct QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// Baracuda.Monitoring.Example.Scripts.GenericsExample/IntValueObject
struct IntValueObject_t046547CD0EB5D55C4EC9DE796F9194D2F71D8776  : public ValueObject_1_tE42E22C2F4482457F78F41CE9A2BE8B32EC82642
{
public:

public:
};


// Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6
struct U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF  : public RuntimeObject
{
public:
	// System.Int32 Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Baracuda.Monitoring.Example.Scripts.Projectile Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::<>4__this
	Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::force
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF, ___U3CU3E4__this_2)); }
	inline Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_force_3() { return static_cast<int32_t>(offsetof(U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF, ___force_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_force_3() const { return ___force_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_force_3() { return &___force_3; }
	inline void set_force_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___force_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<Baracuda.Monitoring.Example.Scripts.InputMode>
struct Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9  : public MulticastDelegate_t
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


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
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


// Baracuda.Monitoring.Internal.Utilities.MonoSingleton`1<Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor>
struct MonoSingleton_1_t33744B8DD05E15E46B1C79214588DC5871B4EB24  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Baracuda.Monitoring.Internal.Utilities.MonoSingleton`1::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_4;
	// System.Boolean Baracuda.Monitoring.Internal.Utilities.MonoSingleton`1::hideInHierarchy
	bool ___hideInHierarchy_5;

public:
	inline static int32_t get_offset_of_dontDestroyOnLoad_4() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t33744B8DD05E15E46B1C79214588DC5871B4EB24, ___dontDestroyOnLoad_4)); }
	inline bool get_dontDestroyOnLoad_4() const { return ___dontDestroyOnLoad_4; }
	inline bool* get_address_of_dontDestroyOnLoad_4() { return &___dontDestroyOnLoad_4; }
	inline void set_dontDestroyOnLoad_4(bool value)
	{
		___dontDestroyOnLoad_4 = value;
	}

	inline static int32_t get_offset_of_hideInHierarchy_5() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t33744B8DD05E15E46B1C79214588DC5871B4EB24, ___hideInHierarchy_5)); }
	inline bool get_hideInHierarchy_5() const { return ___hideInHierarchy_5; }
	inline bool* get_address_of_hideInHierarchy_5() { return &___hideInHierarchy_5; }
	inline void set_hideInHierarchy_5(bool value)
	{
		___hideInHierarchy_5 = value;
	}
};

struct MonoSingleton_1_t33744B8DD05E15E46B1C79214588DC5871B4EB24_StaticFields
{
public:
	// T Baracuda.Monitoring.Internal.Utilities.MonoSingleton`1::<Current>k__BackingField
	FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07 * ___U3CCurrentU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t33744B8DD05E15E46B1C79214588DC5871B4EB24_StaticFields, ___U3CCurrentU3Ek__BackingField_6)); }
	inline FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07 * get_U3CCurrentU3Ek__BackingField_6() const { return ___U3CCurrentU3Ek__BackingField_6; }
	inline FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07 ** get_address_of_U3CCurrentU3Ek__BackingField_6() { return &___U3CCurrentU3Ek__BackingField_6; }
	inline void set_U3CCurrentU3Ek__BackingField_6(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07 * value)
	{
		___U3CCurrentU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentU3Ek__BackingField_6), (void*)value);
	}
};


// FilterController
struct FilterController_tE99B422A85D6AA873CFB71BFF162F6126966F20C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput FilterController::_playerInput
	LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * ____playerInput_4;
	// UnityEngine.GameObject FilterController::uiParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___uiParent_5;

public:
	inline static int32_t get_offset_of__playerInput_4() { return static_cast<int32_t>(offsetof(FilterController_tE99B422A85D6AA873CFB71BFF162F6126966F20C, ____playerInput_4)); }
	inline LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * get__playerInput_4() const { return ____playerInput_4; }
	inline LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 ** get_address_of__playerInput_4() { return &____playerInput_4; }
	inline void set__playerInput_4(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * value)
	{
		____playerInput_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playerInput_4), (void*)value);
	}

	inline static int32_t get_offset_of_uiParent_5() { return static_cast<int32_t>(offsetof(FilterController_tE99B422A85D6AA873CFB71BFF162F6126966F20C, ___uiParent_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_uiParent_5() const { return ___uiParent_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_uiParent_5() { return &___uiParent_5; }
	inline void set_uiParent_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___uiParent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiParent_5), (void*)value);
	}
};


// Baracuda.Monitoring.Example.Scripts.GenericsExample
struct GenericsExample_tAAB8A99F73CA2C3C6F6E64D4D53C9B44F03028D5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Baracuda.Monitoring.Example.Scripts.GenericsExample/IntValueObject Baracuda.Monitoring.Example.Scripts.GenericsExample::_valueObject
	IntValueObject_t046547CD0EB5D55C4EC9DE796F9194D2F71D8776 * ____valueObject_4;

public:
	inline static int32_t get_offset_of__valueObject_4() { return static_cast<int32_t>(offsetof(GenericsExample_tAAB8A99F73CA2C3C6F6E64D4D53C9B44F03028D5, ____valueObject_4)); }
	inline IntValueObject_t046547CD0EB5D55C4EC9DE796F9194D2F71D8776 * get__valueObject_4() const { return ____valueObject_4; }
	inline IntValueObject_t046547CD0EB5D55C4EC9DE796F9194D2F71D8776 ** get_address_of__valueObject_4() { return &____valueObject_4; }
	inline void set__valueObject_4(IntValueObject_t046547CD0EB5D55C4EC9DE796F9194D2F71D8776 * value)
	{
		____valueObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____valueObject_4), (void*)value);
	}
};


// Baracuda.Monitoring.Example.Scripts.HitBox
struct HitBox_tBDA174738404E2EBE9D79BAB886ABC36DB70E5AB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Baracuda.Monitoring.Example.Scripts.HitBox::damageMultiplier
	float ___damageMultiplier_4;
	// Baracuda.Monitoring.Example.Scripts.ShootingTarget Baracuda.Monitoring.Example.Scripts.HitBox::_shootingTarget
	ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * ____shootingTarget_5;

public:
	inline static int32_t get_offset_of_damageMultiplier_4() { return static_cast<int32_t>(offsetof(HitBox_tBDA174738404E2EBE9D79BAB886ABC36DB70E5AB, ___damageMultiplier_4)); }
	inline float get_damageMultiplier_4() const { return ___damageMultiplier_4; }
	inline float* get_address_of_damageMultiplier_4() { return &___damageMultiplier_4; }
	inline void set_damageMultiplier_4(float value)
	{
		___damageMultiplier_4 = value;
	}

	inline static int32_t get_offset_of__shootingTarget_5() { return static_cast<int32_t>(offsetof(HitBox_tBDA174738404E2EBE9D79BAB886ABC36DB70E5AB, ____shootingTarget_5)); }
	inline ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * get__shootingTarget_5() const { return ____shootingTarget_5; }
	inline ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 ** get_address_of__shootingTarget_5() { return &____shootingTarget_5; }
	inline void set__shootingTarget_5(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * value)
	{
		____shootingTarget_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shootingTarget_5), (void*)value);
	}
};


// Baracuda.Monitoring.Example.Scripts.MonitorInput
struct MonitorInput_tDD0488D336A590114F17EC7B3BD7D9863E4FE0F1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.KeyCode Baracuda.Monitoring.Example.Scripts.MonitorInput::toggleKey
	int32_t ___toggleKey_4;

public:
	inline static int32_t get_offset_of_toggleKey_4() { return static_cast<int32_t>(offsetof(MonitorInput_tDD0488D336A590114F17EC7B3BD7D9863E4FE0F1, ___toggleKey_4)); }
	inline int32_t get_toggleKey_4() const { return ___toggleKey_4; }
	inline int32_t* get_address_of_toggleKey_4() { return &___toggleKey_4; }
	inline void set_toggleKey_4(int32_t value)
	{
		___toggleKey_4 = value;
	}
};


// Baracuda.Monitoring.MonitoredBehaviour
struct MonitoredBehaviour_t7FB19EB465CB2B947BD759A1D907E3BAA3CDB0F1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Baracuda.Monitoring.Example.Scripts.Projectile
struct Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody Baracuda.Monitoring.Example.Scripts.Projectile::_rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ____rigidbody_4;
	// System.Single Baracuda.Monitoring.Example.Scripts.Projectile::_damage
	float ____damage_5;
	// UnityEngine.Transform Baracuda.Monitoring.Example.Scripts.Projectile::_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____transform_6;

public:
	inline static int32_t get_offset_of__rigidbody_4() { return static_cast<int32_t>(offsetof(Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E, ____rigidbody_4)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get__rigidbody_4() const { return ____rigidbody_4; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of__rigidbody_4() { return &____rigidbody_4; }
	inline void set__rigidbody_4(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		____rigidbody_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidbody_4), (void*)value);
	}

	inline static int32_t get_offset_of__damage_5() { return static_cast<int32_t>(offsetof(Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E, ____damage_5)); }
	inline float get__damage_5() const { return ____damage_5; }
	inline float* get_address_of__damage_5() { return &____damage_5; }
	inline void set__damage_5(float value)
	{
		____damage_5 = value;
	}

	inline static int32_t get_offset_of__transform_6() { return static_cast<int32_t>(offsetof(Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E, ____transform_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__transform_6() const { return ____transform_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__transform_6() { return &____transform_6; }
	inline void set__transform_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____transform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transform_6), (void*)value);
	}
};

struct Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_StaticFields
{
public:
	// UnityEngine.WaitForSeconds Baracuda.Monitoring.Example.Scripts.Projectile::waitForSeconds
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___waitForSeconds_7;

public:
	inline static int32_t get_offset_of_waitForSeconds_7() { return static_cast<int32_t>(offsetof(Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_StaticFields, ___waitForSeconds_7)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_waitForSeconds_7() const { return ___waitForSeconds_7; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_waitForSeconds_7() { return &___waitForSeconds_7; }
	inline void set_waitForSeconds_7(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___waitForSeconds_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitForSeconds_7), (void*)value);
	}
};


// Baracuda.Monitoring.Example.Scripts.ProjectilePool
struct ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Baracuda.Monitoring.Example.Scripts.Projectile Baracuda.Monitoring.Example.Scripts.ProjectilePool::projectilePrefab
	Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * ___projectilePrefab_4;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.ProjectilePool::projectileCount
	int32_t ___projectileCount_5;
	// System.Collections.Generic.Queue`1<Baracuda.Monitoring.Example.Scripts.Projectile> Baracuda.Monitoring.Example.Scripts.ProjectilePool::_projectilePool
	Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 * ____projectilePool_6;

public:
	inline static int32_t get_offset_of_projectilePrefab_4() { return static_cast<int32_t>(offsetof(ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904, ___projectilePrefab_4)); }
	inline Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * get_projectilePrefab_4() const { return ___projectilePrefab_4; }
	inline Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E ** get_address_of_projectilePrefab_4() { return &___projectilePrefab_4; }
	inline void set_projectilePrefab_4(Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * value)
	{
		___projectilePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectilePrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_projectileCount_5() { return static_cast<int32_t>(offsetof(ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904, ___projectileCount_5)); }
	inline int32_t get_projectileCount_5() const { return ___projectileCount_5; }
	inline int32_t* get_address_of_projectileCount_5() { return &___projectileCount_5; }
	inline void set_projectileCount_5(int32_t value)
	{
		___projectileCount_5 = value;
	}

	inline static int32_t get_offset_of__projectilePool_6() { return static_cast<int32_t>(offsetof(ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904, ____projectilePool_6)); }
	inline Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 * get__projectilePool_6() const { return ____projectilePool_6; }
	inline Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 ** get_address_of__projectilePool_6() { return &____projectilePool_6; }
	inline void set__projectilePool_6(Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 * value)
	{
		____projectilePool_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____projectilePool_6), (void*)value);
	}
};


// Baracuda.Monitoring.MonitoredSingleton`1<Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor>
struct MonitoredSingleton_1_t574418D7711B3F90B019A47B3DAE3EDF55B82B2A  : public MonoSingleton_1_t33744B8DD05E15E46B1C79214588DC5871B4EB24
{
public:

public:
};


// Baracuda.Monitoring.Example.Scripts.AmmunitionPack
struct AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8  : public MonitoredBehaviour_t7FB19EB465CB2B947BD759A1D907E3BAA3CDB0F1
{
public:
	// System.Single Baracuda.Monitoring.Example.Scripts.AmmunitionPack::cooldown
	float ___cooldown_4;
	// UnityEngine.GameObject Baracuda.Monitoring.Example.Scripts.AmmunitionPack::ammunitionMesh
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ammunitionMesh_5;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.AmmunitionPack::_isActive
	bool ____isActive_6;
	// System.Single Baracuda.Monitoring.Example.Scripts.AmmunitionPack::_cooldown
	float ____cooldown_7;

public:
	inline static int32_t get_offset_of_cooldown_4() { return static_cast<int32_t>(offsetof(AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8, ___cooldown_4)); }
	inline float get_cooldown_4() const { return ___cooldown_4; }
	inline float* get_address_of_cooldown_4() { return &___cooldown_4; }
	inline void set_cooldown_4(float value)
	{
		___cooldown_4 = value;
	}

	inline static int32_t get_offset_of_ammunitionMesh_5() { return static_cast<int32_t>(offsetof(AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8, ___ammunitionMesh_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ammunitionMesh_5() const { return ___ammunitionMesh_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ammunitionMesh_5() { return &___ammunitionMesh_5; }
	inline void set_ammunitionMesh_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ammunitionMesh_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ammunitionMesh_5), (void*)value);
	}

	inline static int32_t get_offset_of__isActive_6() { return static_cast<int32_t>(offsetof(AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8, ____isActive_6)); }
	inline bool get__isActive_6() const { return ____isActive_6; }
	inline bool* get_address_of__isActive_6() { return &____isActive_6; }
	inline void set__isActive_6(bool value)
	{
		____isActive_6 = value;
	}

	inline static int32_t get_offset_of__cooldown_7() { return static_cast<int32_t>(offsetof(AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8, ____cooldown_7)); }
	inline float get__cooldown_7() const { return ____cooldown_7; }
	inline float* get_address_of__cooldown_7() { return &____cooldown_7; }
	inline void set__cooldown_7(float value)
	{
		____cooldown_7 = value;
	}
};


// Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput
struct LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6  : public MonitoredBehaviour_t7FB19EB465CB2B947BD759A1D907E3BAA3CDB0F1
{
public:
	// Baracuda.Monitoring.Example.Scripts.InputMode Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::inputMode
	int32_t ___inputMode_4;
	// UnityEngine.KeyCode Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::jumpKey
	int32_t ___jumpKey_5;
	// UnityEngine.KeyCode Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::primaryFireKey
	int32_t ___primaryFireKey_6;
	// UnityEngine.KeyCode Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::secondaryFireKey
	int32_t ___secondaryFireKey_7;
	// UnityEngine.KeyCode Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::dashKey
	int32_t ___dashKey_8;
	// UnityEngine.KeyCode Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::toggleFilterKey
	int32_t ___toggleFilterKey_9;
	// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<Vertical>k__BackingField
	float ___U3CVerticalU3Ek__BackingField_10;
	// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<Horizontal>k__BackingField
	float ___U3CHorizontalU3Ek__BackingField_11;
	// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<MouseX>k__BackingField
	float ___U3CMouseXU3Ek__BackingField_12;
	// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<MouseY>k__BackingField
	float ___U3CMouseYU3Ek__BackingField_13;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<JumpPressed>k__BackingField
	bool ___U3CJumpPressedU3Ek__BackingField_14;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<PrimaryFirePressed>k__BackingField
	bool ___U3CPrimaryFirePressedU3Ek__BackingField_15;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<SecondaryFirePressed>k__BackingField
	bool ___U3CSecondaryFirePressedU3Ek__BackingField_16;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::<DashPressed>k__BackingField
	bool ___U3CDashPressedU3Ek__BackingField_17;
	// System.Action`1<Baracuda.Monitoring.Example.Scripts.InputMode> Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::InputModeChanged
	Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * ___InputModeChanged_18;
	// Baracuda.Monitoring.Example.Scripts.InputMode Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::_currentInputMode
	int32_t ____currentInputMode_19;

public:
	inline static int32_t get_offset_of_inputMode_4() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___inputMode_4)); }
	inline int32_t get_inputMode_4() const { return ___inputMode_4; }
	inline int32_t* get_address_of_inputMode_4() { return &___inputMode_4; }
	inline void set_inputMode_4(int32_t value)
	{
		___inputMode_4 = value;
	}

	inline static int32_t get_offset_of_jumpKey_5() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___jumpKey_5)); }
	inline int32_t get_jumpKey_5() const { return ___jumpKey_5; }
	inline int32_t* get_address_of_jumpKey_5() { return &___jumpKey_5; }
	inline void set_jumpKey_5(int32_t value)
	{
		___jumpKey_5 = value;
	}

	inline static int32_t get_offset_of_primaryFireKey_6() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___primaryFireKey_6)); }
	inline int32_t get_primaryFireKey_6() const { return ___primaryFireKey_6; }
	inline int32_t* get_address_of_primaryFireKey_6() { return &___primaryFireKey_6; }
	inline void set_primaryFireKey_6(int32_t value)
	{
		___primaryFireKey_6 = value;
	}

	inline static int32_t get_offset_of_secondaryFireKey_7() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___secondaryFireKey_7)); }
	inline int32_t get_secondaryFireKey_7() const { return ___secondaryFireKey_7; }
	inline int32_t* get_address_of_secondaryFireKey_7() { return &___secondaryFireKey_7; }
	inline void set_secondaryFireKey_7(int32_t value)
	{
		___secondaryFireKey_7 = value;
	}

	inline static int32_t get_offset_of_dashKey_8() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___dashKey_8)); }
	inline int32_t get_dashKey_8() const { return ___dashKey_8; }
	inline int32_t* get_address_of_dashKey_8() { return &___dashKey_8; }
	inline void set_dashKey_8(int32_t value)
	{
		___dashKey_8 = value;
	}

	inline static int32_t get_offset_of_toggleFilterKey_9() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___toggleFilterKey_9)); }
	inline int32_t get_toggleFilterKey_9() const { return ___toggleFilterKey_9; }
	inline int32_t* get_address_of_toggleFilterKey_9() { return &___toggleFilterKey_9; }
	inline void set_toggleFilterKey_9(int32_t value)
	{
		___toggleFilterKey_9 = value;
	}

	inline static int32_t get_offset_of_U3CVerticalU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___U3CVerticalU3Ek__BackingField_10)); }
	inline float get_U3CVerticalU3Ek__BackingField_10() const { return ___U3CVerticalU3Ek__BackingField_10; }
	inline float* get_address_of_U3CVerticalU3Ek__BackingField_10() { return &___U3CVerticalU3Ek__BackingField_10; }
	inline void set_U3CVerticalU3Ek__BackingField_10(float value)
	{
		___U3CVerticalU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CHorizontalU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___U3CHorizontalU3Ek__BackingField_11)); }
	inline float get_U3CHorizontalU3Ek__BackingField_11() const { return ___U3CHorizontalU3Ek__BackingField_11; }
	inline float* get_address_of_U3CHorizontalU3Ek__BackingField_11() { return &___U3CHorizontalU3Ek__BackingField_11; }
	inline void set_U3CHorizontalU3Ek__BackingField_11(float value)
	{
		___U3CHorizontalU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CMouseXU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___U3CMouseXU3Ek__BackingField_12)); }
	inline float get_U3CMouseXU3Ek__BackingField_12() const { return ___U3CMouseXU3Ek__BackingField_12; }
	inline float* get_address_of_U3CMouseXU3Ek__BackingField_12() { return &___U3CMouseXU3Ek__BackingField_12; }
	inline void set_U3CMouseXU3Ek__BackingField_12(float value)
	{
		___U3CMouseXU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CMouseYU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___U3CMouseYU3Ek__BackingField_13)); }
	inline float get_U3CMouseYU3Ek__BackingField_13() const { return ___U3CMouseYU3Ek__BackingField_13; }
	inline float* get_address_of_U3CMouseYU3Ek__BackingField_13() { return &___U3CMouseYU3Ek__BackingField_13; }
	inline void set_U3CMouseYU3Ek__BackingField_13(float value)
	{
		___U3CMouseYU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CJumpPressedU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___U3CJumpPressedU3Ek__BackingField_14)); }
	inline bool get_U3CJumpPressedU3Ek__BackingField_14() const { return ___U3CJumpPressedU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CJumpPressedU3Ek__BackingField_14() { return &___U3CJumpPressedU3Ek__BackingField_14; }
	inline void set_U3CJumpPressedU3Ek__BackingField_14(bool value)
	{
		___U3CJumpPressedU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CPrimaryFirePressedU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___U3CPrimaryFirePressedU3Ek__BackingField_15)); }
	inline bool get_U3CPrimaryFirePressedU3Ek__BackingField_15() const { return ___U3CPrimaryFirePressedU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CPrimaryFirePressedU3Ek__BackingField_15() { return &___U3CPrimaryFirePressedU3Ek__BackingField_15; }
	inline void set_U3CPrimaryFirePressedU3Ek__BackingField_15(bool value)
	{
		___U3CPrimaryFirePressedU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CSecondaryFirePressedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___U3CSecondaryFirePressedU3Ek__BackingField_16)); }
	inline bool get_U3CSecondaryFirePressedU3Ek__BackingField_16() const { return ___U3CSecondaryFirePressedU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CSecondaryFirePressedU3Ek__BackingField_16() { return &___U3CSecondaryFirePressedU3Ek__BackingField_16; }
	inline void set_U3CSecondaryFirePressedU3Ek__BackingField_16(bool value)
	{
		___U3CSecondaryFirePressedU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CDashPressedU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___U3CDashPressedU3Ek__BackingField_17)); }
	inline bool get_U3CDashPressedU3Ek__BackingField_17() const { return ___U3CDashPressedU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CDashPressedU3Ek__BackingField_17() { return &___U3CDashPressedU3Ek__BackingField_17; }
	inline void set_U3CDashPressedU3Ek__BackingField_17(bool value)
	{
		___U3CDashPressedU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_InputModeChanged_18() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ___InputModeChanged_18)); }
	inline Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * get_InputModeChanged_18() const { return ___InputModeChanged_18; }
	inline Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD ** get_address_of_InputModeChanged_18() { return &___InputModeChanged_18; }
	inline void set_InputModeChanged_18(Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * value)
	{
		___InputModeChanged_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputModeChanged_18), (void*)value);
	}

	inline static int32_t get_offset_of__currentInputMode_19() { return static_cast<int32_t>(offsetof(LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6, ____currentInputMode_19)); }
	inline int32_t get__currentInputMode_19() const { return ____currentInputMode_19; }
	inline int32_t* get_address_of__currentInputMode_19() { return &____currentInputMode_19; }
	inline void set__currentInputMode_19(int32_t value)
	{
		____currentInputMode_19 = value;
	}
};


// Baracuda.Monitoring.Example.Scripts.PlayerMovement
struct PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64  : public MonitoredBehaviour_t7FB19EB465CB2B947BD759A1D907E3BAA3CDB0F1
{
public:
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::movementSpeed
	float ___movementSpeed_4;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::jumpForce
	float ___jumpForce_5;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::gravityForce
	float ___gravityForce_6;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::mouseSensitivity
	float ___mouseSensitivity_7;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::airMovementSharpness
	float ___airMovementSharpness_8;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::inputSharpness
	float ___inputSharpness_9;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerMovement::jumps
	int32_t ___jumps_10;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::dashForce
	float ___dashForce_11;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::dashDuration
	float ___dashDuration_12;
	// UnityEngine.AnimationCurve Baracuda.Monitoring.Example.Scripts.PlayerMovement::dashCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___dashCurve_13;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerMovement::dashAmount
	int32_t ___dashAmount_14;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::minTimeBetweenDash
	float ___minTimeBetweenDash_15;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::dashRechargeGrounded
	float ___dashRechargeGrounded_16;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::dashRechargeAirborne
	float ___dashRechargeAirborne_17;
	// UnityEngine.LayerMask Baracuda.Monitoring.Example.Scripts.PlayerMovement::groundMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___groundMask_18;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::groundCheckRadius
	float ___groundCheckRadius_19;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::killHeight
	float ___killHeight_20;
	// UnityEngine.CharacterController Baracuda.Monitoring.Example.Scripts.PlayerMovement::_characterController
	CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * ____characterController_21;
	// UnityEngine.Transform Baracuda.Monitoring.Example.Scripts.PlayerMovement::_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____transform_22;
	// UnityEngine.Camera Baracuda.Monitoring.Example.Scripts.PlayerMovement::_camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____camera_23;
	// Baracuda.Monitoring.Example.Scripts.IPlayerInput Baracuda.Monitoring.Example.Scripts.PlayerMovement::_input
	RuntimeObject* ____input_24;
	// UnityEngine.Vector3 Baracuda.Monitoring.Example.Scripts.PlayerMovement::_spawnPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____spawnPosition_25;
	// UnityEngine.Quaternion Baracuda.Monitoring.Example.Scripts.PlayerMovement::_spawnRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____spawnRotation_26;
	// UnityEngine.Vector2 Baracuda.Monitoring.Example.Scripts.PlayerMovement::_processedInputDir
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____processedInputDir_27;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::_rotationX
	float ____rotationX_28;
	// UnityEngine.Vector3 Baracuda.Monitoring.Example.Scripts.PlayerMovement::_velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____velocity_29;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerMovement::_isJumping
	bool ____isJumping_30;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerMovement::_isFalling
	bool ____isFalling_31;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::_lastJumpTime
	float ____lastJumpTime_32;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerMovement::_jumpsLeft
	int32_t ____jumpsLeft_33;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::_dashEnergy
	float ____dashEnergy_34;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerMovement::_isDashing
	bool ____isDashing_35;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::_lastDashTime
	float ____lastDashTime_36;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::_dashStartTime
	float ____dashStartTime_37;
	// Baracuda.Monitoring.Example.Scripts.GroundStatus Baracuda.Monitoring.Example.Scripts.PlayerMovement::_lastGroundCheck
	int32_t ____lastGroundCheck_38;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerMovement::_lastGroundedTime
	float ____lastGroundedTime_40;
	// UnityEngine.Collider[] Baracuda.Monitoring.Example.Scripts.PlayerMovement::_raycastHits
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ____raycastHits_41;

public:
	inline static int32_t get_offset_of_movementSpeed_4() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___movementSpeed_4)); }
	inline float get_movementSpeed_4() const { return ___movementSpeed_4; }
	inline float* get_address_of_movementSpeed_4() { return &___movementSpeed_4; }
	inline void set_movementSpeed_4(float value)
	{
		___movementSpeed_4 = value;
	}

	inline static int32_t get_offset_of_jumpForce_5() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___jumpForce_5)); }
	inline float get_jumpForce_5() const { return ___jumpForce_5; }
	inline float* get_address_of_jumpForce_5() { return &___jumpForce_5; }
	inline void set_jumpForce_5(float value)
	{
		___jumpForce_5 = value;
	}

	inline static int32_t get_offset_of_gravityForce_6() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___gravityForce_6)); }
	inline float get_gravityForce_6() const { return ___gravityForce_6; }
	inline float* get_address_of_gravityForce_6() { return &___gravityForce_6; }
	inline void set_gravityForce_6(float value)
	{
		___gravityForce_6 = value;
	}

	inline static int32_t get_offset_of_mouseSensitivity_7() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___mouseSensitivity_7)); }
	inline float get_mouseSensitivity_7() const { return ___mouseSensitivity_7; }
	inline float* get_address_of_mouseSensitivity_7() { return &___mouseSensitivity_7; }
	inline void set_mouseSensitivity_7(float value)
	{
		___mouseSensitivity_7 = value;
	}

	inline static int32_t get_offset_of_airMovementSharpness_8() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___airMovementSharpness_8)); }
	inline float get_airMovementSharpness_8() const { return ___airMovementSharpness_8; }
	inline float* get_address_of_airMovementSharpness_8() { return &___airMovementSharpness_8; }
	inline void set_airMovementSharpness_8(float value)
	{
		___airMovementSharpness_8 = value;
	}

	inline static int32_t get_offset_of_inputSharpness_9() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___inputSharpness_9)); }
	inline float get_inputSharpness_9() const { return ___inputSharpness_9; }
	inline float* get_address_of_inputSharpness_9() { return &___inputSharpness_9; }
	inline void set_inputSharpness_9(float value)
	{
		___inputSharpness_9 = value;
	}

	inline static int32_t get_offset_of_jumps_10() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___jumps_10)); }
	inline int32_t get_jumps_10() const { return ___jumps_10; }
	inline int32_t* get_address_of_jumps_10() { return &___jumps_10; }
	inline void set_jumps_10(int32_t value)
	{
		___jumps_10 = value;
	}

	inline static int32_t get_offset_of_dashForce_11() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___dashForce_11)); }
	inline float get_dashForce_11() const { return ___dashForce_11; }
	inline float* get_address_of_dashForce_11() { return &___dashForce_11; }
	inline void set_dashForce_11(float value)
	{
		___dashForce_11 = value;
	}

	inline static int32_t get_offset_of_dashDuration_12() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___dashDuration_12)); }
	inline float get_dashDuration_12() const { return ___dashDuration_12; }
	inline float* get_address_of_dashDuration_12() { return &___dashDuration_12; }
	inline void set_dashDuration_12(float value)
	{
		___dashDuration_12 = value;
	}

	inline static int32_t get_offset_of_dashCurve_13() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___dashCurve_13)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_dashCurve_13() const { return ___dashCurve_13; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_dashCurve_13() { return &___dashCurve_13; }
	inline void set_dashCurve_13(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___dashCurve_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dashCurve_13), (void*)value);
	}

	inline static int32_t get_offset_of_dashAmount_14() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___dashAmount_14)); }
	inline int32_t get_dashAmount_14() const { return ___dashAmount_14; }
	inline int32_t* get_address_of_dashAmount_14() { return &___dashAmount_14; }
	inline void set_dashAmount_14(int32_t value)
	{
		___dashAmount_14 = value;
	}

	inline static int32_t get_offset_of_minTimeBetweenDash_15() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___minTimeBetweenDash_15)); }
	inline float get_minTimeBetweenDash_15() const { return ___minTimeBetweenDash_15; }
	inline float* get_address_of_minTimeBetweenDash_15() { return &___minTimeBetweenDash_15; }
	inline void set_minTimeBetweenDash_15(float value)
	{
		___minTimeBetweenDash_15 = value;
	}

	inline static int32_t get_offset_of_dashRechargeGrounded_16() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___dashRechargeGrounded_16)); }
	inline float get_dashRechargeGrounded_16() const { return ___dashRechargeGrounded_16; }
	inline float* get_address_of_dashRechargeGrounded_16() { return &___dashRechargeGrounded_16; }
	inline void set_dashRechargeGrounded_16(float value)
	{
		___dashRechargeGrounded_16 = value;
	}

	inline static int32_t get_offset_of_dashRechargeAirborne_17() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___dashRechargeAirborne_17)); }
	inline float get_dashRechargeAirborne_17() const { return ___dashRechargeAirborne_17; }
	inline float* get_address_of_dashRechargeAirborne_17() { return &___dashRechargeAirborne_17; }
	inline void set_dashRechargeAirborne_17(float value)
	{
		___dashRechargeAirborne_17 = value;
	}

	inline static int32_t get_offset_of_groundMask_18() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___groundMask_18)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_groundMask_18() const { return ___groundMask_18; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_groundMask_18() { return &___groundMask_18; }
	inline void set_groundMask_18(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___groundMask_18 = value;
	}

	inline static int32_t get_offset_of_groundCheckRadius_19() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___groundCheckRadius_19)); }
	inline float get_groundCheckRadius_19() const { return ___groundCheckRadius_19; }
	inline float* get_address_of_groundCheckRadius_19() { return &___groundCheckRadius_19; }
	inline void set_groundCheckRadius_19(float value)
	{
		___groundCheckRadius_19 = value;
	}

	inline static int32_t get_offset_of_killHeight_20() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ___killHeight_20)); }
	inline float get_killHeight_20() const { return ___killHeight_20; }
	inline float* get_address_of_killHeight_20() { return &___killHeight_20; }
	inline void set_killHeight_20(float value)
	{
		___killHeight_20 = value;
	}

	inline static int32_t get_offset_of__characterController_21() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____characterController_21)); }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * get__characterController_21() const { return ____characterController_21; }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E ** get_address_of__characterController_21() { return &____characterController_21; }
	inline void set__characterController_21(CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * value)
	{
		____characterController_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____characterController_21), (void*)value);
	}

	inline static int32_t get_offset_of__transform_22() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____transform_22)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__transform_22() const { return ____transform_22; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__transform_22() { return &____transform_22; }
	inline void set__transform_22(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____transform_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transform_22), (void*)value);
	}

	inline static int32_t get_offset_of__camera_23() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____camera_23)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__camera_23() const { return ____camera_23; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__camera_23() { return &____camera_23; }
	inline void set__camera_23(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____camera_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____camera_23), (void*)value);
	}

	inline static int32_t get_offset_of__input_24() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____input_24)); }
	inline RuntimeObject* get__input_24() const { return ____input_24; }
	inline RuntimeObject** get_address_of__input_24() { return &____input_24; }
	inline void set__input_24(RuntimeObject* value)
	{
		____input_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_24), (void*)value);
	}

	inline static int32_t get_offset_of__spawnPosition_25() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____spawnPosition_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__spawnPosition_25() const { return ____spawnPosition_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__spawnPosition_25() { return &____spawnPosition_25; }
	inline void set__spawnPosition_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____spawnPosition_25 = value;
	}

	inline static int32_t get_offset_of__spawnRotation_26() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____spawnRotation_26)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__spawnRotation_26() const { return ____spawnRotation_26; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__spawnRotation_26() { return &____spawnRotation_26; }
	inline void set__spawnRotation_26(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____spawnRotation_26 = value;
	}

	inline static int32_t get_offset_of__processedInputDir_27() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____processedInputDir_27)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__processedInputDir_27() const { return ____processedInputDir_27; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__processedInputDir_27() { return &____processedInputDir_27; }
	inline void set__processedInputDir_27(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____processedInputDir_27 = value;
	}

	inline static int32_t get_offset_of__rotationX_28() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____rotationX_28)); }
	inline float get__rotationX_28() const { return ____rotationX_28; }
	inline float* get_address_of__rotationX_28() { return &____rotationX_28; }
	inline void set__rotationX_28(float value)
	{
		____rotationX_28 = value;
	}

	inline static int32_t get_offset_of__velocity_29() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____velocity_29)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__velocity_29() const { return ____velocity_29; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__velocity_29() { return &____velocity_29; }
	inline void set__velocity_29(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____velocity_29 = value;
	}

	inline static int32_t get_offset_of__isJumping_30() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____isJumping_30)); }
	inline bool get__isJumping_30() const { return ____isJumping_30; }
	inline bool* get_address_of__isJumping_30() { return &____isJumping_30; }
	inline void set__isJumping_30(bool value)
	{
		____isJumping_30 = value;
	}

	inline static int32_t get_offset_of__isFalling_31() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____isFalling_31)); }
	inline bool get__isFalling_31() const { return ____isFalling_31; }
	inline bool* get_address_of__isFalling_31() { return &____isFalling_31; }
	inline void set__isFalling_31(bool value)
	{
		____isFalling_31 = value;
	}

	inline static int32_t get_offset_of__lastJumpTime_32() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____lastJumpTime_32)); }
	inline float get__lastJumpTime_32() const { return ____lastJumpTime_32; }
	inline float* get_address_of__lastJumpTime_32() { return &____lastJumpTime_32; }
	inline void set__lastJumpTime_32(float value)
	{
		____lastJumpTime_32 = value;
	}

	inline static int32_t get_offset_of__jumpsLeft_33() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____jumpsLeft_33)); }
	inline int32_t get__jumpsLeft_33() const { return ____jumpsLeft_33; }
	inline int32_t* get_address_of__jumpsLeft_33() { return &____jumpsLeft_33; }
	inline void set__jumpsLeft_33(int32_t value)
	{
		____jumpsLeft_33 = value;
	}

	inline static int32_t get_offset_of__dashEnergy_34() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____dashEnergy_34)); }
	inline float get__dashEnergy_34() const { return ____dashEnergy_34; }
	inline float* get_address_of__dashEnergy_34() { return &____dashEnergy_34; }
	inline void set__dashEnergy_34(float value)
	{
		____dashEnergy_34 = value;
	}

	inline static int32_t get_offset_of__isDashing_35() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____isDashing_35)); }
	inline bool get__isDashing_35() const { return ____isDashing_35; }
	inline bool* get_address_of__isDashing_35() { return &____isDashing_35; }
	inline void set__isDashing_35(bool value)
	{
		____isDashing_35 = value;
	}

	inline static int32_t get_offset_of__lastDashTime_36() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____lastDashTime_36)); }
	inline float get__lastDashTime_36() const { return ____lastDashTime_36; }
	inline float* get_address_of__lastDashTime_36() { return &____lastDashTime_36; }
	inline void set__lastDashTime_36(float value)
	{
		____lastDashTime_36 = value;
	}

	inline static int32_t get_offset_of__dashStartTime_37() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____dashStartTime_37)); }
	inline float get__dashStartTime_37() const { return ____dashStartTime_37; }
	inline float* get_address_of__dashStartTime_37() { return &____dashStartTime_37; }
	inline void set__dashStartTime_37(float value)
	{
		____dashStartTime_37 = value;
	}

	inline static int32_t get_offset_of__lastGroundCheck_38() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____lastGroundCheck_38)); }
	inline int32_t get__lastGroundCheck_38() const { return ____lastGroundCheck_38; }
	inline int32_t* get_address_of__lastGroundCheck_38() { return &____lastGroundCheck_38; }
	inline void set__lastGroundCheck_38(int32_t value)
	{
		____lastGroundCheck_38 = value;
	}

	inline static int32_t get_offset_of__lastGroundedTime_40() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____lastGroundedTime_40)); }
	inline float get__lastGroundedTime_40() const { return ____lastGroundedTime_40; }
	inline float* get_address_of__lastGroundedTime_40() { return &____lastGroundedTime_40; }
	inline void set__lastGroundedTime_40(float value)
	{
		____lastGroundedTime_40 = value;
	}

	inline static int32_t get_offset_of__raycastHits_41() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64, ____raycastHits_41)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get__raycastHits_41() const { return ____raycastHits_41; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of__raycastHits_41() { return &____raycastHits_41; }
	inline void set__raycastHits_41(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		____raycastHits_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____raycastHits_41), (void*)value);
	}
};

struct PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64_StaticFields
{
public:
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerMovement::hitCount
	int32_t ___hitCount_39;

public:
	inline static int32_t get_offset_of_hitCount_39() { return static_cast<int32_t>(offsetof(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64_StaticFields, ___hitCount_39)); }
	inline int32_t get_hitCount_39() const { return ___hitCount_39; }
	inline int32_t* get_address_of_hitCount_39() { return &___hitCount_39; }
	inline void set_hitCount_39(int32_t value)
	{
		___hitCount_39 = value;
	}
};


// Baracuda.Monitoring.Example.Scripts.PlayerWeapon
struct PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61  : public MonitoredBehaviour_t7FB19EB465CB2B947BD759A1D907E3BAA3CDB0F1
{
public:
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::damage
	float ___damage_4;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerWeapon::fullAutomatic
	bool ___fullAutomatic_5;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::shotsPerSecond
	float ___shotsPerSecond_6;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerWeapon::bulletsPerShot
	int32_t ___bulletsPerShot_7;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::bulletSpread
	float ___bulletSpread_8;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::bulletForce
	float ___bulletForce_9;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerWeapon::ammunition
	int32_t ___ammunition_10;
	// UnityEngine.LayerMask Baracuda.Monitoring.Example.Scripts.PlayerWeapon::layerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerMask_11;
	// UnityEngine.Transform Baracuda.Monitoring.Example.Scripts.PlayerWeapon::projectileSpawnPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___projectileSpawnPosition_12;
	// Baracuda.Monitoring.Example.Scripts.ProjectilePool Baracuda.Monitoring.Example.Scripts.PlayerWeapon::projectilePool
	ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904 * ___projectilePool_13;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::defaultFOV
	float ___defaultFOV_14;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::zoomFOV
	float ___zoomFOV_15;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::fovSharpness
	float ___fovSharpness_16;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.PlayerWeapon::_currentAmmunition
	int32_t ____currentAmmunition_17;
	// System.Action`1<System.Int32> Baracuda.Monitoring.Example.Scripts.PlayerWeapon::OnAmmoChanged
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___OnAmmoChanged_18;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::_lastFireTime
	float ____lastFireTime_19;
	// System.Single Baracuda.Monitoring.Example.Scripts.PlayerWeapon::_targetFOV
	float ____targetFOV_20;
	// Baracuda.Monitoring.Example.Scripts.IPlayerInput Baracuda.Monitoring.Example.Scripts.PlayerWeapon::_input
	RuntimeObject* ____input_21;
	// UnityEngine.Camera Baracuda.Monitoring.Example.Scripts.PlayerWeapon::_camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____camera_22;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerWeapon::_canFireSemiAutomatic
	bool ____canFireSemiAutomatic_23;

public:
	inline static int32_t get_offset_of_damage_4() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___damage_4)); }
	inline float get_damage_4() const { return ___damage_4; }
	inline float* get_address_of_damage_4() { return &___damage_4; }
	inline void set_damage_4(float value)
	{
		___damage_4 = value;
	}

	inline static int32_t get_offset_of_fullAutomatic_5() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___fullAutomatic_5)); }
	inline bool get_fullAutomatic_5() const { return ___fullAutomatic_5; }
	inline bool* get_address_of_fullAutomatic_5() { return &___fullAutomatic_5; }
	inline void set_fullAutomatic_5(bool value)
	{
		___fullAutomatic_5 = value;
	}

	inline static int32_t get_offset_of_shotsPerSecond_6() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___shotsPerSecond_6)); }
	inline float get_shotsPerSecond_6() const { return ___shotsPerSecond_6; }
	inline float* get_address_of_shotsPerSecond_6() { return &___shotsPerSecond_6; }
	inline void set_shotsPerSecond_6(float value)
	{
		___shotsPerSecond_6 = value;
	}

	inline static int32_t get_offset_of_bulletsPerShot_7() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___bulletsPerShot_7)); }
	inline int32_t get_bulletsPerShot_7() const { return ___bulletsPerShot_7; }
	inline int32_t* get_address_of_bulletsPerShot_7() { return &___bulletsPerShot_7; }
	inline void set_bulletsPerShot_7(int32_t value)
	{
		___bulletsPerShot_7 = value;
	}

	inline static int32_t get_offset_of_bulletSpread_8() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___bulletSpread_8)); }
	inline float get_bulletSpread_8() const { return ___bulletSpread_8; }
	inline float* get_address_of_bulletSpread_8() { return &___bulletSpread_8; }
	inline void set_bulletSpread_8(float value)
	{
		___bulletSpread_8 = value;
	}

	inline static int32_t get_offset_of_bulletForce_9() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___bulletForce_9)); }
	inline float get_bulletForce_9() const { return ___bulletForce_9; }
	inline float* get_address_of_bulletForce_9() { return &___bulletForce_9; }
	inline void set_bulletForce_9(float value)
	{
		___bulletForce_9 = value;
	}

	inline static int32_t get_offset_of_ammunition_10() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___ammunition_10)); }
	inline int32_t get_ammunition_10() const { return ___ammunition_10; }
	inline int32_t* get_address_of_ammunition_10() { return &___ammunition_10; }
	inline void set_ammunition_10(int32_t value)
	{
		___ammunition_10 = value;
	}

	inline static int32_t get_offset_of_layerMask_11() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___layerMask_11)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_layerMask_11() const { return ___layerMask_11; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_layerMask_11() { return &___layerMask_11; }
	inline void set_layerMask_11(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___layerMask_11 = value;
	}

	inline static int32_t get_offset_of_projectileSpawnPosition_12() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___projectileSpawnPosition_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_projectileSpawnPosition_12() const { return ___projectileSpawnPosition_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_projectileSpawnPosition_12() { return &___projectileSpawnPosition_12; }
	inline void set_projectileSpawnPosition_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___projectileSpawnPosition_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectileSpawnPosition_12), (void*)value);
	}

	inline static int32_t get_offset_of_projectilePool_13() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___projectilePool_13)); }
	inline ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904 * get_projectilePool_13() const { return ___projectilePool_13; }
	inline ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904 ** get_address_of_projectilePool_13() { return &___projectilePool_13; }
	inline void set_projectilePool_13(ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904 * value)
	{
		___projectilePool_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectilePool_13), (void*)value);
	}

	inline static int32_t get_offset_of_defaultFOV_14() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___defaultFOV_14)); }
	inline float get_defaultFOV_14() const { return ___defaultFOV_14; }
	inline float* get_address_of_defaultFOV_14() { return &___defaultFOV_14; }
	inline void set_defaultFOV_14(float value)
	{
		___defaultFOV_14 = value;
	}

	inline static int32_t get_offset_of_zoomFOV_15() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___zoomFOV_15)); }
	inline float get_zoomFOV_15() const { return ___zoomFOV_15; }
	inline float* get_address_of_zoomFOV_15() { return &___zoomFOV_15; }
	inline void set_zoomFOV_15(float value)
	{
		___zoomFOV_15 = value;
	}

	inline static int32_t get_offset_of_fovSharpness_16() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___fovSharpness_16)); }
	inline float get_fovSharpness_16() const { return ___fovSharpness_16; }
	inline float* get_address_of_fovSharpness_16() { return &___fovSharpness_16; }
	inline void set_fovSharpness_16(float value)
	{
		___fovSharpness_16 = value;
	}

	inline static int32_t get_offset_of__currentAmmunition_17() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ____currentAmmunition_17)); }
	inline int32_t get__currentAmmunition_17() const { return ____currentAmmunition_17; }
	inline int32_t* get_address_of__currentAmmunition_17() { return &____currentAmmunition_17; }
	inline void set__currentAmmunition_17(int32_t value)
	{
		____currentAmmunition_17 = value;
	}

	inline static int32_t get_offset_of_OnAmmoChanged_18() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ___OnAmmoChanged_18)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_OnAmmoChanged_18() const { return ___OnAmmoChanged_18; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_OnAmmoChanged_18() { return &___OnAmmoChanged_18; }
	inline void set_OnAmmoChanged_18(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___OnAmmoChanged_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAmmoChanged_18), (void*)value);
	}

	inline static int32_t get_offset_of__lastFireTime_19() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ____lastFireTime_19)); }
	inline float get__lastFireTime_19() const { return ____lastFireTime_19; }
	inline float* get_address_of__lastFireTime_19() { return &____lastFireTime_19; }
	inline void set__lastFireTime_19(float value)
	{
		____lastFireTime_19 = value;
	}

	inline static int32_t get_offset_of__targetFOV_20() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ____targetFOV_20)); }
	inline float get__targetFOV_20() const { return ____targetFOV_20; }
	inline float* get_address_of__targetFOV_20() { return &____targetFOV_20; }
	inline void set__targetFOV_20(float value)
	{
		____targetFOV_20 = value;
	}

	inline static int32_t get_offset_of__input_21() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ____input_21)); }
	inline RuntimeObject* get__input_21() const { return ____input_21; }
	inline RuntimeObject** get_address_of__input_21() { return &____input_21; }
	inline void set__input_21(RuntimeObject* value)
	{
		____input_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_21), (void*)value);
	}

	inline static int32_t get_offset_of__camera_22() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ____camera_22)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__camera_22() const { return ____camera_22; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__camera_22() { return &____camera_22; }
	inline void set__camera_22(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____camera_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____camera_22), (void*)value);
	}

	inline static int32_t get_offset_of__canFireSemiAutomatic_23() { return static_cast<int32_t>(offsetof(PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61, ____canFireSemiAutomatic_23)); }
	inline bool get__canFireSemiAutomatic_23() const { return ____canFireSemiAutomatic_23; }
	inline bool* get_address_of__canFireSemiAutomatic_23() { return &____canFireSemiAutomatic_23; }
	inline void set__canFireSemiAutomatic_23(bool value)
	{
		____canFireSemiAutomatic_23 = value;
	}
};


// Baracuda.Monitoring.Example.Scripts.ShootingTarget
struct ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23  : public MonitoredBehaviour_t7FB19EB465CB2B947BD759A1D907E3BAA3CDB0F1
{
public:
	// System.Single Baracuda.Monitoring.Example.Scripts.ShootingTarget::health
	float ___health_4;
	// System.Single Baracuda.Monitoring.Example.Scripts.ShootingTarget::recoverCooldownMin
	float ___recoverCooldownMin_5;
	// System.Single Baracuda.Monitoring.Example.Scripts.ShootingTarget::recoverCooldownMax
	float ___recoverCooldownMax_6;
	// System.Boolean Baracuda.Monitoring.Example.Scripts.ShootingTarget::_isAlive
	bool ____isAlive_7;
	// System.Single Baracuda.Monitoring.Example.Scripts.ShootingTarget::_currentHealth
	float ____currentHealth_8;
	// System.Single Baracuda.Monitoring.Example.Scripts.ShootingTarget::_cooldown
	float ____cooldown_9;
	// UnityEngine.Animator Baracuda.Monitoring.Example.Scripts.ShootingTarget::_animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ____animator_10;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23, ___health_4)); }
	inline float get_health_4() const { return ___health_4; }
	inline float* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(float value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_recoverCooldownMin_5() { return static_cast<int32_t>(offsetof(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23, ___recoverCooldownMin_5)); }
	inline float get_recoverCooldownMin_5() const { return ___recoverCooldownMin_5; }
	inline float* get_address_of_recoverCooldownMin_5() { return &___recoverCooldownMin_5; }
	inline void set_recoverCooldownMin_5(float value)
	{
		___recoverCooldownMin_5 = value;
	}

	inline static int32_t get_offset_of_recoverCooldownMax_6() { return static_cast<int32_t>(offsetof(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23, ___recoverCooldownMax_6)); }
	inline float get_recoverCooldownMax_6() const { return ___recoverCooldownMax_6; }
	inline float* get_address_of_recoverCooldownMax_6() { return &___recoverCooldownMax_6; }
	inline void set_recoverCooldownMax_6(float value)
	{
		___recoverCooldownMax_6 = value;
	}

	inline static int32_t get_offset_of__isAlive_7() { return static_cast<int32_t>(offsetof(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23, ____isAlive_7)); }
	inline bool get__isAlive_7() const { return ____isAlive_7; }
	inline bool* get_address_of__isAlive_7() { return &____isAlive_7; }
	inline void set__isAlive_7(bool value)
	{
		____isAlive_7 = value;
	}

	inline static int32_t get_offset_of__currentHealth_8() { return static_cast<int32_t>(offsetof(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23, ____currentHealth_8)); }
	inline float get__currentHealth_8() const { return ____currentHealth_8; }
	inline float* get_address_of__currentHealth_8() { return &____currentHealth_8; }
	inline void set__currentHealth_8(float value)
	{
		____currentHealth_8 = value;
	}

	inline static int32_t get_offset_of__cooldown_9() { return static_cast<int32_t>(offsetof(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23, ____cooldown_9)); }
	inline float get__cooldown_9() const { return ____cooldown_9; }
	inline float* get_address_of__cooldown_9() { return &____cooldown_9; }
	inline void set__cooldown_9(float value)
	{
		____cooldown_9 = value;
	}

	inline static int32_t get_offset_of__animator_10() { return static_cast<int32_t>(offsetof(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23, ____animator_10)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get__animator_10() const { return ____animator_10; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of__animator_10() { return &____animator_10; }
	inline void set__animator_10(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		____animator_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animator_10), (void*)value);
	}
};

struct ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_StaticFields
{
public:
	// System.Int32 Baracuda.Monitoring.Example.Scripts.ShootingTarget::knockdown
	int32_t ___knockdown_11;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.ShootingTarget::recover
	int32_t ___recover_12;

public:
	inline static int32_t get_offset_of_knockdown_11() { return static_cast<int32_t>(offsetof(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_StaticFields, ___knockdown_11)); }
	inline int32_t get_knockdown_11() const { return ___knockdown_11; }
	inline int32_t* get_address_of_knockdown_11() { return &___knockdown_11; }
	inline void set_knockdown_11(int32_t value)
	{
		___knockdown_11 = value;
	}

	inline static int32_t get_offset_of_recover_12() { return static_cast<int32_t>(offsetof(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_StaticFields, ___recover_12)); }
	inline int32_t get_recover_12() const { return ___recover_12; }
	inline int32_t* get_address_of_recover_12() { return &___recover_12; }
	inline void set_recover_12(int32_t value)
	{
		___recover_12 = value;
	}
};


// Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor
struct FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07  : public MonitoredSingleton_1_t574418D7711B3F90B019A47B3DAE3EDF55B82B2A
{
public:
	// System.Single Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::_fps
	float ____fps_18;

public:
	inline static int32_t get_offset_of__fps_18() { return static_cast<int32_t>(offsetof(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07, ____fps_18)); }
	inline float get__fps_18() const { return ____fps_18; }
	inline float* get_address_of__fps_18() { return &____fps_18; }
	inline void set__fps_18(float value)
	{
		____fps_18 = value;
	}
};

struct FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields
{
public:
	// System.Single Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::timer
	float ___timer_13;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::lastFPS
	int32_t ___lastFPS_14;
	// System.Single Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::lastMeasuredFps
	float ___lastMeasuredFps_15;
	// System.Int32 Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::frameCount
	int32_t ___frameCount_16;
	// System.Text.StringBuilder Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::stringBuilder
	StringBuilder_t * ___stringBuilder_17;
	// System.Action`1<System.Single> Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::FPSUpdated
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___FPSUpdated_19;

public:
	inline static int32_t get_offset_of_timer_13() { return static_cast<int32_t>(offsetof(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields, ___timer_13)); }
	inline float get_timer_13() const { return ___timer_13; }
	inline float* get_address_of_timer_13() { return &___timer_13; }
	inline void set_timer_13(float value)
	{
		___timer_13 = value;
	}

	inline static int32_t get_offset_of_lastFPS_14() { return static_cast<int32_t>(offsetof(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields, ___lastFPS_14)); }
	inline int32_t get_lastFPS_14() const { return ___lastFPS_14; }
	inline int32_t* get_address_of_lastFPS_14() { return &___lastFPS_14; }
	inline void set_lastFPS_14(int32_t value)
	{
		___lastFPS_14 = value;
	}

	inline static int32_t get_offset_of_lastMeasuredFps_15() { return static_cast<int32_t>(offsetof(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields, ___lastMeasuredFps_15)); }
	inline float get_lastMeasuredFps_15() const { return ___lastMeasuredFps_15; }
	inline float* get_address_of_lastMeasuredFps_15() { return &___lastMeasuredFps_15; }
	inline void set_lastMeasuredFps_15(float value)
	{
		___lastMeasuredFps_15 = value;
	}

	inline static int32_t get_offset_of_frameCount_16() { return static_cast<int32_t>(offsetof(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields, ___frameCount_16)); }
	inline int32_t get_frameCount_16() const { return ___frameCount_16; }
	inline int32_t* get_address_of_frameCount_16() { return &___frameCount_16; }
	inline void set_frameCount_16(int32_t value)
	{
		___frameCount_16 = value;
	}

	inline static int32_t get_offset_of_stringBuilder_17() { return static_cast<int32_t>(offsetof(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields, ___stringBuilder_17)); }
	inline StringBuilder_t * get_stringBuilder_17() const { return ___stringBuilder_17; }
	inline StringBuilder_t ** get_address_of_stringBuilder_17() { return &___stringBuilder_17; }
	inline void set_stringBuilder_17(StringBuilder_t * value)
	{
		___stringBuilder_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringBuilder_17), (void*)value);
	}

	inline static int32_t get_offset_of_FPSUpdated_19() { return static_cast<int32_t>(offsetof(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields, ___FPSUpdated_19)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_FPSUpdated_19() const { return ___FPSUpdated_19; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_FPSUpdated_19() { return &___FPSUpdated_19; }
	inline void set_FPSUpdated_19(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___FPSUpdated_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FPSUpdated_19), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * m_Items[1];

public:
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_gshared (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * __this, float ___obj0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.MonitoredSingleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoredSingleton_1__ctor_m983DF6E5140353A5372C43CA84E993EA883080E4_gshared (MonitoredSingleton_1_t80ACE05A8D6D8A4B193B24677EE2AE3B2DFB582C * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, int32_t ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueObject_1__ctor_m27B95BD763C34EE90C81FD685FE77EE2D16DAD04_gshared (ValueObject_1_tE42E22C2F4482457F78F41CE9A2BE8B32EC82642 * __this, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1<System.Int32>::set_Value(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueObject_1_set_Value_m47266E8B40EFD980D319546E9D7EE5E57895EE78_gshared_inline (ValueObject_1_tE42E22C2F4482457F78F41CE9A2BE8B32EC82642 * __this, int32_t ___value0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Component::TryGetComponent<Baracuda.Monitoring.Example.Scripts.PlayerWeapon>(!!0&)
inline bool Component_TryGetComponent_TisPlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61_mF5282FA6715E746A08D7D6D777A66C007C482FF7 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 **, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared)(__this, ___component0, method);
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::ReplenishAmmunition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_ReplenishAmmunition_m1BFF7B103658893DB57815EF9214F5509CCDB636 (PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.AmmunitionPack::CooldownCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AmmunitionPack_CooldownCoroutine_m7A5938A42283C318A5041F32DA4694E61480ACC7 (AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__5__ctor_m20BA4DF1F73B6D9FF489ED13CD125218949D51E4 (U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.MonitoredBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoredBehaviour__ctor_mB73166E89617EBCCC675A64019BA2DC2853799D3 (MonitoredBehaviour_t7FB19EB465CB2B947BD759A1D907E3BAA3CDB0F1 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4 (const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::Invoke(!0)
inline void Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *, float, const RuntimeMethod*))Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.Application::get_targetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_targetFrameRate_m2BB711703471EC6C1E1B11A714B9005BB92C1E71 (const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Int32 UnityEngine.QualitySettings::get_vSyncCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_vSyncCount_m00DC32AF7052D3BFF7EB5C384D5EA45BE0B98520 (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.MonitoredSingleton`1<Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor>::.ctor()
inline void MonitoredSingleton_1__ctor_mFF5ED5BAFE29EFF0F4DBB268517C7E5D10CEBCE7 (MonitoredSingleton_1_t574418D7711B3F90B019A47B3DAE3EDF55B82B2A * __this, const RuntimeMethod* method)
{
	((  void (*) (MonitoredSingleton_1_t574418D7711B3F90B019A47B3DAE3EDF55B82B2A *, const RuntimeMethod*))MonitoredSingleton_1__ctor_m983DF6E5140353A5372C43CA84E993EA883080E4_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Baracuda.Monitoring.Example.Scripts.InputMode>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD79C9E890CF9FBA5249755229C3465BEF9E06015 (Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::add_InputModeChanged(System.Action`1<Baracuda.Monitoring.Example.Scripts.InputMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_add_InputModeChanged_m76DC0E4EFCD10F489E511E63F5F2B7D54B547EE4 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6 (String_t* ___value0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.API.MonitoringUI::ResetFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringUI_ResetFilter_m9E2849B24B4B9B974D06CC07C9A2503ED4BCF371 (const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.API.MonitoringUI::Filter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringUI_Filter_mD93E7B260D0B8682DDE827D2EB433B94EBC3F669 (String_t* ___filter0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample/IntValueObject::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntValueObject__ctor_m75C31654E5D218171CBBC4357E4F5C491F1B7593 (IntValueObject_t046547CD0EB5D55C4EC9DE796F9194D2F71D8776 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<Baracuda.Monitoring.Example.Scripts.ShootingTarget>()
inline ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * Component_GetComponentInParent_TisShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_m9C9FFE99ECE8711B2E1AD57AE39F8DA9DC56B6C9 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingTarget_TakeDamage_mC989782C3A5973D83004E31B39C249CB38501D2E (ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * __this, float ___damage0, const RuntimeMethod* method);
// System.Void System.Action`1<Baracuda.Monitoring.Example.Scripts.InputMode>::Invoke(!0)
inline void Action_1_Invoke_mF53BF2C8EE68F8DC4E5C530B55D3D7F9A6DA3D83 (Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD *, int32_t, const RuntimeMethod*))Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_Vertical(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_Vertical_mCD9A584E73C02D8B6F17A6245B74074BFAE22BAC_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_Horizontal(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_Horizontal_m086CDB96DAC64A7FC27A916AB53C4002C417D126_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_MouseX(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_MouseX_mFBF618C7B0C860A45662DB8F54217C989845C04C_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_MouseY(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_MouseY_mBA145212013176C6059308217C48CF81A4B97A22_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_JumpPressed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_JumpPressed_mFAA212895284C6A93ABD519D138F71B81DD5B348_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_PrimaryFirePressed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_PrimaryFirePressed_mAB2C3104DE13E83197C1A15840077A7C2DA5BD68_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_SecondaryFirePressed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_SecondaryFirePressed_m69A83CFBEFD72A543DC360C561D962E42C1E7F1B_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_DashPressed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_DashPressed_mF469B7080ECC33630C6FDFB5667A688CFC7F8B0A_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217 (int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean Baracuda.Monitoring.API.MonitoringUI::ToggleDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonitoringUI_ToggleDisplay_mF148628862EE239FC2ECE48CF188AEEF760BAD7F (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.MonitoredBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoredBehaviour_Awake_mEA06DD075192578B6C82D69FA8C4445EC21351D8 (MonitoredBehaviour_t7FB19EB465CB2B947BD759A1D907E3BAA3CDB0F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Baracuda.Monitoring.Example.Scripts.IPlayerInput>()
inline RuntimeObject* Component_GetComponent_TisIPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_mE998DF92240DB3AE14F41F68031438A8A3A010BD (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC2EEB227949FF6517A085ECC9E0FC1F8897A5546 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__41__ctor_mA58D27BE8DD5B9EDCEDB50DE0E498685893A3C91 (U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::PerformCharacterMovement(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_PerformCharacterMovement_m9F10EAD389B2E180751A86C8A0592F2607E0CBC8 (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, float ___deltaTime0, float ___time1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// Baracuda.Monitoring.Example.Scripts.GroundStatus Baracuda.Monitoring.Example.Scripts.PlayerMovement::GroundCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerMovement_GroundCheck_m037084D5B0A523C1A1E6EF5D74416FCFAAECB72C (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60 (CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___motion0, const RuntimeMethod* method);
// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerMovement::CanDash(System.Single,Baracuda.Monitoring.Example.Scripts.GroundStatus,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_CanDash_m5E8BD62DE5C2D81A1A1FF6F4F2CD4BA5B6759263 (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, float ___time0, int32_t ___groundCheck1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rawInputDir2, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::BeginDash(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_BeginDash_mCBB9E3D2D3134900E4E759BB02AB48EF242C29AD (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, float ___time0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::PerformDash(System.Single,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_PerformDash_m964CC8AB94C584C8C1811F28B7D00B407E243AB6 (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, float ___deltaTime0, float ___time1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___directionVector2, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::OverlapSphereNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_OverlapSphereNonAlloc_mD1A616CEF8B7C991A9E56B7E17FF5BCF7C4B8431 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___radius1, ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___results2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Text.StringBuilder Baracuda.Pooling.Concretions.StringBuilderPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilderPool_Get_mAE9C8CA2ED8D833973655A636A3B4F943DE2517D (const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String Baracuda.Pooling.Concretions.StringBuilderPool::Release(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderPool_Release_m0A1C306DDA21B2202A32EC9C8D498C4FC864E12A (StringBuilder_t * ___toRelease0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
inline void Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301 (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *, int32_t, const RuntimeMethod*))Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_gshared)(__this, ___obj0, method);
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::PreformRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_PreformRaycast_m33A30B05C73574AEAEEB34FD4E43CF1DA0E4A457 (PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// Baracuda.Monitoring.Example.Scripts.Projectile Baracuda.Monitoring.Example.Scripts.ProjectilePool::GetProjectileFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * ProjectilePool_GetProjectileFromPool_m69C49741BD21EBB9CA809220B90A40F6E83E4E0D (ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904 * __this, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile::Setup(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Setup_m0FDFEBA5FD0B890995873448E373AF4DF1D76669 (Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, float ___damage2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force3, float ___spread4, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ViewportPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ViewportPointToRay_mA5F17F1603768A23286A637F706B612BCEF8D2C8 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.Projectile::SecondForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Projectile_SecondForce_m432AB4312B44AC9B7E6231A2BFEE78249B9A0E4A (Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSecondForceU3Ed__6__ctor_m3763E37212C6754051A13344D10F6F10FA12DCE9 (U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Baracuda.Monitoring.Example.Scripts.IDamageable>()
inline RuntimeObject* GameObject_GetComponent_TisIDamageable_t6C137867CAE20F10B8C7B527F191D64B41EDF2EE_mAA049B3F4155E65F1D65CE679B4E0A96409F9AA9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<Baracuda.Monitoring.Example.Scripts.Projectile>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * Object_Instantiate_TisProjectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_mAB9CFF6F69AD2F11B8D06D80B8B79C0EB88E79AD (Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * (*) (Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.Queue`1<Baracuda.Monitoring.Example.Scripts.Projectile>::Enqueue(!0)
inline void Queue_1_Enqueue_mFFA0B04310B155AE0014FEA27DD765C79FC241B7 (Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 * __this, Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 *, Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<Baracuda.Monitoring.Example.Scripts.Projectile>::Dequeue()
inline Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * Queue_1_Dequeue_mC36B1C4D2A0FCBD11D5241607DB0BA454635C4AB (Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 * __this, const RuntimeMethod* method)
{
	return ((  Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * (*) (Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Baracuda.Monitoring.Example.Scripts.Projectile>::.ctor()
inline void Queue_1__ctor_mCF6641FF23152EE5C64B5F532CB722CAC5BAEADB (Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.ShootingTarget::CooldownCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShootingTarget_CooldownCoroutine_m0A1A03C2DED0403109BE6A05390C3B7F25116F2D (ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * __this, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__11__ctor_m4E6E5A58ED394D365F04F424DC20EFB0D8734CC4 (U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668 (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1<System.Int32>::.ctor()
inline void ValueObject_1__ctor_m27B95BD763C34EE90C81FD685FE77EE2D16DAD04 (ValueObject_1_tE42E22C2F4482457F78F41CE9A2BE8B32EC82642 * __this, const RuntimeMethod* method)
{
	((  void (*) (ValueObject_1_tE42E22C2F4482457F78F41CE9A2BE8B32EC82642 *, const RuntimeMethod*))ValueObject_1__ctor_m27B95BD763C34EE90C81FD685FE77EE2D16DAD04_gshared)(__this, method);
}
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample/ValueObject`1<System.Int32>::set_Value(T)
inline void ValueObject_1_set_Value_m47266E8B40EFD980D319546E9D7EE5E57895EE78_inline (ValueObject_1_tE42E22C2F4482457F78F41CE9A2BE8B32EC82642 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (ValueObject_1_tE42E22C2F4482457F78F41CE9A2BE8B32EC82642 *, int32_t, const RuntimeMethod*))ValueObject_1_set_Value_m47266E8B40EFD980D319546E9D7EE5E57895EE78_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m081FDF5695B938E2DB858A0DBDC38C2F48C55B28 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
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
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmunitionPack_OnTriggerStay_m30794D67B0914B981D384F4811B5AF963DBBAFDB (AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisPlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61_mF5282FA6715E746A08D7D6D777A66C007C482FF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * V_0 = NULL;
	{
		// if (_isActive)
		bool L_0 = __this->get__isActive_6();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// if (other.TryGetComponent<PlayerWeapon>(out var playerWeapon))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_1 = ___other0;
		NullCheck(L_1);
		bool L_2;
		L_2 = Component_TryGetComponent_TisPlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61_mF5282FA6715E746A08D7D6D777A66C007C482FF7(L_1, (PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 **)(&V_0), /*hidden argument*/Component_TryGetComponent_TisPlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61_mF5282FA6715E746A08D7D6D777A66C007C482FF7_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// playerWeapon.ReplenishAmmunition();
		PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * L_3 = V_0;
		NullCheck(L_3);
		PlayerWeapon_ReplenishAmmunition_m1BFF7B103658893DB57815EF9214F5509CCDB636(L_3, /*hidden argument*/NULL);
		// StartCoroutine(CooldownCoroutine());
		RuntimeObject* L_4;
		L_4 = AmmunitionPack_CooldownCoroutine_m7A5938A42283C318A5041F32DA4694E61480ACC7(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.AmmunitionPack::CooldownCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AmmunitionPack_CooldownCoroutine_m7A5938A42283C318A5041F32DA4694E61480ACC7 (AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352 * L_0 = (U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352 *)il2cpp_codegen_object_new(U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352_il2cpp_TypeInfo_var);
		U3CCooldownCoroutineU3Ed__5__ctor_m20BA4DF1F73B6D9FF489ED13CD125218949D51E4(L_0, 0, /*hidden argument*/NULL);
		U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmunitionPack_Update_mDF73BE1E56506F2042568ABE6F91A7BB48A8B952 (AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * __this, const RuntimeMethod* method)
{
	{
		// ammunitionMesh.transform.Rotate(new Vector3(0, 30, 0) * Time.deltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ammunitionMesh_5();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (30.0f), (0.0f), /*hidden argument*/NULL);
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_1, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmunitionPack__ctor_m7FD5B731F308A9F54451524CEE02609070A3270E (AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float cooldown = 10f;
		__this->set_cooldown_4((10.0f));
		// private bool _isActive = true;
		__this->set__isActive_6((bool)1);
		MonitoredBehaviour__ctor_mB73166E89617EBCCC675A64019BA2DC2853799D3(__this, /*hidden argument*/NULL);
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
// System.Void Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::add_FPSUpdated(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSMonitor_add_FPSUpdated_m8BE5586EE18B9833AA605F523C12D540C73B48DE (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * V_0 = NULL;
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * V_1 = NULL;
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_0 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_FPSUpdated_19();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_2 = V_1;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_5 = V_2;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_6 = V_1;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *>((Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 **)(((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_address_of_FPSUpdated_19()), L_5, L_6);
		V_0 = L_7;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_8 = V_0;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)L_8) == ((RuntimeObject*)(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::remove_FPSUpdated(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSMonitor_remove_FPSUpdated_mBA131012D5BC4597D72AC0E5D234E688B32ECDDC (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * V_0 = NULL;
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * V_1 = NULL;
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_0 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_FPSUpdated_19();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_2 = V_1;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_5 = V_2;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_6 = V_1;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *>((Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 **)(((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_address_of_FPSUpdated_19()), L_5, L_6);
		V_0 = L_7;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_8 = V_0;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)L_8) == ((RuntimeObject*)(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.String Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::FPSProcessor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FPSMonitor_FPSProcessor_mC3C9FAA7A87783A1666CE761B612B0196779B00E (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2782E60458C315FD9CCA88FAAA60C80198F1751C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0483570A78643AE1FD9C1B5E0DE2FBC10DF38F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC66FB6A39237C31222C78DEDB1295C5BD1F974B4);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * G_B4_0 = NULL;
	StringBuilder_t * G_B1_0 = NULL;
	StringBuilder_t * G_B3_0 = NULL;
	StringBuilder_t * G_B2_0 = NULL;
	String_t* G_B5_0 = NULL;
	StringBuilder_t * G_B5_1 = NULL;
	{
		// stringBuilder.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		StringBuilder_t * L_0 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_stringBuilder_17();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_0, /*hidden argument*/NULL);
		// stringBuilder.Append('[');
		StringBuilder_t * L_2 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_stringBuilder_17();
		NullCheck(L_2);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_2, ((int32_t)91), /*hidden argument*/NULL);
		// stringBuilder.Append(value >= THRESHOLD_TWO ? C_MAX : value >= THRESHOLD_ONE ? COLOR_MID_MARKUP : COLOR_MIN_MARKUP);
		StringBuilder_t * L_4 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_stringBuilder_17();
		float L_5 = ___value0;
		G_B1_0 = L_4;
		if ((((float)L_5) >= ((float)(60.0f))))
		{
			G_B4_0 = L_4;
			goto IL_003b;
		}
	}
	{
		float L_6 = ___value0;
		G_B2_0 = G_B1_0;
		if ((((float)L_6) >= ((float)(30.0f))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0034;
		}
	}
	{
		G_B5_0 = _stringLiteral6D0483570A78643AE1FD9C1B5E0DE2FBC10DF38F;
		G_B5_1 = G_B2_0;
		goto IL_0040;
	}

IL_0034:
	{
		G_B5_0 = _stringLiteral2782E60458C315FD9CCA88FAAA60C80198F1751C;
		G_B5_1 = G_B3_0;
		goto IL_0040;
	}

IL_003b:
	{
		G_B5_0 = _stringLiteral6D0483570A78643AE1FD9C1B5E0DE2FBC10DF38F;
		G_B5_1 = G_B4_0;
	}

IL_0040:
	{
		NullCheck(G_B5_1);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		// stringBuilder.Append(value.ToString("00.00"));
		IL2CPP_RUNTIME_CLASS_INIT(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		StringBuilder_t * L_8 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_stringBuilder_17();
		String_t* L_9;
		L_9 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&___value0), _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_8, L_9, /*hidden argument*/NULL);
		// stringBuilder.Append("</color>]");
		StringBuilder_t * L_11 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_stringBuilder_17();
		NullCheck(L_11);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteralC66FB6A39237C31222C78DEDB1295C5BD1F974B4, /*hidden argument*/NULL);
		// return stringBuilder.ToString();
		StringBuilder_t * L_13 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_stringBuilder_17();
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_14;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSMonitor_Update_m1C911B819C52D673F4EE47DB1031F6F7E155702C (FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * G_B5_0 = NULL;
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * G_B4_0 = NULL;
	{
		// frameCount++;
		IL2CPP_RUNTIME_CLASS_INIT(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		int32_t L_0 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_frameCount_16();
		((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->set_frameCount_16(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// timer += Time.deltaTime / Time.timeScale;
		float L_1 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_timer_13();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_3;
		L_3 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
		((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->set_timer_13(((float)il2cpp_codegen_add((float)L_1, (float)((float)((float)L_2/(float)L_3)))));
		// if (timer < MEASURE_PERIOD)
		float L_4 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_timer_13();
		if ((!(((float)L_4) < ((float)(0.25f)))))
		{
			goto IL_002f;
		}
	}
	{
		// return;
		return;
	}

IL_002f:
	{
		// lastMeasuredFps = (frameCount / timer);
		IL2CPP_RUNTIME_CLASS_INIT(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		int32_t L_5 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_frameCount_16();
		float L_6 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_timer_13();
		((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->set_lastMeasuredFps_15(((float)((float)((float)((float)L_5))/(float)L_6)));
		// if (Math.Abs(lastMeasuredFps - lastFPS) > .1f)
		float L_7 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_lastMeasuredFps_15();
		int32_t L_8 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_lastFPS_14();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract((float)L_7, (float)((float)((float)L_8)))));
		if ((!(((float)L_9) > ((float)(0.100000001f)))))
		{
			goto IL_0079;
		}
	}
	{
		// _fps = lastMeasuredFps;
		IL2CPP_RUNTIME_CLASS_INIT(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		float L_10 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_lastMeasuredFps_15();
		__this->set__fps_18(L_10);
		// FPSUpdated?.Invoke(_fps);
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_11 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_FPSUpdated_19();
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_12 = L_11;
		G_B4_0 = L_12;
		if (L_12)
		{
			G_B5_0 = L_12;
			goto IL_006e;
		}
	}
	{
		goto IL_0079;
	}

IL_006e:
	{
		float L_13 = __this->get__fps_18();
		NullCheck(G_B5_0);
		Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E(G_B5_0, L_13, /*hidden argument*/Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
	}

IL_0079:
	{
		// lastFPS = frameCount;
		IL2CPP_RUNTIME_CLASS_INIT(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		int32_t L_14 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_frameCount_16();
		((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->set_lastFPS_14(L_14);
		// frameCount = 0;
		((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->set_frameCount_16(0);
		// var rest = MEASURE_PERIOD - timer;
		float L_15 = ((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->get_timer_13();
		// timer = rest;
		((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->set_timer_13(((float)il2cpp_codegen_subtract((float)(0.25f), (float)L_15)));
		// }
		return;
	}
}
// System.Int32 Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::get_TargetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FPSMonitor_get_TargetFrameRate_m095D5211143975904ABC5F98180BF77C62CF0E33 (FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07 * __this, const RuntimeMethod* method)
{
	{
		// private int TargetFrameRate => Application.targetFrameRate;
		int32_t L_0;
		L_0 = Application_get_targetFrameRate_m2BB711703471EC6C1E1B11A714B9005BB92C1E71(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::ProcessorTargetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FPSMonitor_ProcessorTargetFrameRate_mF3C24267441EB2B64363E87B4815F7C108D8E263 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0837041AD0EE0643F6824EDD39A94236A4C64E77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACBF7A4CD422476FEB006274145662AE739D5833);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// return $"Target Framerate: {(value > 0 ? value.ToString() : "Unlimited")}";
		int32_t L_0 = ___value0;
		G_B1_0 = _stringLiteral0837041AD0EE0643F6824EDD39A94236A4C64E77;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			G_B2_0 = _stringLiteral0837041AD0EE0643F6824EDD39A94236A4C64E77;
			goto IL_0010;
		}
	}
	{
		G_B3_0 = _stringLiteralACBF7A4CD422476FEB006274145662AE739D5833;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0010:
	{
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___value0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::get_Vsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FPSMonitor_get_Vsync_m3C44B89A25AB90F294960BE35D6CD79A8AC0D385 (FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07 * __this, const RuntimeMethod* method)
{
	{
		// private int Vsync => QualitySettings.vSyncCount;
		int32_t L_0;
		L_0 = QualitySettings_get_vSyncCount_m00DC32AF7052D3BFF7EB5C384D5EA45BE0B98520(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::ProcessorVsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FPSMonitor_ProcessorVsync_m42EEF5AD7D3B91465FE33B9CD57CBB45266FE3C4 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C8E53BB00CB458F66CD314AADF58285ABC31E61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A45D0D8311C8D73121FDD6C8B401E1AD3C58E0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA0318C58431FE2137800A0147599057929A2F71);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// return $"Vsync: {(value > 0 ? $"Vsync Count: {value}" : "Disabled")}";
		int32_t L_0 = ___value0;
		G_B1_0 = _stringLiteralBA0318C58431FE2137800A0147599057929A2F71;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			G_B2_0 = _stringLiteralBA0318C58431FE2137800A0147599057929A2F71;
			goto IL_0010;
		}
	}
	{
		G_B3_0 = _stringLiteral8A45D0D8311C8D73121FDD6C8B401E1AD3C58E0E;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0010:
	{
		int32_t L_1 = ___value0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral4C8E53BB00CB458F66CD314AADF58285ABC31E61, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSMonitor__ctor_m4F099CE33D259F8BF500CBB98DBA53C4116E09BC (FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitoredSingleton_1__ctor_mFF5ED5BAFE29EFF0F4DBB268517C7E5D10CEBCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonitoredSingleton_1__ctor_mFF5ED5BAFE29EFF0F4DBB268517C7E5D10CEBCE7(__this, /*hidden argument*/MonitoredSingleton_1__ctor_mFF5ED5BAFE29EFF0F4DBB268517C7E5D10CEBCE7_RuntimeMethod_var);
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Persistent.FPSMonitor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPSMonitor__cctor_m2C44EFB652D4273BDD452D05DA2B5007C7EF13AB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static float timer = 0;
		((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->set_timer_13((0.0f));
		// private static float lastMeasuredFps = 0;
		((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->set_lastMeasuredFps_15((0.0f));
		// private static int frameCount = 0;
		((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->set_frameCount_16(0);
		// private static readonly StringBuilder stringBuilder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		((FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_StaticFields*)il2cpp_codegen_static_fields_for(FPSMonitor_tE0C38E1197E3814B95529A91B8D6963A5DFE6C07_il2cpp_TypeInfo_var))->set_stringBuilder_17(L_0);
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
// System.Void FilterController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterController_Awake_m4DEDA2DF7C9E62634F12CC3000CFA3F47E4BC827 (FilterController_tE99B422A85D6AA873CFB71BFF162F6126966F20C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mD79C9E890CF9FBA5249755229C3465BEF9E06015_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FilterController_OnToggleFilter_mE20CE9A30DDF2B815F6F5930FB953C816C31A772_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playerInput.InputModeChanged += OnToggleFilter;
		LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * L_0 = __this->get__playerInput_4();
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_1 = (Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD *)il2cpp_codegen_object_new(Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD_il2cpp_TypeInfo_var);
		Action_1__ctor_mD79C9E890CF9FBA5249755229C3465BEF9E06015(L_1, __this, (intptr_t)((intptr_t)FilterController_OnToggleFilter_mE20CE9A30DDF2B815F6F5930FB953C816C31A772_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD79C9E890CF9FBA5249755229C3465BEF9E06015_RuntimeMethod_var);
		NullCheck(L_0);
		LegacyPlayerInput_add_InputModeChanged_m76DC0E4EFCD10F489E511E63F5F2B7D54B547EE4(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FilterController::OnToggleFilter(Baracuda.Monitoring.Example.Scripts.InputMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterController_OnToggleFilter_mE20CE9A30DDF2B815F6F5930FB953C816C31A772 (FilterController_tE99B422A85D6AA873CFB71BFF162F6126966F20C * __this, int32_t ___inputMode0, const RuntimeMethod* method)
{
	{
		// uiParent.SetActive(inputMode == InputMode.UserInterface);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_uiParent_5();
		int32_t L_1 = ___inputMode0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FilterController::OnInputChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterController_OnInputChanged_m9B517117998FDDA0D3BFE82622902F752D6F7B99 (FilterController_tE99B422A85D6AA873CFB71BFF162F6126966F20C * __this, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitoringUI_t5CC3A3622531862A1CF837BFDCF5079E58557B93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrWhiteSpace(input))
		String_t* L_0 = ___input0;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// MonitoringUI.ResetFilter();
		IL2CPP_RUNTIME_CLASS_INIT(MonitoringUI_t5CC3A3622531862A1CF837BFDCF5079E58557B93_il2cpp_TypeInfo_var);
		MonitoringUI_ResetFilter_m9E2849B24B4B9B974D06CC07C9A2503ED4BCF371(/*hidden argument*/NULL);
		// }
		return;
	}

IL_000e:
	{
		// MonitoringUI.Filter(input);
		String_t* L_2 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(MonitoringUI_t5CC3A3622531862A1CF837BFDCF5079E58557B93_il2cpp_TypeInfo_var);
		MonitoringUI_Filter_mD93E7B260D0B8682DDE827D2EB433B94EBC3F669(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FilterController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterController__ctor_mEF4FBD9484A771A5F6340B2532E6CDBB10FB4815 (FilterController_tE99B422A85D6AA873CFB71BFF162F6126966F20C * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericsExample_Awake_m8437B0D5DAAC3CAFB35A1ACCFD848379391F0DE2 (GenericsExample_tAAB8A99F73CA2C3C6F6E64D4D53C9B44F03028D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntValueObject_t046547CD0EB5D55C4EC9DE796F9194D2F71D8776_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _valueObject = new IntValueObject(300);
		IntValueObject_t046547CD0EB5D55C4EC9DE796F9194D2F71D8776 * L_0 = (IntValueObject_t046547CD0EB5D55C4EC9DE796F9194D2F71D8776 *)il2cpp_codegen_object_new(IntValueObject_t046547CD0EB5D55C4EC9DE796F9194D2F71D8776_il2cpp_TypeInfo_var);
		IntValueObject__ctor_m75C31654E5D218171CBBC4357E4F5C491F1B7593(L_0, ((int32_t)300), /*hidden argument*/NULL);
		__this->set__valueObject_4(L_0);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericsExample__ctor_m8E1F4807FABDDB11E285DE7366B3E895C42E97BA (GenericsExample_tAAB8A99F73CA2C3C6F6E64D4D53C9B44F03028D5 * __this, const RuntimeMethod* method)
{
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Baracuda.Monitoring.Example.Scripts.HitBox::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitBox_Awake_mCD5027A4096E4EA838DD03E29552FC9E82A6F611 (HitBox_tBDA174738404E2EBE9D79BAB886ABC36DB70E5AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_m9C9FFE99ECE8711B2E1AD57AE39F8DA9DC56B6C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _shootingTarget = GetComponentInParent<ShootingTarget>();
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_0;
		L_0 = Component_GetComponentInParent_TisShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_m9C9FFE99ECE8711B2E1AD57AE39F8DA9DC56B6C9(__this, /*hidden argument*/Component_GetComponentInParent_TisShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_m9C9FFE99ECE8711B2E1AD57AE39F8DA9DC56B6C9_RuntimeMethod_var);
		__this->set__shootingTarget_5(L_0);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.HitBox::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitBox_TakeDamage_m54641007339DD94F8ACE305D9FD9524D7E609020 (HitBox_tBDA174738404E2EBE9D79BAB886ABC36DB70E5AB * __this, float ___damage0, const RuntimeMethod* method)
{
	{
		// _shootingTarget.TakeDamage(damage * damageMultiplier);
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_0 = __this->get__shootingTarget_5();
		float L_1 = ___damage0;
		float L_2 = __this->get_damageMultiplier_4();
		NullCheck(L_0);
		ShootingTarget_TakeDamage_mC989782C3A5973D83004E31B39C249CB38501D2E(L_0, ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.HitBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitBox__ctor_mBF4442308B7700A1683EB26F50E768CBE014515E (HitBox_tBDA174738404E2EBE9D79BAB886ABC36DB70E5AB * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float damageMultiplier = 1f;
		__this->set_damageMultiplier_4((1.0f));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LegacyPlayerInput_get_Vertical_m310C0180ADD0DE6FD4C7D5F976D7615F3ECBEBA3 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, const RuntimeMethod* method)
{
	{
		// public float Vertical { get; private set; }
		float L_0 = __this->get_U3CVerticalU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_Vertical(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_Vertical_mCD9A584E73C02D8B6F17A6245B74074BFAE22BAC (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Vertical { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CVerticalU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LegacyPlayerInput_get_Horizontal_m32A7D4B52194AF7D7367FC3027A89279254FE8CC (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, const RuntimeMethod* method)
{
	{
		// public float Horizontal { get; private set; }
		float L_0 = __this->get_U3CHorizontalU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_Horizontal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_Horizontal_m086CDB96DAC64A7FC27A916AB53C4002C417D126 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Horizontal { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CHorizontalU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_MouseX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LegacyPlayerInput_get_MouseX_m2553336F6F85676F6CD0505E209E8F0B4F0473B3 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, const RuntimeMethod* method)
{
	{
		// public float MouseX { get; private set; }
		float L_0 = __this->get_U3CMouseXU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_MouseX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_MouseX_mFBF618C7B0C860A45662DB8F54217C989845C04C (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MouseX { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CMouseXU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Single Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_MouseY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LegacyPlayerInput_get_MouseY_m01FA546299AA96C02A8FCA34AA3E4E6921F4D84E (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, const RuntimeMethod* method)
{
	{
		// public float MouseY { get; private set; }
		float L_0 = __this->get_U3CMouseYU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_MouseY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_MouseY_mBA145212013176C6059308217C48CF81A4B97A22 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MouseY { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CMouseYU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_JumpPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LegacyPlayerInput_get_JumpPressed_mD8C1058C5C079F1540120511BA0616F2CE9CBD02 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, const RuntimeMethod* method)
{
	{
		// public bool JumpPressed { get; private set; }
		bool L_0 = __this->get_U3CJumpPressedU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_JumpPressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_JumpPressed_mFAA212895284C6A93ABD519D138F71B81DD5B348 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool JumpPressed { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CJumpPressedU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_PrimaryFirePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LegacyPlayerInput_get_PrimaryFirePressed_mCA444E6AB86589AAB96BF2EB92639EE0235F3CE3 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, const RuntimeMethod* method)
{
	{
		// public bool PrimaryFirePressed { get; private set; }
		bool L_0 = __this->get_U3CPrimaryFirePressedU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_PrimaryFirePressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_PrimaryFirePressed_mAB2C3104DE13E83197C1A15840077A7C2DA5BD68 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PrimaryFirePressed { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CPrimaryFirePressedU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_SecondaryFirePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LegacyPlayerInput_get_SecondaryFirePressed_m4E3D111FA45406B6A1D68D27BDC3F5751D7F6606 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, const RuntimeMethod* method)
{
	{
		// public bool SecondaryFirePressed { get; private set; }
		bool L_0 = __this->get_U3CSecondaryFirePressedU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_SecondaryFirePressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_SecondaryFirePressed_m69A83CFBEFD72A543DC360C561D962E42C1E7F1B (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SecondaryFirePressed { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CSecondaryFirePressedU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::get_DashPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LegacyPlayerInput_get_DashPressed_mAD87DFAE57754682E392030B0E58309EDF0541E5 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, const RuntimeMethod* method)
{
	{
		// public bool DashPressed { get; private set; }
		bool L_0 = __this->get_U3CDashPressedU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::set_DashPressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_DashPressed_mF469B7080ECC33630C6FDFB5667A688CFC7F8B0A (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool DashPressed { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CDashPressedU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::add_InputModeChanged(System.Action`1<Baracuda.Monitoring.Example.Scripts.InputMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_add_InputModeChanged_m76DC0E4EFCD10F489E511E63F5F2B7D54B547EE4 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * V_0 = NULL;
	Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * V_1 = NULL;
	Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * V_2 = NULL;
	{
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_0 = __this->get_InputModeChanged_18();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_1 = V_0;
		V_1 = L_1;
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_2 = V_1;
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD *)CastclassSealed((RuntimeObject*)L_4, Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD_il2cpp_TypeInfo_var));
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD ** L_5 = __this->get_address_of_InputModeChanged_18();
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_6 = V_2;
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_7 = V_1;
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD *>((Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_9 = V_0;
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD *)L_9) == ((RuntimeObject*)(Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::remove_InputModeChanged(System.Action`1<Baracuda.Monitoring.Example.Scripts.InputMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_remove_InputModeChanged_m6D097FD6FC36239334CD676D55232FB8768928A0 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * V_0 = NULL;
	Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * V_1 = NULL;
	Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * V_2 = NULL;
	{
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_0 = __this->get_InputModeChanged_18();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_1 = V_0;
		V_1 = L_1;
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_2 = V_1;
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD *)CastclassSealed((RuntimeObject*)L_4, Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD_il2cpp_TypeInfo_var));
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD ** L_5 = __this->get_address_of_InputModeChanged_18();
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_6 = V_2;
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_7 = V_1;
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD *>((Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_9 = V_0;
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD *)L_9) == ((RuntimeObject*)(Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_Start_m6CC297C81F25360F0D054A75A446F9B263CD52CE (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF53BF2C8EE68F8DC4E5C530B55D3D7F9A6DA3D83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * G_B2_0 = NULL;
	Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * G_B1_0 = NULL;
	{
		// _currentInputMode = inputMode;
		int32_t L_0 = __this->get_inputMode_4();
		__this->set__currentInputMode_19(L_0);
		// InputModeChanged?.Invoke(_currentInputMode);
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_1 = __this->get_InputModeChanged_18();
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		int32_t L_3 = __this->get__currentInputMode_19();
		NullCheck(G_B2_0);
		Action_1_Invoke_mF53BF2C8EE68F8DC4E5C530B55D3D7F9A6DA3D83(G_B2_0, L_3, /*hidden argument*/Action_1_Invoke_mF53BF2C8EE68F8DC4E5C530B55D3D7F9A6DA3D83_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput_Update_m5BE3A5A51D20469046B413B5002A46F48B52488E (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF53BF2C8EE68F8DC4E5C530B55D3D7F9A6DA3D83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * G_B3_0 = NULL;
	LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * G_B4_1 = NULL;
	Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * G_B9_0 = NULL;
	Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * G_B8_0 = NULL;
	{
		// if (Input.GetKeyDown(toggleFilterKey))
		int32_t L_0 = __this->get_toggleFilterKey_9();
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00a4;
		}
	}
	{
		// _currentInputMode = _currentInputMode == InputMode.Character
		//     ? InputMode.UserInterface
		//     : InputMode.Character;
		int32_t L_2 = __this->get__currentInputMode_19();
		G_B2_0 = __this;
		if (!L_2)
		{
			G_B3_0 = __this;
			goto IL_001c;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001d:
	{
		NullCheck(G_B4_1);
		G_B4_1->set__currentInputMode_19(G_B4_0);
		// if (_currentInputMode == InputMode.UserInterface)
		int32_t L_3 = __this->get__currentInputMode_19();
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0081;
		}
	}
	{
		// Vertical = 0f;
		LegacyPlayerInput_set_Vertical_mCD9A584E73C02D8B6F17A6245B74074BFAE22BAC_inline(__this, (0.0f), /*hidden argument*/NULL);
		// Horizontal = 0f;
		LegacyPlayerInput_set_Horizontal_m086CDB96DAC64A7FC27A916AB53C4002C417D126_inline(__this, (0.0f), /*hidden argument*/NULL);
		// MouseX = 0f;
		LegacyPlayerInput_set_MouseX_mFBF618C7B0C860A45662DB8F54217C989845C04C_inline(__this, (0.0f), /*hidden argument*/NULL);
		// MouseY = 0f;
		LegacyPlayerInput_set_MouseY_mBA145212013176C6059308217C48CF81A4B97A22_inline(__this, (0.0f), /*hidden argument*/NULL);
		// JumpPressed = false;
		LegacyPlayerInput_set_JumpPressed_mFAA212895284C6A93ABD519D138F71B81DD5B348_inline(__this, (bool)0, /*hidden argument*/NULL);
		// PrimaryFirePressed  = false;
		LegacyPlayerInput_set_PrimaryFirePressed_mAB2C3104DE13E83197C1A15840077A7C2DA5BD68_inline(__this, (bool)0, /*hidden argument*/NULL);
		// SecondaryFirePressed = false;
		LegacyPlayerInput_set_SecondaryFirePressed_m69A83CFBEFD72A543DC360C561D962E42C1E7F1B_inline(__this, (bool)0, /*hidden argument*/NULL);
		// DashPressed = false;
		LegacyPlayerInput_set_DashPressed_mF469B7080ECC33630C6FDFB5667A688CFC7F8B0A_inline(__this, (bool)0, /*hidden argument*/NULL);
		// Cursor.visible = true;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)1, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(0, /*hidden argument*/NULL);
		// }
		goto IL_008d;
	}

IL_0081:
	{
		// Cursor.visible = false;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)0, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(1, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// InputModeChanged?.Invoke(_currentInputMode);
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_4 = __this->get_InputModeChanged_18();
		Action_1_tD2C1C0060AE1DF010840812A465E68673A377ADD * L_5 = L_4;
		G_B8_0 = L_5;
		if (L_5)
		{
			G_B9_0 = L_5;
			goto IL_0099;
		}
	}
	{
		goto IL_00a4;
	}

IL_0099:
	{
		int32_t L_6 = __this->get__currentInputMode_19();
		NullCheck(G_B9_0);
		Action_1_Invoke_mF53BF2C8EE68F8DC4E5C530B55D3D7F9A6DA3D83(G_B9_0, L_6, /*hidden argument*/Action_1_Invoke_mF53BF2C8EE68F8DC4E5C530B55D3D7F9A6DA3D83_RuntimeMethod_var);
	}

IL_00a4:
	{
		// if (_currentInputMode == InputMode.Character)
		int32_t L_7 = __this->get__currentInputMode_19();
		if (L_7)
		{
			goto IL_0133;
		}
	}
	{
		// Vertical = Input.GetAxisRaw("Vertical");
		float L_8;
		L_8 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		LegacyPlayerInput_set_Vertical_mCD9A584E73C02D8B6F17A6245B74074BFAE22BAC_inline(__this, L_8, /*hidden argument*/NULL);
		// Horizontal = Input.GetAxisRaw("Horizontal");
		float L_9;
		L_9 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		LegacyPlayerInput_set_Horizontal_m086CDB96DAC64A7FC27A916AB53C4002C417D126_inline(__this, L_9, /*hidden argument*/NULL);
		// MouseX = Input.GetAxis("Mouse X");
		float L_10;
		L_10 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		LegacyPlayerInput_set_MouseX_mFBF618C7B0C860A45662DB8F54217C989845C04C_inline(__this, L_10, /*hidden argument*/NULL);
		// MouseY = Input.GetAxis("Mouse Y");
		float L_11;
		L_11 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		LegacyPlayerInput_set_MouseY_mBA145212013176C6059308217C48CF81A4B97A22_inline(__this, L_11, /*hidden argument*/NULL);
		// JumpPressed = Input.GetKey(jumpKey);
		int32_t L_12 = __this->get_jumpKey_5();
		bool L_13;
		L_13 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_12, /*hidden argument*/NULL);
		LegacyPlayerInput_set_JumpPressed_mFAA212895284C6A93ABD519D138F71B81DD5B348_inline(__this, L_13, /*hidden argument*/NULL);
		// PrimaryFirePressed = Input.GetKey(primaryFireKey);
		int32_t L_14 = __this->get_primaryFireKey_6();
		bool L_15;
		L_15 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_14, /*hidden argument*/NULL);
		LegacyPlayerInput_set_PrimaryFirePressed_mAB2C3104DE13E83197C1A15840077A7C2DA5BD68_inline(__this, L_15, /*hidden argument*/NULL);
		// SecondaryFirePressed = Input.GetKey(secondaryFireKey);
		int32_t L_16 = __this->get_secondaryFireKey_7();
		bool L_17;
		L_17 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_16, /*hidden argument*/NULL);
		LegacyPlayerInput_set_SecondaryFirePressed_m69A83CFBEFD72A543DC360C561D962E42C1E7F1B_inline(__this, L_17, /*hidden argument*/NULL);
		// DashPressed = Input.GetKey(dashKey);
		int32_t L_18 = __this->get_dashKey_8();
		bool L_19;
		L_19 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_18, /*hidden argument*/NULL);
		LegacyPlayerInput_set_DashPressed_mF469B7080ECC33630C6FDFB5667A688CFC7F8B0A_inline(__this, L_19, /*hidden argument*/NULL);
	}

IL_0133:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.LegacyPlayerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyPlayerInput__ctor_m4D6354DE216256E35177039E1793F0B6D01E1725 (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private KeyCode jumpKey = KeyCode.Space;
		__this->set_jumpKey_5(((int32_t)32));
		// [SerializeField] private KeyCode primaryFireKey = KeyCode.Mouse0;
		__this->set_primaryFireKey_6(((int32_t)323));
		// [SerializeField] private KeyCode secondaryFireKey = KeyCode.Mouse1;
		__this->set_secondaryFireKey_7(((int32_t)324));
		// [SerializeField] private KeyCode dashKey = KeyCode.LeftShift;
		__this->set_dashKey_8(((int32_t)304));
		// [SerializeField] private KeyCode toggleFilterKey = KeyCode.Semicolon;
		__this->set_toggleFilterKey_9(((int32_t)59));
		MonitoredBehaviour__ctor_mB73166E89617EBCCC675A64019BA2DC2853799D3(__this, /*hidden argument*/NULL);
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
// System.Void Baracuda.Monitoring.Example.Scripts.MonitorInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorInput_Update_mB143AD3B5BB8ECA6C19A253C9F8ABD946A9BE131 (MonitorInput_tDD0488D336A590114F17EC7B3BD7D9863E4FE0F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonitoringUI_t5CC3A3622531862A1CF837BFDCF5079E58557B93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(toggleKey))
		int32_t L_0 = __this->get_toggleKey_4();
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// MonitoringUI.ToggleDisplay();
		IL2CPP_RUNTIME_CLASS_INIT(MonitoringUI_t5CC3A3622531862A1CF837BFDCF5079E58557B93_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = MonitoringUI_ToggleDisplay_mF148628862EE239FC2ECE48CF188AEEF760BAD7F(/*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.MonitorInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorInput__ctor_m83947F5C8AA8A468FAAFB919FAF5110BA3379363 (MonitorInput_tDD0488D336A590114F17EC7B3BD7D9863E4FE0F1 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private KeyCode toggleKey = KeyCode.F3;
		__this->set_toggleKey_4(((int32_t)284));
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
// UnityEngine.Vector3 Baracuda.Monitoring.Example.Scripts.PlayerMovement::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PlayerMovement_get_Position_m3938AEEE0C110E55E5C2B7777274BE3A60DC333C (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, const RuntimeMethod* method)
{
	{
		// private Vector3 Position => transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Awake_m7E1E46BCAFA7F06F8C68BEACCDFE0896D4B56A0F (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC2EEB227949FF6517A085ECC9E0FC1F8897A5546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_mE998DF92240DB3AE14F41F68031438A8A3A010BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		MonitoredBehaviour_Awake_mEA06DD075192578B6C82D69FA8C4445EC21351D8(__this, /*hidden argument*/NULL);
		// _transform = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		__this->set__transform_22(L_0);
		// _input = GetComponent<IPlayerInput>();
		RuntimeObject* L_1;
		L_1 = Component_GetComponent_TisIPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_mE998DF92240DB3AE14F41F68031438A8A3A010BD(__this, /*hidden argument*/Component_GetComponent_TisIPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_mE998DF92240DB3AE14F41F68031438A8A3A010BD_RuntimeMethod_var);
		__this->set__input_24(L_1);
		// _characterController = GetComponent<CharacterController>();
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_2;
		L_2 = Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var);
		__this->set__characterController_21(L_2);
		// _camera = GetComponentInChildren<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Component_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC2EEB227949FF6517A085ECC9E0FC1F8897A5546(__this, /*hidden argument*/Component_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC2EEB227949FF6517A085ECC9E0FC1F8897A5546_RuntimeMethod_var);
		__this->set__camera_23(L_3);
		// _dashEnergy = dashAmount;
		int32_t L_4 = __this->get_dashAmount_14();
		__this->set__dashEnergy_34(((float)((float)L_4)));
		// _jumpsLeft = jumps;
		int32_t L_5 = __this->get_jumps_10();
		__this->set__jumpsLeft_33(L_5);
		// }
		return;
	}
}
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMovement_Start_mC6E629156DE78617A983CC59D01886EA3D1FAE28 (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5 * L_0 = (U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5 *)il2cpp_codegen_object_new(U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5_il2cpp_TypeInfo_var);
		U3CStartU3Ed__41__ctor_mA58D27BE8DD5B9EDCEDB50DE0E498685893A3C91(L_0, 0, /*hidden argument*/NULL);
		U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mB31C7D463B8FC45A351F5B364F09270715A82F2E (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var deltaTime = Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = L_0;
		// var time = Time.time;
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_1 = L_1;
		// PerformCharacterMovement(deltaTime, time);
		float L_2 = V_0;
		float L_3 = V_1;
		PlayerMovement_PerformCharacterMovement_m9F10EAD389B2E180751A86C8A0592F2607E0CBC8(__this, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_LateUpdate_mE79A784889C4461C7CD5828A4C22CEF389A8E5DE (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, const RuntimeMethod* method)
{
	{
		// if (_transform.position.y <= killHeight)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__transform_22();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		float L_3 = __this->get_killHeight_20();
		if ((!(((float)L_2) <= ((float)L_3))))
		{
			goto IL_005a;
		}
	}
	{
		// _transform.position = _spawnPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get__transform_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get__spawnPosition_25();
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_5, /*hidden argument*/NULL);
		// _transform.rotation = _spawnRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get__transform_22();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = __this->get__spawnRotation_26();
		NullCheck(L_6);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_6, L_7, /*hidden argument*/NULL);
		// _camera.transform.localRotation = Quaternion.identity;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = __this->get__camera_23();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_9, L_10, /*hidden argument*/NULL);
		// _rotationX = 0;
		__this->set__rotationX_28((0.0f));
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::PerformCharacterMovement(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_PerformCharacterMovement_m9F10EAD389B2E180751A86C8A0592F2607E0CBC8 (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, float ___deltaTime0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * G_B2_0 = NULL;
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * G_B1_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * G_B3_1 = NULL;
	float G_B14_0 = 0.0f;
	float G_B14_1 = 0.0f;
	float* G_B14_2 = NULL;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	float* G_B13_2 = NULL;
	float G_B15_0 = 0.0f;
	float G_B15_1 = 0.0f;
	float G_B15_2 = 0.0f;
	float* G_B15_3 = NULL;
	float G_B27_0 = 0.0f;
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * G_B27_1 = NULL;
	float G_B26_0 = 0.0f;
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * G_B26_1 = NULL;
	float G_B28_0 = 0.0f;
	float G_B28_1 = 0.0f;
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * G_B28_2 = NULL;
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * G_B30_0 = NULL;
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * G_B29_0 = NULL;
	int32_t G_B31_0 = 0;
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * G_B31_1 = NULL;
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * G_B33_0 = NULL;
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * G_B32_0 = NULL;
	float G_B34_0 = 0.0f;
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * G_B34_1 = NULL;
	{
		// var groundCheck = GroundCheck();
		int32_t L_0;
		L_0 = PlayerMovement_GroundCheck_m037084D5B0A523C1A1E6EF5D74416FCFAAECB72C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// var isGrounded = groundCheck != GroundStatus.NoGround;
		int32_t L_1 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// var xInput = _input.Vertical;
		RuntimeObject* L_2 = __this->get__input_24();
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_Vertical() */, IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
		// var yInput = _input.Horizontal;
		RuntimeObject* L_4 = __this->get__input_24();
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_Horizontal() */, IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_il2cpp_TypeInfo_var, L_4);
		V_3 = L_5;
		// var rawInputDir = new Vector2(xInput, yInput);
		float L_6 = V_2;
		float L_7 = V_3;
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), L_6, L_7, /*hidden argument*/NULL);
		// _processedInputDir = Vector2.Lerp(_processedInputDir,
		//     rawInputDir.normalized,
		//     deltaTime * inputSharpness);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = __this->get__processedInputDir_27();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), /*hidden argument*/NULL);
		float L_10 = ___deltaTime0;
		float L_11 = __this->get_inputSharpness_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline(L_8, L_9, ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		__this->set__processedInputDir_27(L_12);
		// var yMotion = _velocity.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of__velocity_29();
		float L_14 = L_13->get_y_3();
		V_5 = L_14;
		// var directionVector = _transform.forward * _processedInputDir.x + _transform.right * _processedInputDir.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get__transform_22();
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_15, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_17 = __this->get_address_of__processedInputDir_27();
		float L_18 = L_17->get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_18, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get__transform_22();
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_20, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = __this->get_address_of__processedInputDir_27();
		float L_23 = L_22->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_19, L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		// var movementVelocity = directionVector * movementSpeed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_6;
		float L_27 = __this->get_movementSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_26, L_27, /*hidden argument*/NULL);
		V_7 = L_28;
		// _velocity = groundCheck != GroundStatus.NoGround
		//     ? movementVelocity
		//     : Vector3.Lerp(_velocity, movementVelocity, deltaTime * airMovementSharpness);
		int32_t L_29 = V_0;
		G_B1_0 = __this;
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			G_B2_0 = __this;
			goto IL_00c5;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = __this->get__velocity_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_7;
		float L_32 = ___deltaTime0;
		float L_33 = __this->get_airMovementSharpness_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_30, L_31, ((float)il2cpp_codegen_multiply((float)L_32, (float)L_33)), /*hidden argument*/NULL);
		G_B3_0 = L_34;
		G_B3_1 = G_B1_0;
		goto IL_00c7;
	}

IL_00c5:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_7;
		G_B3_0 = L_35;
		G_B3_1 = G_B2_0;
	}

IL_00c7:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__velocity_29(G_B3_0);
		// if (_input.JumpPressed && _jumpsLeft > 0 && time - _lastJumpTime > .4f)//!_isJumping && time - _lastGroundedTime < jumpBraceTime)
		RuntimeObject* L_36 = __this->get__input_24();
		NullCheck(L_36);
		bool L_37;
		L_37 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_JumpPressed() */, IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_il2cpp_TypeInfo_var, L_36);
		if (!L_37)
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_38 = __this->get__jumpsLeft_33();
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_0120;
		}
	}
	{
		float L_39 = ___time1;
		float L_40 = __this->get__lastJumpTime_32();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_39, (float)L_40))) > ((float)(0.400000006f)))))
		{
			goto IL_0120;
		}
	}
	{
		// _jumpsLeft--;
		int32_t L_41 = __this->get__jumpsLeft_33();
		__this->set__jumpsLeft_33(((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)));
		// _isJumping = true;
		__this->set__isJumping_30((bool)1);
		// _velocity.y = jumpForce;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_42 = __this->get_address_of__velocity_29();
		float L_43 = __this->get_jumpForce_5();
		L_42->set_y_3(L_43);
		// _lastJumpTime = time;
		float L_44 = ___time1;
		__this->set__lastJumpTime_32(L_44);
		// }
		goto IL_012d;
	}

IL_0120:
	{
		// _velocity.y = yMotion;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_45 = __this->get_address_of__velocity_29();
		float L_46 = V_5;
		L_45->set_y_3(L_46);
	}

IL_012d:
	{
		// if (groundCheck == GroundStatus.NoGround)
		int32_t L_47 = V_0;
		if ((!(((uint32_t)L_47) == ((uint32_t)2))))
		{
			goto IL_018a;
		}
	}
	{
		// if (_lastGroundCheck != GroundStatus.NoGround && _velocity.y <= 0f)
		int32_t L_48 = __this->get__lastGroundCheck_38();
		if ((((int32_t)L_48) == ((int32_t)2)))
		{
			goto IL_015c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_49 = __this->get_address_of__velocity_29();
		float L_50 = L_49->get_y_3();
		if ((!(((float)L_50) <= ((float)(0.0f)))))
		{
			goto IL_015c;
		}
	}
	{
		// _velocity.y = 0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_51 = __this->get_address_of__velocity_29();
		L_51->set_y_3((0.0f));
	}

IL_015c:
	{
		// _velocity.y -= gravityForce * (_isFalling ? 1.5f : 1f) * deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_52 = __this->get_address_of__velocity_29();
		float* L_53 = L_52->get_address_of_y_3();
		float* L_54 = L_53;
		float L_55 = *((float*)L_54);
		float L_56 = __this->get_gravityForce_6();
		bool L_57 = __this->get__isFalling_31();
		G_B13_0 = L_56;
		G_B13_1 = L_55;
		G_B13_2 = L_54;
		if (L_57)
		{
			G_B14_0 = L_56;
			G_B14_1 = L_55;
			G_B14_2 = L_54;
			goto IL_017e;
		}
	}
	{
		G_B15_0 = (1.0f);
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		G_B15_3 = G_B13_2;
		goto IL_0183;
	}

IL_017e:
	{
		G_B15_0 = (1.5f);
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
	}

IL_0183:
	{
		float L_58 = ___deltaTime0;
		*((float*)G_B15_3) = (float)((float)il2cpp_codegen_subtract((float)G_B15_2, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)G_B15_1, (float)G_B15_0)), (float)L_58))));
		// }
		goto IL_01a9;
	}

IL_018a:
	{
		// else if (time - _lastJumpTime > .1f)
		float L_59 = ___time1;
		float L_60 = __this->get__lastJumpTime_32();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_59, (float)L_60))) > ((float)(0.100000001f)))))
		{
			goto IL_01a9;
		}
	}
	{
		// _velocity.y = -15f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_61 = __this->get_address_of__velocity_29();
		L_61->set_y_3((-15.0f));
	}

IL_01a9:
	{
		// _characterController.Move(_velocity * deltaTime);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_62 = __this->get__characterController_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = __this->get__velocity_29();
		float L_64 = ___deltaTime0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_63, L_64, /*hidden argument*/NULL);
		NullCheck(L_62);
		int32_t L_66;
		L_66 = CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_62, L_65, /*hidden argument*/NULL);
		// if (CanDash(time, groundCheck, rawInputDir))
		float L_67 = ___time1;
		int32_t L_68 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_69 = V_4;
		bool L_70;
		L_70 = PlayerMovement_CanDash_m5E8BD62DE5C2D81A1A1FF6F4F2CD4BA5B6759263(__this, L_67, L_68, L_69, /*hidden argument*/NULL);
		if (!L_70)
		{
			goto IL_01d4;
		}
	}
	{
		// BeginDash(time);
		float L_71 = ___time1;
		PlayerMovement_BeginDash_mCBB9E3D2D3134900E4E759BB02AB48EF242C29AD(__this, L_71, /*hidden argument*/NULL);
	}

IL_01d4:
	{
		// if (_isDashing)
		bool L_72 = __this->get__isDashing_35();
		if (!L_72)
		{
			goto IL_01e6;
		}
	}
	{
		// PerformDash(deltaTime, time, directionVector);
		float L_73 = ___deltaTime0;
		float L_74 = ___time1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75 = V_6;
		PlayerMovement_PerformDash_m964CC8AB94C584C8C1811F28B7D00B407E243AB6(__this, L_73, L_74, L_75, /*hidden argument*/NULL);
	}

IL_01e6:
	{
		// _rotationX += -_input.MouseY * _camera.fieldOfView * mouseSensitivity  * .001f;
		float L_76 = __this->get__rotationX_28();
		RuntimeObject* L_77 = __this->get__input_24();
		NullCheck(L_77);
		float L_78;
		L_78 = InterfaceFuncInvoker0< float >::Invoke(3 /* System.Single Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_MouseY() */, IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_il2cpp_TypeInfo_var, L_77);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_79 = __this->get__camera_23();
		NullCheck(L_79);
		float L_80;
		L_80 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_79, /*hidden argument*/NULL);
		float L_81 = __this->get_mouseSensitivity_7();
		__this->set__rotationX_28(((float)il2cpp_codegen_add((float)L_76, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((-L_78)), (float)L_80)), (float)L_81)), (float)(0.00100000005f))))));
		// _rotationX = Mathf.Clamp(_rotationX, -90f, 90f);
		float L_82 = __this->get__rotationX_28();
		float L_83;
		L_83 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_82, (-90.0f), (90.0f), /*hidden argument*/NULL);
		__this->set__rotationX_28(L_83);
		// _camera.transform.localRotation = Quaternion.Euler(_rotationX, 0, 0);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_84 = __this->get__camera_23();
		NullCheck(L_84);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
		L_85 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_84, /*hidden argument*/NULL);
		float L_86 = __this->get__rotationX_28();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_87;
		L_87 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_86, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_85);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_85, L_87, /*hidden argument*/NULL);
		// var yRotation = _input.MouseX * _camera.fieldOfView * mouseSensitivity * .001f;
		RuntimeObject* L_88 = __this->get__input_24();
		NullCheck(L_88);
		float L_89;
		L_89 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_MouseX() */, IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_il2cpp_TypeInfo_var, L_88);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_90 = __this->get__camera_23();
		NullCheck(L_90);
		float L_91;
		L_91 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_90, /*hidden argument*/NULL);
		float L_92 = __this->get_mouseSensitivity_7();
		V_8 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_89, (float)L_91)), (float)L_92)), (float)(0.00100000005f)));
		// transform.rotation *= Quaternion.Euler(0, yRotation, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93;
		L_93 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94 = L_93;
		NullCheck(L_94);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_95;
		L_95 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_94, /*hidden argument*/NULL);
		float L_96 = V_8;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_97;
		L_97 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), L_96, (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_98;
		L_98 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_95, L_97, /*hidden argument*/NULL);
		NullCheck(L_94);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_94, L_98, /*hidden argument*/NULL);
		// if (_lastGroundCheck == GroundStatus.NoGround && groundCheck != GroundStatus.NoGround)
		int32_t L_99 = __this->get__lastGroundCheck_38();
		if ((!(((uint32_t)L_99) == ((uint32_t)2))))
		{
			goto IL_02c5;
		}
	}
	{
		int32_t L_100 = V_0;
		if ((((int32_t)L_100) == ((int32_t)2)))
		{
			goto IL_02c5;
		}
	}
	{
		// _isJumping = false;
		__this->set__isJumping_30((bool)0);
		// _jumpsLeft = jumps;
		int32_t L_101 = __this->get_jumps_10();
		__this->set__jumpsLeft_33(L_101);
	}

IL_02c5:
	{
		// _dashEnergy = Mathf.Clamp(
		//     _dashEnergy +
		//     (isGrounded? dashRechargeGrounded : dashRechargeAirborne)
		//     * deltaTime, 0, dashAmount);
		float L_102 = __this->get__dashEnergy_34();
		bool L_103 = V_1;
		G_B26_0 = L_102;
		G_B26_1 = __this;
		if (L_103)
		{
			G_B27_0 = L_102;
			G_B27_1 = __this;
			goto IL_02d7;
		}
	}
	{
		float L_104 = __this->get_dashRechargeAirborne_17();
		G_B28_0 = L_104;
		G_B28_1 = G_B26_0;
		G_B28_2 = G_B26_1;
		goto IL_02dd;
	}

IL_02d7:
	{
		float L_105 = __this->get_dashRechargeGrounded_16();
		G_B28_0 = L_105;
		G_B28_1 = G_B27_0;
		G_B28_2 = G_B27_1;
	}

IL_02dd:
	{
		float L_106 = ___deltaTime0;
		int32_t L_107 = __this->get_dashAmount_14();
		float L_108;
		L_108 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)G_B28_1, (float)((float)il2cpp_codegen_multiply((float)G_B28_0, (float)L_106)))), (0.0f), ((float)((float)L_107)), /*hidden argument*/NULL);
		NullCheck(G_B28_2);
		G_B28_2->set__dashEnergy_34(L_108);
		// _isFalling = _isJumping && _velocity.y < 0f;
		bool L_109 = __this->get__isJumping_30();
		G_B29_0 = __this;
		if (!L_109)
		{
			G_B30_0 = __this;
			goto IL_0313;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_110 = __this->get_address_of__velocity_29();
		float L_111 = L_110->get_y_3();
		G_B31_0 = ((((float)L_111) < ((float)(0.0f)))? 1 : 0);
		G_B31_1 = G_B29_0;
		goto IL_0314;
	}

IL_0313:
	{
		G_B31_0 = 0;
		G_B31_1 = G_B30_0;
	}

IL_0314:
	{
		NullCheck(G_B31_1);
		G_B31_1->set__isFalling_31((bool)G_B31_0);
		// _lastGroundCheck = groundCheck;
		int32_t L_112 = V_0;
		__this->set__lastGroundCheck_38(L_112);
		// _lastGroundedTime = groundCheck != GroundStatus.NoGround ? time : _lastGroundedTime;
		int32_t L_113 = V_0;
		G_B32_0 = __this;
		if ((!(((uint32_t)L_113) == ((uint32_t)2))))
		{
			G_B33_0 = __this;
			goto IL_032d;
		}
	}
	{
		float L_114 = __this->get__lastGroundedTime_40();
		G_B34_0 = L_114;
		G_B34_1 = G_B32_0;
		goto IL_032e;
	}

IL_032d:
	{
		float L_115 = ___time1;
		G_B34_0 = L_115;
		G_B34_1 = G_B33_0;
	}

IL_032e:
	{
		NullCheck(G_B34_1);
		G_B34_1->set__lastGroundedTime_40(G_B34_0);
		// }
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerMovement::CanDash(System.Single,Baracuda.Monitoring.Example.Scripts.GroundStatus,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_CanDash_m5E8BD62DE5C2D81A1A1FF6F4F2CD4BA5B6759263 (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, float ___time0, int32_t ___groundCheck1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rawInputDir2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _input.DashPressed
		//        && !_isDashing
		//        && time - _lastDashTime > minTimeBetweenDash
		//        && _dashEnergy >= 1
		//        && groundCheck == GroundStatus.NoGround
		//        && rawInputDir.normalized.magnitude > .5f;
		RuntimeObject* L_0 = __this->get__input_24();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_DashPressed() */, IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		bool L_2 = __this->get__isDashing_35();
		if (L_2)
		{
			goto IL_004d;
		}
	}
	{
		float L_3 = ___time0;
		float L_4 = __this->get__lastDashTime_36();
		float L_5 = __this->get_minTimeBetweenDash_15();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))) > ((float)L_5))))
		{
			goto IL_004d;
		}
	}
	{
		float L_6 = __this->get__dashEnergy_34();
		if ((!(((float)L_6) >= ((float)(1.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_7 = ___groundCheck1;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_004d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___rawInputDir2), /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9;
		L_9 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		return (bool)((((float)L_9) > ((float)(0.5f)))? 1 : 0);
	}

IL_004d:
	{
		return (bool)0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::BeginDash(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_BeginDash_mCBB9E3D2D3134900E4E759BB02AB48EF242C29AD (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, float ___time0, const RuntimeMethod* method)
{
	{
		// _dashEnergy -= 1;
		float L_0 = __this->get__dashEnergy_34();
		__this->set__dashEnergy_34(((float)il2cpp_codegen_subtract((float)L_0, (float)(1.0f))));
		// _lastDashTime = time;
		float L_1 = ___time0;
		__this->set__lastDashTime_36(L_1);
		// _isDashing = true;
		__this->set__isDashing_35((bool)1);
		// _dashStartTime = time;
		float L_2 = ___time0;
		__this->set__dashStartTime_37(L_2);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::PerformDash(System.Single,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_PerformDash_m964CC8AB94C584C8C1811F28B7D00B407E243AB6 (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, float ___deltaTime0, float ___time1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___directionVector2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var currentDashTimer = time - _dashStartTime;
		float L_0 = ___time1;
		float L_1 = __this->get__dashStartTime_37();
		// var progression = (time - _dashStartTime) / dashDuration;
		float L_2 = ___time1;
		float L_3 = __this->get__dashStartTime_37();
		float L_4 = __this->get_dashDuration_12();
		V_0 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_3))/(float)L_4));
		// var dashVector = directionVector *
		//                  dashForce *
		//                  dashCurve.Evaluate(progression) *
		//                  deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___directionVector2;
		float L_6 = __this->get_dashForce_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = __this->get_dashCurve_13();
		float L_9 = V_0;
		NullCheck(L_8);
		float L_10;
		L_10 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_8, L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_10, /*hidden argument*/NULL);
		float L_12 = ___deltaTime0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// _characterController.Move(dashVector);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_14 = __this->get__characterController_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_14, L_15, /*hidden argument*/NULL);
		// _velocity.y = Mathf.Clamp(_velocity.y, 2f, float.PositiveInfinity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of__velocity_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of__velocity_29();
		float L_19 = L_18->get_y_3();
		float L_20;
		L_20 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_19, (2.0f), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		L_17->set_y_3(L_20);
		// if (currentDashTimer > dashDuration)
		float L_21 = __this->get_dashDuration_12();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))) > ((float)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		// _isDashing = false;
		__this->set__isDashing_35((bool)0);
	}

IL_007d:
	{
		// }
		return;
	}
}
// Baracuda.Monitoring.Example.Scripts.GroundStatus Baracuda.Monitoring.Example.Scripts.PlayerMovement::GroundCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerMovement_GroundCheck_m037084D5B0A523C1A1E6EF5D74416FCFAAECB72C (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var position = _transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__transform_22();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		// var upDirection = _transform.up;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get__transform_22();
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// hitCount = Physics.OverlapSphereNonAlloc(position, groundCheckRadius, _raycastHits, groundMask,
		//     QueryTriggerInteraction.Ignore);
		float L_4 = __this->get_groundCheckRadius_19();
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_5 = __this->get__raycastHits_41();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_6 = __this->get_groundMask_18();
		int32_t L_7;
		L_7 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_6, /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = Physics_OverlapSphereNonAlloc_mD1A616CEF8B7C991A9E56B7E17FF5BCF7C4B8431(L_1, L_4, L_5, L_7, 1, /*hidden argument*/NULL);
		((PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64_il2cpp_TypeInfo_var))->set_hitCount_39(L_8);
		// for (var i = 0; i < hitCount; i++)
		V_1 = 0;
		goto IL_0062;
	}

IL_003d:
	{
		// if (Vector3.Dot(_raycastHits[i].transform.up, upDirection) >= .95f)
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_9 = __this->get__raycastHits_41();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		float L_16;
		L_16 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_14, L_15, /*hidden argument*/NULL);
		if ((!(((float)L_16) >= ((float)(0.949999988f)))))
		{
			goto IL_005e;
		}
	}
	{
		// return GroundStatus.StableGround;
		return (int32_t)(0);
	}

IL_005e:
	{
		// for (var i = 0; i < hitCount; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0062:
	{
		// for (var i = 0; i < hitCount; i++)
		int32_t L_18 = V_1;
		int32_t L_19 = ((PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64_il2cpp_TypeInfo_var))->get_hitCount_39();
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_003d;
		}
	}
	{
		// return hitCount > 0 ? GroundStatus.UnstableGround : GroundStatus.NoGround;
		int32_t L_20 = ((PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64_il2cpp_TypeInfo_var))->get_hitCount_39();
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0074:
	{
		return (int32_t)(1);
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mB1B2E646D69B0D684FDE112E5F60CDE4AF44CB34 (PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float movementSpeed = 16.5f;
		__this->set_movementSpeed_4((16.5f));
		// [SerializeField] private float jumpForce = 8f;
		__this->set_jumpForce_5((8.0f));
		// [SerializeField] private float gravityForce = 20f;
		__this->set_gravityForce_6((20.0f));
		// [SerializeField] private float mouseSensitivity = 2f;
		__this->set_mouseSensitivity_7((2.0f));
		// [SerializeField] private float airMovementSharpness = 1f;
		__this->set_airMovementSharpness_8((1.0f));
		// [SerializeField] private float inputSharpness = 10f;
		__this->set_inputSharpness_9((10.0f));
		// [SerializeField] private int jumps = 3;
		__this->set_jumps_10(3);
		// [SerializeField] [Range(0, 100f)] private float dashForce = 22f;
		__this->set_dashForce_11((22.0f));
		// [SerializeField] [Range(0, 1f)] private float dashDuration = 0.03f;
		__this->set_dashDuration_12((0.0299999993f));
		// [SerializeField] [Range(0, 10)] private int dashAmount = 3;
		__this->set_dashAmount_14(3);
		// [SerializeField] [Range(0, .5f)] private float minTimeBetweenDash = .2f;
		__this->set_minTimeBetweenDash_15((0.200000003f));
		// [SerializeField] [Range(0, 3f)] private float dashRechargeGrounded = 2f;
		__this->set_dashRechargeGrounded_16((2.0f));
		// [SerializeField] [Range(0, 3f)] private float dashRechargeAirborne = .5f;
		__this->set_dashRechargeAirborne_17((0.5f));
		// [SerializeField] private float groundCheckRadius = .4f;
		__this->set_groundCheckRadius_19((0.400000006f));
		// [SerializeField] private float killHeight = -50f;
		__this->set_killHeight_20((-50.0f));
		// private Vector3 _velocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set__velocity_29(L_0);
		// private readonly Collider[] _raycastHits = new Collider[4];
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_1 = (ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486*)(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486*)SZArrayNew(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set__raycastHits_41(L_1);
		MonitoredBehaviour__ctor_mB73166E89617EBCCC675A64019BA2DC2853799D3(__this, /*hidden argument*/NULL);
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
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::add_OnAmmoChanged(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_add_OnAmmoChanged_m84265F8EE4EF4009851CFA31A0B4EE385B7D3EEA (PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * __this, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_2 = NULL;
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = __this->get_OnAmmoChanged_18();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var));
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** L_5 = __this->get_address_of_OnAmmoChanged_18();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_6 = V_2;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *>((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_9 = V_0;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_9) == ((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::remove_OnAmmoChanged(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_remove_OnAmmoChanged_mE9ED1479E35314B35ACCAE2F191A1F82A1B1DE5E (PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * __this, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * V_2 = NULL;
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_0 = __this->get_OnAmmoChanged_18();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)CastclassSealed((RuntimeObject*)L_4, Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var));
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** L_5 = __this->get_address_of_OnAmmoChanged_18();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_6 = V_2;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_7 = V_1;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *>((Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_9 = V_0;
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_9) == ((RuntimeObject*)(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String Baracuda.Monitoring.Example.Scripts.PlayerWeapon::CurrentAmmunitionProcessor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerWeapon_CurrentAmmunitionProcessor_mB32DB070E856934A4AB41E81DACB24FD1D467C98 (PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * __this, int32_t ___current0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32B3E6D6F1633A27671CD1FFEC132F2C3B158F79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var sb = StringBuilderPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(StringBuilderPool_t061FE9EFAD2B26036114FC24B06CD0316D5EF602_il2cpp_TypeInfo_var);
		StringBuilder_t * L_0;
		L_0 = StringBuilderPool_Get_mAE9C8CA2ED8D833973655A636A3B4F943DE2517D(/*hidden argument*/NULL);
		// sb.Append("Ammunition: ");
		StringBuilder_t * L_1 = L_0;
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral32B3E6D6F1633A27671CD1FFEC132F2C3B158F79, /*hidden argument*/NULL);
		// sb.Append(current);
		StringBuilder_t * L_3 = L_1;
		int32_t L_4 = ___current0;
		NullCheck(L_3);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD(L_3, L_4, /*hidden argument*/NULL);
		// sb.Append(" / ");
		StringBuilder_t * L_6 = L_3;
		NullCheck(L_6);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_6, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, /*hidden argument*/NULL);
		// sb.Append(ammunition);
		StringBuilder_t * L_8 = L_6;
		int32_t L_9 = __this->get_ammunition_10();
		NullCheck(L_8);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD(L_8, L_9, /*hidden argument*/NULL);
		// return StringBuilderPool.Release(sb);
		String_t* L_11;
		L_11 = StringBuilderPool_Release_m0A1C306DDA21B2202A32EC9C8D498C4FC864E12A(L_8, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_Awake_mC9B1EE16D46A2BCF11C7079A8BDCCE94E9B54C1D (PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC2EEB227949FF6517A085ECC9E0FC1F8897A5546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_mE998DF92240DB3AE14F41F68031438A8A3A010BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B2_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B1_0 = NULL;
	{
		// base.Awake();
		MonitoredBehaviour_Awake_mEA06DD075192578B6C82D69FA8C4445EC21351D8(__this, /*hidden argument*/NULL);
		// _input = GetComponent<IPlayerInput>();
		RuntimeObject* L_0;
		L_0 = Component_GetComponent_TisIPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_mE998DF92240DB3AE14F41F68031438A8A3A010BD(__this, /*hidden argument*/Component_GetComponent_TisIPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_mE998DF92240DB3AE14F41F68031438A8A3A010BD_RuntimeMethod_var);
		__this->set__input_21(L_0);
		// _camera = GetComponentInChildren<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Component_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC2EEB227949FF6517A085ECC9E0FC1F8897A5546(__this, /*hidden argument*/Component_GetComponentInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC2EEB227949FF6517A085ECC9E0FC1F8897A5546_RuntimeMethod_var);
		__this->set__camera_22(L_1);
		// _currentAmmunition = ammunition;
		int32_t L_2 = __this->get_ammunition_10();
		__this->set__currentAmmunition_17(L_2);
		// OnAmmoChanged?.Invoke(_currentAmmunition);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_3 = __this->get_OnAmmoChanged_18();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0035;
		}
	}
	{
		return;
	}

IL_0035:
	{
		int32_t L_5 = __this->get__currentAmmunition_17();
		NullCheck(G_B2_0);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(G_B2_0, L_5, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_Update_m310B385DFAB68E10271CDDDF491A4EAEE4EEB53F (PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * G_B2_0 = NULL;
	PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * G_B3_1 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B11_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B10_0 = NULL;
	{
		// var deltaTime = Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = L_0;
		// PreformRaycast();
		PlayerWeapon_PreformRaycast_m33A30B05C73574AEAEEB34FD4E43CF1DA0E4A457(__this, /*hidden argument*/NULL);
		// _targetFOV = _input.SecondaryFirePressed ? zoomFOV : defaultFOV;
		RuntimeObject* L_1 = __this->get__input_21();
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_SecondaryFirePressed() */, IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_il2cpp_TypeInfo_var, L_1);
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0022;
		}
	}
	{
		float L_3 = __this->get_defaultFOV_14();
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0022:
	{
		float L_4 = __this->get_zoomFOV_15();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__targetFOV_20(G_B3_0);
		// _camera.fieldOfView = Mathf.Lerp(_camera.fieldOfView, _targetFOV, fovSharpness * deltaTime);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = __this->get__camera_22();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = __this->get__camera_22();
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get__targetFOV_20();
		float L_9 = __this->get_fovSharpness_16();
		float L_10 = V_0;
		float L_11;
		L_11 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_7, L_8, ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49(L_5, L_11, /*hidden argument*/NULL);
		// var time = Time.time;
		float L_12;
		L_12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_1 = L_12;
		// if (_input.PrimaryFirePressed && (fullAutomatic || _canFireSemiAutomatic) && _currentAmmunition > 0 && time - _lastFireTime > 1 / shotsPerSecond)
		RuntimeObject* L_13 = __this->get__input_21();
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_PrimaryFirePressed() */, IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_il2cpp_TypeInfo_var, L_13);
		if (!L_14)
		{
			goto IL_013c;
		}
	}
	{
		bool L_15 = __this->get_fullAutomatic_5();
		if (L_15)
		{
			goto IL_007f;
		}
	}
	{
		bool L_16 = __this->get__canFireSemiAutomatic_23();
		if (!L_16)
		{
			goto IL_013c;
		}
	}

IL_007f:
	{
		int32_t L_17 = __this->get__currentAmmunition_17();
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_013c;
		}
	}
	{
		float L_18 = V_1;
		float L_19 = __this->get__lastFireTime_19();
		float L_20 = __this->get_shotsPerSecond_6();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_18, (float)L_19))) > ((float)((float)((float)(1.0f)/(float)L_20))))))
		{
			goto IL_013c;
		}
	}
	{
		// _canFireSemiAutomatic = false;
		__this->set__canFireSemiAutomatic_23((bool)0);
		// _lastFireTime = time;
		float L_21 = V_1;
		__this->set__lastFireTime_19(L_21);
		// for (var i = 0; i < bulletsPerShot; i++)
		V_2 = 0;
		goto IL_0130;
	}

IL_00b6:
	{
		// _currentAmmunition--;
		int32_t L_22 = __this->get__currentAmmunition_17();
		__this->set__currentAmmunition_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)));
		// OnAmmoChanged?.Invoke(_currentAmmunition);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_23 = __this->get_OnAmmoChanged_18();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_24 = L_23;
		G_B10_0 = L_24;
		if (L_24)
		{
			G_B11_0 = L_24;
			goto IL_00d0;
		}
	}
	{
		goto IL_00db;
	}

IL_00d0:
	{
		int32_t L_25 = __this->get__currentAmmunition_17();
		NullCheck(G_B11_0);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(G_B11_0, L_25, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
	}

IL_00db:
	{
		// var projectile = projectilePool.GetProjectileFromPool();
		ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904 * L_26 = __this->get_projectilePool_13();
		NullCheck(L_26);
		Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * L_27;
		L_27 = ProjectilePool_GetProjectileFromPool_m69C49741BD21EBB9CA809220B90A40F6E83E4E0D(L_26, /*hidden argument*/NULL);
		// projectile.Setup(
		//     position: projectileSpawnPosition.position,
		//     rotation: projectileSpawnPosition.rotation,
		//     damage: damage,
		//     force: projectileSpawnPosition.forward * bulletForce,
		//     spread: bulletSpread);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = __this->get_projectileSpawnPosition_12();
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_projectileSpawnPosition_12();
		NullCheck(L_30);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31;
		L_31 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_30, /*hidden argument*/NULL);
		float L_32 = __this->get_damage_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = __this->get_projectileSpawnPosition_12();
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_33, /*hidden argument*/NULL);
		float L_35 = __this->get_bulletForce_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, L_35, /*hidden argument*/NULL);
		float L_37 = __this->get_bulletSpread_8();
		NullCheck(L_27);
		Projectile_Setup_m0FDFEBA5FD0B890995873448E373AF4DF1D76669(L_27, L_29, L_31, L_32, L_36, L_37, /*hidden argument*/NULL);
		// if (_currentAmmunition <= 0)
		int32_t L_38 = __this->get__currentAmmunition_17();
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_013c;
		}
	}
	{
		// for (var i = 0; i < bulletsPerShot; i++)
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_0130:
	{
		// for (var i = 0; i < bulletsPerShot; i++)
		int32_t L_40 = V_2;
		int32_t L_41 = __this->get_bulletsPerShot_7();
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_00b6;
		}
	}

IL_013c:
	{
		// if (!_input.PrimaryFirePressed)
		RuntimeObject* L_42 = __this->get__input_21();
		NullCheck(L_42);
		bool L_43;
		L_43 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Baracuda.Monitoring.Example.Scripts.IPlayerInput::get_PrimaryFirePressed() */, IPlayerInput_t3A20803D86B406914109FBF1EC9FCE3798482951_il2cpp_TypeInfo_var, L_42);
		if (L_43)
		{
			goto IL_0150;
		}
	}
	{
		// _canFireSemiAutomatic = true;
		__this->set__canFireSemiAutomatic_23((bool)1);
	}

IL_0150:
	{
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::PreformRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_PreformRaycast_m33A30B05C73574AEAEEB34FD4E43CF1DA0E4A457 (PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * __this, const RuntimeMethod* method)
{
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var ray = _camera.ViewportPointToRay(new Vector3(0.5F, 0.5F, 0));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get__camera_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_2;
		L_2 = Camera_ViewportPointToRay_mA5F17F1603768A23286A637F706B612BCEF8D2C8(L_0, L_1, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out var hit, layerMask))
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_3 = __this->get_layerMask_11();
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_2, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), ((float)((float)L_4)), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// projectileSpawnPosition.LookAt(hit.point);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_projectileSpawnPosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0047:
	{
		// projectileSpawnPosition.localRotation = Quaternion.identity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_projectileSpawnPosition_12();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::ReplenishAmmunition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_ReplenishAmmunition_m1BFF7B103658893DB57815EF9214F5509CCDB636 (PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B2_0 = NULL;
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * G_B1_0 = NULL;
	{
		// _currentAmmunition = ammunition;
		int32_t L_0 = __this->get_ammunition_10();
		__this->set__currentAmmunition_17(L_0);
		// OnAmmoChanged?.Invoke(_currentAmmunition);
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_1 = __this->get_OnAmmoChanged_18();
		Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		int32_t L_3 = __this->get__currentAmmunition_17();
		NullCheck(G_B2_0);
		Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301(G_B2_0, L_3, /*hidden argument*/Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerWeapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon__ctor_mFF59709AA8DA1BB4919DD82C985E09EDF7B2813B (PlayerWeapon_tBC390285C6FB8CEA9021A10D9364C11B604CAF61 * __this, const RuntimeMethod* method)
{
	{
		// [Header("Primary")] [SerializeField] private float damage = 100f;
		__this->set_damage_4((100.0f));
		// [SerializeField] private bool fullAutomatic = true;
		__this->set_fullAutomatic_5((bool)1);
		// [SerializeField] private float shotsPerSecond = 7.5f;
		__this->set_shotsPerSecond_6((7.5f));
		// [SerializeField] private int bulletsPerShot = 3;
		__this->set_bulletsPerShot_7(3);
		// [SerializeField] private float bulletSpread = 50f;
		__this->set_bulletSpread_8((50.0f));
		// [SerializeField] private int ammunition = 15;
		__this->set_ammunition_10(((int32_t)15));
		// [SerializeField] private float defaultFOV = 90f;
		__this->set_defaultFOV_14((90.0f));
		// [SerializeField] private float zoomFOV = 40f;
		__this->set_zoomFOV_15((40.0f));
		// [SerializeField] private float fovSharpness = 10f;
		__this->set_fovSharpness_16((10.0f));
		// private bool _canFireSemiAutomatic = true;
		__this->set__canFireSemiAutomatic_23((bool)1);
		MonitoredBehaviour__ctor_mB73166E89617EBCCC675A64019BA2DC2853799D3(__this, /*hidden argument*/NULL);
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
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Awake_m0DEBDCDF892A9090D87DD7C47546C4DB0D303452 (Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set__rigidbody_4(L_0);
		// _transform = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		__this->set__transform_6(L_1);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile::Setup(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Setup_m0FDFEBA5FD0B890995873448E373AF4DF1D76669 (Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, float ___damage2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force3, float ___spread4, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// _transform.rotation = rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get__transform_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = ___rotation1;
		NullCheck(L_1);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_1, L_2, /*hidden argument*/NULL);
		// _transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get__transform_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___position0;
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_4, /*hidden argument*/NULL);
		// _damage = damage;
		float L_5 = ___damage2;
		__this->set__damage_5(L_5);
		// _rigidbody.velocity = Vector3.zero;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_6 = __this->get__rigidbody_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_6);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_6, L_7, /*hidden argument*/NULL);
		// var randomX = Random.Range(-spread, spread);
		float L_8 = ___spread4;
		float L_9 = ___spread4;
		float L_10;
		L_10 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_8)), L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// var randomY = Random.Range(-spread, spread);
		float L_11 = ___spread4;
		float L_12 = ___spread4;
		float L_13;
		L_13 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_11)), L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// var randomZ = Random.Range(-spread, spread);
		float L_14 = ___spread4;
		float L_15 = ___spread4;
		float L_16;
		L_16 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_14)), L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// var randomVector = new Vector3(randomX, randomY, randomZ);
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_2;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), L_17, L_18, L_19, /*hidden argument*/NULL);
		// _rigidbody.AddForce(force + randomVector);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_20 = __this->get__rigidbody_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = ___force3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_20, L_23, /*hidden argument*/NULL);
		// StartCoroutine(SecondForce(force));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = ___force3;
		RuntimeObject* L_25;
		L_25 = Projectile_SecondForce_m432AB4312B44AC9B7E6231A2BFEE78249B9A0E4A(__this, L_24, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_26;
		L_26 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_25, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.Projectile::SecondForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Projectile_SecondForce_m432AB4312B44AC9B7E6231A2BFEE78249B9A0E4A (Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF * L_0 = (U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF *)il2cpp_codegen_object_new(U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF_il2cpp_TypeInfo_var);
		U3CSecondForceU3Ed__6__ctor_m3763E37212C6754051A13344D10F6F10FA12DCE9(L_0, 0, /*hidden argument*/NULL);
		U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF * L_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___force0;
		NullCheck(L_2);
		L_2->set_force_3(L_3);
		return L_2;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnCollisionEnter_m1F0C551EE4CAB47CAE85B6190DAD21042FCF07F8 (Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIDamageable_t6C137867CAE20F10B8C7B527F191D64B41EDF2EE_mAA049B3F4155E65F1D65CE679B4E0A96409F9AA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDamageable_t6C137867CAE20F10B8C7B527F191D64B41EDF2EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var component = collision.gameObject.GetComponent<IDamageable>();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = GameObject_GetComponent_TisIDamageable_t6C137867CAE20F10B8C7B527F191D64B41EDF2EE_mAA049B3F4155E65F1D65CE679B4E0A96409F9AA9(L_1, /*hidden argument*/GameObject_GetComponent_TisIDamageable_t6C137867CAE20F10B8C7B527F191D64B41EDF2EE_mAA049B3F4155E65F1D65CE679B4E0A96409F9AA9_RuntimeMethod_var);
		// component?.TakeDamage(_damage);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0011;
		}
	}
	{
		goto IL_001c;
	}

IL_0011:
	{
		float L_4 = __this->get__damage_5();
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void Baracuda.Monitoring.Example.Scripts.IDamageable::TakeDamage(System.Single) */, IDamageable_t6C137867CAE20F10B8C7B527F191D64B41EDF2EE_il2cpp_TypeInfo_var, G_B2_0, L_4);
	}

IL_001c:
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m9714D71698CA6567C7ECE55CB6827A5AF21974E6 (Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__cctor_m49ABE2A6F5C374FF85A109E4621FCECBD7CB5A37 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly WaitForSeconds waitForSeconds = new WaitForSeconds(.05f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_0 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_0, (0.0500000007f), /*hidden argument*/NULL);
		((Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_StaticFields*)il2cpp_codegen_static_fields_for(Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_il2cpp_TypeInfo_var))->set_waitForSeconds_7(L_0);
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
// System.Void Baracuda.Monitoring.Example.Scripts.ProjectilePool::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectilePool_Awake_m7FD195A84F07576C404565C1D5753189A3D05064 (ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisProjectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_mAB9CFF6F69AD2F11B8D06D80B8B79C0EB88E79AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mFFA0B04310B155AE0014FEA27DD765C79FC241B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * V_1 = NULL;
	{
		// for (var i = 0; i < projectileCount; i++)
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		// var projectile = Instantiate(projectilePrefab, Vector3.zero, Quaternion.identity);
		Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * L_0 = __this->get_projectilePrefab_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * L_3;
		L_3 = Object_Instantiate_TisProjectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_mAB9CFF6F69AD2F11B8D06D80B8B79C0EB88E79AD(L_0, L_1, L_2, /*hidden argument*/Object_Instantiate_TisProjectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_mAB9CFF6F69AD2F11B8D06D80B8B79C0EB88E79AD_RuntimeMethod_var);
		V_1 = L_3;
		// projectile.gameObject.SetActive(false);
		Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// _projectilePool.Enqueue(projectile);
		Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 * L_6 = __this->get__projectilePool_6();
		Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * L_7 = V_1;
		NullCheck(L_6);
		Queue_1_Enqueue_mFFA0B04310B155AE0014FEA27DD765C79FC241B7(L_6, L_7, /*hidden argument*/Queue_1_Enqueue_mFFA0B04310B155AE0014FEA27DD765C79FC241B7_RuntimeMethod_var);
		// for (var i = 0; i < projectileCount; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0036:
	{
		// for (var i = 0; i < projectileCount; i++)
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_projectileCount_5();
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// Baracuda.Monitoring.Example.Scripts.Projectile Baracuda.Monitoring.Example.Scripts.ProjectilePool::GetProjectileFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * ProjectilePool_GetProjectileFromPool_m69C49741BD21EBB9CA809220B90A40F6E83E4E0D (ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mC36B1C4D2A0FCBD11D5241607DB0BA454635C4AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mFFA0B04310B155AE0014FEA27DD765C79FC241B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * V_0 = NULL;
	{
		// var projectile = _projectilePool.Dequeue();
		Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 * L_0 = __this->get__projectilePool_6();
		NullCheck(L_0);
		Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * L_1;
		L_1 = Queue_1_Dequeue_mC36B1C4D2A0FCBD11D5241607DB0BA454635C4AB(L_0, /*hidden argument*/Queue_1_Dequeue_mC36B1C4D2A0FCBD11D5241607DB0BA454635C4AB_RuntimeMethod_var);
		V_0 = L_1;
		// _projectilePool.Enqueue(projectile);
		Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 * L_2 = __this->get__projectilePool_6();
		Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * L_3 = V_0;
		NullCheck(L_2);
		Queue_1_Enqueue_mFFA0B04310B155AE0014FEA27DD765C79FC241B7(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_mFFA0B04310B155AE0014FEA27DD765C79FC241B7_RuntimeMethod_var);
		// return projectile;
		Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * L_4 = V_0;
		return L_4;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.ProjectilePool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectilePool__ctor_mF2BA358D26A2521177B74A27531A3095A8FC7B63 (ProjectilePool_t1ED478271BC2076F3E6923C88DEE2C0F5BD34904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCF6641FF23152EE5C64B5F532CB722CAC5BAEADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private int projectileCount = 100;
		__this->set_projectileCount_5(((int32_t)100));
		// private readonly Queue<Projectile> _projectilePool = new Queue<Projectile>();
		Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 * L_0 = (Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6 *)il2cpp_codegen_object_new(Queue_1_tACF5022BD68B5D5D02BD4D0531DE3FB91901CBC6_il2cpp_TypeInfo_var);
		Queue_1__ctor_mCF6641FF23152EE5C64B5F532CB722CAC5BAEADB(L_0, /*hidden argument*/Queue_1__ctor_mCF6641FF23152EE5C64B5F532CB722CAC5BAEADB_RuntimeMethod_var);
		__this->set__projectilePool_6(L_0);
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
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingTarget_Start_m0B307E0582A01E4B46A93F7C105060FA8E41D674 (ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set__animator_10(L_0);
		// _currentHealth = health;
		float L_1 = __this->get_health_4();
		__this->set__currentHealth_8(L_1);
		// }
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingTarget_TakeDamage_mC989782C3A5973D83004E31B39C249CB38501D2E (ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * __this, float ___damage0, const RuntimeMethod* method)
{
	{
		// if (_isAlive)
		bool L_0 = __this->get__isAlive_7();
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		// _currentHealth -= damage;
		float L_1 = __this->get__currentHealth_8();
		float L_2 = ___damage0;
		__this->set__currentHealth_8(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// if (_currentHealth > 0)
		float L_3 = __this->get__currentHealth_8();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// return;
		return;
	}

IL_0024:
	{
		// _currentHealth = 0;
		__this->set__currentHealth_8((0.0f));
		// StartCoroutine(CooldownCoroutine());
		RuntimeObject* L_4;
		L_4 = ShootingTarget_CooldownCoroutine_m0A1A03C2DED0403109BE6A05390C3B7F25116F2D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Baracuda.Monitoring.Example.Scripts.ShootingTarget::CooldownCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShootingTarget_CooldownCoroutine_m0A1A03C2DED0403109BE6A05390C3B7F25116F2D (ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C * L_0 = (U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C *)il2cpp_codegen_object_new(U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C_il2cpp_TypeInfo_var);
		U3CCooldownCoroutineU3Ed__11__ctor_m4E6E5A58ED394D365F04F424DC20EFB0D8734CC4(L_0, 0, /*hidden argument*/NULL);
		U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingTarget__ctor_mC8C9314D7F006BC73F15A974104428902805DDE7 (ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float health = 200;
		__this->set_health_4((200.0f));
		// [SerializeField] private float recoverCooldownMin = 1f;
		__this->set_recoverCooldownMin_5((1.0f));
		// [SerializeField] private float recoverCooldownMax = 4f;
		__this->set_recoverCooldownMax_6((4.0f));
		// private bool _isAlive = true;
		__this->set__isAlive_7((bool)1);
		MonitoredBehaviour__ctor_mB73166E89617EBCCC675A64019BA2DC2853799D3(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingTarget__cctor_mB05BD819BA9BD06EFB1C926C410294BBC9786AFD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral228AB9E61C52401E2BCC03F161ECA5B69A14DC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F34472FD1EC18AB899F5BD0C1EA11201795341);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int knockdown = Animator.StringToHash("knockdown");
		int32_t L_0;
		L_0 = Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668(_stringLiteral228AB9E61C52401E2BCC03F161ECA5B69A14DC54, /*hidden argument*/NULL);
		((ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_StaticFields*)il2cpp_codegen_static_fields_for(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_il2cpp_TypeInfo_var))->set_knockdown_11(L_0);
		// private static readonly int recover = Animator.StringToHash("recover");
		int32_t L_1;
		L_1 = Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668(_stringLiteral41F34472FD1EC18AB899F5BD0C1EA11201795341, /*hidden argument*/NULL);
		((ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_StaticFields*)il2cpp_codegen_static_fields_for(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_il2cpp_TypeInfo_var))->set_recover_12(L_1);
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
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__5__ctor_m20BA4DF1F73B6D9FF489ED13CD125218949D51E4 (U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__5_System_IDisposable_Dispose_mD6BDAD5E1BFF0FBE71D47E1DBC7B6A154225058D (U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCooldownCoroutineU3Ed__5_MoveNext_mBC8948F61E4B8628C1C2DBDDFE032F0DF36D5030 (U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _isActive = false;
		AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set__isActive_6((bool)0);
		// ammunitionMesh.SetActive(false);
		AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_ammunitionMesh_5();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// _cooldown = cooldown;
		AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * L_7 = V_1;
		AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_cooldown_4();
		NullCheck(L_7);
		L_7->set__cooldown_7(L_9);
		goto IL_0068;
	}

IL_003f:
	{
		// _cooldown -= Time.deltaTime;
		AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * L_10 = V_1;
		AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get__cooldown_7();
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set__cooldown_7(((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0061:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0068:
	{
		// while (_cooldown > 0)
		AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->get__cooldown_7();
		if ((((float)L_15) > ((float)(0.0f))))
		{
			goto IL_003f;
		}
	}
	{
		// _cooldown = 0;
		AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * L_16 = V_1;
		NullCheck(L_16);
		L_16->set__cooldown_7((0.0f));
		// ammunitionMesh.SetActive(true);
		AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * L_17 = V_1;
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = L_17->get_ammunitionMesh_5();
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// _isActive = true;
		AmmunitionPack_t6A853C229892BB9495055AED64878D0B80364FE8 * L_19 = V_1;
		NullCheck(L_19);
		L_19->set__isActive_6((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCooldownCoroutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m010750ECF34822E42B69E0CB98448F84A5225704 (U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_mA87BC9259E84C7B65772C65C05C3015B70BE88C2 (U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCooldownCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_mA87BC9259E84C7B65772C65C05C3015B70BE88C2_RuntimeMethod_var)));
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.AmmunitionPack/<CooldownCoroutine>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCooldownCoroutineU3Ed__5_System_Collections_IEnumerator_get_Current_m65C331B692374E9C18124E1AD18BD4E15D98F7F8 (U3CCooldownCoroutineU3Ed__5_t4245AE2D28B82B5BA2D1EB72333A9FCBD78BE352 * __this, const RuntimeMethod* method)
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
// System.Void Baracuda.Monitoring.Example.Scripts.GenericsExample/IntValueObject::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntValueObject__ctor_m75C31654E5D218171CBBC4357E4F5C491F1B7593 (IntValueObject_t046547CD0EB5D55C4EC9DE796F9194D2F71D8776 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueObject_1__ctor_m27B95BD763C34EE90C81FD685FE77EE2D16DAD04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueObject_1_set_Value_m47266E8B40EFD980D319546E9D7EE5E57895EE78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IntValueObject(int value)
		ValueObject_1__ctor_m27B95BD763C34EE90C81FD685FE77EE2D16DAD04(__this, /*hidden argument*/ValueObject_1__ctor_m27B95BD763C34EE90C81FD685FE77EE2D16DAD04_RuntimeMethod_var);
		// Value = value;
		int32_t L_0 = ___value0;
		ValueObject_1_set_Value_m47266E8B40EFD980D319546E9D7EE5E57895EE78_inline(__this, L_0, /*hidden argument*/ValueObject_1_set_Value_m47266E8B40EFD980D319546E9D7EE5E57895EE78_RuntimeMethod_var);
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
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__41__ctor_mA58D27BE8DD5B9EDCEDB50DE0E498685893A3C91 (U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__41::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__41_System_IDisposable_Dispose_m656C5FE1DFA36C6561B05D6CCD68C574C01967F5 (U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__41_MoveNext_mCE346C57CC245C25E5174F34B39A01B1F4978BF0 (U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * V_1 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(1, /*hidden argument*/NULL);
		// Cursor.visible = false;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)0, /*hidden argument*/NULL);
		// var self = transform;
		PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * L_4 = V_1;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// _spawnPosition = self.position;
		PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * L_6 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = V_2;
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set__spawnPosition_25(L_8);
		// _spawnRotation = self.rotation;
		PlayerMovement_tFB1BC97773DB8CA0EACDBF31E5FBC1756D4C3F64 * L_9 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_2;
		NullCheck(L_10);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set__spawnRotation_26(L_11);
		// }
		return (bool)0;
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__41::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__41_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m52D153BB3AEF5E448BF9F291654A166312561609 (U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__41::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__41_System_Collections_IEnumerator_Reset_mFABFF37F4F846B9A64162D2AF257DBD4CCF400DB (U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__41_System_Collections_IEnumerator_Reset_mFABFF37F4F846B9A64162D2AF257DBD4CCF400DB_RuntimeMethod_var)));
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.PlayerMovement/<Start>d__41::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__41_System_Collections_IEnumerator_get_Current_m8D776CC44CDF999EF6DC2386861A188FF26C3E63 (U3CStartU3Ed__41_tA39C3B997452C080643E928772EDB686B58E3BE5 * __this, const RuntimeMethod* method)
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
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSecondForceU3Ed__6__ctor_m3763E37212C6754051A13344D10F6F10FA12DCE9 (U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSecondForceU3Ed__6_System_IDisposable_Dispose_m76CEBC6D0B3072102896AD74E297AF3256C87ED3 (U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSecondForceU3Ed__6_MoveNext_m3F73EC1936DEAD6984DAC64C07432668A53D725F (U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return waitForSeconds;
		IL2CPP_RUNTIME_CLASS_INIT(Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_il2cpp_TypeInfo_var);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = ((Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_StaticFields*)il2cpp_codegen_static_fields_for(Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E_il2cpp_TypeInfo_var))->get_waitForSeconds_7();
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _rigidbody.AddForce(force);
		Projectile_tD1749A3CCFFB72ECCA63B56868A45FF401AA3E4E * L_5 = V_1;
		NullCheck(L_5);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_6 = L_5->get__rigidbody_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_force_3();
		NullCheck(L_6);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_6, L_7, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSecondForceU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB66E4AE1583B1FC2E17C0FF2DF11594B8A4349A1 (U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSecondForceU3Ed__6_System_Collections_IEnumerator_Reset_mAEF7C04C27FA6DD4E283754B9D664995C698D4C3 (U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSecondForceU3Ed__6_System_Collections_IEnumerator_Reset_mAEF7C04C27FA6DD4E283754B9D664995C698D4C3_RuntimeMethod_var)));
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.Projectile/<SecondForce>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSecondForceU3Ed__6_System_Collections_IEnumerator_get_Current_mE1AB0FBBC08AE011E00903B8E16C5B38CA97B001 (U3CSecondForceU3Ed__6_t75208167407A9A068FD4B8F1F71F5BB607FA97CF * __this, const RuntimeMethod* method)
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
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__11__ctor_m4E6E5A58ED394D365F04F424DC20EFB0D8734CC4 (U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__11_System_IDisposable_Dispose_m966D0A982CF094E14A4802505AF8F1AB848A1C24 (U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCooldownCoroutineU3Ed__11_MoveNext_m39664D5D21406EA7F1418A555FEAF608D3AFA686 (U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0070;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _isAlive = false;
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set__isAlive_7((bool)0);
		// _animator.SetTrigger(knockdown);
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_5 = V_1;
		NullCheck(L_5);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = L_5->get__animator_10();
		IL2CPP_RUNTIME_CLASS_INIT(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_il2cpp_TypeInfo_var);
		int32_t L_7 = ((ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_StaticFields*)il2cpp_codegen_static_fields_for(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_il2cpp_TypeInfo_var))->get_knockdown_11();
		NullCheck(L_6);
		Animator_SetTrigger_m081FDF5695B938E2DB858A0DBDC38C2F48C55B28(L_6, L_7, /*hidden argument*/NULL);
		// _cooldown = Random.Range(recoverCooldownMin, recoverCooldownMax);
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_8 = V_1;
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_recoverCooldownMin_5();
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get_recoverCooldownMax_6();
		float L_13;
		L_13 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set__cooldown_9(L_13);
		goto IL_0077;
	}

IL_004e:
	{
		// _cooldown -= Time.deltaTime;
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_14 = V_1;
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->get__cooldown_9();
		float L_17;
		L_17 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set__cooldown_9(((float)il2cpp_codegen_subtract((float)L_16, (float)L_17)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0070:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0077:
	{
		// while (_cooldown > 0)
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->get__cooldown_9();
		if ((((float)L_19) > ((float)(0.0f))))
		{
			goto IL_004e;
		}
	}
	{
		// _cooldown = 0;
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_20 = V_1;
		NullCheck(L_20);
		L_20->set__cooldown_9((0.0f));
		// _animator.SetTrigger(recover);
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_21 = V_1;
		NullCheck(L_21);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_22 = L_21->get__animator_10();
		IL2CPP_RUNTIME_CLASS_INIT(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_il2cpp_TypeInfo_var);
		int32_t L_23 = ((ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_StaticFields*)il2cpp_codegen_static_fields_for(ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23_il2cpp_TypeInfo_var))->get_recover_12();
		NullCheck(L_22);
		Animator_SetTrigger_m081FDF5695B938E2DB858A0DBDC38C2F48C55B28(L_22, L_23, /*hidden argument*/NULL);
		// _currentHealth = health;
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_24 = V_1;
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_25 = V_1;
		NullCheck(L_25);
		float L_26 = L_25->get_health_4();
		NullCheck(L_24);
		L_24->set__currentHealth_8(L_26);
		// _isAlive = true;
		ShootingTarget_t0324C1929367394182037F3744F22CC1FD6D4E23 * L_27 = V_1;
		NullCheck(L_27);
		L_27->set__isAlive_7((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCooldownCoroutineU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDCC8409AA5C23C9871BC6D10783574FE11A27A46 (U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCooldownCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m34FE814A743C73C651F4297462CB50CF5FF2E75A (U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCooldownCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m34FE814A743C73C651F4297462CB50CF5FF2E75A_RuntimeMethod_var)));
	}
}
// System.Object Baracuda.Monitoring.Example.Scripts.ShootingTarget/<CooldownCoroutine>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCooldownCoroutineU3Ed__11_System_Collections_IEnumerator_get_Current_m0E3F26DE4CF29D11C7D54C23D2F6E8934B60CD99 (U3CCooldownCoroutineU3Ed__11_t9EBE387E88479CCDBF46052BC8177F184D2AA78C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_Vertical_mCD9A584E73C02D8B6F17A6245B74074BFAE22BAC_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Vertical { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CVerticalU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_Horizontal_m086CDB96DAC64A7FC27A916AB53C4002C417D126_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Horizontal { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CHorizontalU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_MouseX_mFBF618C7B0C860A45662DB8F54217C989845C04C_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MouseX { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CMouseXU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_MouseY_mBA145212013176C6059308217C48CF81A4B97A22_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MouseY { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CMouseYU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_JumpPressed_mFAA212895284C6A93ABD519D138F71B81DD5B348_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool JumpPressed { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CJumpPressedU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_PrimaryFirePressed_mAB2C3104DE13E83197C1A15840077A7C2DA5BD68_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PrimaryFirePressed { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CPrimaryFirePressedU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_SecondaryFirePressed_m69A83CFBEFD72A543DC360C561D962E42C1E7F1B_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SecondaryFirePressed { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CSecondaryFirePressedU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LegacyPlayerInput_set_DashPressed_mF469B7080ECC33630C6FDFB5667A688CFC7F8B0A_inline (LegacyPlayerInput_t3B6A76866E7C62B7EE85C88DF600E8D802D8F9A6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool DashPressed { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CDashPressedU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___b1;
		float L_5 = L_4.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___a0;
		float L_7 = L_6.get_x_0();
		float L_8 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___a0;
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___b1;
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___a0;
		float L_14 = L_13.get_y_1();
		float L_15 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueObject_1_set_Value_m47266E8B40EFD980D319546E9D7EE5E57895EE78_gshared_inline (ValueObject_1_tE42E22C2F4482457F78F41CE9A2BE8B32EC82642 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public T Value { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
