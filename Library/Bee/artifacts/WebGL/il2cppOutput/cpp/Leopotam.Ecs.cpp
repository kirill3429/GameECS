#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<Voody.UniLeo.InstantiateComponent>
struct AutoResetHandler_tBA53EF1B2DD9A5315059B9E690F099ED3B029929;
// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// Leopotam.Ecs.EcsComponentPool`1<Voody.UniLeo.InstantiateComponent>
struct EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4;
// Leopotam.Ecs.EcsFilter`1<Voody.UniLeo.InstantiateComponent>
struct EcsFilter_1_tF09909D667864180699138DEFD236A002295E5E0;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>
struct EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>
struct EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>
struct EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676;
// Leopotam.Ecs.EcsGrowList`1<System.Int32>
struct EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3;
// Leopotam.Ecs.EcsGrowList`1<System.Object>
struct EcsGrowList_1_tD2FE2DF3939E65F1327B5527C78A504B16DDFF3E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct KeyCollection_tE876BEC9D6233DF834DD3D4FEEAEC7C2EEA81E0B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct ValueCollection_tFAF1AB314C2A0D14DB0764462753CE3A0ABF7434;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>[]
struct EntryU5BU5D_t03CBB2B44FBC260D7BDB2B324FFA54C6BB1C6006;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Component[]
struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E;
// Voody.UniLeo.ConvertToEntity[]
struct ConvertToEntityU5BU5D_t1AF0C6B862B4D97B4E34640CDAF6EFB3448A9B82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Leopotam.Ecs.EcsEntity[]
struct EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C;
// Leopotam.Ecs.EcsFilter[]
struct EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA;
// Leopotam.Ecs.EcsSystemsRunItem[]
struct EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29;
// Leopotam.Ecs.IEcsComponentPool[]
struct IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39;
// Leopotam.Ecs.IEcsComponentPoolResizeListener[]
struct IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D;
// Leopotam.Ecs.IEcsSystem[]
struct IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B;
// Voody.UniLeo.InstantiateComponent[]
struct InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Leopotam.Ecs.EcsFilter/DelayedOp[]
struct DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670;
// Leopotam.Ecs.EcsWorld/EcsEntityData[]
struct EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Voody.UniLeo.BaseMonoProvider
struct BaseMonoProvider_t6C5FF267A2A613BA34FD8DB98E960C3AD81C1E26;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Voody.UniLeo.ConvertToEntity
struct ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Leopotam.Ecs.EcsComponentPool
struct EcsComponentPool_t2F85D730BCB26AD8062C352D30B8AF4218A0FF8F;
// Leopotam.Ecs.EcsEntity
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E;
// Leopotam.Ecs.EcsFilter
struct EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC;
// Leopotam.Ecs.EcsIgnoreInjectAttribute
struct EcsIgnoreInjectAttribute_t5C2E58E9FA2D3E282E15334B5523F49E97851448;
// Leopotam.Ecs.EcsSystems
struct EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B;
// Leopotam.Ecs.EcsSystemsRunItem
struct EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF;
// Leopotam.Ecs.EcsWorld
struct EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Leopotam.Ecs.IEcsComponentPool
struct IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44;
// Leopotam.Ecs.IEcsRunSystem
struct IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79;
// Leopotam.Ecs.IEcsSystem
struct IEcsSystem_t60CC99ACA015A25510A91258F2F5A3DA31C9CF84;
// Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute
struct Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Voody.UniLeo.WorldInitSystem
struct WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConvertToEntity_t90068802D736C0D4159A4C355F3F4B647376BB6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsDestroySystem_t618262FD9F9BDF9D5B211E96F19844F71EEA0A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsInitSystem_tE0C75B22B6D0FD328CDA5B8863A7CC4AF512BC04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsPostDestroySystem_tD4B1DAFFBAF41074077DAACFE3305204FCA06858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsPreInitSystem_t7806A863D80BA54FA5599D875EB236D89348E1F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_m3425CBD5275E5E4ACFF0BF20E7FC87C91D4AF378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA89437E6304FF9DE4848A9FFF946BF49A0F5DC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Del_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m024114AE7BA6B958F69A6D077B0AB8DD96E858EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_mD52F4E9558DD3D477D8843294F10DBF80C2ACC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Replace_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m52DF8E587E357FA4F71423E0B95784DE128C80CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m1362B595B89FB7EBA1B3331BB951D46BA18D0232_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m7781F80F65A40FAF0240500CE3DC03904FDA7275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_m2D0E0C3C4F67DFE1B2189E6CD60E541BFF82F977_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_m8EF3B1BEB3E023A2240DED5D66296C53791C5948_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33_mCE162FCBCA01CDD8B1C3A64DBE4D56F71763D29A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_mBE4996D0A334BF217B50D5068CA762D959653009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m78EDA26578ED9FC0E61F407AED6174E8983E0A3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mEDE2217ECF59A25F3023E6DC06A552536434D39A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m5B02F3D6544CA1AC8C22106C7770C9B4D3EE898C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33_m9BF4461A8D85158024CFA6AF7E73EBDEAFFB060C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* EcsIgnoreInjectAttribute_t5C2E58E9FA2D3E282E15334B5523F49E97851448_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E;;
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com;
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com;;
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke;
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke;;

struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E;
struct ConvertToEntityU5BU5D_t1AF0C6B862B4D97B4E34640CDAF6EFB3448A9B82;
struct EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C;
struct EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA;
struct EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39;
struct IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B;
struct InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670;
struct EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE2FB5C003D698C16D337A05E272453F6642DE0D1 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t03CBB2B44FBC260D7BDB2B324FFA54C6BB1C6006* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE876BEC9D6233DF834DD3D4FEEAEC7C2EEA81E0B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tFAF1AB314C2A0D14DB0764462753CE3A0ABF7434* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Leopotam.Ecs.EcsComponentType`1<Voody.UniLeo.InstantiateComponent>
struct EcsComponentType_1_t2809B2AB2BD0B40D330EEBF08BD3AF2B9B0089F9  : public RuntimeObject
{
};

struct EcsComponentType_1_t2809B2AB2BD0B40D330EEBF08BD3AF2B9B0089F9_StaticFields
{
	// System.Int32 Leopotam.Ecs.EcsComponentType`1::TypeIndex
	int32_t ___TypeIndex_0;
	// System.Type Leopotam.Ecs.EcsComponentType`1::Type
	Type_t* ___Type_1;
	// System.Boolean Leopotam.Ecs.EcsComponentType`1::IsIgnoreInFilter
	bool ___IsIgnoreInFilter_2;
	// System.Boolean Leopotam.Ecs.EcsComponentType`1::IsAutoReset
	bool ___IsAutoReset_3;
};

// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>
struct EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B  : public RuntimeObject
{
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;
};

// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>
struct EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442  : public RuntimeObject
{
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;
};

// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>
struct EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676  : public RuntimeObject
{
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;
};

// Leopotam.Ecs.EcsGrowList`1<System.Int32>
struct EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3  : public RuntimeObject
{
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;
};

// Leopotam.Ecs.EcsGrowList`1<System.Object>
struct EcsGrowList_1_tD2FE2DF3939E65F1327B5527C78A504B16DDFF3E  : public RuntimeObject
{
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// Voody.UniLeo.ConversionSystemExtension
struct ConversionSystemExtension_t2EE3F7A54974A63CC0D4D102B1DEDB2388B552EE  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Leopotam.Ecs.EcsComponentPool
struct EcsComponentPool_t2F85D730BCB26AD8062C352D30B8AF4218A0FF8F  : public RuntimeObject
{
};

struct EcsComponentPool_t2F85D730BCB26AD8062C352D30B8AF4218A0FF8F_StaticFields
{
	// System.Int32 Leopotam.Ecs.EcsComponentPool::ComponentTypesCount
	int32_t ___ComponentTypesCount_0;
};

// Leopotam.Ecs.EcsComponentRefExtensions
struct EcsComponentRefExtensions_tE72831491818DFCCB7F3B423A9FE036B8CFD7AF3  : public RuntimeObject
{
};

// Leopotam.Ecs.EcsEntityExtensions
struct EcsEntityExtensions_t34F61DA8CEFD669D4DB9124682ECB51CBFF832FD  : public RuntimeObject
{
};

// Leopotam.Ecs.EcsFilter
struct EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC  : public RuntimeObject
{
	// Leopotam.Ecs.EcsEntity[] Leopotam.Ecs.EcsFilter::Entities
	EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* ___Entities_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Leopotam.Ecs.EcsFilter::EntitiesMap
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___EntitiesMap_1;
	// System.Int32 Leopotam.Ecs.EcsFilter::EntitiesCount
	int32_t ___EntitiesCount_2;
	// System.Int32 Leopotam.Ecs.EcsFilter::LockCount
	int32_t ___LockCount_3;
	// System.Int32 Leopotam.Ecs.EcsFilter::EntitiesCacheSize
	int32_t ___EntitiesCacheSize_4;
	// Leopotam.Ecs.EcsFilter/DelayedOp[] Leopotam.Ecs.EcsFilter::_delayedOps
	DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670* ____delayedOps_5;
	// System.Int32 Leopotam.Ecs.EcsFilter::_delayedOpsCount
	int32_t ____delayedOpsCount_6;
	// System.Int32[] Leopotam.Ecs.EcsFilter::IncludedTypeIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___IncludedTypeIndices_7;
	// System.Int32[] Leopotam.Ecs.EcsFilter::ExcludedTypeIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExcludedTypeIndices_8;
	// System.Type[] Leopotam.Ecs.EcsFilter::IncludedTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___IncludedTypes_9;
	// System.Type[] Leopotam.Ecs.EcsFilter::ExcludedTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___ExcludedTypes_10;
};

// Leopotam.Ecs.EcsSystems
struct EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B  : public RuntimeObject
{
	// System.String Leopotam.Ecs.EcsSystems::Name
	String_t* ___Name_0;
	// Leopotam.Ecs.EcsWorld Leopotam.Ecs.EcsSystems::World
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___World_1;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem> Leopotam.Ecs.EcsSystems::_allSystems
	EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* ____allSystems_2;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem> Leopotam.Ecs.EcsSystems::_runSystems
	EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* ____runSystems_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Leopotam.Ecs.EcsSystems::_namedRunSystems
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ____namedRunSystems_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> Leopotam.Ecs.EcsSystems::_injections
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ____injections_5;
	// System.Boolean Leopotam.Ecs.EcsSystems::_injected
	bool ____injected_6;
};

// Leopotam.Ecs.EcsSystemsRunItem
struct EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF  : public RuntimeObject
{
	// System.Boolean Leopotam.Ecs.EcsSystemsRunItem::Active
	bool ___Active_0;
	// Leopotam.Ecs.IEcsRunSystem Leopotam.Ecs.EcsSystemsRunItem::System
	RuntimeObject* ___System_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Voody.UniLeo.WorldHandler
struct WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54  : public RuntimeObject
{
};

struct WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_StaticFields
{
	// Leopotam.Ecs.EcsWorld Voody.UniLeo.WorldHandler::world
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___world_0;
};

// Voody.UniLeo.WorldInitSystem
struct WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2  : public RuntimeObject
{
	// Leopotam.Ecs.EcsWorld Voody.UniLeo.WorldInitSystem::_world
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ____world_0;
	// Leopotam.Ecs.EcsFilter`1<Voody.UniLeo.InstantiateComponent> Voody.UniLeo.WorldInitSystem::_filter
	EcsFilter_1_tF09909D667864180699138DEFD236A002295E5E0* ____filter_1;
};

// Leopotam.Ecs.EcsFilter`1<Voody.UniLeo.InstantiateComponent>
struct EcsFilter_1_tF09909D667864180699138DEFD236A002295E5E0  : public EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC
{
	// System.Int32[] Leopotam.Ecs.EcsFilter`1::_get1
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____get1_11;
	// System.Boolean Leopotam.Ecs.EcsFilter`1::_allow1
	bool ____allow1_12;
	// Leopotam.Ecs.EcsComponentPool`1<Inc1> Leopotam.Ecs.EcsFilter`1::_pool1
	EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* ____pool1_13;
	// Inc1[] Leopotam.Ecs.EcsFilter`1::_pool1Items
	InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6* ____pool1Items_14;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>
struct KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// Leopotam.Ecs.EcsEntity
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E 
{
	// System.Int32 Leopotam.Ecs.EcsEntity::Id
	int32_t ___Id_0;
	// System.UInt16 Leopotam.Ecs.EcsEntity::Gen
	uint16_t ___Gen_1;
	// Leopotam.Ecs.EcsWorld Leopotam.Ecs.EcsEntity::Owner
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___Owner_2;
};

struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_StaticFields
{
	// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsEntity::Null
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___Null_3;
};
// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsEntity
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke
{
	int32_t ___Id_0;
	uint16_t ___Gen_1;
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___Owner_2;
};
// Native definition for COM marshalling of Leopotam.Ecs.EcsEntity
struct EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com
{
	int32_t ___Id_0;
	uint16_t ___Gen_1;
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___Owner_2;
};

// Leopotam.Ecs.EcsIgnoreInjectAttribute
struct EcsIgnoreInjectAttribute_t5C2E58E9FA2D3E282E15334B5523F49E97851448  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Leopotam.Ecs.EcsWorldConfig
struct EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 
{
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::WorldEntitiesCacheSize
	int32_t ___WorldEntitiesCacheSize_0;
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::WorldFiltersCacheSize
	int32_t ___WorldFiltersCacheSize_1;
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::WorldComponentPoolsCacheSize
	int32_t ___WorldComponentPoolsCacheSize_2;
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::EntityComponentsCacheSize
	int32_t ___EntityComponentsCacheSize_3;
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::FilterEntitiesCacheSize
	int32_t ___FilterEntitiesCacheSize_4;
};

// Leopotam.Ecs.EcsWorldStats
struct EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD 
{
	// System.Int32 Leopotam.Ecs.EcsWorldStats::ActiveEntities
	int32_t ___ActiveEntities_0;
	// System.Int32 Leopotam.Ecs.EcsWorldStats::ReservedEntities
	int32_t ___ReservedEntities_1;
	// System.Int32 Leopotam.Ecs.EcsWorldStats::Filters
	int32_t ___Filters_2;
	// System.Int32 Leopotam.Ecs.EcsWorldStats::Components
	int32_t ___Components_3;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute
struct Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// Unity.IL2CPP.CompilerServices.Option Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::<Option>k__BackingField
	int32_t ___U3COptionU3Ek__BackingField_0;
	// System.Object Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};

// Voody.UniLeo.InstantiateComponent
struct InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61 
{
	// UnityEngine.GameObject Voody.UniLeo.InstantiateComponent::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_0;
};
// Native definition for P/Invoke marshalling of Voody.UniLeo.InstantiateComponent
struct InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_0;
};
// Native definition for COM marshalling of Voody.UniLeo.InstantiateComponent
struct InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Leopotam.Ecs.EcsFilter/Enumerator
struct Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B 
{
	// Leopotam.Ecs.EcsFilter Leopotam.Ecs.EcsFilter/Enumerator::_filter
	EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ____filter_0;
	// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::_count
	int32_t ____count_1;
	// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::_idx
	int32_t ____idx_2;
};
// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsFilter/Enumerator
struct Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_pinvoke
{
	EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ____filter_0;
	int32_t ____count_1;
	int32_t ____idx_2;
};
// Native definition for COM marshalling of Leopotam.Ecs.EcsFilter/Enumerator
struct Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_com
{
	EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ____filter_0;
	int32_t ____count_1;
	int32_t ____idx_2;
};

// Leopotam.Ecs.EcsWorld/EcsEntityData
struct EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D 
{
	// System.UInt16 Leopotam.Ecs.EcsWorld/EcsEntityData::Gen
	uint16_t ___Gen_0;
	// System.Int16 Leopotam.Ecs.EcsWorld/EcsEntityData::ComponentsCountX2
	int16_t ___ComponentsCountX2_1;
	// System.Int32[] Leopotam.Ecs.EcsWorld/EcsEntityData::Components
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Components_2;
};
// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsWorld/EcsEntityData
#pragma pack(push, tp, 2)
struct EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_pinvoke
{
	uint16_t ___Gen_0;
	int16_t ___ComponentsCountX2_1;
	Il2CppSafeArray/*NONE*/* ___Components_2;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Leopotam.Ecs.EcsWorld/EcsEntityData
#pragma pack(push, tp, 2)
struct EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_com
{
	uint16_t ___Gen_0;
	int16_t ___ComponentsCountX2_1;
	Il2CppSafeArray/*NONE*/* ___Components_2;
};
#pragma pack(pop, tp)

// Leopotam.Ecs.EcsComponentPool`1<Voody.UniLeo.InstantiateComponent>
struct EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_tBA53EF1B2DD9A5315059B9E690F099ED3B029929* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61 ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>
struct Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Nullable`1<Leopotam.Ecs.EcsEntity>
struct Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___value_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Leopotam.Ecs.EcsWorld
struct EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090  : public RuntimeObject
{
	// Leopotam.Ecs.EcsWorld/EcsEntityData[] Leopotam.Ecs.EcsWorld::Entities
	EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* ___Entities_0;
	// System.Int32 Leopotam.Ecs.EcsWorld::EntitiesCount
	int32_t ___EntitiesCount_1;
	// Leopotam.Ecs.EcsGrowList`1<System.Int32> Leopotam.Ecs.EcsWorld::FreeEntities
	EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* ___FreeEntities_2;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter> Leopotam.Ecs.EcsWorld::Filters
	EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* ___Filters_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>> Leopotam.Ecs.EcsWorld::FilterByIncludedComponents
	Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* ___FilterByIncludedComponents_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>> Leopotam.Ecs.EcsWorld::FilterByExcludedComponents
	Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* ___FilterByExcludedComponents_5;
	// System.Int32 Leopotam.Ecs.EcsWorld::_usedComponentsCount
	int32_t ____usedComponentsCount_6;
	// Leopotam.Ecs.EcsWorldConfig Leopotam.Ecs.EcsWorld::Config
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 ___Config_7;
	// System.Object[] Leopotam.Ecs.EcsWorld::_filterCtor
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____filterCtor_8;
	// Leopotam.Ecs.IEcsComponentPool[] Leopotam.Ecs.EcsWorld::ComponentPools
	IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* ___ComponentPools_9;
	// System.Boolean Leopotam.Ecs.EcsWorld::IsDestroyed
	bool ___IsDestroyed_10;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Leopotam.Ecs.EcsFilter/DelayedOp
struct DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643 
{
	// System.Boolean Leopotam.Ecs.EcsFilter/DelayedOp::IsAdd
	bool ___IsAdd_0;
	// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsFilter/DelayedOp::Entity
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___Entity_1;
};
// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsFilter/DelayedOp
struct DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_pinvoke
{
	int32_t ___IsAdd_0;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke ___Entity_1;
};
// Native definition for COM marshalling of Leopotam.Ecs.EcsFilter/DelayedOp
struct DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_com
{
	int32_t ___IsAdd_0;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com ___Entity_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<Voody.UniLeo.InstantiateComponent>
struct AutoResetHandler_tBA53EF1B2DD9A5315059B9E690F099ED3B029929  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Voody.UniLeo.BaseMonoProvider
struct BaseMonoProvider_t6C5FF267A2A613BA34FD8DB98E960C3AD81C1E26  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Voody.UniLeo.ConvertToEntity
struct ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Voody.UniLeo.ConvertMode Voody.UniLeo.ConvertToEntity::convertMode
	int32_t ___convertMode_4;
	// System.Nullable`1<Leopotam.Ecs.EcsEntity> Voody.UniLeo.ConvertToEntity::entity
	Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472 ___entity_5;
	// System.Boolean Voody.UniLeo.ConvertToEntity::isProccessed
	bool ___isProccessed_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Voody.UniLeo.ConvertToEntity[]
struct ConvertToEntityU5BU5D_t1AF0C6B862B4D97B4E34640CDAF6EFB3448A9B82  : public RuntimeArray
{
	ALIGN_FIELD (8) ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* m_Items[1];

	inline ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Component[]
struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E  : public RuntimeArray
{
	ALIGN_FIELD (8) Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* m_Items[1];

	inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Leopotam.Ecs.IEcsComponentPool[]
struct IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
// Leopotam.Ecs.EcsEntity[]
struct EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C  : public RuntimeArray
{
	ALIGN_FIELD (8) EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E m_Items[1];

	inline EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Owner_2), (void*)NULL);
	}
	inline EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Owner_2), (void*)NULL);
	}
};
// Leopotam.Ecs.EcsFilter/DelayedOp[]
struct DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670  : public RuntimeArray
{
	ALIGN_FIELD (8) DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643 m_Items[1];

	inline DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Entity_1))->___Owner_2), (void*)NULL);
	}
	inline DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Entity_1))->___Owner_2), (void*)NULL);
	}
};
// Leopotam.Ecs.EcsSystemsRunItem[]
struct EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29  : public RuntimeArray
{
	ALIGN_FIELD (8) EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* m_Items[1];

	inline EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Leopotam.Ecs.IEcsSystem[]
struct IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Leopotam.Ecs.EcsWorld/EcsEntityData[]
struct EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469  : public RuntimeArray
{
	ALIGN_FIELD (8) EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D m_Items[1];

	inline EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Components_2), (void*)NULL);
	}
	inline EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Components_2), (void*)NULL);
	}
};
// Leopotam.Ecs.EcsFilter[]
struct EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA  : public RuntimeArray
{
	ALIGN_FIELD (8) EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* m_Items[1];

	inline EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Voody.UniLeo.InstantiateComponent[]
struct InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6  : public RuntimeArray
{
	ALIGN_FIELD (8) InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61 m_Items[1];

	inline InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___gameObject_0), (void*)NULL);
	}
	inline InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___gameObject_0), (void*)NULL);
	}
};

IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_pinvoke(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_pinvoke_back(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke& marshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled);
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_pinvoke_cleanup(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_com(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_com_back(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com& marshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled);
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_com_cleanup(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com& marshaled);

// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsEntityExtensions::Replace<Voody.UniLeo.InstantiateComponent>(Leopotam.Ecs.EcsEntity&,T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsEntityExtensions_Replace_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m52DF8E587E357FA4F71423E0B95784DE128C80CE_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* ___item1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Leopotam.Ecs.EcsEntity>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mEDE2217ECF59A25F3023E6DC06A552536434D39A_gshared_inline (Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<Leopotam.Ecs.EcsEntity>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E Nullable_1_get_Value_m5B02F3D6544CA1AC8C22106C7770C9B4D3EE898C_gshared (Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Leopotam.Ecs.EcsEntity>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m78EDA26578ED9FC0E61F407AED6174E8983E0A3D_gshared (Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<Voody.UniLeo.InstantiateComponent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* EcsEntityExtensions_Get_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_mD52F4E9558DD3D477D8843294F10DBF80C2ACC9F_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsEntityExtensions::Del<Voody.UniLeo.InstantiateComponent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsEntityExtensions_Del_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m024114AE7BA6B958F69A6D077B0AB8DD96E858EE_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Leopotam.Ecs.EcsFilter/DelayedOp>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_m3425CBD5275E5E4ACFF0BF20E7FC87C91D4AF378_gshared (DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Object>::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_mE59E17E9B5DAD41A34225F68D4BD276D19332902_gshared_inline (EcsGrowList_1_tD2FE2DF3939E65F1327B5527C78A504B16DDFF3E* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m210AFA3DF2F152B6A7B848331A7396B35C6ADF3F_gshared_inline (EcsGrowList_1_tD2FE2DF3939E65F1327B5527C78A504B16DDFF3E* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_gshared_inline (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Leopotam.Ecs.EcsWorld/EcsEntityData>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3_gshared (EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_gshared_inline (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* __this, int32_t ___item0, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<Voody.UniLeo.InstantiateComponent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* EcsWorld_GetPool_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m3F31828C3825C3620189EDABC822E36FA0E9E556_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<Voody.UniLeo.InstantiateComponent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m28147912754B2B2AC35B57ADDBB2A8242C08E885_gshared_inline (EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Object>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<Voody.UniLeo.InstantiateComponent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_m7EB633C46EAB2C166BFB5C27224A7AFD0EB5BD8E_gshared (EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Voody.UniLeo.InstantiateComponent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_mA05E035E1CEAFEEC7C1D7490C3C2D1EBAF3056FD_gshared (InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<Voody.UniLeo.InstantiateComponent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_m4EE8F0582A6E7C3F99FA9C2FC9EEDC8A2DCA24DA_gshared (EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<Voody.UniLeo.InstantiateComponent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m5454B53599FB672D65184255D50C74E26EBA26AC_gshared_inline (AutoResetHandler_tBA53EF1B2DD9A5315059B9E690F099ED3B029929* __this, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* ___component0, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Voody.UniLeo.WorldInitSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldInitSystem__ctor_mCBC76447A40912138ACA7455E48588FA32C48156 (WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::Add(Leopotam.Ecs.IEcsSystem,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_Add_mA343724876083CFE729D753EE4D9E8FC03D7EE05 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, RuntimeObject* ___system0, String_t* ___namedRunSystem1, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsWorld Voody.UniLeo.WorldHandler::GetWorld()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* WorldHandler_GetWorld_m59BFCF5AF16422E4D4322A769225269215AA67EE_inline (const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsWorld::NewEntity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsEntityExtensions::Replace<Voody.UniLeo.InstantiateComponent>(Leopotam.Ecs.EcsEntity&,T&)
inline EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsEntityExtensions_Replace_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m52DF8E587E357FA4F71423E0B95784DE128C80CE_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* ___item1, const RuntimeMethod* method)
{
	return ((  EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61*, const RuntimeMethod*))EcsEntityExtensions_Replace_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m52DF8E587E357FA4F71423E0B95784DE128C80CE_gshared_inline)(___entity0, ___item1, method);
}
// System.Boolean System.Nullable`1<Leopotam.Ecs.EcsEntity>::get_HasValue()
inline bool Nullable_1_get_HasValue_mEDE2217ECF59A25F3023E6DC06A552536434D39A_inline (Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472*, const RuntimeMethod*))Nullable_1_get_HasValue_mEDE2217ECF59A25F3023E6DC06A552536434D39A_gshared_inline)(__this, method);
}
// T System.Nullable`1<Leopotam.Ecs.EcsEntity>::get_Value()
inline EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E Nullable_1_get_Value_m5B02F3D6544CA1AC8C22106C7770C9B4D3EE898C (Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472* __this, const RuntimeMethod* method)
{
	return ((  EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E (*) (Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472*, const RuntimeMethod*))Nullable_1_get_Value_m5B02F3D6544CA1AC8C22106C7770C9B4D3EE898C_gshared)(__this, method);
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsAlive_m714AA8A34DFEB6BFF0515AD0D30C1F6A7A1740D5_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Leopotam.Ecs.EcsEntity>::.ctor(T)
inline void Nullable_1__ctor_m78EDA26578ED9FC0E61F407AED6174E8983E0A3D (Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472*, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E, const RuntimeMethod*))Nullable_1__ctor_m78EDA26578ED9FC0E61F407AED6174E8983E0A3D_gshared)(__this, ___value0, method);
}
// T[] UnityEngine.Object::FindObjectsOfType<Voody.UniLeo.ConvertToEntity>()
inline ConvertToEntityU5BU5D_t1AF0C6B862B4D97B4E34640CDAF6EFB3448A9B82* Object_FindObjectsOfType_TisConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33_m9BF4461A8D85158024CFA6AF7E73EBDEAFFB060C (const RuntimeMethod* method)
{
	return ((  ConvertToEntityU5BU5D_t1AF0C6B862B4D97B4E34640CDAF6EFB3448A9B82* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Void Voody.UniLeo.WorldInitSystem::AddEntity(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldInitSystem_AddEntity_mB01578BE09014C8AA374A4B3E2A294CD35DD20CE (WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// System.Void Voody.UniLeo.WorldHandler::Init(Leopotam.Ecs.EcsWorld)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WorldHandler_Init_m524D638766EC7D80DEB55B23ECA68352429A950B_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___ecsWorld0, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsFilter/Enumerator Leopotam.Ecs.EcsFilter::GetEnumerator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B EcsFilter_GetEnumerator_m22DA51087D82F61AB4B6DF5846599DDD8EC0A49A_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAB0D6EEA7028DFCB8261808853152882FC8EBBA8_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m3643613B3D6014D3200CB8D0F5F50F0C6CCFFCCD_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsEntity& Leopotam.Ecs.EcsFilter::GetEntity(System.Int32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* EcsFilter_GetEntity_mDDEA2A83E7CDFFF9D766CE98642AF9E1892EE7D7_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, int32_t* ___idx0, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<Voody.UniLeo.InstantiateComponent>(Leopotam.Ecs.EcsEntity&)
inline InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* EcsEntityExtensions_Get_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_mD52F4E9558DD3D477D8843294F10DBF80C2ACC9F_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_mD52F4E9558DD3D477D8843294F10DBF80C2ACC9F_gshared_inline)(___entity0, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsEntityExtensions::Del<Voody.UniLeo.InstantiateComponent>(Leopotam.Ecs.EcsEntity&)
inline void EcsEntityExtensions_Del_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m024114AE7BA6B958F69A6D077B0AB8DD96E858EE_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	((  void (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Del_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m024114AE7BA6B958F69A6D077B0AB8DD96E858EE_gshared_inline)(___entity0, method);
}
// System.Boolean Leopotam.Ecs.EcsFilter/Enumerator::MoveNext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA175620871ECBCBDEA305F457591FD1A5197389E_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) ;
// System.Void Voody.UniLeo.WorldHandler::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldHandler_Destroy_m5F4312275E25496D73DFD81608DCEEFDE1CDD416 (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Voody.UniLeo.ConvertToEntity>()
inline ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* GameObject_GetComponent_TisConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33_mCE162FCBCA01CDD8B1C3A64DBE4D56F71763D29A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T[] UnityEngine.GameObject::GetComponents<UnityEngine.Component>()
inline ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* GameObject_GetComponents_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_mBE4996D0A334BF217B50D5068CA762D959653009 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Voody.UniLeo.ConvertToEntity::setProccessed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConvertToEntity_setProccessed_m71CFAE769D53C7777B6751D95DF8FC7781BAB3A3 (ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* __this, const RuntimeMethod* method) ;
// System.Void Voody.UniLeo.ConvertToEntity::Set(Leopotam.Ecs.EcsEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConvertToEntity_Set_mBBE5026844837F4901C32DACBCD13AEC440B8F64 (ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___entity0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Option(Unity.IL2CPP.CompilerServices.Option)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m8700BB2365861BAA58378A7475EA399B0332B6D4_inline (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Value(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_mB869FDE2C07DD58952DC730E0ECB413D63AC5E78_inline (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.UInt16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsEntity::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsEntity_GetHashCode_m833E737089406173FC610597E3A93BF8C34F302D_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, const RuntimeMethod* method) ;
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(Leopotam.Ecs.EcsEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_Equals_m813ABFB67E22C48C0F57BF1AD656E48F8C6BA652 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___other0, const RuntimeMethod* method) ;
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntity_Equals_mEEBE85D5F0849E2944B0DDC54151EB9F46055702_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsWorld/EcsEntityData& Leopotam.Ecs.EcsWorld::GetEntityData(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsWorld::UpdateFilters(System.Int32,Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, int32_t ___typeIdx0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity1, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData2, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
inline void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsEntityExtensions::Destroy(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsEntityExtensions_Destroy_m99A06957775BC0FA9663A38DA033D531532D665E_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsWorld::RecycleEntityData(System.Int32,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_RecycleEntityData_mF32D0E0B4CE31E2AE7027C51DA0C54F9D53FC0D2 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, int32_t ___id0, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData1, const RuntimeMethod* method) ;
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsWorldAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsWorldAlive_mAF0BB8400E0CFBF6875A2DF9EA00B9CD801583BB_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// System.Boolean Leopotam.Ecs.EcsWorld::IsAlive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_mCBD30D99C44C9963296CBAB628A78C2423CC9155_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_gshared)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::.ctor(Leopotam.Ecs.EcsFilter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator__ctor_mAD2CACAE4DC96A5F987178A5C4532E38610796C2_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ___filter0, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Leopotam.Ecs.EcsFilter/DelayedOp>(T[]&,System.Int32)
inline void Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_m3425CBD5275E5E4ACFF0BF20E7FC87C91D4AF378 (DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670**, int32_t, const RuntimeMethod*))Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_m3425CBD5275E5E4ACFF0BF20E7FC87C91D4AF378_gshared)(___array0, ___newSize1, method);
}
// System.Int32 Leopotam.Ecs.EcsFilter::GetEntitiesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsFilter_GetEntitiesCount_m1BDEEE64638444BB80F6331A144CE7C760ECE9C1_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsFilter::Lock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Lock_mA02D6F8F94E8DE65F1DC6F854EF457260AFF57F8_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsFilter::Unlock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Unlock_m194398A287AA4320005015ED2F33DB4116FF50B7_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_m2D0E0C3C4F67DFE1B2189E6CD60E541BFF82F977_inline (EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676*, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_mE59E17E9B5DAD41A34225F68D4BD276D19332902_gshared_inline)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_m8EF3B1BEB3E023A2240DED5D66296C53791C5948_inline (EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442*, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_mE59E17E9B5DAD41A34225F68D4BD276D19332902_gshared_inline)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mA89437E6304FF9DE4848A9FFF946BF49A0F5DC79 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>::Add(T)
inline void EcsGrowList_1_Add_m1362B595B89FB7EBA1B3331BB951D46BA18D0232_inline (EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676*, RuntimeObject*, const RuntimeMethod*))EcsGrowList_1_Add_m210AFA3DF2F152B6A7B848331A7396B35C6ADF3F_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Leopotam.Ecs.EcsSystemsRunItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystemsRunItem__ctor_m5583332E82FC941C64E61B66DCA60CDBFF88674A (EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>::Add(T)
inline void EcsGrowList_1_Add_m7781F80F65A40FAF0240500CE3DC03904FDA7275_inline (EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* __this, EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442*, EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF*, const RuntimeMethod*))EcsGrowList_1_Add_m210AFA3DF2F152B6A7B848331A7396B35C6ADF3F_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Object>::GetEnumerator()
inline Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::Dispose()
inline void Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382 (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::get_Current()
inline KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_inline (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA (*) (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>::get_Key()
inline Type_t* KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_inline (KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_inline (KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::ProcessInjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_ProcessInjects_m16FD1E7A4FD791B01481D017CA42C54DEDE8AD36 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsSystems::InjectDataToSystem(Leopotam.Ecs.IEcsSystem,Leopotam.Ecs.EcsWorld,System.Collections.Generic.Dictionary`2<System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_InjectDataToSystem_mE6A96CE141E0AD74D20D68AD256DAC4D869C5A6A (RuntimeObject* ___system0, EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___world1, Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___injections2, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139 (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Attribute_IsDefined_m9F5E52575351D870AF59EA6A4B0CDBD1A10B3DF1 (MemberInfo_t* ___element0, Type_t* ___attributeType1, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsFilter Leopotam.Ecs.EcsWorld::GetFilter(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* EcsWorld_GetFilter_m52CD6F02CE215E1CA1A2C041022F5EE4E4283A44 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, Type_t* ___filterType0, bool ___createIfNotExists1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_inline (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3*, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_gshared_inline)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_inline (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B*, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_mE59E17E9B5DAD41A34225F68D4BD276D19332902_gshared_inline)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987 (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared)(__this, ___capacity0, method);
}
// System.Void System.Array::Resize<Leopotam.Ecs.EcsWorld/EcsEntityData>(T[]&,System.Int32)
inline void Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3 (EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469**, int32_t, const RuntimeMethod*))Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3_gshared)(___array0, ___newSize1, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFB735A8FC37FEBDE59EF1E0A0C87C702E5C82CC8 (Type_t* ___type0, int32_t ___bindingAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture4, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>::Add(T)
inline void EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_inline (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* __this, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B*, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC*, const RuntimeMethod*))EcsGrowList_1_Add_m210AFA3DF2F152B6A7B848331A7396B35C6ADF3F_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* __this, int32_t ___key0, EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4*, int32_t, EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* __this, int32_t ___key0, EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4*, int32_t, EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Leopotam.Ecs.EcsFilter::IsCompatible(Leopotam.Ecs.EcsWorld/EcsEntityData&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData0, int32_t ___addedRemovedTypeIndex1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::Add(T)
inline void EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_inline (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3*, int32_t, const RuntimeMethod*))EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_gshared_inline)(__this, ___item0, method);
}
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<Voody.UniLeo.InstantiateComponent>()
inline EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* EcsWorld_GetPool_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m3F31828C3825C3620189EDABC822E36FA0E9E556_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m3F31828C3825C3620189EDABC822E36FA0E9E556_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<Voody.UniLeo.InstantiateComponent>::New()
inline int32_t EcsComponentPool_1_New_m28147912754B2B2AC35B57ADDBB2A8242C08E885_inline (EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4*, const RuntimeMethod*))EcsComponentPool_1_New_m28147912754B2B2AC35B57ADDBB2A8242C08E885_gshared_inline)(__this, method);
}
// System.Void System.Array::Resize<System.Object>(T[]&,System.Int32)
inline void Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846_gshared)(___array0, ___newSize1, method);
}
// System.Void System.Array::Resize<Leopotam.Ecs.IEcsComponentPool>(T[]&,System.Int32)
inline void Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<Voody.UniLeo.InstantiateComponent>::.ctor()
inline void EcsComponentPool_1__ctor_m7EB633C46EAB2C166BFB5C27224A7AFD0EB5BD8E (EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4*, const RuntimeMethod*))EcsComponentPool_1__ctor_m7EB633C46EAB2C166BFB5C27224A7AFD0EB5BD8E_gshared)(__this, method);
}
// System.Void System.Array::Resize<Voody.UniLeo.InstantiateComponent>(T[]&,System.Int32)
inline void Array_Resize_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_mA05E035E1CEAFEEC7C1D7490C3C2D1EBAF3056FD (InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6**, int32_t, const RuntimeMethod*))Array_Resize_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_mA05E035E1CEAFEEC7C1D7490C3C2D1EBAF3056FD_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<Voody.UniLeo.InstantiateComponent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_m4EE8F0582A6E7C3F99FA9C2FC9EEDC8A2DCA24DA (EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_m4EE8F0582A6E7C3F99FA9C2FC9EEDC8A2DCA24DA_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<Voody.UniLeo.InstantiateComponent>::Invoke(T&)
inline void AutoResetHandler_Invoke_m5454B53599FB672D65184255D50C74E26EBA26AC_inline (AutoResetHandler_tBA53EF1B2DD9A5315059B9E690F099ED3B029929* __this, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_tBA53EF1B2DD9A5315059B9E690F099ED3B029929*, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61*, const RuntimeMethod*))AutoResetHandler_Invoke_m5454B53599FB672D65184255D50C74E26EBA26AC_gshared_inline)(__this, ___component0, method);
}
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
// System.Void Voody.UniLeo.BaseMonoProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMonoProvider__ctor_m2F7DB8DB218DDDF0FB98CC124820AFE694ED3B35 (BaseMonoProvider_t6C5FF267A2A613BA34FD8DB98E960C3AD81C1E26* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Leopotam.Ecs.EcsSystems Voody.UniLeo.ConversionSystemExtension::ConvertScene(Leopotam.Ecs.EcsSystems)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* ConversionSystemExtension_ConvertScene_m4128216576CB941C5215318EECF8F22E57230E35 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* ___ecsSystems0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ecsSystems.Add(new WorldInitSystem());
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_0 = ___ecsSystems0;
		WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2* L_1 = (WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2*)il2cpp_codegen_object_new(WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2_il2cpp_TypeInfo_var);
		WorldInitSystem__ctor_mCBC76447A40912138ACA7455E48588FA32C48156(L_1, NULL);
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_2;
		L_2 = EcsSystems_Add_mA343724876083CFE729D753EE4D9E8FC03D7EE05(L_0, L_1, (String_t*)NULL, NULL);
		// return ecsSystems;
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_3 = ___ecsSystems0;
		return L_3;
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
// System.Void Voody.UniLeo.ConvertToEntity::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConvertToEntity_Start_mBE1E2700F44EB26703CEFF4068D8DDECCAC1E649 (ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Replace_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m52DF8E587E357FA4F71423E0B95784DE128C80CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* V_0 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_1;
	memset((&V_1), 0, sizeof(V_1));
	InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61 V_2;
	memset((&V_2), 0, sizeof(V_2));
	InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var world = WorldHandler.GetWorld();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0;
		L_0 = WorldHandler_GetWorld_m59BFCF5AF16422E4D4322A769225269215AA67EE_inline(NULL);
		V_0 = L_0;
		// if (world != null && !isProccessed)
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		bool L_2 = __this->___isProccessed_6;
		if (L_2)
		{
			goto IL_0039;
		}
	}
	{
		// var instantiateEntity = world.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_3 = V_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_4;
		L_4 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_3, NULL);
		V_1 = L_4;
		// var instantiateComponent = new InstantiateComponent() { gameObject = gameObject };
		il2cpp_codegen_initobj((&V_3), sizeof(InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		(&V_3)->___gameObject_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___gameObject_0), (void*)L_5);
		InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61 L_6 = V_3;
		V_2 = L_6;
		// instantiateEntity.Replace(instantiateComponent);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_7;
		L_7 = EcsEntityExtensions_Replace_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m52DF8E587E357FA4F71423E0B95784DE128C80CE_inline((&V_1), (&V_2), EcsEntityExtensions_Replace_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m52DF8E587E357FA4F71423E0B95784DE128C80CE_RuntimeMethod_var);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Nullable`1<Leopotam.Ecs.EcsEntity> Voody.UniLeo.ConvertToEntity::TryGetEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472 ConvertToEntity_TryGetEntity_m10D1757EB84314A64C8395052E4B0B865D6D0028 (ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m78EDA26578ED9FC0E61F407AED6174E8983E0A3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mEDE2217ECF59A25F3023E6DC06A552536434D39A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m5B02F3D6544CA1AC8C22106C7770C9B4D3EE898C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (entity.HasValue)
		Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472* L_0 = (&__this->___entity_5);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mEDE2217ECF59A25F3023E6DC06A552536434D39A_inline(L_0, Nullable_1_get_HasValue_mEDE2217ECF59A25F3023E6DC06A552536434D39A_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// if (entity.Value.IsAlive())
		Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472* L_2 = (&__this->___entity_5);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_3;
		L_3 = Nullable_1_get_Value_m5B02F3D6544CA1AC8C22106C7770C9B4D3EE898C(L_2, Nullable_1_get_Value_m5B02F3D6544CA1AC8C22106C7770C9B4D3EE898C_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4;
		L_4 = EcsEntityExtensions_IsAlive_m714AA8A34DFEB6BFF0515AD0D30C1F6A7A1740D5_inline((&V_0), NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// return entity.Value;
		Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472* L_5 = (&__this->___entity_5);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_6;
		L_6 = Nullable_1_get_Value_m5B02F3D6544CA1AC8C22106C7770C9B4D3EE898C(L_5, Nullable_1_get_Value_m5B02F3D6544CA1AC8C22106C7770C9B4D3EE898C_RuntimeMethod_var);
		Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m78EDA26578ED9FC0E61F407AED6174E8983E0A3D((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m78EDA26578ED9FC0E61F407AED6174E8983E0A3D_RuntimeMethod_var);
		return L_7;
	}

IL_0033:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472));
		Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472 L_8 = V_1;
		return L_8;
	}
}
// System.Void Voody.UniLeo.ConvertToEntity::setProccessed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConvertToEntity_setProccessed_m71CFAE769D53C7777B6751D95DF8FC7781BAB3A3 (ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* __this, const RuntimeMethod* method) 
{
	{
		// this.isProccessed = true;
		__this->___isProccessed_6 = (bool)1;
		// }
		return;
	}
}
// System.Void Voody.UniLeo.ConvertToEntity::Set(Leopotam.Ecs.EcsEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConvertToEntity_Set_mBBE5026844837F4901C32DACBCD13AEC440B8F64 (ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m78EDA26578ED9FC0E61F407AED6174E8983E0A3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.entity = entity;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_0 = ___entity0;
		Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m78EDA26578ED9FC0E61F407AED6174E8983E0A3D((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m78EDA26578ED9FC0E61F407AED6174E8983E0A3D_RuntimeMethod_var);
		__this->___entity_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___entity_5))->___value_1))->___Owner_2), (void*)NULL);
		// }
		return;
	}
}
// System.Void Voody.UniLeo.ConvertToEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConvertToEntity__ctor_m2BE637A233EE63975665C863EB077E023BEDEE0C (ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Voody.UniLeo.WorldHandler::Init(Leopotam.Ecs.EcsWorld)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldHandler_Init_m524D638766EC7D80DEB55B23ECA68352429A950B (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___ecsWorld0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// world = ecsWorld;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ___ecsWorld0;
		((WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_StaticFields*)il2cpp_codegen_static_fields_for(WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var))->___world_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_StaticFields*)il2cpp_codegen_static_fields_for(WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var))->___world_0), (void*)L_0);
		// }
		return;
	}
}
// Leopotam.Ecs.EcsWorld Voody.UniLeo.WorldHandler::GetWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* WorldHandler_GetWorld_m59BFCF5AF16422E4D4322A769225269215AA67EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return world;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_StaticFields*)il2cpp_codegen_static_fields_for(WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var))->___world_0;
		return L_0;
	}
}
// System.Void Voody.UniLeo.WorldHandler::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldHandler_Destroy_m5F4312275E25496D73DFD81608DCEEFDE1CDD416 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// world = null;
		((WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_StaticFields*)il2cpp_codegen_static_fields_for(WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var))->___world_0 = (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_StaticFields*)il2cpp_codegen_static_fields_for(WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var))->___world_0), (void*)(EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)NULL);
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
// Conversion methods for marshalling of: Voody.UniLeo.InstantiateComponent
IL2CPP_EXTERN_C void InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshal_pinvoke(const InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61& unmarshaled, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshaled_pinvoke& marshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'InstantiateComponent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshal_pinvoke_back(const InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshaled_pinvoke& marshaled, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61& unmarshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'InstantiateComponent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Voody.UniLeo.InstantiateComponent
IL2CPP_EXTERN_C void InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshal_pinvoke_cleanup(InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Voody.UniLeo.InstantiateComponent
IL2CPP_EXTERN_C void InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshal_com(const InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61& unmarshaled, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshaled_com& marshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'InstantiateComponent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshal_com_back(const InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshaled_com& marshaled, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61& unmarshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'InstantiateComponent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Voody.UniLeo.InstantiateComponent
IL2CPP_EXTERN_C void InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshal_com_cleanup(InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_marshaled_com& marshaled)
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
// System.Void Voody.UniLeo.WorldInitSystem::PreInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldInitSystem_PreInit_m99ED6561F3BDE519CE56D742BC09E91837F61460 (WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33_m9BF4461A8D85158024CFA6AF7E73EBDEAFFB060C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConvertToEntityU5BU5D_t1AF0C6B862B4D97B4E34640CDAF6EFB3448A9B82* V_0 = NULL;
	int32_t V_1 = 0;
	ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* V_2 = NULL;
	{
		// var convertableGameObjects =
		//     GameObject.FindObjectsOfType<ConvertToEntity>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ConvertToEntityU5BU5D_t1AF0C6B862B4D97B4E34640CDAF6EFB3448A9B82* L_0;
		L_0 = Object_FindObjectsOfType_TisConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33_m9BF4461A8D85158024CFA6AF7E73EBDEAFFB060C(Object_FindObjectsOfType_TisConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33_m9BF4461A8D85158024CFA6AF7E73EBDEAFFB060C_RuntimeMethod_var);
		// foreach (var convertable in convertableGameObjects)
		V_0 = L_0;
		V_1 = 0;
		goto IL_001e;
	}

IL_000a:
	{
		// foreach (var convertable in convertableGameObjects)
		ConvertToEntityU5BU5D_t1AF0C6B862B4D97B4E34640CDAF6EFB3448A9B82* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// AddEntity(convertable.gameObject);
		ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* L_5 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		WorldInitSystem_AddEntity_mB01578BE09014C8AA374A4B3E2A294CD35DD20CE(__this, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001e:
	{
		// foreach (var convertable in convertableGameObjects)
		int32_t L_8 = V_1;
		ConvertToEntityU5BU5D_t1AF0C6B862B4D97B4E34640CDAF6EFB3448A9B82* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// WorldHandler.Init(_world);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_10 = __this->____world_0;
		WorldHandler_Init_m524D638766EC7D80DEB55B23ECA68352429A950B_inline(L_10, NULL);
		// }
		return;
	}
}
// System.Void Voody.UniLeo.WorldInitSystem::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldInitSystem_Run_mB2FB3E77CE4A56B8084947CF1E659F5ADED56AE7 (WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Del_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m024114AE7BA6B958F69A6D077B0AB8DD96E858EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_mD52F4E9558DD3D477D8843294F10DBF80C2ACC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* V_2 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* G_B4_0 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* G_B3_0 = NULL;
	{
		// foreach (var i in _filter)
		EcsFilter_1_tF09909D667864180699138DEFD236A002295E5E0* L_0 = __this->____filter_1;
		Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B L_1;
		L_1 = EcsFilter_GetEnumerator_m22DA51087D82F61AB4B6DF5846599DDD8EC0A49A_inline(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0053:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAB0D6EEA7028DFCB8261808853152882FC8EBBA8_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_000e_1:
			{
				// foreach (var i in _filter)
				int32_t L_2;
				L_2 = Enumerator_get_Current_m3643613B3D6014D3200CB8D0F5F50F0C6CCFFCCD_inline((&V_0), NULL);
				V_1 = L_2;
				// ref var entity = ref _filter.GetEntity(i);
				EcsFilter_1_tF09909D667864180699138DEFD236A002295E5E0* L_3 = __this->____filter_1;
				EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4;
				L_4 = EcsFilter_GetEntity_mDDEA2A83E7CDFFF9D766CE98642AF9E1892EE7D7_inline(L_3, (&V_1), NULL);
				// ref InstantiateComponent component = ref entity.Get<InstantiateComponent>();
				EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_5 = L_4;
				InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* L_6;
				L_6 = EcsEntityExtensions_Get_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_mD52F4E9558DD3D477D8843294F10DBF80C2ACC9F_inline(L_5, EcsEntityExtensions_Get_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_mD52F4E9558DD3D477D8843294F10DBF80C2ACC9F_RuntimeMethod_var);
				V_2 = L_6;
				// if (component.gameObject)
				InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* L_7 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___gameObject_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_8, NULL);
				G_B3_0 = L_5;
				if (!L_9)
				{
					G_B4_0 = L_5;
					goto IL_0043_1;
				}
			}
			{
				// AddEntity(component.gameObject);
				InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* L_10 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___gameObject_0;
				WorldInitSystem_AddEntity_mB01578BE09014C8AA374A4B3E2A294CD35DD20CE(__this, L_11, NULL);
				G_B4_0 = G_B3_0;
			}

IL_0043_1:
			{
				// entity.Del<InstantiateComponent>();
				EcsEntityExtensions_Del_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m024114AE7BA6B958F69A6D077B0AB8DD96E858EE_inline(G_B4_0, EcsEntityExtensions_Del_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m024114AE7BA6B958F69A6D077B0AB8DD96E858EE_RuntimeMethod_var);
			}

IL_0048_1:
			{
				// foreach (var i in _filter)
				bool L_12;
				L_12 = Enumerator_MoveNext_mA175620871ECBCBDEA305F457591FD1A5197389E_inline((&V_0), NULL);
				if (L_12)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0061;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Voody.UniLeo.WorldInitSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldInitSystem_Destroy_m1A253A1A003E9CE383BC80E0742A5F17EAA30336 (WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2* __this, const RuntimeMethod* method) 
{
	{
		// WorldHandler.Destroy();
		WorldHandler_Destroy_m5F4312275E25496D73DFD81608DCEEFDE1CDD416(NULL);
		// }
		return;
	}
}
// System.Void Voody.UniLeo.WorldInitSystem::AddEntity(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldInitSystem_AddEntity_mB01578BE09014C8AA374A4B3E2A294CD35DD20CE (WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33_mCE162FCBCA01CDD8B1C3A64DBE4D56F71763D29A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_mBE4996D0A334BF217B50D5068CA762D959653009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertToEntity_t90068802D736C0D4159A4C355F3F4B647376BB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* V_1 = NULL;
	ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* V_2 = NULL;
	int32_t V_3 = 0;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	{
		// EcsEntity entity = _world.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = __this->____world_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ConvertToEntity convertComponent = gameObject.GetComponent<ConvertToEntity>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___gameObject0;
		ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* L_3;
		L_3 = GameObject_GetComponent_TisConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33_mCE162FCBCA01CDD8B1C3A64DBE4D56F71763D29A(L_2, GameObject_GetComponent_TisConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33_mCE162FCBCA01CDD8B1C3A64DBE4D56F71763D29A_RuntimeMethod_var);
		V_1 = L_3;
		// if (convertComponent)
		ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (!L_5)
		{
			goto IL_0088;
		}
	}
	{
		// foreach (var component in gameObject.GetComponents<Component>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___gameObject0;
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_7;
		L_7 = GameObject_GetComponents_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_mBE4996D0A334BF217B50D5068CA762D959653009(L_6, GameObject_GetComponents_TisComponent_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_mBE4996D0A334BF217B50D5068CA762D959653009_RuntimeMethod_var);
		V_2 = L_7;
		V_3 = 0;
		goto IL_004b;
	}

IL_0026:
	{
		// foreach (var component in gameObject.GetComponents<Component>())
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_8 = V_2;
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		// if (component is IConvertToEntity entityComponent)
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_12 = V_4;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IConvertToEntity_t90068802D736C0D4159A4C355F3F4B647376BB6D_il2cpp_TypeInfo_var));
		RuntimeObject* L_13 = V_5;
		if (!L_13)
		{
			goto IL_0047;
		}
	}
	{
		// entityComponent.Convert(entity);
		RuntimeObject* L_14 = V_5;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_15 = V_0;
		InterfaceActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E >::Invoke(0 /* System.Void Voody.UniLeo.IConvertToEntity::Convert(Leopotam.Ecs.EcsEntity) */, IConvertToEntity_t90068802D736C0D4159A4C355F3F4B647376BB6D_il2cpp_TypeInfo_var, L_14, L_15);
		// GameObject.Destroy(component);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_16 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_16, NULL);
	}

IL_0047:
	{
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004b:
	{
		// foreach (var component in gameObject.GetComponents<Component>())
		int32_t L_18 = V_3;
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_19 = V_2;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		// convertComponent.setProccessed();
		ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* L_20 = V_1;
		ConvertToEntity_setProccessed_m71CFAE769D53C7777B6751D95DF8FC7781BAB3A3(L_20, NULL);
		// switch (convertComponent.convertMode)
		ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* L_21 = V_1;
		int32_t L_22 = L_21->___convertMode_4;
		V_6 = L_22;
		int32_t L_23 = V_6;
		switch (L_23)
		{
			case 0:
			{
				goto IL_007a;
			}
			case 1:
			{
				goto IL_0073;
			}
			case 2:
			{
				goto IL_0081;
			}
		}
	}
	{
		return;
	}

IL_0073:
	{
		// GameObject.Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = ___gameObject0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_24, NULL);
		// break;
		return;
	}

IL_007a:
	{
		// GameObject.Destroy(convertComponent);
		ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* L_25 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_25, NULL);
		// break;
		return;
	}

IL_0081:
	{
		// convertComponent.Set(entity);
		ConvertToEntity_tD4E2C9DB212BA8D4893C3824CC7E6C4E4498DB33* L_26 = V_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_27 = V_0;
		ConvertToEntity_Set_mBBE5026844837F4901C32DACBCD13AEC440B8F64(L_26, L_27, NULL);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void Voody.UniLeo.WorldInitSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldInitSystem__ctor_mCBC76447A40912138ACA7455E48588FA32C48156 (WorldInitSystem_tC3F47C52464025F949A3453B8827C1E51B1CA3B2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Unity.IL2CPP.CompilerServices.Option Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::get_Option()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Il2CppSetOptionAttribute_get_Option_m3D029EB0E19145D2EAB03AC130BFDB44A2CCEF2D (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, const RuntimeMethod* method) 
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = __this->___U3COptionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Option(Unity.IL2CPP.CompilerServices.Option)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m8700BB2365861BAA58378A7475EA399B0332B6D4 (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3COptionU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Object Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Il2CppSetOptionAttribute_get_Value_m023375C33638B45A22FA9859153924B453F1BDD2 (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, const RuntimeMethod* method) 
{
	{
		// public object Value { get; private set; }
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Value(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_mB869FDE2C07DD58952DC730E0ECB413D63AC5E78 (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Value { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::.ctor(Unity.IL2CPP.CompilerServices.Option,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute__ctor_m9E6E1BE504326E217113A2F99590C2C113488460 (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, int32_t ___option0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		int32_t L_0 = ___option0;
		Il2CppSetOptionAttribute_set_Option_m8700BB2365861BAA58378A7475EA399B0332B6D4_inline(__this, L_0, NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		RuntimeObject* L_1 = ___value1;
		Il2CppSetOptionAttribute_set_Value_mB869FDE2C07DD58952DC730E0ECB413D63AC5E78_inline(__this, L_1, NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
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
// System.Void Leopotam.Ecs.EcsIgnoreInjectAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsIgnoreInjectAttribute__ctor_mE4442344E307563D400A3D263D65A9CC9461AC1F (EcsIgnoreInjectAttribute_t5C2E58E9FA2D3E282E15334B5523F49E97851448* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Leopotam.Ecs.EcsComponentPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool__ctor_mED311A6468F5089EE4C97E5EBCE1FE132AA0E038 (EcsComponentPool_t2F85D730BCB26AD8062C352D30B8AF4218A0FF8F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Conversion methods for marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_pinvoke(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_pinvoke_back(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke& marshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_pinvoke_cleanup(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_com(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com& marshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_com_back(const EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com& marshaled, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E& unmarshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshal_com_cleanup(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_marshaled_com& marshaled)
{
}
// System.Boolean Leopotam.Ecs.EcsEntity::op_Equality(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_op_Equality_m6981868F065D689DA99CE21553E0D05E7729EEEF (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___lhs0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___rhs1, const RuntimeMethod* method) 
{
	{
		// return lhs.Id == rhs.Id && lhs.Gen == rhs.Gen;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___lhs0;
		int32_t L_1 = L_0->___Id_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___rhs1;
		int32_t L_3 = L_2->___Id_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___lhs0;
		uint16_t L_5 = L_4->___Gen_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___rhs1;
		uint16_t L_7 = L_6->___Gen_1;
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntity::op_Inequality(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_op_Inequality_mDAD031B5582B6A80B3DEF54872ACB7EF2D7A19DA (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___lhs0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___rhs1, const RuntimeMethod* method) 
{
	{
		// return lhs.Id != rhs.Id || lhs.Gen != rhs.Gen;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___lhs0;
		int32_t L_1 = L_0->___Id_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___rhs1;
		int32_t L_3 = L_2->___Id_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___lhs0;
		uint16_t L_5 = L_4->___Gen_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___rhs1;
		uint16_t L_7 = L_6->___Gen_1;
		return (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)1;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntity::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntity_GetHashCode_m833E737089406173FC610597E3A93BF8C34F302D (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// var hashCode = (Id * 397) ^ Gen.GetHashCode ();
		int32_t L_0 = __this->___Id_0;
		uint16_t* L_1 = (&__this->___Gen_1);
		int32_t L_2;
		L_2 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_1, NULL);
		// hashCode = (hashCode * 397) ^ (Owner != null ? Owner.GetHashCode () : 0);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_3 = __this->___Owner_2;
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)397)))^L_2)), ((int32_t)397)));
		if (L_3)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)397)))^L_2)), ((int32_t)397)));
			goto IL_0029;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0029:
	{
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_4 = __this->___Owner_2;
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		// return hashCode;
		return ((int32_t)(G_B3_1^G_B3_0));
	}
}
IL2CPP_EXTERN_C  int32_t EcsEntity_GetHashCode_m833E737089406173FC610597E3A93BF8C34F302D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = EcsEntity_GetHashCode_m833E737089406173FC610597E3A93BF8C34F302D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_Equals_mEEBE85D5F0849E2944B0DDC54151EB9F46055702 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return other is EcsEntity otherEntity && Equals (otherEntity);
		RuntimeObject* L_0 = ___other0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___other0;
		V_0 = ((*(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)((EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)UnBox(L_1, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var))));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_2 = V_0;
		bool L_3;
		L_3 = EcsEntity_Equals_m813ABFB67E22C48C0F57BF1AD656E48F8C6BA652(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool EcsEntity_Equals_mEEBE85D5F0849E2944B0DDC54151EB9F46055702_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*>(__this + _offset);
	bool _returnValue;
	_returnValue = EcsEntity_Equals_mEEBE85D5F0849E2944B0DDC54151EB9F46055702_inline(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(Leopotam.Ecs.EcsEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_Equals_m813ABFB67E22C48C0F57BF1AD656E48F8C6BA652 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___other0, const RuntimeMethod* method) 
{
	{
		// return Id == other.Id && Gen == other.Gen && Owner == other.Owner;
		int32_t L_0 = __this->___Id_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1 = ___other0;
		int32_t L_2 = L_1.___Id_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		uint16_t L_3 = __this->___Gen_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_4 = ___other0;
		uint16_t L_5 = L_4.___Gen_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_6 = __this->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_7 = ___other0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_8 = L_7.___Owner_2;
		return (bool)((((RuntimeObject*)(EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_6) == ((RuntimeObject*)(EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool EcsEntity_Equals_m813ABFB67E22C48C0F57BF1AD656E48F8C6BA652_AdjustorThunk (RuntimeObject* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E ___other0, const RuntimeMethod* method)
{
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*>(__this + _offset);
	bool _returnValue;
	_returnValue = EcsEntity_Equals_m813ABFB67E22C48C0F57BF1AD656E48F8C6BA652(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void Leopotam.Ecs.EcsEntity::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsEntity__cctor_m9786FD58F8B7AFBACC6D2741495004323B79EB6E (const RuntimeMethod* method) 
{
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
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsEntityExtensions::Copy(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsEntityExtensions_Copy_m6B1F97D46067023FF7B52748B1A85AE3FB2A64FC (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* V_0 = NULL;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_1 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_2;
	memset((&V_2), 0, sizeof(V_2));
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// var owner = entity.Owner;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		V_0 = L_1;
		// ref var srcData = ref owner.GetEntityData (entity);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_2 = V_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_3 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_4;
		L_4 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_2, L_3, NULL);
		V_1 = L_4;
		// var dstEntity = owner.NewEntity ();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_5 = V_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_6;
		L_6 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_5, NULL);
		V_2 = L_6;
		// ref var dstData = ref owner.GetEntityData (dstEntity);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_7 = V_0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_8;
		L_8 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_7, (&V_2), NULL);
		V_3 = L_8;
		// if (dstData.Components.Length < srcData.ComponentsCountX2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_9 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_11 = V_1;
		int16_t L_12 = L_11->___ComponentsCountX2_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))) >= ((int32_t)L_12)))
		{
			goto IL_0042;
		}
	}
	{
		// dstData.Components = new int[srcData.Components.Length];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_13 = V_3;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = L_14->___Components_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)));
		L_13->___Components_2 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___Components_2), (void*)L_16);
	}

IL_0042:
	{
		// dstData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_17 = V_3;
		L_17->___ComponentsCountX2_1 = (int16_t)0;
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		V_4 = 0;
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_18 = V_1;
		int16_t L_19 = L_18->___ComponentsCountX2_1;
		V_5 = L_19;
		goto IL_00b9;
	}

IL_0056:
	{
		// var typeIdx = srcData.Components[i];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20->___Components_2;
		int32_t L_22 = V_4;
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = L_24;
		// var pool = owner.ComponentPools[typeIdx];
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_25 = V_0;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_26 = L_25->___ComponentPools_9;
		int32_t L_27 = V_6;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		// var dstItemIdx = pool.New ();
		RuntimeObject* L_30 = L_29;
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Leopotam.Ecs.IEcsComponentPool::New() */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_30);
		V_7 = L_31;
		// dstData.Components[i] = typeIdx;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_32 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = L_32->___Components_2;
		int32_t L_34 = V_4;
		int32_t L_35 = V_6;
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34), (int32_t)L_35);
		// dstData.Components[i + 1] = dstItemIdx;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_36 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_36->___Components_2;
		int32_t L_38 = V_4;
		int32_t L_39 = V_7;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_38, 1))), (int32_t)L_39);
		// pool.CopyData (srcData.Components[i + 1], dstItemIdx);
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_40 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = L_40->___Components_2;
		int32_t L_42 = V_4;
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		int32_t L_45 = V_7;
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(4 /* System.Void Leopotam.Ecs.IEcsComponentPool::CopyData(System.Int32,System.Int32) */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_30, L_44, L_45);
		// dstData.ComponentsCountX2 += 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_46 = V_3;
		int16_t* L_47 = (&L_46->___ComponentsCountX2_1);
		int16_t* L_48 = L_47;
		int32_t L_49 = *((int16_t*)L_48);
		*((int16_t*)L_48) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_49, 2)));
		// owner.UpdateFilters (typeIdx, dstEntity, dstData);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_50 = V_0;
		int32_t L_51 = V_6;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_52 = V_3;
		EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline(L_50, L_51, (&V_2), L_52, NULL);
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_53 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_53, 2));
	}

