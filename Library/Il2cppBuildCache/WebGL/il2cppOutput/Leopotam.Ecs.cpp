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

// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<Voody.UniLeo.InstantiateComponent>
struct AutoResetHandler_tA8351E2C5A42615EA69B33A9A7336F16C07AC366;
// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>
struct EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>
struct EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>
struct EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738;
// Leopotam.Ecs.EcsGrowList`1<System.Int32>
struct EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A;
// Leopotam.Ecs.EcsGrowList`1<System.Object>
struct EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct KeyCollection_tA1F3BB13551E437D1EF88D372F5BF1E8115F027F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct ValueCollection_tE11492BD50FDB99367509ECC20A2CBA75CD5F919;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>[]
struct EntryU5BU5D_t586DF3422D207142301B2E640F29B3723ED0A02E;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Leopotam.Ecs.EcsEntity[]
struct EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7;
// Leopotam.Ecs.EcsFilter[]
struct EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8;
// Leopotam.Ecs.EcsSystemsRunItem[]
struct EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7;
// Leopotam.Ecs.IEcsComponentPool[]
struct IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1;
// Leopotam.Ecs.IEcsComponentPoolResizeListener[]
struct IEcsComponentPoolResizeListenerU5BU5D_t7A79864918CE9CDA955D4B1BCCCDAA3F864FA68D;
// Leopotam.Ecs.IEcsSystem[]
struct IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128;
// Voody.UniLeo.InstantiateComponent[]
struct InstantiateComponentU5BU5D_tE26A107B1502B9DD6E1BCB0BF7B2C36802E914D5;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Leopotam.Ecs.EcsFilter/DelayedOp[]
struct DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2;
// Leopotam.Ecs.EcsWorld/EcsEntityData[]
struct EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// Voody.UniLeo.BaseMonoProvider
struct BaseMonoProvider_t1E42DA2E448DACDA06F754ABD280EBCB0C13A85B;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Voody.UniLeo.ConvertToEntity
struct ConvertToEntity_t6A58AF51FE1173CCCE4DF07BF1207F6F748A6125;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// Leopotam.Ecs.EcsEntity
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0;
// Leopotam.Ecs.EcsFilter
struct EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55;
// Leopotam.Ecs.EcsSystems
struct EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639;
// Leopotam.Ecs.EcsSystemsRunItem
struct EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C;
// Leopotam.Ecs.EcsWorld
struct EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t7C31CBFB035DA412880D90BEFBFE980E92E7B12C;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Leopotam.Ecs.IEcsComponentPool
struct IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD;
// Leopotam.Ecs.IEcsRunSystem
struct IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328;
// Leopotam.Ecs.IEcsSystem
struct IEcsSystem_tA00E3B07665437447F99AB079C419617E2B4BEB1;
// Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute
struct Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t3188C6BF743FDB986678BFFC5F540708B12FBFD2;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsDestroySystem_t9B4866CBA342A0BEAA4FABF60776407862E35C70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsInitSystem_t1D76655B71D3C0E3CA20AFCACA67747DCB0B4EF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsPostDestroySystem_t4AA43503D6D25CE3DFB88747E9A374F929CBE40D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsPreInitSystem_t347F7B1C6BAB7A50913208313A897706A93A8294_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldHandler_tD82490B8EE20D8CC5FD4AAA7F2216460819AA8D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD04C8FED0F2AE94C346BA1748DE87334690C0328_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Replace_TisInstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_mAA3ED6E4982BAF54E03AEA594DC937AEB19CEE87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m12B9D29385B73808601D74AD2BC463D1F2C962F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m63C1D2731DCB0120F887DA9D85DAB6ECF07A2D65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_m827FB78D21F068F7A7EBF735CD0244EBA96AE024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_mFCCC1AE5CE009E261FC90917B1A48336C0FF5374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mB15AA028B22C80E8ED3C017CA7A0C9482E99D781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m9FE5CB75AE56CA525B1E01A488AD0CD51F9FFB16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m574B03322222AAA5E5847471380A92FBFF23B034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* EcsIgnoreInjectAttribute_t4A01E296BA2C15FFD024CF2D26858BBE98616068_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0;;
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com;
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com;;
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke;
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke;;

struct EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7;
struct EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8;
struct EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7;
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1;
struct IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128;
struct InstantiateComponentU5BU5D_tE26A107B1502B9DD6E1BCB0BF7B2C36802E914D5;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2;
struct EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCA652546AE2D2D39F105DF4CD511CEB3A7A8DE10 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t586DF3422D207142301B2E640F29B3723ED0A02E* ___entries_1;
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
	KeyCollection_tA1F3BB13551E437D1EF88D372F5BF1E8115F027F * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE11492BD50FDB99367509ECC20A2CBA75CD5F919 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___entries_1)); }
	inline EntryU5BU5D_t586DF3422D207142301B2E640F29B3723ED0A02E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t586DF3422D207142301B2E640F29B3723ED0A02E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t586DF3422D207142301B2E640F29B3723ED0A02E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___keys_7)); }
	inline KeyCollection_tA1F3BB13551E437D1EF88D372F5BF1E8115F027F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA1F3BB13551E437D1EF88D372F5BF1E8115F027F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA1F3BB13551E437D1EF88D372F5BF1E8115F027F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___values_8)); }
	inline ValueCollection_tE11492BD50FDB99367509ECC20A2CBA75CD5F919 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE11492BD50FDB99367509ECC20A2CBA75CD5F919 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE11492BD50FDB99367509ECC20A2CBA75CD5F919 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* ___entries_1;
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
	KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___entries_1)); }
	inline EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___keys_7)); }
	inline KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___values_8)); }
	inline ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* ___entries_1;
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
	KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___entries_1)); }
	inline EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___keys_7)); }
	inline KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___values_8)); }
	inline ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// Leopotam.Ecs.EcsComponentType`1<Voody.UniLeo.InstantiateComponent>
struct EcsComponentType_1_t5D58330C5898EF0842082D12C9C41EDB24908BC6  : public RuntimeObject
{
public:

public:
};

struct EcsComponentType_1_t5D58330C5898EF0842082D12C9C41EDB24908BC6_StaticFields
{
public:
	// System.Int32 Leopotam.Ecs.EcsComponentType`1::TypeIndex
	int32_t ___TypeIndex_0;
	// System.Type Leopotam.Ecs.EcsComponentType`1::Type
	Type_t * ___Type_1;
	// System.Boolean Leopotam.Ecs.EcsComponentType`1::IsIgnoreInFilter
	bool ___IsIgnoreInFilter_2;
	// System.Boolean Leopotam.Ecs.EcsComponentType`1::IsAutoReset
	bool ___IsAutoReset_3;

public:
	inline static int32_t get_offset_of_TypeIndex_0() { return static_cast<int32_t>(offsetof(EcsComponentType_1_t5D58330C5898EF0842082D12C9C41EDB24908BC6_StaticFields, ___TypeIndex_0)); }
	inline int32_t get_TypeIndex_0() const { return ___TypeIndex_0; }
	inline int32_t* get_address_of_TypeIndex_0() { return &___TypeIndex_0; }
	inline void set_TypeIndex_0(int32_t value)
	{
		___TypeIndex_0 = value;
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(EcsComponentType_1_t5D58330C5898EF0842082D12C9C41EDB24908BC6_StaticFields, ___Type_1)); }
	inline Type_t * get_Type_1() const { return ___Type_1; }
	inline Type_t ** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(Type_t * value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_1), (void*)value);
	}

	inline static int32_t get_offset_of_IsIgnoreInFilter_2() { return static_cast<int32_t>(offsetof(EcsComponentType_1_t5D58330C5898EF0842082D12C9C41EDB24908BC6_StaticFields, ___IsIgnoreInFilter_2)); }
	inline bool get_IsIgnoreInFilter_2() const { return ___IsIgnoreInFilter_2; }
	inline bool* get_address_of_IsIgnoreInFilter_2() { return &___IsIgnoreInFilter_2; }
	inline void set_IsIgnoreInFilter_2(bool value)
	{
		___IsIgnoreInFilter_2 = value;
	}

	inline static int32_t get_offset_of_IsAutoReset_3() { return static_cast<int32_t>(offsetof(EcsComponentType_1_t5D58330C5898EF0842082D12C9C41EDB24908BC6_StaticFields, ___IsAutoReset_3)); }
	inline bool get_IsAutoReset_3() const { return ___IsAutoReset_3; }
	inline bool* get_address_of_IsAutoReset_3() { return &___IsAutoReset_3; }
	inline void set_IsAutoReset_3(bool value)
	{
		___IsAutoReset_3 = value;
	}
};


// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>
struct EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727  : public RuntimeObject
{
public:
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727, ___Items_0)); }
	inline EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* get_Items_0() const { return ___Items_0; }
	inline EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}
};


// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>
struct EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F  : public RuntimeObject
{
public:
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F, ___Items_0)); }
	inline EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7* get_Items_0() const { return ___Items_0; }
	inline EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}
};


// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>
struct EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738  : public RuntimeObject
{
public:
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738, ___Items_0)); }
	inline IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* get_Items_0() const { return ___Items_0; }
	inline IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}
};


// Leopotam.Ecs.EcsGrowList`1<System.Int32>
struct EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A  : public RuntimeObject
{
public:
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A, ___Items_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_Items_0() const { return ___Items_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}
};


// Leopotam.Ecs.EcsGrowList`1<System.Object>
struct EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857  : public RuntimeObject
{
public:
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857, ___Items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Items_0() const { return ___Items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
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


// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30  : public RuntimeObject
{
public:

public:
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
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
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
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
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Leopotam.Ecs.EcsComponentPool
struct EcsComponentPool_t8AB887AF33A28010330912038F77500B5724D98C  : public RuntimeObject
{
public:

public:
};

struct EcsComponentPool_t8AB887AF33A28010330912038F77500B5724D98C_StaticFields
{
public:
	// System.Int32 Leopotam.Ecs.EcsComponentPool::ComponentTypesCount
	int32_t ___ComponentTypesCount_0;

public:
	inline static int32_t get_offset_of_ComponentTypesCount_0() { return static_cast<int32_t>(offsetof(EcsComponentPool_t8AB887AF33A28010330912038F77500B5724D98C_StaticFields, ___ComponentTypesCount_0)); }
	inline int32_t get_ComponentTypesCount_0() const { return ___ComponentTypesCount_0; }
	inline int32_t* get_address_of_ComponentTypesCount_0() { return &___ComponentTypesCount_0; }
	inline void set_ComponentTypesCount_0(int32_t value)
	{
		___ComponentTypesCount_0 = value;
	}
};


// Leopotam.Ecs.EcsEntityExtensions
struct EcsEntityExtensions_t37B48A1DF3BC16FE0A89EC543A9B06AC76DEB2FC  : public RuntimeObject
{
public:

public:
};


// Leopotam.Ecs.EcsFilter
struct EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55  : public RuntimeObject
{
public:
	// Leopotam.Ecs.EcsEntity[] Leopotam.Ecs.EcsFilter::Entities
	EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* ___Entities_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Leopotam.Ecs.EcsFilter::EntitiesMap
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___EntitiesMap_1;
	// System.Int32 Leopotam.Ecs.EcsFilter::EntitiesCount
	int32_t ___EntitiesCount_2;
	// System.Int32 Leopotam.Ecs.EcsFilter::LockCount
	int32_t ___LockCount_3;
	// System.Int32 Leopotam.Ecs.EcsFilter::EntitiesCacheSize
	int32_t ___EntitiesCacheSize_4;
	// Leopotam.Ecs.EcsFilter/DelayedOp[] Leopotam.Ecs.EcsFilter::_delayedOps
	DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* ____delayedOps_5;
	// System.Int32 Leopotam.Ecs.EcsFilter::_delayedOpsCount
	int32_t ____delayedOpsCount_6;
	// System.Int32[] Leopotam.Ecs.EcsFilter::IncludedTypeIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___IncludedTypeIndices_7;
	// System.Int32[] Leopotam.Ecs.EcsFilter::ExcludedTypeIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ExcludedTypeIndices_8;
	// System.Type[] Leopotam.Ecs.EcsFilter::IncludedTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___IncludedTypes_9;
	// System.Type[] Leopotam.Ecs.EcsFilter::ExcludedTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___ExcludedTypes_10;

public:
	inline static int32_t get_offset_of_Entities_0() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___Entities_0)); }
	inline EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* get_Entities_0() const { return ___Entities_0; }
	inline EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7** get_address_of_Entities_0() { return &___Entities_0; }
	inline void set_Entities_0(EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* value)
	{
		___Entities_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Entities_0), (void*)value);
	}

	inline static int32_t get_offset_of_EntitiesMap_1() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___EntitiesMap_1)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_EntitiesMap_1() const { return ___EntitiesMap_1; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_EntitiesMap_1() { return &___EntitiesMap_1; }
	inline void set_EntitiesMap_1(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___EntitiesMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EntitiesMap_1), (void*)value);
	}

	inline static int32_t get_offset_of_EntitiesCount_2() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___EntitiesCount_2)); }
	inline int32_t get_EntitiesCount_2() const { return ___EntitiesCount_2; }
	inline int32_t* get_address_of_EntitiesCount_2() { return &___EntitiesCount_2; }
	inline void set_EntitiesCount_2(int32_t value)
	{
		___EntitiesCount_2 = value;
	}

	inline static int32_t get_offset_of_LockCount_3() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___LockCount_3)); }
	inline int32_t get_LockCount_3() const { return ___LockCount_3; }
	inline int32_t* get_address_of_LockCount_3() { return &___LockCount_3; }
	inline void set_LockCount_3(int32_t value)
	{
		___LockCount_3 = value;
	}

	inline static int32_t get_offset_of_EntitiesCacheSize_4() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___EntitiesCacheSize_4)); }
	inline int32_t get_EntitiesCacheSize_4() const { return ___EntitiesCacheSize_4; }
	inline int32_t* get_address_of_EntitiesCacheSize_4() { return &___EntitiesCacheSize_4; }
	inline void set_EntitiesCacheSize_4(int32_t value)
	{
		___EntitiesCacheSize_4 = value;
	}

	inline static int32_t get_offset_of__delayedOps_5() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ____delayedOps_5)); }
	inline DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* get__delayedOps_5() const { return ____delayedOps_5; }
	inline DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2** get_address_of__delayedOps_5() { return &____delayedOps_5; }
	inline void set__delayedOps_5(DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* value)
	{
		____delayedOps_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedOps_5), (void*)value);
	}

	inline static int32_t get_offset_of__delayedOpsCount_6() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ____delayedOpsCount_6)); }
	inline int32_t get__delayedOpsCount_6() const { return ____delayedOpsCount_6; }
	inline int32_t* get_address_of__delayedOpsCount_6() { return &____delayedOpsCount_6; }
	inline void set__delayedOpsCount_6(int32_t value)
	{
		____delayedOpsCount_6 = value;
	}

	inline static int32_t get_offset_of_IncludedTypeIndices_7() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___IncludedTypeIndices_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_IncludedTypeIndices_7() const { return ___IncludedTypeIndices_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_IncludedTypeIndices_7() { return &___IncludedTypeIndices_7; }
	inline void set_IncludedTypeIndices_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___IncludedTypeIndices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IncludedTypeIndices_7), (void*)value);
	}

	inline static int32_t get_offset_of_ExcludedTypeIndices_8() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___ExcludedTypeIndices_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ExcludedTypeIndices_8() const { return ___ExcludedTypeIndices_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ExcludedTypeIndices_8() { return &___ExcludedTypeIndices_8; }
	inline void set_ExcludedTypeIndices_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ExcludedTypeIndices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExcludedTypeIndices_8), (void*)value);
	}

	inline static int32_t get_offset_of_IncludedTypes_9() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___IncludedTypes_9)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_IncludedTypes_9() const { return ___IncludedTypes_9; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_IncludedTypes_9() { return &___IncludedTypes_9; }
	inline void set_IncludedTypes_9(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___IncludedTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IncludedTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_ExcludedTypes_10() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___ExcludedTypes_10)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_ExcludedTypes_10() const { return ___ExcludedTypes_10; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_ExcludedTypes_10() { return &___ExcludedTypes_10; }
	inline void set_ExcludedTypes_10(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___ExcludedTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExcludedTypes_10), (void*)value);
	}
};


// Leopotam.Ecs.EcsSystems
struct EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639  : public RuntimeObject
{
public:
	// System.String Leopotam.Ecs.EcsSystems::Name
	String_t* ___Name_0;
	// Leopotam.Ecs.EcsWorld Leopotam.Ecs.EcsSystems::World
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___World_1;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem> Leopotam.Ecs.EcsSystems::_allSystems
	EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * ____allSystems_2;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem> Leopotam.Ecs.EcsSystems::_runSystems
	EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * ____runSystems_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Leopotam.Ecs.EcsSystems::_namedRunSystems
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ____namedRunSystems_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> Leopotam.Ecs.EcsSystems::_injections
	Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * ____injections_5;
	// System.Boolean Leopotam.Ecs.EcsSystems::_injected
	bool ____injected_6;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_World_1() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ___World_1)); }
	inline EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * get_World_1() const { return ___World_1; }
	inline EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 ** get_address_of_World_1() { return &___World_1; }
	inline void set_World_1(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * value)
	{
		___World_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___World_1), (void*)value);
	}

	inline static int32_t get_offset_of__allSystems_2() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ____allSystems_2)); }
	inline EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * get__allSystems_2() const { return ____allSystems_2; }
	inline EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 ** get_address_of__allSystems_2() { return &____allSystems_2; }
	inline void set__allSystems_2(EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * value)
	{
		____allSystems_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allSystems_2), (void*)value);
	}

	inline static int32_t get_offset_of__runSystems_3() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ____runSystems_3)); }
	inline EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * get__runSystems_3() const { return ____runSystems_3; }
	inline EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F ** get_address_of__runSystems_3() { return &____runSystems_3; }
	inline void set__runSystems_3(EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * value)
	{
		____runSystems_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runSystems_3), (void*)value);
	}

	inline static int32_t get_offset_of__namedRunSystems_4() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ____namedRunSystems_4)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get__namedRunSystems_4() const { return ____namedRunSystems_4; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of__namedRunSystems_4() { return &____namedRunSystems_4; }
	inline void set__namedRunSystems_4(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		____namedRunSystems_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____namedRunSystems_4), (void*)value);
	}

	inline static int32_t get_offset_of__injections_5() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ____injections_5)); }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * get__injections_5() const { return ____injections_5; }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE ** get_address_of__injections_5() { return &____injections_5; }
	inline void set__injections_5(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * value)
	{
		____injections_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____injections_5), (void*)value);
	}

	inline static int32_t get_offset_of__injected_6() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ____injected_6)); }
	inline bool get__injected_6() const { return ____injected_6; }
	inline bool* get_address_of__injected_6() { return &____injected_6; }
	inline void set__injected_6(bool value)
	{
		____injected_6 = value;
	}
};


// Leopotam.Ecs.EcsSystemsRunItem
struct EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C  : public RuntimeObject
{
public:
	// System.Boolean Leopotam.Ecs.EcsSystemsRunItem::Active
	bool ___Active_0;
	// Leopotam.Ecs.IEcsRunSystem Leopotam.Ecs.EcsSystemsRunItem::System
	RuntimeObject* ___System_1;

public:
	inline static int32_t get_offset_of_Active_0() { return static_cast<int32_t>(offsetof(EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C, ___Active_0)); }
	inline bool get_Active_0() const { return ___Active_0; }
	inline bool* get_address_of_Active_0() { return &___Active_0; }
	inline void set_Active_0(bool value)
	{
		___Active_0 = value;
	}

