#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionEnter2DEvent>
struct AutoResetHandler_tEFDA22126DD12341E66EF75634AF78EB3CACF1ED;
// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionEnterEvent>
struct AutoResetHandler_tCD770C83CAE659D6C4D1C145470AC121DBE61A9C;
// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionExit2DEvent>
struct AutoResetHandler_t9B373DCF9003AFF5AAF11B13FBB636E9E1A27156;
// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionExitEvent>
struct AutoResetHandler_t5F82B61DDCB7D29C9B77AA5DBA0D25845E04E2FE;
// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionStay2DEvent>
struct AutoResetHandler_tCDAC829F814FF36A22ACA529C9F4D69C9F0FDDBB;
// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionStayEvent>
struct AutoResetHandler_t49D4EECB3148A58D4DF4C9F285AC0C7501F126E6;
// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnControllerColliderHitEvent>
struct AutoResetHandler_t86345FE6416FF0BEA2090AF5B2F7BDDD362D7199;
// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerEnter2DEvent>
struct AutoResetHandler_tFECF387282905CD6E1DD9EAE2AB81357366D5A21;
// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerEnterEvent>
struct AutoResetHandler_t102A949E59DDFB6C3A188BCCB15FA9F3501D9E42;
// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerExit2DEvent>
struct AutoResetHandler_t7B69D3F132F3BE9EB58547D2FFDA3F26AF55BD31;
// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerExitEvent>
struct AutoResetHandler_t2DA5F76CE55AE9442C6147833418893AD8B20EC1;
// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerStay2DEvent>
struct AutoResetHandler_tDA5779761EB47BE295BF95970B398207FD568CDE;
// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerStayEvent>
struct AutoResetHandler_t099F1E374648C10AE5C5A541BB22601298C80CEA;
// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnter2DEvent>
struct EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6;
// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnterEvent>
struct EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2;
// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExit2DEvent>
struct EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160;
// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExitEvent>
struct EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274;
// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStay2DEvent>
struct EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243;
// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStayEvent>
struct EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D;
// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnControllerColliderHitEvent>
struct EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82;
// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnter2DEvent>
struct EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB;
// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnterEvent>
struct EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017;
// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExit2DEvent>
struct EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0;
// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExitEvent>
struct EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5;
// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStay2DEvent>
struct EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4;
// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStayEvent>
struct EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>
struct EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>
struct EcsGrowList_1_tD18B57B6C1A2CB2A9F73AA1DC91373C73ED94442;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>
struct EcsGrowList_1_t006CB893F5B32B3D946B3134BB7AADB9976F6676;
// Leopotam.Ecs.EcsGrowList`1<System.Int32>
struct EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct KeyCollection_tE876BEC9D6233DF834DD3D4FEEAEC7C2EEA81E0B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct ValueCollection_tFAF1AB314C2A0D14DB0764462753CE3A0ABF7434;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>[]
struct EntryU5BU5D_t03CBB2B44FBC260D7BDB2B324FFA54C6BB1C6006;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Leopotam.Ecs.EcsEntity[]
struct EcsEntityU5BU5D_t9316D08D94E17A88908750FBEE4A2C8CF865163C;
// Leopotam.Ecs.EcsFilter[]
struct EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA;
// Leopotam.Ecs.IEcsComponentPool[]
struct IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39;
// Leopotam.Ecs.IEcsComponentPoolResizeListener[]
struct IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// LeoEcsPhysics.OnCollisionEnter2DEvent[]
struct OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5;
// LeoEcsPhysics.OnCollisionEnterEvent[]
struct OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1;
// LeoEcsPhysics.OnCollisionExit2DEvent[]
struct OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D;
// LeoEcsPhysics.OnCollisionExitEvent[]
struct OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35;
// LeoEcsPhysics.OnCollisionStay2DEvent[]
struct OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378;
// LeoEcsPhysics.OnCollisionStayEvent[]
struct OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD;
// LeoEcsPhysics.OnControllerColliderHitEvent[]
struct OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027;
// LeoEcsPhysics.OnTriggerEnter2DEvent[]
struct OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28;
// LeoEcsPhysics.OnTriggerEnterEvent[]
struct OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB;
// LeoEcsPhysics.OnTriggerExit2DEvent[]
struct OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB;
// LeoEcsPhysics.OnTriggerExitEvent[]
struct OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4;
// LeoEcsPhysics.OnTriggerStay2DEvent[]
struct OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA;
// LeoEcsPhysics.OnTriggerStayEvent[]
struct OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Leopotam.Ecs.EcsFilter/DelayedOp[]
struct DelayedOpU5BU5D_t5DE36772360B7C519979E55E5A333A3FEAF23670;
// Leopotam.Ecs.EcsWorld/EcsEntityData[]
struct EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Leopotam.Ecs.EcsFilter
struct EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC;
// Leopotam.Ecs.EcsSystems
struct EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B;
// Leopotam.Ecs.EcsWorld
struct EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Leopotam.Ecs.IEcsComponentPool
struct IEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// LeoEcsPhysics.OnCollisionEnter2DChecker
struct OnCollisionEnter2DChecker_tBE00BE50387AA0CE9FCFA7734F4DD66DB5113C6C;
// LeoEcsPhysics.OnCollisionEnterChecker
struct OnCollisionEnterChecker_t27F5E0B38C056767395AC2D824CD25C4EB36EF7A;
// LeoEcsPhysics.OnCollisionExit2DChecker
struct OnCollisionExit2DChecker_t636E81C28B72B3B85B1017CF4AAD191D022E3A86;
// LeoEcsPhysics.OnCollisionExitChecker
struct OnCollisionExitChecker_t5DDE63D3B61AEFD2CDDF042C57FAD6768DAEAA5B;
// LeoEcsPhysics.OnCollisionStay2DChecker
struct OnCollisionStay2DChecker_tFE72238EE914C84595D7AF8A493EAE508DB3240C;
// LeoEcsPhysics.OnCollisionStayChecker
struct OnCollisionStayChecker_t8248CF55F55D098F760A2C0FAA55FFBF12ADE33A;
// LeoEcsPhysics.OnControllerColliderHitChecker
struct OnControllerColliderHitChecker_tAB493231864D4620DEC3D7DFC4640F019259402D;
// LeoEcsPhysics.OnTriggerEnter2DChecker
struct OnTriggerEnter2DChecker_t069294B37F22198B641F396817A5039FF36DF1CF;
// LeoEcsPhysics.OnTriggerEnterChecker
struct OnTriggerEnterChecker_t77D9F2C0AEC624416CEF79D1841965F4F4AE7AE6;
// LeoEcsPhysics.OnTriggerExit2DChecker
struct OnTriggerExit2DChecker_t6C0B789B034FF04831F0DE915FE498E0F906A016;
// LeoEcsPhysics.OnTriggerExitChecker
struct OnTriggerExitChecker_t1BD7A105F20205285B4516C81270083A95487A62;
// LeoEcsPhysics.OnTriggerStay2DChecker
struct OnTriggerStay2DChecker_tCC64ADD358730F7C16C9B0A927688FC829FED8FD;
// LeoEcsPhysics.OnTriggerStayChecker
struct OnTriggerStayChecker_tC3A984CF32BE46A224E8E064EE82813C43B920CE;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_m3E9CCE071936B0B950CD936208C50B0D52FC83A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m420DD04644E4A591ECBE7902D58299C06D2904B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_mB80EF8A973351E72651826A23F35E2DD02570D7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m85E84584E1A2CD9BE11B12CDC1C8033D960E8535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_m12CDBFC95C683CB9407B8EC98302FA414BC465D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_m1BFB6647A025CD780497269E2AA5165313CB2C33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m65B1BAA6E491AF90325EC9EDA560CF9813524DA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_mE3054F379F765DB034B845927CA24EF3B4C923FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_mD5969FD571CB2F81034AE6F09C70723DA833C0DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_mF75945B48E8F9E85851D8AEF6E8AC3535BCB7996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_mE28EE0FAC051AFE16FAA240197600E1C0174E51A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_m9718CE6369F1ECA7D662E7530607B048B600ACBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Get_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m474BC5E35E3DB37916E6F9596F412AD4673AA2B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_OneFrame_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m069470DA5257D8CA1B3D04AC1B66D0176D2F7E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_OneFrame_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m1FD3D189C3EAF05911EFECF9FF2603B7D5B385DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_OneFrame_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_mA2FA132CAF08C6EE51EB514D229281423415C901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_OneFrame_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m1D0A5357C0875171CAA09062D27E229E7FFD9B68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_OneFrame_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_m3067B862B4E57B3FB06FC7E9DCD622494550F4D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_OneFrame_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_m6F41DDD0B1053F4FF614CBB449AFBE8202053D15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_OneFrame_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m9A234ED5E0B2641646E8B567D0895354F73642C6_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct EcsFilterU5BU5D_t3EF9DBAB76F9FFBF2F62801A0320AABBBD53F8DA;
struct IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5;
struct OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1;
struct OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D;
struct OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35;
struct OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378;
struct OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD;
struct OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027;
struct OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28;
struct OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB;
struct OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB;
struct OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4;
struct OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA;
struct OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135;
struct EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t83DB183C9EEA7D00980FE9E3511F84E90B4BC953 
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

// Leopotam.Ecs.EcsComponentType`1<LeoEcsPhysics.OnCollisionEnter2DEvent>
struct EcsComponentType_1_t5A5168B86206BD0B0087D13E378F0732629D8639  : public RuntimeObject
{
};

struct EcsComponentType_1_t5A5168B86206BD0B0087D13E378F0732629D8639_StaticFields
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

// Leopotam.Ecs.EcsComponentType`1<LeoEcsPhysics.OnCollisionEnterEvent>
struct EcsComponentType_1_t0BD0B576BC2F2A6FEE03507F027AFA5A68864362  : public RuntimeObject
{
};

struct EcsComponentType_1_t0BD0B576BC2F2A6FEE03507F027AFA5A68864362_StaticFields
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

// Leopotam.Ecs.EcsComponentType`1<LeoEcsPhysics.OnCollisionExit2DEvent>
struct EcsComponentType_1_tEAB9524C9850157C89C90D624525E9D333F6770C  : public RuntimeObject
{
};

struct EcsComponentType_1_tEAB9524C9850157C89C90D624525E9D333F6770C_StaticFields
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

// Leopotam.Ecs.EcsComponentType`1<LeoEcsPhysics.OnCollisionExitEvent>
struct EcsComponentType_1_t8516895C42FFF835E243CA074DA74635B3EE4EFC  : public RuntimeObject
{
};

struct EcsComponentType_1_t8516895C42FFF835E243CA074DA74635B3EE4EFC_StaticFields
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

// Leopotam.Ecs.EcsComponentType`1<LeoEcsPhysics.OnCollisionStay2DEvent>
struct EcsComponentType_1_tDB96C93296FFD66EFB501713234A7EABE3EE5315  : public RuntimeObject
{
};

struct EcsComponentType_1_tDB96C93296FFD66EFB501713234A7EABE3EE5315_StaticFields
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

// Leopotam.Ecs.EcsComponentType`1<LeoEcsPhysics.OnCollisionStayEvent>
struct EcsComponentType_1_tEAA108C9219BEB2702C126870786FC9B9DD4EFDC  : public RuntimeObject
{
};

struct EcsComponentType_1_tEAA108C9219BEB2702C126870786FC9B9DD4EFDC_StaticFields
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

// Leopotam.Ecs.EcsComponentType`1<LeoEcsPhysics.OnControllerColliderHitEvent>
struct EcsComponentType_1_t7457D753DD25040B6FF6A13CF149157F4188E819  : public RuntimeObject
{
};

struct EcsComponentType_1_t7457D753DD25040B6FF6A13CF149157F4188E819_StaticFields
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

// Leopotam.Ecs.EcsComponentType`1<LeoEcsPhysics.OnTriggerEnter2DEvent>
struct EcsComponentType_1_t0D1436E0C6999A76DD7EA65721AB7BE27025D960  : public RuntimeObject
{
};

struct EcsComponentType_1_t0D1436E0C6999A76DD7EA65721AB7BE27025D960_StaticFields
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

// Leopotam.Ecs.EcsComponentType`1<LeoEcsPhysics.OnTriggerEnterEvent>
struct EcsComponentType_1_t0EFDD6602702E226C9BD6B4FB2B1F068EBF5E76F  : public RuntimeObject
{
};

struct EcsComponentType_1_t0EFDD6602702E226C9BD6B4FB2B1F068EBF5E76F_StaticFields
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

// Leopotam.Ecs.EcsComponentType`1<LeoEcsPhysics.OnTriggerExit2DEvent>
struct EcsComponentType_1_t320613DE222A818B1D5586B64770EE97E65A3045  : public RuntimeObject
{
};

struct EcsComponentType_1_t320613DE222A818B1D5586B64770EE97E65A3045_StaticFields
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

// Leopotam.Ecs.EcsComponentType`1<LeoEcsPhysics.OnTriggerExitEvent>
struct EcsComponentType_1_t2B28F06B2A2293959F70C28B8EBDC560F1EAAE48  : public RuntimeObject
{
};

struct EcsComponentType_1_t2B28F06B2A2293959F70C28B8EBDC560F1EAAE48_StaticFields
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

// Leopotam.Ecs.EcsComponentType`1<LeoEcsPhysics.OnTriggerStay2DEvent>
struct EcsComponentType_1_tC21FEEE9F5B5D892EF9B4168F5DEC33AB3252B52  : public RuntimeObject
{
};

struct EcsComponentType_1_tC21FEEE9F5B5D892EF9B4168F5DEC33AB3252B52_StaticFields
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

// Leopotam.Ecs.EcsComponentType`1<LeoEcsPhysics.OnTriggerStayEvent>
struct EcsComponentType_1_t7CAF64E4419D0879F8EE464399E517AC866C43E4  : public RuntimeObject
{
};

struct EcsComponentType_1_t7CAF64E4419D0879F8EE464399E517AC866C43E4_StaticFields
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

// Leopotam.Ecs.EcsGrowList`1<System.Int32>
struct EcsGrowList_1_t05BE086951C7D264D8941FC753076684714DAAC3  : public RuntimeObject
{
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;
};
struct Il2CppArrayBounds;

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

// LeoEcsPhysics.EcsPhysicsEvents
struct EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E  : public RuntimeObject
{
};

struct EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields
{
	// Leopotam.Ecs.EcsWorld LeoEcsPhysics.EcsPhysicsEvents::ecsWorld
	EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* ___ecsWorld_0;
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

// LeoEcsPhysics.EcsSystemsExtensions
struct EcsSystemsExtensions_t6A036337A1B8C964EE2AAF3CF79C71421CE7D2E2  : public RuntimeObject
{
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

// LeoEcsPhysics.OnTriggerEnter2DEvent
struct OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7 
{
	// UnityEngine.GameObject LeoEcsPhysics.OnTriggerEnter2DEvent::senderGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	// UnityEngine.Collider2D LeoEcsPhysics.OnTriggerEnter2DEvent::collider2D
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
};
// Native definition for P/Invoke marshalling of LeoEcsPhysics.OnTriggerEnter2DEvent
struct OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
};
// Native definition for COM marshalling of LeoEcsPhysics.OnTriggerEnter2DEvent
struct OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
};

// LeoEcsPhysics.OnTriggerEnterEvent
struct OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2 
{
	// UnityEngine.GameObject LeoEcsPhysics.OnTriggerEnterEvent::senderGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	// UnityEngine.Collider LeoEcsPhysics.OnTriggerEnterEvent::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
};
// Native definition for P/Invoke marshalling of LeoEcsPhysics.OnTriggerEnterEvent
struct OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
};
// Native definition for COM marshalling of LeoEcsPhysics.OnTriggerEnterEvent
struct OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
};

// LeoEcsPhysics.OnTriggerExit2DEvent
struct OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36 
{
	// UnityEngine.GameObject LeoEcsPhysics.OnTriggerExit2DEvent::senderGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	// UnityEngine.Collider2D LeoEcsPhysics.OnTriggerExit2DEvent::collider2D
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
};
// Native definition for P/Invoke marshalling of LeoEcsPhysics.OnTriggerExit2DEvent
struct OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
};
// Native definition for COM marshalling of LeoEcsPhysics.OnTriggerExit2DEvent
struct OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
};

// LeoEcsPhysics.OnTriggerExitEvent
struct OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B 
{
	// UnityEngine.GameObject LeoEcsPhysics.OnTriggerExitEvent::senderGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	// UnityEngine.Collider LeoEcsPhysics.OnTriggerExitEvent::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
};
// Native definition for P/Invoke marshalling of LeoEcsPhysics.OnTriggerExitEvent
struct OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
};
// Native definition for COM marshalling of LeoEcsPhysics.OnTriggerExitEvent
struct OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
};

// LeoEcsPhysics.OnTriggerStay2DEvent
struct OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29 
{
	// UnityEngine.GameObject LeoEcsPhysics.OnTriggerStay2DEvent::senderGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	// UnityEngine.Collider2D LeoEcsPhysics.OnTriggerStay2DEvent::collider2D
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
};
// Native definition for P/Invoke marshalling of LeoEcsPhysics.OnTriggerStay2DEvent
struct OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
};
// Native definition for COM marshalling of LeoEcsPhysics.OnTriggerStay2DEvent
struct OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
};

// LeoEcsPhysics.OnTriggerStayEvent
struct OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40 
{
	// UnityEngine.GameObject LeoEcsPhysics.OnTriggerStayEvent::senderGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	// UnityEngine.Collider LeoEcsPhysics.OnTriggerStayEvent::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
};
// Native definition for P/Invoke marshalling of LeoEcsPhysics.OnTriggerStayEvent
struct OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
};
// Native definition for COM marshalling of LeoEcsPhysics.OnTriggerStayEvent
struct OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnter2DEvent>
struct EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_tFECF387282905CD6E1DD9EAE2AB81357366D5A21* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7 ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
};

// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnterEvent>
struct EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_t102A949E59DDFB6C3A188BCCB15FA9F3501D9E42* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2 ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
};

// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExit2DEvent>
struct EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_t7B69D3F132F3BE9EB58547D2FFDA3F26AF55BD31* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36 ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
};

// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExitEvent>
struct EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_t2DA5F76CE55AE9442C6147833418893AD8B20EC1* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
};

// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStay2DEvent>
struct EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_tDA5779761EB47BE295BF95970B398207FD568CDE* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29 ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
};

// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStayEvent>
struct EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_t099F1E374648C10AE5C5A541BB22601298C80CEA* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40 ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.ContactPoint
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_2;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_3;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_4;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_5;
};

// UnityEngine.ContactPoint2D
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 
{
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;
};

// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92  : public RuntimeObject
{
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_pinvoke
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_com
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
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

// LeoEcsPhysics.OnCollisionExit2DEvent
struct OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302 
{
	// UnityEngine.GameObject LeoEcsPhysics.OnCollisionExit2DEvent::senderGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	// UnityEngine.Collider2D LeoEcsPhysics.OnCollisionExit2DEvent::collider2D
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
	// UnityEngine.Vector2 LeoEcsPhysics.OnCollisionExit2DEvent::relativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity_2;
};
// Native definition for P/Invoke marshalling of LeoEcsPhysics.OnCollisionExit2DEvent
struct OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity_2;
};
// Native definition for COM marshalling of LeoEcsPhysics.OnCollisionExit2DEvent
struct OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity_2;
};

// LeoEcsPhysics.OnCollisionExitEvent
struct OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32 
{
	// UnityEngine.GameObject LeoEcsPhysics.OnCollisionExitEvent::senderGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	// UnityEngine.Collider LeoEcsPhysics.OnCollisionExitEvent::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
	// UnityEngine.Vector3 LeoEcsPhysics.OnCollisionExitEvent::relativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity_2;
};
// Native definition for P/Invoke marshalling of LeoEcsPhysics.OnCollisionExitEvent
struct OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity_2;
};
// Native definition for COM marshalling of LeoEcsPhysics.OnCollisionExitEvent
struct OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity_2;
};

// LeoEcsPhysics.OnControllerColliderHitEvent
struct OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471 
{
	// UnityEngine.GameObject LeoEcsPhysics.OnControllerColliderHitEvent::senderGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	// UnityEngine.Collider LeoEcsPhysics.OnControllerColliderHitEvent::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
	// UnityEngine.Vector3 LeoEcsPhysics.OnControllerColliderHitEvent::hitNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hitNormal_2;
	// UnityEngine.Vector3 LeoEcsPhysics.OnControllerColliderHitEvent::moveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection_3;
};
// Native definition for P/Invoke marshalling of LeoEcsPhysics.OnControllerColliderHitEvent
struct OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hitNormal_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection_3;
};
// Native definition for COM marshalling of LeoEcsPhysics.OnControllerColliderHitEvent
struct OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hitNormal_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection_3;
};

// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExit2DEvent>
struct EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_t9B373DCF9003AFF5AAF11B13FBB636E9E1A27156* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302 ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
};

// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExitEvent>
struct EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_t5F82B61DDCB7D29C9B77AA5DBA0D25845E04E2FE* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32 ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
};

// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnControllerColliderHitEvent>
struct EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_t86345FE6416FF0BEA2090AF5B2F7BDDD362D7199* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471 ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
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

// LeoEcsPhysics.OnCollisionEnter2DEvent
struct OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E 
{
	// UnityEngine.GameObject LeoEcsPhysics.OnCollisionEnter2DEvent::senderGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	// UnityEngine.Collider2D LeoEcsPhysics.OnCollisionEnter2DEvent::collider2D
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
	// UnityEngine.ContactPoint2D LeoEcsPhysics.OnCollisionEnter2DEvent::firstContactPoint2D
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___firstContactPoint2D_2;
	// UnityEngine.Vector2 LeoEcsPhysics.OnCollisionEnter2DEvent::relativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity_3;
};
// Native definition for P/Invoke marshalling of LeoEcsPhysics.OnCollisionEnter2DEvent
struct OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___firstContactPoint2D_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity_3;
};
// Native definition for COM marshalling of LeoEcsPhysics.OnCollisionEnter2DEvent
struct OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___firstContactPoint2D_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity_3;
};

// LeoEcsPhysics.OnCollisionEnterEvent
struct OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD 
{
	// UnityEngine.GameObject LeoEcsPhysics.OnCollisionEnterEvent::senderGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	// UnityEngine.Collider LeoEcsPhysics.OnCollisionEnterEvent::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
	// UnityEngine.ContactPoint LeoEcsPhysics.OnCollisionEnterEvent::firstContactPoint
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___firstContactPoint_2;
	// UnityEngine.Vector3 LeoEcsPhysics.OnCollisionEnterEvent::relativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity_3;
};
// Native definition for P/Invoke marshalling of LeoEcsPhysics.OnCollisionEnterEvent
struct OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___firstContactPoint_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity_3;
};
// Native definition for COM marshalling of LeoEcsPhysics.OnCollisionEnterEvent
struct OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___firstContactPoint_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity_3;
};

// LeoEcsPhysics.OnCollisionStay2DEvent
struct OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A 
{
	// UnityEngine.GameObject LeoEcsPhysics.OnCollisionStay2DEvent::senderGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	// UnityEngine.Collider2D LeoEcsPhysics.OnCollisionStay2DEvent::collider2D
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
	// UnityEngine.ContactPoint2D LeoEcsPhysics.OnCollisionStay2DEvent::firstContactPoint2D
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___firstContactPoint2D_2;
	// UnityEngine.Vector2 LeoEcsPhysics.OnCollisionStay2DEvent::relativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity_3;
};
// Native definition for P/Invoke marshalling of LeoEcsPhysics.OnCollisionStay2DEvent
struct OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___firstContactPoint2D_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity_3;
};
// Native definition for COM marshalling of LeoEcsPhysics.OnCollisionStay2DEvent
struct OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D_1;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___firstContactPoint2D_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity_3;
};

// LeoEcsPhysics.OnCollisionStayEvent
struct OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87 
{
	// UnityEngine.GameObject LeoEcsPhysics.OnCollisionStayEvent::senderGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	// UnityEngine.Collider LeoEcsPhysics.OnCollisionStayEvent::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
	// UnityEngine.ContactPoint LeoEcsPhysics.OnCollisionStayEvent::firstContactPoint
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___firstContactPoint_2;
	// UnityEngine.Vector3 LeoEcsPhysics.OnCollisionStayEvent::relativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity_3;
};
// Native definition for P/Invoke marshalling of LeoEcsPhysics.OnCollisionStayEvent
struct OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___firstContactPoint_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity_3;
};
// Native definition for COM marshalling of LeoEcsPhysics.OnCollisionStayEvent
struct OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_1;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___firstContactPoint_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity_3;
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionEnter2DEvent>
struct AutoResetHandler_tEFDA22126DD12341E66EF75634AF78EB3CACF1ED  : public MulticastDelegate_t
{
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionEnterEvent>
struct AutoResetHandler_tCD770C83CAE659D6C4D1C145470AC121DBE61A9C  : public MulticastDelegate_t
{
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionExit2DEvent>
struct AutoResetHandler_t9B373DCF9003AFF5AAF11B13FBB636E9E1A27156  : public MulticastDelegate_t
{
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionExitEvent>
struct AutoResetHandler_t5F82B61DDCB7D29C9B77AA5DBA0D25845E04E2FE  : public MulticastDelegate_t
{
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionStay2DEvent>
struct AutoResetHandler_tCDAC829F814FF36A22ACA529C9F4D69C9F0FDDBB  : public MulticastDelegate_t
{
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionStayEvent>
struct AutoResetHandler_t49D4EECB3148A58D4DF4C9F285AC0C7501F126E6  : public MulticastDelegate_t
{
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnControllerColliderHitEvent>
struct AutoResetHandler_t86345FE6416FF0BEA2090AF5B2F7BDDD362D7199  : public MulticastDelegate_t
{
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerEnter2DEvent>
struct AutoResetHandler_tFECF387282905CD6E1DD9EAE2AB81357366D5A21  : public MulticastDelegate_t
{
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerEnterEvent>
struct AutoResetHandler_t102A949E59DDFB6C3A188BCCB15FA9F3501D9E42  : public MulticastDelegate_t
{
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerExit2DEvent>
struct AutoResetHandler_t7B69D3F132F3BE9EB58547D2FFDA3F26AF55BD31  : public MulticastDelegate_t
{
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerExitEvent>
struct AutoResetHandler_t2DA5F76CE55AE9442C6147833418893AD8B20EC1  : public MulticastDelegate_t
{
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerStay2DEvent>
struct AutoResetHandler_tDA5779761EB47BE295BF95970B398207FD568CDE  : public MulticastDelegate_t
{
};

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerStayEvent>
struct AutoResetHandler_t099F1E374648C10AE5C5A541BB22601298C80CEA  : public MulticastDelegate_t
{
};

// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnter2DEvent>
struct EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_tEFDA22126DD12341E66EF75634AF78EB3CACF1ED* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
};

// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnterEvent>
struct EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_tCD770C83CAE659D6C4D1C145470AC121DBE61A9C* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
};

// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStay2DEvent>
struct EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_tCDAC829F814FF36A22ACA529C9F4D69C9F0FDDBB* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
};

// Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStayEvent>
struct EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D  : public RuntimeObject
{
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t* ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_t49D4EECB3148A58D4DF4C9F285AC0C7501F126E6* ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87 ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t1C92D55C8AAA837A85D0CC2C9407121F93EA553D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// LeoEcsPhysics.OnCollisionEnter2DChecker
struct OnCollisionEnter2DChecker_tBE00BE50387AA0CE9FCFA7734F4DD66DB5113C6C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoEcsPhysics.OnCollisionEnterChecker
struct OnCollisionEnterChecker_t27F5E0B38C056767395AC2D824CD25C4EB36EF7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoEcsPhysics.OnCollisionExit2DChecker
struct OnCollisionExit2DChecker_t636E81C28B72B3B85B1017CF4AAD191D022E3A86  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoEcsPhysics.OnCollisionExitChecker
struct OnCollisionExitChecker_t5DDE63D3B61AEFD2CDDF042C57FAD6768DAEAA5B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoEcsPhysics.OnCollisionStay2DChecker
struct OnCollisionStay2DChecker_tFE72238EE914C84595D7AF8A493EAE508DB3240C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoEcsPhysics.OnCollisionStayChecker
struct OnCollisionStayChecker_t8248CF55F55D098F760A2C0FAA55FFBF12ADE33A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoEcsPhysics.OnControllerColliderHitChecker
struct OnControllerColliderHitChecker_tAB493231864D4620DEC3D7DFC4640F019259402D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoEcsPhysics.OnTriggerEnter2DChecker
struct OnTriggerEnter2DChecker_t069294B37F22198B641F396817A5039FF36DF1CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoEcsPhysics.OnTriggerEnterChecker
struct OnTriggerEnterChecker_t77D9F2C0AEC624416CEF79D1841965F4F4AE7AE6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoEcsPhysics.OnTriggerExit2DChecker
struct OnTriggerExit2DChecker_t6C0B789B034FF04831F0DE915FE498E0F906A016  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoEcsPhysics.OnTriggerExitChecker
struct OnTriggerExitChecker_t1BD7A105F20205285B4516C81270083A95487A62  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoEcsPhysics.OnTriggerStay2DChecker
struct OnTriggerStay2DChecker_tCC64ADD358730F7C16C9B0A927688FC829FED8FD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoEcsPhysics.OnTriggerStayChecker
struct OnTriggerStayChecker_tC3A984CF32BE46A224E8E064EE82813C43B920CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// LeoEcsPhysics.OnTriggerEnterEvent[]
struct OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB  : public RuntimeArray
{
	ALIGN_FIELD (8) OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2 m_Items[1];

	inline OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
	inline OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
};
// LeoEcsPhysics.OnTriggerStayEvent[]
struct OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135  : public RuntimeArray
{
	ALIGN_FIELD (8) OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40 m_Items[1];

	inline OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
	inline OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
};
// LeoEcsPhysics.OnTriggerExitEvent[]
struct OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4  : public RuntimeArray
{
	ALIGN_FIELD (8) OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B m_Items[1];

	inline OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
	inline OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
};
// LeoEcsPhysics.OnCollisionEnterEvent[]
struct OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1  : public RuntimeArray
{
	ALIGN_FIELD (8) OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD m_Items[1];

	inline OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
	inline OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
};
// LeoEcsPhysics.OnCollisionStayEvent[]
struct OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD  : public RuntimeArray
{
	ALIGN_FIELD (8) OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87 m_Items[1];

	inline OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
	inline OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
};
// LeoEcsPhysics.OnCollisionExitEvent[]
struct OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35  : public RuntimeArray
{
	ALIGN_FIELD (8) OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32 m_Items[1];

	inline OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
	inline OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
};
// LeoEcsPhysics.OnControllerColliderHitEvent[]
struct OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027  : public RuntimeArray
{
	ALIGN_FIELD (8) OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471 m_Items[1];

	inline OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
	inline OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider_1), (void*)NULL);
		#endif
	}
};
// LeoEcsPhysics.OnCollisionEnter2DEvent[]
struct OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5  : public RuntimeArray
{
	ALIGN_FIELD (8) OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E m_Items[1];

	inline OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider2D_1), (void*)NULL);
		#endif
	}
	inline OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider2D_1), (void*)NULL);
		#endif
	}
};
// LeoEcsPhysics.OnCollisionStay2DEvent[]
struct OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378  : public RuntimeArray
{
	ALIGN_FIELD (8) OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A m_Items[1];

	inline OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider2D_1), (void*)NULL);
		#endif
	}
	inline OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider2D_1), (void*)NULL);
		#endif
	}
};
// LeoEcsPhysics.OnCollisionExit2DEvent[]
struct OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D  : public RuntimeArray
{
	ALIGN_FIELD (8) OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302 m_Items[1];

	inline OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider2D_1), (void*)NULL);
		#endif
	}
	inline OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider2D_1), (void*)NULL);
		#endif
	}
};
// LeoEcsPhysics.OnTriggerEnter2DEvent[]
struct OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28  : public RuntimeArray
{
	ALIGN_FIELD (8) OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7 m_Items[1];

	inline OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider2D_1), (void*)NULL);
		#endif
	}
	inline OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider2D_1), (void*)NULL);
		#endif
	}
};
// LeoEcsPhysics.OnTriggerStay2DEvent[]
struct OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA  : public RuntimeArray
{
	ALIGN_FIELD (8) OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29 m_Items[1];

	inline OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider2D_1), (void*)NULL);
		#endif
	}
	inline OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider2D_1), (void*)NULL);
		#endif
	}
};
// LeoEcsPhysics.OnTriggerExit2DEvent[]
struct OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB  : public RuntimeArray
{
	ALIGN_FIELD (8) OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36 m_Items[1];

	inline OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider2D_1), (void*)NULL);
		#endif
	}
	inline OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___senderGameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___collider2D_1), (void*)NULL);
		#endif
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


// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnTriggerEnterEvent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2* EcsEntityExtensions_Get_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_mD5969FD571CB2F81034AE6F09C70723DA833C0DE_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnTriggerStayEvent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40* EcsEntityExtensions_Get_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m474BC5E35E3DB37916E6F9596F412AD4673AA2B9_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnTriggerExitEvent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B* EcsEntityExtensions_Get_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_mE28EE0FAC051AFE16FAA240197600E1C0174E51A_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnCollisionEnterEvent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD* EcsEntityExtensions_Get_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m420DD04644E4A591ECBE7902D58299C06D2904B1_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnCollisionStayEvent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87* EcsEntityExtensions_Get_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_m1BFB6647A025CD780497269E2AA5165313CB2C33_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnCollisionExitEvent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32* EcsEntityExtensions_Get_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m85E84584E1A2CD9BE11B12CDC1C8033D960E8535_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnControllerColliderHitEvent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471* EcsEntityExtensions_Get_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m65B1BAA6E491AF90325EC9EDA560CF9813524DA9_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnCollisionEnter2DEvent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E* EcsEntityExtensions_Get_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_m3E9CCE071936B0B950CD936208C50B0D52FC83A9_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnCollisionStay2DEvent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A* EcsEntityExtensions_Get_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_m12CDBFC95C683CB9407B8EC98302FA414BC465D4_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnCollisionExit2DEvent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302* EcsEntityExtensions_Get_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_mB80EF8A973351E72651826A23F35E2DD02570D7E_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnTriggerEnter2DEvent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7* EcsEntityExtensions_Get_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_mE3054F379F765DB034B845927CA24EF3B4C923FC_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnTriggerStay2DEvent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29* EcsEntityExtensions_Get_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_m9718CE6369F1ECA7D662E7530607B048B600ACBF_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnTriggerExit2DEvent>(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36* EcsEntityExtensions_Get_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_mF75945B48E8F9E85851D8AEF6E8AC3535BCB7996_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnTriggerEnterEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_m3067B862B4E57B3FB06FC7E9DCD622494550F4D4_gshared (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnTriggerStayEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m9A234ED5E0B2641646E8B567D0895354F73642C6_gshared (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnTriggerExitEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_m6F41DDD0B1053F4FF614CBB449AFBE8202053D15_gshared (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnCollisionEnterEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m069470DA5257D8CA1B3D04AC1B66D0176D2F7E59_gshared (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnCollisionStayEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_mA2FA132CAF08C6EE51EB514D229281423415C901_gshared (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnCollisionExitEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m1FD3D189C3EAF05911EFECF9FF2603B7D5B385DF_gshared (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnControllerColliderHitEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m1D0A5357C0875171CAA09062D27E229E7FFD9B68_gshared (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Leopotam.Ecs.EcsWorld/EcsEntityData>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3_gshared (EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnTriggerEnterEvent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* EcsWorld_GetPool_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_m3B9BBF920F70DBF8A6D02E0C5D617660DADE71F3_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnterEvent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m8726DFEF5BDA53F756FA52AC3ED0E3B7B2896FB8_gshared_inline (EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnTriggerStayEvent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* EcsWorld_GetPool_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_mB782FAD8F35A63C7D2B2D499950F17DB882395FC_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStayEvent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m2A249B2F973422F96E16CF0EFAF72B17299A0337_gshared_inline (EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnTriggerExitEvent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* EcsWorld_GetPool_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_m5599461721D6958341A4CC05C1E12CA31E676E15_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExitEvent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_mC1BDB36B3013C868E0D07C2CFAB062A6CBCC99E8_gshared_inline (EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnCollisionEnterEvent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* EcsWorld_GetPool_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_mC028DA45416E31CB41989FC9186F96C4B45A54C4_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnterEvent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_mB77DDABAEB7F1C48894D32AC345B867BB2E5B9E9_gshared_inline (EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnCollisionStayEvent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* EcsWorld_GetPool_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_m714FC7CCED7413CEBF4E0072147C07DF1231B5F4_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStayEvent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_mF71AB3A8720F7FBD30AA97E8DE29C030C4EACA4C_gshared_inline (EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnCollisionExitEvent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* EcsWorld_GetPool_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m4DC066A5CAEBDD3EE3E1E8246802F325F6163A83_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExitEvent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m147A0848403268CE3F2388E30C6C242C8C6D2B15_gshared_inline (EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnControllerColliderHitEvent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* EcsWorld_GetPool_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_mD308456F3BB4D352C80F3557492A610850DFF975_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnControllerColliderHitEvent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m65293BB97C04707B3BDCA51E6234F97B56800342_gshared_inline (EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnCollisionEnter2DEvent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* EcsWorld_GetPool_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_m9F4F3DD14067A4502D26A4C8DDF35C96485F9AF0_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnter2DEvent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_mF552D8F4DCDBA117111BBFF3155FC8D664224D30_gshared_inline (EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnCollisionStay2DEvent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* EcsWorld_GetPool_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_mEC1CD8EF91D118DE8DFADCB9A27904EF7EE34004_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStay2DEvent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_mD802F92DAE07ECE169D0D72FD7593B95F74E38D3_gshared_inline (EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnCollisionExit2DEvent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* EcsWorld_GetPool_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_mA1CCCF6DF5AB6B72EB16F088D34FB9B3D2CCB138_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExit2DEvent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m08D0C8149065D1749D5E1B44A4C528D0F05AD08A_gshared_inline (EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnTriggerEnter2DEvent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* EcsWorld_GetPool_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_mE491B024310C22B731DF2BEE3FC65E425CAFA1F6_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnter2DEvent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m3CAF9C91EA173994BD6EAA827BF7D0D262BFF55B_gshared_inline (EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnTriggerStay2DEvent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* EcsWorld_GetPool_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_m61DA7CFDA62F43290F3540023EAB6ED0E6E5CDE5_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStay2DEvent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m3892FA9BC1241FB7C8D37D48A136E8C2676F8C87_gshared_inline (EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* __this, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnTriggerExit2DEvent>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* EcsWorld_GetPool_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_m6A3B046CB977B20BAEC546A1240E877C19495820_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExit2DEvent>::New()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_mAE60198C005CB81908AE4A9C694B82A81E99D7CE_gshared_inline (EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Object>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnterEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_m2CF9A6C61FEAF2E7528F3985B030EAD7219D10A6_gshared (EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<LeoEcsPhysics.OnTriggerEnterEvent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_mA8C8B5B0B6513282D1FF999BFF9BC46430C9F318_gshared (OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnterEvent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_mCC7FDF506E902AEA84D9FCA827445FFDD2226AE2_gshared (EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerEnterEvent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m15FAE19828F0FFA8FFC8EE9A1EA854F327F77C70_gshared_inline (AutoResetHandler_t102A949E59DDFB6C3A188BCCB15FA9F3501D9E42* __this, OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2* ___component0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStayEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_m28720C65D9F723A874A955C3E02AE640FFBF0B2A_gshared (EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<LeoEcsPhysics.OnTriggerStayEvent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m29105164EBAEBC9D3552AD956B49922D6277C202_gshared (OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStayEvent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_m5EA1601CE499D3EC9A8CABA43A5A99901817205B_gshared (EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerStayEvent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m946B954855B797952A1D78FB7DBCC781A77940B3_gshared_inline (AutoResetHandler_t099F1E374648C10AE5C5A541BB22601298C80CEA* __this, OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40* ___component0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExitEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_mE60EE2AF0AA396230106A7DD02019B12F7A243F3_gshared (EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<LeoEcsPhysics.OnTriggerExitEvent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_mA691358A06D459D8AFC5DA999B68EC00F6331B79_gshared (OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExitEvent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_m78F8D88C267CC80542659762093837F5507D7CC0_gshared (EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerExitEvent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_mA3EF7D67FFDF6F0EFC8C390DBBACE5E307B295EC_gshared_inline (AutoResetHandler_t2DA5F76CE55AE9442C6147833418893AD8B20EC1* __this, OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B* ___component0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnterEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_mF63571A571962ED392EFBA89F9885068DB590D19_gshared (EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<LeoEcsPhysics.OnCollisionEnterEvent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m9499015424592F7B888A5D18F55EE116B78D3EC4_gshared (OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnterEvent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_mEC1A743B774CBDE3FF039F811BAECF459010BF07_gshared (EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionEnterEvent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m081669FC0C283C33F05014CE429EF35FACDB415E_gshared_inline (AutoResetHandler_tCD770C83CAE659D6C4D1C145470AC121DBE61A9C* __this, OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD* ___component0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStayEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_m2E4FADE5765E9D4F524B473D31029C9239AF011D_gshared (EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<LeoEcsPhysics.OnCollisionStayEvent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_mC850FB39922D11A9D2E3410C94D29639D587024F_gshared (OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStayEvent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_m40AABC186022DB1F68D720A9B644F589F4256133_gshared (EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionStayEvent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_mB8A6F66E87F4DF9C069A5037F724D53DC1899C91_gshared_inline (AutoResetHandler_t49D4EECB3148A58D4DF4C9F285AC0C7501F126E6* __this, OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87* ___component0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExitEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_m200C0043EB5FF1F216DCB002E6DC5305023D95EE_gshared (EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<LeoEcsPhysics.OnCollisionExitEvent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m63428756B311E043CA346FC5C7C09ED8F5AF8EE8_gshared (OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExitEvent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_mE4201A02E3F2AB58ADECE690BB99EDD841902BF2_gshared (EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionExitEvent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_mAE127C0236F0D82DDAA6C94CCEEE68D152FD2652_gshared_inline (AutoResetHandler_t5F82B61DDCB7D29C9B77AA5DBA0D25845E04E2FE* __this, OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32* ___component0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnControllerColliderHitEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_mBDF9469D986D58D90566B9BE2D8BDE1209566022_gshared (EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<LeoEcsPhysics.OnControllerColliderHitEvent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_mA2290BA2A675021A43303C9A9A8C8264493FE447_gshared (OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnControllerColliderHitEvent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_mBA3274005753731B46B29BE71D1C5373F124B9DD_gshared (EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnControllerColliderHitEvent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m6896156194635C0FA20C61A902B1BAED56FA715D_gshared_inline (AutoResetHandler_t86345FE6416FF0BEA2090AF5B2F7BDDD362D7199* __this, OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471* ___component0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnter2DEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_mE292AC4D12D5DDDB0DF07825DFFFBB00392E0FA1_gshared (EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<LeoEcsPhysics.OnCollisionEnter2DEvent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_mFB7DC43E815EB2800BE8D559D37C6C335AF37A78_gshared (OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnter2DEvent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_m24FDCD16120A7097A4D445EFE2661EA75E610705_gshared (EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionEnter2DEvent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_mA215734E0E8A218D0171696D4708ECA20D0FFD86_gshared_inline (AutoResetHandler_tEFDA22126DD12341E66EF75634AF78EB3CACF1ED* __this, OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E* ___component0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStay2DEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_mA209DD033AEBCA590639ECB472C8BE02F2849F0E_gshared (EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<LeoEcsPhysics.OnCollisionStay2DEvent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_mED1502A3E583A0192E9374863DA8DD9BFBE4503F_gshared (OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStay2DEvent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_m884D2FA218E493051F7D34909AD61CDE3C4F7F58_gshared (EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionStay2DEvent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_mA8461878CE4DD954CE8DD29DA9CD1693E69AD7BA_gshared_inline (AutoResetHandler_tCDAC829F814FF36A22ACA529C9F4D69C9F0FDDBB* __this, OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A* ___component0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExit2DEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_m27E33A58F60DB9114B7B52410EDD699FA3DE0AFA_gshared (EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<LeoEcsPhysics.OnCollisionExit2DEvent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_m42A1A64196F733064D6B62E36B0152C1D3F6CF3C_gshared (OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExit2DEvent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_m7B4CA30F31A2DD4609409EBB7536D2C423C92E03_gshared (EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionExit2DEvent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m27B77BBF7FDD6D50E4F575F31682337A52AE145D_gshared_inline (AutoResetHandler_t9B373DCF9003AFF5AAF11B13FBB636E9E1A27156* __this, OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302* ___component0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnter2DEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_m884605205B1FA28B01BF597385CF8D33E10F4FD8_gshared (EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<LeoEcsPhysics.OnTriggerEnter2DEvent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_m809955A1F97C2AD0882F2DFE6C69804862C9BC1A_gshared (OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnter2DEvent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_mE2F2795846895E9C93C1FA18592EB36851F53B08_gshared (EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerEnter2DEvent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m20A84EE546E94ED3EEF8B37157CB8CCC44F73F28_gshared_inline (AutoResetHandler_tFECF387282905CD6E1DD9EAE2AB81357366D5A21* __this, OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7* ___component0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStay2DEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_m8B54910C9FFEC36D6298A098B72BD40EA2EB4074_gshared (EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<LeoEcsPhysics.OnTriggerStay2DEvent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_mDCDFB9228C8333E1EBB832588E451E1E9B5A96E7_gshared (OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStay2DEvent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_mB7B65459100787D090A18C7A790EEE5E058A0B3E_gshared (EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerStay2DEvent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m3F680B5EF2411E12AF0F1B9F40465936503B92F9_gshared_inline (AutoResetHandler_tDA5779761EB47BE295BF95970B398207FD568CDE* __this, OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29* ___component0, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExit2DEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1__ctor_m74DA82E4A00292E42BC05A31635172D0768080D9_gshared (EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<LeoEcsPhysics.OnTriggerExit2DEvent>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_m56857E4E9A0A76259925ACFD0DBB4823B1E9C7E2_gshared (OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExit2DEvent>::RaiseOnResizeEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool_1_RaiseOnResizeEvent_m2697EA8A02AA0D640922112A9A8CAE634B32CCB4_gshared (EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerExit2DEvent>::Invoke(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m12482DE93C7DDDB267153F8959F0513417A4C5ED_gshared_inline (AutoResetHandler_t7B69D3F132F3BE9EB58547D2FFDA3F26AF55BD31* __this, OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36* ___component0, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint2D UnityEngine.Collision2D::GetContact(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 Collision2D_GetContact_mB48B0E46D9183FAE6635D3C7BDB09F11ED1B2C95 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Collision2D::get_relativeVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Collision2D_get_relativeVelocity_m1F0BB90BC73FB0A0EA27212D832BB3F26D4C004A (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterCollisionEnter2DEvent(UnityEngine.GameObject,UnityEngine.Collider2D,UnityEngine.ContactPoint2D,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterCollisionEnter2DEvent_m6B198E59F1C4820CE8D55E0C37067A2F2C455582 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D1, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___firstContactPoint2D2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity3, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.Collision::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint UnityEngine.Collision::GetContact(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 Collision_GetContact_m34D66AD97A8DB36AFE0711276C990742B6FE4BCD (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Collision::get_relativeVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterCollisionEnterEvent(UnityEngine.GameObject,UnityEngine.Collider,UnityEngine.ContactPoint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterCollisionEnterEvent_m5E39E85AFABCABF69940188D7FF99EF0D21627B2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___firstContactPoint2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity3, const RuntimeMethod* method) ;
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterCollisionExit2DEvent(UnityEngine.GameObject,UnityEngine.Collider2D,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterCollisionExit2DEvent_m9BB55FEA1AF2454F0020484DD65D037D3BB0F81D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity2, const RuntimeMethod* method) ;
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterCollisionExitEvent(UnityEngine.GameObject,UnityEngine.Collider,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterCollisionExitEvent_m1C79287E7DB7F5DDA1D737BE682D73A13AE8ED37 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity2, const RuntimeMethod* method) ;
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterCollisionStay2DEvent(UnityEngine.GameObject,UnityEngine.Collider2D,UnityEngine.ContactPoint2D,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterCollisionStay2DEvent_m3B98963F9E21A1CC2896EB8EEA25305E67D8FC59 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D1, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___firstContactPoint2D2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity3, const RuntimeMethod* method) ;
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterCollisionStayEvent(UnityEngine.GameObject,UnityEngine.Collider,UnityEngine.ContactPoint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterCollisionStayEvent_mC21EF775A5820FB2969CB0F8D41A894297414D2F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___firstContactPoint2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity3, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ControllerColliderHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerColliderHit_get_normal_mDA7A9B952DEA2B2EDFFDD153DFAA08089C9FFBB6 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_moveDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterControllerColliderHitEvent(UnityEngine.GameObject,UnityEngine.Collider,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterControllerColliderHitEvent_m3F24320C88F6435C9CACCEBC44A456D8244AB29C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hitNormal2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection3, const RuntimeMethod* method) ;
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterTriggerEnter2DEvent(UnityEngine.GameObject,UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterTriggerEnter2DEvent_m27EF1F2E82E1BA7E51E3D1AB58D9E02DE798D539 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D1, const RuntimeMethod* method) ;
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterTriggerEnterEvent(UnityEngine.GameObject,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterTriggerEnterEvent_m4199B1330164F7AE213DDC19A2CE68DD99AC40E0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, const RuntimeMethod* method) ;
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterTriggerExit2DEvent(UnityEngine.GameObject,UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterTriggerExit2DEvent_m6856AC1880FED073840D1A603CBBE264B1CA36D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D1, const RuntimeMethod* method) ;
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterTriggerExitEvent(UnityEngine.GameObject,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterTriggerExitEvent_m5F09879AA182A3175426537359E392A65881CC60 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, const RuntimeMethod* method) ;
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterTriggerStay2DEvent(UnityEngine.GameObject,UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterTriggerStay2DEvent_m13800FB3AC5E7F904288645C11B1446DCC484FF9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D1, const RuntimeMethod* method) ;
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterTriggerStayEvent(UnityEngine.GameObject,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterTriggerStayEvent_m612590FC0CAD59C9B76621E7D620E190D94B8DD6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsWorld::NewEntity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) ;
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnTriggerEnterEvent>(Leopotam.Ecs.EcsEntity&)
inline OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2* EcsEntityExtensions_Get_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_mD5969FD571CB2F81034AE6F09C70723DA833C0DE_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_mD5969FD571CB2F81034AE6F09C70723DA833C0DE_gshared_inline)(___entity0, method);
}
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnTriggerStayEvent>(Leopotam.Ecs.EcsEntity&)
inline OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40* EcsEntityExtensions_Get_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m474BC5E35E3DB37916E6F9596F412AD4673AA2B9_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m474BC5E35E3DB37916E6F9596F412AD4673AA2B9_gshared_inline)(___entity0, method);
}
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnTriggerExitEvent>(Leopotam.Ecs.EcsEntity&)
inline OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B* EcsEntityExtensions_Get_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_mE28EE0FAC051AFE16FAA240197600E1C0174E51A_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_mE28EE0FAC051AFE16FAA240197600E1C0174E51A_gshared_inline)(___entity0, method);
}
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnCollisionEnterEvent>(Leopotam.Ecs.EcsEntity&)
inline OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD* EcsEntityExtensions_Get_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m420DD04644E4A591ECBE7902D58299C06D2904B1_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m420DD04644E4A591ECBE7902D58299C06D2904B1_gshared_inline)(___entity0, method);
}
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnCollisionStayEvent>(Leopotam.Ecs.EcsEntity&)
inline OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87* EcsEntityExtensions_Get_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_m1BFB6647A025CD780497269E2AA5165313CB2C33_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_m1BFB6647A025CD780497269E2AA5165313CB2C33_gshared_inline)(___entity0, method);
}
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnCollisionExitEvent>(Leopotam.Ecs.EcsEntity&)
inline OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32* EcsEntityExtensions_Get_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m85E84584E1A2CD9BE11B12CDC1C8033D960E8535_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m85E84584E1A2CD9BE11B12CDC1C8033D960E8535_gshared_inline)(___entity0, method);
}
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnControllerColliderHitEvent>(Leopotam.Ecs.EcsEntity&)
inline OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471* EcsEntityExtensions_Get_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m65B1BAA6E491AF90325EC9EDA560CF9813524DA9_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m65B1BAA6E491AF90325EC9EDA560CF9813524DA9_gshared_inline)(___entity0, method);
}
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnCollisionEnter2DEvent>(Leopotam.Ecs.EcsEntity&)
inline OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E* EcsEntityExtensions_Get_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_m3E9CCE071936B0B950CD936208C50B0D52FC83A9_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_m3E9CCE071936B0B950CD936208C50B0D52FC83A9_gshared_inline)(___entity0, method);
}
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnCollisionStay2DEvent>(Leopotam.Ecs.EcsEntity&)
inline OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A* EcsEntityExtensions_Get_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_m12CDBFC95C683CB9407B8EC98302FA414BC465D4_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_m12CDBFC95C683CB9407B8EC98302FA414BC465D4_gshared_inline)(___entity0, method);
}
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnCollisionExit2DEvent>(Leopotam.Ecs.EcsEntity&)
inline OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302* EcsEntityExtensions_Get_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_mB80EF8A973351E72651826A23F35E2DD02570D7E_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_mB80EF8A973351E72651826A23F35E2DD02570D7E_gshared_inline)(___entity0, method);
}
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnTriggerEnter2DEvent>(Leopotam.Ecs.EcsEntity&)
inline OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7* EcsEntityExtensions_Get_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_mE3054F379F765DB034B845927CA24EF3B4C923FC_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_mE3054F379F765DB034B845927CA24EF3B4C923FC_gshared_inline)(___entity0, method);
}
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnTriggerStay2DEvent>(Leopotam.Ecs.EcsEntity&)
inline OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29* EcsEntityExtensions_Get_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_m9718CE6369F1ECA7D662E7530607B048B600ACBF_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_m9718CE6369F1ECA7D662E7530607B048B600ACBF_gshared_inline)(___entity0, method);
}
// T& Leopotam.Ecs.EcsEntityExtensions::Get<LeoEcsPhysics.OnTriggerExit2DEvent>(Leopotam.Ecs.EcsEntity&)
inline OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36* EcsEntityExtensions_Get_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_mF75945B48E8F9E85851D8AEF6E8AC3535BCB7996_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method)
{
	return ((  OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36* (*) (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E*, const RuntimeMethod*))EcsEntityExtensions_Get_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_mF75945B48E8F9E85851D8AEF6E8AC3535BCB7996_gshared_inline)(___entity0, method);
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnTriggerEnterEvent>()
inline EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_m3067B862B4E57B3FB06FC7E9DCD622494550F4D4 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method)
{
	return ((  EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* (*) (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B*, const RuntimeMethod*))EcsSystems_OneFrame_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_m3067B862B4E57B3FB06FC7E9DCD622494550F4D4_gshared)(__this, method);
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnTriggerStayEvent>()
inline EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m9A234ED5E0B2641646E8B567D0895354F73642C6 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method)
{
	return ((  EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* (*) (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B*, const RuntimeMethod*))EcsSystems_OneFrame_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m9A234ED5E0B2641646E8B567D0895354F73642C6_gshared)(__this, method);
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnTriggerExitEvent>()
inline EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_m6F41DDD0B1053F4FF614CBB449AFBE8202053D15 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method)
{
	return ((  EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* (*) (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B*, const RuntimeMethod*))EcsSystems_OneFrame_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_m6F41DDD0B1053F4FF614CBB449AFBE8202053D15_gshared)(__this, method);
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnCollisionEnterEvent>()
inline EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m069470DA5257D8CA1B3D04AC1B66D0176D2F7E59 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method)
{
	return ((  EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* (*) (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B*, const RuntimeMethod*))EcsSystems_OneFrame_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m069470DA5257D8CA1B3D04AC1B66D0176D2F7E59_gshared)(__this, method);
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnCollisionStayEvent>()
inline EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_mA2FA132CAF08C6EE51EB514D229281423415C901 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method)
{
	return ((  EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* (*) (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B*, const RuntimeMethod*))EcsSystems_OneFrame_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_mA2FA132CAF08C6EE51EB514D229281423415C901_gshared)(__this, method);
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnCollisionExitEvent>()
inline EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m1FD3D189C3EAF05911EFECF9FF2603B7D5B385DF (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method)
{
	return ((  EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* (*) (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B*, const RuntimeMethod*))EcsSystems_OneFrame_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m1FD3D189C3EAF05911EFECF9FF2603B7D5B385DF_gshared)(__this, method);
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::OneFrame<LeoEcsPhysics.OnControllerColliderHitEvent>()
inline EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystems_OneFrame_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m1D0A5357C0875171CAA09062D27E229E7FFD9B68 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* __this, const RuntimeMethod* method)
{
	return ((  EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* (*) (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B*, const RuntimeMethod*))EcsSystems_OneFrame_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m1D0A5357C0875171CAA09062D27E229E7FFD9B68_gshared)(__this, method);
}
// System.Void System.Array::Resize<Leopotam.Ecs.EcsWorld/EcsEntityData>(T[]&,System.Int32)
inline void Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3 (EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (EcsEntityDataU5BU5D_t526CEB257B536F3BC51E7F01A338728794063469**, int32_t, const RuntimeMethod*))Array_Resize_TisEcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D_m1FB76D516663A22A4454A5F38CEDAE70DFC42CE3_gshared)(___array0, ___newSize1, method);
}
// Leopotam.Ecs.EcsWorld/EcsEntityData& Leopotam.Ecs.EcsWorld::GetEntityData(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* EcsWorld_GetEntityData_m279427A5EDB9357D58A2EABDCA4D5FDBFDFE5670_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
inline void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF41BAAD779AE541F54C0C4D4AD9FBA19164F1A98_gshared)(___array0, ___newSize1, method);
}
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnTriggerEnterEvent>()
inline EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* EcsWorld_GetPool_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_m3B9BBF920F70DBF8A6D02E0C5D617660DADE71F3_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_m3B9BBF920F70DBF8A6D02E0C5D617660DADE71F3_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnterEvent>::New()
inline int32_t EcsComponentPool_1_New_m8726DFEF5BDA53F756FA52AC3ED0E3B7B2896FB8_inline (EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017*, const RuntimeMethod*))EcsComponentPool_1_New_m8726DFEF5BDA53F756FA52AC3ED0E3B7B2896FB8_gshared_inline)(__this, method);
}
// System.Void Leopotam.Ecs.EcsWorld::UpdateFilters(System.Int32,Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsWorld_UpdateFilters_mC5F1D16AB93D10EFCBCCEB9CA9982BB888A7928F_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, int32_t ___typeIdx0, EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity1, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData2, const RuntimeMethod* method) ;
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnTriggerStayEvent>()
inline EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* EcsWorld_GetPool_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_mB782FAD8F35A63C7D2B2D499950F17DB882395FC_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_mB782FAD8F35A63C7D2B2D499950F17DB882395FC_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStayEvent>::New()
inline int32_t EcsComponentPool_1_New_m2A249B2F973422F96E16CF0EFAF72B17299A0337_inline (EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C*, const RuntimeMethod*))EcsComponentPool_1_New_m2A249B2F973422F96E16CF0EFAF72B17299A0337_gshared_inline)(__this, method);
}
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnTriggerExitEvent>()
inline EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* EcsWorld_GetPool_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_m5599461721D6958341A4CC05C1E12CA31E676E15_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_m5599461721D6958341A4CC05C1E12CA31E676E15_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExitEvent>::New()
inline int32_t EcsComponentPool_1_New_mC1BDB36B3013C868E0D07C2CFAB062A6CBCC99E8_inline (EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5*, const RuntimeMethod*))EcsComponentPool_1_New_mC1BDB36B3013C868E0D07C2CFAB062A6CBCC99E8_gshared_inline)(__this, method);
}
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnCollisionEnterEvent>()
inline EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* EcsWorld_GetPool_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_mC028DA45416E31CB41989FC9186F96C4B45A54C4_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_mC028DA45416E31CB41989FC9186F96C4B45A54C4_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnterEvent>::New()
inline int32_t EcsComponentPool_1_New_mB77DDABAEB7F1C48894D32AC345B867BB2E5B9E9_inline (EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2*, const RuntimeMethod*))EcsComponentPool_1_New_mB77DDABAEB7F1C48894D32AC345B867BB2E5B9E9_gshared_inline)(__this, method);
}
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnCollisionStayEvent>()
inline EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* EcsWorld_GetPool_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_m714FC7CCED7413CEBF4E0072147C07DF1231B5F4_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_m714FC7CCED7413CEBF4E0072147C07DF1231B5F4_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStayEvent>::New()
inline int32_t EcsComponentPool_1_New_mF71AB3A8720F7FBD30AA97E8DE29C030C4EACA4C_inline (EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D*, const RuntimeMethod*))EcsComponentPool_1_New_mF71AB3A8720F7FBD30AA97E8DE29C030C4EACA4C_gshared_inline)(__this, method);
}
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnCollisionExitEvent>()
inline EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* EcsWorld_GetPool_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m4DC066A5CAEBDD3EE3E1E8246802F325F6163A83_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m4DC066A5CAEBDD3EE3E1E8246802F325F6163A83_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExitEvent>::New()
inline int32_t EcsComponentPool_1_New_m147A0848403268CE3F2388E30C6C242C8C6D2B15_inline (EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274*, const RuntimeMethod*))EcsComponentPool_1_New_m147A0848403268CE3F2388E30C6C242C8C6D2B15_gshared_inline)(__this, method);
}
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnControllerColliderHitEvent>()
inline EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* EcsWorld_GetPool_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_mD308456F3BB4D352C80F3557492A610850DFF975_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_mD308456F3BB4D352C80F3557492A610850DFF975_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnControllerColliderHitEvent>::New()
inline int32_t EcsComponentPool_1_New_m65293BB97C04707B3BDCA51E6234F97B56800342_inline (EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82*, const RuntimeMethod*))EcsComponentPool_1_New_m65293BB97C04707B3BDCA51E6234F97B56800342_gshared_inline)(__this, method);
}
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnCollisionEnter2DEvent>()
inline EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* EcsWorld_GetPool_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_m9F4F3DD14067A4502D26A4C8DDF35C96485F9AF0_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_m9F4F3DD14067A4502D26A4C8DDF35C96485F9AF0_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnter2DEvent>::New()
inline int32_t EcsComponentPool_1_New_mF552D8F4DCDBA117111BBFF3155FC8D664224D30_inline (EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6*, const RuntimeMethod*))EcsComponentPool_1_New_mF552D8F4DCDBA117111BBFF3155FC8D664224D30_gshared_inline)(__this, method);
}
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnCollisionStay2DEvent>()
inline EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* EcsWorld_GetPool_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_mEC1CD8EF91D118DE8DFADCB9A27904EF7EE34004_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_mEC1CD8EF91D118DE8DFADCB9A27904EF7EE34004_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStay2DEvent>::New()
inline int32_t EcsComponentPool_1_New_mD802F92DAE07ECE169D0D72FD7593B95F74E38D3_inline (EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243*, const RuntimeMethod*))EcsComponentPool_1_New_mD802F92DAE07ECE169D0D72FD7593B95F74E38D3_gshared_inline)(__this, method);
}
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnCollisionExit2DEvent>()
inline EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* EcsWorld_GetPool_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_mA1CCCF6DF5AB6B72EB16F088D34FB9B3D2CCB138_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_mA1CCCF6DF5AB6B72EB16F088D34FB9B3D2CCB138_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExit2DEvent>::New()
inline int32_t EcsComponentPool_1_New_m08D0C8149065D1749D5E1B44A4C528D0F05AD08A_inline (EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160*, const RuntimeMethod*))EcsComponentPool_1_New_m08D0C8149065D1749D5E1B44A4C528D0F05AD08A_gshared_inline)(__this, method);
}
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnTriggerEnter2DEvent>()
inline EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* EcsWorld_GetPool_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_mE491B024310C22B731DF2BEE3FC65E425CAFA1F6_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_mE491B024310C22B731DF2BEE3FC65E425CAFA1F6_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnter2DEvent>::New()
inline int32_t EcsComponentPool_1_New_m3CAF9C91EA173994BD6EAA827BF7D0D262BFF55B_inline (EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB*, const RuntimeMethod*))EcsComponentPool_1_New_m3CAF9C91EA173994BD6EAA827BF7D0D262BFF55B_gshared_inline)(__this, method);
}
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnTriggerStay2DEvent>()
inline EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* EcsWorld_GetPool_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_m61DA7CFDA62F43290F3540023EAB6ED0E6E5CDE5_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_m61DA7CFDA62F43290F3540023EAB6ED0E6E5CDE5_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStay2DEvent>::New()
inline int32_t EcsComponentPool_1_New_m3892FA9BC1241FB7C8D37D48A136E8C2676F8C87_inline (EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4*, const RuntimeMethod*))EcsComponentPool_1_New_m3892FA9BC1241FB7C8D37D48A136E8C2676F8C87_gshared_inline)(__this, method);
}
// Leopotam.Ecs.EcsComponentPool`1<T> Leopotam.Ecs.EcsWorld::GetPool<LeoEcsPhysics.OnTriggerExit2DEvent>()
inline EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* EcsWorld_GetPool_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_m6A3B046CB977B20BAEC546A1240E877C19495820_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method)
{
	return ((  EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* (*) (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090*, const RuntimeMethod*))EcsWorld_GetPool_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_m6A3B046CB977B20BAEC546A1240E877C19495820_gshared_inline)(__this, method);
}
// System.Int32 Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExit2DEvent>::New()
inline int32_t EcsComponentPool_1_New_mAE60198C005CB81908AE4A9C694B82A81E99D7CE_inline (EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0*, const RuntimeMethod*))EcsComponentPool_1_New_mAE60198C005CB81908AE4A9C694B82A81E99D7CE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m48F4681691A2A706881C69C2FB59A4CFD58EB7AB (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4* __this, int32_t ___key0, EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t30B1449996464D018C2DF1046C38BE7B569157F4*, int32_t, EcsGrowList_1_tB94F9D250F1F50E2F6A9336F2AB2CC01DCAD113B**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Leopotam.Ecs.EcsFilter::IsCompatible(Leopotam.Ecs.EcsWorld/EcsEntityData&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsFilter_IsCompatible_m908B473016F3D41FC338BDC440381396E28ECAA2_inline (EcsFilter_t9297D808AE4C020920AF2EFDC11AC2B67C2677FC* __this, EcsEntityData_t09AA723743E78B7185DE2F9B509288C20C59711D* ___entityData0, int32_t ___addedRemovedTypeIndex1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Leopotam.Ecs.IEcsComponentPool>(T[]&,System.Int32)
inline void Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnterEvent>::.ctor()
inline void EcsComponentPool_1__ctor_m2CF9A6C61FEAF2E7528F3985B030EAD7219D10A6 (EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017*, const RuntimeMethod*))EcsComponentPool_1__ctor_m2CF9A6C61FEAF2E7528F3985B030EAD7219D10A6_gshared)(__this, method);
}
// System.Void System.Array::Resize<LeoEcsPhysics.OnTriggerEnterEvent>(T[]&,System.Int32)
inline void Array_Resize_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_mA8C8B5B0B6513282D1FF999BFF9BC46430C9F318 (OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB**, int32_t, const RuntimeMethod*))Array_Resize_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_mA8C8B5B0B6513282D1FF999BFF9BC46430C9F318_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnterEvent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_mCC7FDF506E902AEA84D9FCA827445FFDD2226AE2 (EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_mCC7FDF506E902AEA84D9FCA827445FFDD2226AE2_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerEnterEvent>::Invoke(T&)
inline void AutoResetHandler_Invoke_m15FAE19828F0FFA8FFC8EE9A1EA854F327F77C70_inline (AutoResetHandler_t102A949E59DDFB6C3A188BCCB15FA9F3501D9E42* __this, OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_t102A949E59DDFB6C3A188BCCB15FA9F3501D9E42*, OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2*, const RuntimeMethod*))AutoResetHandler_Invoke_m15FAE19828F0FFA8FFC8EE9A1EA854F327F77C70_gshared_inline)(__this, ___component0, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStayEvent>::.ctor()
inline void EcsComponentPool_1__ctor_m28720C65D9F723A874A955C3E02AE640FFBF0B2A (EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C*, const RuntimeMethod*))EcsComponentPool_1__ctor_m28720C65D9F723A874A955C3E02AE640FFBF0B2A_gshared)(__this, method);
}
// System.Void System.Array::Resize<LeoEcsPhysics.OnTriggerStayEvent>(T[]&,System.Int32)
inline void Array_Resize_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m29105164EBAEBC9D3552AD956B49922D6277C202 (OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135**, int32_t, const RuntimeMethod*))Array_Resize_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m29105164EBAEBC9D3552AD956B49922D6277C202_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStayEvent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_m5EA1601CE499D3EC9A8CABA43A5A99901817205B (EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_m5EA1601CE499D3EC9A8CABA43A5A99901817205B_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerStayEvent>::Invoke(T&)
inline void AutoResetHandler_Invoke_m946B954855B797952A1D78FB7DBCC781A77940B3_inline (AutoResetHandler_t099F1E374648C10AE5C5A541BB22601298C80CEA* __this, OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_t099F1E374648C10AE5C5A541BB22601298C80CEA*, OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40*, const RuntimeMethod*))AutoResetHandler_Invoke_m946B954855B797952A1D78FB7DBCC781A77940B3_gshared_inline)(__this, ___component0, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExitEvent>::.ctor()
inline void EcsComponentPool_1__ctor_mE60EE2AF0AA396230106A7DD02019B12F7A243F3 (EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5*, const RuntimeMethod*))EcsComponentPool_1__ctor_mE60EE2AF0AA396230106A7DD02019B12F7A243F3_gshared)(__this, method);
}
// System.Void System.Array::Resize<LeoEcsPhysics.OnTriggerExitEvent>(T[]&,System.Int32)
inline void Array_Resize_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_mA691358A06D459D8AFC5DA999B68EC00F6331B79 (OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4**, int32_t, const RuntimeMethod*))Array_Resize_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_mA691358A06D459D8AFC5DA999B68EC00F6331B79_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExitEvent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_m78F8D88C267CC80542659762093837F5507D7CC0 (EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_m78F8D88C267CC80542659762093837F5507D7CC0_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerExitEvent>::Invoke(T&)
inline void AutoResetHandler_Invoke_mA3EF7D67FFDF6F0EFC8C390DBBACE5E307B295EC_inline (AutoResetHandler_t2DA5F76CE55AE9442C6147833418893AD8B20EC1* __this, OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_t2DA5F76CE55AE9442C6147833418893AD8B20EC1*, OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B*, const RuntimeMethod*))AutoResetHandler_Invoke_mA3EF7D67FFDF6F0EFC8C390DBBACE5E307B295EC_gshared_inline)(__this, ___component0, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnterEvent>::.ctor()
inline void EcsComponentPool_1__ctor_mF63571A571962ED392EFBA89F9885068DB590D19 (EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2*, const RuntimeMethod*))EcsComponentPool_1__ctor_mF63571A571962ED392EFBA89F9885068DB590D19_gshared)(__this, method);
}
// System.Void System.Array::Resize<LeoEcsPhysics.OnCollisionEnterEvent>(T[]&,System.Int32)
inline void Array_Resize_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m9499015424592F7B888A5D18F55EE116B78D3EC4 (OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1**, int32_t, const RuntimeMethod*))Array_Resize_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m9499015424592F7B888A5D18F55EE116B78D3EC4_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnterEvent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_mEC1A743B774CBDE3FF039F811BAECF459010BF07 (EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_mEC1A743B774CBDE3FF039F811BAECF459010BF07_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionEnterEvent>::Invoke(T&)
inline void AutoResetHandler_Invoke_m081669FC0C283C33F05014CE429EF35FACDB415E_inline (AutoResetHandler_tCD770C83CAE659D6C4D1C145470AC121DBE61A9C* __this, OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_tCD770C83CAE659D6C4D1C145470AC121DBE61A9C*, OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD*, const RuntimeMethod*))AutoResetHandler_Invoke_m081669FC0C283C33F05014CE429EF35FACDB415E_gshared_inline)(__this, ___component0, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStayEvent>::.ctor()
inline void EcsComponentPool_1__ctor_m2E4FADE5765E9D4F524B473D31029C9239AF011D (EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D*, const RuntimeMethod*))EcsComponentPool_1__ctor_m2E4FADE5765E9D4F524B473D31029C9239AF011D_gshared)(__this, method);
}
// System.Void System.Array::Resize<LeoEcsPhysics.OnCollisionStayEvent>(T[]&,System.Int32)
inline void Array_Resize_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_mC850FB39922D11A9D2E3410C94D29639D587024F (OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD**, int32_t, const RuntimeMethod*))Array_Resize_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_mC850FB39922D11A9D2E3410C94D29639D587024F_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStayEvent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_m40AABC186022DB1F68D720A9B644F589F4256133 (EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_m40AABC186022DB1F68D720A9B644F589F4256133_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionStayEvent>::Invoke(T&)
inline void AutoResetHandler_Invoke_mB8A6F66E87F4DF9C069A5037F724D53DC1899C91_inline (AutoResetHandler_t49D4EECB3148A58D4DF4C9F285AC0C7501F126E6* __this, OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_t49D4EECB3148A58D4DF4C9F285AC0C7501F126E6*, OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87*, const RuntimeMethod*))AutoResetHandler_Invoke_mB8A6F66E87F4DF9C069A5037F724D53DC1899C91_gshared_inline)(__this, ___component0, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExitEvent>::.ctor()
inline void EcsComponentPool_1__ctor_m200C0043EB5FF1F216DCB002E6DC5305023D95EE (EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274*, const RuntimeMethod*))EcsComponentPool_1__ctor_m200C0043EB5FF1F216DCB002E6DC5305023D95EE_gshared)(__this, method);
}
// System.Void System.Array::Resize<LeoEcsPhysics.OnCollisionExitEvent>(T[]&,System.Int32)
inline void Array_Resize_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m63428756B311E043CA346FC5C7C09ED8F5AF8EE8 (OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35**, int32_t, const RuntimeMethod*))Array_Resize_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m63428756B311E043CA346FC5C7C09ED8F5AF8EE8_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExitEvent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_mE4201A02E3F2AB58ADECE690BB99EDD841902BF2 (EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_mE4201A02E3F2AB58ADECE690BB99EDD841902BF2_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionExitEvent>::Invoke(T&)
inline void AutoResetHandler_Invoke_mAE127C0236F0D82DDAA6C94CCEEE68D152FD2652_inline (AutoResetHandler_t5F82B61DDCB7D29C9B77AA5DBA0D25845E04E2FE* __this, OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_t5F82B61DDCB7D29C9B77AA5DBA0D25845E04E2FE*, OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32*, const RuntimeMethod*))AutoResetHandler_Invoke_mAE127C0236F0D82DDAA6C94CCEEE68D152FD2652_gshared_inline)(__this, ___component0, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnControllerColliderHitEvent>::.ctor()
inline void EcsComponentPool_1__ctor_mBDF9469D986D58D90566B9BE2D8BDE1209566022 (EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82*, const RuntimeMethod*))EcsComponentPool_1__ctor_mBDF9469D986D58D90566B9BE2D8BDE1209566022_gshared)(__this, method);
}
// System.Void System.Array::Resize<LeoEcsPhysics.OnControllerColliderHitEvent>(T[]&,System.Int32)
inline void Array_Resize_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_mA2290BA2A675021A43303C9A9A8C8264493FE447 (OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027**, int32_t, const RuntimeMethod*))Array_Resize_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_mA2290BA2A675021A43303C9A9A8C8264493FE447_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnControllerColliderHitEvent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_mBA3274005753731B46B29BE71D1C5373F124B9DD (EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_mBA3274005753731B46B29BE71D1C5373F124B9DD_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnControllerColliderHitEvent>::Invoke(T&)
inline void AutoResetHandler_Invoke_m6896156194635C0FA20C61A902B1BAED56FA715D_inline (AutoResetHandler_t86345FE6416FF0BEA2090AF5B2F7BDDD362D7199* __this, OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_t86345FE6416FF0BEA2090AF5B2F7BDDD362D7199*, OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471*, const RuntimeMethod*))AutoResetHandler_Invoke_m6896156194635C0FA20C61A902B1BAED56FA715D_gshared_inline)(__this, ___component0, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnter2DEvent>::.ctor()
inline void EcsComponentPool_1__ctor_mE292AC4D12D5DDDB0DF07825DFFFBB00392E0FA1 (EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6*, const RuntimeMethod*))EcsComponentPool_1__ctor_mE292AC4D12D5DDDB0DF07825DFFFBB00392E0FA1_gshared)(__this, method);
}
// System.Void System.Array::Resize<LeoEcsPhysics.OnCollisionEnter2DEvent>(T[]&,System.Int32)
inline void Array_Resize_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_mFB7DC43E815EB2800BE8D559D37C6C335AF37A78 (OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5**, int32_t, const RuntimeMethod*))Array_Resize_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_mFB7DC43E815EB2800BE8D559D37C6C335AF37A78_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionEnter2DEvent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_m24FDCD16120A7097A4D445EFE2661EA75E610705 (EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_m24FDCD16120A7097A4D445EFE2661EA75E610705_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionEnter2DEvent>::Invoke(T&)
inline void AutoResetHandler_Invoke_mA215734E0E8A218D0171696D4708ECA20D0FFD86_inline (AutoResetHandler_tEFDA22126DD12341E66EF75634AF78EB3CACF1ED* __this, OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_tEFDA22126DD12341E66EF75634AF78EB3CACF1ED*, OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E*, const RuntimeMethod*))AutoResetHandler_Invoke_mA215734E0E8A218D0171696D4708ECA20D0FFD86_gshared_inline)(__this, ___component0, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStay2DEvent>::.ctor()
inline void EcsComponentPool_1__ctor_mA209DD033AEBCA590639ECB472C8BE02F2849F0E (EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243*, const RuntimeMethod*))EcsComponentPool_1__ctor_mA209DD033AEBCA590639ECB472C8BE02F2849F0E_gshared)(__this, method);
}
// System.Void System.Array::Resize<LeoEcsPhysics.OnCollisionStay2DEvent>(T[]&,System.Int32)
inline void Array_Resize_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_mED1502A3E583A0192E9374863DA8DD9BFBE4503F (OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378**, int32_t, const RuntimeMethod*))Array_Resize_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_mED1502A3E583A0192E9374863DA8DD9BFBE4503F_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionStay2DEvent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_m884D2FA218E493051F7D34909AD61CDE3C4F7F58 (EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_m884D2FA218E493051F7D34909AD61CDE3C4F7F58_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionStay2DEvent>::Invoke(T&)
inline void AutoResetHandler_Invoke_mA8461878CE4DD954CE8DD29DA9CD1693E69AD7BA_inline (AutoResetHandler_tCDAC829F814FF36A22ACA529C9F4D69C9F0FDDBB* __this, OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_tCDAC829F814FF36A22ACA529C9F4D69C9F0FDDBB*, OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A*, const RuntimeMethod*))AutoResetHandler_Invoke_mA8461878CE4DD954CE8DD29DA9CD1693E69AD7BA_gshared_inline)(__this, ___component0, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExit2DEvent>::.ctor()
inline void EcsComponentPool_1__ctor_m27E33A58F60DB9114B7B52410EDD699FA3DE0AFA (EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160*, const RuntimeMethod*))EcsComponentPool_1__ctor_m27E33A58F60DB9114B7B52410EDD699FA3DE0AFA_gshared)(__this, method);
}
// System.Void System.Array::Resize<LeoEcsPhysics.OnCollisionExit2DEvent>(T[]&,System.Int32)
inline void Array_Resize_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_m42A1A64196F733064D6B62E36B0152C1D3F6CF3C (OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D**, int32_t, const RuntimeMethod*))Array_Resize_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_m42A1A64196F733064D6B62E36B0152C1D3F6CF3C_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnCollisionExit2DEvent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_m7B4CA30F31A2DD4609409EBB7536D2C423C92E03 (EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_m7B4CA30F31A2DD4609409EBB7536D2C423C92E03_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnCollisionExit2DEvent>::Invoke(T&)
inline void AutoResetHandler_Invoke_m27B77BBF7FDD6D50E4F575F31682337A52AE145D_inline (AutoResetHandler_t9B373DCF9003AFF5AAF11B13FBB636E9E1A27156* __this, OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_t9B373DCF9003AFF5AAF11B13FBB636E9E1A27156*, OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302*, const RuntimeMethod*))AutoResetHandler_Invoke_m27B77BBF7FDD6D50E4F575F31682337A52AE145D_gshared_inline)(__this, ___component0, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnter2DEvent>::.ctor()
inline void EcsComponentPool_1__ctor_m884605205B1FA28B01BF597385CF8D33E10F4FD8 (EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB*, const RuntimeMethod*))EcsComponentPool_1__ctor_m884605205B1FA28B01BF597385CF8D33E10F4FD8_gshared)(__this, method);
}
// System.Void System.Array::Resize<LeoEcsPhysics.OnTriggerEnter2DEvent>(T[]&,System.Int32)
inline void Array_Resize_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_m809955A1F97C2AD0882F2DFE6C69804862C9BC1A (OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28**, int32_t, const RuntimeMethod*))Array_Resize_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_m809955A1F97C2AD0882F2DFE6C69804862C9BC1A_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerEnter2DEvent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_mE2F2795846895E9C93C1FA18592EB36851F53B08 (EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_mE2F2795846895E9C93C1FA18592EB36851F53B08_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerEnter2DEvent>::Invoke(T&)
inline void AutoResetHandler_Invoke_m20A84EE546E94ED3EEF8B37157CB8CCC44F73F28_inline (AutoResetHandler_tFECF387282905CD6E1DD9EAE2AB81357366D5A21* __this, OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_tFECF387282905CD6E1DD9EAE2AB81357366D5A21*, OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7*, const RuntimeMethod*))AutoResetHandler_Invoke_m20A84EE546E94ED3EEF8B37157CB8CCC44F73F28_gshared_inline)(__this, ___component0, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStay2DEvent>::.ctor()
inline void EcsComponentPool_1__ctor_m8B54910C9FFEC36D6298A098B72BD40EA2EB4074 (EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4*, const RuntimeMethod*))EcsComponentPool_1__ctor_m8B54910C9FFEC36D6298A098B72BD40EA2EB4074_gshared)(__this, method);
}
// System.Void System.Array::Resize<LeoEcsPhysics.OnTriggerStay2DEvent>(T[]&,System.Int32)
inline void Array_Resize_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_mDCDFB9228C8333E1EBB832588E451E1E9B5A96E7 (OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA**, int32_t, const RuntimeMethod*))Array_Resize_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_mDCDFB9228C8333E1EBB832588E451E1E9B5A96E7_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerStay2DEvent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_mB7B65459100787D090A18C7A790EEE5E058A0B3E (EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_mB7B65459100787D090A18C7A790EEE5E058A0B3E_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerStay2DEvent>::Invoke(T&)
inline void AutoResetHandler_Invoke_m3F680B5EF2411E12AF0F1B9F40465936503B92F9_inline (AutoResetHandler_tDA5779761EB47BE295BF95970B398207FD568CDE* __this, OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_tDA5779761EB47BE295BF95970B398207FD568CDE*, OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29*, const RuntimeMethod*))AutoResetHandler_Invoke_m3F680B5EF2411E12AF0F1B9F40465936503B92F9_gshared_inline)(__this, ___component0, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExit2DEvent>::.ctor()
inline void EcsComponentPool_1__ctor_m74DA82E4A00292E42BC05A31635172D0768080D9 (EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0*, const RuntimeMethod*))EcsComponentPool_1__ctor_m74DA82E4A00292E42BC05A31635172D0768080D9_gshared)(__this, method);
}
// System.Void System.Array::Resize<LeoEcsPhysics.OnTriggerExit2DEvent>(T[]&,System.Int32)
inline void Array_Resize_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_m56857E4E9A0A76259925ACFD0DBB4823B1E9C7E2 (OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB**, int32_t, const RuntimeMethod*))Array_Resize_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_m56857E4E9A0A76259925ACFD0DBB4823B1E9C7E2_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1<LeoEcsPhysics.OnTriggerExit2DEvent>::RaiseOnResizeEvent()
inline void EcsComponentPool_1_RaiseOnResizeEvent_m2697EA8A02AA0D640922112A9A8CAE634B32CCB4 (EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* __this, const RuntimeMethod* method)
{
	((  void (*) (EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0*, const RuntimeMethod*))EcsComponentPool_1_RaiseOnResizeEvent_m2697EA8A02AA0D640922112A9A8CAE634B32CCB4_gshared)(__this, method);
}
// System.Void Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<LeoEcsPhysics.OnTriggerExit2DEvent>::Invoke(T&)
inline void AutoResetHandler_Invoke_m12482DE93C7DDDB267153F8959F0513417A4C5ED_inline (AutoResetHandler_t7B69D3F132F3BE9EB58547D2FFDA3F26AF55BD31* __this, OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36* ___component0, const RuntimeMethod* method)
{
	((  void (*) (AutoResetHandler_t7B69D3F132F3BE9EB58547D2FFDA3F26AF55BD31*, OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36*, const RuntimeMethod*))AutoResetHandler_Invoke_m12482DE93C7DDDB267153F8959F0513417A4C5ED_gshared_inline)(__this, ___component0, method);
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
// System.Void LeoEcsPhysics.OnCollisionEnter2DChecker::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollisionEnter2DChecker_OnCollisionEnter2D_m9226BB59A58A48142BCC2D0C668975888432E7EE (OnCollisionEnter2DChecker_tBE00BE50387AA0CE9FCFA7734F4DD66DB5113C6C* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___other0, const RuntimeMethod* method) 
{
	{
		// EcsPhysicsEvents.RegisterCollisionEnter2DEvent(gameObject, other.collider, other.GetContact(0), other.relativeVelocity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_1 = ___other0;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2;
		L_2 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_1, NULL);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_3 = ___other0;
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_4;
		L_4 = Collision2D_GetContact_mB48B0E46D9183FAE6635D3C7BDB09F11ED1B2C95(L_3, 0, NULL);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_5 = ___other0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Collision2D_get_relativeVelocity_m1F0BB90BC73FB0A0EA27212D832BB3F26D4C004A(L_5, NULL);
		EcsPhysicsEvents_RegisterCollisionEnter2DEvent_m6B198E59F1C4820CE8D55E0C37067A2F2C455582(L_0, L_2, L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.OnCollisionEnter2DChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollisionEnter2DChecker__ctor_m089A778038A186A2F38148509481B1D05F6DCE8C (OnCollisionEnter2DChecker_tBE00BE50387AA0CE9FCFA7734F4DD66DB5113C6C* __this, const RuntimeMethod* method) 
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
// System.Void LeoEcsPhysics.OnCollisionEnterChecker::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollisionEnterChecker_OnCollisionEnter_mCC77541C5BD343AF3D4C05CE019C9453DE151E0C (OnCollisionEnterChecker_t27F5E0B38C056767395AC2D824CD25C4EB36EF7A* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___other0, const RuntimeMethod* method) 
{
	{
		// EcsPhysicsEvents.RegisterCollisionEnterEvent(gameObject, other.collider, other.GetContact(0), other.relativeVelocity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___other0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2;
		L_2 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_1, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___other0;
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_4;
		L_4 = Collision_GetContact_m34D66AD97A8DB36AFE0711276C990742B6FE4BCD(L_3, 0, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_5 = ___other0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0(L_5, NULL);
		EcsPhysicsEvents_RegisterCollisionEnterEvent_m5E39E85AFABCABF69940188D7FF99EF0D21627B2(L_0, L_2, L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.OnCollisionEnterChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollisionEnterChecker__ctor_m6EA4D9CEC3C09055481A6BA73880D4AEB6C93FBE (OnCollisionEnterChecker_t27F5E0B38C056767395AC2D824CD25C4EB36EF7A* __this, const RuntimeMethod* method) 
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
// System.Void LeoEcsPhysics.OnCollisionExit2DChecker::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollisionExit2DChecker_OnCollisionExit2D_m0B228DE8E39B5AE8870BF49BD47A871CCAEF53E5 (OnCollisionExit2DChecker_t636E81C28B72B3B85B1017CF4AAD191D022E3A86* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___other0, const RuntimeMethod* method) 
{
	{
		// EcsPhysicsEvents.RegisterCollisionExit2DEvent(gameObject, other.collider, other.relativeVelocity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_1 = ___other0;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2;
		L_2 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_1, NULL);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_3 = ___other0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Collision2D_get_relativeVelocity_m1F0BB90BC73FB0A0EA27212D832BB3F26D4C004A(L_3, NULL);
		EcsPhysicsEvents_RegisterCollisionExit2DEvent_m9BB55FEA1AF2454F0020484DD65D037D3BB0F81D(L_0, L_2, L_4, NULL);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.OnCollisionExit2DChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollisionExit2DChecker__ctor_m8CDE9BFD7A5440DD4BF97B873AC18E431A28635C (OnCollisionExit2DChecker_t636E81C28B72B3B85B1017CF4AAD191D022E3A86* __this, const RuntimeMethod* method) 
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
// System.Void LeoEcsPhysics.OnCollisionExitChecker::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollisionExitChecker_OnCollisionExit_mFEC1D0C1A6A5D49088CBB021483AF4250DDA9B1F (OnCollisionExitChecker_t5DDE63D3B61AEFD2CDDF042C57FAD6768DAEAA5B* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___other0, const RuntimeMethod* method) 
{
	{
		// EcsPhysicsEvents.RegisterCollisionExitEvent(gameObject, other.collider, other.relativeVelocity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___other0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2;
		L_2 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_1, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___other0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0(L_3, NULL);
		EcsPhysicsEvents_RegisterCollisionExitEvent_m1C79287E7DB7F5DDA1D737BE682D73A13AE8ED37(L_0, L_2, L_4, NULL);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.OnCollisionExitChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollisionExitChecker__ctor_m2A36F7E613E47DBF39749CF6547BDD6DE5B64B43 (OnCollisionExitChecker_t5DDE63D3B61AEFD2CDDF042C57FAD6768DAEAA5B* __this, const RuntimeMethod* method) 
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
// System.Void LeoEcsPhysics.OnCollisionStay2DChecker::OnCollisionStay2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollisionStay2DChecker_OnCollisionStay2D_m84EFAE49488D58363E6D80492B5C504EA5AE8FB6 (OnCollisionStay2DChecker_tFE72238EE914C84595D7AF8A493EAE508DB3240C* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___other0, const RuntimeMethod* method) 
{
	{
		// EcsPhysicsEvents.RegisterCollisionStay2DEvent(gameObject, other.collider, other.GetContact(0), other.relativeVelocity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_1 = ___other0;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2;
		L_2 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_1, NULL);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_3 = ___other0;
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_4;
		L_4 = Collision2D_GetContact_mB48B0E46D9183FAE6635D3C7BDB09F11ED1B2C95(L_3, 0, NULL);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_5 = ___other0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Collision2D_get_relativeVelocity_m1F0BB90BC73FB0A0EA27212D832BB3F26D4C004A(L_5, NULL);
		EcsPhysicsEvents_RegisterCollisionStay2DEvent_m3B98963F9E21A1CC2896EB8EEA25305E67D8FC59(L_0, L_2, L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.OnCollisionStay2DChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollisionStay2DChecker__ctor_m9F6FEAA6255E124E9DC2E10714407648E44577F6 (OnCollisionStay2DChecker_tFE72238EE914C84595D7AF8A493EAE508DB3240C* __this, const RuntimeMethod* method) 
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
// System.Void LeoEcsPhysics.OnCollisionStayChecker::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollisionStayChecker_OnCollisionStay_m339232FBF38967474D0FD8EC5832CD893A80378E (OnCollisionStayChecker_t8248CF55F55D098F760A2C0FAA55FFBF12ADE33A* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___other0, const RuntimeMethod* method) 
{
	{
		// EcsPhysicsEvents.RegisterCollisionStayEvent(gameObject, other.collider, other.GetContact(0), other.relativeVelocity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___other0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2;
		L_2 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_1, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___other0;
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_4;
		L_4 = Collision_GetContact_m34D66AD97A8DB36AFE0711276C990742B6FE4BCD(L_3, 0, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_5 = ___other0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Collision_get_relativeVelocity_mAD9D45864C56FFAB284E77835BF75DF86D4E4CC0(L_5, NULL);
		EcsPhysicsEvents_RegisterCollisionStayEvent_mC21EF775A5820FB2969CB0F8D41A894297414D2F(L_0, L_2, L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.OnCollisionStayChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCollisionStayChecker__ctor_mD23966F7EC56A5C90087DC964122A4C60C965A15 (OnCollisionStayChecker_t8248CF55F55D098F760A2C0FAA55FFBF12ADE33A* __this, const RuntimeMethod* method) 
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
// System.Void LeoEcsPhysics.OnControllerColliderHitChecker::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnControllerColliderHitChecker_OnControllerColliderHit_m01425BB3706755B19409903CEE59AC70D626ED79 (OnControllerColliderHitChecker_tAB493231864D4620DEC3D7DFC4640F019259402D* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) 
{
	{
		// EcsPhysicsEvents.RegisterControllerColliderHitEvent(gameObject, hit.collider, hit.normal, hit.moveDirection);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_1 = ___hit0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2;
		L_2 = ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6(L_1, NULL);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_3 = ___hit0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = ControllerColliderHit_get_normal_mDA7A9B952DEA2B2EDFFDD153DFAA08089C9FFBB6(L_3, NULL);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_5 = ___hit0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_5, NULL);
		EcsPhysicsEvents_RegisterControllerColliderHitEvent_m3F24320C88F6435C9CACCEBC44A456D8244AB29C(L_0, L_2, L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.OnControllerColliderHitChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnControllerColliderHitChecker__ctor_mC4159375288A639E77FA8A7347D18783F222FCDE (OnControllerColliderHitChecker_tAB493231864D4620DEC3D7DFC4640F019259402D* __this, const RuntimeMethod* method) 
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
// System.Void LeoEcsPhysics.OnTriggerEnter2DChecker::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTriggerEnter2DChecker_OnTriggerEnter2D_mA77DC505C067088373FBD4E38BFFD243AC3D8ECD (OnTriggerEnter2DChecker_t069294B37F22198B641F396817A5039FF36DF1CF* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// EcsPhysicsEvents.RegisterTriggerEnter2DEvent(gameObject, other);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1 = ___other0;
		EcsPhysicsEvents_RegisterTriggerEnter2DEvent_m27EF1F2E82E1BA7E51E3D1AB58D9E02DE798D539(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.OnTriggerEnter2DChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTriggerEnter2DChecker__ctor_m4FF6B80FE3FC0CEF426A760D7172AAD60F530704 (OnTriggerEnter2DChecker_t069294B37F22198B641F396817A5039FF36DF1CF* __this, const RuntimeMethod* method) 
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
// System.Void LeoEcsPhysics.OnTriggerEnterChecker::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTriggerEnterChecker_OnTriggerEnter_mE6127C7C98CEA97CF7B8D89E370AA1921B93C112 (OnTriggerEnterChecker_t77D9F2C0AEC624416CEF79D1841965F4F4AE7AE6* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// EcsPhysicsEvents.RegisterTriggerEnterEvent(gameObject, other);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___other0;
		EcsPhysicsEvents_RegisterTriggerEnterEvent_m4199B1330164F7AE213DDC19A2CE68DD99AC40E0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.OnTriggerEnterChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTriggerEnterChecker__ctor_m2EE91212EFAACF9D69BED8FEEFF028D26A65D92F (OnTriggerEnterChecker_t77D9F2C0AEC624416CEF79D1841965F4F4AE7AE6* __this, const RuntimeMethod* method) 
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
// System.Void LeoEcsPhysics.OnTriggerExit2DChecker::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTriggerExit2DChecker_OnTriggerExit2D_mFF5F27BAE8C5D3C601F3FE9860923A4A8682A0E7 (OnTriggerExit2DChecker_t6C0B789B034FF04831F0DE915FE498E0F906A016* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// EcsPhysicsEvents.RegisterTriggerExit2DEvent(gameObject, other);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1 = ___other0;
		EcsPhysicsEvents_RegisterTriggerExit2DEvent_m6856AC1880FED073840D1A603CBBE264B1CA36D0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.OnTriggerExit2DChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTriggerExit2DChecker__ctor_m5991797F2C5DE80D495B2827B275F6CADDC2D70D (OnTriggerExit2DChecker_t6C0B789B034FF04831F0DE915FE498E0F906A016* __this, const RuntimeMethod* method) 
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
// System.Void LeoEcsPhysics.OnTriggerExitChecker::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTriggerExitChecker_OnTriggerExit_m12A337225FA51F5615C0224A3769E43A93CF6A6E (OnTriggerExitChecker_t1BD7A105F20205285B4516C81270083A95487A62* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// EcsPhysicsEvents.RegisterTriggerExitEvent(gameObject, other);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___other0;
		EcsPhysicsEvents_RegisterTriggerExitEvent_m5F09879AA182A3175426537359E392A65881CC60(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.OnTriggerExitChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTriggerExitChecker__ctor_mE67F672F7FF9FD2A4C497C9BA692A2B9538F8318 (OnTriggerExitChecker_t1BD7A105F20205285B4516C81270083A95487A62* __this, const RuntimeMethod* method) 
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
// System.Void LeoEcsPhysics.OnTriggerStay2DChecker::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTriggerStay2DChecker_OnTriggerStay2D_m7E0671C283688C2F7929673DB49F127A50EF857D (OnTriggerStay2DChecker_tCC64ADD358730F7C16C9B0A927688FC829FED8FD* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	{
		// EcsPhysicsEvents.RegisterTriggerStay2DEvent(gameObject, other);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1 = ___other0;
		EcsPhysicsEvents_RegisterTriggerStay2DEvent_m13800FB3AC5E7F904288645C11B1446DCC484FF9(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.OnTriggerStay2DChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTriggerStay2DChecker__ctor_m001A37ACFA34D5F70D49E0ECAEAC1687108DB969 (OnTriggerStay2DChecker_tCC64ADD358730F7C16C9B0A927688FC829FED8FD* __this, const RuntimeMethod* method) 
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
// System.Void LeoEcsPhysics.OnTriggerStayChecker::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTriggerStayChecker_OnTriggerStay_mC393FFC5AACC281E7CEEA38A3C5C1D5F039F747C (OnTriggerStayChecker_tC3A984CF32BE46A224E8E064EE82813C43B920CE* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// EcsPhysicsEvents.RegisterTriggerStayEvent(gameObject, other);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___other0;
		EcsPhysicsEvents_RegisterTriggerStayEvent_m612590FC0CAD59C9B76621E7D620E190D94B8DD6(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.OnTriggerStayChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTriggerStayChecker__ctor_m88126263BE4F3EA4EC70E81B8221D321AE599DD4 (OnTriggerStayChecker_tC3A984CF32BE46A224E8E064EE82813C43B920CE* __this, const RuntimeMethod* method) 
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
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterTriggerEnterEvent(UnityEngine.GameObject,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterTriggerEnterEvent_m4199B1330164F7AE213DDC19A2CE68DD99AC40E0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_mD5969FD571CB2F81034AE6F09C70723DA833C0DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var eventEntity = ecsWorld.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var))->___ecsWorld_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ref var eventComponent = ref eventEntity.Get<OnTriggerEnterEvent>();
		OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2* L_2;
		L_2 = EcsEntityExtensions_Get_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_mD5969FD571CB2F81034AE6F09C70723DA833C0DE_inline((&V_0), EcsEntityExtensions_Get_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_mD5969FD571CB2F81034AE6F09C70723DA833C0DE_RuntimeMethod_var);
		// eventComponent.senderGameObject = senderGameObject;
		OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2* L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___senderGameObject0;
		L_3->___senderGameObject_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___senderGameObject_0), (void*)L_4);
		// eventComponent.collider = collider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___collider1;
		L_3->___collider_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___collider_1), (void*)L_5);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterTriggerStayEvent(UnityEngine.GameObject,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterTriggerStayEvent_m612590FC0CAD59C9B76621E7D620E190D94B8DD6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m474BC5E35E3DB37916E6F9596F412AD4673AA2B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var eventEntity = ecsWorld.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var))->___ecsWorld_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ref var eventComponent = ref eventEntity.Get<OnTriggerStayEvent>();
		OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40* L_2;
		L_2 = EcsEntityExtensions_Get_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m474BC5E35E3DB37916E6F9596F412AD4673AA2B9_inline((&V_0), EcsEntityExtensions_Get_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m474BC5E35E3DB37916E6F9596F412AD4673AA2B9_RuntimeMethod_var);
		// eventComponent.senderGameObject = senderGameObject;
		OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40* L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___senderGameObject0;
		L_3->___senderGameObject_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___senderGameObject_0), (void*)L_4);
		// eventComponent.collider = collider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___collider1;
		L_3->___collider_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___collider_1), (void*)L_5);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterTriggerExitEvent(UnityEngine.GameObject,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterTriggerExitEvent_m5F09879AA182A3175426537359E392A65881CC60 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_mE28EE0FAC051AFE16FAA240197600E1C0174E51A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var eventEntity = ecsWorld.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var))->___ecsWorld_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ref var eventComponent = ref eventEntity.Get<OnTriggerExitEvent>();
		OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B* L_2;
		L_2 = EcsEntityExtensions_Get_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_mE28EE0FAC051AFE16FAA240197600E1C0174E51A_inline((&V_0), EcsEntityExtensions_Get_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_mE28EE0FAC051AFE16FAA240197600E1C0174E51A_RuntimeMethod_var);
		// eventComponent.senderGameObject = senderGameObject;
		OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B* L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___senderGameObject0;
		L_3->___senderGameObject_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___senderGameObject_0), (void*)L_4);
		// eventComponent.collider = collider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___collider1;
		L_3->___collider_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___collider_1), (void*)L_5);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterCollisionEnterEvent(UnityEngine.GameObject,UnityEngine.Collider,UnityEngine.ContactPoint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterCollisionEnterEvent_m5E39E85AFABCABF69940188D7FF99EF0D21627B2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___firstContactPoint2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m420DD04644E4A591ECBE7902D58299C06D2904B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var eventEntity = ecsWorld.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var))->___ecsWorld_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ref var eventComponent = ref eventEntity.Get<OnCollisionEnterEvent>();
		OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD* L_2;
		L_2 = EcsEntityExtensions_Get_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m420DD04644E4A591ECBE7902D58299C06D2904B1_inline((&V_0), EcsEntityExtensions_Get_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m420DD04644E4A591ECBE7902D58299C06D2904B1_RuntimeMethod_var);
		// eventComponent.senderGameObject = senderGameObject;
		OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD* L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___senderGameObject0;
		L_3->___senderGameObject_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___senderGameObject_0), (void*)L_4);
		// eventComponent.collider = collider;
		OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD* L_5 = L_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = ___collider1;
		L_5->___collider_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___collider_1), (void*)L_6);
		// eventComponent.firstContactPoint = firstContactPoint;
		OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD* L_7 = L_5;
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_8 = ___firstContactPoint2;
		L_7->___firstContactPoint_2 = L_8;
		// eventComponent.relativeVelocity = relativeVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___relativeVelocity3;
		L_7->___relativeVelocity_3 = L_9;
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterCollisionStayEvent(UnityEngine.GameObject,UnityEngine.Collider,UnityEngine.ContactPoint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterCollisionStayEvent_mC21EF775A5820FB2969CB0F8D41A894297414D2F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 ___firstContactPoint2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_m1BFB6647A025CD780497269E2AA5165313CB2C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var eventEntity = ecsWorld.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var))->___ecsWorld_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ref var eventComponent = ref eventEntity.Get<OnCollisionStayEvent>();
		OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87* L_2;
		L_2 = EcsEntityExtensions_Get_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_m1BFB6647A025CD780497269E2AA5165313CB2C33_inline((&V_0), EcsEntityExtensions_Get_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_m1BFB6647A025CD780497269E2AA5165313CB2C33_RuntimeMethod_var);
		// eventComponent.senderGameObject = senderGameObject;
		OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87* L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___senderGameObject0;
		L_3->___senderGameObject_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___senderGameObject_0), (void*)L_4);
		// eventComponent.collider = collider;
		OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87* L_5 = L_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = ___collider1;
		L_5->___collider_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___collider_1), (void*)L_6);
		// eventComponent.firstContactPoint = firstContactPoint;
		OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87* L_7 = L_5;
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_8 = ___firstContactPoint2;
		L_7->___firstContactPoint_2 = L_8;
		// eventComponent.relativeVelocity = relativeVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___relativeVelocity3;
		L_7->___relativeVelocity_3 = L_9;
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterCollisionExitEvent(UnityEngine.GameObject,UnityEngine.Collider,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterCollisionExitEvent_m1C79287E7DB7F5DDA1D737BE682D73A13AE8ED37 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___relativeVelocity2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m85E84584E1A2CD9BE11B12CDC1C8033D960E8535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var eventEntity = ecsWorld.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var))->___ecsWorld_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ref var eventComponent = ref eventEntity.Get<OnCollisionExitEvent>();
		OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32* L_2;
		L_2 = EcsEntityExtensions_Get_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m85E84584E1A2CD9BE11B12CDC1C8033D960E8535_inline((&V_0), EcsEntityExtensions_Get_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m85E84584E1A2CD9BE11B12CDC1C8033D960E8535_RuntimeMethod_var);
		// eventComponent.senderGameObject = senderGameObject;
		OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32* L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___senderGameObject0;
		L_3->___senderGameObject_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___senderGameObject_0), (void*)L_4);
		// eventComponent.collider = collider;
		OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32* L_5 = L_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = ___collider1;
		L_5->___collider_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___collider_1), (void*)L_6);
		// eventComponent.relativeVelocity = relativeVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___relativeVelocity2;
		L_5->___relativeVelocity_2 = L_7;
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterControllerColliderHitEvent(UnityEngine.GameObject,UnityEngine.Collider,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterControllerColliderHitEvent_m3F24320C88F6435C9CACCEBC44A456D8244AB29C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hitNormal2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m65B1BAA6E491AF90325EC9EDA560CF9813524DA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var eventEntity = ecsWorld.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var))->___ecsWorld_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ref var eventComponent = ref eventEntity.Get<OnControllerColliderHitEvent>();
		OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471* L_2;
		L_2 = EcsEntityExtensions_Get_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m65B1BAA6E491AF90325EC9EDA560CF9813524DA9_inline((&V_0), EcsEntityExtensions_Get_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m65B1BAA6E491AF90325EC9EDA560CF9813524DA9_RuntimeMethod_var);
		// eventComponent.senderGameObject = senderGameObject;
		OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471* L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___senderGameObject0;
		L_3->___senderGameObject_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___senderGameObject_0), (void*)L_4);
		// eventComponent.collider = collider;
		OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471* L_5 = L_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = ___collider1;
		L_5->___collider_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___collider_1), (void*)L_6);
		// eventComponent.hitNormal = hitNormal;
		OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471* L_7 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___hitNormal2;
		L_7->___hitNormal_2 = L_8;
		// eventComponent.moveDirection = moveDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___moveDirection3;
		L_7->___moveDirection_3 = L_9;
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterCollisionEnter2DEvent(UnityEngine.GameObject,UnityEngine.Collider2D,UnityEngine.ContactPoint2D,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterCollisionEnter2DEvent_m6B198E59F1C4820CE8D55E0C37067A2F2C455582 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D1, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___firstContactPoint2D2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_m3E9CCE071936B0B950CD936208C50B0D52FC83A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var eventEntity = ecsWorld.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var))->___ecsWorld_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ref var eventComponent = ref eventEntity.Get<OnCollisionEnter2DEvent>();
		OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E* L_2;
		L_2 = EcsEntityExtensions_Get_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_m3E9CCE071936B0B950CD936208C50B0D52FC83A9_inline((&V_0), EcsEntityExtensions_Get_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_m3E9CCE071936B0B950CD936208C50B0D52FC83A9_RuntimeMethod_var);
		// eventComponent.senderGameObject = senderGameObject;
		OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E* L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___senderGameObject0;
		L_3->___senderGameObject_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___senderGameObject_0), (void*)L_4);
		// eventComponent.collider2D = collider2D;
		OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E* L_5 = L_3;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6 = ___collider2D1;
		L_5->___collider2D_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___collider2D_1), (void*)L_6);
		// eventComponent.firstContactPoint2D = firstContactPoint2D;
		OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E* L_7 = L_5;
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_8 = ___firstContactPoint2D2;
		L_7->___firstContactPoint2D_2 = L_8;
		// eventComponent.relativeVelocity = relativeVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___relativeVelocity3;
		L_7->___relativeVelocity_3 = L_9;
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterCollisionStay2DEvent(UnityEngine.GameObject,UnityEngine.Collider2D,UnityEngine.ContactPoint2D,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterCollisionStay2DEvent_m3B98963F9E21A1CC2896EB8EEA25305E67D8FC59 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D1, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 ___firstContactPoint2D2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_m12CDBFC95C683CB9407B8EC98302FA414BC465D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var eventEntity = ecsWorld.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var))->___ecsWorld_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ref var eventComponent = ref eventEntity.Get<OnCollisionStay2DEvent>();
		OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A* L_2;
		L_2 = EcsEntityExtensions_Get_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_m12CDBFC95C683CB9407B8EC98302FA414BC465D4_inline((&V_0), EcsEntityExtensions_Get_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_m12CDBFC95C683CB9407B8EC98302FA414BC465D4_RuntimeMethod_var);
		// eventComponent.senderGameObject = senderGameObject;
		OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A* L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___senderGameObject0;
		L_3->___senderGameObject_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___senderGameObject_0), (void*)L_4);
		// eventComponent.collider2D = collider2D;
		OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A* L_5 = L_3;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6 = ___collider2D1;
		L_5->___collider2D_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___collider2D_1), (void*)L_6);
		// eventComponent.firstContactPoint2D = firstContactPoint2D;
		OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A* L_7 = L_5;
		ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 L_8 = ___firstContactPoint2D2;
		L_7->___firstContactPoint2D_2 = L_8;
		// eventComponent.relativeVelocity = relativeVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___relativeVelocity3;
		L_7->___relativeVelocity_3 = L_9;
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterCollisionExit2DEvent(UnityEngine.GameObject,UnityEngine.Collider2D,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterCollisionExit2DEvent_m9BB55FEA1AF2454F0020484DD65D037D3BB0F81D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___relativeVelocity2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_mB80EF8A973351E72651826A23F35E2DD02570D7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var eventEntity = ecsWorld.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var))->___ecsWorld_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ref var eventComponent = ref eventEntity.Get<OnCollisionExit2DEvent>();
		OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302* L_2;
		L_2 = EcsEntityExtensions_Get_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_mB80EF8A973351E72651826A23F35E2DD02570D7E_inline((&V_0), EcsEntityExtensions_Get_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_mB80EF8A973351E72651826A23F35E2DD02570D7E_RuntimeMethod_var);
		// eventComponent.senderGameObject = senderGameObject;
		OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302* L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___senderGameObject0;
		L_3->___senderGameObject_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___senderGameObject_0), (void*)L_4);
		// eventComponent.collider2D = collider2D;
		OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302* L_5 = L_3;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6 = ___collider2D1;
		L_5->___collider2D_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___collider2D_1), (void*)L_6);
		// eventComponent.relativeVelocity = relativeVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___relativeVelocity2;
		L_5->___relativeVelocity_2 = L_7;
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterTriggerEnter2DEvent(UnityEngine.GameObject,UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterTriggerEnter2DEvent_m27EF1F2E82E1BA7E51E3D1AB58D9E02DE798D539 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_mE3054F379F765DB034B845927CA24EF3B4C923FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var eventEntity = ecsWorld.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var))->___ecsWorld_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ref var eventComponent = ref eventEntity.Get<OnTriggerEnter2DEvent>();
		OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7* L_2;
		L_2 = EcsEntityExtensions_Get_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_mE3054F379F765DB034B845927CA24EF3B4C923FC_inline((&V_0), EcsEntityExtensions_Get_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_mE3054F379F765DB034B845927CA24EF3B4C923FC_RuntimeMethod_var);
		// eventComponent.senderGameObject = senderGameObject;
		OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7* L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___senderGameObject0;
		L_3->___senderGameObject_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___senderGameObject_0), (void*)L_4);
		// eventComponent.collider2D = collider2D;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = ___collider2D1;
		L_3->___collider2D_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___collider2D_1), (void*)L_5);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterTriggerStay2DEvent(UnityEngine.GameObject,UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterTriggerStay2DEvent_m13800FB3AC5E7F904288645C11B1446DCC484FF9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_m9718CE6369F1ECA7D662E7530607B048B600ACBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var eventEntity = ecsWorld.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var))->___ecsWorld_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ref var eventComponent = ref eventEntity.Get<OnTriggerStay2DEvent>();
		OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29* L_2;
		L_2 = EcsEntityExtensions_Get_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_m9718CE6369F1ECA7D662E7530607B048B600ACBF_inline((&V_0), EcsEntityExtensions_Get_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_m9718CE6369F1ECA7D662E7530607B048B600ACBF_RuntimeMethod_var);
		// eventComponent.senderGameObject = senderGameObject;
		OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29* L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___senderGameObject0;
		L_3->___senderGameObject_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___senderGameObject_0), (void*)L_4);
		// eventComponent.collider2D = collider2D;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = ___collider2D1;
		L_3->___collider2D_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___collider2D_1), (void*)L_5);
		// }
		return;
	}
}
// System.Void LeoEcsPhysics.EcsPhysicsEvents::RegisterTriggerExit2DEvent(UnityEngine.GameObject,UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsPhysicsEvents_RegisterTriggerExit2DEvent_m6856AC1880FED073840D1A603CBBE264B1CA36D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___senderGameObject0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider2D1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Get_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_mF75945B48E8F9E85851D8AEF6E8AC3535BCB7996_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var eventEntity = ecsWorld.NewEntity();
		EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* L_0 = ((EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_StaticFields*)il2cpp_codegen_static_fields_for(EcsPhysicsEvents_t82A1F8DE2AE1320C63A555D4F6DCBD5CC1597B3E_il2cpp_TypeInfo_var))->___ecsWorld_0;
		EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E L_1;
		L_1 = EcsWorld_NewEntity_m828FEED297F5F42E2F36D2093B694FECE4253EAD_inline(L_0, NULL);
		V_0 = L_1;
		// ref var eventComponent = ref eventEntity.Get<OnTriggerExit2DEvent>();
		OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36* L_2;
		L_2 = EcsEntityExtensions_Get_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_mF75945B48E8F9E85851D8AEF6E8AC3535BCB7996_inline((&V_0), EcsEntityExtensions_Get_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_mF75945B48E8F9E85851D8AEF6E8AC3535BCB7996_RuntimeMethod_var);
		// eventComponent.senderGameObject = senderGameObject;
		OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36* L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___senderGameObject0;
		L_3->___senderGameObject_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___senderGameObject_0), (void*)L_4);
		// eventComponent.collider2D = collider2D;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = ___collider2D1;
		L_3->___collider2D_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___collider2D_1), (void*)L_5);
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
// Conversion methods for marshalling of: LeoEcsPhysics.OnCollisionEnter2DEvent
IL2CPP_EXTERN_C void OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshal_pinvoke(const OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E& unmarshaled, OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionEnter2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshal_pinvoke_back(const OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshaled_pinvoke& marshaled, OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionEnter2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnCollisionEnter2DEvent
IL2CPP_EXTERN_C void OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshal_pinvoke_cleanup(OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LeoEcsPhysics.OnCollisionEnter2DEvent
IL2CPP_EXTERN_C void OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshal_com(const OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E& unmarshaled, OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshaled_com& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionEnter2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshal_com_back(const OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshaled_com& marshaled, OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionEnter2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnCollisionEnter2DEvent
IL2CPP_EXTERN_C void OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshal_com_cleanup(OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: LeoEcsPhysics.OnCollisionEnterEvent
IL2CPP_EXTERN_C void OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshal_pinvoke(const OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD& unmarshaled, OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionEnterEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshal_pinvoke_back(const OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshaled_pinvoke& marshaled, OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionEnterEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnCollisionEnterEvent
IL2CPP_EXTERN_C void OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshal_pinvoke_cleanup(OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LeoEcsPhysics.OnCollisionEnterEvent
IL2CPP_EXTERN_C void OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshal_com(const OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD& unmarshaled, OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshaled_com& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionEnterEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshal_com_back(const OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshaled_com& marshaled, OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionEnterEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnCollisionEnterEvent
IL2CPP_EXTERN_C void OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshal_com_cleanup(OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: LeoEcsPhysics.OnCollisionExit2DEvent
IL2CPP_EXTERN_C void OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshal_pinvoke(const OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302& unmarshaled, OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionExit2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshal_pinvoke_back(const OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshaled_pinvoke& marshaled, OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionExit2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnCollisionExit2DEvent
IL2CPP_EXTERN_C void OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshal_pinvoke_cleanup(OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LeoEcsPhysics.OnCollisionExit2DEvent
IL2CPP_EXTERN_C void OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshal_com(const OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302& unmarshaled, OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshaled_com& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionExit2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshal_com_back(const OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshaled_com& marshaled, OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionExit2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnCollisionExit2DEvent
IL2CPP_EXTERN_C void OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshal_com_cleanup(OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: LeoEcsPhysics.OnCollisionExitEvent
IL2CPP_EXTERN_C void OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshal_pinvoke(const OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32& unmarshaled, OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionExitEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshal_pinvoke_back(const OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshaled_pinvoke& marshaled, OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionExitEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnCollisionExitEvent
IL2CPP_EXTERN_C void OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshal_pinvoke_cleanup(OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LeoEcsPhysics.OnCollisionExitEvent
IL2CPP_EXTERN_C void OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshal_com(const OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32& unmarshaled, OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshaled_com& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionExitEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshal_com_back(const OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshaled_com& marshaled, OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionExitEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnCollisionExitEvent
IL2CPP_EXTERN_C void OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshal_com_cleanup(OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: LeoEcsPhysics.OnCollisionStay2DEvent
IL2CPP_EXTERN_C void OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshal_pinvoke(const OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A& unmarshaled, OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionStay2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshal_pinvoke_back(const OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshaled_pinvoke& marshaled, OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionStay2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnCollisionStay2DEvent
IL2CPP_EXTERN_C void OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshal_pinvoke_cleanup(OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LeoEcsPhysics.OnCollisionStay2DEvent
IL2CPP_EXTERN_C void OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshal_com(const OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A& unmarshaled, OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshaled_com& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionStay2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshal_com_back(const OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshaled_com& marshaled, OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionStay2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnCollisionStay2DEvent
IL2CPP_EXTERN_C void OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshal_com_cleanup(OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: LeoEcsPhysics.OnCollisionStayEvent
IL2CPP_EXTERN_C void OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshal_pinvoke(const OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87& unmarshaled, OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionStayEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshal_pinvoke_back(const OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshaled_pinvoke& marshaled, OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionStayEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnCollisionStayEvent
IL2CPP_EXTERN_C void OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshal_pinvoke_cleanup(OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LeoEcsPhysics.OnCollisionStayEvent
IL2CPP_EXTERN_C void OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshal_com(const OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87& unmarshaled, OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshaled_com& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionStayEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshal_com_back(const OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshaled_com& marshaled, OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnCollisionStayEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnCollisionStayEvent
IL2CPP_EXTERN_C void OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshal_com_cleanup(OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: LeoEcsPhysics.OnControllerColliderHitEvent
IL2CPP_EXTERN_C void OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshal_pinvoke(const OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471& unmarshaled, OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnControllerColliderHitEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshal_pinvoke_back(const OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshaled_pinvoke& marshaled, OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnControllerColliderHitEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnControllerColliderHitEvent
IL2CPP_EXTERN_C void OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshal_pinvoke_cleanup(OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LeoEcsPhysics.OnControllerColliderHitEvent
IL2CPP_EXTERN_C void OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshal_com(const OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471& unmarshaled, OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshaled_com& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnControllerColliderHitEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshal_com_back(const OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshaled_com& marshaled, OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnControllerColliderHitEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnControllerColliderHitEvent
IL2CPP_EXTERN_C void OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshal_com_cleanup(OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: LeoEcsPhysics.OnTriggerEnter2DEvent
IL2CPP_EXTERN_C void OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshal_pinvoke(const OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7& unmarshaled, OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerEnter2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshal_pinvoke_back(const OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshaled_pinvoke& marshaled, OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerEnter2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnTriggerEnter2DEvent
IL2CPP_EXTERN_C void OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshal_pinvoke_cleanup(OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LeoEcsPhysics.OnTriggerEnter2DEvent
IL2CPP_EXTERN_C void OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshal_com(const OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7& unmarshaled, OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshaled_com& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerEnter2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshal_com_back(const OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshaled_com& marshaled, OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerEnter2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnTriggerEnter2DEvent
IL2CPP_EXTERN_C void OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshal_com_cleanup(OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: LeoEcsPhysics.OnTriggerEnterEvent
IL2CPP_EXTERN_C void OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshal_pinvoke(const OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2& unmarshaled, OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerEnterEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshal_pinvoke_back(const OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshaled_pinvoke& marshaled, OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerEnterEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnTriggerEnterEvent
IL2CPP_EXTERN_C void OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshal_pinvoke_cleanup(OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LeoEcsPhysics.OnTriggerEnterEvent
IL2CPP_EXTERN_C void OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshal_com(const OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2& unmarshaled, OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshaled_com& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerEnterEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshal_com_back(const OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshaled_com& marshaled, OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerEnterEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnTriggerEnterEvent
IL2CPP_EXTERN_C void OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshal_com_cleanup(OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: LeoEcsPhysics.OnTriggerExit2DEvent
IL2CPP_EXTERN_C void OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshal_pinvoke(const OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36& unmarshaled, OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerExit2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshal_pinvoke_back(const OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshaled_pinvoke& marshaled, OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerExit2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnTriggerExit2DEvent
IL2CPP_EXTERN_C void OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshal_pinvoke_cleanup(OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LeoEcsPhysics.OnTriggerExit2DEvent
IL2CPP_EXTERN_C void OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshal_com(const OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36& unmarshaled, OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshaled_com& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerExit2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshal_com_back(const OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshaled_com& marshaled, OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerExit2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnTriggerExit2DEvent
IL2CPP_EXTERN_C void OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshal_com_cleanup(OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: LeoEcsPhysics.OnTriggerExitEvent
IL2CPP_EXTERN_C void OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshal_pinvoke(const OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B& unmarshaled, OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerExitEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshal_pinvoke_back(const OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshaled_pinvoke& marshaled, OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerExitEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnTriggerExitEvent
IL2CPP_EXTERN_C void OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshal_pinvoke_cleanup(OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LeoEcsPhysics.OnTriggerExitEvent
IL2CPP_EXTERN_C void OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshal_com(const OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B& unmarshaled, OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshaled_com& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerExitEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshal_com_back(const OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshaled_com& marshaled, OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerExitEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnTriggerExitEvent
IL2CPP_EXTERN_C void OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshal_com_cleanup(OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: LeoEcsPhysics.OnTriggerStay2DEvent
IL2CPP_EXTERN_C void OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshal_pinvoke(const OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29& unmarshaled, OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerStay2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshal_pinvoke_back(const OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshaled_pinvoke& marshaled, OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerStay2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnTriggerStay2DEvent
IL2CPP_EXTERN_C void OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshal_pinvoke_cleanup(OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LeoEcsPhysics.OnTriggerStay2DEvent
IL2CPP_EXTERN_C void OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshal_com(const OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29& unmarshaled, OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshaled_com& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerStay2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshal_com_back(const OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshaled_com& marshaled, OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerStay2DEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnTriggerStay2DEvent
IL2CPP_EXTERN_C void OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshal_com_cleanup(OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: LeoEcsPhysics.OnTriggerStayEvent
IL2CPP_EXTERN_C void OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshal_pinvoke(const OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40& unmarshaled, OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerStayEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshal_pinvoke_back(const OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshaled_pinvoke& marshaled, OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerStayEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnTriggerStayEvent
IL2CPP_EXTERN_C void OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshal_pinvoke_cleanup(OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LeoEcsPhysics.OnTriggerStayEvent
IL2CPP_EXTERN_C void OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshal_com(const OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40& unmarshaled, OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshaled_com& marshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerStayEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshal_com_back(const OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshaled_com& marshaled, OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40& unmarshaled)
{
	Exception_t* ___senderGameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senderGameObject' of type 'OnTriggerStayEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senderGameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LeoEcsPhysics.OnTriggerStayEvent
IL2CPP_EXTERN_C void OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshal_com_cleanup(OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_marshaled_com& marshaled)
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
// Leopotam.Ecs.EcsSystems LeoEcsPhysics.EcsSystemsExtensions::OneFramePhysics(Leopotam.Ecs.EcsSystems)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* EcsSystemsExtensions_OneFramePhysics_mD505FCEADFDFDD2F8EF5D6F8DA8C1ACBDA3B3A62 (EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* ___ecsSystems0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_OneFrame_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m069470DA5257D8CA1B3D04AC1B66D0176D2F7E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_OneFrame_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m1FD3D189C3EAF05911EFECF9FF2603B7D5B385DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_OneFrame_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_mA2FA132CAF08C6EE51EB514D229281423415C901_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_OneFrame_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m1D0A5357C0875171CAA09062D27E229E7FFD9B68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_OneFrame_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_m3067B862B4E57B3FB06FC7E9DCD622494550F4D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_OneFrame_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_m6F41DDD0B1053F4FF614CBB449AFBE8202053D15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_OneFrame_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m9A234ED5E0B2641646E8B567D0895354F73642C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ecsSystems.OneFrame<OnTriggerEnterEvent>();
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_0 = ___ecsSystems0;
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_1;
		L_1 = EcsSystems_OneFrame_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_m3067B862B4E57B3FB06FC7E9DCD622494550F4D4(L_0, EcsSystems_OneFrame_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_m3067B862B4E57B3FB06FC7E9DCD622494550F4D4_RuntimeMethod_var);
		// ecsSystems.OneFrame<OnTriggerStayEvent>();
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_2 = ___ecsSystems0;
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_3;
		L_3 = EcsSystems_OneFrame_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m9A234ED5E0B2641646E8B567D0895354F73642C6(L_2, EcsSystems_OneFrame_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m9A234ED5E0B2641646E8B567D0895354F73642C6_RuntimeMethod_var);
		// ecsSystems.OneFrame<OnTriggerExitEvent>();
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_4 = ___ecsSystems0;
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_5;
		L_5 = EcsSystems_OneFrame_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_m6F41DDD0B1053F4FF614CBB449AFBE8202053D15(L_4, EcsSystems_OneFrame_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_m6F41DDD0B1053F4FF614CBB449AFBE8202053D15_RuntimeMethod_var);
		// ecsSystems.OneFrame<OnCollisionEnterEvent>();
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_6 = ___ecsSystems0;
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_7;
		L_7 = EcsSystems_OneFrame_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m069470DA5257D8CA1B3D04AC1B66D0176D2F7E59(L_6, EcsSystems_OneFrame_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m069470DA5257D8CA1B3D04AC1B66D0176D2F7E59_RuntimeMethod_var);
		// ecsSystems.OneFrame<OnCollisionStayEvent>();
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_8 = ___ecsSystems0;
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_9;
		L_9 = EcsSystems_OneFrame_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_mA2FA132CAF08C6EE51EB514D229281423415C901(L_8, EcsSystems_OneFrame_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_mA2FA132CAF08C6EE51EB514D229281423415C901_RuntimeMethod_var);
		// ecsSystems.OneFrame<OnCollisionExitEvent>();
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_10 = ___ecsSystems0;
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_11;
		L_11 = EcsSystems_OneFrame_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m1FD3D189C3EAF05911EFECF9FF2603B7D5B385DF(L_10, EcsSystems_OneFrame_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m1FD3D189C3EAF05911EFECF9FF2603B7D5B385DF_RuntimeMethod_var);
		// ecsSystems.OneFrame<OnControllerColliderHitEvent>();
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_12 = ___ecsSystems0;
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_13;
		L_13 = EcsSystems_OneFrame_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m1D0A5357C0875171CAA09062D27E229E7FFD9B68(L_12, EcsSystems_OneFrame_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m1D0A5357C0875171CAA09062D27E229E7FFD9B68_RuntimeMethod_var);
		// return ecsSystems;
		EcsSystems_t6FFCE018E9541F649484C9A086F33BD9F9194F9B* L_14 = ___ecsSystems0;
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2* EcsEntityExtensions_Get_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_mD5969FD571CB2F81034AE6F09C70723DA833C0DE_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
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
		int32_t L_4 = ((EcsComponentType_1_t0EFDD6602702E226C9BD6B4FB2B1F068EBF5E76F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB* L_19 = (OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB*)((EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
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
		EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* L_47;
		L_47 = EcsWorld_GetPool_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_m3B9BBF920F70DBF8A6D02E0C5D617660DADE71F3_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_m8726DFEF5BDA53F756FA52AC3ED0E3B7B2896FB8_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
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
		OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB* L_64 = (OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40* EcsEntityExtensions_Get_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m474BC5E35E3DB37916E6F9596F412AD4673AA2B9_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
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
		int32_t L_4 = ((EcsComponentType_1_t7CAF64E4419D0879F8EE464399E517AC866C43E4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135* L_19 = (OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135*)((EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
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
		EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* L_47;
		L_47 = EcsWorld_GetPool_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_mB782FAD8F35A63C7D2B2D499950F17DB882395FC_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_m2A249B2F973422F96E16CF0EFAF72B17299A0337_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
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
		OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135* L_64 = (OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B* EcsEntityExtensions_Get_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_mE28EE0FAC051AFE16FAA240197600E1C0174E51A_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
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
		int32_t L_4 = ((EcsComponentType_1_t2B28F06B2A2293959F70C28B8EBDC560F1EAAE48_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4* L_19 = (OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4*)((EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
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
		EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* L_47;
		L_47 = EcsWorld_GetPool_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_m5599461721D6958341A4CC05C1E12CA31E676E15_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_mC1BDB36B3013C868E0D07C2CFAB062A6CBCC99E8_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
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
		OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4* L_64 = (OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD* EcsEntityExtensions_Get_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m420DD04644E4A591ECBE7902D58299C06D2904B1_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
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
		int32_t L_4 = ((EcsComponentType_1_t0BD0B576BC2F2A6FEE03507F027AFA5A68864362_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1* L_19 = (OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1*)((EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
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
		EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* L_47;
		L_47 = EcsWorld_GetPool_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_mC028DA45416E31CB41989FC9186F96C4B45A54C4_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_mB77DDABAEB7F1C48894D32AC345B867BB2E5B9E9_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
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
		OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1* L_64 = (OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87* EcsEntityExtensions_Get_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_m1BFB6647A025CD780497269E2AA5165313CB2C33_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
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
		int32_t L_4 = ((EcsComponentType_1_tEAA108C9219BEB2702C126870786FC9B9DD4EFDC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD* L_19 = (OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD*)((EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
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
		EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* L_47;
		L_47 = EcsWorld_GetPool_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_m714FC7CCED7413CEBF4E0072147C07DF1231B5F4_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_mF71AB3A8720F7FBD30AA97E8DE29C030C4EACA4C_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
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
		OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD* L_64 = (OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32* EcsEntityExtensions_Get_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m85E84584E1A2CD9BE11B12CDC1C8033D960E8535_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
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
		int32_t L_4 = ((EcsComponentType_1_t8516895C42FFF835E243CA074DA74635B3EE4EFC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35* L_19 = (OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35*)((EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
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
		EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* L_47;
		L_47 = EcsWorld_GetPool_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m4DC066A5CAEBDD3EE3E1E8246802F325F6163A83_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_m147A0848403268CE3F2388E30C6C242C8C6D2B15_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
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
		OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35* L_64 = (OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471* EcsEntityExtensions_Get_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_m65B1BAA6E491AF90325EC9EDA560CF9813524DA9_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
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
		int32_t L_4 = ((EcsComponentType_1_t7457D753DD25040B6FF6A13CF149157F4188E819_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027* L_19 = (OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027*)((EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
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
		EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* L_47;
		L_47 = EcsWorld_GetPool_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_mD308456F3BB4D352C80F3557492A610850DFF975_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_m65293BB97C04707B3BDCA51E6234F97B56800342_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
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
		OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027* L_64 = (OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E* EcsEntityExtensions_Get_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_m3E9CCE071936B0B950CD936208C50B0D52FC83A9_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
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
		int32_t L_4 = ((EcsComponentType_1_t5A5168B86206BD0B0087D13E378F0732629D8639_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5* L_19 = (OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5*)((EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
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
		EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* L_47;
		L_47 = EcsWorld_GetPool_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_m9F4F3DD14067A4502D26A4C8DDF35C96485F9AF0_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_mF552D8F4DCDBA117111BBFF3155FC8D664224D30_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
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
		OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5* L_64 = (OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A* EcsEntityExtensions_Get_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_m12CDBFC95C683CB9407B8EC98302FA414BC465D4_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
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
		int32_t L_4 = ((EcsComponentType_1_tDB96C93296FFD66EFB501713234A7EABE3EE5315_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378* L_19 = (OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378*)((EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
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
		EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* L_47;
		L_47 = EcsWorld_GetPool_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_mEC1CD8EF91D118DE8DFADCB9A27904EF7EE34004_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_mD802F92DAE07ECE169D0D72FD7593B95F74E38D3_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
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
		OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378* L_64 = (OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302* EcsEntityExtensions_Get_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_mB80EF8A973351E72651826A23F35E2DD02570D7E_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
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
		int32_t L_4 = ((EcsComponentType_1_tEAB9524C9850157C89C90D624525E9D333F6770C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D* L_19 = (OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D*)((EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
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
		EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* L_47;
		L_47 = EcsWorld_GetPool_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_mA1CCCF6DF5AB6B72EB16F088D34FB9B3D2CCB138_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_m08D0C8149065D1749D5E1B44A4C528D0F05AD08A_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
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
		OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D* L_64 = (OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7* EcsEntityExtensions_Get_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_mE3054F379F765DB034B845927CA24EF3B4C923FC_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
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
		int32_t L_4 = ((EcsComponentType_1_t0D1436E0C6999A76DD7EA65721AB7BE27025D960_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28* L_19 = (OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28*)((EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
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
		EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* L_47;
		L_47 = EcsWorld_GetPool_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_mE491B024310C22B731DF2BEE3FC65E425CAFA1F6_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_m3CAF9C91EA173994BD6EAA827BF7D0D262BFF55B_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
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
		OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28* L_64 = (OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29* EcsEntityExtensions_Get_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_m9718CE6369F1ECA7D662E7530607B048B600ACBF_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
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
		int32_t L_4 = ((EcsComponentType_1_tC21FEEE9F5B5D892EF9B4168F5DEC33AB3252B52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA* L_19 = (OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA*)((EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
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
		EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* L_47;
		L_47 = EcsWorld_GetPool_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_m61DA7CFDA62F43290F3540023EAB6ED0E6E5CDE5_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_m3892FA9BC1241FB7C8D37D48A136E8C2676F8C87_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
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
		OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA* L_64 = (OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36* EcsEntityExtensions_Get_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_mF75945B48E8F9E85851D8AEF6E8AC3535BCB7996_gshared_inline (EcsEntity_tA7AFA94F41CA5D2F4A717358689557C061B69D3E* ___entity0, const RuntimeMethod* method) 
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
		int32_t L_4 = ((EcsComponentType_1_t320613DE222A818B1D5586B64770EE97E65A3045_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB* L_19 = (OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB*)((EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0*)CastclassSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 2)))->___Items_1;
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
		EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* L_47;
		L_47 = EcsWorld_GetPool_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_m6A3B046CB977B20BAEC546A1240E877C19495820_inline(L_46, il2cpp_rgctx_method(method->rgctx_data, 5));
		// var idx = pool.New ();
		EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* L_48 = L_47;
		int32_t L_49;
		L_49 = EcsComponentPool_1_New_mAE60198C005CB81908AE4A9C694B82A81E99D7CE_inline(L_48, il2cpp_rgctx_method(method->rgctx_data, 6));
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
		OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB* L_64 = (OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB*)L_48->___Items_1;
		int32_t L_65 = V_2;
		return ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* EcsWorld_GetPool_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_m3B9BBF920F70DBF8A6D02E0C5D617660DADE71F3_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_t0EFDD6602702E226C9BD6B4FB2B1F068EBF5E76F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		V_1 = ((EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* L_14 = (EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_m2CF9A6C61FEAF2E7528F3985B030EAD7219D10A6(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m8726DFEF5BDA53F756FA52AC3ED0E3B7B2896FB8_gshared_inline (EcsComponentPool_1_t9F15B7DA179ADC9F9F088880F37A85F959877017* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_t102A949E59DDFB6C3A188BCCB15FA9F3501D9E42* G_B6_0 = NULL;
	AutoResetHandler_t102A949E59DDFB6C3A188BCCB15FA9F3501D9E42* G_B5_0 = NULL;
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
		OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB* L_9 = (OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB** L_10 = (OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisOnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2_mA8C8B5B0B6513282D1FF999BFF9BC46430C9F318(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_mCC7FDF506E902AEA84D9FCA827445FFDD2226AE2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_t102A949E59DDFB6C3A188BCCB15FA9F3501D9E42* L_12 = (AutoResetHandler_t102A949E59DDFB6C3A188BCCB15FA9F3501D9E42*)__this->____autoReset_5;
		AutoResetHandler_t102A949E59DDFB6C3A188BCCB15FA9F3501D9E42* L_13 = L_12;
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
		OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB* L_14 = (OnTriggerEnterEventU5BU5D_t86E4954E6315CB64B733EE575E585506E939E2AB*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_m15FAE19828F0FFA8FFC8EE9A1EA854F327F77C70_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* EcsWorld_GetPool_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_mB782FAD8F35A63C7D2B2D499950F17DB882395FC_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_t7CAF64E4419D0879F8EE464399E517AC866C43E4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		V_1 = ((EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* L_14 = (EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_m28720C65D9F723A874A955C3E02AE640FFBF0B2A(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m2A249B2F973422F96E16CF0EFAF72B17299A0337_gshared_inline (EcsComponentPool_1_t96FD2BEA2AA7432135290E59F4966EFE7A4A462C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_t099F1E374648C10AE5C5A541BB22601298C80CEA* G_B6_0 = NULL;
	AutoResetHandler_t099F1E374648C10AE5C5A541BB22601298C80CEA* G_B5_0 = NULL;
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
		OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135* L_9 = (OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135** L_10 = (OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisOnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40_m29105164EBAEBC9D3552AD956B49922D6277C202(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_m5EA1601CE499D3EC9A8CABA43A5A99901817205B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_t099F1E374648C10AE5C5A541BB22601298C80CEA* L_12 = (AutoResetHandler_t099F1E374648C10AE5C5A541BB22601298C80CEA*)__this->____autoReset_5;
		AutoResetHandler_t099F1E374648C10AE5C5A541BB22601298C80CEA* L_13 = L_12;
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
		OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135* L_14 = (OnTriggerStayEventU5BU5D_t4C95645C5158620FB8D5F1724E86CCA62BF68135*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_m946B954855B797952A1D78FB7DBCC781A77940B3_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* EcsWorld_GetPool_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_m5599461721D6958341A4CC05C1E12CA31E676E15_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_t2B28F06B2A2293959F70C28B8EBDC560F1EAAE48_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		V_1 = ((EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* L_14 = (EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_mE60EE2AF0AA396230106A7DD02019B12F7A243F3(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_mC1BDB36B3013C868E0D07C2CFAB062A6CBCC99E8_gshared_inline (EcsComponentPool_1_tAAC02C4F5C0404DB03B5CA8A3C673CFC35343CA5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_t2DA5F76CE55AE9442C6147833418893AD8B20EC1* G_B6_0 = NULL;
	AutoResetHandler_t2DA5F76CE55AE9442C6147833418893AD8B20EC1* G_B5_0 = NULL;
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
		OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4* L_9 = (OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4** L_10 = (OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisOnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B_mA691358A06D459D8AFC5DA999B68EC00F6331B79(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_m78F8D88C267CC80542659762093837F5507D7CC0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_t2DA5F76CE55AE9442C6147833418893AD8B20EC1* L_12 = (AutoResetHandler_t2DA5F76CE55AE9442C6147833418893AD8B20EC1*)__this->____autoReset_5;
		AutoResetHandler_t2DA5F76CE55AE9442C6147833418893AD8B20EC1* L_13 = L_12;
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
		OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4* L_14 = (OnTriggerExitEventU5BU5D_t2C24A2E1CCBCD993AF3BE25B56BE4FA88C9C67A4*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_mA3EF7D67FFDF6F0EFC8C390DBBACE5E307B295EC_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* EcsWorld_GetPool_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_mC028DA45416E31CB41989FC9186F96C4B45A54C4_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_t0BD0B576BC2F2A6FEE03507F027AFA5A68864362_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		V_1 = ((EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* L_14 = (EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_mF63571A571962ED392EFBA89F9885068DB590D19(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_mB77DDABAEB7F1C48894D32AC345B867BB2E5B9E9_gshared_inline (EcsComponentPool_1_t978420A4F8123C9B417D063B96E7F3C0F08751B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_tCD770C83CAE659D6C4D1C145470AC121DBE61A9C* G_B6_0 = NULL;
	AutoResetHandler_tCD770C83CAE659D6C4D1C145470AC121DBE61A9C* G_B5_0 = NULL;
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
		OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1* L_9 = (OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1** L_10 = (OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisOnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD_m9499015424592F7B888A5D18F55EE116B78D3EC4(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_mEC1A743B774CBDE3FF039F811BAECF459010BF07(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_tCD770C83CAE659D6C4D1C145470AC121DBE61A9C* L_12 = (AutoResetHandler_tCD770C83CAE659D6C4D1C145470AC121DBE61A9C*)__this->____autoReset_5;
		AutoResetHandler_tCD770C83CAE659D6C4D1C145470AC121DBE61A9C* L_13 = L_12;
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
		OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1* L_14 = (OnCollisionEnterEventU5BU5D_t4A9323D6661F7C9F5FEAA2E673824A3061815AE1*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_m081669FC0C283C33F05014CE429EF35FACDB415E_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* EcsWorld_GetPool_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_m714FC7CCED7413CEBF4E0072147C07DF1231B5F4_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_tEAA108C9219BEB2702C126870786FC9B9DD4EFDC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		V_1 = ((EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* L_14 = (EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_m2E4FADE5765E9D4F524B473D31029C9239AF011D(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_mF71AB3A8720F7FBD30AA97E8DE29C030C4EACA4C_gshared_inline (EcsComponentPool_1_tBD94D3E3600B346551571C866E213870BCCDF91D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_t49D4EECB3148A58D4DF4C9F285AC0C7501F126E6* G_B6_0 = NULL;
	AutoResetHandler_t49D4EECB3148A58D4DF4C9F285AC0C7501F126E6* G_B5_0 = NULL;
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
		OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD* L_9 = (OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD** L_10 = (OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisOnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87_mC850FB39922D11A9D2E3410C94D29639D587024F(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_m40AABC186022DB1F68D720A9B644F589F4256133(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_t49D4EECB3148A58D4DF4C9F285AC0C7501F126E6* L_12 = (AutoResetHandler_t49D4EECB3148A58D4DF4C9F285AC0C7501F126E6*)__this->____autoReset_5;
		AutoResetHandler_t49D4EECB3148A58D4DF4C9F285AC0C7501F126E6* L_13 = L_12;
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
		OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD* L_14 = (OnCollisionStayEventU5BU5D_t830CBAA12EE8226B1E12F2641573B15AB29053AD*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_mB8A6F66E87F4DF9C069A5037F724D53DC1899C91_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* EcsWorld_GetPool_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m4DC066A5CAEBDD3EE3E1E8246802F325F6163A83_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_t8516895C42FFF835E243CA074DA74635B3EE4EFC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		V_1 = ((EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* L_14 = (EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_m200C0043EB5FF1F216DCB002E6DC5305023D95EE(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m147A0848403268CE3F2388E30C6C242C8C6D2B15_gshared_inline (EcsComponentPool_1_tCA1EC321A541F547D4EE21416D119233E0462274* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_t5F82B61DDCB7D29C9B77AA5DBA0D25845E04E2FE* G_B6_0 = NULL;
	AutoResetHandler_t5F82B61DDCB7D29C9B77AA5DBA0D25845E04E2FE* G_B5_0 = NULL;
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
		OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35* L_9 = (OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35** L_10 = (OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisOnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32_m63428756B311E043CA346FC5C7C09ED8F5AF8EE8(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_mE4201A02E3F2AB58ADECE690BB99EDD841902BF2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_t5F82B61DDCB7D29C9B77AA5DBA0D25845E04E2FE* L_12 = (AutoResetHandler_t5F82B61DDCB7D29C9B77AA5DBA0D25845E04E2FE*)__this->____autoReset_5;
		AutoResetHandler_t5F82B61DDCB7D29C9B77AA5DBA0D25845E04E2FE* L_13 = L_12;
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
		OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35* L_14 = (OnCollisionExitEventU5BU5D_t2F6BB2341513614B0B72B325C8C14E650B849A35*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_mAE127C0236F0D82DDAA6C94CCEEE68D152FD2652_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* EcsWorld_GetPool_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_mD308456F3BB4D352C80F3557492A610850DFF975_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_t7457D753DD25040B6FF6A13CF149157F4188E819_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		V_1 = ((EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* L_14 = (EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_mBDF9469D986D58D90566B9BE2D8BDE1209566022(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m65293BB97C04707B3BDCA51E6234F97B56800342_gshared_inline (EcsComponentPool_1_t0A95552C3C5CB13783ACFC055865C4A83DD42A82* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_t86345FE6416FF0BEA2090AF5B2F7BDDD362D7199* G_B6_0 = NULL;
	AutoResetHandler_t86345FE6416FF0BEA2090AF5B2F7BDDD362D7199* G_B5_0 = NULL;
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
		OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027* L_9 = (OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027** L_10 = (OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisOnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471_mA2290BA2A675021A43303C9A9A8C8264493FE447(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_mBA3274005753731B46B29BE71D1C5373F124B9DD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_t86345FE6416FF0BEA2090AF5B2F7BDDD362D7199* L_12 = (AutoResetHandler_t86345FE6416FF0BEA2090AF5B2F7BDDD362D7199*)__this->____autoReset_5;
		AutoResetHandler_t86345FE6416FF0BEA2090AF5B2F7BDDD362D7199* L_13 = L_12;
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
		OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027* L_14 = (OnControllerColliderHitEventU5BU5D_t83216BE55D62726FC789D71BC08BF9D7D7CA2027*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_m6896156194635C0FA20C61A902B1BAED56FA715D_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* EcsWorld_GetPool_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_m9F4F3DD14067A4502D26A4C8DDF35C96485F9AF0_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_t5A5168B86206BD0B0087D13E378F0732629D8639_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		V_1 = ((EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* L_14 = (EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_mE292AC4D12D5DDDB0DF07825DFFFBB00392E0FA1(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_mF552D8F4DCDBA117111BBFF3155FC8D664224D30_gshared_inline (EcsComponentPool_1_t96162182731DA8BA8DA127AA59DCB4AD962E0EE6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_tEFDA22126DD12341E66EF75634AF78EB3CACF1ED* G_B6_0 = NULL;
	AutoResetHandler_tEFDA22126DD12341E66EF75634AF78EB3CACF1ED* G_B5_0 = NULL;
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
		OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5* L_9 = (OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5** L_10 = (OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisOnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E_mFB7DC43E815EB2800BE8D559D37C6C335AF37A78(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_m24FDCD16120A7097A4D445EFE2661EA75E610705(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_tEFDA22126DD12341E66EF75634AF78EB3CACF1ED* L_12 = (AutoResetHandler_tEFDA22126DD12341E66EF75634AF78EB3CACF1ED*)__this->____autoReset_5;
		AutoResetHandler_tEFDA22126DD12341E66EF75634AF78EB3CACF1ED* L_13 = L_12;
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
		OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5* L_14 = (OnCollisionEnter2DEventU5BU5D_t0EEEE6BA24E48937B464F948C6E2EB1B9A6953E5*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_mA215734E0E8A218D0171696D4708ECA20D0FFD86_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* EcsWorld_GetPool_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_mEC1CD8EF91D118DE8DFADCB9A27904EF7EE34004_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_tDB96C93296FFD66EFB501713234A7EABE3EE5315_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		V_1 = ((EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* L_14 = (EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_mA209DD033AEBCA590639ECB472C8BE02F2849F0E(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_mD802F92DAE07ECE169D0D72FD7593B95F74E38D3_gshared_inline (EcsComponentPool_1_t109BA732DD2A6578E59344FA0E9D1B064FE8E243* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_tCDAC829F814FF36A22ACA529C9F4D69C9F0FDDBB* G_B6_0 = NULL;
	AutoResetHandler_tCDAC829F814FF36A22ACA529C9F4D69C9F0FDDBB* G_B5_0 = NULL;
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
		OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378* L_9 = (OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378** L_10 = (OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisOnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A_mED1502A3E583A0192E9374863DA8DD9BFBE4503F(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_m884D2FA218E493051F7D34909AD61CDE3C4F7F58(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_tCDAC829F814FF36A22ACA529C9F4D69C9F0FDDBB* L_12 = (AutoResetHandler_tCDAC829F814FF36A22ACA529C9F4D69C9F0FDDBB*)__this->____autoReset_5;
		AutoResetHandler_tCDAC829F814FF36A22ACA529C9F4D69C9F0FDDBB* L_13 = L_12;
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
		OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378* L_14 = (OnCollisionStay2DEventU5BU5D_tE5111344A062AF97F1BE0F2819BF0FDE856A5378*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_mA8461878CE4DD954CE8DD29DA9CD1693E69AD7BA_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* EcsWorld_GetPool_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_mA1CCCF6DF5AB6B72EB16F088D34FB9B3D2CCB138_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_tEAB9524C9850157C89C90D624525E9D333F6770C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		V_1 = ((EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* L_14 = (EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_m27E33A58F60DB9114B7B52410EDD699FA3DE0AFA(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m08D0C8149065D1749D5E1B44A4C528D0F05AD08A_gshared_inline (EcsComponentPool_1_t13AE67826DD79D245332E61DD1B7018F8251B160* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_t9B373DCF9003AFF5AAF11B13FBB636E9E1A27156* G_B6_0 = NULL;
	AutoResetHandler_t9B373DCF9003AFF5AAF11B13FBB636E9E1A27156* G_B5_0 = NULL;
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
		OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D* L_9 = (OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D** L_10 = (OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisOnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302_m42A1A64196F733064D6B62E36B0152C1D3F6CF3C(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_m7B4CA30F31A2DD4609409EBB7536D2C423C92E03(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_t9B373DCF9003AFF5AAF11B13FBB636E9E1A27156* L_12 = (AutoResetHandler_t9B373DCF9003AFF5AAF11B13FBB636E9E1A27156*)__this->____autoReset_5;
		AutoResetHandler_t9B373DCF9003AFF5AAF11B13FBB636E9E1A27156* L_13 = L_12;
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
		OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D* L_14 = (OnCollisionExit2DEventU5BU5D_t5A9156A441D8371511690BB7C2D83344AF8C4A0D*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_m27B77BBF7FDD6D50E4F575F31682337A52AE145D_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* EcsWorld_GetPool_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_mE491B024310C22B731DF2BEE3FC65E425CAFA1F6_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_t0D1436E0C6999A76DD7EA65721AB7BE27025D960_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		V_1 = ((EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* L_14 = (EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_m884605205B1FA28B01BF597385CF8D33E10F4FD8(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m3CAF9C91EA173994BD6EAA827BF7D0D262BFF55B_gshared_inline (EcsComponentPool_1_t34D62DA8F7E6376D20F60CB28797A3131AD9ABBB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_tFECF387282905CD6E1DD9EAE2AB81357366D5A21* G_B6_0 = NULL;
	AutoResetHandler_tFECF387282905CD6E1DD9EAE2AB81357366D5A21* G_B5_0 = NULL;
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
		OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28* L_9 = (OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28** L_10 = (OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisOnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7_m809955A1F97C2AD0882F2DFE6C69804862C9BC1A(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_mE2F2795846895E9C93C1FA18592EB36851F53B08(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_tFECF387282905CD6E1DD9EAE2AB81357366D5A21* L_12 = (AutoResetHandler_tFECF387282905CD6E1DD9EAE2AB81357366D5A21*)__this->____autoReset_5;
		AutoResetHandler_tFECF387282905CD6E1DD9EAE2AB81357366D5A21* L_13 = L_12;
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
		OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28* L_14 = (OnTriggerEnter2DEventU5BU5D_t37D079332B01191DED9A1CEB9D716E688D784E28*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_m20A84EE546E94ED3EEF8B37157CB8CCC44F73F28_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* EcsWorld_GetPool_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_m61DA7CFDA62F43290F3540023EAB6ED0E6E5CDE5_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_tC21FEEE9F5B5D892EF9B4168F5DEC33AB3252B52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		V_1 = ((EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* L_14 = (EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_m8B54910C9FFEC36D6298A098B72BD40EA2EB4074(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_m3892FA9BC1241FB7C8D37D48A136E8C2676F8C87_gshared_inline (EcsComponentPool_1_t0E92372EC65CA01AFA9DF4F35BD28E06A54E1FF4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_tDA5779761EB47BE295BF95970B398207FD568CDE* G_B6_0 = NULL;
	AutoResetHandler_tDA5779761EB47BE295BF95970B398207FD568CDE* G_B5_0 = NULL;
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
		OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA* L_9 = (OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA** L_10 = (OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisOnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29_mDCDFB9228C8333E1EBB832588E451E1E9B5A96E7(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_mB7B65459100787D090A18C7A790EEE5E058A0B3E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_tDA5779761EB47BE295BF95970B398207FD568CDE* L_12 = (AutoResetHandler_tDA5779761EB47BE295BF95970B398207FD568CDE*)__this->____autoReset_5;
		AutoResetHandler_tDA5779761EB47BE295BF95970B398207FD568CDE* L_13 = L_12;
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
		OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA* L_14 = (OnTriggerStay2DEventU5BU5D_tF82FA746F0BB968E2E4F03C8D484D9F43F383FAA*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_m3F680B5EF2411E12AF0F1B9F40465936503B92F9_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* EcsWorld_GetPool_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_m6A3B046CB977B20BAEC546A1240E877C19495820_gshared_inline (EcsWorld_t53960113D474BD934F0227867F5A1CC55B082090* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEcsComponentPool_t9FB24E470344947394FBDF6CA1F7221CEB0F7F44_m9FBE50E8A9180745B9EFB3026FE2932773E6766B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		int32_t L_0 = ((EcsComponentType_1_t320613DE222A818B1D5586B64770EE97E65A3045_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___TypeIndex_0;
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
		V_1 = ((EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0*)CastclassSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		// if (pool == null) {
		EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* L_13 = V_1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// pool = new EcsComponentPool<T> ();
		EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* L_14 = (EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		EcsComponentPool_1__ctor_m74DA82E4A00292E42BC05A31635172D0768080D9(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		// ComponentPools[typeIdx] = pool;
		IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39* L_15 = (IEcsComponentPoolU5BU5D_t80C7DD4B9F30BEC818DF1FCCE1255BEA9974BD39*)__this->___ComponentPools_9;
		int32_t L_16 = V_0;
		EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* L_17 = V_1;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		// _usedComponentsCount++;
		int32_t L_18 = (int32_t)__this->____usedComponentsCount_6;
		__this->____usedComponentsCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// return pool;
		EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsComponentPool_1_New_mAE60198C005CB81908AE4A9C694B82A81E99D7CE_gshared_inline (EcsComponentPool_1_tEFBAF7DD105C172BCD7F7DFD6E69CF1F9015A9F0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AutoResetHandler_t7B69D3F132F3BE9EB58547D2FFDA3F26AF55BD31* G_B6_0 = NULL;
	AutoResetHandler_t7B69D3F132F3BE9EB58547D2FFDA3F26AF55BD31* G_B5_0 = NULL;
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
		OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB* L_9 = (OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB*)__this->___Items_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		// Array.Resize (ref Items, _itemsCount << 1);
		OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB** L_10 = (OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB**)(&__this->___Items_1);
		int32_t L_11 = (int32_t)__this->____itemsCount_3;
		Array_Resize_TisOnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36_m56857E4E9A0A76259925ACFD0DBB4823B1E9C7E2(L_10, ((int32_t)(L_11<<1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// RaiseOnResizeEvent ();
		EcsComponentPool_1_RaiseOnResizeEvent_m2697EA8A02AA0D640922112A9A8CAE634B32CCB4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_0054:
	{
		// _autoReset?.Invoke (ref Items[_itemsCount]);
		AutoResetHandler_t7B69D3F132F3BE9EB58547D2FFDA3F26AF55BD31* L_12 = (AutoResetHandler_t7B69D3F132F3BE9EB58547D2FFDA3F26AF55BD31*)__this->____autoReset_5;
		AutoResetHandler_t7B69D3F132F3BE9EB58547D2FFDA3F26AF55BD31* L_13 = L_12;
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
		OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB* L_14 = (OnTriggerExit2DEventU5BU5D_tCE14DB8B8EC7AD2ABD3EB88827CAD1F57D4B8EFB*)__this->___Items_1;
		int32_t L_15 = (int32_t)__this->____itemsCount_3;
		AutoResetHandler_Invoke_m12482DE93C7DDDB267153F8959F0513417A4C5ED_inline(G_B6_0, ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m15FAE19828F0FFA8FFC8EE9A1EA854F327F77C70_gshared_inline (AutoResetHandler_t102A949E59DDFB6C3A188BCCB15FA9F3501D9E42* __this, OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OnTriggerEnterEvent_t8511547B1123597E14F37C709CDB34AEE39799F2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m946B954855B797952A1D78FB7DBCC781A77940B3_gshared_inline (AutoResetHandler_t099F1E374648C10AE5C5A541BB22601298C80CEA* __this, OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OnTriggerStayEvent_t45D4244E784F3611595C46BF996E2F27B2F96E40*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_mA3EF7D67FFDF6F0EFC8C390DBBACE5E307B295EC_gshared_inline (AutoResetHandler_t2DA5F76CE55AE9442C6147833418893AD8B20EC1* __this, OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OnTriggerExitEvent_t66EDE30BAAACBD29459E613D63239055FDAD0D1B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m081669FC0C283C33F05014CE429EF35FACDB415E_gshared_inline (AutoResetHandler_tCD770C83CAE659D6C4D1C145470AC121DBE61A9C* __this, OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OnCollisionEnterEvent_tD90404E6B6BF15BDCB3571C9AB6828C7DE8285BD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_mB8A6F66E87F4DF9C069A5037F724D53DC1899C91_gshared_inline (AutoResetHandler_t49D4EECB3148A58D4DF4C9F285AC0C7501F126E6* __this, OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OnCollisionStayEvent_t6F1451F1E9D72F69F1885169C5B1C6EF73D2ED87*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_mAE127C0236F0D82DDAA6C94CCEEE68D152FD2652_gshared_inline (AutoResetHandler_t5F82B61DDCB7D29C9B77AA5DBA0D25845E04E2FE* __this, OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OnCollisionExitEvent_t5ACFCD6A24931D9F35144C1CD5958DBB954E8D32*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m6896156194635C0FA20C61A902B1BAED56FA715D_gshared_inline (AutoResetHandler_t86345FE6416FF0BEA2090AF5B2F7BDDD362D7199* __this, OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OnControllerColliderHitEvent_t3169DDB2F39DD57D09C7A1D22047AC8FFEDDF471*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_mA215734E0E8A218D0171696D4708ECA20D0FFD86_gshared_inline (AutoResetHandler_tEFDA22126DD12341E66EF75634AF78EB3CACF1ED* __this, OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OnCollisionEnter2DEvent_tE6D1DB1BCA7E48F7B26265CC1F73232AD363D00E*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_mA8461878CE4DD954CE8DD29DA9CD1693E69AD7BA_gshared_inline (AutoResetHandler_tCDAC829F814FF36A22ACA529C9F4D69C9F0FDDBB* __this, OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OnCollisionStay2DEvent_t89BA9273AEEA9848E99492CB1E4EEA276092575A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m27B77BBF7FDD6D50E4F575F31682337A52AE145D_gshared_inline (AutoResetHandler_t9B373DCF9003AFF5AAF11B13FBB636E9E1A27156* __this, OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OnCollisionExit2DEvent_t9E2D80202BD0A8B73571029ACFDABCF6DA2CD302*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m20A84EE546E94ED3EEF8B37157CB8CCC44F73F28_gshared_inline (AutoResetHandler_tFECF387282905CD6E1DD9EAE2AB81357366D5A21* __this, OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OnTriggerEnter2DEvent_t338E200195565B1591950561CACA87F1503D92D7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m3F680B5EF2411E12AF0F1B9F40465936503B92F9_gshared_inline (AutoResetHandler_tDA5779761EB47BE295BF95970B398207FD568CDE* __this, OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OnTriggerStay2DEvent_tE2351A545FCAFA1859FB42D0E384B926B76C5C29*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoResetHandler_Invoke_m12482DE93C7DDDB267153F8959F0513417A4C5ED_gshared_inline (AutoResetHandler_t7B69D3F132F3BE9EB58547D2FFDA3F26AF55BD31* __this, OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36* ___component0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, OnTriggerExit2DEvent_tF1BDF31077DD87A33A539C62389BE16EB16B5B36*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___component0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