IL_00b9:
	{
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_54 = V_4;
		int32_t L_55 = V_5;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0056;
		}
	}
	{
		// return dstEntity;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_56 = V_2;
		return L_56;
	}
}
// System.Void Leopotam.Ecs.EcsEntityExtensions::MoveTo(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsEntityExtensions_MoveTo_mF65ECA24495546C89F9F91934C03242B68EB5A3E (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___source0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* V_0 = NULL;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_1 = NULL;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// var owner = source.Owner;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___source0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		V_0 = L_1;
		// ref var srcData = ref owner.GetEntityData (source);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_2 = V_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_3 = ___source0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_4;
		L_4 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_2, L_3, NULL);
		V_1 = L_4;
		// ref var dstData = ref owner.GetEntityData (target);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_5 = V_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___target1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_7;
		L_7 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_5, L_6, NULL);
		V_2 = L_7;
		// if (dstData.Components.Length < srcData.ComponentsCountX2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_8 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_10 = V_1;
		int16_t L_11 = L_10->___ComponentsCountX2_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) >= ((int32_t)L_11)))
		{
			goto IL_003a;
		}
	}
	{
		// dstData.Components = new int[srcData.Components.Length];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_12 = V_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_13 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->___Components_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)));
		L_12->___Components_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___Components_2), (void*)L_15);
	}

IL_003a:
	{
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		V_3 = 0;
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_16 = V_1;
		int16_t L_17 = L_16->___ComponentsCountX2_1;
		V_4 = L_17;
		goto IL_011e;
	}

IL_0049:
	{
		// var typeIdx = srcData.Components[i];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_18 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18->___Components_2;
		int32_t L_20 = V_3;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		// var pool = owner.ComponentPools[typeIdx];
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_23 = V_0;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_24 = L_23->___ComponentPools_9;
		int32_t L_25 = V_5;
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = L_27;
		// var j = dstData.ComponentsCountX2 - 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_28 = V_2;
		int16_t L_29 = L_28->___ComponentsCountX2_1;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, 2));
		goto IL_007d;
	}

IL_006a:
	{
		// if (dstData.Components[j] == typeIdx) { break; }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_30 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = L_30->___Components_2;
		int32_t L_32 = V_7;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_5;
		if ((((int32_t)L_34) == ((int32_t)L_35)))
		{
			goto IL_0082;
		}
	}
	{
		// for (; j >= 0; j -= 2) {
		int32_t L_36 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_36, 2));
	}

IL_007d:
	{
		// for (; j >= 0; j -= 2) {
		int32_t L_37 = V_7;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}

IL_0082:
	{
		// if (j >= 0) {
		int32_t L_38 = V_7;
		if ((((int32_t)L_38) < ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		// pool.CopyData (srcData.Components[i + 1], dstData.Components[j + 1]);
		RuntimeObject* L_39 = V_6;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_40 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = L_40->___Components_2;
		int32_t L_42 = V_3;
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_45 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = L_45->___Components_2;
		int32_t L_47 = V_7;
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(4 /* System.Void Leopotam.Ecs.IEcsComponentPool::CopyData(System.Int32,System.Int32) */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_39, L_44, L_49);
		goto IL_011a;
	}

IL_00a5:
	{
		// if (dstData.Components.Length == dstData.ComponentsCountX2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_50 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = L_50->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_52 = V_2;
		int16_t L_53 = L_52->___ComponentsCountX2_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_51)->max_length))) == ((uint32_t)L_53))))
		{
			goto IL_00c8;
		}
	}
	{
		// Array.Resize (ref dstData.Components, dstData.ComponentsCountX2 << 1);
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_54 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_55 = (&L_54->___Components_2);
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_56 = V_2;
		int16_t L_57 = L_56->___ComponentsCountX2_1;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98(L_55, ((int32_t)((int32_t)L_57<<1)), Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_RuntimeMethod_var);
	}