	inline static int32_t get_offset_of_System_1() { return static_cast<int32_t>(offsetof(EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C, ___System_1)); }
	inline RuntimeObject* get_System_1() const { return ___System_1; }
	inline RuntimeObject** get_address_of_System_1() { return &___System_1; }
	inline void set_System_1(RuntimeObject* value)
	{
		___System_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___System_1), (void*)value);
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

// Voody.UniLeo.WorldHandler
struct WorldHandler_tD82490B8EE20D8CC5FD4AAA7F2216460819AA8D3  : public RuntimeObject
{
public:

public:
};

struct WorldHandler_tD82490B8EE20D8CC5FD4AAA7F2216460819AA8D3_StaticFields
{
public:
	// Leopotam.Ecs.EcsWorld Voody.UniLeo.WorldHandler::world
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___world_0;

public:
	inline static int32_t get_offset_of_world_0() { return static_cast<int32_t>(offsetof(WorldHandler_tD82490B8EE20D8CC5FD4AAA7F2216460819AA8D3_StaticFields, ___world_0)); }
	inline EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * get_world_0() const { return ___world_0; }
	inline EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 ** get_address_of_world_0() { return &___world_0; }
	inline void set_world_0(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * value)
	{
		___world_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___world_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
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


// System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>
struct KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A, ___key_0)); }
	inline Type_t * get_key_0() const { return ___key_0; }
	inline Type_t ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Type_t * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// Leopotam.Ecs.EcsEntity
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 
{
public:
	// System.Int32 Leopotam.Ecs.EcsEntity::Id
	int32_t ___Id_0;
	// System.UInt16 Leopotam.Ecs.EcsEntity::Gen
	uint16_t ___Gen_1;
	// Leopotam.Ecs.EcsWorld Leopotam.Ecs.EcsEntity::Owner
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___Owner_2;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Gen_1() { return static_cast<int32_t>(offsetof(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0, ___Gen_1)); }
	inline uint16_t get_Gen_1() const { return ___Gen_1; }
	inline uint16_t* get_address_of_Gen_1() { return &___Gen_1; }
	inline void set_Gen_1(uint16_t value)
	{
		___Gen_1 = value;
	}

	inline static int32_t get_offset_of_Owner_2() { return static_cast<int32_t>(offsetof(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0, ___Owner_2)); }
	inline EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * get_Owner_2() const { return ___Owner_2; }
	inline EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 ** get_address_of_Owner_2() { return &___Owner_2; }
	inline void set_Owner_2(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * value)
	{
		___Owner_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Owner_2), (void*)value);
	}
};

struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_StaticFields
{
public:
	// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsEntity::Null
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___Null_3;

public:
	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_StaticFields, ___Null_3)); }
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  get_Null_3() const { return ___Null_3; }
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Null_3))->___Owner_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsEntity
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke
{
	int32_t ___Id_0;
	uint16_t ___Gen_1;
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___Owner_2;
};
// Native definition for COM marshalling of Leopotam.Ecs.EcsEntity
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com
{
	int32_t ___Id_0;
	uint16_t ___Gen_1;
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___Owner_2;
};

// Leopotam.Ecs.EcsIgnoreInjectAttribute
struct EcsIgnoreInjectAttribute_t4A01E296BA2C15FFD024CF2D26858BBE98616068  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Leopotam.Ecs.EcsWorldConfig
struct EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A 
{
public:
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

public:
	inline static int32_t get_offset_of_WorldEntitiesCacheSize_0() { return static_cast<int32_t>(offsetof(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A, ___WorldEntitiesCacheSize_0)); }
	inline int32_t get_WorldEntitiesCacheSize_0() const { return ___WorldEntitiesCacheSize_0; }
	inline int32_t* get_address_of_WorldEntitiesCacheSize_0() { return &___WorldEntitiesCacheSize_0; }
	inline void set_WorldEntitiesCacheSize_0(int32_t value)
	{
		___WorldEntitiesCacheSize_0 = value;
	}

	inline static int32_t get_offset_of_WorldFiltersCacheSize_1() { return static_cast<int32_t>(offsetof(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A, ___WorldFiltersCacheSize_1)); }
	inline int32_t get_WorldFiltersCacheSize_1() const { return ___WorldFiltersCacheSize_1; }
	inline int32_t* get_address_of_WorldFiltersCacheSize_1() { return &___WorldFiltersCacheSize_1; }
	inline void set_WorldFiltersCacheSize_1(int32_t value)
	{
		___WorldFiltersCacheSize_1 = value;
	}

	inline static int32_t get_offset_of_WorldComponentPoolsCacheSize_2() { return static_cast<int32_t>(offsetof(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A, ___WorldComponentPoolsCacheSize_2)); }
	inline int32_t get_WorldComponentPoolsCacheSize_2() const { return ___WorldComponentPoolsCacheSize_2; }
	inline int32_t* get_address_of_WorldComponentPoolsCacheSize_2() { return &___WorldComponentPoolsCacheSize_2; }
	inline void set_WorldComponentPoolsCacheSize_2(int32_t value)
	{
		___WorldComponentPoolsCacheSize_2 = value;
	}

	inline static int32_t get_offset_of_EntityComponentsCacheSize_3() { return static_cast<int32_t>(offsetof(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A, ___EntityComponentsCacheSize_3)); }
	inline int32_t get_EntityComponentsCacheSize_3() const { return ___EntityComponentsCacheSize_3; }
	inline int32_t* get_address_of_EntityComponentsCacheSize_3() { return &___EntityComponentsCacheSize_3; }
	inline void set_EntityComponentsCacheSize_3(int32_t value)
	{
		___EntityComponentsCacheSize_3 = value;
	}

	inline static int32_t get_offset_of_FilterEntitiesCacheSize_4() { return static_cast<int32_t>(offsetof(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A, ___FilterEntitiesCacheSize_4)); }
	inline int32_t get_FilterEntitiesCacheSize_4() const { return ___FilterEntitiesCacheSize_4; }
	inline int32_t* get_address_of_FilterEntitiesCacheSize_4() { return &___FilterEntitiesCacheSize_4; }
	inline void set_FilterEntitiesCacheSize_4(int32_t value)
	{
		___FilterEntitiesCacheSize_4 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t7C31CBFB035DA412880D90BEFBFE980E92E7B12C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// Voody.UniLeo.InstantiateComponent
struct InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 
{
public:
	// UnityEngine.GameObject Voody.UniLeo.InstantiateComponent::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_0;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28, ___gameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Voody.UniLeo.InstantiateComponent
struct InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_0;
};
// Native definition for COM marshalling of Voody.UniLeo.InstantiateComponent
struct InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_0;
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
struct IsReadOnlyAttribute_t3188C6BF743FDB986678BFFC5F540708B12FBFD2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
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


// Leopotam.Ecs.EcsFilter/Enumerator
struct Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C 
{
public:
	// Leopotam.Ecs.EcsFilter Leopotam.Ecs.EcsFilter/Enumerator::_filter
	EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ____filter_0;
	// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::_count
	int32_t ____count_1;
	// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::_idx
	int32_t ____idx_2;

public:
	inline static int32_t get_offset_of__filter_0() { return static_cast<int32_t>(offsetof(Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C, ____filter_0)); }
	inline EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * get__filter_0() const { return ____filter_0; }
	inline EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 ** get_address_of__filter_0() { return &____filter_0; }
	inline void set__filter_0(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * value)
	{
		____filter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____filter_0), (void*)value);
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}

	inline static int32_t get_offset_of__idx_2() { return static_cast<int32_t>(offsetof(Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C, ____idx_2)); }
	inline int32_t get__idx_2() const { return ____idx_2; }
	inline int32_t* get_address_of__idx_2() { return &____idx_2; }
	inline void set__idx_2(int32_t value)
	{
		____idx_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsFilter/Enumerator
struct Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_pinvoke
{
	EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ____filter_0;
	int32_t ____count_1;
	int32_t ____idx_2;
};
// Native definition for COM marshalling of Leopotam.Ecs.EcsFilter/Enumerator
struct Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_com
{
	EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ____filter_0;
	int32_t ____count_1;
	int32_t ____idx_2;
};

// Leopotam.Ecs.EcsWorld/EcsEntityData
struct EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 
{
public:
	// System.UInt16 Leopotam.Ecs.EcsWorld/EcsEntityData::Gen
	uint16_t ___Gen_0;
	// System.Int16 Leopotam.Ecs.EcsWorld/EcsEntityData::ComponentsCountX2
	int16_t ___ComponentsCountX2_1;
	// System.Int32[] Leopotam.Ecs.EcsWorld/EcsEntityData::Components
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Components_2;

public:
	inline static int32_t get_offset_of_Gen_0() { return static_cast<int32_t>(offsetof(EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3, ___Gen_0)); }
	inline uint16_t get_Gen_0() const { return ___Gen_0; }
	inline uint16_t* get_address_of_Gen_0() { return &___Gen_0; }
	inline void set_Gen_0(uint16_t value)
	{
		___Gen_0 = value;
	}

	inline static int32_t get_offset_of_ComponentsCountX2_1() { return static_cast<int32_t>(offsetof(EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3, ___ComponentsCountX2_1)); }
	inline int16_t get_ComponentsCountX2_1() const { return ___ComponentsCountX2_1; }
	inline int16_t* get_address_of_ComponentsCountX2_1() { return &___ComponentsCountX2_1; }
	inline void set_ComponentsCountX2_1(int16_t value)
	{
		___ComponentsCountX2_1 = value;
	}

	inline static int32_t get_offset_of_Components_2() { return static_cast<int32_t>(offsetof(EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3, ___Components_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_Components_2() const { return ___Components_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_Components_2() { return &___Components_2; }
	inline void set_Components_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___Components_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Components_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsWorld/EcsEntityData
#pragma pack(push, tp, 2)
struct EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_pinvoke
{
	uint16_t ___Gen_0;
	int16_t ___ComponentsCountX2_1;
	Il2CppSafeArray/*NONE*/* ___Components_2;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Leopotam.Ecs.EcsWorld/EcsEntityData
#pragma pack(push, tp, 2)
struct EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_com
{
	uint16_t ___Gen_0;
	int16_t ___ComponentsCountX2_1;
	Il2CppSafeArray/*NONE*/* ___Components_2;
};
#pragma pack(pop, tp)

// Leopotam.Ecs.EcsComponentPool`1<Voody.UniLeo.InstantiateComponent>
struct EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F  : public RuntimeObject
{
public:
	// System.Type Leopotam.Ecs.EcsComponentPool`1::<ItemType>k__BackingField
	Type_t * ___U3CItemTypeU3Ek__BackingField_0;
	// T[] Leopotam.Ecs.EcsComponentPool`1::Items
	InstantiateComponentU5BU5D_tE26A107B1502B9DD6E1BCB0BF7B2C36802E914D5* ___Items_1;
	// System.Int32[] Leopotam.Ecs.EcsComponentPool`1::_reservedItems
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____reservedItems_2;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_itemsCount
	int32_t ____itemsCount_3;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_reservedItemsCount
	int32_t ____reservedItemsCount_4;
	// Leopotam.Ecs.EcsComponentPool`1/AutoResetHandler<T> Leopotam.Ecs.EcsComponentPool`1::_autoReset
	AutoResetHandler_tA8351E2C5A42615EA69B33A9A7336F16C07AC366 * ____autoReset_5;
	// T Leopotam.Ecs.EcsComponentPool`1::_autoresetFakeInstance
	InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28  ____autoresetFakeInstance_6;
	// Leopotam.Ecs.IEcsComponentPoolResizeListener[] Leopotam.Ecs.EcsComponentPool`1::_resizeListeners
	IEcsComponentPoolResizeListenerU5BU5D_t7A79864918CE9CDA955D4B1BCCCDAA3F864FA68D* ____resizeListeners_7;
	// System.Int32 Leopotam.Ecs.EcsComponentPool`1::_resizeListenersCount
	int32_t ____resizeListenersCount_8;

public:
	inline static int32_t get_offset_of_U3CItemTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F, ___U3CItemTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CItemTypeU3Ek__BackingField_0() const { return ___U3CItemTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CItemTypeU3Ek__BackingField_0() { return &___U3CItemTypeU3Ek__BackingField_0; }
	inline void set_U3CItemTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CItemTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_Items_1() { return static_cast<int32_t>(offsetof(EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F, ___Items_1)); }
	inline InstantiateComponentU5BU5D_tE26A107B1502B9DD6E1BCB0BF7B2C36802E914D5* get_Items_1() const { return ___Items_1; }
	inline InstantiateComponentU5BU5D_tE26A107B1502B9DD6E1BCB0BF7B2C36802E914D5** get_address_of_Items_1() { return &___Items_1; }
	inline void set_Items_1(InstantiateComponentU5BU5D_tE26A107B1502B9DD6E1BCB0BF7B2C36802E914D5* value)
	{
		___Items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_1), (void*)value);
	}

	inline static int32_t get_offset_of__reservedItems_2() { return static_cast<int32_t>(offsetof(EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F, ____reservedItems_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__reservedItems_2() const { return ____reservedItems_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__reservedItems_2() { return &____reservedItems_2; }
	inline void set__reservedItems_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____reservedItems_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reservedItems_2), (void*)value);
	}

	inline static int32_t get_offset_of__itemsCount_3() { return static_cast<int32_t>(offsetof(EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F, ____itemsCount_3)); }
	inline int32_t get__itemsCount_3() const { return ____itemsCount_3; }
	inline int32_t* get_address_of__itemsCount_3() { return &____itemsCount_3; }
	inline void set__itemsCount_3(int32_t value)
	{
		____itemsCount_3 = value;
	}

	inline static int32_t get_offset_of__reservedItemsCount_4() { return static_cast<int32_t>(offsetof(EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F, ____reservedItemsCount_4)); }
	inline int32_t get__reservedItemsCount_4() const { return ____reservedItemsCount_4; }
	inline int32_t* get_address_of__reservedItemsCount_4() { return &____reservedItemsCount_4; }
	inline void set__reservedItemsCount_4(int32_t value)
	{
		____reservedItemsCount_4 = value;
	}

	inline static int32_t get_offset_of__autoReset_5() { return static_cast<int32_t>(offsetof(EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F, ____autoReset_5)); }
	inline AutoResetHandler_tA8351E2C5A42615EA69B33A9A7336F16C07AC366 * get__autoReset_5() const { return ____autoReset_5; }
	inline AutoResetHandler_tA8351E2C5A42615EA69B33A9A7336F16C07AC366 ** get_address_of__autoReset_5() { return &____autoReset_5; }
	inline void set__autoReset_5(AutoResetHandler_tA8351E2C5A42615EA69B33A9A7336F16C07AC366 * value)
	{
		____autoReset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____autoReset_5), (void*)value);
	}

	inline static int32_t get_offset_of__autoresetFakeInstance_6() { return static_cast<int32_t>(offsetof(EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F, ____autoresetFakeInstance_6)); }
	inline InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28  get__autoresetFakeInstance_6() const { return ____autoresetFakeInstance_6; }
	inline InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 * get_address_of__autoresetFakeInstance_6() { return &____autoresetFakeInstance_6; }
	inline void set__autoresetFakeInstance_6(InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28  value)
	{
		____autoresetFakeInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____autoresetFakeInstance_6))->___gameObject_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__resizeListeners_7() { return static_cast<int32_t>(offsetof(EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F, ____resizeListeners_7)); }
	inline IEcsComponentPoolResizeListenerU5BU5D_t7A79864918CE9CDA955D4B1BCCCDAA3F864FA68D* get__resizeListeners_7() const { return ____resizeListeners_7; }
	inline IEcsComponentPoolResizeListenerU5BU5D_t7A79864918CE9CDA955D4B1BCCCDAA3F864FA68D** get_address_of__resizeListeners_7() { return &____resizeListeners_7; }
	inline void set__resizeListeners_7(IEcsComponentPoolResizeListenerU5BU5D_t7A79864918CE9CDA955D4B1BCCCDAA3F864FA68D* value)
	{
		____resizeListeners_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resizeListeners_7), (void*)value);
	}

	inline static int32_t get_offset_of__resizeListenersCount_8() { return static_cast<int32_t>(offsetof(EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F, ____resizeListenersCount_8)); }
	inline int32_t get__resizeListenersCount_8() const { return ____resizeListenersCount_8; }
	inline int32_t* get_address_of__resizeListenersCount_8() { return &____resizeListenersCount_8; }
	inline void set__resizeListenersCount_8(int32_t value)
	{
		____resizeListenersCount_8 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>
struct Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF, ___dictionary_0)); }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF, ___current_3)); }
	inline KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Nullable`1<Leopotam.Ecs.EcsEntity>
struct Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 
{
public:
	// T System.Nullable`1::value
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7, ___value_0)); }
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  get_value_0() const { return ___value_0; }
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___Owner_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// Voody.UniLeo.ConvertMode
struct ConvertMode_t53AC7F6616AA8AF539D4411AAC548144500C87D9 
{
public:
	// System.Int32 Voody.UniLeo.ConvertMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConvertMode_t53AC7F6616AA8AF539D4411AAC548144500C87D9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Leopotam.Ecs.EcsWorld
struct EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19  : public RuntimeObject
{
public:
	// Leopotam.Ecs.EcsWorld/EcsEntityData[] Leopotam.Ecs.EcsWorld::Entities
	EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* ___Entities_0;
	// System.Int32 Leopotam.Ecs.EcsWorld::EntitiesCount
	int32_t ___EntitiesCount_1;
	// Leopotam.Ecs.EcsGrowList`1<System.Int32> Leopotam.Ecs.EcsWorld::FreeEntities
	EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * ___FreeEntities_2;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter> Leopotam.Ecs.EcsWorld::Filters
	EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * ___Filters_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>> Leopotam.Ecs.EcsWorld::FilterByIncludedComponents
	Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * ___FilterByIncludedComponents_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>> Leopotam.Ecs.EcsWorld::FilterByExcludedComponents
	Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * ___FilterByExcludedComponents_5;
	// System.Int32 Leopotam.Ecs.EcsWorld::_usedComponentsCount
	int32_t ____usedComponentsCount_6;
	// Leopotam.Ecs.EcsWorldConfig Leopotam.Ecs.EcsWorld::Config
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  ___Config_7;
	// System.Object[] Leopotam.Ecs.EcsWorld::_filterCtor
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____filterCtor_8;
	// Leopotam.Ecs.IEcsComponentPool[] Leopotam.Ecs.EcsWorld::ComponentPools
	IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* ___ComponentPools_9;
	// System.Boolean Leopotam.Ecs.EcsWorld::IsDestroyed
	bool ___IsDestroyed_10;

public:
	inline static int32_t get_offset_of_Entities_0() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___Entities_0)); }
	inline EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* get_Entities_0() const { return ___Entities_0; }
	inline EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8** get_address_of_Entities_0() { return &___Entities_0; }
	inline void set_Entities_0(EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* value)
	{
		___Entities_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Entities_0), (void*)value);
	}

	inline static int32_t get_offset_of_EntitiesCount_1() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___EntitiesCount_1)); }
	inline int32_t get_EntitiesCount_1() const { return ___EntitiesCount_1; }
	inline int32_t* get_address_of_EntitiesCount_1() { return &___EntitiesCount_1; }
	inline void set_EntitiesCount_1(int32_t value)
	{
		___EntitiesCount_1 = value;
	}

	inline static int32_t get_offset_of_FreeEntities_2() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___FreeEntities_2)); }
	inline EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * get_FreeEntities_2() const { return ___FreeEntities_2; }
	inline EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A ** get_address_of_FreeEntities_2() { return &___FreeEntities_2; }
	inline void set_FreeEntities_2(EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * value)
	{
		___FreeEntities_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FreeEntities_2), (void*)value);
	}

	inline static int32_t get_offset_of_Filters_3() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___Filters_3)); }
	inline EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * get_Filters_3() const { return ___Filters_3; }
	inline EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 ** get_address_of_Filters_3() { return &___Filters_3; }
	inline void set_Filters_3(EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * value)
	{
		___Filters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Filters_3), (void*)value);
	}

	inline static int32_t get_offset_of_FilterByIncludedComponents_4() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___FilterByIncludedComponents_4)); }
	inline Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * get_FilterByIncludedComponents_4() const { return ___FilterByIncludedComponents_4; }
	inline Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 ** get_address_of_FilterByIncludedComponents_4() { return &___FilterByIncludedComponents_4; }
	inline void set_FilterByIncludedComponents_4(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * value)
	{
		___FilterByIncludedComponents_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterByIncludedComponents_4), (void*)value);
	}

	inline static int32_t get_offset_of_FilterByExcludedComponents_5() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___FilterByExcludedComponents_5)); }
	inline Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * get_FilterByExcludedComponents_5() const { return ___FilterByExcludedComponents_5; }
	inline Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 ** get_address_of_FilterByExcludedComponents_5() { return &___FilterByExcludedComponents_5; }
	inline void set_FilterByExcludedComponents_5(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * value)
	{
		___FilterByExcludedComponents_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterByExcludedComponents_5), (void*)value);
	}

	inline static int32_t get_offset_of__usedComponentsCount_6() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ____usedComponentsCount_6)); }
	inline int32_t get__usedComponentsCount_6() const { return ____usedComponentsCount_6; }
	inline int32_t* get_address_of__usedComponentsCount_6() { return &____usedComponentsCount_6; }
	inline void set__usedComponentsCount_6(int32_t value)
	{
		____usedComponentsCount_6 = value;
	}

	inline static int32_t get_offset_of_Config_7() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___Config_7)); }
	inline EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  get_Config_7() const { return ___Config_7; }
	inline EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * get_address_of_Config_7() { return &___Config_7; }
	inline void set_Config_7(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  value)
	{
		___Config_7 = value;
	}

	inline static int32_t get_offset_of__filterCtor_8() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ____filterCtor_8)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__filterCtor_8() const { return ____filterCtor_8; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__filterCtor_8() { return &____filterCtor_8; }
	inline void set__filterCtor_8(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____filterCtor_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____filterCtor_8), (void*)value);
	}

	inline static int32_t get_offset_of_ComponentPools_9() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___ComponentPools_9)); }
	inline IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* get_ComponentPools_9() const { return ___ComponentPools_9; }
	inline IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1** get_address_of_ComponentPools_9() { return &___ComponentPools_9; }
	inline void set_ComponentPools_9(IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* value)
	{
		___ComponentPools_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ComponentPools_9), (void*)value);
	}

	inline static int32_t get_offset_of_IsDestroyed_10() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___IsDestroyed_10)); }
	inline bool get_IsDestroyed_10() const { return ___IsDestroyed_10; }
	inline bool* get_address_of_IsDestroyed_10() { return &___IsDestroyed_10; }
	inline void set_IsDestroyed_10(bool value)
	{
		___IsDestroyed_10 = value;
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

// Unity.IL2CPP.CompilerServices.Option
struct Option_t84009B1FD679878627B1F10A085F14353CEC0845 
{
public:
	// System.Int32 Unity.IL2CPP.CompilerServices.Option::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Option_t84009B1FD679878627B1F10A085F14353CEC0845, ___value___2)); }
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


// Leopotam.Ecs.EcsFilter/DelayedOp
struct DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 
{
public:
	// System.Boolean Leopotam.Ecs.EcsFilter/DelayedOp::IsAdd
	bool ___IsAdd_0;
	// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsFilter/DelayedOp::Entity
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___Entity_1;

public:
	inline static int32_t get_offset_of_IsAdd_0() { return static_cast<int32_t>(offsetof(DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812, ___IsAdd_0)); }
	inline bool get_IsAdd_0() const { return ___IsAdd_0; }
	inline bool* get_address_of_IsAdd_0() { return &___IsAdd_0; }
	inline void set_IsAdd_0(bool value)
	{
		___IsAdd_0 = value;
	}

	inline static int32_t get_offset_of_Entity_1() { return static_cast<int32_t>(offsetof(DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812, ___Entity_1)); }
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  get_Entity_1() const { return ___Entity_1; }
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * get_address_of_Entity_1() { return &___Entity_1; }
	inline void set_Entity_1(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  value)
	{
		___Entity_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Entity_1))->___Owner_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsFilter/DelayedOp
struct DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_pinvoke
{
	int32_t ___IsAdd_0;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke ___Entity_1;
};
// Native definition for COM marshalling of Leopotam.Ecs.EcsFilter/DelayedOp
struct DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_com
{
	int32_t ___IsAdd_0;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com ___Entity_1;
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


// Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute
struct Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// Unity.IL2CPP.CompilerServices.Option Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::<Option>k__BackingField
	int32_t ___U3COptionU3Ek__BackingField_0;
	// System.Object Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::<Value>k__BackingField
	RuntimeObject * ___U3CValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3COptionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445, ___U3COptionU3Ek__BackingField_0)); }
	inline int32_t get_U3COptionU3Ek__BackingField_0() const { return ___U3COptionU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3COptionU3Ek__BackingField_0() { return &___U3COptionU3Ek__BackingField_0; }
	inline void set_U3COptionU3Ek__BackingField_0(int32_t value)
	{
		___U3COptionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445, ___U3CValueU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_1), (void*)value);
	}
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// Voody.UniLeo.BaseMonoProvider
struct BaseMonoProvider_t1E42DA2E448DACDA06F754ABD280EBCB0C13A85B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Voody.UniLeo.ConvertToEntity
struct ConvertToEntity_t6A58AF51FE1173CCCE4DF07BF1207F6F748A6125  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Voody.UniLeo.ConvertMode Voody.UniLeo.ConvertToEntity::convertMode
	int32_t ___convertMode_4;
	// System.Nullable`1<Leopotam.Ecs.EcsEntity> Voody.UniLeo.ConvertToEntity::entity
	Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7  ___entity_5;
	// System.Boolean Voody.UniLeo.ConvertToEntity::isProccessed
	bool ___isProccessed_6;