IL_00c8:
	{
		// dstData.Components[dstData.ComponentsCountX2] = typeIdx;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_58 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = L_58->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_60 = V_2;
		int16_t L_61 = L_60->___ComponentsCountX2_1;
		int32_t L_62 = V_5;
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61), (int32_t)L_62);
		// var idx = pool.New ();
		RuntimeObject* L_63 = V_6;
		int32_t L_64;
		L_64 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Leopotam.Ecs.IEcsComponentPool::New() */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_63);
		V_8 = L_64;
		// dstData.Components[dstData.ComponentsCountX2 + 1] = idx;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_65 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = L_65->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_67 = V_2;
		int16_t L_68 = L_67->___ComponentsCountX2_1;
		int32_t L_69 = V_8;
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_68, 1))), (int32_t)L_69);
		// dstData.ComponentsCountX2 += 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_70 = V_2;
		int16_t* L_71 = (&L_70->___ComponentsCountX2_1);
		int16_t* L_72 = L_71;
		int32_t L_73 = *((int16_t*)L_72);
		*((int16_t*)L_72) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_73, 2)));
		// pool.CopyData (srcData.Components[i + 1], idx);
		RuntimeObject* L_74 = V_6;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_75 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = L_75->___Components_2;
		int32_t L_77 = V_3;
		int32_t L_78 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		int32_t L_79 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		int32_t L_80 = V_8;
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(4 /* System.Void Leopotam.Ecs.IEcsComponentPool::CopyData(System.Int32,System.Int32) */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_74, L_79, L_80);
		// owner.UpdateFilters (typeIdx, target, dstData);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_81 = V_0;
		int32_t L_82 = V_5;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_83 = ___target1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_84 = V_2;
		EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline(L_81, L_82, L_83, L_84, NULL);
	}

IL_011a:
	{
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_85 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_85, 2));
	}

IL_011e:
	{
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_86 = V_3;
		int32_t L_87 = V_4;
		if ((((int32_t)L_86) < ((int32_t)L_87)))
		{
			goto IL_0049;
		}
	}
	{
		// source.Destroy ();
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_88 = ___source0;
		EcsEntityExtensions_Destroy_m99A06957775BC0FA9663A38DA033D531532D665E_inline(L_88, NULL);
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::AreEquals(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_AreEquals_m89EED4555D9BE9F18F292ABC19D724864FDD1C22 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___lhs0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___rhs1, const RuntimeMethod* method) 
{
	{
		// return lhs.Id == rhs.Id && lhs.Gen == rhs.Gen;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___lhs0;
		int32_t L_1 = L_0->___Id_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___rhs1;
		int32_t L_3 = L_2->___Id_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___lhs0;
		uint16_t L_5 = L_4->___Gen_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___rhs1;
		uint16_t L_7 = L_6->___Gen_1;
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::AreIdEquals(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_AreIdEquals_mC04C673F571773AA9DAAB1F5523892B6999FDB06 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___lhs0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___rhs1, const RuntimeMethod* method) 
{
	{
		// return lhs.Id == rhs.Id;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___lhs0;
		int32_t L_1 = L_0->___Id_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___rhs1;
		int32_t L_3 = L_2->___Id_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetInternalId(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetInternalId_m621F132B48D915423C0B666922E3F67CC38C925F (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	{
		// return entity.Id;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		int32_t L_1 = L_0->___Id_0;
		return L_1;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetInternalGen(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetInternalGen_mAFAB49FAEE1C6374D419F41F8017CCA311B0C211 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	{
		// return entity.Gen;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		uint16_t L_1 = L_0->___Gen_1;
		return L_1;
	}
}
// Leopotam.Ecs.EcsWorld Leopotam.Ecs.EcsEntityExtensions::GetInternalWorld(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* EcsEntityExtensions_GetInternalWorld_m66D3AF9307C1B1191D414057C6ABD149AD533916 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	{
		// return entity.Owner;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		return L_1;
	}
}
// System.Void Leopotam.Ecs.EcsEntityExtensions::Destroy(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsEntityExtensions_Destroy_m99A06957775BC0FA9663A38DA033D531532D665E (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3;
		L_3 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// savedEntity.Id = entity.Id;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___entity0;
		int32_t L_5 = L_4->___Id_0;
		(&V_1)->___Id_0 = L_5;
		// savedEntity.Gen = entity.Gen;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___entity0;
		uint16_t L_7 = L_6->___Gen_1;
		(&V_1)->___Gen_1 = L_7;
		// savedEntity.Owner = entity.Owner;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_8 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_9 = L_8->___Owner_2;
		(&V_1)->___Owner_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___Owner_2), (void*)L_9);
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_10 = V_0;
		int16_t L_11 = L_10->___ComponentsCountX2_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, 2));
		goto IL_0089;
	}

IL_003f:
	{
		// savedEntity.Owner.UpdateFilters (-entityData.Components[i], savedEntity, entityData);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_12 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_13 = L_12.___Owner_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_14 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = L_14->___Components_2;
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_19 = V_0;
		EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline(L_13, ((-L_18)), (&V_1), L_19, NULL);
		// savedEntity.Owner.ComponentPools[entityData.Components[i]].Recycle (entityData.Components[i + 1]);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_20 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_21 = L_20.___Owner_2;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_22 = L_21->___ComponentPools_9;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_23 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23->___Components_2;
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_30 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = L_30->___Components_2;
		int32_t L_32 = V_2;
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Leopotam.Ecs.IEcsComponentPool::Recycle(System.Int32) */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_29, L_34);
		// entityData.ComponentsCountX2 -= 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_35 = V_0;
		int16_t* L_36 = (&L_35->___ComponentsCountX2_1);
		int16_t* L_37 = L_36;
		int32_t L_38 = *((int16_t*)L_37);
		*((int16_t*)L_37) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract(L_38, 2)));
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_39, 2));
	}

IL_0089:
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_40 = V_2;
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_41 = V_0;
		L_41->___ComponentsCountX2_1 = (int16_t)0;
		// savedEntity.Owner.RecycleEntityData (savedEntity.Id, ref entityData);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_42 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_43 = L_42.___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_44 = V_1;
		int32_t L_45 = L_44.___Id_0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_46 = V_0;
		EcsWorld_RecycleEntityData_mF32D0E0B4CE31E2AE7027C51DA0C54F9D53FC0D2(L_43, L_45, L_46, NULL);
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsNull(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsNull_mBB8B4EC837C182D9BE37C3CD37228440E8AF7357 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	{
		// return entity.Id == 0 && entity.Gen == 0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		int32_t L_1 = L_0->___Id_0;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		uint16_t L_3 = L_2->___Gen_1;
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsAlive_m714AA8A34DFEB6BFF0515AD0D30C1F6A7A1740D5 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	{
		// if (!IsWorldAlive (entity)) { return false; }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		bool L_1;
		L_1 = EcsEntityExtensions_IsWorldAlive_mAF0BB8400E0CFBF6875A2DF9EA00B9CD801583BB_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (!IsWorldAlive (entity)) { return false; }
		return (bool)0;
	}

IL_000a:
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_3 = L_2->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_5;
		L_5 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// return entityData.Gen == entity.Gen && entityData.ComponentsCountX2 >= 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_6 = V_0;
		uint16_t L_7 = L_6->___Gen_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_8 = ___entity0;
		uint16_t L_9 = L_8->___Gen_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0032;
		}
	}
	{
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_10 = V_0;
		int16_t L_11 = L_10->___ComponentsCountX2_1;
		return (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		return (bool)0;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsWorldAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsWorldAlive_mAF0BB8400E0CFBF6875A2DF9EA00B9CD801583BB (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	{
		// return entity.Owner != null && entity.Owner.IsAlive ();
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_3 = L_2->___Owner_2;
		bool L_4;
		L_4 = EcsWorld_IsAlive_mCBD30D99C44C9963296CBAB628A78C2423CC9155_inline(L_3, NULL);
		return L_4;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetComponentsCount(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetComponentsCount_mFE0586369524925438586E0F94E0868571C34DE4 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3;
		L_3 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// return entityData.ComponentsCountX2 <= 0 ? 0 : (entityData.ComponentsCountX2 >> 1);
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_4 = V_0;
		int16_t L_5 = L_4->___ComponentsCountX2_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_6 = V_0;
		int16_t L_7 = L_6->___ComponentsCountX2_1;
		return ((int32_t)((int32_t)L_7>>1));
	}

IL_001f:
	{
		return 0;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetComponentTypes(Leopotam.Ecs.EcsEntity&,System.Type[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetComponentTypes_m3683157F3CD04BD879F3D7B37B0685CAB61654C9 (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** ___list1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3;
		L_3 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// var itemsCount = entityData.ComponentsCountX2 >> 1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_4 = V_0;
		int16_t L_5 = L_4->___ComponentsCountX2_1;
		V_1 = ((int32_t)((int32_t)L_5>>1));
		// if (list == null || list.Length < itemsCount) {
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_6 = ___list1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = *((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB**)L_6);
		if (!L_7)
		{
			goto IL_0021;
		}
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_8 = ___list1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = *((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB**)L_8);
		int32_t L_10 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) >= ((int32_t)L_10)))
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		// list = new Type[itemsCount];
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_11 = ___list1;
		int32_t L_12 = V_1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)L_12);
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_13);
	}

IL_0029:
	{
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		V_2 = 0;
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		V_3 = 0;
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_14 = V_0;
		int16_t L_15 = L_14->___ComponentsCountX2_1;
		V_4 = L_15;
		goto IL_005c;
	}

IL_0037:
	{
		// list[j] = entity.Owner.ComponentPools[entityData.Components[i]].ItemType;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_16 = ___list1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_17 = *((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB**)L_16);
		int32_t L_18 = V_3;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_19 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_20 = L_19->___Owner_2;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_21 = L_20->___ComponentPools_9;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_22 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = L_22->___Components_2;
		int32_t L_24 = V_2;
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		Type_t* L_29;
		L_29 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* System.Type Leopotam.Ecs.IEcsComponentPool::get_ItemType() */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_28);
		ArrayElementTypeCheck (L_17, L_29);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (Type_t*)L_29);
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 2));
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_005c:
	{
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_32 = V_2;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0037;
		}
	}
	{
		// return itemsCount;
		int32_t L_34 = V_1;
		return L_34;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetComponentValues(Leopotam.Ecs.EcsEntity&,System.Object[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetComponentValues_m9CE27B381E851E78BDE4B0C4FA6459379D9804AA (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___list1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3;
		L_3 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// var itemsCount = entityData.ComponentsCountX2 >> 1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_4 = V_0;
		int16_t L_5 = L_4->___ComponentsCountX2_1;
		V_1 = ((int32_t)((int32_t)L_5>>1));
		// if (list == null || list.Length < itemsCount) {
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_6 = ___list1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_6);
		if (!L_7)
		{
			goto IL_0021;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_8 = ___list1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_8);
		int32_t L_10 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) >= ((int32_t)L_10)))
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		// list = new object[itemsCount];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_11 = ___list1;
		int32_t L_12 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_12);
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_13);
	}

IL_0029:
	{
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		V_2 = 0;
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		V_3 = 0;
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_14 = V_0;
		int16_t L_15 = L_14->___ComponentsCountX2_1;
		V_4 = L_15;
		goto IL_0066;
	}

IL_0037:
	{
		// list[j] = entity.Owner.ComponentPools[entityData.Components[i]].GetItem (entityData.Components[i + 1]);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_16 = ___list1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_16);
		int32_t L_18 = V_3;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_19 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_20 = L_19->___Owner_2;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_21 = L_20->___ComponentPools_9;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_22 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = L_22->___Components_2;
		int32_t L_24 = V_2;
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = L_29->___Components_2;
		int32_t L_31 = V_2;
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(1 /* System.Object Leopotam.Ecs.IEcsComponentPool::GetItem(System.Int32) */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_28, L_33);
		ArrayElementTypeCheck (L_17, L_34);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (RuntimeObject*)L_34);
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_35, 2));
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0066:
	{
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_37 = V_2;
		int32_t L_38 = V_4;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0037;
		}
	}
	{
		// return itemsCount;
		int32_t L_39 = V_1;
		return L_39;
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
// System.Void Leopotam.Ecs.EcsFilter::.ctor(Leopotam.Ecs.EcsWorld)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter__ctor_m8BE03B3B5DC04DF1AAC39E1779750D9B369258E6 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___world0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected EcsFilter (EcsWorld world) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// EntitiesCacheSize = world.Config.FilterEntitiesCacheSize;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ___world0;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_1 = (&L_0->___Config_7);
		int32_t L_2 = L_1->___FilterEntitiesCacheSize_4;
		__this->___EntitiesCacheSize_4 = L_2;
		// Entities = new EcsEntity[EntitiesCacheSize];
		int32_t L_3 = __this->___EntitiesCacheSize_4;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_4 = (EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C*)(EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C*)SZArrayNew(EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___Entities_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Entities_0), (void*)L_4);
		// EntitiesMap = new Dictionary<int, int> (EntitiesCacheSize);
		int32_t L_5 = __this->___EntitiesCacheSize_4;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_6 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22(L_6, L_5, Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_RuntimeMethod_var);
		__this->___EntitiesMap_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EntitiesMap_1), (void*)L_6);
		// _delayedOps = new DelayedOp[EntitiesCacheSize];
		int32_t L_7 = __this->___EntitiesCacheSize_4;
		DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670* L_8 = (DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670*)(DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670*)SZArrayNew(DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->____delayedOps_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____delayedOps_5), (void*)L_8);
		// }
		return;
	}
}
// Leopotam.Ecs.EcsFilter/Enumerator Leopotam.Ecs.EcsFilter::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B EcsFilter_GetEnumerator_m22DA51087D82F61AB4B6DF5846599DDD8EC0A49A (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	{
		// return new Enumerator (this);
		Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAD2CACAE4DC96A5F987178A5C4532E38610796C2_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Leopotam.Ecs.EcsEntity& Leopotam.Ecs.EcsFilter::GetEntity(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* EcsFilter_GetEntity_mDDEA2A83E7CDFFF9D766CE98642AF9E1892EE7D7 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, int32_t* ___idx0, const RuntimeMethod* method) 
{
	{
		// return ref Entities[idx];
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_0 = __this->___Entities_0;
		int32_t* L_1 = ___idx0;
		int32_t L_2 = *((int32_t*)L_1);
		return ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)));
	}
}
// System.Int32 Leopotam.Ecs.EcsFilter::GetEntitiesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsFilter_GetEntitiesCount_m1BDEEE64638444BB80F6331A144CE7C760ECE9C1 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	{
		// return EntitiesCount;
		int32_t L_0 = __this->___EntitiesCount_2;
		return L_0;
	}
}
// System.Boolean Leopotam.Ecs.EcsFilter::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_IsEmpty_m0A8F9AB37F444FE7817BC980FC6075EF41A43210 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	{
		// return EntitiesCount == 0;
		int32_t L_0 = __this->___EntitiesCount_2;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Leopotam.Ecs.EcsFilter::IsCompatible(Leopotam.Ecs.EcsWorld/EcsEntityData&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData0, int32_t ___addedRemovedTypeIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// var incIdx = IncludedTypeIndices.Length - 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___IncludedTypeIndices_7;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1));
		goto IL_0048;
	}

IL_000d:
	{
		// var typeIdx = IncludedTypeIndices[incIdx];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___IncludedTypeIndices_7;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// var idx = entityData.ComponentsCountX2 - 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_5 = ___entityData0;
		int16_t L_6 = L_5->___ComponentsCountX2_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 2));
		goto IL_003b;
	}

IL_0021:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_7 = ___entityData0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___Components_2;
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		// if (typeIdx2 == -addedRemovedTypeIndex) {
		int32_t L_12 = V_3;
		int32_t L_13 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_12) == ((int32_t)((-L_13)))))
		{
			goto IL_0037;
		}
	}
	{
		// if (typeIdx2 == addedRemovedTypeIndex || typeIdx2 == typeIdx) {
		int32_t L_14 = V_3;
		int32_t L_15 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_003f;
		}
	}

IL_0037:
	{
		// for (; idx >= 0; idx -= 2) {
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_18, 2));
	}

IL_003b:
	{
		// for (; idx >= 0; idx -= 2) {
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}

IL_003f:
	{
		// if (idx == -2) {
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2))))
		{
			goto IL_004c;
		}
	}
	{
		// for (; incIdx >= 0; incIdx--) {
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_0048:
	{
		// for (; incIdx >= 0; incIdx--) {
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}

IL_004c:
	{
		// if (incIdx != -1) {
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_0052;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0052:
	{
		// if (ExcludedTypeIndices != null) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->___ExcludedTypeIndices_8;
		if (!L_24)
		{
			goto IL_00b1;
		}
	}
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		V_4 = 0;
		goto IL_00a5;
	}

IL_005f:
	{
		// var typeIdx = ExcludedTypeIndices[excIdx];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->___ExcludedTypeIndices_8;
		int32_t L_26 = V_4;
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		V_5 = L_28;
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_29 = ___entityData0;
		int16_t L_30 = L_29->___ComponentsCountX2_1;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, 2));
		goto IL_009a;
	}

IL_0076:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_31 = ___entityData0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = L_31->___Components_2;
		int32_t L_33 = V_6;
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_7 = L_35;
		// if (typeIdx2 == -addedRemovedTypeIndex) {
		int32_t L_36 = V_7;
		int32_t L_37 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_36) == ((int32_t)((-L_37)))))
		{
			goto IL_0094;
		}
	}
	{
		// if (typeIdx2 == addedRemovedTypeIndex || typeIdx2 == typeIdx) {
		int32_t L_38 = V_7;
		int32_t L_39 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_38) == ((int32_t)L_39)))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_40 = V_7;
		int32_t L_41 = V_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_0094;
		}
	}

IL_0092:
	{
		// return false;
		return (bool)0;
	}

IL_0094:
	{
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_42, 2));
	}

IL_009a:
	{
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		int32_t L_43 = V_6;
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00a5:
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_45 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = __this->___ExcludedTypeIndices_8;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_005f;
		}
	}

IL_00b1:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Leopotam.Ecs.EcsFilter::AddDelayedOp(System.Boolean,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_AddDelayedOp_m44BC0C9E8CDF94E3CDE5F99F84308D2C2ADF28A4 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, bool ___isAdd0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_m3425CBD5275E5E4ACFF0BF20E7FC87C91D4AF378_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (LockCount <= 0) {
		int32_t L_0 = __this->___LockCount_3;
		if ((((int32_t)L_0) > ((int32_t)0)))
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
		// if (_delayedOps.Length == _delayedOpsCount) {
		DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670* L_1 = __this->____delayedOps_5;
		int32_t L_2 = __this->____delayedOpsCount_6;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((uint32_t)L_2))))
		{
			goto IL_002e;
		}
	}
	{
		// Array.Resize (ref _delayedOps, _delayedOpsCount << 1);
		DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670** L_3 = (&__this->____delayedOps_5);
		int32_t L_4 = __this->____delayedOpsCount_6;
		Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_m3425CBD5275E5E4ACFF0BF20E7FC87C91D4AF378(L_3, ((int32_t)(L_4<<1)), Array_Resize_TisDelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_m3425CBD5275E5E4ACFF0BF20E7FC87C91D4AF378_RuntimeMethod_var);
	}

IL_002e:
	{
		// ref var op = ref _delayedOps[_delayedOpsCount++];
		DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670* L_5 = __this->____delayedOps_5;
		int32_t L_6 = __this->____delayedOpsCount_6;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->____delayedOpsCount_6 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		// op.IsAdd = isAdd;
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_9 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)));
		bool L_10 = ___isAdd0;
		L_9->___IsAdd_0 = L_10;
		// op.Entity = entity;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_11 = ___entity1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_12 = (*(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)L_11);
		L_9->___Entity_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_9->___Entity_1))->___Owner_2), (void*)NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void Leopotam.Ecs.EcsFilter::Lock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter_Lock_mA02D6F8F94E8DE65F1DC6F854EF457260AFF57F8 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	{
		// LockCount++;
		int32_t L_0 = __this->___LockCount_3;
		__this->___LockCount_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsFilter::Unlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter_Unlock_m194398A287AA4320005015ED2F33DB4116FF50B7 (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* V_2 = NULL;
	{
		// LockCount--;
		int32_t L_0 = __this->___LockCount_3;
		__this->___LockCount_3 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (LockCount == 0 && _delayedOpsCount > 0) {
		int32_t L_1 = __this->___LockCount_3;
		if (L_1)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_2 = __this->____delayedOpsCount_6;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_3 = __this->____delayedOpsCount_6;
		V_1 = L_3;
		goto IL_005d;
	}

IL_002a:
	{
		// ref var op = ref _delayedOps[i];
		DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670* L_4 = __this->____delayedOps_5;
		int32_t L_5 = V_0;
		V_2 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)));
		// if (op.IsAdd) {
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_6 = V_2;
		bool L_7 = L_6->___IsAdd_0;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// OnAddEntity (op.Entity);
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_8 = V_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_9 = (&L_8->___Entity_1);
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_9);
		goto IL_0059;
	}

IL_004d:
	{
		// OnRemoveEntity (op.Entity);
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_10 = V_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_11 = (&L_10->___Entity_1);
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_11);
	}

IL_0059:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_005d:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002a;
		}
	}
	{
		// _delayedOpsCount = 0;
		__this->____delayedOpsCount_6 = 0;
	}

IL_0068:
	{
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
// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshal_pinvoke(const Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B& unmarshaled, Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_pinvoke& marshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshal_pinvoke_back(const Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_pinvoke& marshaled, Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B& unmarshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshal_pinvoke_cleanup(Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshal_com(const Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B& unmarshaled, Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_com& marshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshal_com_back(const Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_com& marshaled, Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B& unmarshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshal_com_cleanup(Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B_marshaled_com& marshaled)
{
}
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::.ctor(Leopotam.Ecs.EcsFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mAD2CACAE4DC96A5F987178A5C4532E38610796C2 (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ___filter0, const RuntimeMethod* method) 
{
	{
		// _filter = filter;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_0 = ___filter0;
		__this->____filter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter_0), (void*)L_0);
		// _count = _filter.GetEntitiesCount ();
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_1 = __this->____filter_0;
		int32_t L_2;
		L_2 = EcsFilter_GetEntitiesCount_m1BDEEE64638444BB80F6331A144CE7C760ECE9C1_inline(L_1, NULL);
		__this->____count_1 = L_2;
		// _idx = -1;
		__this->____idx_2 = (-1);
		// _filter.Lock ();
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_3 = __this->____filter_0;
		EcsFilter_Lock_mA02D6F8F94E8DE65F1DC6F854EF457260AFF57F8_inline(L_3, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_mAD2CACAE4DC96A5F987178A5C4532E38610796C2_AdjustorThunk (RuntimeObject* __this, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ___filter0, const RuntimeMethod* method)
{
	Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B*>(__this + _offset);
	Enumerator__ctor_mAD2CACAE4DC96A5F987178A5C4532E38610796C2_inline(_thisAdjusted, ___filter0, method);
}
// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m3643613B3D6014D3200CB8D0F5F50F0C6CCFFCCD (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _idx;
		int32_t L_0 = __this->____idx_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Enumerator_get_Current_m3643613B3D6014D3200CB8D0F5F50F0C6CCFFCCD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Enumerator_get_Current_m3643613B3D6014D3200CB8D0F5F50F0C6CCFFCCD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAB0D6EEA7028DFCB8261808853152882FC8EBBA8 (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) 
{
	{
		// _filter.Unlock ();
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_0 = __this->____filter_0;
		EcsFilter_Unlock_m194398A287AA4320005015ED2F33DB4116FF50B7_inline(L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mAB0D6EEA7028DFCB8261808853152882FC8EBBA8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B*>(__this + _offset);
	Enumerator_Dispose_mAB0D6EEA7028DFCB8261808853152882FC8EBBA8_inline(_thisAdjusted, method);
}
// System.Boolean Leopotam.Ecs.EcsFilter/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA175620871ECBCBDEA305F457591FD1A5197389E (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return ++_idx < _count;
		int32_t L_0 = __this->____idx_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->____idx_2 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count_1;
		return (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mA175620871ECBCBDEA305F457591FD1A5197389E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B*>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mA175620871ECBCBDEA305F457591FD1A5197389E_inline(_thisAdjusted, method);
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


// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshal_pinvoke(const DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643& unmarshaled, DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
IL2CPP_EXTERN_C void DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshal_pinvoke_back(const DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_pinvoke& marshaled, DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643& unmarshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshal_pinvoke_cleanup(DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshal_com(const DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643& unmarshaled, DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_com& marshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
IL2CPP_EXTERN_C void DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshal_com_back(const DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_com& marshaled, DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643& unmarshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshal_com_cleanup(DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643_marshaled_com& marshaled)
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
// System.Void Leopotam.Ecs.EcsSystems::.ctor(Leopotam.Ecs.EcsWorld,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems__ctor_m9EEBEADC48F59CC8272A29A355A23AF492857B4B (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___world0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA89437E6304FF9DE4848A9FFF946BF49A0F5DC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_m2D0E0C3C4F67DFE1B2189E6CD60E541BFF82F977_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_m8EF3B1BEB3E023A2240DED5D66296C53791C5948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly EcsGrowList<IEcsSystem> _allSystems = new EcsGrowList<IEcsSystem> (64);
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_0 = (EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676*)il2cpp_codegen_object_new(EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m2D0E0C3C4F67DFE1B2189E6CD60E541BFF82F977_inline(L_0, ((int32_t)64), EcsGrowList_1__ctor_m2D0E0C3C4F67DFE1B2189E6CD60E541BFF82F977_RuntimeMethod_var);
		__this->____allSystems_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allSystems_2), (void*)L_0);
		// readonly EcsGrowList<EcsSystemsRunItem> _runSystems = new EcsGrowList<EcsSystemsRunItem> (64);
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_1 = (EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442*)il2cpp_codegen_object_new(EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m8EF3B1BEB3E023A2240DED5D66296C53791C5948_inline(L_1, ((int32_t)64), EcsGrowList_1__ctor_m8EF3B1BEB3E023A2240DED5D66296C53791C5948_RuntimeMethod_var);
		__this->____runSystems_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runSystems_3), (void*)L_1);
		// readonly Dictionary<int, int> _namedRunSystems = new Dictionary<int, int> (64);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_2 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22(L_2, ((int32_t)64), Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_RuntimeMethod_var);
		__this->____namedRunSystems_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____namedRunSystems_4), (void*)L_2);
		// readonly Dictionary<Type, object> _injections = new Dictionary<Type, object> (32);
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_3 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)il2cpp_codegen_object_new(Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA89437E6304FF9DE4848A9FFF946BF49A0F5DC79(L_3, ((int32_t)32), Dictionary_2__ctor_mA89437E6304FF9DE4848A9FFF946BF49A0F5DC79_RuntimeMethod_var);
		__this->____injections_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____injections_5), (void*)L_3);
		// public EcsSystems (EcsWorld world, string name = null) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// World = world;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_4 = ___world0;
		__this->___World_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___World_1), (void*)L_4);
		// Name = name;
		String_t* L_5 = ___name1;
		__this->___Name_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_0), (void*)L_5);
		// }
		return;
	}
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::Add(Leopotam.Ecs.IEcsSystem,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_Add_mA343724876083CFE729D753EE4D9E8FC03D7EE05 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, RuntimeObject* ___system0, String_t* ___namedRunSystem1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m1362B595B89FB7EBA1B3331BB951D46BA18D0232_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m7781F80F65A40FAF0240500CE3DC03904FDA7275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* V_0 = NULL;
	{
		// _allSystems.Add (system);
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_0 = __this->____allSystems_2;
		RuntimeObject* L_1 = ___system0;
		EcsGrowList_1_Add_m1362B595B89FB7EBA1B3331BB951D46BA18D0232_inline(L_0, L_1, EcsGrowList_1_Add_m1362B595B89FB7EBA1B3331BB951D46BA18D0232_RuntimeMethod_var);
		// if (system is IEcsRunSystem) {
		RuntimeObject* L_2 = ___system0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}
	{
		// if (namedRunSystem == null && system is EcsSystems ecsSystems) {
		String_t* L_3 = ___namedRunSystem1;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_4 = ___system0;
		V_0 = ((EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B*)IsInstSealed((RuntimeObject*)L_4, EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B_il2cpp_TypeInfo_var));
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// namedRunSystem = ecsSystems.Name;
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_6 = V_0;
		String_t* L_7 = L_6->___Name_0;
		___namedRunSystem1 = L_7;
	}

IL_0029:
	{
		// if (namedRunSystem != null) {
		String_t* L_8 = ___namedRunSystem1;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		// _namedRunSystems[namedRunSystem.GetHashCode ()] = _runSystems.Count;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_9 = __this->____namedRunSystems_4;
		String_t* L_10 = ___namedRunSystem1;
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_12 = __this->____runSystems_3;
		int32_t L_13 = L_12->___Count_1;
		Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF(L_9, L_11, L_13, Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_RuntimeMethod_var);
	}

IL_0048:
	{
		// _runSystems.Add (new EcsSystemsRunItem { Active = true, System = (IEcsRunSystem) system });
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_14 = __this->____runSystems_3;
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_15 = (EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF*)il2cpp_codegen_object_new(EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF_il2cpp_TypeInfo_var);
		EcsSystemsRunItem__ctor_m5583332E82FC941C64E61B66DCA60CDBFF88674A(L_15, NULL);
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_16 = L_15;
		L_16->___Active_0 = (bool)1;
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_17 = L_16;
		RuntimeObject* L_18 = ___system0;
		L_17->___System_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_18, IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___System_1), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_18, IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var)));
		EcsGrowList_1_Add_m7781F80F65A40FAF0240500CE3DC03904FDA7275_inline(L_14, L_17, EcsGrowList_1_Add_m7781F80F65A40FAF0240500CE3DC03904FDA7275_RuntimeMethod_var);
	}

IL_006b:
	{
		// return this;
		return __this;
	}
}
// System.Int32 Leopotam.Ecs.EcsSystems::GetNamedRunSystem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsSystems_GetNamedRunSystem_mCE067A379BFC7FD092B657BCC59A6FB29DF05977 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return _namedRunSystems.TryGetValue (name.GetHashCode (), out var idx) ? idx : -1;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_0 = __this->____namedRunSystems_4;
		String_t* L_1 = ___name0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (-1);
	}

IL_0017:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::SetRunSystemState(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_SetRunSystemState_mA144399AAF2339C35D37DE3D80EF51B04A50F78A (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, int32_t ___idx0, bool ___state1, const RuntimeMethod* method) 
{
	{
		// _runSystems.Items[idx].Active = state;
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_0 = __this->____runSystems_3;
		EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29* L_1 = L_0->___Items_0;
		int32_t L_2 = ___idx0;
		int32_t L_3 = L_2;
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5 = ___state1;
		L_4->___Active_0 = L_5;
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsSystems::GetRunSystemState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsSystems_GetRunSystemState_mF1C4467122FAD975341916824456CE9ED4DBA97F (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	{
		// return _runSystems.Items[idx].Active;
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_0 = __this->____runSystems_3;
		EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29* L_1 = L_0->___Items_0;
		int32_t L_2 = ___idx0;
		int32_t L_3 = L_2;
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5 = L_4->___Active_0;
		return L_5;
	}
}
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem> Leopotam.Ecs.EcsSystems::GetAllSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* EcsSystems_GetAllSystems_m1C39035CC02ADEE0D8E009F94F8BED8B0E9ED480 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) 
{
	{
		// return _allSystems;
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_0 = __this->____allSystems_2;
		return L_0;
	}
}
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem> Leopotam.Ecs.EcsSystems::GetRunSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* EcsSystems_GetRunSystems_mBA38AD6D5B0F797CF9866E796820627BD973A8E5 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) 
{
	{
		// return _runSystems;
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_0 = __this->____runSystems_3;
		return L_0;
	}
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::Inject(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_Inject_mF2CC0D4D2815DD8C43515393BA345688E7FDDB84 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, RuntimeObject* ___obj0, Type_t* ___overridenType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (overridenType == null) {
		Type_t* L_0 = ___overridenType1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// overridenType = obj.GetType ();
		RuntimeObject* L_2 = ___obj0;
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		___overridenType1 = L_3;
	}

IL_0011:
	{
		// _injections[overridenType] = obj;
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_4 = __this->____injections_5;
		Type_t* L_5 = ___overridenType1;
		RuntimeObject* L_6 = ___obj0;
		Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96(L_4, L_5, L_6, Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::ProcessInjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_ProcessInjects_m16FD1E7A4FD791B01481D017CA42C54DEDE8AD36 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* V_2 = NULL;
	Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (!_injected) {
		bool L_0 = __this->____injected_6;
		if (L_0)
		{
			goto IL_00b6;
		}
	}
	{
		// _injected = true;
		__this->____injected_6 = (bool)1;
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_1 = __this->____allSystems_2;
		int32_t L_2 = L_1->___Count_1;
		V_1 = L_2;
		goto IL_00af;
	}

IL_0025:
	{
		// if (_allSystems.Items[i] is EcsSystems nestedSystems) {
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_3 = __this->____allSystems_2;
		IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* L_4 = L_3->___Items_0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = ((EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B*)IsInstSealed((RuntimeObject*)L_7, EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B_il2cpp_TypeInfo_var));
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_8 = V_2;
		if (!L_8)
		{
			goto IL_008d;
		}
	}
	{
		// foreach (var pair in _injections) {
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_9 = __this->____injections_5;
		Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 L_10;
		L_10 = Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB(L_9, Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB_RuntimeMethod_var);
		V_3 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0076:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382((&V_3), Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006b_1;
			}

IL_0049_1:
			{
				// foreach (var pair in _injections) {
				KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA L_11;
				L_11 = Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_inline((&V_3), Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_RuntimeMethod_var);
				V_4 = L_11;
				// nestedSystems._injections[pair.Key] = pair.Value;
				EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_12 = V_2;
				Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_13 = L_12->____injections_5;
				Type_t* L_14;
				L_14 = KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_inline((&V_4), KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
				RuntimeObject* L_15;
				L_15 = KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_inline((&V_4), KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_RuntimeMethod_var);
				Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96(L_13, L_14, L_15, Dictionary_2_set_Item_mDCA5D6962B16CA1ECF35EC04B0F4E79475C5EC96_RuntimeMethod_var);
			}

IL_006b_1:
			{
				// foreach (var pair in _injections) {
				bool L_16;
				L_16 = Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B((&V_3), Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0049_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// nestedSystems.ProcessInjects ();
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_17 = V_2;
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_18;
		L_18 = EcsSystems_ProcessInjects_m16FD1E7A4FD791B01481D017CA42C54DEDE8AD36(L_17, NULL);
		goto IL_00ab;
	}

IL_008d:
	{
		// InjectDataToSystem (_allSystems.Items[i], World, _injections);
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_19 = __this->____allSystems_2;
		IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* L_20 = L_19->___Items_0;
		int32_t L_21 = V_0;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_24 = __this->___World_1;
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_25 = __this->____injections_5;
		EcsSystems_InjectDataToSystem_mE6A96CE141E0AD74D20D68AD256DAC4D869C5A6A(L_23, L_24, L_25, NULL);
	}

IL_00ab:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00af:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_27 = V_0;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0025;
		}
	}

IL_00b6:
	{
		// return this;
		return __this;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Init_m904C81F43527CB190F17835DF10F1F64EAE5CB64 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsInitSystem_tE0C75B22B6D0FD328CDA5B8863A7CC4AF512BC04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPreInitSystem_t7806A863D80BA54FA5599D875EB236D89348E1F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	{
		// ProcessInjects ();
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_0;
		L_0 = EcsSystems_ProcessInjects_m16FD1E7A4FD791B01481D017CA42C54DEDE8AD36(__this, NULL);
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_1 = __this->____allSystems_2;
		int32_t L_2 = L_1->___Count_1;
		V_1 = L_2;
		goto IL_0037;
	}

IL_0017:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_3 = __this->____allSystems_2;
		IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* L_4 = L_3->___Items_0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		// if (system is IEcsPreInitSystem preInitSystem) {
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IEcsPreInitSystem_t7806A863D80BA54FA5599D875EB236D89348E1F4_il2cpp_TypeInfo_var));
		RuntimeObject* L_8 = V_2;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		// preInitSystem.PreInit ();
		RuntimeObject* L_9 = V_2;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsPreInitSystem::PreInit() */, IEcsPreInitSystem_t7806A863D80BA54FA5599D875EB236D89348E1F4_il2cpp_TypeInfo_var, L_9);
	}

IL_0033:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0037:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0017;
		}
	}
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		V_3 = 0;
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_13 = __this->____allSystems_2;
		int32_t L_14 = L_13->___Count_1;
		V_4 = L_14;
		goto IL_006f;
	}

IL_004c:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_15 = __this->____allSystems_2;
		IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* L_16 = L_15->___Items_0;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		// if (system is IEcsInitSystem initSystem) {
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEcsInitSystem_tE0C75B22B6D0FD328CDA5B8863A7CC4AF512BC04_il2cpp_TypeInfo_var));
		RuntimeObject* L_20 = V_5;
		if (!L_20)
		{
			goto IL_006b;
		}
	}
	{
		// initSystem.Init ();
		RuntimeObject* L_21 = V_5;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsInitSystem::Init() */, IEcsInitSystem_tE0C75B22B6D0FD328CDA5B8863A7CC4AF512BC04_il2cpp_TypeInfo_var, L_21);
	}

IL_006b:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006f:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_004c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Run_m44FBDAF554CD169B2D913C4FA5884C460105D172 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* V_2 = NULL;
	{
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_0 = __this->____runSystems_3;
		int32_t L_1 = L_0->___Count_1;
		V_1 = L_1;
		goto IL_0035;
	}

IL_0010:
	{
		// var runItem = _runSystems.Items[i];
		EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442* L_2 = __this->____runSystems_3;
		EcsSystemsRunItemU5BU5D_tC0773D762D85EEA5701C25D539B2F787110F5E29* L_3 = L_2->___Items_0;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (runItem.Active) {
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_7 = V_2;
		bool L_8 = L_7->___Active_0;
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		// runItem.System.Run ();
		EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* L_9 = V_2;
		RuntimeObject* L_10 = L_9->___System_1;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsRunSystem::Run() */, IEcsRunSystem_t952C96C577CEBB09E08ECBBA204B2B998F358B79_il2cpp_TypeInfo_var, L_10);
	}

IL_0031:
	{
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0035:
	{
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Destroy_mA9987A30E62146C975F2C2E023AB5414FE7A9269 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsDestroySystem_t618262FD9F9BDF9D5B211E96F19844F71EEA0A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPostDestroySystem_tD4B1DAFFBAF41074077DAACFE3305204FCA06858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_0 = __this->____allSystems_2;
		int32_t L_1 = L_0->___Count_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0030;
	}

IL_0010:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_2 = __this->____allSystems_2;
		IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* L_3 = L_2->___Items_0;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		// if (system is IEcsDestroySystem destroySystem) {
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IEcsDestroySystem_t618262FD9F9BDF9D5B211E96F19844F71EEA0A1D_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		// destroySystem.Destroy ();
		RuntimeObject* L_8 = V_1;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsDestroySystem::Destroy() */, IEcsDestroySystem_t618262FD9F9BDF9D5B211E96F19844F71EEA0A1D_il2cpp_TypeInfo_var, L_8);
	}

IL_002c:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_0030:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_11 = __this->____allSystems_2;
		int32_t L_12 = L_11->___Count_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0064;
	}

IL_0044:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676* L_13 = __this->____allSystems_2;
		IEcsSystemU5BU5D_t01603786BF421D79490FAF8E16607C66CC2ABB2B* L_14 = L_13->___Items_0;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		// if (system is IEcsPostDestroySystem postDestroySystem) {
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IEcsPostDestroySystem_tD4B1DAFFBAF41074077DAACFE3305204FCA06858_il2cpp_TypeInfo_var));
		RuntimeObject* L_18 = V_3;
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		// postDestroySystem.PostDestroy ();
		RuntimeObject* L_19 = V_3;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsPostDestroySystem::PostDestroy() */, IEcsPostDestroySystem_tD4B1DAFFBAF41074077DAACFE3305204FCA06858_il2cpp_TypeInfo_var, L_19);
	}

IL_0060:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
	}