public:
	inline static int32_t get_offset_of_convertMode_4() { return static_cast<int32_t>(offsetof(ConvertToEntity_t6A58AF51FE1173CCCE4DF07BF1207F6F748A6125, ___convertMode_4)); }
	inline int32_t get_convertMode_4() const { return ___convertMode_4; }
	inline int32_t* get_address_of_convertMode_4() { return &___convertMode_4; }
	inline void set_convertMode_4(int32_t value)
	{
		___convertMode_4 = value;
	}

	inline static int32_t get_offset_of_entity_5() { return static_cast<int32_t>(offsetof(ConvertToEntity_t6A58AF51FE1173CCCE4DF07BF1207F6F748A6125, ___entity_5)); }
	inline Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7  get_entity_5() const { return ___entity_5; }
	inline Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 * get_address_of_entity_5() { return &___entity_5; }
	inline void set_entity_5(Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7  value)
	{
		___entity_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___entity_5))->___value_0))->___Owner_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_isProccessed_6() { return static_cast<int32_t>(offsetof(ConvertToEntity_t6A58AF51FE1173CCCE4DF07BF1207F6F748A6125, ___isProccessed_6)); }
	inline bool get_isProccessed_6() const { return ___isProccessed_6; }
	inline bool* get_address_of_isProccessed_6() { return &___isProccessed_6; }
	inline void set_isProccessed_6(bool value)
	{
		___isProccessed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
struct IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1  : public RuntimeArray
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
// Leopotam.Ecs.EcsEntity[]
struct EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  m_Items[1];

public:
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Owner_2), (void*)NULL);
	}
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Owner_2), (void*)NULL);
	}
};
// Leopotam.Ecs.EcsFilter/DelayedOp[]
struct DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812  m_Items[1];

public:
	inline DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Entity_1))->___Owner_2), (void*)NULL);
	}
	inline DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Entity_1))->___Owner_2), (void*)NULL);
	}
};
// Leopotam.Ecs.IEcsSystem[]
struct IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128  : public RuntimeArray
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
// Leopotam.Ecs.EcsSystemsRunItem[]
struct EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * m_Items[1];

public:
	inline EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * value)
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
// Leopotam.Ecs.EcsWorld/EcsEntityData[]
struct EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3  m_Items[1];

public:
	inline EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Components_2), (void*)NULL);
	}
	inline EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Components_2), (void*)NULL);
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
// Leopotam.Ecs.EcsFilter[]
struct EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * m_Items[1];

public:
	inline EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Voody.UniLeo.InstantiateComponent[]
struct InstantiateComponentU5BU5D_tE26A107B1502B9DD6E1BCB0BF7B2C36802E914D5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28  m_Items[1];

public:
	inline InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___gameObject_0), (void*)NULL);
	}
	inline InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___gameObject_0), (void*)NULL);
	}
};

IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_pinvoke(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_pinvoke_back(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke& marshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled);
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_pinvoke_cleanup(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_com(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_com_back(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com& marshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled);
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_com_cleanup(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com& marshaled);

// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsEntityExtensions::Replace<Voody.UniLeo.InstantiateComponent>(Leopotam.Ecs.EcsEntity&,T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  EcsEntityExtensions_Replace_TisInstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_mAA3ED6E4982BAF54E03AEA594DC937AEB19CEE87_gshared_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 * ___item1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Leopotam.Ecs.EcsEntity>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9FE5CB75AE56CA525B1E01A488AD0CD51F9FFB16_gshared_inline (Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<Leopotam.Ecs.EcsEntity>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  Nullable_1_get_Value_m574B03322222AAA5E5847471380A92FBFF23B034_gshared (Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<Leopotam.Ecs.EcsEntity>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mB15AA028B22C80E8ED3C017CA7A0C9482E99D781_gshared (Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Array::Resize<Leopotam.Ecs.EcsFilter/DelayedOp>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D_gshared (DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Object>::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_m5F0691597ED4873A451968C8E2735B9C20382DA2_gshared_inline (EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m9D7804B6366AF1BE2BC90590C75D811D5D20677B_gshared_inline (EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_gshared_inline (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC005492A35FF3810936B20F0D2CB95C92703DD39_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Array::Resize<Leopotam.Ecs.EcsWorld/EcsEntityData>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_gshared (EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_gshared_inline (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_gshared (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___array0, int32_t ___newSize1, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// Leopotam.Ecs.EcsWorld Voody.UniLeo.WorldHandler::GetWorld()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * WorldHandler_GetWorld_m61D22E99F69D4FE4CCAFF0BBB9857CA34787D416_inline (const RuntimeMethod* method);
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsWorld::NewEntity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  EcsWorld_NewEntity_m29529BC3FE9DB5E528E292C8307473751D1FE38D_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsEntityExtensions::Replace<Voody.UniLeo.InstantiateComponent>(Leopotam.Ecs.EcsEntity&,T&)
inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  EcsEntityExtensions_Replace_TisInstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_mAA3ED6E4982BAF54E03AEA594DC937AEB19CEE87_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 * ___item1, const RuntimeMethod* method)
{
	return ((  EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  (*) (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *, InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 *, const RuntimeMethod*))EcsEntityExtensions_Replace_TisInstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_mAA3ED6E4982BAF54E03AEA594DC937AEB19CEE87_gshared_inline)(___entity0, ___item1, method);
}
// System.Boolean System.Nullable`1<Leopotam.Ecs.EcsEntity>::get_HasValue()
inline bool Nullable_1_get_HasValue_m9FE5CB75AE56CA525B1E01A488AD0CD51F9FFB16_inline (Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 *, const RuntimeMethod*))Nullable_1_get_HasValue_m9FE5CB75AE56CA525B1E01A488AD0CD51F9FFB16_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<Leopotam.Ecs.EcsEntity>::get_Value()
inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  Nullable_1_get_Value_m574B03322222AAA5E5847471380A92FBFF23B034 (Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 * __this, const RuntimeMethod* method)
{
	return ((  EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  (*) (Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 *, const RuntimeMethod*))Nullable_1_get_Value_m574B03322222AAA5E5847471380A92FBFF23B034_gshared)(__this, method);
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsAlive_mBCDE101FA542306B2186382BA92B818AF66CD785_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method);
// System.Void System.Nullable`1<Leopotam.Ecs.EcsEntity>::.ctor(!0)
inline void Nullable_1__ctor_mB15AA028B22C80E8ED3C017CA7A0C9482E99D781 (Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 *, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 , const RuntimeMethod*))Nullable_1__ctor_mB15AA028B22C80E8ED3C017CA7A0C9482E99D781_gshared)(__this, ___value0, method);
}
// System.Int32 System.UInt16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_mDA01CAA4AF8C22A63972F93F26AF7E888CEBD2AA (uint16_t* __this, const RuntimeMethod* method);
// System.Int32 Leopotam.Ecs.EcsEntity::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsEntity_GetHashCode_mB847EED2B23DE1E722EEA210D852E1B8B01F6604_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(Leopotam.Ecs.EcsEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_Equals_m6C96F5128A123A5504E3C227C2E1E92D76AADACF (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___other0, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntity_Equals_mA31E5F554D4F150297F3953E6B754C19384D11B1_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// Leopotam.Ecs.EcsWorld/EcsEntityData& Leopotam.Ecs.EcsWorld::GetEntityData(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsWorld::UpdateFilters(System.Int32,Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, int32_t ___typeIdx0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity1, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData2, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsWorld::RecycleEntityData(System.Int32,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_RecycleEntityData_mD43B973684318F6A18A949CC46B8D8433F1B6B43 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, int32_t ___id0, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData1, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsWorldAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsWorldAlive_mF0651EC2A3F8CF8E9F77882033A4DAD1D5557047_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsWorld::IsAlive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_mA6EC771EB7E874E662369960BF81F2F1065BEA08_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_gshared)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::.ctor(Leopotam.Ecs.EcsFilter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator__ctor_m24FEE0FF13998645F3FCE9773D76DEB6596F919D_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ___filter0, const RuntimeMethod* method);
// System.Void System.Array::Resize<Leopotam.Ecs.EcsFilter/DelayedOp>(!!0[]&,System.Int32)
inline void Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D (DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2**, int32_t, const RuntimeMethod*))Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_mFCCC1AE5CE009E261FC90917B1A48336C0FF5374_inline (EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 *, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_m5F0691597ED4873A451968C8E2735B9C20382DA2_gshared_inline)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_m827FB78D21F068F7A7EBF735CD0244EBA96AE024_inline (EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F *, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_m5F0691597ED4873A451968C8E2735B9C20382DA2_gshared_inline)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mD04C8FED0F2AE94C346BA1748DE87334690C0328 (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>::Add(T)
inline void EcsGrowList_1_Add_m63C1D2731DCB0120F887DA9D85DAB6ECF07A2D65_inline (EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 *, RuntimeObject*, const RuntimeMethod*))EcsGrowList_1_Add_m9D7804B6366AF1BE2BC90590C75D811D5D20677B_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Leopotam.Ecs.EcsSystemsRunItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystemsRunItem__ctor_m5846EA79A00CF9DB479DB3B43ED8BF75574A0152 (EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * __this, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>::Add(T)
inline void EcsGrowList_1_Add_m12B9D29385B73808601D74AD2BC463D1F2C962F9_inline (EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * __this, EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F *, EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C *, const RuntimeMethod*))EcsGrowList_1_Add_m9D7804B6366AF1BE2BC90590C75D811D5D20677B_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4 (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, Type_t * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, Type_t *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Type,System.Object>::GetEnumerator()
inline Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF  Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF  (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::get_Current()
inline KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_inline (Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  (*) (Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>::get_Key()
inline Type_t * KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_inline (KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A * __this, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_inline (KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985 (Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::Dispose()
inline void Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515 (Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::ProcessInjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * EcsSystems_ProcessInjects_mB32C8893B8E2B0AE75AE6743D52138BDE3615E0B (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsSystems::InjectDataToSystem(Leopotam.Ecs.IEcsSystem,Leopotam.Ecs.EcsWorld,System.Collections.Generic.Dictionary`2<System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_InjectDataToSystem_mE5A6FB3F02C51C77598C116498AEBE067F610688 (RuntimeObject* ___system0, EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___world1, Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * ___injections2, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mE36F3A5B2DFF613C704AA56989D90D72760391EB (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Attribute_IsDefined_mD3B7688B216A0B4EBD238B82E9E8DA0E0E9308CB (MemberInfo_t * ___element0, Type_t * ___attributeType1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// Leopotam.Ecs.EcsFilter Leopotam.Ecs.EcsWorld::GetFilter(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * EcsWorld_GetFilter_mEF71896EFA460F0F991728F27D3A0CC49EB3C4C3 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, Type_t * ___filterType0, bool ___createIfNotExists1, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_inline (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A *, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_gshared_inline)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_inline (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 *, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_m5F0691597ED4873A451968C8E2735B9C20382DA2_gshared_inline)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35 (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mC005492A35FF3810936B20F0D2CB95C92703DD39_gshared)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsEntityExtensions::Destroy(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsEntityExtensions_Destroy_mC0A71595D1F8B6E285FB9D74D32FE24C5EB0B9E6_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method);
// System.Void System.Array::Resize<Leopotam.Ecs.EcsWorld/EcsEntityData>(!!0[]&,System.Int32)
inline void Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14 (EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8**, int32_t, const RuntimeMethod*))Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_gshared)(___array0, ___newSize1, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mBA776E4823B408DC61E91344D8CF20861F03B8A6 (Type_t * ___type0, int32_t ___bindingAttr1, Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___binder2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___culture4, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>::Add(T)
inline void EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_inline (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * __this, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 *, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 *, const RuntimeMethod*))EcsGrowList_1_Add_m9D7804B6366AF1BE2BC90590C75D811D5D20677B_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06 (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * __this, int32_t ___key0, EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 *, int32_t, EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95 (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * __this, int32_t ___key0, EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 *, int32_t, EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Leopotam.Ecs.EcsFilter::IsCompatible(Leopotam.Ecs.EcsWorld/EcsEntityData&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData0, int32_t ___addedRemovedTypeIndex1, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::Add(T)
inline void EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_inline (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A *, int32_t, const RuntimeMethod*))EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Option(Unity.IL2CPP.CompilerServices.Option)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m9BE90B21512D8A7424CCD9EDA3AB81A5DDC688F5_inline (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Value(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_mD5CAA39F97C19D1B1D2BCA508F564F788D32D824_inline (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 Leopotam.Ecs.EcsFilter::GetEntitiesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsFilter_GetEntitiesCount_mF2966ADF6E5F72ED882840EE4E3B18E98DF480A7_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsFilter::Lock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Lock_m62CDA8BE1EE1C0251A278608217B8A9033BAFAEB_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method);
// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mFB25F9D4A7953829F59C05BDFE39072FDC067323_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsFilter::Unlock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Unlock_m3E0AEE4273F2C6A9FC389FB4801C5B152B8219A6_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_Dispose_m569EC4F9DC87367F1A9DF4F54465FEFD31EA4CF7_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsFilter/Enumerator::MoveNext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC5FDC234DF5C36430FFCC640395FB66F1A490F8A_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
inline void Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_gshared)(___array0, ___newSize1, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMonoProvider__ctor_m06264DD7D3F3B4F1E74EB29501494F76D366A4E5 (BaseMonoProvider_t1E42DA2E448DACDA06F754ABD280EBCB0C13A85B * __this, const RuntimeMethod* method)
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
// System.Void Voody.UniLeo.ConvertToEntity::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConvertToEntity_Start_m0C87C4E8EE055657F67082409B9D403E59440CF3 (ConvertToEntity_t6A58AF51FE1173CCCE4DF07BF1207F6F748A6125 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityExtensions_Replace_TisInstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_mAA3ED6E4982BAF54E03AEA594DC937AEB19CEE87_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * V_0 = NULL;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28  V_2;
	memset((&V_2), 0, sizeof(V_2));
	InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var world = WorldHandler.GetWorld();
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_0;
		L_0 = WorldHandler_GetWorld_m61D22E99F69D4FE4CCAFF0BBB9857CA34787D416_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (world != null && !isProccessed)
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		bool L_2 = __this->get_isProccessed_6();
		if (L_2)
		{
			goto IL_0039;
		}
	}
	{
		// var instantiateEntity = world.NewEntity();
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_3 = V_0;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_4;
		L_4 = EcsWorld_NewEntity_m29529BC3FE9DB5E528E292C8307473751D1FE38D_inline(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// var instantiateComponent = new InstantiateComponent() { gameObject = gameObject };
		il2cpp_codegen_initobj((&V_3), sizeof(InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 ));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		(&V_3)->set_gameObject_0(L_5);
		InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28  L_6 = V_3;
		V_2 = L_6;
		// instantiateEntity.Replace(instantiateComponent);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_7;
		L_7 = EcsEntityExtensions_Replace_TisInstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_mAA3ED6E4982BAF54E03AEA594DC937AEB19CEE87_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(&V_1), (InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 *)(&V_2), /*hidden argument*/EcsEntityExtensions_Replace_TisInstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_mAA3ED6E4982BAF54E03AEA594DC937AEB19CEE87_RuntimeMethod_var);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Nullable`1<Leopotam.Ecs.EcsEntity> Voody.UniLeo.ConvertToEntity::TryGetEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7  ConvertToEntity_TryGetEntity_mD988A802EB0F82D669F8C9727C5E4BCA7ACA1B2A (ConvertToEntity_t6A58AF51FE1173CCCE4DF07BF1207F6F748A6125 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB15AA028B22C80E8ED3C017CA7A0C9482E99D781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m9FE5CB75AE56CA525B1E01A488AD0CD51F9FFB16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m574B03322222AAA5E5847471380A92FBFF23B034_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (entity.HasValue)
		Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 * L_0 = __this->get_address_of_entity_5();
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m9FE5CB75AE56CA525B1E01A488AD0CD51F9FFB16_inline((Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m9FE5CB75AE56CA525B1E01A488AD0CD51F9FFB16_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// if (entity.Value.IsAlive())
		Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 * L_2 = __this->get_address_of_entity_5();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_3;
		L_3 = Nullable_1_get_Value_m574B03322222AAA5E5847471380A92FBFF23B034((Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 *)L_2, /*hidden argument*/Nullable_1_get_Value_m574B03322222AAA5E5847471380A92FBFF23B034_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4;
		L_4 = EcsEntityExtensions_IsAlive_mBCDE101FA542306B2186382BA92B818AF66CD785_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// return entity.Value;
		Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 * L_5 = __this->get_address_of_entity_5();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_6;
		L_6 = Nullable_1_get_Value_m574B03322222AAA5E5847471380A92FBFF23B034((Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 *)L_5, /*hidden argument*/Nullable_1_get_Value_m574B03322222AAA5E5847471380A92FBFF23B034_RuntimeMethod_var);
		Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_mB15AA028B22C80E8ED3C017CA7A0C9482E99D781((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_mB15AA028B22C80E8ED3C017CA7A0C9482E99D781_RuntimeMethod_var);
		return L_7;
	}

IL_0033:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 ));
		Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7  L_8 = V_1;
		return L_8;
	}
}
// System.Void Voody.UniLeo.ConvertToEntity::setProccessed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConvertToEntity_setProccessed_m6507D93EB2445D741F704710BA9DFB6A51A57C46 (ConvertToEntity_t6A58AF51FE1173CCCE4DF07BF1207F6F748A6125 * __this, const RuntimeMethod* method)
{
	{
		// this.isProccessed = true;
		__this->set_isProccessed_6((bool)1);
		// }
		return;
	}
}
// System.Void Voody.UniLeo.ConvertToEntity::Set(Leopotam.Ecs.EcsEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConvertToEntity_Set_m48D25AD6C1F8F58207090F6EEDE68E7194237DE2 (ConvertToEntity_t6A58AF51FE1173CCCE4DF07BF1207F6F748A6125 * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___entity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB15AA028B22C80E8ED3C017CA7A0C9482E99D781_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.entity = entity;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_0 = ___entity0;
		Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_mB15AA028B22C80E8ED3C017CA7A0C9482E99D781((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_mB15AA028B22C80E8ED3C017CA7A0C9482E99D781_RuntimeMethod_var);
		__this->set_entity_5(L_1);
		// }
		return;
	}
}
// System.Void Voody.UniLeo.ConvertToEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConvertToEntity__ctor_mE7D8BA25C7175DF8A7B876BE39D694828A85653E (ConvertToEntity_t6A58AF51FE1173CCCE4DF07BF1207F6F748A6125 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_pinvoke(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_pinvoke_back(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke& marshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_pinvoke_cleanup(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_com(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com& marshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_com_back(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com& marshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_com_cleanup(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com& marshaled)
{
}
// System.Boolean Leopotam.Ecs.EcsEntity::op_Equality(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_op_Equality_m436A7FB75CF778C672FB0F0C23708E1113B0B27B (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___lhs0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Id == rhs.Id && lhs.Gen == rhs.Gen;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___lhs0;
		int32_t L_1 = L_0->get_Id_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___rhs1;
		int32_t L_3 = L_2->get_Id_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_4 = ___lhs0;
		uint16_t L_5 = L_4->get_Gen_1();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___rhs1;
		uint16_t L_7 = L_6->get_Gen_1();
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntity::op_Inequality(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_op_Inequality_m1A7AD9E8039DD4E1703B7A295639DFA00A70CBB3 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___lhs0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Id != rhs.Id || lhs.Gen != rhs.Gen;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___lhs0;
		int32_t L_1 = L_0->get_Id_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___rhs1;
		int32_t L_3 = L_2->get_Id_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_4 = ___lhs0;
		uint16_t L_5 = L_4->get_Gen_1();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___rhs1;
		uint16_t L_7 = L_6->get_Gen_1();
		return (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)1;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntity::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntity_GetHashCode_mB847EED2B23DE1E722EEA210D852E1B8B01F6604 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// var hashCode = (Id * 397) ^ Gen.GetHashCode ();
		int32_t L_0 = __this->get_Id_0();
		uint16_t* L_1 = __this->get_address_of_Gen_1();
		int32_t L_2;
		L_2 = UInt16_GetHashCode_mDA01CAA4AF8C22A63972F93F26AF7E888CEBD2AA((uint16_t*)L_1, /*hidden argument*/NULL);
		// hashCode = (hashCode * 397) ^ (Owner != null ? Owner.GetHashCode () : 0);
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_3 = __this->get_Owner_2();
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)397)))^(int32_t)L_2)), (int32_t)((int32_t)397)));
		if (L_3)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)397)))^(int32_t)L_2)), (int32_t)((int32_t)397)));
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
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_4 = __this->get_Owner_2();
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		// return hashCode;
		return ((int32_t)((int32_t)G_B3_1^(int32_t)G_B3_0));
	}
}
IL2CPP_EXTERN_C  int32_t EcsEntity_GetHashCode_mB847EED2B23DE1E722EEA210D852E1B8B01F6604_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * _thisAdjusted = reinterpret_cast<EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = EcsEntity_GetHashCode_mB847EED2B23DE1E722EEA210D852E1B8B01F6604_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_Equals_mA31E5F554D4F150297F3953E6B754C19384D11B1 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return other is EcsEntity otherEntity && Equals (otherEntity);
		RuntimeObject * L_0 = ___other0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = ((*(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)UnBox(L_1, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var))));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_2 = V_0;
		bool L_3;
		L_3 = EcsEntity_Equals_m6C96F5128A123A5504E3C227C2E1E92D76AADACF((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool EcsEntity_Equals_mA31E5F554D4F150297F3953E6B754C19384D11B1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * _thisAdjusted = reinterpret_cast<EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = EcsEntity_Equals_mA31E5F554D4F150297F3953E6B754C19384D11B1_inline(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(Leopotam.Ecs.EcsEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_Equals_m6C96F5128A123A5504E3C227C2E1E92D76AADACF (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___other0, const RuntimeMethod* method)
{
	{
		// return Id == other.Id && Gen == other.Gen && Owner == other.Owner;
		int32_t L_0 = __this->get_Id_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_1 = ___other0;
		int32_t L_2 = L_1.get_Id_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		uint16_t L_3 = __this->get_Gen_1();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_4 = ___other0;
		uint16_t L_5 = L_4.get_Gen_1();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_6 = __this->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_7 = ___other0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_8 = L_7.get_Owner_2();
		return (bool)((((RuntimeObject*)(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_6) == ((RuntimeObject*)(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool EcsEntity_Equals_m6C96F5128A123A5504E3C227C2E1E92D76AADACF_AdjustorThunk (RuntimeObject * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * _thisAdjusted = reinterpret_cast<EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = EcsEntity_Equals_m6C96F5128A123A5504E3C227C2E1E92D76AADACF(_thisAdjusted, ___other0, method);
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
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsEntityExtensions::Copy(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  EcsEntityExtensions_Copy_m6B749A1560FFACF793181203CC660A03A01D3F65 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * V_0 = NULL;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_1 = NULL;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// var owner = entity.Owner;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		V_0 = L_1;
		// ref var srcData = ref owner.GetEntityData (entity);
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_2 = V_0;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_3 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_4;
		L_4 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_2, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_3, /*hidden argument*/NULL);
		V_1 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_4;
		// var dstEntity = owner.NewEntity ();
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_5 = V_0;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_6;
		L_6 = EcsWorld_NewEntity_m29529BC3FE9DB5E528E292C8307473751D1FE38D_inline(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// ref var dstData = ref owner.GetEntityData (dstEntity);
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_7 = V_0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_8;
		L_8 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_7, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(&V_2), /*hidden argument*/NULL);
		V_3 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_8;
		// if (dstData.Components.Length < srcData.ComponentsCountX2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_9 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = L_9->get_Components_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_11 = V_1;
		int16_t L_12 = L_11->get_ComponentsCountX2_1();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))) >= ((int32_t)L_12)))
		{
			goto IL_0042;
		}
	}
	{
		// dstData.Components = new int[srcData.Components.Length];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_13 = V_3;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_14 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = L_14->get_Components_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))));
		L_13->set_Components_2(L_16);
	}

IL_0042:
	{
		// dstData.ComponentsCountX2 = 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_17 = V_3;
		L_17->set_ComponentsCountX2_1((int16_t)0);
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		V_4 = 0;
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_18 = V_1;
		int16_t L_19 = L_18->get_ComponentsCountX2_1();
		V_5 = L_19;
		goto IL_00b9;
	}

IL_0056:
	{
		// var typeIdx = srcData.Components[i];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_20 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = L_20->get_Components_2();
		int32_t L_22 = V_4;
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = L_24;
		// var pool = owner.ComponentPools[typeIdx];
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_25 = V_0;
		IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* L_26 = L_25->get_ComponentPools_9();
		int32_t L_27 = V_6;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		// var dstItemIdx = pool.New ();
		RuntimeObject* L_30 = L_29;
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Leopotam.Ecs.IEcsComponentPool::New() */, IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var, L_30);
		V_7 = L_31;
		// dstData.Components[i] = typeIdx;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_32 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = L_32->get_Components_2();
		int32_t L_34 = V_4;
		int32_t L_35 = V_6;
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34), (int32_t)L_35);
		// dstData.Components[i + 1] = dstItemIdx;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_36 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = L_36->get_Components_2();
		int32_t L_38 = V_4;
		int32_t L_39 = V_7;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1))), (int32_t)L_39);
		// pool.CopyData (srcData.Components[i + 1], dstItemIdx);
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_40 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = L_40->get_Components_2();
		int32_t L_42 = V_4;
		int32_t L_43 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		int32_t L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		int32_t L_45 = V_7;
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(2 /* System.Void Leopotam.Ecs.IEcsComponentPool::CopyData(System.Int32,System.Int32) */, IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var, L_30, L_44, L_45);
		// dstData.ComponentsCountX2 += 2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_46 = V_3;
		int16_t* L_47 = L_46->get_address_of_ComponentsCountX2_1();
		int16_t* L_48 = L_47;
		int32_t L_49 = *((int16_t*)L_48);
		*((int16_t*)L_48) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)2))));
		// owner.UpdateFilters (typeIdx, dstEntity, dstData);
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_50 = V_0;
		int32_t L_51 = V_6;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_52 = V_3;
		EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_inline(L_50, L_51, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(&V_2), (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_52, /*hidden argument*/NULL);
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_53 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)2));
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
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_56 = V_2;
		return L_56;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetInternalId(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetInternalId_m7733CD1273D5A6BB7513AF247FD8F166FF237A91 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	{
		// return entity.Id;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		int32_t L_1 = L_0->get_Id_0();
		return L_1;
	}
}
// System.Void Leopotam.Ecs.EcsEntityExtensions::Destroy(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsEntityExtensions_Destroy_mC0A71595D1F8B6E285FB9D74D32FE24C5EB0B9E6 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_0 = NULL;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_3;
		L_3 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_1, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_2, /*hidden argument*/NULL);
		V_0 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_3;
		// savedEntity.Id = entity.Id;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_4 = ___entity0;
		int32_t L_5 = L_4->get_Id_0();
		(&V_1)->set_Id_0(L_5);
		// savedEntity.Gen = entity.Gen;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___entity0;
		uint16_t L_7 = L_6->get_Gen_1();
		(&V_1)->set_Gen_1(L_7);
		// savedEntity.Owner = entity.Owner;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_8 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_9 = L_8->get_Owner_2();
		(&V_1)->set_Owner_2(L_9);
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_10 = V_0;
		int16_t L_11 = L_10->get_ComponentsCountX2_1();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)2));
		goto IL_0089;
	}

IL_003f:
	{
		// savedEntity.Owner.UpdateFilters (-entityData.Components[i], savedEntity, entityData);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_12 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_13 = L_12.get_Owner_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_14 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = L_14->get_Components_2();
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_19 = V_0;
		EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_inline(L_13, ((-L_18)), (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(&V_1), (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_19, /*hidden argument*/NULL);
		// savedEntity.Owner.ComponentPools[entityData.Components[i]].Recycle (entityData.Components[i + 1]);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_20 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_21 = L_20.get_Owner_2();
		IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* L_22 = L_21->get_ComponentPools_9();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_23 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = L_23->get_Components_2();
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_30 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = L_30->get_Components_2();
		int32_t L_32 = V_2;
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void Leopotam.Ecs.IEcsComponentPool::Recycle(System.Int32) */, IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var, L_29, L_34);
		// entityData.ComponentsCountX2 -= 2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_35 = V_0;
		int16_t* L_36 = L_35->get_address_of_ComponentsCountX2_1();
		int16_t* L_37 = L_36;
		int32_t L_38 = *((int16_t*)L_37);
		*((int16_t*)L_37) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)2))));
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)2));
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
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_41 = V_0;
		L_41->set_ComponentsCountX2_1((int16_t)0);
		// savedEntity.Owner.RecycleEntityData (savedEntity.Id, ref entityData);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_42 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_43 = L_42.get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_44 = V_1;
		int32_t L_45 = L_44.get_Id_0();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_46 = V_0;
		EcsWorld_RecycleEntityData_mD43B973684318F6A18A949CC46B8D8433F1B6B43(L_43, L_45, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_46, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsAlive_mBCDE101FA542306B2186382BA92B818AF66CD785 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_0 = NULL;
	{
		// if (!IsWorldAlive (entity)) { return false; }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		bool L_1;
		L_1 = EcsEntityExtensions_IsWorldAlive_mF0651EC2A3F8CF8E9F77882033A4DAD1D5557047_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_0, /*hidden argument*/NULL);
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
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_3 = L_2->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_4 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_5;
		L_5 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_3, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_4, /*hidden argument*/NULL);
		V_0 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_5;
		// return entityData.Gen == entity.Gen && entityData.ComponentsCountX2 >= 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_6 = V_0;
		uint16_t L_7 = L_6->get_Gen_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_8 = ___entity0;
		uint16_t L_9 = L_8->get_Gen_1();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0032;
		}
	}
	{
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_10 = V_0;
		int16_t L_11 = L_10->get_ComponentsCountX2_1();
		return (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		return (bool)0;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsWorldAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsWorldAlive_mF0651EC2A3F8CF8E9F77882033A4DAD1D5557047 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	{
		// return entity.Owner != null && entity.Owner.IsAlive ();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_3 = L_2->get_Owner_2();
		bool L_4;
		L_4 = EcsWorld_IsAlive_mA6EC771EB7E874E662369960BF81F2F1065BEA08_inline(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0014:
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
// System.Void Leopotam.Ecs.EcsFilter::.ctor(Leopotam.Ecs.EcsWorld)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter__ctor_m34F9F21641393E156462BB3409817E43D09BE290 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___world0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected EcsFilter (EcsWorld world) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// EntitiesCacheSize = world.Config.FilterEntitiesCacheSize;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_0 = ___world0;
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_1 = L_0->get_address_of_Config_7();
		int32_t L_2 = L_1->get_FilterEntitiesCacheSize_4();
		__this->set_EntitiesCacheSize_4(L_2);
		// Entities = new EcsEntity[EntitiesCacheSize];
		int32_t L_3 = __this->get_EntitiesCacheSize_4();
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* L_4 = (EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7*)(EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7*)SZArrayNew(EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->set_Entities_0(L_4);
		// EntitiesMap = new Dictionary<int, int> (EntitiesCacheSize);
		int32_t L_5 = __this->get_EntitiesCacheSize_4();
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_6 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)il2cpp_codegen_object_new(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88(L_6, L_5, /*hidden argument*/Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_RuntimeMethod_var);
		__this->set_EntitiesMap_1(L_6);
		// _delayedOps = new DelayedOp[EntitiesCacheSize];
		int32_t L_7 = __this->get_EntitiesCacheSize_4();
		DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* L_8 = (DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2*)(DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2*)SZArrayNew(DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->set__delayedOps_5(L_8);
		// }
		return;
	}
}
// Leopotam.Ecs.EcsFilter/Enumerator Leopotam.Ecs.EcsFilter::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C  EcsFilter_GetEnumerator_m9C0CCB926164DD980730EFA9090D4AF1DE8F245B (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	{
		// return new Enumerator (this);
		Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m24FEE0FF13998645F3FCE9773D76DEB6596F919D_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Leopotam.Ecs.EcsEntity& Leopotam.Ecs.EcsFilter::GetEntity(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * EcsFilter_GetEntity_m10FA72BE6D16E42C40FE61BB1CD63B7C9B941F05 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, int32_t* ___idx0, const RuntimeMethod* method)
{
	{
		// return ref Entities[idx];
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* L_0 = __this->get_Entities_0();
		int32_t* L_1 = ___idx0;
		int32_t L_2 = *((int32_t*)L_1);
		return (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2))));
	}
}
// System.Int32 Leopotam.Ecs.EcsFilter::GetEntitiesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsFilter_GetEntitiesCount_mF2966ADF6E5F72ED882840EE4E3B18E98DF480A7 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	{
		// return EntitiesCount;
		int32_t L_0 = __this->get_EntitiesCount_2();
		return L_0;
	}
}
// System.Boolean Leopotam.Ecs.EcsFilter::IsCompatible(Leopotam.Ecs.EcsWorld/EcsEntityData&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData0, int32_t ___addedRemovedTypeIndex1, const RuntimeMethod* method)
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
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_IncludedTypeIndices_7();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)1));
		goto IL_0048;
	}

IL_000d:
	{
		// var typeIdx = IncludedTypeIndices[incIdx];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_IncludedTypeIndices_7();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// var idx = entityData.ComponentsCountX2 - 2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_5 = ___entityData0;
		int16_t L_6 = L_5->get_ComponentsCountX2_1();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2));
		goto IL_003b;
	}

IL_0021:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_7 = ___entityData0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = L_7->get_Components_2();
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
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)2));
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
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1));
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
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = __this->get_ExcludedTypeIndices_8();
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
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = __this->get_ExcludedTypeIndices_8();
		int32_t L_26 = V_4;
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		V_5 = L_28;
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_29 = ___entityData0;
		int16_t L_30 = L_29->get_ComponentsCountX2_1();
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)2));
		goto IL_009a;
	}

IL_0076:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_31 = ___entityData0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = L_31->get_Components_2();
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
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)2));
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
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00a5:
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_45 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_46 = __this->get_ExcludedTypeIndices_8();
		if ((((int32_t)L_45) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_AddDelayedOp_m25725CEC99ECD2B191130BDCC11408BDEA0300BC (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, bool ___isAdd0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (LockCount <= 0) {
		int32_t L_0 = __this->get_LockCount_3();
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
		DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* L_1 = __this->get__delayedOps_5();
		int32_t L_2 = __this->get__delayedOpsCount_6();
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((uint32_t)L_2))))
		{
			goto IL_002e;
		}
	}
	{
		// Array.Resize (ref _delayedOps, _delayedOpsCount << 1);
		DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2** L_3 = __this->get_address_of__delayedOps_5();
		int32_t L_4 = __this->get__delayedOpsCount_6();
		Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D((DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2**)L_3, ((int32_t)((int32_t)L_4<<(int32_t)1)), /*hidden argument*/Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D_RuntimeMethod_var);
	}

IL_002e:
	{
		// ref var op = ref _delayedOps[_delayedOpsCount++];
		DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* L_5 = __this->get__delayedOps_5();
		int32_t L_6 = __this->get__delayedOpsCount_6();
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->set__delayedOpsCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		int32_t L_8 = V_0;
		// op.IsAdd = isAdd;
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_9 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)));
		bool L_10 = ___isAdd0;
		L_9->set_IsAdd_0(L_10);
		// op.Entity = entity;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_11 = ___entity1;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_12 = (*(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_11);
		L_9->set_Entity_1(L_12);
		// return true;
		return (bool)1;
	}
}
// System.Void Leopotam.Ecs.EcsFilter::Lock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter_Lock_m62CDA8BE1EE1C0251A278608217B8A9033BAFAEB (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	{
		// LockCount++;
		int32_t L_0 = __this->get_LockCount_3();
		__this->set_LockCount_3(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsFilter::Unlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter_Unlock_m3E0AEE4273F2C6A9FC389FB4801C5B152B8219A6 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * V_2 = NULL;
	{
		// LockCount--;
		int32_t L_0 = __this->get_LockCount_3();
		__this->set_LockCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (LockCount == 0 && _delayedOpsCount > 0) {
		int32_t L_1 = __this->get_LockCount_3();
		if (L_1)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_2 = __this->get__delayedOpsCount_6();
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_3 = __this->get__delayedOpsCount_6();
		V_1 = L_3;
		goto IL_005d;
	}

IL_002a:
	{
		// ref var op = ref _delayedOps[i];
		DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* L_4 = __this->get__delayedOps_5();
		int32_t L_5 = V_0;
		V_2 = (DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 *)((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)));
		// if (op.IsAdd) {
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_6 = V_2;
		bool L_7 = L_6->get_IsAdd_0();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// OnAddEntity (op.Entity);
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_8 = V_2;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_9 = L_8->get_address_of_Entity_1();
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_9);
		// } else {
		goto IL_0059;
	}

IL_004d:
	{
		// OnRemoveEntity (op.Entity);
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_10 = V_2;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_11 = L_10->get_address_of_Entity_1();
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_11);
	}

IL_0059:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
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
		__this->set__delayedOpsCount_6(0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leopotam.Ecs.EcsSystems::.ctor(Leopotam.Ecs.EcsWorld,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems__ctor_m3CE03D7D087AA88356B352D0473CFE80449066A4 (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___world0, String_t* ___name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD04C8FED0F2AE94C346BA1748DE87334690C0328_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_m827FB78D21F068F7A7EBF735CD0244EBA96AE024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_mFCCC1AE5CE009E261FC90917B1A48336C0FF5374_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly EcsGrowList<IEcsSystem> _allSystems = new EcsGrowList<IEcsSystem> (64);
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_0 = (EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 *)il2cpp_codegen_object_new(EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_mFCCC1AE5CE009E261FC90917B1A48336C0FF5374_inline(L_0, ((int32_t)64), /*hidden argument*/EcsGrowList_1__ctor_mFCCC1AE5CE009E261FC90917B1A48336C0FF5374_RuntimeMethod_var);
		__this->set__allSystems_2(L_0);
		// readonly EcsGrowList<EcsSystemsRunItem> _runSystems = new EcsGrowList<EcsSystemsRunItem> (64);
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_1 = (EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F *)il2cpp_codegen_object_new(EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m827FB78D21F068F7A7EBF735CD0244EBA96AE024_inline(L_1, ((int32_t)64), /*hidden argument*/EcsGrowList_1__ctor_m827FB78D21F068F7A7EBF735CD0244EBA96AE024_RuntimeMethod_var);
		__this->set__runSystems_3(L_1);
		// readonly Dictionary<int, int> _namedRunSystems = new Dictionary<int, int> (64);
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_2 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)il2cpp_codegen_object_new(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88(L_2, ((int32_t)64), /*hidden argument*/Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_RuntimeMethod_var);
		__this->set__namedRunSystems_4(L_2);
		// readonly Dictionary<Type, object> _injections = new Dictionary<Type, object> (32);
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_3 = (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *)il2cpp_codegen_object_new(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD04C8FED0F2AE94C346BA1748DE87334690C0328(L_3, ((int32_t)32), /*hidden argument*/Dictionary_2__ctor_mD04C8FED0F2AE94C346BA1748DE87334690C0328_RuntimeMethod_var);
		__this->set__injections_5(L_3);
		// public EcsSystems (EcsWorld world, string name = null) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// World = world;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_4 = ___world0;
		__this->set_World_1(L_4);
		// Name = name;
		String_t* L_5 = ___name1;
		__this->set_Name_0(L_5);
		// }
		return;
	}
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::Add(Leopotam.Ecs.IEcsSystem,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * EcsSystems_Add_m1D403F6627F21E4168841CED6358DAD6560AE5B0 (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, RuntimeObject* ___system0, String_t* ___namedRunSystem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m12B9D29385B73808601D74AD2BC463D1F2C962F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m63C1D2731DCB0120F887DA9D85DAB6ECF07A2D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * V_0 = NULL;
	{
		// _allSystems.Add (system);
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_0 = __this->get__allSystems_2();
		RuntimeObject* L_1 = ___system0;
		EcsGrowList_1_Add_m63C1D2731DCB0120F887DA9D85DAB6ECF07A2D65_inline(L_0, L_1, /*hidden argument*/EcsGrowList_1_Add_m63C1D2731DCB0120F887DA9D85DAB6ECF07A2D65_RuntimeMethod_var);
		// if (system is IEcsRunSystem) {
		RuntimeObject* L_2 = ___system0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328_il2cpp_TypeInfo_var)))
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
		V_0 = ((EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 *)IsInstSealed((RuntimeObject*)L_4, EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639_il2cpp_TypeInfo_var));
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// namedRunSystem = ecsSystems.Name;
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_6 = V_0;
		String_t* L_7 = L_6->get_Name_0();
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
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_9 = __this->get__namedRunSystems_4();
		String_t* L_10 = ___namedRunSystem1;
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_12 = __this->get__runSystems_3();
		int32_t L_13 = L_12->get_Count_1();
		Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1(L_9, L_11, L_13, /*hidden argument*/Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_RuntimeMethod_var);
	}

IL_0048:
	{
		// _runSystems.Add (new EcsSystemsRunItem { Active = true, System = (IEcsRunSystem) system });
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_14 = __this->get__runSystems_3();
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_15 = (EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C *)il2cpp_codegen_object_new(EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C_il2cpp_TypeInfo_var);
		EcsSystemsRunItem__ctor_m5846EA79A00CF9DB479DB3B43ED8BF75574A0152(L_15, /*hidden argument*/NULL);
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_16 = L_15;
		L_16->set_Active_0((bool)1);
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_17 = L_16;
		RuntimeObject* L_18 = ___system0;
		L_17->set_System_1(((RuntimeObject*)Castclass((RuntimeObject*)L_18, IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328_il2cpp_TypeInfo_var)));
		EcsGrowList_1_Add_m12B9D29385B73808601D74AD2BC463D1F2C962F9_inline(L_14, L_17, /*hidden argument*/EcsGrowList_1_Add_m12B9D29385B73808601D74AD2BC463D1F2C962F9_RuntimeMethod_var);
	}

IL_006b:
	{
		// return this;
		return __this;
	}
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::Inject(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * EcsSystems_Inject_mDB2C8962A0F764B113EE74E30C16531B39B67849 (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, RuntimeObject * ___obj0, Type_t * ___overridenType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (overridenType == null) {
		Type_t * L_0 = ___overridenType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// overridenType = obj.GetType ();
		RuntimeObject * L_2 = ___obj0;
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		___overridenType1 = L_3;
	}

IL_0011:
	{
		// _injections[overridenType] = obj;
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_4 = __this->get__injections_5();
		Type_t * L_5 = ___overridenType1;
		RuntimeObject * L_6 = ___obj0;
		Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4(L_4, L_5, L_6, /*hidden argument*/Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::ProcessInjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * EcsSystems_ProcessInjects_mB32C8893B8E2B0AE75AE6743D52138BDE3615E0B (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * V_2 = NULL;
	Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF  V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (!_injected) {
		bool L_0 = __this->get__injected_6();
		if (L_0)
		{
			goto IL_00b6;
		}
	}
	{
		// _injected = true;
		__this->set__injected_6((bool)1);
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_1 = __this->get__allSystems_2();
		int32_t L_2 = L_1->get_Count_1();
		V_1 = L_2;
		goto IL_00af;
	}

IL_0025:
	{
		// if (_allSystems.Items[i] is EcsSystems nestedSystems) {
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_3 = __this->get__allSystems_2();
		IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* L_4 = L_3->get_Items_0();
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = ((EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 *)IsInstSealed((RuntimeObject*)L_7, EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639_il2cpp_TypeInfo_var));
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_8 = V_2;
		if (!L_8)
		{
			goto IL_008d;
		}
	}
	{
		// foreach (var pair in _injections) {
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_9 = __this->get__injections_5();
		Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF  L_10;
		L_10 = Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE(L_9, /*hidden argument*/Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE_RuntimeMethod_var);
		V_3 = L_10;
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006b;
		}

IL_0049:
		{
			// foreach (var pair in _injections) {
			KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  L_11;
			L_11 = Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_inline((Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *)(&V_3), /*hidden argument*/Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_RuntimeMethod_var);
			V_4 = L_11;
			// nestedSystems._injections[pair.Key] = pair.Value;
			EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_12 = V_2;
			Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_13 = L_12->get__injections_5();
			Type_t * L_14;
			L_14 = KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_inline((KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var);
			RuntimeObject * L_15;
			L_15 = KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_inline((KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_RuntimeMethod_var);
			Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4_RuntimeMethod_var);
		}

IL_006b:
		{
			// foreach (var pair in _injections) {
			bool L_16;
			L_16 = Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985((Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_0049;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x84, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515((Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *)(&V_3), /*hidden argument*/Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515_RuntimeMethod_var);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x84, IL_0084)
	}

IL_0084:
	{
		// nestedSystems.ProcessInjects ();
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_17 = V_2;
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_18;
		L_18 = EcsSystems_ProcessInjects_mB32C8893B8E2B0AE75AE6743D52138BDE3615E0B(L_17, /*hidden argument*/NULL);
		// } else {
		goto IL_00ab;
	}

IL_008d:
	{
		// InjectDataToSystem (_allSystems.Items[i], World, _injections);
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_19 = __this->get__allSystems_2();
		IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* L_20 = L_19->get_Items_0();
		int32_t L_21 = V_0;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_24 = __this->get_World_1();
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_25 = __this->get__injections_5();
		EcsSystems_InjectDataToSystem_mE5A6FB3F02C51C77598C116498AEBE067F610688(L_23, L_24, L_25, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Init_mBBE3BC3106291DE2CD50F401210E492280FD4879 (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsInitSystem_t1D76655B71D3C0E3CA20AFCACA67747DCB0B4EF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPreInitSystem_t347F7B1C6BAB7A50913208313A897706A93A8294_il2cpp_TypeInfo_var);
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
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_0;
		L_0 = EcsSystems_ProcessInjects_mB32C8893B8E2B0AE75AE6743D52138BDE3615E0B(__this, /*hidden argument*/NULL);
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_1 = __this->get__allSystems_2();
		int32_t L_2 = L_1->get_Count_1();
		V_1 = L_2;
		goto IL_0037;
	}

IL_0017:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_3 = __this->get__allSystems_2();
		IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* L_4 = L_3->get_Items_0();
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		// if (system is IEcsPreInitSystem preInitSystem) {
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IEcsPreInitSystem_t347F7B1C6BAB7A50913208313A897706A93A8294_il2cpp_TypeInfo_var));
		RuntimeObject* L_8 = V_2;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		// preInitSystem.PreInit ();
		RuntimeObject* L_9 = V_2;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsPreInitSystem::PreInit() */, IEcsPreInitSystem_t347F7B1C6BAB7A50913208313A897706A93A8294_il2cpp_TypeInfo_var, L_9);
	}

IL_0033:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
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
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_13 = __this->get__allSystems_2();
		int32_t L_14 = L_13->get_Count_1();
		V_4 = L_14;
		goto IL_006f;
	}

IL_004c:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_15 = __this->get__allSystems_2();
		IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* L_16 = L_15->get_Items_0();
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		// if (system is IEcsInitSystem initSystem) {
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEcsInitSystem_t1D76655B71D3C0E3CA20AFCACA67747DCB0B4EF6_il2cpp_TypeInfo_var));
		RuntimeObject* L_20 = V_5;
		if (!L_20)
		{
			goto IL_006b;
		}
	}
	{
		// initSystem.Init ();
		RuntimeObject* L_21 = V_5;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsInitSystem::Init() */, IEcsInitSystem_t1D76655B71D3C0E3CA20AFCACA67747DCB0B4EF6_il2cpp_TypeInfo_var, L_21);
	}

IL_006b:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Run_mE471860F775B875F25F462737C5FEB5563458666 (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * V_2 = NULL;
	{
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_0 = __this->get__runSystems_3();
		int32_t L_1 = L_0->get_Count_1();
		V_1 = L_1;
		goto IL_0035;
	}

IL_0010:
	{
		// var runItem = _runSystems.Items[i];
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_2 = __this->get__runSystems_3();
		EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7* L_3 = L_2->get_Items_0();
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (runItem.Active) {
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_7 = V_2;
		bool L_8 = L_7->get_Active_0();
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		// runItem.System.Run ();
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_9 = V_2;
		RuntimeObject* L_10 = L_9->get_System_1();
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsRunSystem::Run() */, IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328_il2cpp_TypeInfo_var, L_10);
	}

IL_0031:
	{
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Destroy_mBF2CB72BCAA487DF99C431A7945E78C22E6E328E (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsDestroySystem_t9B4866CBA342A0BEAA4FABF60776407862E35C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPostDestroySystem_t4AA43503D6D25CE3DFB88747E9A374F929CBE40D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_0 = __this->get__allSystems_2();
		int32_t L_1 = L_0->get_Count_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0030;
	}

IL_0010:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_2 = __this->get__allSystems_2();
		IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* L_3 = L_2->get_Items_0();
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		// if (system is IEcsDestroySystem destroySystem) {
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IEcsDestroySystem_t9B4866CBA342A0BEAA4FABF60776407862E35C70_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		// destroySystem.Destroy ();
		RuntimeObject* L_8 = V_1;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsDestroySystem::Destroy() */, IEcsDestroySystem_t9B4866CBA342A0BEAA4FABF60776407862E35C70_il2cpp_TypeInfo_var, L_8);
	}

IL_002c:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
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
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_11 = __this->get__allSystems_2();
		int32_t L_12 = L_11->get_Count_1();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		goto IL_0064;
	}

IL_0044:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_13 = __this->get__allSystems_2();
		IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* L_14 = L_13->get_Items_0();
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		// if (system is IEcsPostDestroySystem postDestroySystem) {
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IEcsPostDestroySystem_t4AA43503D6D25CE3DFB88747E9A374F929CBE40D_il2cpp_TypeInfo_var));
		RuntimeObject* L_18 = V_3;
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		// postDestroySystem.PostDestroy ();
		RuntimeObject* L_19 = V_3;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsPostDestroySystem::PostDestroy() */, IEcsPostDestroySystem_t4AA43503D6D25CE3DFB88747E9A374F929CBE40D_il2cpp_TypeInfo_var, L_19);
	}

IL_0060:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_InjectDataToSystem_mE5A6FB3F02C51C77598C116498AEBE067F610688 (RuntimeObject* ___system0, EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___world1, Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * ___injections2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsIgnoreInjectAttribute_t4A01E296BA2C15FFD024CF2D26858BBE98616068_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_3 = NULL;
	int32_t V_4 = 0;
	FieldInfo_t * V_5 = NULL;
	Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF  V_6;
	memset((&V_6), 0, sizeof(V_6));
	KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var systemType = system.GetType ();
		RuntimeObject* L_0 = ___system0;
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		// var worldType = world.GetType ();
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_2 = ___world1;
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// var filterType = typeof (EcsFilter);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// var ignoreType = typeof (EcsIgnoreInjectAttribute);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (EcsIgnoreInjectAttribute_t4A01E296BA2C15FFD024CF2D26858BBE98616068_0_0_0_var) };
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// foreach (var f in systemType.GetFields (BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)) {
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_8;
		L_8 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(43 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_1, ((int32_t)52));
		V_3 = L_8;
		V_4 = 0;
		goto IL_00eb;
	}