IL_0064:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::InjectDataToSystem(Leopotam.Ecs.IEcsSystem,Leopotam.Ecs.EcsWorld,System.Collections.Generic.Dictionary`2<System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_InjectDataToSystem_mE6A96CE141E0AD74D20D68AD256DAC4D869C5A6A (RuntimeObject* ___system0, EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___world1, Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___injections2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsIgnoreInjectAttribute_t5C2E58E9FA2D3E282E15334B5523F49E97851448_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_3 = NULL;
	int32_t V_4 = 0;
	FieldInfo_t* V_5 = NULL;
	Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 V_6;
	memset((&V_6), 0, sizeof(V_6));
	KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// var systemType = system.GetType ();
		RuntimeObject* L_0 = ___system0;
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		// var worldType = world.GetType ();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_2 = ___world1;
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		V_0 = L_3;
		// var filterType = typeof (EcsFilter);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		V_1 = L_5;
		// var ignoreType = typeof (EcsIgnoreInjectAttribute);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (EcsIgnoreInjectAttribute_t5C2E58E9FA2D3E282E15334B5523F49E97851448_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		V_2 = L_7;
		// foreach (var f in systemType.GetFields (BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)) {
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_8;
		L_8 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(83 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_1, ((int32_t)52));
		V_3 = L_8;
		V_4 = 0;
		goto IL_00eb;
	}

IL_0033:
	{
		// foreach (var f in systemType.GetFields (BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)) {
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_9 = V_3;
		int32_t L_10 = V_4;
		int32_t L_11 = L_10;
		FieldInfo_t* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_5 = L_12;
		// if (f.IsStatic || Attribute.IsDefined (f, ignoreType)) {
		FieldInfo_t* L_13 = V_5;
		bool L_14;
		L_14 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_13, NULL);
		if (L_14)
		{
			goto IL_00e5;
		}
	}
	{
		FieldInfo_t* L_15 = V_5;
		Type_t* L_16 = V_2;
		bool L_17;
		L_17 = Attribute_IsDefined_m9F5E52575351D870AF59EA6A4B0CDBD1A10B3DF1(L_15, L_16, NULL);
		if (L_17)
		{
			goto IL_00e5;
		}
	}
	{
		// if (f.FieldType.IsAssignableFrom (worldType)) {
		FieldInfo_t* L_18 = V_5;
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_18);
		Type_t* L_20 = V_0;
		bool L_21;
		L_21 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_19, L_20);
		if (!L_21)
		{
			goto IL_006c;
		}
	}
	{
		// f.SetValue (system, world);
		FieldInfo_t* L_22 = V_5;
		RuntimeObject* L_23 = ___system0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_24 = ___world1;
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_22, L_23, L_24, NULL);
		// continue;
		goto IL_00e5;
	}

IL_006c:
	{
		// if (f.FieldType.IsSubclassOf (filterType)) {
		FieldInfo_t* L_25 = V_5;
		Type_t* L_26;
		L_26 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_25);
		Type_t* L_27 = V_1;
		bool L_28;
		L_28 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(20 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_26, L_27);
		if (!L_28)
		{
			goto IL_0093;
		}
	}
	{
		// f.SetValue (system, world.GetFilter (f.FieldType));
		FieldInfo_t* L_29 = V_5;
		RuntimeObject* L_30 = ___system0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_31 = ___world1;
		FieldInfo_t* L_32 = V_5;
		Type_t* L_33;
		L_33 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_32);
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_34;
		L_34 = EcsWorld_GetFilter_m52CD6F02CE215E1CA1A2C041022F5EE4E4283A44(L_31, L_33, (bool)1, NULL);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_29, L_30, L_34, NULL);
		// continue;
		goto IL_00e5;
	}

IL_0093:
	{
		// foreach (var pair in injections) {
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_35 = ___injections2;
		Enumerator_t54912F955AC650EB9D1184290F33662BA237EFF1 L_36;
		L_36 = Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB(L_35, Dictionary_2_GetEnumerator_mEACC35835C05B20642437541D2844FDA88378AAB_RuntimeMethod_var);
		V_6 = L_36;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382((&V_6), Enumerator_Dispose_mA452FB910DA7DD11178A7DF048CD2F9F4255F382_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00cc_1;
			}

IL_009d_1:
			{
				// foreach (var pair in injections) {
				KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA L_37;
				L_37 = Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_inline((&V_6), Enumerator_get_Current_mD550F51A6EADAA1F4604F3F610F0C7780DC8D2E8_RuntimeMethod_var);
				V_7 = L_37;
				// if (f.FieldType.IsAssignableFrom (pair.Key)) {
				FieldInfo_t* L_38 = V_5;
				Type_t* L_39;
				L_39 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_38);
				Type_t* L_40;
				L_40 = KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_inline((&V_7), KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
				bool L_41;
				L_41 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_39, L_40);
				if (!L_41)
				{
					goto IL_00cc_1;
				}
			}
			{
				// f.SetValue (system, pair.Value);
				FieldInfo_t* L_42 = V_5;
				RuntimeObject* L_43 = ___system0;
				RuntimeObject* L_44;
				L_44 = KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_inline((&V_7), KeyValuePair_2_get_Value_m09F40736D1027FF053D1615DC80BBCCDD581870E_RuntimeMethod_var);
				FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_42, L_43, L_44, NULL);
				// break;
				goto IL_00e5;
			}

IL_00cc_1:
			{
				// foreach (var pair in injections) {
				bool L_45;
				L_45 = Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B((&V_6), Enumerator_MoveNext_m686E9F4F715B3E1E3530A9516FB350F32726418B_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_009d_1;
				}
			}
			{
				goto IL_00e5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e5:
	{
		int32_t L_46 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00eb:
	{
		// foreach (var f in systemType.GetFields (BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)) {
		int32_t L_47 = V_4;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_48 = V_3;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_0033;
		}
	}
	{
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
// System.Void Leopotam.Ecs.EcsSystemsRunItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystemsRunItem__ctor_m5583332E82FC941C64E61B66DCA60CDBFF88674A (EcsSystemsRunItem_tC86619AF6C15024EF70C76FA34BC7C30CC6161FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Leopotam.Ecs.EcsWorld::.ctor(Leopotam.Ecs.EcsWorldConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld__ctor_m705CEBB3343D348D4838397D259190BDEB4C50E6 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B2_0 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B3_1 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B5_0 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B6_1 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B8_0 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B9_1 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B11_0 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B12_1 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B14_0 = NULL;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* G_B15_1 = NULL;
	{
		// public EcsWorld (EcsWorldConfig config = default) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var finalConfig = new EcsWorldConfig {
		//     EntityComponentsCacheSize = config.EntityComponentsCacheSize <= 0
		//         ? EcsWorldConfig.DefaultEntityComponentsCacheSize
		//         : config.EntityComponentsCacheSize,
		//     FilterEntitiesCacheSize = config.FilterEntitiesCacheSize <= 0
		//         ? EcsWorldConfig.DefaultFilterEntitiesCacheSize
		//         : config.FilterEntitiesCacheSize,
		//     WorldEntitiesCacheSize = config.WorldEntitiesCacheSize <= 0
		//         ? EcsWorldConfig.DefaultWorldEntitiesCacheSize
		//         : config.WorldEntitiesCacheSize,
		//     WorldFiltersCacheSize = config.WorldFiltersCacheSize <= 0
		//         ? EcsWorldConfig.DefaultWorldFiltersCacheSize
		//         : config.WorldFiltersCacheSize,
		//     WorldComponentPoolsCacheSize = config.WorldComponentPoolsCacheSize <= 0
		//         ? EcsWorldConfig.DefaultWorldComponentPoolsCacheSize
		//         : config.WorldComponentPoolsCacheSize
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8));
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_0 = ___config0;
		int32_t L_1 = L_0.___EntityComponentsCacheSize_3;
		G_B1_0 = (&V_1);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			G_B2_0 = (&V_1);
			goto IL_0021;
		}
	}
	{
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_2 = ___config0;
		int32_t L_3 = L_2.___EntityComponentsCacheSize_3;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 8;
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		G_B3_1->___EntityComponentsCacheSize_3 = G_B3_0;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_4 = ___config0;
		int32_t L_5 = L_4.___FilterEntitiesCacheSize_4;
		G_B4_0 = (&V_1);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			G_B5_0 = (&V_1);
			goto IL_003a;
		}
	}
	{
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_6 = ___config0;
		int32_t L_7 = L_6.___FilterEntitiesCacheSize_4;
		G_B6_0 = L_7;
		G_B6_1 = G_B4_0;
		goto IL_003f;
	}

IL_003a:
	{
		G_B6_0 = ((int32_t)256);
		G_B6_1 = G_B5_0;
	}

IL_003f:
	{
		G_B6_1->___FilterEntitiesCacheSize_4 = G_B6_0;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_8 = ___config0;
		int32_t L_9 = L_8.___WorldEntitiesCacheSize_0;
		G_B7_0 = (&V_1);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			G_B8_0 = (&V_1);
			goto IL_0057;
		}
	}
	{
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_10 = ___config0;
		int32_t L_11 = L_10.___WorldEntitiesCacheSize_0;
		G_B9_0 = L_11;
		G_B9_1 = G_B7_0;
		goto IL_005c;
	}

IL_0057:
	{
		G_B9_0 = ((int32_t)1024);
		G_B9_1 = G_B8_0;
	}

IL_005c:
	{
		G_B9_1->___WorldEntitiesCacheSize_0 = G_B9_0;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_12 = ___config0;
		int32_t L_13 = L_12.___WorldFiltersCacheSize_1;
		G_B10_0 = (&V_1);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			G_B11_0 = (&V_1);
			goto IL_0074;
		}
	}
	{
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_14 = ___config0;
		int32_t L_15 = L_14.___WorldFiltersCacheSize_1;
		G_B12_0 = L_15;
		G_B12_1 = G_B10_0;
		goto IL_0079;
	}

IL_0074:
	{
		G_B12_0 = ((int32_t)128);
		G_B12_1 = G_B11_0;
	}

IL_0079:
	{
		G_B12_1->___WorldFiltersCacheSize_1 = G_B12_0;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_16 = ___config0;
		int32_t L_17 = L_16.___WorldComponentPoolsCacheSize_2;
		G_B13_0 = (&V_1);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			G_B14_0 = (&V_1);
			goto IL_0091;
		}
	}
	{
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_18 = ___config0;
		int32_t L_19 = L_18.___WorldComponentPoolsCacheSize_2;
		G_B15_0 = L_19;
		G_B15_1 = G_B13_0;
		goto IL_0096;
	}

IL_0091:
	{
		G_B15_0 = ((int32_t)512);
		G_B15_1 = G_B14_0;
	}

IL_0096:
	{
		G_B15_1->___WorldComponentPoolsCacheSize_2 = G_B15_0;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_20 = V_1;
		V_0 = L_20;
		// Config = finalConfig;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8 L_21 = V_0;
		__this->___Config_7 = L_21;
		// Entities = new EcsEntityData[Config.WorldEntitiesCacheSize];
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_22 = (&__this->___Config_7);
		int32_t L_23 = L_22->___WorldEntitiesCacheSize_0;
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_24 = (EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469*)(EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469*)SZArrayNew(EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469_il2cpp_TypeInfo_var, (uint32_t)L_23);
		__this->___Entities_0 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Entities_0), (void*)L_24);
		// FreeEntities = new EcsGrowList<int> (Config.WorldEntitiesCacheSize);
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_25 = (&__this->___Config_7);
		int32_t L_26 = L_25->___WorldEntitiesCacheSize_0;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_27 = (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3*)il2cpp_codegen_object_new(EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_inline(L_27, L_26, EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_RuntimeMethod_var);
		__this->___FreeEntities_2 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FreeEntities_2), (void*)L_27);
		// Filters = new EcsGrowList<EcsFilter> (Config.WorldFiltersCacheSize);
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_28 = (&__this->___Config_7);
		int32_t L_29 = L_28->___WorldFiltersCacheSize_1;
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_30 = (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B*)il2cpp_codegen_object_new(EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_inline(L_30, L_29, EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_RuntimeMethod_var);
		__this->___Filters_3 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Filters_3), (void*)L_30);
		// FilterByIncludedComponents = new Dictionary<int, EcsGrowList<EcsFilter>> (Config.WorldFiltersCacheSize);
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_31 = (&__this->___Config_7);
		int32_t L_32 = L_31->___WorldFiltersCacheSize_1;
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_33 = (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4*)il2cpp_codegen_object_new(Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987(L_33, L_32, Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987_RuntimeMethod_var);
		__this->___FilterByIncludedComponents_4 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FilterByIncludedComponents_4), (void*)L_33);
		// FilterByExcludedComponents = new Dictionary<int, EcsGrowList<EcsFilter>> (Config.WorldFiltersCacheSize);
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_34 = (&__this->___Config_7);
		int32_t L_35 = L_34->___WorldFiltersCacheSize_1;
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_36 = (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4*)il2cpp_codegen_object_new(Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987(L_36, L_35, Dictionary_2__ctor_m456EDDEE587F91E5D186EE848813C4CE1A380987_RuntimeMethod_var);
		__this->___FilterByExcludedComponents_5 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FilterByExcludedComponents_5), (void*)L_36);
		// ComponentPools = new IEcsComponentPool[Config.WorldComponentPoolsCacheSize];
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_37 = (&__this->___Config_7);
		int32_t L_38 = L_37->___WorldComponentPoolsCacheSize_2;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_39 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)(IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)SZArrayNew(IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39_il2cpp_TypeInfo_var, (uint32_t)L_38);
		__this->___ComponentPools_9 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ComponentPools_9), (void*)L_39);
		// _filterCtor = new object[] { this };
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_40;
		ArrayElementTypeCheck (L_41, __this);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)__this);
		__this->____filterCtor_8 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filterCtor_8), (void*)L_41);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_Destroy_m7B94DC862066418289EAAFFD7E33B195080AE092 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// entity.Owner = this;
		(&V_0)->___Owner_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Owner_2), (void*)__this);
		// for (var i = EntitiesCount - 1; i >= 0; i--) {
		int32_t L_0 = __this->___EntitiesCount_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0049;
	}

IL_0013:
	{
		// ref var entityData = ref Entities[i];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_1 = __this->___Entities_0;
		int32_t L_2 = V_1;
		V_2 = ((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)));
		// if (entityData.ComponentsCountX2 > 0) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3 = V_2;
		int16_t L_4 = L_3->___ComponentsCountX2_1;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		// entity.Id = i;
		int32_t L_5 = V_1;
		(&V_0)->___Id_0 = L_5;
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_6 = V_2;
		uint16_t L_7 = L_6->___Gen_0;
		(&V_0)->___Gen_1 = L_7;
		// entity.Destroy ();
		EcsEntityExtensions_Destroy_m99A06957775BC0FA9663A38DA033D531532D665E_inline((&V_0), NULL);
	}

IL_0045:
	{
		// for (var i = EntitiesCount - 1; i >= 0; i--) {
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0049:
	{
		// for (var i = EntitiesCount - 1; i >= 0; i--) {
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		V_3 = 0;
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_10 = __this->___Filters_3;
		int32_t L_11 = L_10->___Count_1;
		V_4 = L_11;
		goto IL_0074;
	}

IL_005e:
	{
		// Filters.Items[i].Destroy ();
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_12 = __this->___Filters_3;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_13 = L_12->___Items_0;
		int32_t L_14 = V_3;
		int32_t L_15 = L_14;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		VirtualActionInvoker0::Invoke(4 /* System.Void Leopotam.Ecs.EcsFilter::Destroy() */, L_16);
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0074:
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_005e;
		}
	}
	{
		// IsDestroyed = true;
		__this->___IsDestroyed_10 = (bool)1;
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsWorld::IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_mCBD30D99C44C9963296CBAB628A78C2423CC9155 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	{
		// return !IsDestroyed;
		bool L_0 = __this->___IsDestroyed_10;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsWorld::NewEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_1 = NULL;
	int32_t V_2 = 0;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_3 = NULL;
	{
		// entity.Owner = this;
		(&V_0)->___Owner_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Owner_2), (void*)__this);
		// if (FreeEntities.Count > 0) {
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_0 = __this->___FreeEntities_2;
		int32_t L_1 = L_0->___Count_1;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		// entity.Id = FreeEntities.Items[--FreeEntities.Count];
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_2 = __this->___FreeEntities_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___Items_0;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_4 = __this->___FreeEntities_2;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_5 = L_4;
		int32_t L_6 = L_5->___Count_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		int32_t L_7 = V_2;
		L_5->___Count_1 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		(&V_0)->___Id_0 = L_10;
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_11 = __this->___Entities_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_12 = V_0;
		int32_t L_13 = L_12.___Id_0;
		V_1 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)));
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_14 = V_1;
		uint16_t L_15 = L_14->___Gen_0;
		(&V_0)->___Gen_1 = L_15;
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_16 = V_1;
		L_16->___ComponentsCountX2_1 = (int16_t)0;
		goto IL_00ea;
	}

IL_006a:
	{
		// if (EntitiesCount == Entities.Length) {
		int32_t L_17 = __this->___EntitiesCount_1;
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_18 = __this->___Entities_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_008d;
		}
	}
	{
		// Array.Resize (ref Entities, EntitiesCount << 1);
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469** L_19 = (&__this->___Entities_0);
		int32_t L_20 = __this->___EntitiesCount_1;
		Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3(L_19, ((int32_t)(L_20<<1)), Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3_RuntimeMethod_var);
	}

IL_008d:
	{
		// entity.Id = EntitiesCount++;
		int32_t L_21 = __this->___EntitiesCount_1;
		V_2 = L_21;
		int32_t L_22 = V_2;
		__this->___EntitiesCount_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_2;
		(&V_0)->___Id_0 = L_23;
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_24 = __this->___Entities_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_25 = V_0;
		int32_t L_26 = L_25.___Id_0;
		V_3 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)));
		// entityData.Components = new int[Config.EntityComponentsCacheSize * 2];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_27 = V_3;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_28 = (&__this->___Config_7);
		int32_t L_29 = L_28->___EntityComponentsCacheSize_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_29, 2)));
		L_27->___Components_2 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___Components_2), (void*)L_30);
		// entityData.Gen = 1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_31 = V_3;
		L_31->___Gen_0 = (uint16_t)1;
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_32 = V_3;
		uint16_t L_33 = L_32->___Gen_0;
		(&V_0)->___Gen_1 = L_33;
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_34 = V_3;
		L_34->___ComponentsCountX2_1 = (int16_t)0;
	}

IL_00ea:
	{
		// return entity;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_35 = V_0;
		return L_35;
	}
}
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsWorld::RestoreEntityFromInternalId(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsWorld_RestoreEntityFromInternalId_mED45CBC66E963C5D51717A7EF40CC0CC6BB0A51A (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, int32_t ___id0, int32_t ___gen1, const RuntimeMethod* method) 
{
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_1 = NULL;
	{
		// entity.Owner = this;
		(&V_0)->___Owner_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Owner_2), (void*)__this);
		// entity.Id = id;
		int32_t L_0 = ___id0;
		(&V_0)->___Id_0 = L_0;
		// if (gen < 0) {
		int32_t L_1 = ___gen1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		// entity.Gen = 0;
		(&V_0)->___Gen_1 = (uint16_t)0;
		// ref var entityData = ref GetEntityData (entity);
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_2;
		L_2 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(__this, (&V_0), NULL);
		V_1 = L_2;
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3 = V_1;
		uint16_t L_4 = L_3->___Gen_0;
		(&V_0)->___Gen_1 = L_4;
		goto IL_003d;
	}

IL_0034:
	{
		// entity.Gen = (ushort) gen;
		int32_t L_5 = ___gen1;
		(&V_0)->___Gen_1 = (uint16_t)((int32_t)(uint16_t)L_5);
	}

IL_003d:
	{
		// return entity;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_6 = V_0;
		return L_6;
	}
}
// Leopotam.Ecs.EcsFilter Leopotam.Ecs.EcsWorld::GetFilter(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* EcsWorld_GetFilter_m52CD6F02CE215E1CA1A2C041022F5EE4E4283A44 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, Type_t* ___filterType0, bool ___createIfNotExists1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* V_0 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_12 = NULL;
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_0 = __this->___Filters_3;
		int32_t L_1 = L_0->___Count_1;
		V_3 = L_1;
		goto IL_003c;
	}

IL_0010:
	{
		// if (Filters.Items[i].GetType () == filterType) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_2 = __this->___Filters_3;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_3 = L_2->___Items_0;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Type_t* L_7;
		L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_6, NULL);
		Type_t* L_8 = ___filterType0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		// return Filters.Items[i];
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_10 = __this->___Filters_3;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_11 = L_10->___Items_0;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		return L_14;
	}

IL_0038:
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003c:
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_16 = V_2;
		int32_t L_17 = V_3;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0010;
		}
	}
	{
		// if (!createIfNotExists) {
		bool L_18 = ___createIfNotExists1;
		if (L_18)
		{
			goto IL_0045;
		}
	}
	{
		// return null;
		return (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC*)NULL;
	}

IL_0045:
	{
		// var filter = (EcsFilter) Activator.CreateInstance (filterType, BindingFlags.NonPublic | BindingFlags.Instance, null, _filterCtor, CultureInfo.InvariantCulture);
		Type_t* L_19 = ___filterType0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = __this->____filterCtor_8;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_21;
		L_21 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		RuntimeObject* L_22;
		L_22 = Activator_CreateInstance_mFB735A8FC37FEBDE59EF1E0A0C87C702E5C82CC8(L_19, ((int32_t)36), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, L_20, L_21, NULL);
		V_0 = ((EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC*)CastclassClass((RuntimeObject*)L_22, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC_il2cpp_TypeInfo_var));
		// Filters.Add (filter);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_23 = __this->___Filters_3;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_24 = V_0;
		EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_inline(L_23, L_24, EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_RuntimeMethod_var);
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		V_4 = 0;
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_25 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___IncludedTypeIndices_7;
		V_5 = ((int32_t)(((RuntimeArray*)L_26)->max_length));
		goto IL_00be;
	}

IL_007a:
	{
		// if (!FilterByIncludedComponents.TryGetValue (filter.IncludedTypeIndices[i], out var filtersList)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_27 = __this->___FilterByIncludedComponents_4;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_28 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = L_28->___IncludedTypeIndices_7;
		int32_t L_30 = V_4;
		int32_t L_31 = L_30;
		int32_t L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		bool L_33;
		L_33 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_27, L_32, (&V_6), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		if (L_33)
		{
			goto IL_00b0;
		}
	}
	{
		// filtersList = new EcsGrowList<EcsFilter> (8);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_34 = (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B*)il2cpp_codegen_object_new(EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_inline(L_34, 8, EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_RuntimeMethod_var);
		V_6 = L_34;
		// FilterByIncludedComponents[filter.IncludedTypeIndices[i]] = filtersList;
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_35 = __this->___FilterByIncludedComponents_4;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_36 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_36->___IncludedTypeIndices_7;
		int32_t L_38 = V_4;
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_41 = V_6;
		Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D(L_35, L_40, L_41, Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D_RuntimeMethod_var);
	}

IL_00b0:
	{
		// filtersList.Add (filter);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_42 = V_6;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_43 = V_0;
		EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_inline(L_42, L_43, EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_RuntimeMethod_var);
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00be:
	{
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_45 = V_4;
		int32_t L_46 = V_5;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_007a;
		}
	}
	{
		// if (filter.ExcludedTypeIndices != null) {
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_47 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = L_47->___ExcludedTypeIndices_8;
		if (!L_48)
		{
			goto IL_0125;
		}
	}
	{
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		V_7 = 0;
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_49 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = L_49->___ExcludedTypeIndices_8;
		V_8 = ((int32_t)(((RuntimeArray*)L_50)->max_length));
		goto IL_011f;
	}

IL_00db:
	{
		// if (!FilterByExcludedComponents.TryGetValue (filter.ExcludedTypeIndices[i], out var filtersList)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_51 = __this->___FilterByExcludedComponents_5;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_52 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = L_52->___ExcludedTypeIndices_8;
		int32_t L_54 = V_7;
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		bool L_57;
		L_57 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_51, L_56, (&V_9), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		if (L_57)
		{
			goto IL_0111;
		}
	}
	{
		// filtersList = new EcsGrowList<EcsFilter> (8);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_58 = (EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B*)il2cpp_codegen_object_new(EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_inline(L_58, 8, EcsGrowList_1__ctor_m8CBC958C10AFE368670AFA75A52BDC09EAA40472_RuntimeMethod_var);
		V_9 = L_58;
		// FilterByExcludedComponents[filter.ExcludedTypeIndices[i]] = filtersList;
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_59 = __this->___FilterByExcludedComponents_5;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_60 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = L_60->___ExcludedTypeIndices_8;
		int32_t L_62 = V_7;
		int32_t L_63 = L_62;
		int32_t L_64 = (L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_65 = V_9;
		Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D(L_59, L_64, L_65, Dictionary_2_set_Item_m075857BE5F7ED4C4E3D32A575D6787367BEE256D_RuntimeMethod_var);
	}

IL_0111:
	{
		// filtersList.Add (filter);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_66 = V_9;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_67 = V_0;
		EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_inline(L_66, L_67, EcsGrowList_1_Add_m47584E78B83F59D13EC3B7812C75F97A5062E5D5_RuntimeMethod_var);
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_68 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_011f:
	{
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_69 = V_7;
		int32_t L_70 = V_8;
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_00db;
		}
	}

IL_0125:
	{
		// entity.Owner = this;
		(&V_1)->___Owner_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___Owner_2), (void*)__this);
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		V_10 = 0;
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_71 = __this->___EntitiesCount_1;
		V_11 = L_71;
		goto IL_0183;
	}

IL_013a:
	{
		// ref var entityData = ref Entities[i];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_72 = __this->___Entities_0;
		int32_t L_73 = V_10;
		V_12 = ((L_72)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_73)));
		// if (entityData.ComponentsCountX2 > 0 && filter.IsCompatible (entityData, 0)) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_74 = V_12;
		int16_t L_75 = L_74->___ComponentsCountX2_1;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_017d;
		}
	}
	{
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_76 = V_0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_77 = V_12;
		bool L_78;
		L_78 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_76, L_77, 0, NULL);
		if (!L_78)
		{
			goto IL_017d;
		}
	}
	{
		// entity.Id = i;
		int32_t L_79 = V_10;
		(&V_1)->___Id_0 = L_79;
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_80 = V_12;
		uint16_t L_81 = L_80->___Gen_0;
		(&V_1)->___Gen_1 = L_81;
		// filter.OnAddEntity (entity);
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_82 = V_0;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_82, (&V_1));
	}

IL_017d:
	{
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_83 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_0183:
	{
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_84 = V_10;
		int32_t L_85 = V_11;
		if ((((int32_t)L_84) < ((int32_t)L_85)))
		{
			goto IL_013a;
		}
	}
	{
		// return filter;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_86 = V_0;
		return L_86;
	}
}
// Leopotam.Ecs.EcsWorldStats Leopotam.Ecs.EcsWorld::GetStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD EcsWorld_GetStats_m0F6C2D1493DE58B58448EDB0243F825B170BA0BD (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var stats = new EcsWorldStats () {
		//     ActiveEntities = EntitiesCount - FreeEntities.Count,
		//     ReservedEntities = FreeEntities.Count,
		//     Filters = Filters.Count,
		//     Components = _usedComponentsCount
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD));
		int32_t L_0 = __this->___EntitiesCount_1;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_1 = __this->___FreeEntities_2;
		int32_t L_2 = L_1->___Count_1;
		(&V_0)->___ActiveEntities_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_2));
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_3 = __this->___FreeEntities_2;
		int32_t L_4 = L_3->___Count_1;
		(&V_0)->___ReservedEntities_1 = L_4;
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_5 = __this->___Filters_3;
		int32_t L_6 = L_5->___Count_1;
		(&V_0)->___Filters_2 = L_6;
		int32_t L_7 = __this->____usedComponentsCount_6;
		(&V_0)->___Components_3 = L_7;
		EcsWorldStats_tCC6E2E5270D51D54D4B77BA4888150493B3024BD L_8 = V_0;
		// return stats;
		return L_8;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::RecycleEntityData(System.Int32,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_RecycleEntityData_mF32D0E0B4CE31E2AE7027C51DA0C54F9D53FC0D2 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, int32_t ___id0, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// entityData.ComponentsCountX2 = -2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_0 = ___entityData1;
		L_0->___ComponentsCountX2_1 = (int16_t)((int32_t)-2);
		// entityData.Gen++;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_1 = ___entityData1;
		uint16_t* L_2 = (&L_1->___Gen_0);
		uint16_t* L_3 = L_2;
		int32_t L_4 = *((uint16_t*)L_3);
		*((int16_t*)L_3) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_4, 1)));
		// if (entityData.Gen == 0) { entityData.Gen = 1; }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_5 = ___entityData1;
		uint16_t L_6 = L_5->___Gen_0;
		if (L_6)
		{
			goto IL_0023;
		}
	}
	{
		// if (entityData.Gen == 0) { entityData.Gen = 1; }
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_7 = ___entityData1;
		L_7->___Gen_0 = (uint16_t)1;
	}

IL_0023:
	{
		// FreeEntities.Add (id);
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_8 = __this->___FreeEntities_2;
		int32_t L_9 = ___id0;
		EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_inline(L_8, L_9, EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::UpdateFilters(System.Int32,Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, int32_t ___typeIdx0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity1, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// if (typeIdx < 0) {
		int32_t L_0 = ___typeIdx0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		// if (FilterByIncludedComponents.TryGetValue (-typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_1 = __this->___FilterByIncludedComponents_4;
		int32_t L_2 = ___typeIdx0;
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_1, ((-L_2)), (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_1 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_4 = V_0;
		int32_t L_5 = L_4->___Count_1;
		V_2 = L_5;
		goto IL_0046;
	}

IL_0023:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_6 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_7 = L_6->___Items_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_11 = ___entityData2;
		bool L_12;
		L_12 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_10, L_11, 0, NULL);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_13 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_14 = L_13->___Items_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_18 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_17, L_18);
	}

IL_0042:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0046:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0023;
		}
	}

IL_004a:
	{
		// if (FilterByExcludedComponents.TryGetValue (-typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_22 = __this->___FilterByExcludedComponents_5;
		int32_t L_23 = ___typeIdx0;
		bool L_24;
		L_24 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_22, ((-L_23)), (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_0128;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_3 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_25 = V_0;
		int32_t L_26 = L_25->___Count_1;
		V_4 = L_26;
		goto IL_008d;
	}

IL_006a:
	{
		// if (filters.Items[i].IsCompatible (entityData, typeIdx)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_27 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_28 = L_27->___Items_0;
		int32_t L_29 = V_3;
		int32_t L_30 = L_29;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_32 = ___entityData2;
		int32_t L_33 = ___typeIdx0;
		bool L_34;
		L_34 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_31, L_32, L_33, NULL);
		if (!L_34)
		{
			goto IL_0089;
		}
	}
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_35 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_36 = L_35->___Items_0;
		int32_t L_37 = V_3;
		int32_t L_38 = L_37;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_40 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_39, L_40);
	}

IL_0089:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_008d:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_42 = V_3;
		int32_t L_43 = V_4;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_006a;
		}
	}
	{
		return;
	}

IL_0093:
	{
		// if (FilterByIncludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_44 = __this->___FilterByIncludedComponents_4;
		int32_t L_45 = ___typeIdx0;
		bool L_46;
		L_46 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_44, L_45, (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		if (!L_46)
		{
			goto IL_00dd;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_5 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_47 = V_0;
		int32_t L_48 = L_47->___Count_1;
		V_6 = L_48;
		goto IL_00d7;
	}

IL_00b0:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_49 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_50 = L_49->___Items_0;
		int32_t L_51 = V_5;
		int32_t L_52 = L_51;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_53 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_54 = ___entityData2;
		bool L_55;
		L_55 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_53, L_54, 0, NULL);
		if (!L_55)
		{
			goto IL_00d1;
		}
	}
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_56 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_57 = L_56->___Items_0;
		int32_t L_58 = V_5;
		int32_t L_59 = L_58;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_60 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_61 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_60, L_61);
	}

IL_00d1:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_62 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_00d7:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_63 = V_5;
		int32_t L_64 = V_6;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_00b0;
		}
	}

IL_00dd:
	{
		// if (FilterByExcludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_65 = __this->___FilterByExcludedComponents_5;
		int32_t L_66 = ___typeIdx0;
		bool L_67;
		L_67 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_65, L_66, (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		if (!L_67)
		{
			goto IL_0128;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_7 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_68 = V_0;
		int32_t L_69 = L_68->___Count_1;
		V_8 = L_69;
		goto IL_0122;
	}

IL_00fa:
	{
		// if (filters.Items[i].IsCompatible (entityData, -typeIdx)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_70 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_71 = L_70->___Items_0;
		int32_t L_72 = V_7;
		int32_t L_73 = L_72;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_74 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_75 = ___entityData2;
		int32_t L_76 = ___typeIdx0;
		bool L_77;
		L_77 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_74, L_75, ((-L_76)), NULL);
		if (!L_77)
		{
			goto IL_011c;
		}
	}
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_78 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_79 = L_78->___Items_0;
		int32_t L_80 = V_7;
		int32_t L_81 = L_80;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_83 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_82, L_83);
	}

IL_011c:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_84 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_0122:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_85 = V_7;
		int32_t L_86 = V_8;
		if ((((int32_t)L_85) < ((int32_t)L_86)))
		{
			goto IL_00fa;
		}
	}

IL_0128:
	{
		// }
		return;
	}
}
// Leopotam.Ecs.EcsWorld/EcsEntityData& Leopotam.Ecs.EcsWorld::GetEntityData(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670 (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	{
		// return ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_0 = __this->___Entities_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_1 = ___entity0;
		int32_t L_2 = L_1->___Id_0;
		return ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)));
	}
}
// System.Int32 Leopotam.Ecs.EcsWorld::GetAllEntities(Leopotam.Ecs.EcsEntity[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsWorld_GetAllEntities_m1D20BAFCFA2FC526E96FE0ABAE90F22691C5E2FE (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C** ___entities0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_5 = NULL;
	{
		// var count = EntitiesCount - FreeEntities.Count;
		int32_t L_0 = __this->___EntitiesCount_1;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_1 = __this->___FreeEntities_2;
		int32_t L_2 = L_1->___Count_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_2));
		// if (entities == null || entities.Length < count) {
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C** L_3 = ___entities0;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_4 = *((EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C**)L_3);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C** L_5 = ___entities0;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_6 = *((EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C**)L_5);
		int32_t L_7 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) >= ((int32_t)L_7)))
		{
			goto IL_0026;
		}
	}

IL_001e:
	{
		// entities = new EcsEntity[count];
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C** L_8 = ___entities0;
		int32_t L_9 = V_0;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_10 = (EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C*)(EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C*)SZArrayNew(EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C_il2cpp_TypeInfo_var, (uint32_t)L_9);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_10);
	}

IL_0026:
	{
		// e.Owner = this;
		(&V_1)->___Owner_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___Owner_2), (void*)__this);
		// var id = 0;
		V_2 = 0;
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		V_3 = 0;
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_11 = __this->___EntitiesCount_1;
		V_4 = L_11;
		goto IL_007b;
	}

IL_003c:
	{
		// ref var entityData = ref Entities[i];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_12 = __this->___Entities_0;
		int32_t L_13 = V_3;
		V_5 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)));
		// if (entityData.ComponentsCountX2 >= 0) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_14 = V_5;
		int16_t L_15 = L_14->___ComponentsCountX2_1;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		// e.Id = i;
		int32_t L_16 = V_3;
		(&V_1)->___Id_0 = L_16;
		// e.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_17 = V_5;
		uint16_t L_18 = L_17->___Gen_0;
		(&V_1)->___Gen_1 = L_18;
		// entities[id++] = e;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C** L_19 = ___entities0;
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_20 = *((EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C**)L_19);
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_23 = V_1;
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22), (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E)L_23);
	}

IL_0077:
	{
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007b:
	{
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_25 = V_3;
		int32_t L_26 = V_4;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_003c;
		}
	}
	{
		// return count;
		int32_t L_27 = V_0;
		return L_27;
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
// Conversion methods for marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshal_pinvoke(const EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D& unmarshaled, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_pinvoke& marshaled)
{
	marshaled.___Gen_0 = unmarshaled.___Gen_0;
	marshaled.___ComponentsCountX2_1 = unmarshaled.___ComponentsCountX2_1;
	marshaled.___Components_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___Components_2);
}
IL2CPP_EXTERN_C void EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshal_pinvoke_back(const EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_pinvoke& marshaled, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t unmarshaledGen_temp_0 = 0;
	unmarshaledGen_temp_0 = marshaled.___Gen_0;
	unmarshaled.___Gen_0 = unmarshaledGen_temp_0;
	int16_t unmarshaledComponentsCountX2_temp_1 = 0;
	unmarshaledComponentsCountX2_temp_1 = marshaled.___ComponentsCountX2_1;
	unmarshaled.___ComponentsCountX2_1 = unmarshaledComponentsCountX2_temp_1;
	unmarshaled.___Components_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___Components_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Components_2), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___Components_2));
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshal_pinvoke_cleanup(EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Components_2);
	marshaled.___Components_2 = NULL;
}
// Conversion methods for marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshal_com(const EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D& unmarshaled, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_com& marshaled)
{
	marshaled.___Gen_0 = unmarshaled.___Gen_0;
	marshaled.___ComponentsCountX2_1 = unmarshaled.___ComponentsCountX2_1;
	marshaled.___Components_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___Components_2);
}
IL2CPP_EXTERN_C void EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshal_com_back(const EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_com& marshaled, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t unmarshaledGen_temp_0 = 0;
	unmarshaledGen_temp_0 = marshaled.___Gen_0;
	unmarshaled.___Gen_0 = unmarshaledGen_temp_0;
	int16_t unmarshaledComponentsCountX2_temp_1 = 0;
	unmarshaledComponentsCountX2_temp_1 = marshaled.___ComponentsCountX2_1;
	unmarshaled.___ComponentsCountX2_1 = unmarshaledComponentsCountX2_temp_1;
	unmarshaled.___Components_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___Components_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Components_2), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___Components_2));
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshal_com_cleanup(EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Components_2);
	marshaled.___Components_2 = NULL;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* WorldHandler_GetWorld_m59BFCF5AF16422E4D4322A769225269215AA67EE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return world;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_StaticFields*)il2cpp_codegen_static_fields_for(WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var))->___world_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_1 = NULL;
	int32_t V_2 = 0;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_3 = NULL;
	{
		// entity.Owner = this;
		(&V_0)->___Owner_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Owner_2), (void*)__this);
		// if (FreeEntities.Count > 0) {
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_0 = __this->___FreeEntities_2;
		int32_t L_1 = L_0->___Count_1;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		// entity.Id = FreeEntities.Items[--FreeEntities.Count];
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_2 = __this->___FreeEntities_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___Items_0;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_4 = __this->___FreeEntities_2;
		EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* L_5 = L_4;
		int32_t L_6 = L_5->___Count_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		int32_t L_7 = V_2;
		L_5->___Count_1 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		(&V_0)->___Id_0 = L_10;
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_11 = __this->___Entities_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_12 = V_0;
		int32_t L_13 = L_12.___Id_0;
		V_1 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)));
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_14 = V_1;
		uint16_t L_15 = L_14->___Gen_0;
		(&V_0)->___Gen_1 = L_15;
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_16 = V_1;
		L_16->___ComponentsCountX2_1 = (int16_t)0;
		goto IL_00ea;
	}

IL_006a:
	{
		// if (EntitiesCount == Entities.Length) {
		int32_t L_17 = __this->___EntitiesCount_1;
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_18 = __this->___Entities_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_008d;
		}
	}
	{
		// Array.Resize (ref Entities, EntitiesCount << 1);
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469** L_19 = (&__this->___Entities_0);
		int32_t L_20 = __this->___EntitiesCount_1;
		Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3(L_19, ((int32_t)(L_20<<1)), Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3_RuntimeMethod_var);
	}

IL_008d:
	{
		// entity.Id = EntitiesCount++;
		int32_t L_21 = __this->___EntitiesCount_1;
		V_2 = L_21;
		int32_t L_22 = V_2;
		__this->___EntitiesCount_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_2;
		(&V_0)->___Id_0 = L_23;
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_24 = __this->___Entities_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_25 = V_0;
		int32_t L_26 = L_25.___Id_0;
		V_3 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)));
		// entityData.Components = new int[Config.EntityComponentsCacheSize * 2];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_27 = V_3;
		EcsWorldConfig_tD18A8AD8AE047E39ABCD03A7C7FACD74079024A8* L_28 = (&__this->___Config_7);
		int32_t L_29 = L_28->___EntityComponentsCacheSize_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_29, 2)));
		L_27->___Components_2 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___Components_2), (void*)L_30);
		// entityData.Gen = 1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_31 = V_3;
		L_31->___Gen_0 = (uint16_t)1;
		// entity.Gen = entityData.Gen;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_32 = V_3;
		uint16_t L_33 = L_32->___Gen_0;
		(&V_0)->___Gen_1 = L_33;
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_34 = V_3;
		L_34->___ComponentsCountX2_1 = (int16_t)0;
	}

IL_00ea:
	{
		// return entity;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_35 = V_0;
		return L_35;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsAlive_m714AA8A34DFEB6BFF0515AD0D30C1F6A7A1740D5_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	{
		// if (!IsWorldAlive (entity)) { return false; }
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		bool L_1;
		L_1 = EcsEntityExtensions_IsWorldAlive_mAF0BB8400E0CFBF6875A2DF9EA00B9CD801583BB_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (!IsWorldAlive (entity)) { return false; }
		return (bool)0;
	}

IL_000a:
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_3 = L_2->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_5;
		L_5 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// return entityData.Gen == entity.Gen && entityData.ComponentsCountX2 >= 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_6 = V_0;
		uint16_t L_7 = L_6->___Gen_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_8 = ___entity0;
		uint16_t L_9 = L_8->___Gen_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0032;
		}
	}
	{
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_10 = V_0;
		int16_t L_11 = L_10->___ComponentsCountX2_1;
		return (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WorldHandler_Init_m524D638766EC7D80DEB55B23ECA68352429A950B_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___ecsWorld0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// world = ecsWorld;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ___ecsWorld0;
		((WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_StaticFields*)il2cpp_codegen_static_fields_for(WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var))->___world_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_StaticFields*)il2cpp_codegen_static_fields_for(WorldHandler_t628BD66BF85932D0933AC69FB6645DD5B0535C54_il2cpp_TypeInfo_var))->___world_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B EcsFilter_GetEnumerator_m22DA51087D82F61AB4B6DF5846599DDD8EC0A49A_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	{
		// return new Enumerator (this);
		Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAD2CACAE4DC96A5F987178A5C4532E38610796C2_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAB0D6EEA7028DFCB8261808853152882FC8EBBA8_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) 
{
	{
		// _filter.Unlock ();
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_0 = __this->____filter_0;
		EcsFilter_Unlock_m194398A287AA4320005015ED2F33DB4116FF50B7_inline(L_0, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m3643613B3D6014D3200CB8D0F5F50F0C6CCFFCCD_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) 
{
	{
		// get => _idx;
		int32_t L_0 = __this->____idx_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* EcsFilter_GetEntity_mDDEA2A83E7CDFFF9D766CE98642AF9E1892EE7D7_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, int32_t* ___idx0, const RuntimeMethod* method) 
{
	{
		// return ref Entities[idx];
		EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C* L_0 = __this->___Entities_0;
		int32_t* L_1 = ___idx0;
		int32_t L_2 = *((int32_t*)L_1);
		return ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA175620871ECBCBDEA305F457591FD1A5197389E_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return ++_idx < _count;
		int32_t L_0 = __this->____idx_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->____idx_2 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count_1;
		return (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m8700BB2365861BAA58378A7475EA399B0332B6D4_inline (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3COptionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_mB869FDE2C07DD58952DC730E0ECB413D63AC5E78_inline (Il2CppSetOptionAttribute_tDECA43B02B571750B0BBB5936F9A9C43D0B95E56* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Value { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsEntity_GetHashCode_m833E737089406173FC610597E3A93BF8C34F302D_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// var hashCode = (Id * 397) ^ Gen.GetHashCode ();
		int32_t L_0 = __this->___Id_0;
		uint16_t* L_1 = (&__this->___Gen_1);
		int32_t L_2;
		L_2 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_1, NULL);
		// hashCode = (hashCode * 397) ^ (Owner != null ? Owner.GetHashCode () : 0);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_3 = __this->___Owner_2;
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)397)))^L_2)), ((int32_t)397)));
		if (L_3)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)397)))^L_2)), ((int32_t)397)));
			goto IL_0029;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0029:
	{
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_4 = __this->___Owner_2;
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		// return hashCode;
		return ((int32_t)(G_B3_1^G_B3_0));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntity_Equals_mEEBE85D5F0849E2944B0DDC54151EB9F46055702_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return other is EcsEntity otherEntity && Equals (otherEntity);
		RuntimeObject* L_0 = ___other0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___other0;
		V_0 = ((*(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)((EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)UnBox(L_1, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E_il2cpp_TypeInfo_var))));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_2 = V_0;
		bool L_3;
		L_3 = EcsEntity_Equals_m813ABFB67E22C48C0F57BF1AD656E48F8C6BA652(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	{
		// return ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469* L_0 = __this->___Entities_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_1 = ___entity0;
		int32_t L_2 = L_1->___Id_0;
		return ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, int32_t ___typeIdx0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity1, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// if (typeIdx < 0) {
		int32_t L_0 = ___typeIdx0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		// if (FilterByIncludedComponents.TryGetValue (-typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_1 = __this->___FilterByIncludedComponents_4;
		int32_t L_2 = ___typeIdx0;
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_1, ((-L_2)), (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_1 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_4 = V_0;
		int32_t L_5 = L_4->___Count_1;
		V_2 = L_5;
		goto IL_0046;
	}

IL_0023:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_6 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_7 = L_6->___Items_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_11 = ___entityData2;
		bool L_12;
		L_12 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_10, L_11, 0, NULL);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_13 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_14 = L_13->___Items_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_18 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_17, L_18);
	}

IL_0042:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0046:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0023;
		}
	}

IL_004a:
	{
		// if (FilterByExcludedComponents.TryGetValue (-typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_22 = __this->___FilterByExcludedComponents_5;
		int32_t L_23 = ___typeIdx0;
		bool L_24;
		L_24 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_22, ((-L_23)), (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_0128;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_3 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_25 = V_0;
		int32_t L_26 = L_25->___Count_1;
		V_4 = L_26;
		goto IL_008d;
	}

IL_006a:
	{
		// if (filters.Items[i].IsCompatible (entityData, typeIdx)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_27 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_28 = L_27->___Items_0;
		int32_t L_29 = V_3;
		int32_t L_30 = L_29;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_32 = ___entityData2;
		int32_t L_33 = ___typeIdx0;
		bool L_34;
		L_34 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_31, L_32, L_33, NULL);
		if (!L_34)
		{
			goto IL_0089;
		}
	}
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_35 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_36 = L_35->___Items_0;
		int32_t L_37 = V_3;
		int32_t L_38 = L_37;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_40 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_39, L_40);
	}

IL_0089:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_008d:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_42 = V_3;
		int32_t L_43 = V_4;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_006a;
		}
	}
	{
		return;
	}

IL_0093:
	{
		// if (FilterByIncludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_44 = __this->___FilterByIncludedComponents_4;
		int32_t L_45 = ___typeIdx0;
		bool L_46;
		L_46 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_44, L_45, (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		if (!L_46)
		{
			goto IL_00dd;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_5 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_47 = V_0;
		int32_t L_48 = L_47->___Count_1;
		V_6 = L_48;
		goto IL_00d7;
	}

IL_00b0:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_49 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_50 = L_49->___Items_0;
		int32_t L_51 = V_5;
		int32_t L_52 = L_51;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_53 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_54 = ___entityData2;
		bool L_55;
		L_55 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_53, L_54, 0, NULL);
		if (!L_55)
		{
			goto IL_00d1;
		}
	}
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_56 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_57 = L_56->___Items_0;
		int32_t L_58 = V_5;
		int32_t L_59 = L_58;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_60 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_61 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_60, L_61);
	}

IL_00d1:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_62 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_00d7:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_63 = V_5;
		int32_t L_64 = V_6;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_00b0;
		}
	}

IL_00dd:
	{
		// if (FilterByExcludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* L_65 = __this->___FilterByExcludedComponents_5;
		int32_t L_66 = ___typeIdx0;
		bool L_67;
		L_67 = Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB(L_65, L_66, (&V_0), Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var);
		if (!L_67)
		{
			goto IL_0128;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_7 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_68 = V_0;
		int32_t L_69 = L_68->___Count_1;
		V_8 = L_69;
		goto IL_0122;
	}

IL_00fa:
	{
		// if (filters.Items[i].IsCompatible (entityData, -typeIdx)) {
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_70 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_71 = L_70->___Items_0;
		int32_t L_72 = V_7;
		int32_t L_73 = L_72;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_74 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_75 = ___entityData2;
		int32_t L_76 = ___typeIdx0;
		bool L_77;
		L_77 = EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline(L_74, L_75, ((-L_76)), NULL);
		if (!L_77)
		{
			goto IL_011c;
		}
	}
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B* L_78 = V_0;
		EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA* L_79 = L_78->___Items_0;
		int32_t L_80 = V_7;
		int32_t L_81 = L_80;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_83 = ___entity1;
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_82, L_83);
	}

IL_011c:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_84 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_0122:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_85 = V_7;
		int32_t L_86 = V_8;
		if ((((int32_t)L_85) < ((int32_t)L_86)))
		{
			goto IL_00fa;
		}
	}

IL_0128:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsEntityExtensions_Destroy_m99A06957775BC0FA9663A38DA033D531532D665E_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3;
		L_3 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// savedEntity.Id = entity.Id;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_4 = ___entity0;
		int32_t L_5 = L_4->___Id_0;
		(&V_1)->___Id_0 = L_5;
		// savedEntity.Gen = entity.Gen;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_6 = ___entity0;
		uint16_t L_7 = L_6->___Gen_1;
		(&V_1)->___Gen_1 = L_7;
		// savedEntity.Owner = entity.Owner;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_8 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_9 = L_8->___Owner_2;
		(&V_1)->___Owner_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___Owner_2), (void*)L_9);
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_10 = V_0;
		int16_t L_11 = L_10->___ComponentsCountX2_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, 2));
		goto IL_0089;
	}

IL_003f:
	{
		// savedEntity.Owner.UpdateFilters (-entityData.Components[i], savedEntity, entityData);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_12 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_13 = L_12.___Owner_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_14 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = L_14->___Components_2;
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_19 = V_0;
		EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline(L_13, ((-L_18)), (&V_1), L_19, NULL);
		// savedEntity.Owner.ComponentPools[entityData.Components[i]].Recycle (entityData.Components[i + 1]);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_20 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_21 = L_20.___Owner_2;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_22 = L_21->___ComponentPools_9;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_23 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23->___Components_2;
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_30 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = L_30->___Components_2;
		int32_t L_32 = V_2;
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Leopotam.Ecs.IEcsComponentPool::Recycle(System.Int32) */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_29, L_34);
		// entityData.ComponentsCountX2 -= 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_35 = V_0;
		int16_t* L_36 = (&L_35->___ComponentsCountX2_1);
		int16_t* L_37 = L_36;
		int32_t L_38 = *((int16_t*)L_37);
		*((int16_t*)L_37) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract(L_38, 2)));
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_39, 2));
	}

IL_0089:
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_40 = V_2;
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_41 = V_0;
		L_41->___ComponentsCountX2_1 = (int16_t)0;
		// savedEntity.Owner.RecycleEntityData (savedEntity.Id, ref entityData);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_42 = V_1;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_43 = L_42.___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_44 = V_1;
		int32_t L_45 = L_44.___Id_0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_46 = V_0;
		EcsWorld_RecycleEntityData_mF32D0E0B4CE31E2AE7027C51DA0C54F9D53FC0D2(L_43, L_45, L_46, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsWorldAlive_mAF0BB8400E0CFBF6875A2DF9EA00B9CD801583BB_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	{
		// return entity.Owner != null && entity.Owner.IsAlive ();
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = L_0->___Owner_2;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_3 = L_2->___Owner_2;
		bool L_4;
		L_4 = EcsWorld_IsAlive_mCBD30D99C44C9963296CBAB628A78C2423CC9155_inline(L_3, NULL);
		return L_4;
	}

IL_0014:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_mCBD30D99C44C9963296CBAB628A78C2423CC9155_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	{
		// return !IsDestroyed;
		bool L_0 = __this->___IsDestroyed_10;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator__ctor_mAD2CACAE4DC96A5F987178A5C4532E38610796C2_inline (Enumerator_t177FE59818E4F8F0DA0496AC1554ADADD4C2CC5B* __this, EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* ___filter0, const RuntimeMethod* method) 
{
	{
		// _filter = filter;
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_0 = ___filter0;
		__this->____filter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter_0), (void*)L_0);
		// _count = _filter.GetEntitiesCount ();
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_1 = __this->____filter_0;
		int32_t L_2;
		L_2 = EcsFilter_GetEntitiesCount_m1BDEEE64638444BB80F6331A144CE7C760ECE9C1_inline(L_1, NULL);
		__this->____count_1 = L_2;
		// _idx = -1;
		__this->____idx_2 = (-1);
		// _filter.Lock ();
		EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* L_3 = __this->____filter_0;
		EcsFilter_Lock_mA02D6F8F94E8DE65F1DC6F854EF457260AFF57F8_inline(L_3, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsFilter_GetEntitiesCount_m1BDEEE64638444BB80F6331A144CE7C760ECE9C1_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	{
		// return EntitiesCount;
		int32_t L_0 = __this->___EntitiesCount_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Lock_mA02D6F8F94E8DE65F1DC6F854EF457260AFF57F8_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	{
		// LockCount++;
		int32_t L_0 = __this->___LockCount_3;
		__this->___LockCount_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Unlock_m194398A287AA4320005015ED2F33DB4116FF50B7_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* V_2 = NULL;
	{
		// LockCount--;
		int32_t L_0 = __this->___LockCount_3;
		__this->___LockCount_3 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (LockCount == 0 && _delayedOpsCount > 0) {
		int32_t L_1 = __this->___LockCount_3;
		if (L_1)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_2 = __this->____delayedOpsCount_6;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_3 = __this->____delayedOpsCount_6;
		V_1 = L_3;
		goto IL_005d;
	}

IL_002a:
	{
		// ref var op = ref _delayedOps[i];
		DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670* L_4 = __this->____delayedOps_5;
		int32_t L_5 = V_0;
		V_2 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)));
		// if (op.IsAdd) {
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_6 = V_2;
		bool L_7 = L_6->___IsAdd_0;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// OnAddEntity (op.Entity);
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_8 = V_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_9 = (&L_8->___Entity_1);
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_9);
		goto IL_0059;
	}

IL_004d:
	{
		// OnRemoveEntity (op.Entity);
		DelayedOp_t9FCBBEC8F1365B5C252326F95F352AD68DBF8643* L_10 = V_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_11 = (&L_10->___Entity_1);
		VirtualActionInvoker1< EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_11);
	}

IL_0059:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_005d:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002a;
		}
	}
	{
		// _delayedOpsCount = 0;
		__this->____delayedOpsCount_6 = 0;
	}

IL_0068:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData0, int32_t ___addedRemovedTypeIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// var incIdx = IncludedTypeIndices.Length - 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___IncludedTypeIndices_7;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1));
		goto IL_0048;
	}

IL_000d:
	{
		// var typeIdx = IncludedTypeIndices[incIdx];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___IncludedTypeIndices_7;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// var idx = entityData.ComponentsCountX2 - 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_5 = ___entityData0;
		int16_t L_6 = L_5->___ComponentsCountX2_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 2));
		goto IL_003b;
	}

IL_0021:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_7 = ___entityData0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___Components_2;
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		// if (typeIdx2 == -addedRemovedTypeIndex) {
		int32_t L_12 = V_3;
		int32_t L_13 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_12) == ((int32_t)((-L_13)))))
		{
			goto IL_0037;
		}
	}
	{
		// if (typeIdx2 == addedRemovedTypeIndex || typeIdx2 == typeIdx) {
		int32_t L_14 = V_3;
		int32_t L_15 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_003f;
		}
	}

IL_0037:
	{
		// for (; idx >= 0; idx -= 2) {
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_18, 2));
	}

IL_003b:
	{
		// for (; idx >= 0; idx -= 2) {
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}

IL_003f:
	{
		// if (idx == -2) {
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2))))
		{
			goto IL_004c;
		}
	}
	{
		// for (; incIdx >= 0; incIdx--) {
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_0048:
	{
		// for (; incIdx >= 0; incIdx--) {
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}

IL_004c:
	{
		// if (incIdx != -1) {
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_0052;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0052:
	{
		// if (ExcludedTypeIndices != null) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->___ExcludedTypeIndices_8;
		if (!L_24)
		{
			goto IL_00b1;
		}
	}
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		V_4 = 0;
		goto IL_00a5;
	}

IL_005f:
	{
		// var typeIdx = ExcludedTypeIndices[excIdx];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->___ExcludedTypeIndices_8;
		int32_t L_26 = V_4;
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		V_5 = L_28;
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_29 = ___entityData0;
		int16_t L_30 = L_29->___ComponentsCountX2_1;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, 2));
		goto IL_009a;
	}

IL_0076:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_31 = ___entityData0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = L_31->___Components_2;
		int32_t L_33 = V_6;
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_7 = L_35;
		// if (typeIdx2 == -addedRemovedTypeIndex) {
		int32_t L_36 = V_7;
		int32_t L_37 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_36) == ((int32_t)((-L_37)))))
		{
			goto IL_0094;
		}
	}
	{
		// if (typeIdx2 == addedRemovedTypeIndex || typeIdx2 == typeIdx) {
		int32_t L_38 = V_7;
		int32_t L_39 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_38) == ((int32_t)L_39)))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_40 = V_7;
		int32_t L_41 = V_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_0094;
		}
	}

IL_0092:
	{
		// return false;
		return (bool)0;
	}

IL_0094:
	{
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_42, 2));
	}

IL_009a:
	{
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		int32_t L_43 = V_6;
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00a5:
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_45 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = __this->___ExcludedTypeIndices_8;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_005f;
		}
	}

IL_00b1:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsEntityExtensions_Replace_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m52DF8E587E357FA4F71423E0B95784DE128C80CE_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* ___item1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int16_t V_5 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_0->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3;
		L_3 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_4 = ((EcsComponentType_1_t2809B2AB2BD0B40D330EEBF08BD3AF2B9B0089F9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
		V_1 = L_4;
		// for (int i = 0, iiMax = entityData.ComponentsCountX2; i < iiMax; i += 2) {
		V_3 = 0;
		// for (int i = 0, iiMax = entityData.ComponentsCountX2; i < iiMax; i += 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_5 = V_0;
		int16_t L_6 = (int16_t)L_5->___ComponentsCountX2_1;
		V_4 = (int32_t)L_6;
		goto IL_0061;
	}

IL_001f:
	{
		// if (entityData.Components[i] == typeIdx) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_7->___Components_2;
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005d;
		}
	}
	{
		// ((EcsComponentPool<T>) entity.Owner.ComponentPools[typeIdx]).Items[entityData.Components[i + 1]] = item;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_13 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_14 = (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_13->___Owner_2;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)L_14->___ComponentPools_9;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6* L_19 = (InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6*)((EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_20 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_20->___Components_2;
		int32_t L_22 = V_3;
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* L_25 = ___item1;
		InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61 L_26 = (*(InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61*)L_25);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61)L_26);
		// return entity;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_27 = ___entity0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_28 = (*(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)L_27);
		return L_28;
	}

IL_005d:
	{
		// for (int i = 0, iiMax = entityData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 2));
	}

IL_0061:
	{
		// for (int i = 0, iiMax = entityData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_001f;
		}
	}
	{
		// if (entityData.Components.Length == entityData.ComponentsCountX2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_32 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_32->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_34 = V_0;
		int16_t L_35 = (int16_t)L_34->___ComponentsCountX2_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))) == ((uint32_t)L_35))))
		{
			goto IL_0089;
		}
	}
	{
		// Array.Resize (ref entityData.Components, entityData.ComponentsCountX2 << 1);
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_36 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_37 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)(&L_36->___Components_2);
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_38 = V_0;
		int16_t L_39 = (int16_t)L_38->___ComponentsCountX2_1;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98(L_37, ((int32_t)((int32_t)L_39<<1)), Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_RuntimeMethod_var);
	}

IL_0089:
	{
		// entityData.Components[entityData.ComponentsCountX2++] = typeIdx;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_40->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_42 = V_0;
		int16_t* L_43 = (int16_t*)(&L_42->___ComponentsCountX2_1);
		int16_t* L_44 = L_43;
		int32_t L_45 = *((int16_t*)L_44);
		V_5 = (int16_t)L_45;
		int16_t L_46 = V_5;
		*((int16_t*)L_44) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, 1)));
		int16_t L_47 = V_5;
		int32_t L_48 = V_1;
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47), (int32_t)L_48);
		// var pool = entity.Owner.GetPool<T> ();
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_49 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_50 = (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_49->___Owner_2;
		EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* L_51;
		L_51 = EcsWorld_GetPool_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m3F31828C3825C3620189EDABC822E36FA0E9E556_inline(L_50, il2cpp_rgctx_method(method->rgctx_data, 6));
		// var idx = pool.New ();
		EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* L_52 = L_51;
		int32_t L_53;
		L_53 = EcsComponentPool_1_New_m28147912754B2B2AC35B57ADDBB2A8242C08E885_inline(L_52, il2cpp_rgctx_method(method->rgctx_data, 7));
		V_2 = L_53;
		// entityData.Components[entityData.ComponentsCountX2++] = idx;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_54 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_54->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_56 = V_0;
		int16_t* L_57 = (int16_t*)(&L_56->___ComponentsCountX2_1);
		int16_t* L_58 = L_57;
		int32_t L_59 = *((int16_t*)L_58);
		V_5 = (int16_t)L_59;
		int16_t L_60 = V_5;
		*((int16_t*)L_58) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_60, 1)));
		int16_t L_61 = V_5;
		int32_t L_62 = V_2;
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61), (int32_t)L_62);
		// pool.Items[idx] = item;
		InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6* L_63 = (InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6*)L_52->___Items_1;
		int32_t L_64 = V_2;
		InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* L_65 = ___item1;
		InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61 L_66 = (*(InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61*)L_65);
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64), (InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61)L_66);
		// entity.Owner.UpdateFilters (typeIdx, entity, entityData);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_67 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_68 = (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_67->___Owner_2;
		int32_t L_69 = V_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_70 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_71 = V_0;
		EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline(L_68, L_69, L_70, L_71, NULL);
		// return entity;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_72 = ___entity0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_73 = (*(EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*)L_72);
		return L_73;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mEDE2217ECF59A25F3023E6DC06A552536434D39A_gshared_inline (Nullable_1_t2D43BA8017D7967AD99B1A7B909062B88E921472* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* EcsEntityExtensions_Get_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_mD52F4E9558DD3D477D8843294F10DBF80C2ACC9F_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int16_t V_5 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_0 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_1 = (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_0->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_2 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_3;
		L_3 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_4 = ((EcsComponentType_1_t2809B2AB2BD0B40D330EEBF08BD3AF2B9B0089F9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
		V_1 = L_4;
		// for (int i = 0, iiMax = entityData.ComponentsCountX2; i < iiMax; i += 2) {
		V_3 = 0;
		// for (int i = 0, iiMax = entityData.ComponentsCountX2; i < iiMax; i += 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_5 = V_0;
		int16_t L_6 = (int16_t)L_5->___ComponentsCountX2_1;
		V_4 = (int32_t)L_6;
		goto IL_0055;
	}

IL_001f:
	{
		// if (entityData.Components[i] == typeIdx) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_7->___Components_2;
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0051;
		}
	}
	{
		// return ref ((EcsComponentPool<T>) entity.Owner.ComponentPools[typeIdx]).Items[entityData.Components[i + 1]];
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_13 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_14 = (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_13->___Owner_2;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)L_14->___ComponentPools_9;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6* L_19 = (InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6*)((EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_20 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_20->___Components_2;
		int32_t L_22 = V_3;
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		return ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24)));
	}

IL_0051:
	{
		// for (int i = 0, iiMax = entityData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 2));
	}

IL_0055:
	{
		// for (int i = 0, iiMax = entityData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_26 = V_3;
		int32_t L_27 = V_4;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_001f;
		}
	}
	{
		// if (entityData.Components.Length == entityData.ComponentsCountX2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_28 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_28->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_30 = V_0;
		int16_t L_31 = (int16_t)L_30->___ComponentsCountX2_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))) == ((uint32_t)L_31))))
		{
			goto IL_007d;
		}
	}
	{
		// Array.Resize (ref entityData.Components, entityData.ComponentsCountX2 << 1);
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_32 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_33 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)(&L_32->___Components_2);
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_34 = V_0;
		int16_t L_35 = (int16_t)L_34->___ComponentsCountX2_1;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98(L_33, ((int32_t)((int32_t)L_35<<1)), Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_RuntimeMethod_var);
	}

IL_007d:
	{
		// entityData.Components[entityData.ComponentsCountX2++] = typeIdx;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_36 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_36->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_38 = V_0;
		int16_t* L_39 = (int16_t*)(&L_38->___ComponentsCountX2_1);
		int16_t* L_40 = L_39;
		int32_t L_41 = *((int16_t*)L_40);
		V_5 = (int16_t)L_41;
		int16_t L_42 = V_5;
		*((int16_t*)L_40) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, 1)));
		int16_t L_43 = V_5;
		int32_t L_44 = V_1;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43), (int32_t)L_44);
		// var pool = entity.Owner.GetPool<T> ();
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_45 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_46 = (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_45->___Owner_2;
		EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* L_47;
		L_47 = EcsWorld_GetPool_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m3F31828C3825C3620189EDABC822E36FA0E9E556_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_m28147912754B2B2AC35B57ADDBB2A8242C08E885_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_2 = L_49;
		// entityData.Components[entityData.ComponentsCountX2++] = idx;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_50 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_50->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_52 = V_0;
		int16_t* L_53 = (int16_t*)(&L_52->___ComponentsCountX2_1);
		int16_t* L_54 = L_53;
		int32_t L_55 = *((int16_t*)L_54);
		V_5 = (int16_t)L_55;
		int16_t L_56 = V_5;
		*((int16_t*)L_54) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_56, 1)));
		int16_t L_57 = V_5;
		int32_t L_58 = V_2;
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57), (int32_t)L_58);
		// entity.Owner.UpdateFilters (typeIdx, entity, entityData);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_59 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_60 = (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_59->___Owner_2;
		int32_t L_61 = V_1;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_62 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_63 = V_0;
		EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline(L_60, L_61, L_62, L_63, NULL);
		// return ref pool.Items[idx];
		InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6* L_64 = (InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsEntityExtensions_Del_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m024114AE7BA6B958F69A6D077B0AB8DD96E858EE_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* V_1 = NULL;
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// var typeIndex = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_t2809B2AB2BD0B40D330EEBF08BD3AF2B9B0089F9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
		V_0 = L_0;
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_1 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_2 = (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_1->___Owner_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_3 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_4;
		L_4 = EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline(L_2, L_3, NULL);
		V_1 = L_4;
		// var owner = entity.Owner;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_5 = ___entity0;
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_6 = (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*)L_5->___Owner_2;
		V_2 = L_6;
		// for (int i = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2) {
		V_3 = 0;
		// for (int i = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_7 = V_1;
		int16_t L_8 = (int16_t)L_7->___ComponentsCountX2_1;
		V_4 = (int32_t)L_8;
		goto IL_009b;
	}

IL_0026:
	{
		// if (entityData.Components[i] == typeIndex) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_9 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_9->___Components_2;
		int32_t L_11 = V_3;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0097;
		}
	}
	{
		// owner.UpdateFilters (-typeIndex, entity, entityData);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_15 = V_2;
		int32_t L_16 = V_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_17 = ___entity0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_18 = V_1;
		EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline(L_15, ((-L_16)), L_17, L_18, NULL);
		// owner.ComponentPools[typeIndex].Recycle (entityData.Components[i + 1]);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_19 = V_2;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_20 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)L_19->___ComponentPools_9;
		int32_t L_21 = V_0;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_24 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_24->___Components_2;
		int32_t L_26 = V_3;
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		int32_t L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Leopotam.Ecs.IEcsComponentPool::Recycle(System.Int32) */, IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_il2cpp_TypeInfo_var, L_23, L_28);
		// entityData.ComponentsCountX2 -= 2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_29 = V_1;
		int16_t* L_30 = (int16_t*)(&L_29->___ComponentsCountX2_1);
		int16_t* L_31 = L_30;
		int32_t L_32 = *((int16_t*)L_31);
		*((int16_t*)L_31) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract(L_32, 2)));
		// if (i < entityData.ComponentsCountX2) {
		int32_t L_33 = V_3;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_34 = V_1;
		int16_t L_35 = (int16_t)L_34->___ComponentsCountX2_1;
		if ((((int32_t)L_33) >= ((int32_t)L_35)))
		{
			goto IL_00a0;
		}
	}
	{
		// entityData.Components[i] = entityData.Components[entityData.ComponentsCountX2];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_36 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_36->___Components_2;
		int32_t L_38 = V_3;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_39 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_39->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_41 = V_1;
		int16_t L_42 = (int16_t)L_41->___ComponentsCountX2_1;
		int16_t L_43 = L_42;
		int32_t L_44 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (int32_t)L_44);
		// entityData.Components[i + 1] = entityData.Components[entityData.ComponentsCountX2 + 1];
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_45 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_45->___Components_2;
		int32_t L_47 = V_3;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_48 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_48->___Components_2;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_50 = V_1;
		int16_t L_51 = (int16_t)L_50->___ComponentsCountX2_1;
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, 1));
		int32_t L_53 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, 1))), (int32_t)L_53);
		// break;
		goto IL_00a0;
	}

IL_0097:
	{
		// for (int i = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2) {
		int32_t L_54 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_54, 2));
	}

IL_009b:
	{
		// for (int i = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2) {
		int32_t L_55 = V_3;
		int32_t L_56 = V_4;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0026;
		}
	}

IL_00a0:
	{
		// if (entityData.ComponentsCountX2 == 0) {
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_57 = V_1;
		int16_t L_58 = (int16_t)L_57->___ComponentsCountX2_1;
		if (L_58)
		{
			goto IL_00b5;
		}
	}
	{
		// owner.RecycleEntityData (entity.Id, ref entityData);
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_59 = V_2;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* L_60 = ___entity0;
		int32_t L_61 = (int32_t)L_60->___Id_0;
		EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* L_62 = V_1;
		EcsWorld_RecycleEntityData_mF32D0E0B4CE31E2AE7027C51DA0C54F9D53FC0D2(L_59, L_61, L_62, NULL);
	}

IL_00b5:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_mE59E17E9B5DAD41A34225F68D4BD276D19332902_gshared_inline (EcsGrowList_1_tD2FE2DF3939E65F1327B5527C78A504B16DDFF3E* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		// public EcsGrowList (int capacity) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// Items = new T[capacity];
		int32_t L_0 = ___capacity0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_0);
		__this->___Items_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Items_0), (void*)L_1);
		// Count = 0;
		__this->___Count_1 = 0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m210AFA3DF2F152B6A7B848331A7396B35C6ADF3F_gshared_inline (EcsGrowList_1_tD2FE2DF3939E65F1327B5527C78A504B16DDFF3E* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (Items.Length == Count) {
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___Items_0;
		int32_t L_1 = (int32_t)__this->___Count_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		// Array.Resize (ref Items, Items.Length << 1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)(&__this->___Items_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___Items_0;
		Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846(L_2, ((int32_t)(((int32_t)(((RuntimeArray*)L_3)->max_length))<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
	}

IL_0025:
	{
		// Items[Count++] = item;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___Items_0;
		int32_t L_5 = (int32_t)__this->___Count_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->___Count_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		RuntimeObject* L_8 = ___item0;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_mBEFEB97AD463DE7EF4A901D4E6BD7C3920676203_gshared_inline (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		// public EcsGrowList (int capacity) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// Items = new T[capacity];
		int32_t L_0 = ___capacity0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_0);
		__this->___Items_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Items_0), (void*)L_1);
		// Count = 0;
		__this->___Count_1 = 0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m19887B8370A2040D1E9C14B4FA889A5A8BF8C199_gshared_inline (EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (Items.Length == Count) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___Items_0;
		int32_t L_1 = (int32_t)__this->___Count_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		// Array.Resize (ref Items, Items.Length << 1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)(&__this->___Items_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___Items_0;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98(L_2, ((int32_t)(((int32_t)(((RuntimeArray*)L_3)->max_length))<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
	}

IL_0025:
	{
		// Items[Count++] = item;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___Items_0;
		int32_t L_5 = (int32_t)__this->___Count_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->___Count_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		int32_t L_8 = ___item0;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* EcsWorld_GetPool_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_m3F31828C3825C3620189EDABC822E36FA0E9E556_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_t2809B2AB2BD0B40D330EEBF08BD3AF2B9B0089F9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
		V_0 = L_0;
		// if (ComponentPools.Length < typeIdx) {
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_1 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_2 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)L_2)))
		{
			goto IL_0032;
		}
	}
	{
		// var len = ComponentPools.Length << 1;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_3 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		V_2 = ((int32_t)(((int32_t)(((RuntimeArray*)L_3)->max_length))<<1));
		goto IL_0022;
	}

IL_001e:
	{
		// len <<= 1;
		int32_t L_4 = V_2;
		V_2 = ((int32_t)(L_4<<1));
	}

IL_0022:
	{
		// while (len <= typeIdx) {
		int32_t L_5 = V_2;
		int32_t L_6 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_001e;
		}
	}
	{
		// Array.Resize (ref ComponentPools, len);
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39** L_7 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39**)(&__this->___ComponentPools_9);
		int32_t L_8 = V_2;
		Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B(L_7, L_8, Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
	}

IL_0032:
	{
		// var pool = (EcsComponentPool<T>) ComponentPools[typeIdx];
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_9 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = ((EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* L_14 = (EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_m7EB633C46EAB2C166BFB5C27224A7AFD0EB5BD8E(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m28147912754B2B2AC35B57ADDBB2A8242C08E885_gshared_inline (EcsComponentPool_1_t81AA75DD9B12A7B5D5FACCD6F23EEF3EAD757EC4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_tBA53EF1B2DD9A5315059B9E690F099ED3B029929* G_B6_0 = NULL;
	AutoResetHandler_tBA53EF1B2DD9A5315059B9E690F099ED3B029929* G_B5_0 = NULL;
	{
		// if (_reservedItemsCount > 0) {
		int32_t L_0 = (int32_t)__this->____reservedItemsCount_4;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// id = _reservedItems[--_reservedItemsCount];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____reservedItems_2;
		int32_t L_2 = (int32_t)__this->____reservedItemsCount_4;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____reservedItemsCount_4 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		int32_t L_6 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		goto IL_0084;
	}

IL_0024:
	{
		// id = _itemsCount;
		int32_t L_7 = (int32_t)__this->____itemsCount_3;
		V_0 = L_7;
		// if (_itemsCount == Items.Length) {
		int32_t L_8 = (int32_t)__this->____itemsCount_3;
		InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6* L_9 = (InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6** L_10 = (InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisInstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61_mA05E035E1CEAFEEC7C1D7490C3C2D1EBAF3056FD(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_m4EE8F0582A6E7C3F99FA9C2FC9EEDC8A2DCA24DA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_tBA53EF1B2DD9A5315059B9E690F099ED3B029929* L_12 = (AutoResetHandler_tBA53EF1B2DD9A5315059B9E690F099ED3B029929*)__this->____autoReset_5;
		AutoResetHandler_tBA53EF1B2DD9A5315059B9E690F099ED3B029929* L_13 = L_12;
		G_B5_0 = L_13;
		if (L_13)
		{
			G_B6_0 = L_13;
			goto IL_0060;
		}
	}
	{
		goto IL_0076;
	}

IL_0060:
	{
		InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6* L_14 = (InstantiateComponentU5BU5D_tCE5972766AD4F0426D2CCE2A0DF83AF4137031B6*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_m5454B53599FB672D65184255D50C74E26EBA26AC_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_0076:
	{
		// _itemsCount++;
		int32_t L_16 = (int32_t)__this->____itemsCount_3;
		__this->____itemsCount_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0084:
	{
		// return id;
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m5454B53599FB672D65184255D50C74E26EBA26AC_gshared_inline (AutoResetHandler_tBA53EF1B2DD9A5315059B9E690F099ED3B029929* __this, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InstantiateComponent_tF5B0432DF22BF3553FD790AF75D09DC5F4531C61*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