IL_0033:
	{
		// foreach (var f in systemType.GetFields (BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)) {
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_9 = V_3;
		int32_t L_10 = V_4;
		int32_t L_11 = L_10;
		FieldInfo_t * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_5 = L_12;
		// if (f.IsStatic || Attribute.IsDefined (f, ignoreType)) {
		FieldInfo_t * L_13 = V_5;
		bool L_14;
		L_14 = FieldInfo_get_IsStatic_mE36F3A5B2DFF613C704AA56989D90D72760391EB(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00e5;
		}
	}
	{
		FieldInfo_t * L_15 = V_5;
		Type_t * L_16 = V_2;
		bool L_17;
		L_17 = Attribute_IsDefined_mD3B7688B216A0B4EBD238B82E9E8DA0E0E9308CB(L_15, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00e5;
		}
	}
	{
		// if (f.FieldType.IsAssignableFrom (worldType)) {
		FieldInfo_t * L_18 = V_5;
		Type_t * L_19;
		L_19 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_18);
		Type_t * L_20 = V_0;
		bool L_21;
		L_21 = VirtFuncInvoker1< bool, Type_t * >::Invoke(105 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_19, L_20);
		if (!L_21)
		{
			goto IL_006c;
		}
	}
	{
		// f.SetValue (system, world);
		FieldInfo_t * L_22 = V_5;
		RuntimeObject* L_23 = ___system0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_24 = ___world1;
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_22, L_23, L_24, /*hidden argument*/NULL);
		// continue;
		goto IL_00e5;
	}

IL_006c:
	{
		// if (f.FieldType.IsSubclassOf (filterType)) {
		FieldInfo_t * L_25 = V_5;
		Type_t * L_26;
		L_26 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_25);
		Type_t * L_27 = V_1;
		bool L_28;
		L_28 = VirtFuncInvoker1< bool, Type_t * >::Invoke(103 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_26, L_27);
		if (!L_28)
		{
			goto IL_0093;
		}
	}
	{
		// f.SetValue (system, world.GetFilter (f.FieldType));
		FieldInfo_t * L_29 = V_5;
		RuntimeObject* L_30 = ___system0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_31 = ___world1;
		FieldInfo_t * L_32 = V_5;
		Type_t * L_33;
		L_33 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_32);
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_34;
		L_34 = EcsWorld_GetFilter_mEF71896EFA460F0F991728F27D3A0CC49EB3C4C3(L_31, L_33, (bool)1, /*hidden argument*/NULL);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_29, L_30, L_34, /*hidden argument*/NULL);
		// continue;
		goto IL_00e5;
	}

IL_0093:
	{
		// foreach (var pair in injections) {
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_35 = ___injections2;
		Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF  L_36;
		L_36 = Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE(L_35, /*hidden argument*/Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE_RuntimeMethod_var);
		V_6 = L_36;
	}

IL_009b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00cc;
		}

IL_009d:
		{
			// foreach (var pair in injections) {
			KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  L_37;
			L_37 = Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_inline((Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *)(&V_6), /*hidden argument*/Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_RuntimeMethod_var);
			V_7 = L_37;
			// if (f.FieldType.IsAssignableFrom (pair.Key)) {
			FieldInfo_t * L_38 = V_5;
			Type_t * L_39;
			L_39 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_38);
			Type_t * L_40;
			L_40 = KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_inline((KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var);
			bool L_41;
			L_41 = VirtFuncInvoker1< bool, Type_t * >::Invoke(105 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_39, L_40);
			if (!L_41)
			{
				goto IL_00cc;
			}
		}

IL_00bb:
		{
			// f.SetValue (system, pair.Value);
			FieldInfo_t * L_42 = V_5;
			RuntimeObject* L_43 = ___system0;
			RuntimeObject * L_44;
			L_44 = KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_inline((KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_RuntimeMethod_var);
			FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_42, L_43, L_44, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0xE5, FINALLY_00d7);
		}

IL_00cc:
		{
			// foreach (var pair in injections) {
			bool L_45;
			L_45 = Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985((Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *)(&V_6), /*hidden argument*/Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985_RuntimeMethod_var);
			if (L_45)
			{
				goto IL_009d;
			}
		}

IL_00d5:
		{
			IL2CPP_LEAVE(0xE5, FINALLY_00d7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d7;
	}

FINALLY_00d7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515((Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *)(&V_6), /*hidden argument*/Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515_RuntimeMethod_var);
		IL2CPP_END_FINALLY(215)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(215)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE5, IL_00e5)
	}

IL_00e5:
	{
		int32_t L_46 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00eb:
	{
		// foreach (var f in systemType.GetFields (BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)) {
		int32_t L_47 = V_4;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_48 = V_3;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystemsRunItem__ctor_m5846EA79A00CF9DB479DB3B43ED8BF75574A0152 (EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * __this, const RuntimeMethod* method)
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
// System.Void Leopotam.Ecs.EcsWorld::.ctor(Leopotam.Ecs.EcsWorldConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld__ctor_m2BE24B6963818E96F65759EF11C7BD584084DB6F (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B2_0 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B3_1 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B5_0 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B6_1 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B8_0 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B9_1 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B11_0 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B12_1 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B14_0 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B15_1 = NULL;
	{
		// public EcsWorld (EcsWorldConfig config = default) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
		il2cpp_codegen_initobj((&V_1), sizeof(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A ));
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_0 = ___config0;
		int32_t L_1 = L_0.get_EntityComponentsCacheSize_3();
		G_B1_0 = (&V_1);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			G_B2_0 = (&V_1);
			goto IL_0021;
		}
	}
	{
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_2 = ___config0;
		int32_t L_3 = L_2.get_EntityComponentsCacheSize_3();
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
		G_B3_1->set_EntityComponentsCacheSize_3(G_B3_0);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_4 = ___config0;
		int32_t L_5 = L_4.get_FilterEntitiesCacheSize_4();
		G_B4_0 = (&V_1);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			G_B5_0 = (&V_1);
			goto IL_003a;
		}
	}
	{
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_6 = ___config0;
		int32_t L_7 = L_6.get_FilterEntitiesCacheSize_4();
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
		G_B6_1->set_FilterEntitiesCacheSize_4(G_B6_0);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_8 = ___config0;
		int32_t L_9 = L_8.get_WorldEntitiesCacheSize_0();
		G_B7_0 = (&V_1);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			G_B8_0 = (&V_1);
			goto IL_0057;
		}
	}
	{
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_10 = ___config0;
		int32_t L_11 = L_10.get_WorldEntitiesCacheSize_0();
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
		G_B9_1->set_WorldEntitiesCacheSize_0(G_B9_0);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_12 = ___config0;
		int32_t L_13 = L_12.get_WorldFiltersCacheSize_1();
		G_B10_0 = (&V_1);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			G_B11_0 = (&V_1);
			goto IL_0074;
		}
	}
	{
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_14 = ___config0;
		int32_t L_15 = L_14.get_WorldFiltersCacheSize_1();
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
		G_B12_1->set_WorldFiltersCacheSize_1(G_B12_0);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_16 = ___config0;
		int32_t L_17 = L_16.get_WorldComponentPoolsCacheSize_2();
		G_B13_0 = (&V_1);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			G_B14_0 = (&V_1);
			goto IL_0091;
		}
	}
	{
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_18 = ___config0;
		int32_t L_19 = L_18.get_WorldComponentPoolsCacheSize_2();
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
		G_B15_1->set_WorldComponentPoolsCacheSize_2(G_B15_0);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_20 = V_1;
		V_0 = L_20;
		// Config = finalConfig;
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_21 = V_0;
		__this->set_Config_7(L_21);
		// Entities = new EcsEntityData[Config.WorldEntitiesCacheSize];
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_22 = __this->get_address_of_Config_7();
		int32_t L_23 = L_22->get_WorldEntitiesCacheSize_0();
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_24 = (EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8*)(EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8*)SZArrayNew(EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8_il2cpp_TypeInfo_var, (uint32_t)L_23);
		__this->set_Entities_0(L_24);
		// FreeEntities = new EcsGrowList<int> (Config.WorldEntitiesCacheSize);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_25 = __this->get_address_of_Config_7();
		int32_t L_26 = L_25->get_WorldEntitiesCacheSize_0();
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_27 = (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A *)il2cpp_codegen_object_new(EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_inline(L_27, L_26, /*hidden argument*/EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_RuntimeMethod_var);
		__this->set_FreeEntities_2(L_27);
		// Filters = new EcsGrowList<EcsFilter> (Config.WorldFiltersCacheSize);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_28 = __this->get_address_of_Config_7();
		int32_t L_29 = L_28->get_WorldFiltersCacheSize_1();
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_30 = (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 *)il2cpp_codegen_object_new(EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_inline(L_30, L_29, /*hidden argument*/EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_RuntimeMethod_var);
		__this->set_Filters_3(L_30);
		// FilterByIncludedComponents = new Dictionary<int, EcsGrowList<EcsFilter>> (Config.WorldFiltersCacheSize);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_31 = __this->get_address_of_Config_7();
		int32_t L_32 = L_31->get_WorldFiltersCacheSize_1();
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_33 = (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 *)il2cpp_codegen_object_new(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35(L_33, L_32, /*hidden argument*/Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35_RuntimeMethod_var);
		__this->set_FilterByIncludedComponents_4(L_33);
		// FilterByExcludedComponents = new Dictionary<int, EcsGrowList<EcsFilter>> (Config.WorldFiltersCacheSize);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_34 = __this->get_address_of_Config_7();
		int32_t L_35 = L_34->get_WorldFiltersCacheSize_1();
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_36 = (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 *)il2cpp_codegen_object_new(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35(L_36, L_35, /*hidden argument*/Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35_RuntimeMethod_var);
		__this->set_FilterByExcludedComponents_5(L_36);
		// ComponentPools = new IEcsComponentPool[Config.WorldComponentPoolsCacheSize];
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_37 = __this->get_address_of_Config_7();
		int32_t L_38 = L_37->get_WorldComponentPoolsCacheSize_2();
		IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* L_39 = (IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1*)(IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1*)SZArrayNew(IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1_il2cpp_TypeInfo_var, (uint32_t)L_38);
		__this->set_ComponentPools_9(L_39);
		// _filterCtor = new object[] { this };
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41 = L_40;
		ArrayElementTypeCheck (L_41, __this);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		__this->set__filterCtor_8(L_41);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_Destroy_m2C0414D8905D963ECED938FE60827053C11F5EFD (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method)
{
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// entity.Owner = this;
		(&V_0)->set_Owner_2(__this);
		// for (var i = EntitiesCount - 1; i >= 0; i--) {
		int32_t L_0 = __this->get_EntitiesCount_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		goto IL_0049;
	}

IL_0013:
	{
		// ref var entityData = ref Entities[i];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_1 = __this->get_Entities_0();
		int32_t L_2 = V_1;
		V_2 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)));
		// if (entityData.ComponentsCountX2 > 0) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_3 = V_2;
		int16_t L_4 = L_3->get_ComponentsCountX2_1();
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		// entity.Id = i;
		int32_t L_5 = V_1;
		(&V_0)->set_Id_0(L_5);
		// entity.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_6 = V_2;
		uint16_t L_7 = L_6->get_Gen_0();
		(&V_0)->set_Gen_1(L_7);
		// entity.Destroy ();
		EcsEntityExtensions_Destroy_mC0A71595D1F8B6E285FB9D74D32FE24C5EB0B9E6_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(&V_0), /*hidden argument*/NULL);
	}

IL_0045:
	{
		// for (var i = EntitiesCount - 1; i >= 0; i--) {
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
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
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_10 = __this->get_Filters_3();
		int32_t L_11 = L_10->get_Count_1();
		V_4 = L_11;
		goto IL_0074;
	}

IL_005e:
	{
		// Filters.Items[i].Destroy ();
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_12 = __this->get_Filters_3();
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_13 = L_12->get_Items_0();
		int32_t L_14 = V_3;
		int32_t L_15 = L_14;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		VirtActionInvoker0::Invoke(4 /* System.Void Leopotam.Ecs.EcsFilter::Destroy() */, L_16);
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
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
		__this->set_IsDestroyed_10((bool)1);
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsWorld::IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_mA6EC771EB7E874E662369960BF81F2F1065BEA08 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method)
{
	{
		// return !IsDestroyed;
		bool L_0 = __this->get_IsDestroyed_10();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsWorld::NewEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  EcsWorld_NewEntity_m29529BC3FE9DB5E528E292C8307473751D1FE38D (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_1 = NULL;
	int32_t V_2 = 0;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_3 = NULL;
	{
		// entity.Owner = this;
		(&V_0)->set_Owner_2(__this);
		// if (FreeEntities.Count > 0) {
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_0 = __this->get_FreeEntities_2();
		int32_t L_1 = L_0->get_Count_1();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		// entity.Id = FreeEntities.Items[--FreeEntities.Count];
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_2 = __this->get_FreeEntities_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = L_2->get_Items_0();
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_4 = __this->get_FreeEntities_2();
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_5 = L_4;
		int32_t L_6 = L_5->get_Count_1();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		int32_t L_7 = V_2;
		L_5->set_Count_1(L_7);
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		(&V_0)->set_Id_0(L_10);
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_11 = __this->get_Entities_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_12 = V_0;
		int32_t L_13 = L_12.get_Id_0();
		V_1 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)));
		// entity.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_14 = V_1;
		uint16_t L_15 = L_14->get_Gen_0();
		(&V_0)->set_Gen_1(L_15);
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_16 = V_1;
		L_16->set_ComponentsCountX2_1((int16_t)0);
		// } else {
		goto IL_00ea;
	}

IL_006a:
	{
		// if (EntitiesCount == Entities.Length) {
		int32_t L_17 = __this->get_EntitiesCount_1();
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_18 = __this->get_Entities_0();
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))))
		{
			goto IL_008d;
		}
	}
	{
		// Array.Resize (ref Entities, EntitiesCount << 1);
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8** L_19 = __this->get_address_of_Entities_0();
		int32_t L_20 = __this->get_EntitiesCount_1();
		Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14((EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8**)L_19, ((int32_t)((int32_t)L_20<<(int32_t)1)), /*hidden argument*/Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_RuntimeMethod_var);
	}

IL_008d:
	{
		// entity.Id = EntitiesCount++;
		int32_t L_21 = __this->get_EntitiesCount_1();
		V_2 = L_21;
		int32_t L_22 = V_2;
		__this->set_EntitiesCount_1(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		int32_t L_23 = V_2;
		(&V_0)->set_Id_0(L_23);
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_24 = __this->get_Entities_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_25 = V_0;
		int32_t L_26 = L_25.get_Id_0();
		V_3 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)));
		// entityData.Components = new int[Config.EntityComponentsCacheSize * 2];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_27 = V_3;
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_28 = __this->get_address_of_Config_7();
		int32_t L_29 = L_28->get_EntityComponentsCacheSize_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)2)));
		L_27->set_Components_2(L_30);
		// entityData.Gen = 1;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_31 = V_3;
		L_31->set_Gen_0((uint16_t)1);
		// entity.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_32 = V_3;
		uint16_t L_33 = L_32->get_Gen_0();
		(&V_0)->set_Gen_1(L_33);
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_34 = V_3;
		L_34->set_ComponentsCountX2_1((int16_t)0);
	}

IL_00ea:
	{
		// return entity;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_35 = V_0;
		return L_35;
	}
}
// Leopotam.Ecs.EcsFilter Leopotam.Ecs.EcsWorld::GetFilter(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * EcsWorld_GetFilter_mEF71896EFA460F0F991728F27D3A0CC49EB3C4C3 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, Type_t * ___filterType0, bool ___createIfNotExists1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * V_0 = NULL;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_12 = NULL;
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_0 = __this->get_Filters_3();
		int32_t L_1 = L_0->get_Count_1();
		V_3 = L_1;
		goto IL_003c;
	}

IL_0010:
	{
		// if (Filters.Items[i].GetType () == filterType) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_2 = __this->get_Filters_3();
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_3 = L_2->get_Items_0();
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Type_t * L_7;
		L_7 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_6, /*hidden argument*/NULL);
		Type_t * L_8 = ___filterType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		// return Filters.Items[i];
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_10 = __this->get_Filters_3();
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_11 = L_10->get_Items_0();
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		return L_14;
	}

IL_0038:
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
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
		return (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 *)NULL;
	}

IL_0045:
	{
		// var filter = (EcsFilter) Activator.CreateInstance (filterType, BindingFlags.NonPublic | BindingFlags.Instance, null, _filterCtor, CultureInfo.InvariantCulture);
		Type_t * L_19 = ___filterType0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = __this->get__filterCtor_8();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_21;
		L_21 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		RuntimeObject * L_22;
		L_22 = Activator_CreateInstance_mBA776E4823B408DC61E91344D8CF20861F03B8A6(L_19, ((int32_t)36), (Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 *)NULL, L_20, L_21, /*hidden argument*/NULL);
		V_0 = ((EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 *)CastclassClass((RuntimeObject*)L_22, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_il2cpp_TypeInfo_var));
		// Filters.Add (filter);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_23 = __this->get_Filters_3();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_24 = V_0;
		EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_inline(L_23, L_24, /*hidden argument*/EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_RuntimeMethod_var);
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		V_4 = 0;
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_25 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = L_25->get_IncludedTypeIndices_7();
		V_5 = ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)));
		goto IL_00be;
	}

IL_007a:
	{
		// if (!FilterByIncludedComponents.TryGetValue (filter.IncludedTypeIndices[i], out var filtersList)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_27 = __this->get_FilterByIncludedComponents_4();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_28 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = L_28->get_IncludedTypeIndices_7();
		int32_t L_30 = V_4;
		int32_t L_31 = L_30;
		int32_t L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		bool L_33;
		L_33 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_27, L_32, (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_6), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		if (L_33)
		{
			goto IL_00b0;
		}
	}
	{
		// filtersList = new EcsGrowList<EcsFilter> (8);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_34 = (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 *)il2cpp_codegen_object_new(EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_inline(L_34, 8, /*hidden argument*/EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_RuntimeMethod_var);
		V_6 = L_34;
		// FilterByIncludedComponents[filter.IncludedTypeIndices[i]] = filtersList;
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_35 = __this->get_FilterByIncludedComponents_4();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_36 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = L_36->get_IncludedTypeIndices_7();
		int32_t L_38 = V_4;
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_41 = V_6;
		Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95(L_35, L_40, L_41, /*hidden argument*/Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95_RuntimeMethod_var);
	}

IL_00b0:
	{
		// filtersList.Add (filter);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_42 = V_6;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_43 = V_0;
		EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_inline(L_42, L_43, /*hidden argument*/EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_RuntimeMethod_var);
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
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
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_47 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = L_47->get_ExcludedTypeIndices_8();
		if (!L_48)
		{
			goto IL_0125;
		}
	}
	{
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		V_7 = 0;
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_49 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = L_49->get_ExcludedTypeIndices_8();
		V_8 = ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)));
		goto IL_011f;
	}

IL_00db:
	{
		// if (!FilterByExcludedComponents.TryGetValue (filter.ExcludedTypeIndices[i], out var filtersList)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_51 = __this->get_FilterByExcludedComponents_5();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_52 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = L_52->get_ExcludedTypeIndices_8();
		int32_t L_54 = V_7;
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		bool L_57;
		L_57 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_51, L_56, (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_9), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		if (L_57)
		{
			goto IL_0111;
		}
	}
	{
		// filtersList = new EcsGrowList<EcsFilter> (8);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_58 = (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 *)il2cpp_codegen_object_new(EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_inline(L_58, 8, /*hidden argument*/EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_RuntimeMethod_var);
		V_9 = L_58;
		// FilterByExcludedComponents[filter.ExcludedTypeIndices[i]] = filtersList;
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_59 = __this->get_FilterByExcludedComponents_5();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_60 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_61 = L_60->get_ExcludedTypeIndices_8();
		int32_t L_62 = V_7;
		int32_t L_63 = L_62;
		int32_t L_64 = (L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_65 = V_9;
		Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95(L_59, L_64, L_65, /*hidden argument*/Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95_RuntimeMethod_var);
	}

IL_0111:
	{
		// filtersList.Add (filter);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_66 = V_9;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_67 = V_0;
		EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_inline(L_66, L_67, /*hidden argument*/EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_RuntimeMethod_var);
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_68 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
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
		(&V_1)->set_Owner_2(__this);
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		V_10 = 0;
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_71 = __this->get_EntitiesCount_1();
		V_11 = L_71;
		goto IL_0183;
	}

IL_013a:
	{
		// ref var entityData = ref Entities[i];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_72 = __this->get_Entities_0();
		int32_t L_73 = V_10;
		V_12 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_72)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_73)));
		// if (entityData.ComponentsCountX2 > 0 && filter.IsCompatible (entityData, 0)) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_74 = V_12;
		int16_t L_75 = L_74->get_ComponentsCountX2_1();
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_017d;
		}
	}
	{
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_76 = V_0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_77 = V_12;
		bool L_78;
		L_78 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_76, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_77, 0, /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_017d;
		}
	}
	{
		// entity.Id = i;
		int32_t L_79 = V_10;
		(&V_1)->set_Id_0(L_79);
		// entity.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_80 = V_12;
		uint16_t L_81 = L_80->get_Gen_0();
		(&V_1)->set_Gen_1(L_81);
		// filter.OnAddEntity (entity);
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_82 = V_0;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_82, (&V_1));
	}

IL_017d:
	{
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_83 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
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
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_86 = V_0;
		return L_86;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::RecycleEntityData(System.Int32,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_RecycleEntityData_mD43B973684318F6A18A949CC46B8D8433F1B6B43 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, int32_t ___id0, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// entityData.ComponentsCountX2 = -2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_0 = ___entityData1;
		L_0->set_ComponentsCountX2_1((int16_t)((int32_t)-2));
		// entityData.Gen++;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_1 = ___entityData1;
		uint16_t* L_2 = L_1->get_address_of_Gen_0();
		uint16_t* L_3 = L_2;
		int32_t L_4 = *((uint16_t*)L_3);
		*((int16_t*)L_3) = (int16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))));
		// if (entityData.Gen == 0) { entityData.Gen = 1; }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_5 = ___entityData1;
		uint16_t L_6 = L_5->get_Gen_0();
		if (L_6)
		{
			goto IL_0023;
		}
	}
	{
		// if (entityData.Gen == 0) { entityData.Gen = 1; }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_7 = ___entityData1;
		L_7->set_Gen_0((uint16_t)1);
	}

IL_0023:
	{
		// FreeEntities.Add (id);
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_8 = __this->get_FreeEntities_2();
		int32_t L_9 = ___id0;
		EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_inline(L_8, L_9, /*hidden argument*/EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::UpdateFilters(System.Int32,Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, int32_t ___typeIdx0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity1, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * V_0 = NULL;
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
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_1 = __this->get_FilterByIncludedComponents_4();
		int32_t L_2 = ___typeIdx0;
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_1, ((-L_2)), (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_1 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_4 = V_0;
		int32_t L_5 = L_4->get_Count_1();
		V_2 = L_5;
		goto IL_0046;
	}

IL_0023:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_6 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_7 = L_6->get_Items_0();
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_11 = ___entityData2;
		bool L_12;
		L_12 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_10, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_11, 0, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_13 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_14 = L_13->get_Items_0();
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_18 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_17, L_18);
	}

IL_0042:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
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
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_22 = __this->get_FilterByExcludedComponents_5();
		int32_t L_23 = ___typeIdx0;
		bool L_24;
		L_24 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_22, ((-L_23)), (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_0128;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_3 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_25 = V_0;
		int32_t L_26 = L_25->get_Count_1();
		V_4 = L_26;
		goto IL_008d;
	}

IL_006a:
	{
		// if (filters.Items[i].IsCompatible (entityData, typeIdx)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_27 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_28 = L_27->get_Items_0();
		int32_t L_29 = V_3;
		int32_t L_30 = L_29;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_32 = ___entityData2;
		int32_t L_33 = ___typeIdx0;
		bool L_34;
		L_34 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_31, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_32, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0089;
		}
	}
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_35 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_36 = L_35->get_Items_0();
		int32_t L_37 = V_3;
		int32_t L_38 = L_37;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_40 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_39, L_40);
	}

IL_0089:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
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
		// } else {
		return;
	}

IL_0093:
	{
		// if (FilterByIncludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_44 = __this->get_FilterByIncludedComponents_4();
		int32_t L_45 = ___typeIdx0;
		bool L_46;
		L_46 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_44, L_45, (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		if (!L_46)
		{
			goto IL_00dd;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_5 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_47 = V_0;
		int32_t L_48 = L_47->get_Count_1();
		V_6 = L_48;
		goto IL_00d7;
	}

IL_00b0:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_49 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_50 = L_49->get_Items_0();
		int32_t L_51 = V_5;
		int32_t L_52 = L_51;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_53 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_54 = ___entityData2;
		bool L_55;
		L_55 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_53, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_54, 0, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_00d1;
		}
	}
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_56 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_57 = L_56->get_Items_0();
		int32_t L_58 = V_5;
		int32_t L_59 = L_58;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_60 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_61 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_60, L_61);
	}

IL_00d1:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_62 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
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
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_65 = __this->get_FilterByExcludedComponents_5();
		int32_t L_66 = ___typeIdx0;
		bool L_67;
		L_67 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_65, L_66, (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		if (!L_67)
		{
			goto IL_0128;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_7 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_68 = V_0;
		int32_t L_69 = L_68->get_Count_1();
		V_8 = L_69;
		goto IL_0122;
	}

IL_00fa:
	{
		// if (filters.Items[i].IsCompatible (entityData, -typeIdx)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_70 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_71 = L_70->get_Items_0();
		int32_t L_72 = V_7;
		int32_t L_73 = L_72;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_74 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_75 = ___entityData2;
		int32_t L_76 = ___typeIdx0;
		bool L_77;
		L_77 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_74, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_75, ((-L_76)), /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_011c;
		}
	}
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_78 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_79 = L_78->get_Items_0();
		int32_t L_80 = V_7;
		int32_t L_81 = L_80;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_83 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_82, L_83);
	}

IL_011c:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_84 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	{
		// return ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_0 = __this->get_Entities_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_1 = ___entity0;
		int32_t L_2 = L_1->get_Id_0();
		return (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)(((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2))));
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m3ACA34058501343164110D0E44C61F10AFD60684 (EmbeddedAttribute_t7C31CBFB035DA412880D90BEFBFE980E92E7B12C * __this, const RuntimeMethod* method)
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
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Option(Unity.IL2CPP.CompilerServices.Option)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m9BE90B21512D8A7424CCD9EDA3AB81A5DDC688F5 (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3COptionU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Value(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_mD5CAA39F97C19D1B1D2BCA508F564F788D32D824 (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object Value { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::.ctor(Unity.IL2CPP.CompilerServices.Option,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute__ctor_m0C07BFA9197DB4A0D12251E2A8D11039076BE8DD (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, int32_t ___option0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		int32_t L_0 = ___option0;
		Il2CppSetOptionAttribute_set_Option_m9BE90B21512D8A7424CCD9EDA3AB81A5DDC688F5_inline(__this, L_0, /*hidden argument*/NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		RuntimeObject * L_1 = ___value1;
		Il2CppSetOptionAttribute_set_Value_mD5CAA39F97C19D1B1D2BCA508F564F788D32D824_inline(__this, L_1, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Voody.UniLeo.InstantiateComponent
IL2CPP_EXTERN_C void InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshal_pinvoke(const InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28& unmarshaled, InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshaled_pinvoke& marshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'InstantiateComponent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshal_pinvoke_back(const InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshaled_pinvoke& marshaled, InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28& unmarshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'InstantiateComponent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Voody.UniLeo.InstantiateComponent
IL2CPP_EXTERN_C void InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshal_pinvoke_cleanup(InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Voody.UniLeo.InstantiateComponent
IL2CPP_EXTERN_C void InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshal_com(const InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28& unmarshaled, InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshaled_com& marshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'InstantiateComponent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshal_com_back(const InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshaled_com& marshaled, InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28& unmarshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'InstantiateComponent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Voody.UniLeo.InstantiateComponent
IL2CPP_EXTERN_C void InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshal_com_cleanup(InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_marshaled_com& marshaled)
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m6DC4CD42BAC27F74B4C0237DFE134345762401D4 (IsReadOnlyAttribute_t3188C6BF743FDB986678BFFC5F540708B12FBFD2 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Leopotam.Ecs.EcsWorld Voody.UniLeo.WorldHandler::GetWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * WorldHandler_GetWorld_m61D22E99F69D4FE4CCAFF0BBB9857CA34787D416 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldHandler_tD82490B8EE20D8CC5FD4AAA7F2216460819AA8D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return world;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_0 = ((WorldHandler_tD82490B8EE20D8CC5FD4AAA7F2216460819AA8D3_StaticFields*)il2cpp_codegen_static_fields_for(WorldHandler_tD82490B8EE20D8CC5FD4AAA7F2216460819AA8D3_il2cpp_TypeInfo_var))->get_world_0();
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


// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshal_pinvoke(const DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812& unmarshaled, DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
IL2CPP_EXTERN_C void DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshal_pinvoke_back(const DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_pinvoke& marshaled, DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812& unmarshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshal_pinvoke_cleanup(DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshal_com(const DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812& unmarshaled, DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_com& marshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
IL2CPP_EXTERN_C void DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshal_com_back(const DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_com& marshaled, DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812& unmarshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshal_com_cleanup(DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshal_pinvoke(const Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C& unmarshaled, Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_pinvoke& marshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshal_pinvoke_back(const Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_pinvoke& marshaled, Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C& unmarshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshal_pinvoke_cleanup(Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshal_com(const Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C& unmarshaled, Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_com& marshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshal_com_back(const Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_com& marshaled, Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C& unmarshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshal_com_cleanup(Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_com& marshaled)
{
}
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::.ctor(Leopotam.Ecs.EcsFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m24FEE0FF13998645F3FCE9773D76DEB6596F919D (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ___filter0, const RuntimeMethod* method)
{
	{
		// _filter = filter;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_0 = ___filter0;
		__this->set__filter_0(L_0);
		// _count = _filter.GetEntitiesCount ();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_1 = __this->get__filter_0();
		int32_t L_2;
		L_2 = EcsFilter_GetEntitiesCount_mF2966ADF6E5F72ED882840EE4E3B18E98DF480A7_inline(L_1, /*hidden argument*/NULL);
		__this->set__count_1(L_2);
		// _idx = -1;
		__this->set__idx_2((-1));
		// _filter.Lock ();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_3 = __this->get__filter_0();
		EcsFilter_Lock_m62CDA8BE1EE1C0251A278608217B8A9033BAFAEB_inline(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m24FEE0FF13998645F3FCE9773D76DEB6596F919D_AdjustorThunk (RuntimeObject * __this, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ___filter0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * _thisAdjusted = reinterpret_cast<Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C *>(__this + _offset);
	Enumerator__ctor_m24FEE0FF13998645F3FCE9773D76DEB6596F919D_inline(_thisAdjusted, ___filter0, method);
}
// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mFB25F9D4A7953829F59C05BDFE39072FDC067323 (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method)
{
	{
		// get => _idx;
		int32_t L_0 = __this->get__idx_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Enumerator_get_Current_mFB25F9D4A7953829F59C05BDFE39072FDC067323_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * _thisAdjusted = reinterpret_cast<Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Enumerator_get_Current_mFB25F9D4A7953829F59C05BDFE39072FDC067323_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m569EC4F9DC87367F1A9DF4F54465FEFD31EA4CF7 (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method)
{
	{
		// _filter.Unlock ();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_0 = __this->get__filter_0();
		EcsFilter_Unlock_m3E0AEE4273F2C6A9FC389FB4801C5B152B8219A6_inline(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m569EC4F9DC87367F1A9DF4F54465FEFD31EA4CF7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * _thisAdjusted = reinterpret_cast<Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C *>(__this + _offset);
	Enumerator_Dispose_m569EC4F9DC87367F1A9DF4F54465FEFD31EA4CF7_inline(_thisAdjusted, method);
}
// System.Boolean Leopotam.Ecs.EcsFilter/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC5FDC234DF5C36430FFCC640395FB66F1A490F8A (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return ++_idx < _count;
		int32_t L_0 = __this->get__idx_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set__idx_2(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get__count_1();
		return (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mC5FDC234DF5C36430FFCC640395FB66F1A490F8A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * _thisAdjusted = reinterpret_cast<Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C *>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mC5FDC234DF5C36430FFCC640395FB66F1A490F8A_inline(_thisAdjusted, method);
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
// Conversion methods for marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshal_pinvoke(const EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3& unmarshaled, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_pinvoke& marshaled)
{
	marshaled.___Gen_0 = unmarshaled.get_Gen_0();
	marshaled.___ComponentsCountX2_1 = unmarshaled.get_ComponentsCountX2_1();
	marshaled.___Components_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_Components_2());
}
IL2CPP_EXTERN_C void EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshal_pinvoke_back(const EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_pinvoke& marshaled, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t unmarshaled_Gen_temp_0 = 0;
	unmarshaled_Gen_temp_0 = marshaled.___Gen_0;
	unmarshaled.set_Gen_0(unmarshaled_Gen_temp_0);
	int16_t unmarshaled_ComponentsCountX2_temp_1 = 0;
	unmarshaled_ComponentsCountX2_temp_1 = marshaled.___ComponentsCountX2_1;
	unmarshaled.set_ComponentsCountX2_1(unmarshaled_ComponentsCountX2_temp_1);
	unmarshaled.set_Components_2((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___Components_2));
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshal_pinvoke_cleanup(EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Components_2);
	marshaled.___Components_2 = NULL;
}
// Conversion methods for marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshal_com(const EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3& unmarshaled, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_com& marshaled)
{
	marshaled.___Gen_0 = unmarshaled.get_Gen_0();
	marshaled.___ComponentsCountX2_1 = unmarshaled.get_ComponentsCountX2_1();
	marshaled.___Components_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_Components_2());
}
IL2CPP_EXTERN_C void EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshal_com_back(const EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_com& marshaled, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t unmarshaled_Gen_temp_0 = 0;
	unmarshaled_Gen_temp_0 = marshaled.___Gen_0;
	unmarshaled.set_Gen_0(unmarshaled_Gen_temp_0);
	int16_t unmarshaled_ComponentsCountX2_temp_1 = 0;
	unmarshaled_ComponentsCountX2_temp_1 = marshaled.___ComponentsCountX2_1;
	unmarshaled.set_ComponentsCountX2_1(unmarshaled_ComponentsCountX2_temp_1);
	unmarshaled.set_Components_2((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___Components_2));
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshal_com_cleanup(EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Components_2);
	marshaled.___Components_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * WorldHandler_GetWorld_m61D22E99F69D4FE4CCAFF0BBB9857CA34787D416_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldHandler_tD82490B8EE20D8CC5FD4AAA7F2216460819AA8D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return world;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_0 = ((WorldHandler_tD82490B8EE20D8CC5FD4AAA7F2216460819AA8D3_StaticFields*)il2cpp_codegen_static_fields_for(WorldHandler_tD82490B8EE20D8CC5FD4AAA7F2216460819AA8D3_il2cpp_TypeInfo_var))->get_world_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  EcsWorld_NewEntity_m29529BC3FE9DB5E528E292C8307473751D1FE38D_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_1 = NULL;
	int32_t V_2 = 0;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_3 = NULL;
	{
		// entity.Owner = this;
		(&V_0)->set_Owner_2(__this);
		// if (FreeEntities.Count > 0) {
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_0 = __this->get_FreeEntities_2();
		int32_t L_1 = L_0->get_Count_1();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		// entity.Id = FreeEntities.Items[--FreeEntities.Count];
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_2 = __this->get_FreeEntities_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = L_2->get_Items_0();
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_4 = __this->get_FreeEntities_2();
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_5 = L_4;
		int32_t L_6 = L_5->get_Count_1();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		int32_t L_7 = V_2;
		L_5->set_Count_1(L_7);
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		(&V_0)->set_Id_0(L_10);
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_11 = __this->get_Entities_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_12 = V_0;
		int32_t L_13 = L_12.get_Id_0();
		V_1 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)));
		// entity.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_14 = V_1;
		uint16_t L_15 = L_14->get_Gen_0();
		(&V_0)->set_Gen_1(L_15);
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_16 = V_1;
		L_16->set_ComponentsCountX2_1((int16_t)0);
		// } else {
		goto IL_00ea;
	}

IL_006a:
	{
		// if (EntitiesCount == Entities.Length) {
		int32_t L_17 = __this->get_EntitiesCount_1();
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_18 = __this->get_Entities_0();
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))))
		{
			goto IL_008d;
		}
	}
	{
		// Array.Resize (ref Entities, EntitiesCount << 1);
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8** L_19 = __this->get_address_of_Entities_0();
		int32_t L_20 = __this->get_EntitiesCount_1();
		Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14((EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8**)L_19, ((int32_t)((int32_t)L_20<<(int32_t)1)), /*hidden argument*/Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_RuntimeMethod_var);
	}

IL_008d:
	{
		// entity.Id = EntitiesCount++;
		int32_t L_21 = __this->get_EntitiesCount_1();
		V_2 = L_21;
		int32_t L_22 = V_2;
		__this->set_EntitiesCount_1(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		int32_t L_23 = V_2;
		(&V_0)->set_Id_0(L_23);
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_24 = __this->get_Entities_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_25 = V_0;
		int32_t L_26 = L_25.get_Id_0();
		V_3 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)));
		// entityData.Components = new int[Config.EntityComponentsCacheSize * 2];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_27 = V_3;
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_28 = __this->get_address_of_Config_7();
		int32_t L_29 = L_28->get_EntityComponentsCacheSize_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)2)));
		L_27->set_Components_2(L_30);
		// entityData.Gen = 1;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_31 = V_3;
		L_31->set_Gen_0((uint16_t)1);
		// entity.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_32 = V_3;
		uint16_t L_33 = L_32->get_Gen_0();
		(&V_0)->set_Gen_1(L_33);
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_34 = V_3;
		L_34->set_ComponentsCountX2_1((int16_t)0);
	}

IL_00ea:
	{
		// return entity;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_35 = V_0;
		return L_35;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsAlive_mBCDE101FA542306B2186382BA92B818AF66CD785_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_0 = NULL;
	{
		// if (!IsWorldAlive (entity)) { return false; }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		bool L_1;
		L_1 = EcsEntityExtensions_IsWorldAlive_mF0651EC2A3F8CF8E9F77882033A4DAD1D5557047_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_0, /*hidden argument*/NULL);
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
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_3 = L_2->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_4 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_5;
		L_5 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_3, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_4, /*hidden argument*/NULL);
		V_0 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_5;
		// return entityData.Gen == entity.Gen && entityData.ComponentsCountX2 >= 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_6 = V_0;
		uint16_t L_7 = L_6->get_Gen_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_8 = ___entity0;
		uint16_t L_9 = L_8->get_Gen_1();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0032;
		}
	}
	{
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_10 = V_0;
		int16_t L_11 = L_10->get_ComponentsCountX2_1();
		return (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsEntity_GetHashCode_mB847EED2B23DE1E722EEA210D852E1B8B01F6604_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// var hashCode = (Id * 397) ^ Gen.GetHashCode ();
		int32_t L_0 = __this->get_Id_0();
		uint16_t* L_1 = __this->get_address_of_Gen_1();
		int32_t L_2;
		L_2 = UInt16_GetHashCode_mDA01CAA4AF8C22A63972F93F26AF7E888CEBD2AA((uint16_t*)L_1, /*hidden argument*/NULL);
		// hashCode = (hashCode * 397) ^ (Owner != null ? Owner.GetHashCode () : 0);
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_3 = __this->get_Owner_2();
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)397)))^(int32_t)L_2)), (int32_t)((int32_t)397)));
		if (L_3)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)397)))^(int32_t)L_2)), (int32_t)((int32_t)397)));
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
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_4 = __this->get_Owner_2();
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		// return hashCode;
		return ((int32_t)((int32_t)G_B3_1^(int32_t)G_B3_0));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntity_Equals_mA31E5F554D4F150297F3953E6B754C19384D11B1_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return other is EcsEntity otherEntity && Equals (otherEntity);
		RuntimeObject * L_0 = ___other0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = ((*(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)UnBox(L_1, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var))));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_2 = V_0;
		bool L_3;
		L_3 = EcsEntity_Equals_m6C96F5128A123A5504E3C227C2E1E92D76AADACF((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	{
		// return ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_0 = __this->get_Entities_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_1 = ___entity0;
		int32_t L_2 = L_1->get_Id_0();
		return (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)(((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, int32_t ___typeIdx0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity1, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * V_0 = NULL;
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
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_1 = __this->get_FilterByIncludedComponents_4();
		int32_t L_2 = ___typeIdx0;
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_1, ((-L_2)), (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_1 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_4 = V_0;
		int32_t L_5 = L_4->get_Count_1();
		V_2 = L_5;
		goto IL_0046;
	}

IL_0023:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_6 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_7 = L_6->get_Items_0();
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_11 = ___entityData2;
		bool L_12;
		L_12 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_10, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_11, 0, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_13 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_14 = L_13->get_Items_0();
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_18 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_17, L_18);
	}

IL_0042:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
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
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_22 = __this->get_FilterByExcludedComponents_5();
		int32_t L_23 = ___typeIdx0;
		bool L_24;
		L_24 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_22, ((-L_23)), (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_0128;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_3 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_25 = V_0;
		int32_t L_26 = L_25->get_Count_1();
		V_4 = L_26;
		goto IL_008d;
	}

IL_006a:
	{
		// if (filters.Items[i].IsCompatible (entityData, typeIdx)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_27 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_28 = L_27->get_Items_0();
		int32_t L_29 = V_3;
		int32_t L_30 = L_29;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_32 = ___entityData2;
		int32_t L_33 = ___typeIdx0;
		bool L_34;
		L_34 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_31, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_32, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0089;
		}
	}
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_35 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_36 = L_35->get_Items_0();
		int32_t L_37 = V_3;
		int32_t L_38 = L_37;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_40 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_39, L_40);
	}

IL_0089:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
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
		// } else {
		return;
	}

IL_0093:
	{
		// if (FilterByIncludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_44 = __this->get_FilterByIncludedComponents_4();
		int32_t L_45 = ___typeIdx0;
		bool L_46;
		L_46 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_44, L_45, (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		if (!L_46)
		{
			goto IL_00dd;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_5 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_47 = V_0;
		int32_t L_48 = L_47->get_Count_1();
		V_6 = L_48;
		goto IL_00d7;
	}

IL_00b0:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_49 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_50 = L_49->get_Items_0();
		int32_t L_51 = V_5;
		int32_t L_52 = L_51;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_53 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_54 = ___entityData2;
		bool L_55;
		L_55 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_53, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_54, 0, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_00d1;
		}
	}
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_56 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_57 = L_56->get_Items_0();
		int32_t L_58 = V_5;
		int32_t L_59 = L_58;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_60 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_61 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_60, L_61);
	}

IL_00d1:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_62 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
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
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_65 = __this->get_FilterByExcludedComponents_5();
		int32_t L_66 = ___typeIdx0;
		bool L_67;
		L_67 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_65, L_66, (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		if (!L_67)
		{
			goto IL_0128;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_7 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_68 = V_0;
		int32_t L_69 = L_68->get_Count_1();
		V_8 = L_69;
		goto IL_0122;
	}

IL_00fa:
	{
		// if (filters.Items[i].IsCompatible (entityData, -typeIdx)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_70 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_71 = L_70->get_Items_0();
		int32_t L_72 = V_7;
		int32_t L_73 = L_72;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_74 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_75 = ___entityData2;
		int32_t L_76 = ___typeIdx0;
		bool L_77;
		L_77 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_74, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_75, ((-L_76)), /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_011c;
		}
	}
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_78 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_79 = L_78->get_Items_0();
		int32_t L_80 = V_7;
		int32_t L_81 = L_80;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_83 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_82, L_83);
	}

IL_011c:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_84 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsWorldAlive_mF0651EC2A3F8CF8E9F77882033A4DAD1D5557047_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	{
		// return entity.Owner != null && entity.Owner.IsAlive ();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_3 = L_2->get_Owner_2();
		bool L_4;
		L_4 = EcsWorld_IsAlive_mA6EC771EB7E874E662369960BF81F2F1065BEA08_inline(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0014:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_mA6EC771EB7E874E662369960BF81F2F1065BEA08_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method)
{
	{
		// return !IsDestroyed;
		bool L_0 = __this->get_IsDestroyed_10();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator__ctor_m24FEE0FF13998645F3FCE9773D76DEB6596F919D_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ___filter0, const RuntimeMethod* method)
{
	{
		// _filter = filter;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_0 = ___filter0;
		__this->set__filter_0(L_0);
		// _count = _filter.GetEntitiesCount ();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_1 = __this->get__filter_0();
		int32_t L_2;
		L_2 = EcsFilter_GetEntitiesCount_mF2966ADF6E5F72ED882840EE4E3B18E98DF480A7_inline(L_1, /*hidden argument*/NULL);
		__this->set__count_1(L_2);
		// _idx = -1;
		__this->set__idx_2((-1));
		// _filter.Lock ();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_3 = __this->get__filter_0();
		EcsFilter_Lock_m62CDA8BE1EE1C0251A278608217B8A9033BAFAEB_inline(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsEntityExtensions_Destroy_mC0A71595D1F8B6E285FB9D74D32FE24C5EB0B9E6_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_0 = NULL;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_3;
		L_3 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_1, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_2, /*hidden argument*/NULL);
		V_0 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_3;
		// savedEntity.Id = entity.Id;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_4 = ___entity0;
		int32_t L_5 = L_4->get_Id_0();
		(&V_1)->set_Id_0(L_5);
		// savedEntity.Gen = entity.Gen;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___entity0;
		uint16_t L_7 = L_6->get_Gen_1();
		(&V_1)->set_Gen_1(L_7);
		// savedEntity.Owner = entity.Owner;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_8 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_9 = L_8->get_Owner_2();
		(&V_1)->set_Owner_2(L_9);
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_10 = V_0;
		int16_t L_11 = L_10->get_ComponentsCountX2_1();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)2));
		goto IL_0089;
	}

IL_003f:
	{
		// savedEntity.Owner.UpdateFilters (-entityData.Components[i], savedEntity, entityData);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_12 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_13 = L_12.get_Owner_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_14 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = L_14->get_Components_2();
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_19 = V_0;
		EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_inline(L_13, ((-L_18)), (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(&V_1), (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_19, /*hidden argument*/NULL);
		// savedEntity.Owner.ComponentPools[entityData.Components[i]].Recycle (entityData.Components[i + 1]);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_20 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_21 = L_20.get_Owner_2();
		IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* L_22 = L_21->get_ComponentPools_9();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_23 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = L_23->get_Components_2();
		int32_t L_25 = V_2;
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_30 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = L_30->get_Components_2();
		int32_t L_32 = V_2;
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void Leopotam.Ecs.IEcsComponentPool::Recycle(System.Int32) */, IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var, L_29, L_34);
		// entityData.ComponentsCountX2 -= 2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_35 = V_0;
		int16_t* L_36 = L_35->get_address_of_ComponentsCountX2_1();
		int16_t* L_37 = L_36;
		int32_t L_38 = *((int16_t*)L_37);
		*((int16_t*)L_37) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)2))));
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)2));
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
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_41 = V_0;
		L_41->set_ComponentsCountX2_1((int16_t)0);
		// savedEntity.Owner.RecycleEntityData (savedEntity.Id, ref entityData);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_42 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_43 = L_42.get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_44 = V_1;
		int32_t L_45 = L_44.get_Id_0();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_46 = V_0;
		EcsWorld_RecycleEntityData_mD43B973684318F6A18A949CC46B8D8433F1B6B43(L_43, L_45, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_46, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData0, int32_t ___addedRemovedTypeIndex1, const RuntimeMethod* method)
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
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_IncludedTypeIndices_7();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)1));
		goto IL_0048;
	}

IL_000d:
	{
		// var typeIdx = IncludedTypeIndices[incIdx];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_IncludedTypeIndices_7();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// var idx = entityData.ComponentsCountX2 - 2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_5 = ___entityData0;
		int16_t L_6 = L_5->get_ComponentsCountX2_1();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2));
		goto IL_003b;
	}

IL_0021:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_7 = ___entityData0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = L_7->get_Components_2();
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
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)2));
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
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1));
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
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = __this->get_ExcludedTypeIndices_8();
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
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = __this->get_ExcludedTypeIndices_8();
		int32_t L_26 = V_4;
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		V_5 = L_28;
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_29 = ___entityData0;
		int16_t L_30 = L_29->get_ComponentsCountX2_1();
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)2));
		goto IL_009a;
	}

IL_0076:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_31 = ___entityData0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = L_31->get_Components_2();
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
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)2));
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
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00a5:
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_45 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_46 = __this->get_ExcludedTypeIndices_8();
		if ((((int32_t)L_45) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m9BE90B21512D8A7424CCD9EDA3AB81A5DDC688F5_inline (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3COptionU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_mD5CAA39F97C19D1B1D2BCA508F564F788D32D824_inline (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object Value { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsFilter_GetEntitiesCount_mF2966ADF6E5F72ED882840EE4E3B18E98DF480A7_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	{
		// return EntitiesCount;
		int32_t L_0 = __this->get_EntitiesCount_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Lock_m62CDA8BE1EE1C0251A278608217B8A9033BAFAEB_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	{
		// LockCount++;
		int32_t L_0 = __this->get_LockCount_3();
		__this->set_LockCount_3(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mFB25F9D4A7953829F59C05BDFE39072FDC067323_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method)
{
	{
		// get => _idx;
		int32_t L_0 = __this->get__idx_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Unlock_m3E0AEE4273F2C6A9FC389FB4801C5B152B8219A6_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * V_2 = NULL;
	{
		// LockCount--;
		int32_t L_0 = __this->get_LockCount_3();
		__this->set_LockCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (LockCount == 0 && _delayedOpsCount > 0) {
		int32_t L_1 = __this->get_LockCount_3();
		if (L_1)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_2 = __this->get__delayedOpsCount_6();
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_3 = __this->get__delayedOpsCount_6();
		V_1 = L_3;
		goto IL_005d;
	}

IL_002a:
	{
		// ref var op = ref _delayedOps[i];
		DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* L_4 = __this->get__delayedOps_5();
		int32_t L_5 = V_0;
		V_2 = (DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 *)((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)));
		// if (op.IsAdd) {
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_6 = V_2;
		bool L_7 = L_6->get_IsAdd_0();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// OnAddEntity (op.Entity);
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_8 = V_2;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_9 = L_8->get_address_of_Entity_1();
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_9);
		// } else {
		goto IL_0059;
	}

IL_004d:
	{
		// OnRemoveEntity (op.Entity);
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_10 = V_2;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_11 = L_10->get_address_of_Entity_1();
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_11);
	}

IL_0059:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
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
		__this->set__delayedOpsCount_6(0);
	}

IL_0068:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_Dispose_m569EC4F9DC87367F1A9DF4F54465FEFD31EA4CF7_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method)
{
	{
		// _filter.Unlock ();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_0 = __this->get__filter_0();
		EcsFilter_Unlock_m3E0AEE4273F2C6A9FC389FB4801C5B152B8219A6_inline(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC5FDC234DF5C36430FFCC640395FB66F1A490F8A_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return ++_idx < _count;
		int32_t L_0 = __this->get__idx_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set__idx_2(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get__count_1();
		return (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  EcsEntityExtensions_Replace_TisInstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28_mAA3ED6E4982BAF54E03AEA594DC937AEB19CEE87_gshared_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int16_t V_5 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_0->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_3;
		L_3 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline((EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_1, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_2, /*hidden argument*/NULL);
		V_0 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_3;
		// var typeIdx = EcsComponentType<T>.TypeIndex;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		int32_t L_4 = ((EcsComponentType_1_t5D58330C5898EF0842082D12C9C41EDB24908BC6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_TypeIndex_0();
		V_1 = (int32_t)L_4;
		// for (int i = 0, iiMax = entityData.ComponentsCountX2; i < iiMax; i += 2) {
		V_3 = (int32_t)0;
		// for (int i = 0, iiMax = entityData.ComponentsCountX2; i < iiMax; i += 2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_5 = V_0;
		int16_t L_6 = (int16_t)L_5->get_ComponentsCountX2_1();
		V_4 = (int32_t)L_6;
		goto IL_0061;
	}

IL_001f:
	{
		// if (entityData.Components[i] == typeIdx) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_7 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_7->get_Components_2();
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
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_13 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_14 = (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_13->get_Owner_2();
		IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* L_15 = (IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1*)L_14->get_ComponentPools_9();
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		InstantiateComponentU5BU5D_tE26A107B1502B9DD6E1BCB0BF7B2C36802E914D5* L_19 = (InstantiateComponentU5BU5D_tE26A107B1502B9DD6E1BCB0BF7B2C36802E914D5*)((EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F *)Castclass((RuntimeObject*)L_18, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))->get_Items_1();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_20 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_20->get_Components_2();
		int32_t L_22 = V_3;
		int32_t L_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 * L_25 = ___item1;
		InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28  L_26 = (*(InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 *)L_25);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 )L_26);
		// return entity;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_27 = ___entity0;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_28 = (*(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_27);
		return (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 )L_28;
	}

IL_005d:
	{
		// for (int i = 0, iiMax = entityData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_29 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)2));
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
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_32 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_32->get_Components_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_34 = V_0;
		int16_t L_35 = (int16_t)L_34->get_ComponentsCountX2_1();
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))) == ((uint32_t)L_35))))
		{
			goto IL_0089;
		}
	}
	{
		// Array.Resize (ref entityData.Components, entityData.ComponentsCountX2 << 1);
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_36 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_37 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_36->get_address_of_Components_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_38 = V_0;
		int16_t L_39 = (int16_t)L_38->get_ComponentsCountX2_1();
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_37, (int32_t)((int32_t)((int32_t)L_39<<(int32_t)1)), /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_0089:
	{
		// entityData.Components[entityData.ComponentsCountX2++] = typeIdx;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_40 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_40->get_Components_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_42 = V_0;
		int16_t* L_43 = (int16_t*)L_42->get_address_of_ComponentsCountX2_1();
		int16_t* L_44 = (int16_t*)L_43;
		int32_t L_45 = *((int16_t*)L_44);
		V_5 = (int16_t)L_45;
		int16_t L_46 = V_5;
		*((int16_t*)L_44) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1))));
		int16_t L_47 = V_5;
		int32_t L_48 = V_1;
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47), (int32_t)L_48);
		// var pool = entity.Owner.GetPool<T> ();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_49 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_50 = (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_49->get_Owner_2();
		EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F * L_51;
		L_51 = ((  EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F * (*) (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_50, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// var idx = pool.New ();
		EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F * L_52 = (EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F *)L_51;
		int32_t L_53;
		L_53 = ((  int32_t (*) (EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((EcsComponentPool_1_tFF72A7D2B002EB0FB06BA81B27BCB55FFDA6EE6F *)L_52, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		V_2 = (int32_t)L_53;
		// entityData.Components[entityData.ComponentsCountX2++] = idx;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_54 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_54->get_Components_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_56 = V_0;
		int16_t* L_57 = (int16_t*)L_56->get_address_of_ComponentsCountX2_1();
		int16_t* L_58 = (int16_t*)L_57;
		int32_t L_59 = *((int16_t*)L_58);
		V_5 = (int16_t)L_59;
		int16_t L_60 = V_5;
		*((int16_t*)L_58) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1))));
		int16_t L_61 = V_5;
		int32_t L_62 = V_2;
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61), (int32_t)L_62);
		// pool.Items[idx] = item;
		InstantiateComponentU5BU5D_tE26A107B1502B9DD6E1BCB0BF7B2C36802E914D5* L_63 = (InstantiateComponentU5BU5D_tE26A107B1502B9DD6E1BCB0BF7B2C36802E914D5*)L_52->get_Items_1();
		int32_t L_64 = V_2;
		InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 * L_65 = ___item1;
		InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28  L_66 = (*(InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 *)L_65);
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64), (InstantiateComponent_t030E739CD2E1983EB94B14029B85A8380A650F28 )L_66);
		// entity.Owner.UpdateFilters (typeIdx, entity, entityData);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_67 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_68 = (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_67->get_Owner_2();
		int32_t L_69 = V_1;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_70 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_71 = V_0;
		EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_inline((EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_68, (int32_t)L_69, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_70, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)(EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_71, /*hidden argument*/NULL);
		// return entity;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_72 = ___entity0;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_73 = (*(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_72);
		return (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 )L_73;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9FE5CB75AE56CA525B1E01A488AD0CD51F9FFB16_gshared_inline (Nullable_1_t62ECAC9D3A5AFDE7F095679230B6CA69125422F7 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_m5F0691597ED4873A451968C8E2735B9C20382DA2_gshared_inline (EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	{
		// public EcsGrowList (int capacity) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// Items = new T[capacity];
		int32_t L_0 = ___capacity0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_0);
		__this->set_Items_0(L_1);
		// Count = 0;
		__this->set_Count_1(0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m9D7804B6366AF1BE2BC90590C75D811D5D20677B_gshared_inline (EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (Items.Length == Count) {
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_Items_0();
		int32_t L_1 = (int32_t)__this->get_Count_1();
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((uint32_t)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		// Array.Resize (ref Items, Items.Length << 1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**)__this->get_address_of_Items_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_Items_0();
		((  void (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**)L_2, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))<<(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_0025:
	{
		// Items[Count++] = item;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_Items_0();
		int32_t L_5 = (int32_t)__this->get_Count_1();
		V_0 = (int32_t)L_5;
		int32_t L_6 = V_0;
		__this->set_Count_1(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		int32_t L_7 = V_0;
		RuntimeObject * L_8 = ___item0;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject *)L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_gshared_inline (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	{
		// public EcsGrowList (int capacity) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// Items = new T[capacity];
		int32_t L_0 = ___capacity0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_0);
		__this->set_Items_0(L_1);
		// Count = 0;
		__this->set_Count_1(0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_gshared_inline (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * __this, int32_t ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (Items.Length == Count) {
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Items_0();
		int32_t L_1 = (int32_t)__this->get_Count_1();
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((uint32_t)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		// Array.Resize (ref Items, Items.Length << 1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Items_0();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Items_0();
		((  void (*) (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_2, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))<<(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_0025:
	{
		// Items[Count++] = item;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Items_0();
		int32_t L_5 = (int32_t)__this->get_Count_1();
		V_0 = (int32_t)L_5;
		int32_t L_6 = V_0;
		__this->set_Count_1(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		int32_t L_7 = V_0;
		int32_t L_8 = ___item0;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		// }
		return;
	}
}
