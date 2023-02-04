#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtualFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct VirtualFuncInvoker8
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct VirtualFuncInvoker9
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Single[][]
struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.CombineInstance[]
struct CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// PXR_Audio_Spatializer_AmbisonicSource[]
struct PXR_Audio_Spatializer_AmbisonicSourceU5BU5D_t1E738B873F32F0993A18656501380CC7D308956F;
// PXR_Audio_Spatializer_AudioListener[]
struct PXR_Audio_Spatializer_AudioListenerU5BU5D_t298F821046FC2FC6D8922BD28ABC4C755683F0E6;
// PXR_Audio_Spatializer_AudioSource[]
struct PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23;
// PXR_Audio_Spatializer_SceneGeometry[]
struct PXR_Audio_Spatializer_SceneGeometryU5BU5D_t41710776FD4261140EA6C38AF9BB28BD07C8D836;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// PXR_Audio.Spatializer.Api
struct Api_t64D8A27773AE5882B3B45C264344706B43D1141A;
// PXR_Audio.Spatializer.ApiUnityImpl
struct ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8;
// PXR_Audio.Spatializer.ApiWwiseImpl
struct ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// PXR_Audio.Spatializer.DistanceAttenuationCallback
struct DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PXR_Audio_Spatializer_AmbisonicSource
struct PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD;
// PXR_Audio_Spatializer_AudioListener
struct PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF;
// PXR_Audio_Spatializer_AudioSource
struct PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F;
// PXR_Audio_Spatializer_Context
struct PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F;
// PXR_Audio_Spatializer_SceneGeometry
struct PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53;
// PXR_Audio_Spatializer_SceneMaterial
struct PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177;

IL2CPP_EXTERN_C RuntimeClass* ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderingMode_tD457D1453B814D6C77D4C492BEABB498008379E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Result_t3CEB031445F0804AA3AD2D5E6DCDCD01EC966B50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral159AB672B9FFB999CFC642C984A730E30204CFF1;
IL2CPP_EXTERN_C String_t* _stringLiteral1864E179A885039C1726EACC82C67416A2A62C51;
IL2CPP_EXTERN_C String_t* _stringLiteral1C9007DD914AEC9DEC38C8B3FA3E68CAD8A3518A;
IL2CPP_EXTERN_C String_t* _stringLiteral31A896FA03CB0C2A853E88220B3543601F4638DA;
IL2CPP_EXTERN_C String_t* _stringLiteral52FD3A27F14238F539AE7EE23D829800396E79AF;
IL2CPP_EXTERN_C String_t* _stringLiteral58BE2774252C5300BFF19D8D045145769C8AB244;
IL2CPP_EXTERN_C String_t* _stringLiteral5EB55A735670D9BC9AFD323DC93AE36440B6F110;
IL2CPP_EXTERN_C String_t* _stringLiteral639A3416C5643F34195BC2C0B6FCCDD388AE52E8;
IL2CPP_EXTERN_C String_t* _stringLiteral67EEFE16795828DCBC09AB1F73B300B9C918075D;
IL2CPP_EXTERN_C String_t* _stringLiteral6B1A838344D61F905FD563592D98A3DFA24B47A5;
IL2CPP_EXTERN_C String_t* _stringLiteral6B4FA6E136A33F1C988E1BEA55EEDD61EF325710;
IL2CPP_EXTERN_C String_t* _stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195;
IL2CPP_EXTERN_C String_t* _stringLiteral7D15FF89C6C57E922BE9A66FAEB55C410E1A6DA4;
IL2CPP_EXTERN_C String_t* _stringLiteral92946F39A43FE422EB9BE48EF20C2C8BD9FE565A;
IL2CPP_EXTERN_C String_t* _stringLiteral93FBDF9D903C80EB00BD26BD4E0D480C39737B6A;
IL2CPP_EXTERN_C String_t* _stringLiteral95C6F82ADE26334D66638052BC9EB17CF660EB4C;
IL2CPP_EXTERN_C String_t* _stringLiteral9B90D15231789E1D095027B2BF45888986A1E2BC;
IL2CPP_EXTERN_C String_t* _stringLiteralA8BE580847AF7138A866E1499FB3D12F470A7AC9;
IL2CPP_EXTERN_C String_t* _stringLiteralB2F89E2F0767D89994F86794572CCE7C3B3703E0;
IL2CPP_EXTERN_C String_t* _stringLiteralBBD88CE45B7D8CE1D5AE687B942CEC90B2432A31;
IL2CPP_EXTERN_C String_t* _stringLiteralBE934B09999108814CCD75A4F3E7237746C03072;
IL2CPP_EXTERN_C String_t* _stringLiteralC3CDF2666BA9C74F2DFF5BC135B33F9243505FDE;
IL2CPP_EXTERN_C String_t* _stringLiteralC5341FBAF4663F013BBE5479BF640E57B1287B1C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53_m9CA41EB6780D04DC11DE2DDCE2F8D27641D38715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83_m6DD39ECB61DE35F9832CED3797D8BEAC09D9C957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m35299BFF8173B59B694DE1E24B53697CE7E65128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF_m46938E1406A1F438430B89E1590E8D60D1838986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_m2C2B44C6E1E077F07BA26B62502FDAC27C3586F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD_m80DA459432BA29F3580B06090BEBFF62A7805F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF_m4521E68A5454A7BA2DF6376A9698C573C837277E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F_m646ABD3384A71B0179BA6AB9D88CF492C77AD750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53_mD3A50A58F9C8A0016BAD412792E90F8A15015F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PXR_Audio_Spatializer_Context_OnAudioConfigurationChangedEventHandler_m2A37DF93A73D469A432A7CA406475A3959AD3052_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4;
struct CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PXR_Audio_Spatializer_AmbisonicSourceU5BU5D_t1E738B873F32F0993A18656501380CC7D308956F;
struct PXR_Audio_Spatializer_AudioListenerU5BU5D_t298F821046FC2FC6D8922BD28ABC4C755683F0E6;
struct PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23;
struct PXR_Audio_Spatializer_SceneGeometryU5BU5D_t41710776FD4261140EA6C38AF9BB28BD07C8D836;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4EB30CC525FFCDDCD2C224C30D5BEC02D3C00792 
{
};

// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// PXR_Audio.Spatializer.Api
struct Api_t64D8A27773AE5882B3B45C264344706B43D1141A  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// PXR_Audio.Spatializer.ApiUnityImpl
struct ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8  : public Api_t64D8A27773AE5882B3B45C264344706B43D1141A
{
};

// PXR_Audio.Spatializer.ApiWwiseImpl
struct ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B  : public Api_t64D8A27773AE5882B3B45C264344706B43D1141A
{
};

// UnityEngine.AudioConfiguration
struct AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D 
{
	// UnityEngine.AudioSpeakerMode UnityEngine.AudioConfiguration::speakerMode
	int32_t ___speakerMode_0;
	// System.Int32 UnityEngine.AudioConfiguration::dspBufferSize
	int32_t ___dspBufferSize_1;
	// System.Int32 UnityEngine.AudioConfiguration::sampleRate
	int32_t ___sampleRate_2;
	// System.Int32 UnityEngine.AudioConfiguration::numRealVoices
	int32_t ___numRealVoices_3;
	// System.Int32 UnityEngine.AudioConfiguration::numVirtualVoices
	int32_t ___numVirtualVoices_4;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// PXR_Audio.Spatializer.NativeVector3f
struct NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F 
{
	// System.Single PXR_Audio.Spatializer.NativeVector3f::x
	float ___x_0;
	// System.Single PXR_Audio.Spatializer.NativeVector3f::y
	float ___y_1;
	// System.Single PXR_Audio.Spatializer.NativeVector3f::z
	float ___z_2;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.CombineInstance
struct CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE 
{
	// System.Int32 UnityEngine.CombineInstance::m_MeshInstanceID
	int32_t ___m_MeshInstanceID_0;
	// System.Int32 UnityEngine.CombineInstance::m_SubMeshIndex
	int32_t ___m_SubMeshIndex_1;
	// UnityEngine.Matrix4x4 UnityEngine.CombineInstance::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_2;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_LightmapScaleOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_LightmapScaleOffset_3;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_RealtimeLightmapScaleOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RealtimeLightmapScaleOffset_4;
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

// PXR_Audio.Spatializer.SourceConfig
struct SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9 
{
	// PXR_Audio.Spatializer.SourceMode PXR_Audio.Spatializer.SourceConfig::mode
	int32_t ___mode_0;
	// PXR_Audio.Spatializer.NativeVector3f PXR_Audio.Spatializer.SourceConfig::position
	NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F ___position_1;
	// PXR_Audio.Spatializer.NativeVector3f PXR_Audio.Spatializer.SourceConfig::front
	NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F ___front_2;
	// PXR_Audio.Spatializer.NativeVector3f PXR_Audio.Spatializer.SourceConfig::up
	NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F ___up_3;
	// System.Single PXR_Audio.Spatializer.SourceConfig::radius
	float ___radius_4;
	// System.Single PXR_Audio.Spatializer.SourceConfig::directivityAlpha
	float ___directivityAlpha_5;
	// System.Single PXR_Audio.Spatializer.SourceConfig::directivityOrder
	float ___directivityOrder_6;
	// System.Boolean PXR_Audio.Spatializer.SourceConfig::useDirectPathSpread
	bool ___useDirectPathSpread_7;
	// System.Single PXR_Audio.Spatializer.SourceConfig::directPathSpread
	float ___directPathSpread_8;
	// System.Single PXR_Audio.Spatializer.SourceConfig::sourceGain
	float ___sourceGain_9;
	// System.Single PXR_Audio.Spatializer.SourceConfig::reflectionGain
	float ___reflectionGain_10;
	// System.Boolean PXR_Audio.Spatializer.SourceConfig::enableDoppler
	bool ___enableDoppler_11;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// PXR_Audio.Spatializer.DistanceAttenuationCallback
struct DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D  : public MulticastDelegate_t
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// PXR_Audio_Spatializer_AmbisonicSource
struct PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource PXR_Audio_Spatializer_AmbisonicSource::nativeSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___nativeSource_4;
	// System.Single PXR_Audio_Spatializer_AmbisonicSource::playheadPosition
	float ___playheadPosition_5;
	// System.Boolean PXR_Audio_Spatializer_AmbisonicSource::wasPlaying
	bool ___wasPlaying_6;
};

// PXR_Audio_Spatializer_AudioListener
struct PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PXR_Audio_Spatializer_AudioListener::isActive
	bool ___isActive_4;
	// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_AudioListener::context
	PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* ___context_5;
	// System.Single[] PXR_Audio_Spatializer_AudioListener::positionArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___positionArray_6;
	// System.Single[] PXR_Audio_Spatializer_AudioListener::frontArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___frontArray_7;
	// System.Single[] PXR_Audio_Spatializer_AudioListener::upArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___upArray_8;
	// System.Boolean PXR_Audio_Spatializer_AudioListener::isAudioDSPInProgress
	bool ___isAudioDSPInProgress_9;
};

// PXR_Audio_Spatializer_AudioSource
struct PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PXR_Audio_Spatializer_AudioSource::sourceGainDB
	float ___sourceGainDB_4;
	// System.Single PXR_Audio_Spatializer_AudioSource::sourceGainAmplitude
	float ___sourceGainAmplitude_5;
	// System.Boolean PXR_Audio_Spatializer_AudioSource::sourceGainChanged
	bool ___sourceGainChanged_6;
	// System.Single PXR_Audio_Spatializer_AudioSource::sourceSize
	float ___sourceSize_7;
	// System.Boolean PXR_Audio_Spatializer_AudioSource::sourceSizeChanged
	bool ___sourceSizeChanged_8;
	// System.Boolean PXR_Audio_Spatializer_AudioSource::enableDoppler
	bool ___enableDoppler_9;
	// System.Boolean PXR_Audio_Spatializer_AudioSource::enableDopplerChanged
	bool ___enableDopplerChanged_10;
	// PXR_Audio.Spatializer.SourceAttenuationMode PXR_Audio_Spatializer_AudioSource::sourceAttenuationMode
	int32_t ___sourceAttenuationMode_11;
	// System.Single PXR_Audio_Spatializer_AudioSource::minAttenuationDistance
	float ___minAttenuationDistance_12;
	// System.Single PXR_Audio_Spatializer_AudioSource::maxAttenuationDistance
	float ___maxAttenuationDistance_13;
	// System.Boolean PXR_Audio_Spatializer_AudioSource::attenuationDistanceChanged
	bool ___attenuationDistanceChanged_14;
	// System.Boolean PXR_Audio_Spatializer_AudioSource::isActive
	bool ___isActive_15;
	// System.Boolean PXR_Audio_Spatializer_AudioSource::isAudioDSPInProgress
	bool ___isAudioDSPInProgress_16;
	// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_AudioSource::context
	PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* ___context_17;
	// UnityEngine.AudioSource PXR_Audio_Spatializer_AudioSource::nativeSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___nativeSource_18;
	// System.Int32 PXR_Audio_Spatializer_AudioSource::sourceId
	int32_t ___sourceId_19;
	// System.Int32 PXR_Audio_Spatializer_AudioSource::currentContextUuid
	int32_t ___currentContextUuid_20;
	// System.Single[] PXR_Audio_Spatializer_AudioSource::positionArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___positionArray_21;
	// System.Single PXR_Audio_Spatializer_AudioSource::playheadPosition
	float ___playheadPosition_22;
	// System.Boolean PXR_Audio_Spatializer_AudioSource::wasPlaying
	bool ___wasPlaying_23;
};

// PXR_Audio_Spatializer_Context
struct PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PXR_Audio.Spatializer.SpatializerApiImpl PXR_Audio_Spatializer_Context::spatializerApiImpl
	int32_t ___spatializerApiImpl_4;
	// System.IntPtr PXR_Audio_Spatializer_Context::context
	intptr_t ___context_7;
	// System.Boolean PXR_Audio_Spatializer_Context::initialized
	bool ___initialized_8;
	// PXR_Audio.Spatializer.RenderingMode PXR_Audio_Spatializer_Context::renderingQuality
	int32_t ___renderingQuality_9;
	// UnityEngine.Events.UnityEvent PXR_Audio_Spatializer_Context::lateInitEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___lateInitEvent_10;
	// UnityEngine.AudioConfiguration PXR_Audio_Spatializer_Context::audioConfig
	AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D ___audioConfig_11;
	// System.Boolean PXR_Audio_Spatializer_Context::bypass
	bool ___bypass_12;
	// System.Int32 PXR_Audio_Spatializer_Context::uuid
	int32_t ___uuid_14;
};

struct PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields
{
	// PXR_Audio.Spatializer.Api PXR_Audio_Spatializer_Context::_api
	Api_t64D8A27773AE5882B3B45C264344706B43D1141A* ____api_5;
	// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_Context::_instance
	PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* ____instance_6;
	// System.Int32 PXR_Audio_Spatializer_Context::uuidCounter
	int32_t ___uuidCounter_13;
};

// PXR_Audio_Spatializer_SceneGeometry
struct PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PXR_Audio_Spatializer_SceneGeometry::includeChildren
	bool ___includeChildren_4;
	// System.Boolean PXR_Audio_Spatializer_SceneGeometry::visualizeMeshInEditor
	bool ___visualizeMeshInEditor_5;
	// UnityEngine.Mesh PXR_Audio_Spatializer_SceneGeometry::bakedStaticMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___bakedStaticMesh_6;
	// System.Int32 PXR_Audio_Spatializer_SceneGeometry::geometryId
	int32_t ___geometryId_7;
	// System.Int32 PXR_Audio_Spatializer_SceneGeometry::staticGeometryID
	int32_t ___staticGeometryID_8;
	// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_SceneGeometry::context
	PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* ___context_9;
	// PXR_Audio_Spatializer_SceneMaterial PXR_Audio_Spatializer_SceneGeometry::material
	PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* ___material_10;
};

// PXR_Audio_Spatializer_SceneMaterial
struct PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PXR_Audio.Spatializer.AcousticsMaterial PXR_Audio_Spatializer_SceneMaterial::materialPreset
	int32_t ___materialPreset_4;
	// PXR_Audio.Spatializer.AcousticsMaterial PXR_Audio_Spatializer_SceneMaterial::lastMaterialPreset
	int32_t ___lastMaterialPreset_5;
	// System.Single[] PXR_Audio_Spatializer_SceneMaterial::absorption
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorption_6;
	// System.Single PXR_Audio_Spatializer_SceneMaterial::scattering
	float ___scattering_7;
	// System.Single PXR_Audio_Spatializer_SceneMaterial::transmission
	float ___transmission_8;
	// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_SceneMaterial::context
	PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* ___context_9;
	// System.Single[] PXR_Audio_Spatializer_SceneMaterial::absorptionForValidation
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionForValidation_10;
	// System.Single PXR_Audio_Spatializer_SceneMaterial::scatteringForValidation
	float ___scatteringForValidation_11;
	// System.Single PXR_Audio_Spatializer_SceneMaterial::transmissionForValidation
	float ___transmissionForValidation_12;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
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
// System.Single[][]
struct SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4  : public RuntimeArray
{
	ALIGN_FIELD (8) SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* m_Items[1];

	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// PXR_Audio_Spatializer_SceneGeometry[]
struct PXR_Audio_Spatializer_SceneGeometryU5BU5D_t41710776FD4261140EA6C38AF9BB28BD07C8D836  : public RuntimeArray
{
	ALIGN_FIELD (8) PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* m_Items[1];

	inline PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// PXR_Audio_Spatializer_AudioSource[]
struct PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23  : public RuntimeArray
{
	ALIGN_FIELD (8) PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* m_Items[1];

	inline PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// PXR_Audio_Spatializer_AudioListener[]
struct PXR_Audio_Spatializer_AudioListenerU5BU5D_t298F821046FC2FC6D8922BD28ABC4C755683F0E6  : public RuntimeArray
{
	ALIGN_FIELD (8) PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* m_Items[1];

	inline PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// PXR_Audio_Spatializer_AmbisonicSource[]
struct PXR_Audio_Spatializer_AmbisonicSourceU5BU5D_t1E738B873F32F0993A18656501380CC7D308956F  : public RuntimeArray
{
	ALIGN_FIELD (8) PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD* m_Items[1];

	inline PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* m_Items[1];

	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.CombineInstance[]
struct CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093  : public RuntimeArray
{
	ALIGN_FIELD (8) CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE m_Items[1];

	inline CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_Context::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* PXR_Audio_Spatializer_Context_get_Instance_m2C5DEDC032B552279DF0796E599F3ADEC18493B0_inline (const RuntimeMethod* method) ;
// System.Void PXR_Audio_Spatializer_AudioListener::UpdatePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioListener_UpdatePose_mBCA798D03287852DCDA9C5A52D75EEFDFC29C564 (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, const RuntimeMethod* method) ;
// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_AudioListener::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* PXR_Audio_Spatializer_AudioListener_get_Context_m1BA2FDFCED2AC2ABF3BE164B09CC67CF0319A34D (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean PXR_Audio_Spatializer_Context::get_Initialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PXR_Audio_Spatializer_Context_get_Initialized_m2BB4B8AF8AF269F7F792B4DF614D45A666228174_inline (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) ;
// System.Void PXR_Audio_Spatializer_AudioListener::RegisterInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioListener_RegisterInternal_m23C1CC758D1944C708A3D0052FE1225A1B65FE64 (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Transform::get_hasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetListenerPose(System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetListenerPose_mB46C2F5177C971EBF9F8788F22E1DD729AED05F3 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::GetInterleavedBinauralBuffer(System.Single[],System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_GetInterleavedBinauralBuffer_mCDA1C70D1EB53F3277826CC7DF1BA03E42181DF2 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___outputBufferPtr0, uint32_t ___numFrames1, bool ___isAccumulative2, const RuntimeMethod* method) ;
// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_AudioSource::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) ;
// System.Int32 PXR_Audio_Spatializer_Context::get_UUID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_get_UUID_mF1F08338481FCAB772AC1490572CB58E6FC44668_inline (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) ;
// System.Void PXR_Audio_Spatializer_AudioSource::RegisterInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_RegisterInternal_m7B61C1624057D461B03E7F580FF7E55F0162E0FF (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) ;
// System.Void PXR_Audio.Spatializer.SourceConfig::.ctor(PXR_Audio.Spatializer.SourceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceConfig__ctor_m6880CB0BEBB9D0CF3792D06D39D72E4FEC599887 (SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9* __this, int32_t ___inMode0, const RuntimeMethod* method) ;
// System.Single PXR_Audio_Spatializer_AudioSource::DB2Mag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PXR_Audio_Spatializer_AudioSource_DB2Mag_m2BF91D11BCD36F0AA2AE76B9C4BB0C0B85A198BD (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, float ___db0, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::AddSourceWithConfig(PXR_Audio.Spatializer.SourceConfig&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_AddSourceWithConfig_m99B250A6CD07F026B9ADC9E899058ADA76C00F38 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9* ___sourceConfig0, int32_t* ___sourceId1, bool ___isAsync2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetSourceSize(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetSourceSize_mEDE7DA51A2B63EEEE1420BD169F62F35CCA50D6B (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, float ___volumetricSize1, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetSourceAttenuationMode(System.Int32,PXR_Audio.Spatializer.SourceAttenuationMode,PXR_Audio.Spatializer.DistanceAttenuationCallback,PXR_Audio.Spatializer.DistanceAttenuationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetSourceAttenuationMode_m412784BA0D284BC10ACE5C5BBF30CE4CAA3C9EE8 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, int32_t ___mode1, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* ___directDistanceAttenuationCallback2, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* ___indirectDistanceAttenuationCallback3, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetSourceRange(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetSourceRange_mAD2D76262B2DDF0C10BCF8DB25EC926A3C355AC1 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, float ___rangeMin1, float ___rangeMax2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Single PXR_Audio_Spatializer_AudioSource::Mag2DB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PXR_Audio_Spatializer_AudioSource_Mag2DB_m65BFBA07D2EFBCDB2337C5334CB9D353D4AB2EA7 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, float ___mag0, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetSourcePosition(System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetSourcePosition_mA1B2630A9F08457B72F29774DE89501EB403A4AE (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position1, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetSourceGain(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetSourceGain_mA9EFA4263E37F3EA8853E4D355C704455E9052C9 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, float ___gain1, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetDopplerEffect(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetDopplerEffect_m824508019E0E85718BCB237DF303AF5824B2116E (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, bool ___on1, const RuntimeMethod* method) ;
// System.Void PXR_Audio_Spatializer_AudioSource::DestroyInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_DestroyInternal_mE4DC2F75E9E1B69E8C9A8EF4F3D8A19B0CFA4905 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::RemoveSource(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_RemoveSource_m7FAB5EFBE5EECEC36EDA23D1F8CD8E5D9B0F4289 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SubmitSourceBuffer(System.Int32,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SubmitSourceBuffer_m04CB3848C6564820A7F0F64992D8C6939E3A80A4 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputBufferPtr1, uint32_t ___numFrames2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___radius1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___radius1, const RuntimeMethod* method) ;
// System.Void PXR_Audio.Spatializer.ApiUnityImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUnityImpl__ctor_m4687F4B6771497056FE2271446D857204F49E77B (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, const RuntimeMethod* method) ;
// System.Void PXR_Audio.Spatializer.ApiWwiseImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiWwiseImpl__ctor_m85C99C89CFF41EFB859C8B8B47A8549E27805BE7 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Api PXR_Audio_Spatializer_Context::get_PXR_Audio_Spatializer_Api()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Api_t64D8A27773AE5882B3B45C264344706B43D1141A* PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioConfiguration UnityEngine.AudioSettings::GetConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D AudioSettings_GetConfiguration_mDA005BAD9577EBBE375F6D6C040D7F110508C910 (const RuntimeMethod* method) ;
// System.Void PXR_Audio_Spatializer_Context::ResetContext(PXR_Audio.Spatializer.RenderingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_Context_ResetContext_m583D2D2C04649D660724FB327215C0C62D3F94CA (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___quality0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSettings::Reset(UnityEngine.AudioConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_Reset_mA15BD1F6C3A6C78D85845D3D86C4271559A12D75 (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D ___config0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_mA9827AB9472EC8EE0A0F0FC24EBC06B4740DD944 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSettings::add_OnAudioConfigurationChanged(UnityEngine.AudioSettings/AudioConfigurationChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_add_OnAudioConfigurationChanged_m53F7FD8FF545E23217D2271424843E27AF31585F (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* ___value0, const RuntimeMethod* method) ;
// System.Void PXR_Audio_Spatializer_Context::StartInternal(PXR_Audio.Spatializer.RenderingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_Context_StartInternal_mEE34CA8148880BC5B0B2AB45FCA781AB35D543AB (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___quality0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<PXR_Audio_Spatializer_SceneGeometry>()
inline PXR_Audio_Spatializer_SceneGeometryU5BU5D_t41710776FD4261140EA6C38AF9BB28BD07C8D836* Object_FindObjectsOfType_TisPXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53_mD3A50A58F9C8A0016BAD412792E90F8A15015F41 (const RuntimeMethod* method)
{
	return ((  PXR_Audio_Spatializer_SceneGeometryU5BU5D_t41710776FD4261140EA6C38AF9BB28BD07C8D836* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_SceneGeometry::SubmitMeshToContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_SceneGeometry_SubmitMeshToContext_m043BB04D810ED77E81465F9EF94C6C9BEF0ABDA3 (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_SceneGeometry::SubmitStaticMeshToContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_SceneGeometry_SubmitStaticMeshToContext_mBFAEBA6763F2DB134C8AD1E3A0F320F163076CD0 (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Int32 PXR_Audio_Spatializer_Context::GetUuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_GetUuid_m78CE6D6D85F4F1E8F71D65AF271E14BADAECB4D9 (const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<PXR_Audio_Spatializer_AudioSource>()
inline PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F_m646ABD3384A71B0179BA6AB9D88CF492C77AD750 (const RuntimeMethod* method)
{
	return ((  PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<PXR_Audio_Spatializer_AudioListener>()
inline PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* Object_FindObjectOfType_TisPXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF_m46938E1406A1F438430B89E1590E8D60D1838986 (const RuntimeMethod* method)
{
	return ((  PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T[] UnityEngine.Object::FindObjectsOfType<PXR_Audio_Spatializer_AudioListener>()
inline PXR_Audio_Spatializer_AudioListenerU5BU5D_t298F821046FC2FC6D8922BD28ABC4C755683F0E6* Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF_m4521E68A5454A7BA2DF6376A9698C573C837277E (const RuntimeMethod* method)
{
	return ((  PXR_Audio_Spatializer_AudioListenerU5BU5D_t298F821046FC2FC6D8922BD28ABC4C755683F0E6* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Boolean PXR_Audio_Spatializer_AudioListener::get_IsAudioDSPInProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PXR_Audio_Spatializer_AudioListener_get_IsAudioDSPInProgress_mE55F8F9AF1AC6C17DC2E6256C4A72F8E75F42BBB_inline (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, const RuntimeMethod* method) ;
// System.Boolean PXR_Audio_Spatializer_AudioSource::get_IsAudioDSPInProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PXR_Audio_Spatializer_AudioSource_get_IsAudioDSPInProgress_m7D65A7961AD22BCD14306D8E531DE3274631B4E3_inline (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSettings::remove_OnAudioConfigurationChanged(UnityEngine.AudioSettings/AudioConfigurationChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_remove_OnAudioConfigurationChanged_mA9CB4575FC75DF3761B8AA0D0259A1255FFF908D (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* ___value0, const RuntimeMethod* method) ;
// System.Void PXR_Audio_Spatializer_Context::DestroyInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_Context_DestroyInternal_m063774FDE9E5578ADA3BEB196EA9CE0056541066 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) ;
// System.Void PXR_Audio_Spatializer_AudioSource::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_Resume_m88F7E0B383D656AD6F5B8F8D7FC79E6640F4FEB2 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<PXR_Audio_Spatializer_AmbisonicSource>()
inline PXR_Audio_Spatializer_AmbisonicSourceU5BU5D_t1E738B873F32F0993A18656501380CC7D308956F* Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD_m80DA459432BA29F3580B06090BEBFF62A7805F0D (const RuntimeMethod* method)
{
	return ((  PXR_Audio_Spatializer_AmbisonicSourceU5BU5D_t1E738B873F32F0993A18656501380CC7D308956F* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Void PXR_Audio_Spatializer_AmbisonicSource::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AmbisonicSource_Resume_m138F693F9371F6182C5B87BAC3F1E99A24377F3A (PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<PXR_Audio_Spatializer_Context>()
inline PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* Object_FindObjectOfType_TisPXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_m2C2B44C6E1E077F07BA26B62502FDAC27C3586F5 (const RuntimeMethod* method)
{
	return ((  PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Component::GetComponent<PXR_Audio_Spatializer_SceneMaterial>()
inline PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* Component_GetComponent_TisPXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83_m6DD39ECB61DE35F9832CED3797D8BEAC09D9C957 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PXR_Audio_Spatializer_SceneGeometry>()
inline PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* Component_GetComponent_TisPXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53_m9CA41EB6780D04DC11DE2DDCE2F8D27641D38715 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PXR_Audio_Spatializer_SceneGeometry::GetAllMeshFilter(UnityEngine.Transform,System.Boolean,System.Collections.Generic.List`1<UnityEngine.MeshFilter>,System.Boolean,UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_SceneGeometry_GetAllMeshFilter_m96C494F9519996A5456BF827C56348528A902976 (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, bool ___includeChildren1, List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___meshFilterList2, bool ___isStatic3, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask4, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_isStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_isStatic_mB88ADDE2E0D3544FACC287E9B49AFA116C07FB66 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<UnityEngine.MeshFilter>()
inline MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* Component_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m35299BFF8173B59B694DE1E24B53697CE7E65128 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mesh::get_isReadable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.MeshFilter>::Add(T)
inline void List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_inline (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.MeshFilter>::get_Count()
inline int32_t List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.MeshFilter>::get_Item(System.Int32)
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348 (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.CombineInstance::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstance_set_mesh_mB74AB585ED11B0D8B619F7ADC8B55286DD50A1B5 (CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.CombineInstance::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstance_set_transform_m9C9911DE1F613A1B949DF89CD46B0E8F742F3BEE (CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::CombineMeshes(UnityEngine.CombineInstance[],System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_CombineMeshes_m23172B6FF99A4464AA5F4A497209121978A165D5 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* ___combine0, bool ___mergeSubMeshes1, bool ___useMatrices2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.MeshFilter>::.ctor()
inline void List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___intVal0, const RuntimeMethod* method) ;
// UnityEngine.Mesh PXR_Audio_Spatializer_SceneGeometry::CombineMeshes(System.Collections.Generic.List`1<UnityEngine.MeshFilter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* PXR_Audio_Spatializer_SceneGeometry_CombineMeshes_mB74A76D83A46D6A1406B8FC7B21475B72649D4AA (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___meshFilterList0, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Single[] PXR_Audio_Spatializer_SceneGeometry::FlattenVerticesBuffer(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* PXR_Audio_Spatializer_SceneGeometry_FlattenVerticesBuffer_m4D854FE84EC191191B1AFA7E78C8B4B2FEFA1BD8 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___verticesBuffer0, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// PXR_Audio_Spatializer_SceneMaterial PXR_Audio_Spatializer_SceneGeometry::get_Material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* PXR_Audio_Spatializer_SceneGeometry_get_Material_m9AF67E0552537A7C2B382EF18FF5FCF6F81186CD (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SubmitMeshAndMaterialFactor(System.Single[],System.Int32,System.Int32[],System.Int32,System.Single[],System.Single,System.Single,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SubmitMeshAndMaterialFactor_mACE6829D79C3F3F145E7D8BA854790889F6C7638 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices0, int32_t ___verticesCount1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices2, int32_t ___indicesCount3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor4, float ___scatteringFactor5, float ___transmissionFactor6, int32_t* ___geometryId7, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireMesh(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireMesh_m742B67F2113E1DEE8F8416C62AB700E2D76726DF (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale3, const RuntimeMethod* method) ;
// System.Boolean PXR_Audio_Spatializer_SceneGeometry::get_isStaticMeshBaked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PXR_Audio_Spatializer_SceneGeometry_get_isStaticMeshBaked_mFB26905D33FBA55B35D22709ADC8F086FB90E81E (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Gizmos::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Gizmos_get_color_mF7A6194876F0DB8D2629715134BAAD3765849A3B (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_SceneMaterial::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* PXR_Audio_Spatializer_SceneMaterial_get_Context_m089D37FED71CC522CA7891F1C36F9F3A373202A3 (PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String PXR_Audio.Spatializer.ApiUnityImpl::GetVersionImport(System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiUnityImpl_GetVersionImport_mFBF4D7104C338C47AFCA8585A8DF335F8498E64A (int32_t* ___major0, int32_t* ___minor1, int32_t* ___patch2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::CreateContextImport(System.IntPtr&,PXR_Audio.Spatializer.RenderingMode,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_CreateContextImport_mE2DA0933509C046253B2CED514C4659454DC117E (intptr_t* ___ctx0, int32_t ___mode1, uint32_t ___framesPerBuffer2, uint32_t ___sampleRate3, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::InitializeContextImport(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_InitializeContextImport_mC5C62793E5E4176E137F471A5C443243BBDB1FD0 (intptr_t ___ctx0, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitMeshImport(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,PXR_Audio.Spatializer.AcousticsMaterial,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitMeshImport_mD102C291BB2F8527E58A482F78741BCE65737932 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices1, int32_t ___verticesCount2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices3, int32_t ___indicesCount4, int32_t ___material5, int32_t* ___geometryId6, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitMeshAndMaterialFactorImport(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,System.Single[],System.Single,System.Single,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitMeshAndMaterialFactorImport_mFCB8B8EA6E548756C2EC8197504764020FFA600F (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices1, int32_t ___verticesCount2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices3, int32_t ___indicesCount4, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor5, float ___scatteringFactor6, float ___transmissionFactor7, int32_t* ___geometryId8, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetAbsorptionFactorImport(PXR_Audio.Spatializer.AcousticsMaterial,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetAbsorptionFactorImport_mD676D85C6B241952CAB15BAC118F4A61646C4E6D (int32_t ___material0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor1, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetScatteringFactorImport(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetScatteringFactorImport_m48A19551CD60102C652FBDADA1998C8933A8CA97 (int32_t ___material0, float* ___scatteringFactor1, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetTransmissionFactorImport(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetTransmissionFactorImport_mAE071EC135F8B1173E244E08C9C3B14CE5F8265E (int32_t ___material0, float* ___transmissionFactor1, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::CommitSceneImport(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_CommitSceneImport_m31759A3D80DACEA16D3BB52F1CD110DDA73291F9 (intptr_t ___ctx0, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::AddSourceImport(System.IntPtr,PXR_Audio.Spatializer.SourceMode,System.Single[],System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_AddSourceImport_m14CCC235469EBBB4AEA7BF7280E1AA76E19DF167 (intptr_t ___ctx0, int32_t ___sourceMode1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position2, int32_t* ___sourceId3, bool ___isAsync4, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::AddSourceWithOrientationImport(System.IntPtr,PXR_Audio.Spatializer.SourceMode,System.Single[],System.Single[],System.Single[],System.Single,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_AddSourceWithOrientationImport_m79E407FA770110662032A7B32EC7C2DE5F2A680E (intptr_t ___ctx0, int32_t ___mode1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up4, float ___radius5, int32_t* ___sourceId6, bool ___isAsync7, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::AddSourceWithConfigImport(System.IntPtr,PXR_Audio.Spatializer.SourceConfig&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_AddSourceWithConfigImport_m63348636968AE3BFA917332B21C5D014E84E4CBE (intptr_t ___ctx0, SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9* ___sourceConfig1, int32_t* ___sourceId2, bool ___isAsync3, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourceAttenuationModeImport(System.IntPtr,System.Int32,PXR_Audio.Spatializer.SourceAttenuationMode,PXR_Audio.Spatializer.DistanceAttenuationCallback,PXR_Audio.Spatializer.DistanceAttenuationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourceAttenuationModeImport_mD96101B13996BD6603CE601663E0D309D2AC8231 (intptr_t ___ctx0, int32_t ___sourceId1, int32_t ___mode2, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* ___directDistanceAttenuationCallback3, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* ___indirectDistanceAttenuationCallback4, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourceRangeImport(System.IntPtr,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourceRangeImport_mE88063D8291F5022AF5035DED6747B1867B82BB0 (intptr_t ___ctx0, int32_t ___sourceId1, float ___rangeMin2, float ___rangeMax3, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::RemoveSourceImport(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_RemoveSourceImport_m46F25D1FBA3B56C1EE931200A73C7E6348B29712 (intptr_t ___ctx0, int32_t ___sourceId1, bool ___is_async2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitSourceBufferImport(System.IntPtr,System.Int32,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitSourceBufferImport_mAB83ED2E459919437E71E5E41803909D2B97BB74 (intptr_t ___ctx0, int32_t ___sourceId1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputBufferPtr2, uint32_t ___numFrames3, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitAmbisonicChannelBufferImport(System.IntPtr,System.Single[],System.Int32,System.Int32,PXR_Audio.Spatializer.AmbisonicNormalizationType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitAmbisonicChannelBufferImport_m5F45A40D378E471AED5A16C078ED8CBA19F5D7B8 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___ambisonicChannelBuffer1, int32_t ___order2, int32_t ___degree3, int32_t ___normType4, float ___gain5, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitInterleavedAmbisonicBufferImport(System.IntPtr,System.Single[],System.Int32,PXR_Audio.Spatializer.AmbisonicNormalizationType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitInterleavedAmbisonicBufferImport_mEC0E16E83BE0164DF914B3B76EE61BCD238E718B (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___ambisonicBuffer1, int32_t ___ambisonicOrder2, int32_t ___normType3, float ___gain4, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitMatrixInputBufferImport(System.IntPtr,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitMatrixInputBufferImport_m548CE0571D523D176D68FAA38FCDD100B4F62889 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputBuffer1, int32_t ___inputChannelIndex2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetInterleavedBinauralBufferImport(System.IntPtr,System.Single[],System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetInterleavedBinauralBufferImport_m33EBA4DFF6E25A9640E0609E658E16DDBE1CA840 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___outputBufferPtr1, uint32_t ___numFrames2, bool ___isAccumulative3, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetPlanarBinauralBufferImport(System.IntPtr,System.Single[][],System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetPlanarBinauralBufferImport_mDF13D1CFE95B54AB7B0854DF79938AB7A44B058D (intptr_t ___ctx0, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___outputBufferPtr1, uint32_t ___numFrames2, bool ___isAccumulative3, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetInterleavedLoudspeakersBufferImport(System.IntPtr,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetInterleavedLoudspeakersBufferImport_m2468E743016EBB3387D8705ED572ABF4FE815473 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___outputBufferPtr1, uint32_t ___numFrames2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetPlanarLoudspeakersBufferImport(System.IntPtr,System.Single[][],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetPlanarLoudspeakersBufferImport_m8B30F4AF3064A2952A9F597355451EA648674E6A (intptr_t ___ctx0, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___outputBufferPtr1, uint32_t ___numFrames2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::UpdateSceneImport(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_UpdateSceneImport_mE5D3473C585D73306A3C0F9E9480CF339910C88D (intptr_t ___ctx0, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetDopplerEffectImport(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetDopplerEffectImport_mD6E97B1179C87898CAA3A3D8781F3A9F17B4DB9C (intptr_t ___ctx0, int32_t ___sourceId1, bool ___on2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetPlaybackModeImport(System.IntPtr,PXR_Audio.Spatializer.PlaybackMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetPlaybackModeImport_m1365BDD02267856B5F4B2705190462F93FD7659F (intptr_t ___ctx0, int32_t ___playbackMode1, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetLoudspeakerArrayImport(System.IntPtr,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetLoudspeakerArrayImport_mA9AA83C0AD163D08875DBDA3D944287CE5834CB0 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___positions1, int32_t ___numLoudspeakers2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetMappingMatrixImport(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetMappingMatrixImport_mA15932349B9515B4F84671B76F151BE8938CD501 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___matrix1, int32_t ___numInputChannels2, int32_t ___numOutputChannels3, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetListenerPositionImport(System.IntPtr,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetListenerPositionImport_m6B18AF0D7ADBFC63BC98212330420D3C7A16E23B (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position1, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetListenerOrientationImport(System.IntPtr,System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetListenerOrientationImport_mDBBD4FC62C9FFAA74B71238FD4E3F60B13555D09 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetListenerPoseImport(System.IntPtr,System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetListenerPoseImport_m943D9C833EA12E255AD028A118B609230543C372 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up3, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourcePositionImport(System.IntPtr,System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourcePositionImport_mAFD86F93AFE1239BC81C4FF7245EA308FCC2816A (intptr_t ___ctx0, int32_t ___sourceId1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourceGainImport(System.IntPtr,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourceGainImport_m802634905D425208478675628448657910EF2164 (intptr_t ___ctx0, int32_t ___sourceId1, float ___gain2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourceSizeImport(System.IntPtr,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourceSizeImport_mF9C9631C56D860A9BC5EA8175E90E433311DB54B (intptr_t ___ctx0, int32_t ___sourceId1, float ___volumetricSize2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::UpdateSourceModeImport(System.IntPtr,System.Int32,PXR_Audio.Spatializer.SourceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_UpdateSourceModeImport_mC783BD11DD74F571C03B9549B15CF620F69184F5 (intptr_t ___ctx0, int32_t ___sourceId1, int32_t ___mode2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::DestroyImport(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_DestroyImport_m09D8466D84C7AA040F2BB36695B460A4E854817A (intptr_t ___ctx0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void PXR_Audio.Spatializer.Api::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api__ctor_mE949CF5885EA222299D3D29088CE0AA7A5EA70F8 (Api_t64D8A27773AE5882B3B45C264344706B43D1141A* __this, const RuntimeMethod* method) ;
// System.String PXR_Audio.Spatializer.ApiWwiseImpl::GetVersionImport(System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiWwiseImpl_GetVersionImport_mE5835DE1B52C33FCC8EEE34E67243E608DF0093A (int32_t* ___major0, int32_t* ___minor1, int32_t* ___patch2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SubmitMeshImport(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,PXR_Audio.Spatializer.AcousticsMaterial,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SubmitMeshImport_m1A80028FFBDB3DD3B8F0D3FBDBCF9D452C43E449 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices1, int32_t ___verticesCount2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices3, int32_t ___indicesCount4, int32_t ___material5, int32_t* ___geometryId6, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SubmitMeshAndMaterialFactorImport(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,System.Single[],System.Single,System.Single,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SubmitMeshAndMaterialFactorImport_m555919D2A802B67C73182DBE35C0681EB7151D23 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices1, int32_t ___verticesCount2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices3, int32_t ___indicesCount4, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor5, float ___scatteringFactor6, float ___transmissionFactor7, int32_t* ___geometryId8, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::GetAbsorptionFactorImport(PXR_Audio.Spatializer.AcousticsMaterial,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_GetAbsorptionFactorImport_m4B8D9CE73E937454569CEC75799A05F1345F2257 (int32_t ___material0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor1, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::GetScatteringFactorImport(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_GetScatteringFactorImport_mC8AFF489150A9A17DF00EC3C8A0E53D6FD31D652 (int32_t ___material0, float* ___scatteringFactor1, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::GetTransmissionFactorImport(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_GetTransmissionFactorImport_m86B6C4306CE0FE9897F3C196C6B8AA87D2451FF0 (int32_t ___material0, float* ___transmissionFactor1, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::CommitSceneImport(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_CommitSceneImport_mC705DF549F87594A577BF150BC7182DC4C234E8A (intptr_t ___ctx0, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::UpdateSceneImport(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_UpdateSceneImport_m062EBD1274154A8B19C083101732080C3EEAC305 (intptr_t ___ctx0, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetListenerPoseImport(System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetListenerPoseImport_m0C0E060E94F5537E09123CBA303CF3FA6A78FED8 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up2, const RuntimeMethod* method) ;
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::ResetContextImported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_ResetContextImported_m93C35292CA8E4CFC5077BC136CC849E62680AAED (const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL yggdrasil_get_version(int32_t*, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_create_context(intptr_t*, int32_t, uint32_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_initialize_context(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_submit_mesh(intptr_t, float*, int32_t, int32_t*, int32_t, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_submit_mesh_and_material_factor(intptr_t, float*, int32_t, int32_t*, int32_t, float*, float, float, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_get_absorption_factor(int32_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_get_scattering_factor(int32_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_get_transmission_factor(int32_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_commit_scene(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_add_source(intptr_t, int32_t, float*, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_add_source_with_orientation(intptr_t, int32_t, float*, float*, float*, float, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_add_source_with_config(intptr_t, SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9*, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_set_source_attenuation_mode(intptr_t, int32_t, int32_t, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_set_source_range(intptr_t, int32_t, float, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_remove_source(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_submit_source_buffer(intptr_t, int32_t, float*, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_submit_ambisonic_channel_buffer(intptr_t, float*, int32_t, int32_t, int32_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_submit_interleaved_ambisonic_buffer(intptr_t, float*, int32_t, int32_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_submit_matrix_input_buffer(intptr_t, float*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_get_interleaved_binaural_buffer(intptr_t, float*, uint32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_get_planar_binaural_buffer(intptr_t, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*, uint32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_get_interleaved_loudspeakers_buffer(intptr_t, float*, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_get_planar_loudspeakers_buffer(intptr_t, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_update_scene(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_set_doppler_effect(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_set_playback_mode(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_set_loudspeaker_array(intptr_t, float*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_set_mapping_matrix(intptr_t, float*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_set_listener_position(intptr_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_set_listener_orientation(intptr_t, float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_set_listener_pose(intptr_t, float*, float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_set_source_position(intptr_t, int32_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_set_source_gain(intptr_t, int32_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_set_source_size(intptr_t, int32_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_update_source_mode(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL yggdrasil_audio_destroy(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CSharp_PicoSpatializerWwise_SubmitMesh(intptr_t, float*, int32_t, int32_t*, int32_t, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CSharp_PicoSpatializerWwise_SubmitMeshAndMaterialFactor(intptr_t, float*, int32_t, int32_t*, int32_t, float*, float, float, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CSharp_PicoSpatializerWwise_GetAbsorptionFactor(int32_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CSharp_PicoSpatializerWwise_GetScatteringFactor(int32_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CSharp_PicoSpatializerWwise_GetTransmissionFactor(int32_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CSharp_PicoSpatializerWwise_CommitScene(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CSharp_PicoSpatializerWwise_UpdateScene(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CSharp_PicoSpatializerWwise_SetListenerTransform(float*, float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CSharp_PicoSpatializerWwise_ResetContext();
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
// System.Void PXR_Audio_Spatializer_AmbisonicSource::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AmbisonicSource_Resume_m138F693F9371F6182C5B87BAC3F1E99A24377F3A (PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (nativeSource)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___nativeSource_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// nativeSource.time = playheadPosition;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___nativeSource_4;
		float L_3 = __this->___playheadPosition_5;
		NullCheck(L_2);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_2, L_3, NULL);
		// if (wasPlaying)
		bool L_4 = __this->___wasPlaying_6;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// nativeSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___nativeSource_4;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AmbisonicSource::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AmbisonicSource_Awake_mFC5D20E8492ACB3CB26018DF202970F315C88A56 (PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nativeSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___nativeSource_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nativeSource_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AmbisonicSource::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AmbisonicSource_Update_m4572821002FABA7E2F3A77CA1BBF57981A147EC8 (PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD* __this, const RuntimeMethod* method) 
{
	{
		// if (nativeSource.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___nativeSource_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// playheadPosition = nativeSource.time;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___nativeSource_4;
		NullCheck(L_2);
		float L_3;
		L_3 = AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93(L_2, NULL);
		__this->___playheadPosition_5 = L_3;
	}

IL_001e:
	{
		// wasPlaying = nativeSource.isPlaying;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___nativeSource_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_4, NULL);
		__this->___wasPlaying_6 = L_5;
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AmbisonicSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AmbisonicSource__ctor_mC8798B1A4627F16FA616D1D36DF798572F6DCF7B (PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD* __this, const RuntimeMethod* method) 
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
// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_AudioListener::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* PXR_Audio_Spatializer_AudioListener_get_Context_m1BA2FDFCED2AC2ABF3BE164B09CC67CF0319A34D (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (context == null)
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_0 = __this->___context_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// context = PXR_Audio_Spatializer_Context.Instance;
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_2;
		L_2 = PXR_Audio_Spatializer_Context_get_Instance_m2C5DEDC032B552279DF0796E599F3ADEC18493B0_inline(NULL);
		__this->___context_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_5), (void*)L_2);
	}

IL_0019:
	{
		// return context;
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_3 = __this->___context_5;
		return L_3;
	}
}
// System.Boolean PXR_Audio_Spatializer_AudioListener::get_IsAudioDSPInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PXR_Audio_Spatializer_AudioListener_get_IsAudioDSPInProgress_mE55F8F9AF1AC6C17DC2E6256C4A72F8E75F42BBB (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, const RuntimeMethod* method) 
{
	{
		// return isAudioDSPInProgress;
		bool L_0 = __this->___isAudioDSPInProgress_9;
		return L_0;
	}
}
// System.Void PXR_Audio_Spatializer_AudioListener::RegisterInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioListener_RegisterInternal_m23C1CC758D1944C708A3D0052FE1225A1B65FE64 (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, const RuntimeMethod* method) 
{
	{
		// UpdatePose();
		PXR_Audio_Spatializer_AudioListener_UpdatePose_mBCA798D03287852DCDA9C5A52D75EEFDFC29C564(__this, NULL);
		// isActive = true;
		__this->___isActive_4 = (bool)1;
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioListener_OnEnable_m5321C1DF992065AC0550023336F1BE05FA3D814B (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Context != null && Context.Initialized)
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_0;
		L_0 = PXR_Audio_Spatializer_AudioListener_get_Context_m1BA2FDFCED2AC2ABF3BE164B09CC67CF0319A34D(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_2;
		L_2 = PXR_Audio_Spatializer_AudioListener_get_Context_m1BA2FDFCED2AC2ABF3BE164B09CC67CF0319A34D(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = PXR_Audio_Spatializer_Context_get_Initialized_m2BB4B8AF8AF269F7F792B4DF614D45A666228174_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// RegisterInternal();
		PXR_Audio_Spatializer_AudioListener_RegisterInternal_m23C1CC758D1944C708A3D0052FE1225A1B65FE64(__this, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioListener::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioListener_Update_mD0D8F7C30C72806F42CD708AA3EB1E7F1CE0BE19 (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isActive && context != null && context.Initialized && transform.hasChanged)
		bool L_0 = __this->___isActive_4;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_1 = __this->___context_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_3 = __this->___context_5;
		NullCheck(L_3);
		bool L_4;
		L_4 = PXR_Audio_Spatializer_Context_get_Initialized_m2BB4B8AF8AF269F7F792B4DF614D45A666228174_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795(L_5, NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// UpdatePose();
		PXR_Audio_Spatializer_AudioListener_UpdatePose_mBCA798D03287852DCDA9C5A52D75EEFDFC29C564(__this, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioListener_OnDisable_m58D62087F4D216D5E5D839381C491EBC381A23D2 (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, const RuntimeMethod* method) 
{
	{
		// isActive = false;
		__this->___isActive_4 = (bool)0;
		// isAudioDSPInProgress = false;
		__this->___isAudioDSPInProgress_9 = (bool)0;
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioListener::UpdatePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioListener_UpdatePose_mBCA798D03287852DCDA9C5A52D75EEFDFC29C564 (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, const RuntimeMethod* method) 
{
	{
		// positionArray[0] = transform.position.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___positionArray_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_3);
		// positionArray[1] = transform.position.y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___positionArray_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_7);
		// positionArray[2] = -transform.position.z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = __this->___positionArray_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___z_4;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((-L_11)));
		// frontArray[0] = transform.forward.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = __this->___frontArray_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		float L_15 = L_14.___x_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_15);
		// frontArray[1] = transform.forward.y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___frontArray_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_17, NULL);
		float L_19 = L_18.___y_3;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_19);
		// frontArray[2] = -transform.forward.z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = __this->___frontArray_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_21, NULL);
		float L_23 = L_22.___z_4;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((-L_23)));
		// upArray[0] = transform.up.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = __this->___upArray_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_25, NULL);
		float L_27 = L_26.___x_2;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_27);
		// upArray[1] = transform.up.y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = __this->___upArray_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_29, NULL);
		float L_31 = L_30.___y_3;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_31);
		// upArray[2] = -transform.up.z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = __this->___upArray_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_33, NULL);
		float L_35 = L_34.___z_4;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((-L_35)));
		// Context.SetListenerPose(positionArray, frontArray, upArray);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_36;
		L_36 = PXR_Audio_Spatializer_AudioListener_get_Context_m1BA2FDFCED2AC2ABF3BE164B09CC67CF0319A34D(__this, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = __this->___positionArray_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = __this->___frontArray_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = __this->___upArray_8;
		NullCheck(L_36);
		int32_t L_40;
		L_40 = PXR_Audio_Spatializer_Context_SetListenerPose_mB46C2F5177C971EBF9F8788F22E1DD729AED05F3(L_36, L_37, L_38, L_39, NULL);
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioListener::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioListener_OnAudioFilterRead_m6590F443A2062E66C388AD6CEDEF9F7EA706FD16 (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___channels1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isActive || context == null || !context.Initialized || Context.spatializerApiImpl == SpatializerApiImpl.wwise)
		bool L_0 = __this->___isActive_4;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_1 = __this->___context_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_3 = __this->___context_5;
		NullCheck(L_3);
		bool L_4;
		L_4 = PXR_Audio_Spatializer_Context_get_Initialized_m2BB4B8AF8AF269F7F792B4DF614D45A666228174_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_5;
		L_5 = PXR_Audio_Spatializer_AudioListener_get_Context_m1BA2FDFCED2AC2ABF3BE164B09CC67CF0319A34D(__this, NULL);
		NullCheck(L_5);
		int32_t L_6 = L_5->___spatializerApiImpl_4;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}

IL_0031:
	{
		// return;
		return;
	}

IL_0032:
	{
		// isAudioDSPInProgress = true;
		__this->___isAudioDSPInProgress_9 = (bool)1;
		// context.GetInterleavedBinauralBuffer(data, (uint)(data.Length / channels), true);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_7 = __this->___context_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ___data0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___data0;
		NullCheck(L_9);
		int32_t L_10 = ___channels1;
		NullCheck(L_7);
		int32_t L_11;
		L_11 = PXR_Audio_Spatializer_Context_GetInterleavedBinauralBuffer_mCDA1C70D1EB53F3277826CC7DF1BA03E42181DF2(L_7, L_8, ((int32_t)(((int32_t)(((RuntimeArray*)L_9)->max_length))/L_10)), (bool)1, NULL);
		// isAudioDSPInProgress = false;
		__this->___isAudioDSPInProgress_9 = (bool)0;
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioListener__ctor_m378955D3D7DC0D8D897CFFAB8BD34833982350AF (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float[] positionArray = new float[3] { 0.0f, 0.0f, 0.0f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___positionArray_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positionArray_6), (void*)L_0);
		// private float[] frontArray = new float[3] { 0.0f, 0.0f, 0.0f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___frontArray_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frontArray_7), (void*)L_1);
		// private float[] upArray = new float[3] { 0.0f, 0.0f, 0.0f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___upArray_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___upArray_8), (void*)L_2);
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
// System.Boolean PXR_Audio_Spatializer_AudioSource::get_IsAudioDSPInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PXR_Audio_Spatializer_AudioSource_get_IsAudioDSPInProgress_m7D65A7961AD22BCD14306D8E531DE3274631B4E3 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) 
{
	{
		// get { return isAudioDSPInProgress; }
		bool L_0 = __this->___isAudioDSPInProgress_16;
		return L_0;
	}
}
// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_AudioSource::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (context == null)
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_0 = __this->___context_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// context = PXR_Audio_Spatializer_Context.Instance;
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_2;
		L_2 = PXR_Audio_Spatializer_Context_get_Instance_m2C5DEDC032B552279DF0796E599F3ADEC18493B0_inline(NULL);
		__this->___context_17 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_17), (void*)L_2);
	}

IL_0019:
	{
		// return context;
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_3 = __this->___context_17;
		return L_3;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_OnEnable_m082AC48C58B964CA001E4442B223EB861CB0635B (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Context != null && Context.Initialized)
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_0;
		L_0 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_2;
		L_2 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = PXR_Audio_Spatializer_Context_get_Initialized_m2BB4B8AF8AF269F7F792B4DF614D45A666228174_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// if (Context.UUID == currentContextUuid)
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_4;
		L_4 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = PXR_Audio_Spatializer_Context_get_UUID_mF1F08338481FCAB772AC1490572CB58E6FC44668_inline(L_4, NULL);
		int32_t L_6 = __this->___currentContextUuid_20;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0036;
		}
	}
	{
		// isActive = true;
		__this->___isActive_15 = (bool)1;
		return;
	}

IL_0036:
	{
		// RegisterInternal();
		PXR_Audio_Spatializer_AudioSource_RegisterInternal_m7B61C1624057D461B03E7F580FF7E55F0162E0FF(__this, NULL);
		return;
	}

IL_003d:
	{
		// sourceId = -1;
		__this->___sourceId_19 = (-1);
		// currentContextUuid = -2;
		__this->___currentContextUuid_20 = ((int32_t)-2);
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::RegisterInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_RegisterInternal_m7B61C1624057D461B03E7F580FF7E55F0162E0FF (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BE2774252C5300BFF19D8D045145769C8AB244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B1A838344D61F905FD563592D98A3DFA24B47A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D15FF89C6C57E922BE9A66FAEB55C410E1A6DA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92946F39A43FE422EB9BE48EF20C2C8BD9FE565A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B90D15231789E1D095027B2BF45888986A1E2BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBD88CE45B7D8CE1D5AE687B942CEC90B2432A31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CDF2666BA9C74F2DFF5BC135B33F9243505FDE);
		s_Il2CppMethodInitialized = true;
	}
	SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// nativeSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___nativeSource_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nativeSource_18), (void*)L_0);
		// positionArray[0] = transform.position.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___positionArray_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_4);
		// positionArray[1] = transform.position.y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = __this->___positionArray_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_8);
		// positionArray[2] = -transform.position.z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___positionArray_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((-L_12)));
		// SourceConfig sourceConfig = new SourceConfig(PXR_Audio.Spatializer.SourceMode.Spatialize);
		SourceConfig__ctor_m6880CB0BEBB9D0CF3792D06D39D72E4FEC599887((&V_0), 0, NULL);
		// sourceConfig.position.x = positionArray[0];
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_13 = (&(&V_0)->___position_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___positionArray_21;
		NullCheck(L_14);
		int32_t L_15 = 0;
		float L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		L_13->___x_0 = L_16;
		// sourceConfig.position.y = positionArray[1];
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_17 = (&(&V_0)->___position_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->___positionArray_21;
		NullCheck(L_18);
		int32_t L_19 = 1;
		float L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		L_17->___y_1 = L_20;
		// sourceConfig.position.z = positionArray[2];
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_21 = (&(&V_0)->___position_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___positionArray_21;
		NullCheck(L_22);
		int32_t L_23 = 2;
		float L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		L_21->___z_2 = L_24;
		// sourceConfig.front.x = transform.forward.x;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_25 = (&(&V_0)->___front_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_26, NULL);
		float L_28 = L_27.___x_2;
		L_25->___x_0 = L_28;
		// sourceConfig.front.y = transform.forward.y;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_29 = (&(&V_0)->___front_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_30, NULL);
		float L_32 = L_31.___y_3;
		L_29->___y_1 = L_32;
		// sourceConfig.front.z = -transform.forward.z;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_33 = (&(&V_0)->___front_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_34, NULL);
		float L_36 = L_35.___z_4;
		L_33->___z_2 = ((-L_36));
		// sourceConfig.up.x = transform.up.x;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_37 = (&(&V_0)->___up_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_38, NULL);
		float L_40 = L_39.___x_2;
		L_37->___x_0 = L_40;
		// sourceConfig.up.y = transform.up.y;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_41 = (&(&V_0)->___up_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_42, NULL);
		float L_44 = L_43.___y_3;
		L_41->___y_1 = L_44;
		// sourceConfig.up.z = -transform.up.z;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_45 = (&(&V_0)->___up_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_46, NULL);
		float L_48 = L_47.___z_4;
		L_45->___z_2 = ((-L_48));
		// sourceConfig.enableDoppler = enableDoppler;
		bool L_49 = __this->___enableDoppler_9;
		(&V_0)->___enableDoppler_11 = L_49;
		// sourceGainAmplitude = DB2Mag(sourceGainDB);
		float L_50 = __this->___sourceGainDB_4;
		float L_51;
		L_51 = PXR_Audio_Spatializer_AudioSource_DB2Mag_m2BF91D11BCD36F0AA2AE76B9C4BB0C0B85A198BD(__this, L_50, NULL);
		__this->___sourceGainAmplitude_5 = L_51;
		// sourceConfig.sourceGain = sourceGainAmplitude;
		float L_52 = __this->___sourceGainAmplitude_5;
		(&V_0)->___sourceGain_9 = L_52;
		// PXR_Audio.Spatializer.Result ret = Context.AddSourceWithConfig(
		//     ref sourceConfig,
		//     ref sourceId,
		//     true);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_53;
		L_53 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		int32_t* L_54 = (&__this->___sourceId_19);
		NullCheck(L_53);
		int32_t L_55;
		L_55 = PXR_Audio_Spatializer_Context_AddSourceWithConfig_m99B250A6CD07F026B9ADC9E899058ADA76C00F38(L_53, (&V_0), L_54, (bool)1, NULL);
		// if (ret != PXR_Audio.Spatializer.Result.Success)
		if (!L_55)
		{
			goto IL_0190;
		}
	}
	{
		// Debug.LogError("Failed to add source.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC3CDF2666BA9C74F2DFF5BC135B33F9243505FDE, NULL);
		// return;
		return;
	}

IL_0190:
	{
		// ret = Context.SetSourceSize(sourceId, sourceSize);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_56;
		L_56 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		int32_t L_57 = __this->___sourceId_19;
		float L_58 = __this->___sourceSize_7;
		NullCheck(L_56);
		int32_t L_59;
		L_59 = PXR_Audio_Spatializer_Context_SetSourceSize_mEDE7DA51A2B63EEEE1420BD169F62F35CCA50D6B(L_56, L_57, L_58, NULL);
		// if (ret != PXR_Audio.Spatializer.Result.Success)
		if (!L_59)
		{
			goto IL_01b3;
		}
	}
	{
		// Debug.LogError("Failed to recover source size.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral9B90D15231789E1D095027B2BF45888986A1E2BC, NULL);
	}

IL_01b3:
	{
		// ret = Context.SetSourceAttenuationMode(sourceId, sourceAttenuationMode, null, null);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_60;
		L_60 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		int32_t L_61 = __this->___sourceId_19;
		int32_t L_62 = __this->___sourceAttenuationMode_11;
		NullCheck(L_60);
		int32_t L_63;
		L_63 = PXR_Audio_Spatializer_Context_SetSourceAttenuationMode_m412784BA0D284BC10ACE5C5BBF30CE4CAA3C9EE8(L_60, L_61, L_62, (DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D*)NULL, (DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D*)NULL, NULL);
		// if (ret != PXR_Audio.Spatializer.Result.Success)
		if (!L_63)
		{
			goto IL_01ed;
		}
	}
	{
		// Debug.LogError("Failed to initialize source #" + sourceId + " attenuation mode.");
		int32_t* L_64 = (&__this->___sourceId_19);
		String_t* L_65;
		L_65 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_64, NULL);
		String_t* L_66;
		L_66 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral58BE2774252C5300BFF19D8D045145769C8AB244, L_65, _stringLiteralBBD88CE45B7D8CE1D5AE687B942CEC90B2432A31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_66, NULL);
	}

IL_01ed:
	{
		// ret = Context.SetSourceRange(sourceId, minAttenuationDistance, maxAttenuationDistance);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_67;
		L_67 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		int32_t L_68 = __this->___sourceId_19;
		float L_69 = __this->___minAttenuationDistance_12;
		float L_70 = __this->___maxAttenuationDistance_13;
		NullCheck(L_67);
		int32_t L_71;
		L_71 = PXR_Audio_Spatializer_Context_SetSourceRange_mAD2D76262B2DDF0C10BCF8DB25EC926A3C355AC1(L_67, L_68, L_69, L_70, NULL);
		// if (ret != PXR_Audio.Spatializer.Result.Success)
		if (!L_71)
		{
			goto IL_022b;
		}
	}
	{
		// Debug.LogError("Failed to initialize source #" + sourceId + " attenuation range.");
		int32_t* L_72 = (&__this->___sourceId_19);
		String_t* L_73;
		L_73 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_72, NULL);
		String_t* L_74;
		L_74 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral58BE2774252C5300BFF19D8D045145769C8AB244, L_73, _stringLiteral6B1A838344D61F905FD563592D98A3DFA24B47A5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_74, NULL);
	}

IL_022b:
	{
		// isActive = true;
		__this->___isActive_15 = (bool)1;
		// currentContextUuid = Context.UUID;
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_75;
		L_75 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		NullCheck(L_75);
		int32_t L_76;
		L_76 = PXR_Audio_Spatializer_Context_get_UUID_mF1F08338481FCAB772AC1490572CB58E6FC44668_inline(L_75, NULL);
		__this->___currentContextUuid_20 = L_76;
		// Debug.Log("Source #" + sourceId + " is added.");
		int32_t* L_77 = (&__this->___sourceId_19);
		String_t* L_78;
		L_78 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_77, NULL);
		String_t* L_79;
		L_79 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral92946F39A43FE422EB9BE48EF20C2C8BD9FE565A, L_78, _stringLiteral7D15FF89C6C57E922BE9A66FAEB55C410E1A6DA4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_79, NULL);
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_Resume_m88F7E0B383D656AD6F5B8F8D7FC79E6640F4FEB2 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) 
{
	{
		// nativeSource.time = playheadPosition;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___nativeSource_18;
		float L_1 = __this->___playheadPosition_22;
		NullCheck(L_0);
		AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204(L_0, L_1, NULL);
		// if (wasPlaying)
		bool L_2 = __this->___wasPlaying_23;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// nativeSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___nativeSource_18;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::SetGainDB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_SetGainDB_mFD20DA89E4F7DE0D7A50946F3DAE64AD24119B19 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, float ___gainDB0, const RuntimeMethod* method) 
{
	{
		// sourceGainDB = gainDB;
		float L_0 = ___gainDB0;
		__this->___sourceGainDB_4 = L_0;
		// sourceGainAmplitude = DB2Mag(gainDB);
		float L_1 = ___gainDB0;
		float L_2;
		L_2 = PXR_Audio_Spatializer_AudioSource_DB2Mag_m2BF91D11BCD36F0AA2AE76B9C4BB0C0B85A198BD(__this, L_1, NULL);
		__this->___sourceGainAmplitude_5 = L_2;
		// sourceGainChanged = true;
		__this->___sourceGainChanged_6 = (bool)1;
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::SetGainAmplitude(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_SetGainAmplitude_mF22ED5477D44CA50C2F2001B89C5B29EED8CA5E1 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, float ___gainAmplitude0, const RuntimeMethod* method) 
{
	{
		// sourceGainAmplitude = gainAmplitude;
		float L_0 = ___gainAmplitude0;
		__this->___sourceGainAmplitude_5 = L_0;
		// sourceGainDB = Mag2DB(gainAmplitude);
		float L_1 = ___gainAmplitude0;
		float L_2;
		L_2 = PXR_Audio_Spatializer_AudioSource_Mag2DB_m65BFBA07D2EFBCDB2337C5334CB9D353D4AB2EA7(__this, L_1, NULL);
		__this->___sourceGainDB_4 = L_2;
		// sourceGainChanged = true;
		__this->___sourceGainChanged_6 = (bool)1;
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::SetSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_SetSize_mF81863BBBEAD1473A53E807890AE51DD2E79C1BD (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, float ___radius0, const RuntimeMethod* method) 
{
	{
		// sourceSize = radius;
		float L_0 = ___radius0;
		__this->___sourceSize_7 = L_0;
		// sourceSizeChanged = true;
		__this->___sourceSizeChanged_8 = (bool)1;
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::SetDopplerStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_SetDopplerStatus_mC53140A09DDB760375F0C64139E208C3023165D3 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, bool ___on0, const RuntimeMethod* method) 
{
	{
		// enableDoppler = on;
		bool L_0 = ___on0;
		__this->___enableDoppler_9 = L_0;
		// enableDopplerChanged = true;
		__this->___enableDopplerChanged_10 = (bool)1;
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::SetMinAttenuationRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_SetMinAttenuationRange_mD524B805ACAEE5ED0DDDAB1496B1AD61C7B6B5C2 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, float ___min0, const RuntimeMethod* method) 
{
	{
		// minAttenuationDistance = min;
		float L_0 = ___min0;
		__this->___minAttenuationDistance_12 = L_0;
		// attenuationDistanceChanged = true;
		__this->___attenuationDistanceChanged_14 = (bool)1;
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::SetMaxAttenuationRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_SetMaxAttenuationRange_mE95DDFCE447D45BF8C69A3F34A1EAE642D3EDE7E (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, float ___max0, const RuntimeMethod* method) 
{
	{
		// maxAttenuationDistance = max;
		float L_0 = ___max0;
		__this->___maxAttenuationDistance_13 = L_0;
		// attenuationDistanceChanged = true;
		__this->___attenuationDistanceChanged_14 = (bool)1;
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_Update_m752F521611E8D599AA82FAD34E96B07BF689BB74 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isActive && sourceId >= 0 && context != null && context.Initialized)
		bool L_0 = __this->___isActive_15;
		if (!L_0)
		{
			goto IL_017b;
		}
	}
	{
		int32_t L_1 = __this->___sourceId_19;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_017b;
		}
	}
	{
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_2 = __this->___context_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_017b;
		}
	}
	{
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_4 = __this->___context_17;
		NullCheck(L_4);
		bool L_5;
		L_5 = PXR_Audio_Spatializer_Context_get_Initialized_m2BB4B8AF8AF269F7F792B4DF614D45A666228174_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_017b;
		}
	}
	{
		// if (transform.hasChanged)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795(L_6, NULL);
		if (!L_7)
		{
			goto IL_00a6;
		}
	}
	{
		// positionArray[0] = transform.position.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = __this->___positionArray_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_11);
		// positionArray[1] = transform.position.y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = __this->___positionArray_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___y_3;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_15);
		// positionArray[2] = -transform.position.z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___positionArray_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___z_4;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((-L_19)));
		// PXR_Audio.Spatializer.Result ret = Context.SetSourcePosition(sourceId, positionArray);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_20;
		L_20 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		int32_t L_21 = __this->___sourceId_19;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___positionArray_21;
		NullCheck(L_20);
		int32_t L_23;
		L_23 = PXR_Audio_Spatializer_Context_SetSourcePosition_mA1B2630A9F08457B72F29774DE89501EB403A4AE(L_20, L_21, L_22, NULL);
	}

IL_00a6:
	{
		// if (nativeSource.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_24 = __this->___nativeSource_18;
		NullCheck(L_24);
		bool L_25;
		L_25 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_24, NULL);
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		// playheadPosition = nativeSource.time;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_26 = __this->___nativeSource_18;
		NullCheck(L_26);
		float L_27;
		L_27 = AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93(L_26, NULL);
		__this->___playheadPosition_22 = L_27;
	}

IL_00c4:
	{
		// wasPlaying = nativeSource.isPlaying;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_28 = __this->___nativeSource_18;
		NullCheck(L_28);
		bool L_29;
		L_29 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_28, NULL);
		__this->___wasPlaying_23 = L_29;
		// if (sourceGainChanged)
		bool L_30 = __this->___sourceGainChanged_6;
		if (!L_30)
		{
			goto IL_00fd;
		}
	}
	{
		// PXR_Audio.Spatializer.Result ret = Context.SetSourceGain(sourceId, sourceGainAmplitude);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_31;
		L_31 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		int32_t L_32 = __this->___sourceId_19;
		float L_33 = __this->___sourceGainAmplitude_5;
		NullCheck(L_31);
		int32_t L_34;
		L_34 = PXR_Audio_Spatializer_Context_SetSourceGain_mA9EFA4263E37F3EA8853E4D355C704455E9052C9(L_31, L_32, L_33, NULL);
		// if (ret == PXR_Audio.Spatializer.Result.Success)
		if (L_34)
		{
			goto IL_00fd;
		}
	}
	{
		// sourceGainChanged = false;
		__this->___sourceGainChanged_6 = (bool)0;
	}

IL_00fd:
	{
		// if (sourceSizeChanged)
		bool L_35 = __this->___sourceSizeChanged_8;
		if (!L_35)
		{
			goto IL_0125;
		}
	}
	{
		// PXR_Audio.Spatializer.Result ret = Context.SetSourceSize(sourceId, sourceSize);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_36;
		L_36 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		int32_t L_37 = __this->___sourceId_19;
		float L_38 = __this->___sourceSize_7;
		NullCheck(L_36);
		int32_t L_39;
		L_39 = PXR_Audio_Spatializer_Context_SetSourceSize_mEDE7DA51A2B63EEEE1420BD169F62F35CCA50D6B(L_36, L_37, L_38, NULL);
		// if (ret == PXR_Audio.Spatializer.Result.Success)
		if (L_39)
		{
			goto IL_0125;
		}
	}
	{
		// sourceSizeChanged = false;
		__this->___sourceSizeChanged_8 = (bool)0;
	}

IL_0125:
	{
		// if (enableDopplerChanged)
		bool L_40 = __this->___enableDopplerChanged_10;
		if (!L_40)
		{
			goto IL_014d;
		}
	}
	{
		// PXR_Audio.Spatializer.Result ret = Context.SetDopplerEffect(sourceId, enableDoppler);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_41;
		L_41 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		int32_t L_42 = __this->___sourceId_19;
		bool L_43 = __this->___enableDoppler_9;
		NullCheck(L_41);
		int32_t L_44;
		L_44 = PXR_Audio_Spatializer_Context_SetDopplerEffect_m824508019E0E85718BCB237DF303AF5824B2116E(L_41, L_42, L_43, NULL);
		// if (ret == PXR_Audio.Spatializer.Result.Success)
		if (L_44)
		{
			goto IL_014d;
		}
	}
	{
		// enableDopplerChanged = false;
		__this->___enableDopplerChanged_10 = (bool)0;
	}

IL_014d:
	{
		// if (attenuationDistanceChanged)
		bool L_45 = __this->___attenuationDistanceChanged_14;
		if (!L_45)
		{
			goto IL_017b;
		}
	}
	{
		// PXR_Audio.Spatializer.Result ret =
		//     Context.SetSourceRange(sourceId, minAttenuationDistance, maxAttenuationDistance);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_46;
		L_46 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		int32_t L_47 = __this->___sourceId_19;
		float L_48 = __this->___minAttenuationDistance_12;
		float L_49 = __this->___maxAttenuationDistance_13;
		NullCheck(L_46);
		int32_t L_50;
		L_50 = PXR_Audio_Spatializer_Context_SetSourceRange_mAD2D76262B2DDF0C10BCF8DB25EC926A3C355AC1(L_46, L_47, L_48, L_49, NULL);
		// if (ret == PXR_Audio.Spatializer.Result.Success)
		if (L_50)
		{
			goto IL_017b;
		}
	}
	{
		// attenuationDistanceChanged = false;
		__this->___attenuationDistanceChanged_14 = (bool)0;
	}

IL_017b:
	{
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_OnDisable_m340923A735D1E2F8FBCCF4E03EE7E831DE157EB8 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) 
{
	{
		// isActive = false;
		__this->___isActive_15 = (bool)0;
		// isAudioDSPInProgress = false;
		__this->___isAudioDSPInProgress_16 = (bool)0;
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_OnDestroy_mA23FC88B433CBE32233949C28DE4707C8CF70764 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) 
{
	{
		// DestroyInternal();
		PXR_Audio_Spatializer_AudioSource_DestroyInternal_mE4DC2F75E9E1B69E8C9A8EF4F3D8A19B0CFA4905(__this, NULL);
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::DestroyInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_DestroyInternal_mE4DC2F75E9E1B69E8C9A8EF4F3D8A19B0CFA4905 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_t3CEB031445F0804AA3AD2D5E6DCDCD01EC966B50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92946F39A43FE422EB9BE48EF20C2C8BD9FE565A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93FBDF9D903C80EB00BD26BD4E0D480C39737B6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8BE580847AF7138A866E1499FB3D12F470A7AC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5341FBAF4663F013BBE5479BF640E57B1287B1C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// isActive = false;
		__this->___isActive_15 = (bool)0;
		// if (context != null && context.Initialized)
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_0 = __this->___context_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_2 = __this->___context_17;
		NullCheck(L_2);
		bool L_3;
		L_3 = PXR_Audio_Spatializer_Context_get_Initialized_m2BB4B8AF8AF269F7F792B4DF614D45A666228174_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0084;
		}
	}
	{
		// var ret = context.RemoveSource(sourceId);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_4 = __this->___context_17;
		int32_t L_5 = __this->___sourceId_19;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = PXR_Audio_Spatializer_Context_RemoveSource_m7FAB5EFBE5EECEC36EDA23D1F8CD8E5D9B0F4289(L_4, L_5, NULL);
		V_0 = L_6;
		// if (ret != PXR_Audio.Spatializer.Result.Success)
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		// Debug.LogError("Failed to delete source #" + sourceId + ", error code is: " + ret);
		int32_t* L_8 = (&__this->___sourceId_19);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_8, NULL);
		Il2CppFakeBox<int32_t> L_10(Result_t3CEB031445F0804AA3AD2D5E6DCDCD01EC966B50_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_11;
		L_11 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_10), NULL);
		String_t* L_12;
		L_12 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralA8BE580847AF7138A866E1499FB3D12F470A7AC9, L_9, _stringLiteralC5341FBAF4663F013BBE5479BF640E57B1287B1C, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_12, NULL);
		goto IL_0084;
	}

IL_0065:
	{
		// Debug.Log("Source #" + sourceId + " is deleted.");
		int32_t* L_13 = (&__this->___sourceId_19);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral92946F39A43FE422EB9BE48EF20C2C8BD9FE565A, L_14, _stringLiteral93FBDF9D903C80EB00BD26BD4E0D480C39737B6A, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
	}

IL_0084:
	{
		// isAudioDSPInProgress = false;
		__this->___isAudioDSPInProgress_16 = (bool)0;
		// sourceId = -1;
		__this->___sourceId_19 = (-1);
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_OnAudioFilterRead_m945AB5082985FE5DD43A3A211D6AF0614357E14B (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___channels1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// if (!isActive || sourceId < 0 || context == null || !context.Initialized)
		bool L_0 = __this->___isActive_15;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_1 = __this->___sourceId_19;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_2 = __this->___context_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_4 = __this->___context_17;
		NullCheck(L_4);
		bool L_5;
		L_5 = PXR_Audio_Spatializer_Context_get_Initialized_m2BB4B8AF8AF269F7F792B4DF614D45A666228174_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0043;
		}
	}

IL_002c:
	{
		// for (int i = 0; i < data.Length; ++i)
		V_2 = 0;
		goto IL_003c;
	}

IL_0030:
	{
		// data[i] = 0.0f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___data0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)(0.0f));
		// for (int i = 0; i < data.Length; ++i)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003c:
	{
		// for (int i = 0; i < data.Length; ++i)
		int32_t L_9 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = ___data0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		// return;
		return;
	}

IL_0043:
	{
		// isAudioDSPInProgress = true;
		__this->___isAudioDSPInProgress_16 = (bool)1;
		// int numFrames = data.Length / channels;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = ___data0;
		NullCheck(L_11);
		int32_t L_12 = ___channels1;
		V_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_11)->max_length))/L_12));
		// float oneOverChannelsF = 1.0f / ((float)channels);
		int32_t L_13 = ___channels1;
		V_1 = ((float)((1.0f)/((float)L_13)));
		// if (channels > 1)
		int32_t L_14 = ___channels1;
		if ((((int32_t)L_14) <= ((int32_t)1)))
		{
			goto IL_0094;
		}
	}
	{
		// for (int frame = 0; frame < numFrames; ++frame)
		V_3 = 0;
		goto IL_0090;
	}

IL_0061:
	{
		// float sample = 0.0f;
		V_4 = (0.0f);
		// for (int channel = 0; channel < channels; ++channel)
		V_5 = 0;
		goto IL_0080;
	}

IL_006d:
	{
		// sample += data[frame * channels + channel];
		float L_15 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = ___data0;
		int32_t L_17 = V_3;
		int32_t L_18 = ___channels1;
		int32_t L_19 = V_5;
		NullCheck(L_16);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_17, L_18)), L_19));
		float L_21 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((float)il2cpp_codegen_add(L_15, L_21));
		// for (int channel = 0; channel < channels; ++channel)
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0080:
	{
		// for (int channel = 0; channel < channels; ++channel)
		int32_t L_23 = V_5;
		int32_t L_24 = ___channels1;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_006d;
		}
	}
	{
		// data[frame] = sample * oneOverChannelsF;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = ___data0;
		int32_t L_26 = V_3;
		float L_27 = V_4;
		float L_28 = V_1;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (float)((float)il2cpp_codegen_multiply(L_27, L_28)));
		// for (int frame = 0; frame < numFrames; ++frame)
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0090:
	{
		// for (int frame = 0; frame < numFrames; ++frame)
		int32_t L_30 = V_3;
		int32_t L_31 = V_0;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0061;
		}
	}

IL_0094:
	{
		// Context.SubmitSourceBuffer(sourceId, data, (uint)numFrames);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_32;
		L_32 = PXR_Audio_Spatializer_AudioSource_get_Context_m7C93FA1CFB084128D95714985128F19E09CC116B(__this, NULL);
		int32_t L_33 = __this->___sourceId_19;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = ___data0;
		int32_t L_35 = V_0;
		NullCheck(L_32);
		int32_t L_36;
		L_36 = PXR_Audio_Spatializer_Context_SubmitSourceBuffer_m04CB3848C6564820A7F0F64992D8C6939E3A80A4(L_32, L_33, L_34, L_35, NULL);
		// for (int i = 0; i < data.Length; ++i)
		V_6 = 0;
		goto IL_00bc;
	}

IL_00ad:
	{
		// data[i] = 0.0f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = ___data0;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (float)(0.0f));
		// for (int i = 0; i < data.Length; ++i)
		int32_t L_39 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00bc:
	{
		// for (int i = 0; i < data.Length; ++i)
		int32_t L_40 = V_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = ___data0;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00ad;
		}
	}
	{
		// isAudioDSPInProgress = false;
		__this->___isAudioDSPInProgress_16 = (bool)0;
		// }
		return;
	}
}
// System.Single PXR_Audio_Spatializer_AudioSource::DB2Mag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PXR_Audio_Spatializer_AudioSource_DB2Mag_m2BF91D11BCD36F0AA2AE76B9C4BB0C0B85A198BD (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, float ___db0, const RuntimeMethod* method) 
{
	{
		// return Mathf.Pow(10.0f, db / 20.0f);
		float L_0 = ___db0;
		float L_1;
		L_1 = powf((10.0f), ((float)(L_0/(20.0f))));
		return L_1;
	}
}
// System.Single PXR_Audio_Spatializer_AudioSource::Mag2DB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PXR_Audio_Spatializer_AudioSource_Mag2DB_m65BFBA07D2EFBCDB2337C5334CB9D353D4AB2EA7 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, float ___mag0, const RuntimeMethod* method) 
{
	{
		// return 20 * Mathf.Log10(mag);
		float L_0 = ___mag0;
		float L_1;
		L_1 = log10f(L_0);
		return ((float)il2cpp_codegen_multiply((20.0f), L_1));
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource_OnDrawGizmos_m5D0EC0BC91AE29057CC635A70A01B27A887173C7 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// c.r = 1.0f;
		(&V_0)->___r_0 = (1.0f);
		// c.g = 0.0f;
		(&V_0)->___g_1 = (0.0f);
		// c.b = 1.0f;
		(&V_0)->___b_2 = (1.0f);
		// c.a = 1.0f;
		(&V_0)->___a_3 = (1.0f);
		// Gizmos.color = c;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = V_0;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Gizmos.DrawWireSphere(transform.position, sourceSize);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___sourceSize_7;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_2, L_3, NULL);
		// c.a = colorSolidAlpha;
		(&V_0)->___a_3 = (0.100000001f);
		// Gizmos.color = c;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_4, NULL);
		// Gizmos.DrawSphere(transform.position, sourceSize);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = __this->___sourceSize_7;
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_6, L_7, NULL);
		// if (sourceAttenuationMode == SourceAttenuationMode.InverseSquare)
		int32_t L_8 = __this->___sourceAttenuationMode_11;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0168;
		}
	}
	{
		// c.r = 1.0f;
		(&V_0)->___r_0 = (1.0f);
		// c.g = 0.35f;
		(&V_0)->___g_1 = (0.349999994f);
		// c.b = 0.0f;
		(&V_0)->___b_2 = (0.0f);
		// c.a = 1.0f;
		(&V_0)->___a_3 = (1.0f);
		// Gizmos.color = c;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_9, NULL);
		// Gizmos.DrawWireSphere(transform.position, minAttenuationDistance);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = __this->___minAttenuationDistance_12;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_11, L_12, NULL);
		// c.a = colorSolidAlpha;
		(&V_0)->___a_3 = (0.100000001f);
		// Gizmos.color = c;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_13, NULL);
		// Gizmos.DrawSphere(transform.position, minAttenuationDistance);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = __this->___minAttenuationDistance_12;
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_15, L_16, NULL);
		// c.r = 0.0f;
		(&V_0)->___r_0 = (0.0f);
		// c.g = 1.0f;
		(&V_0)->___g_1 = (1.0f);
		// c.b = 1.0f;
		(&V_0)->___b_2 = (1.0f);
		// c.a = 1.0f;
		(&V_0)->___a_3 = (1.0f);
		// Gizmos.color = c;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_17, NULL);
		// Gizmos.DrawWireSphere(transform.position, maxAttenuationDistance);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = __this->___maxAttenuationDistance_13;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_19, L_20, NULL);
		// c.a = colorSolidAlpha;
		(&V_0)->___a_3 = (0.100000001f);
		// Gizmos.color = c;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = V_0;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_21, NULL);
		// Gizmos.DrawSphere(transform.position, maxAttenuationDistance);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = __this->___maxAttenuationDistance_13;
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_23, L_24, NULL);
	}

IL_0168:
	{
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_AudioSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_AudioSource__ctor_m63CD70667C1744E5202B1E929B483884F53638C3 (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float sourceGainAmplitude = 1.0f;
		__this->___sourceGainAmplitude_5 = (1.0f);
		// [SerializeField] private bool enableDoppler = true;
		__this->___enableDoppler_9 = (bool)1;
		// [SerializeField] public SourceAttenuationMode sourceAttenuationMode = SourceAttenuationMode.InverseSquare;
		__this->___sourceAttenuationMode_11 = 2;
		// [SerializeField] public float minAttenuationDistance = 1.0f;
		__this->___minAttenuationDistance_12 = (1.0f);
		// [SerializeField] public float maxAttenuationDistance = 100.0f;
		__this->___maxAttenuationDistance_13 = (100.0f);
		// private int sourceId = -1;
		__this->___sourceId_19 = (-1);
		// private int currentContextUuid = -2;
		__this->___currentContextUuid_20 = ((int32_t)-2);
		// private float[] positionArray = new float[3] { 0.0f, 0.0f, 0.0f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___positionArray_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positionArray_21), (void*)L_0);
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
// PXR_Audio.Spatializer.Api PXR_Audio_Spatializer_Context::get_PXR_Audio_Spatializer_Api()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Api_t64D8A27773AE5882B3B45C264344706B43D1141A* PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_api == null)
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0 = ((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____api_5;
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// if (spatializerApiImpl == SpatializerApiImpl.unity)
		int32_t L_1 = __this->___spatializerApiImpl_4;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// _api = new ApiUnityImpl();
		ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* L_2 = (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8*)il2cpp_codegen_object_new(ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApiUnityImpl__ctor_m4687F4B6771497056FE2271446D857204F49E77B(L_2, NULL);
		((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____api_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____api_5), (void*)L_2);
		goto IL_002e;
	}

IL_001b:
	{
		// else if (spatializerApiImpl == SpatializerApiImpl.wwise)
		int32_t L_3 = __this->___spatializerApiImpl_4;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		// _api = new ApiWwiseImpl();
		ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* L_4 = (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B*)il2cpp_codegen_object_new(ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ApiWwiseImpl__ctor_m85C99C89CFF41EFB859C8B8B47A8549E27805BE7(L_4, NULL);
		((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____api_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____api_5), (void*)L_4);
	}

IL_002e:
	{
		// return _api;
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_5 = ((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____api_5;
		return L_5;
	}
}
// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_Context::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* PXR_Audio_Spatializer_Context_get_Instance_m2C5DEDC032B552279DF0796E599F3ADEC18493B0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PXR_Audio_Spatializer_Context Instance => _instance;
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_0 = ((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____instance_6;
		return L_0;
	}
}
// System.Boolean PXR_Audio_Spatializer_Context::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PXR_Audio_Spatializer_Context_get_Initialized_m2BB4B8AF8AF269F7F792B4DF614D45A666228174 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) 
{
	{
		// get => initialized;
		bool L_0 = __this->___initialized_8;
		return L_0;
	}
}
// PXR_Audio.Spatializer.RenderingMode PXR_Audio_Spatializer_Context::get_RenderingQuality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_get_RenderingQuality_m1C8C346F1DE1797C1CB249AD56B655C76078AE03 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) 
{
	{
		// public PXR_Audio.Spatializer.RenderingMode RenderingQuality => renderingQuality;
		int32_t L_0 = __this->___renderingQuality_9;
		return L_0;
	}
}
// UnityEngine.AudioConfiguration PXR_Audio_Spatializer_Context::get_AudioConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D PXR_Audio_Spatializer_Context_get_AudioConfig_m9BD1AAAEFDC1CCBA504001A85C6E05FF499BFA3E (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) 
{
	{
		// public AudioConfiguration AudioConfig => audioConfig;
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_0 = __this->___audioConfig_11;
		return L_0;
	}
}
// System.Boolean PXR_Audio_Spatializer_Context::get_Bypass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PXR_Audio_Spatializer_Context_get_Bypass_m706DC67E578EE617B6120AFEC998C0353C516167 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) 
{
	{
		// private bool Bypass => bypass;
		bool L_0 = __this->___bypass_12;
		return L_0;
	}
}
// System.Int32 PXR_Audio_Spatializer_Context::GetUuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_GetUuid_m78CE6D6D85F4F1E8F71D65AF271E14BADAECB4D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// var temp = uuidCounter;
		int32_t L_0 = ((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->___uuidCounter_13;
		// uuidCounter = (uuidCounter == Int32.MaxValue) ? 0 : (uuidCounter + 1);
		int32_t L_1 = ((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->___uuidCounter_13;
		G_B1_0 = L_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)2147483647LL))))
		{
			G_B2_0 = L_0;
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->___uuidCounter_13;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->___uuidCounter_13 = G_B3_0;
		// return temp;
		return G_B3_1;
	}
}
// System.Int32 PXR_Audio_Spatializer_Context::get_UUID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_get_UUID_mF1F08338481FCAB772AC1490572CB58E6FC44668 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) 
{
	{
		// public int UUID => uuid;
		int32_t L_0 = __this->___uuid_14;
		return L_0;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SubmitMesh(System.Single[],System.Int32,System.Int32[],System.Int32,PXR_Audio.Spatializer.AcousticsMaterial,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SubmitMesh_m3AA395F787AB8F802DD5DD5B42AA20F6B1097601 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices0, int32_t ___verticesCount1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices2, int32_t ___indicesCount3, int32_t ___material4, int32_t* ___geometryId5, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SubmitMesh(
		//     context,
		//     vertices,
		//     verticesCount,
		//     indices,
		//     indicesCount,
		//     material,
		//     ref geometryId);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___vertices0;
		int32_t L_3 = ___verticesCount1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___indices2;
		int32_t L_5 = ___indicesCount3;
		int32_t L_6 = ___material4;
		int32_t* L_7 = ___geometryId5;
		NullCheck(L_0);
		int32_t L_8;
		L_8 = VirtualFuncInvoker7< int32_t, intptr_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, int32_t* >::Invoke(7 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SubmitMesh(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,PXR_Audio.Spatializer.AcousticsMaterial,System.Int32&) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SubmitMeshAndMaterialFactor(System.Single[],System.Int32,System.Int32[],System.Int32,System.Single[],System.Single,System.Single,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SubmitMeshAndMaterialFactor_mACE6829D79C3F3F145E7D8BA854790889F6C7638 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices0, int32_t ___verticesCount1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices2, int32_t ___indicesCount3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor4, float ___scatteringFactor5, float ___transmissionFactor6, int32_t* ___geometryId7, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SubmitMeshAndMaterialFactor(
		//     context,
		//     vertices,
		//     verticesCount,
		//     indices,
		//     indicesCount,
		//     absorptionFactor,
		//     scatteringFactor,
		//     transmissionFactor,
		//     ref geometryId);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___vertices0;
		int32_t L_3 = ___verticesCount1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___indices2;
		int32_t L_5 = ___indicesCount3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___absorptionFactor4;
		float L_7 = ___scatteringFactor5;
		float L_8 = ___transmissionFactor6;
		int32_t* L_9 = ___geometryId7;
		NullCheck(L_0);
		int32_t L_10;
		L_10 = VirtualFuncInvoker9< int32_t, intptr_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, float, float, int32_t* >::Invoke(8 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SubmitMeshAndMaterialFactor(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,System.Single[],System.Single,System.Single,System.Int32&) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9);
		return L_10;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::AddSource(PXR_Audio.Spatializer.SourceMode,System.Single[],System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_AddSource_m67FC93306D95F2E2CD671A6D4EA04958325190D3 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceMode0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position1, int32_t* ___sourceId2, bool ___isAsync3, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.AddSource(
		//     context,
		//     sourceMode,
		//     position,
		//     ref sourceId,
		//     isAsync);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		int32_t L_2 = ___sourceMode0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___position1;
		int32_t* L_4 = ___sourceId2;
		bool L_5 = ___isAsync3;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtualFuncInvoker5< int32_t, intptr_t, int32_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t*, bool >::Invoke(13 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::AddSource(System.IntPtr,PXR_Audio.Spatializer.SourceMode,System.Single[],System.Int32&,System.Boolean) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::AddSourceWithOrientation(PXR_Audio.Spatializer.SourceMode,System.Single[],System.Single[],System.Single[],System.Single,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_AddSourceWithOrientation_m44F3B730E529C849386048BD4157AAB3E0464938 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___mode0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up3, float ___radius4, int32_t* ___sourceId5, bool ___isAsync6, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.AddSourceWithOrientation(
		//     context,
		//     mode,
		//     position,
		//     front,
		//     up,
		//     radius,
		//     ref sourceId,
		//     isAsync);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		int32_t L_2 = ___mode0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___position1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___front2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___up3;
		float L_6 = ___radius4;
		int32_t* L_7 = ___sourceId5;
		bool L_8 = ___isAsync6;
		NullCheck(L_0);
		int32_t L_9;
		L_9 = VirtualFuncInvoker8< int32_t, intptr_t, int32_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, float, int32_t*, bool >::Invoke(14 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::AddSourceWithOrientation(System.IntPtr,PXR_Audio.Spatializer.SourceMode,System.Single[],System.Single[],System.Single[],System.Single,System.Int32&,System.Boolean) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::AddSourceWithConfig(PXR_Audio.Spatializer.SourceConfig&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_AddSourceWithConfig_m99B250A6CD07F026B9ADC9E899058ADA76C00F38 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9* ___sourceConfig0, int32_t* ___sourceId1, bool ___isAsync2, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.AddSourceWithConfig(context, ref sourceConfig, ref sourceId, isAsync);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9* L_2 = ___sourceConfig0;
		int32_t* L_3 = ___sourceId1;
		bool L_4 = ___isAsync2;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = VirtualFuncInvoker4< int32_t, intptr_t, SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9*, int32_t*, bool >::Invoke(15 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::AddSourceWithConfig(System.IntPtr,PXR_Audio.Spatializer.SourceConfig&,System.Int32&,System.Boolean) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetSourceAttenuationMode(System.Int32,PXR_Audio.Spatializer.SourceAttenuationMode,PXR_Audio.Spatializer.DistanceAttenuationCallback,PXR_Audio.Spatializer.DistanceAttenuationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetSourceAttenuationMode_m412784BA0D284BC10ACE5C5BBF30CE4CAA3C9EE8 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, int32_t ___mode1, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* ___directDistanceAttenuationCallback2, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* ___indirectDistanceAttenuationCallback3, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SetSourceAttenuationMode(context, sourceId, mode,
		//     directDistanceAttenuationCallback, indirectDistanceAttenuationCallback);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		int32_t L_2 = ___sourceId0;
		int32_t L_3 = ___mode1;
		DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* L_4 = ___directDistanceAttenuationCallback2;
		DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* L_5 = ___indirectDistanceAttenuationCallback3;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtualFuncInvoker5< int32_t, intptr_t, int32_t, int32_t, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D*, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* >::Invoke(16 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SetSourceAttenuationMode(System.IntPtr,System.Int32,PXR_Audio.Spatializer.SourceAttenuationMode,PXR_Audio.Spatializer.DistanceAttenuationCallback,PXR_Audio.Spatializer.DistanceAttenuationCallback) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetSourceRange(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetSourceRange_mAD2D76262B2DDF0C10BCF8DB25EC926A3C355AC1 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, float ___rangeMin1, float ___rangeMax2, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SetSourceRange(context, sourceId, rangeMin, rangeMax);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		int32_t L_2 = ___sourceId0;
		float L_3 = ___rangeMin1;
		float L_4 = ___rangeMax2;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = VirtualFuncInvoker4< int32_t, intptr_t, int32_t, float, float >::Invoke(17 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SetSourceRange(System.IntPtr,System.Int32,System.Single,System.Single) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::RemoveSource(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_RemoveSource_m7FAB5EFBE5EECEC36EDA23D1F8CD8E5D9B0F4289 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.RemoveSource(context, sourceId);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		int32_t L_2 = ___sourceId0;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtualFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(18 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::RemoveSource(System.IntPtr,System.Int32) */, L_0, L_1, L_2);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SubmitSourceBuffer(System.Int32,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SubmitSourceBuffer_m04CB3848C6564820A7F0F64992D8C6939E3A80A4 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputBufferPtr1, uint32_t ___numFrames2, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SubmitSourceBuffer(
		//     context,
		//     sourceId,
		//     inputBufferPtr,
		//     numFrames);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		int32_t L_2 = ___sourceId0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___inputBufferPtr1;
		uint32_t L_4 = ___numFrames2;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = VirtualFuncInvoker4< int32_t, intptr_t, int32_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, uint32_t >::Invoke(19 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SubmitSourceBuffer(System.IntPtr,System.Int32,System.Single[],System.UInt32) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SubmitAmbisonicChannelBuffer(System.Single[],System.Int32,System.Int32,PXR_Audio.Spatializer.AmbisonicNormalizationType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SubmitAmbisonicChannelBuffer_m5DB92F6C2FDB487D5B8087BF09876F6849664D49 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___ambisonicChannelBuffer0, int32_t ___order1, int32_t ___degree2, int32_t ___normType3, float ___gain4, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SubmitAmbisonicChannelBuffer(
		//     context,
		//     ambisonicChannelBuffer,
		//     order,
		//     degree,
		//     normType,
		//     gain);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___ambisonicChannelBuffer0;
		int32_t L_3 = ___order1;
		int32_t L_4 = ___degree2;
		int32_t L_5 = ___normType3;
		float L_6 = ___gain4;
		NullCheck(L_0);
		int32_t L_7;
		L_7 = VirtualFuncInvoker6< int32_t, intptr_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, int32_t, int32_t, float >::Invoke(20 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SubmitAmbisonicChannelBuffer(System.IntPtr,System.Single[],System.Int32,System.Int32,PXR_Audio.Spatializer.AmbisonicNormalizationType,System.Single) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SubmitInterleavedAmbisonicBuffer(System.Single[],System.Int32,PXR_Audio.Spatializer.AmbisonicNormalizationType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SubmitInterleavedAmbisonicBuffer_m0456457C3D5C7BC45111B65D6D6FB723AB55AA25 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___ambisonicBuffer0, int32_t ___ambisonicOrder1, int32_t ___normType2, float ___gain3, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SubmitInterleavedAmbisonicBuffer(
		//     context,
		//     ambisonicBuffer,
		//     ambisonicOrder,
		//     normType,
		//     gain);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___ambisonicBuffer0;
		int32_t L_3 = ___ambisonicOrder1;
		int32_t L_4 = ___normType2;
		float L_5 = ___gain3;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtualFuncInvoker5< int32_t, intptr_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, int32_t, float >::Invoke(21 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SubmitInterleavedAmbisonicBuffer(System.IntPtr,System.Single[],System.Int32,PXR_Audio.Spatializer.AmbisonicNormalizationType,System.Single) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SubmitMatrixInputBuffer(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SubmitMatrixInputBuffer_m1656EF5C0AD5207034F0D63218F2B5820FAB6511 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputBuffer0, int32_t ___inputChannelIndex1, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SubmitMatrixInputBuffer(
		//     context,
		//     inputBuffer,
		//     inputChannelIndex);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___inputBuffer0;
		int32_t L_3 = ___inputChannelIndex1;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, intptr_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t >::Invoke(22 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SubmitMatrixInputBuffer(System.IntPtr,System.Single[],System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::GetInterleavedBinauralBuffer(System.Single[],System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_GetInterleavedBinauralBuffer_mCDA1C70D1EB53F3277826CC7DF1BA03E42181DF2 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___outputBufferPtr0, uint32_t ___numFrames1, bool ___isAccumulative2, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.GetInterleavedBinauralBuffer(
		//     context,
		//     outputBufferPtr,
		//     numFrames,
		//     isAccumulative);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___outputBufferPtr0;
		uint32_t L_3 = ___numFrames1;
		bool L_4 = ___isAccumulative2;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = VirtualFuncInvoker4< int32_t, intptr_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, uint32_t, bool >::Invoke(23 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::GetInterleavedBinauralBuffer(System.IntPtr,System.Single[],System.UInt32,System.Boolean) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::GetPlanarBinauralBuffer(System.Single[][],System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_GetPlanarBinauralBuffer_m053EF005386AB304A7F5DACFF551C6E2FFE42B57 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___outputBufferPtr0, uint32_t ___numFrames1, bool ___isAccumulative2, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.GetPlanarBinauralBuffer(
		//     context,
		//     outputBufferPtr,
		//     numFrames,
		//     isAccumulative);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_2 = ___outputBufferPtr0;
		uint32_t L_3 = ___numFrames1;
		bool L_4 = ___isAccumulative2;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = VirtualFuncInvoker4< int32_t, intptr_t, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*, uint32_t, bool >::Invoke(24 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::GetPlanarBinauralBuffer(System.IntPtr,System.Single[][],System.UInt32,System.Boolean) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::GetInterleavedLoudspeakersBuffer(System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_GetInterleavedLoudspeakersBuffer_mA023267E96850177CEEA35BE09D7806C687B2A85 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___outputBufferPtr0, uint32_t ___numFrames1, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.GetInterleavedLoudspeakersBuffer(
		//     context,
		//     outputBufferPtr,
		//     numFrames);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___outputBufferPtr0;
		uint32_t L_3 = ___numFrames1;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, intptr_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, uint32_t >::Invoke(25 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::GetInterleavedLoudspeakersBuffer(System.IntPtr,System.Single[],System.UInt32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::GetPlanarLoudspeakersBuffer(System.Single[][],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_GetPlanarLoudspeakersBuffer_m8BAFCB471C016DD9FBD721CC7542A66FF329DB5F (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___outputBufferPtr0, uint32_t ___numFrames1, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.GetPlanarLoudspeakersBuffer(
		//     context,
		//     outputBufferPtr,
		//     numFrames);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_2 = ___outputBufferPtr0;
		uint32_t L_3 = ___numFrames1;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, intptr_t, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4*, uint32_t >::Invoke(26 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::GetPlanarLoudspeakersBuffer(System.IntPtr,System.Single[][],System.UInt32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetPlaybackMode(PXR_Audio.Spatializer.PlaybackMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetPlaybackMode_m9B6E3E012383A8BE58E55CFA890BB3913766117F (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___playbackMode0, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SetPlaybackMode(
		//     context,
		//     playbackMode);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		int32_t L_2 = ___playbackMode0;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtualFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(29 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SetPlaybackMode(System.IntPtr,PXR_Audio.Spatializer.PlaybackMode) */, L_0, L_1, L_2);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetLoudspeakerArray(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetLoudspeakerArray_m4002F7C7B0B905B8EA2866809CB0281F575C6286 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___positions0, int32_t ___numLoudspeakers1, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SetLoudspeakerArray(
		//     context,
		//     positions,
		//     numLoudspeakers);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___positions0;
		int32_t L_3 = ___numLoudspeakers1;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, intptr_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t >::Invoke(30 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SetLoudspeakerArray(System.IntPtr,System.Single[],System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetMappingMatrix(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetMappingMatrix_mB7DBA62EF018D5CCB665708F9D8B96E08688C547 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___matrix0, int32_t ___numInputChannels1, int32_t ___numOutputChannels2, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SetMappingMatrix(
		//     context,
		//     matrix,
		//     numInputChannels,
		//     numOutputChannels);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___matrix0;
		int32_t L_3 = ___numInputChannels1;
		int32_t L_4 = ___numOutputChannels2;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = VirtualFuncInvoker4< int32_t, intptr_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, int32_t >::Invoke(31 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SetMappingMatrix(System.IntPtr,System.Single[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetListenerPosition(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetListenerPosition_mBD461F7AF77AFC2881C77AE667E6E7868F73B7FF (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position0, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SetListenerPosition(
		//     context,
		//     position);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___position0;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtualFuncInvoker2< int32_t, intptr_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(32 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SetListenerPosition(System.IntPtr,System.Single[]) */, L_0, L_1, L_2);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetListenerOrientation(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetListenerOrientation_m2BF32CF558A67A66E429663E499D507AFD7E9D35 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up1, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SetListenerOrientation(
		//     context,
		//     front,
		//     up);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___front0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___up1;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, intptr_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(33 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SetListenerOrientation(System.IntPtr,System.Single[],System.Single[]) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetListenerPose(System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetListenerPose_mB46C2F5177C971EBF9F8788F22E1DD729AED05F3 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up2, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SetListenerPose(
		//     context,
		//     position,
		//     front,
		//     up);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___position0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___front1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___up2;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = VirtualFuncInvoker4< int32_t, intptr_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(34 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SetListenerPose(System.IntPtr,System.Single[],System.Single[],System.Single[]) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetSourcePosition(System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetSourcePosition_mA1B2630A9F08457B72F29774DE89501EB403A4AE (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position1, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SetSourcePosition(
		//     context,
		//     sourceId,
		//     position);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		int32_t L_2 = ___sourceId0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___position1;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, intptr_t, int32_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(35 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SetSourcePosition(System.IntPtr,System.Int32,System.Single[]) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetSourceGain(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetSourceGain_mA9EFA4263E37F3EA8853E4D355C704455E9052C9 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, float ___gain1, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SetSourceGain(
		//     context,
		//     sourceId,
		//     gain);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		int32_t L_2 = ___sourceId0;
		float L_3 = ___gain1;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, intptr_t, int32_t, float >::Invoke(36 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SetSourceGain(System.IntPtr,System.Int32,System.Single) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetSourceSize(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetSourceSize_mEDE7DA51A2B63EEEE1420BD169F62F35CCA50D6B (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, float ___volumetricSize1, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SetSourceSize(
		//     context,
		//     sourceId,
		//     volumetricSize);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		int32_t L_2 = ___sourceId0;
		float L_3 = ___volumetricSize1;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, intptr_t, int32_t, float >::Invoke(37 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SetSourceSize(System.IntPtr,System.Int32,System.Single) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::UpdateSourceMode(System.Int32,PXR_Audio.Spatializer.SourceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_UpdateSourceMode_m3C68641C44479CA6947B9A276C344B89B2DF2309 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.UpdateSourceMode(
		//     context,
		//     sourceId,
		//     mode);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		int32_t L_2 = ___sourceId0;
		int32_t L_3 = ___mode1;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, intptr_t, int32_t, int32_t >::Invoke(38 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::UpdateSourceMode(System.IntPtr,System.Int32,PXR_Audio.Spatializer.SourceMode) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_Context::SetDopplerEffect(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_SetDopplerEffect_m824508019E0E85718BCB237DF303AF5824B2116E (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___sourceId0, bool ___on1, const RuntimeMethod* method) 
{
	{
		// return PXR_Audio_Spatializer_Api.SetDopplerEffect(context, sourceId, on);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		int32_t L_2 = ___sourceId0;
		bool L_3 = ___on1;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, intptr_t, int32_t, bool >::Invoke(28 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::SetDopplerEffect(System.IntPtr,System.Int32,System.Boolean) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void PXR_Audio_Spatializer_Context::OnAudioConfigurationChangedEventHandler(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_Context_OnAudioConfigurationChangedEventHandler_m2A37DF93A73D469A432A7CA406475A3959AD3052 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, bool ___deviceWasChanged0, const RuntimeMethod* method) 
{
	{
		// audioConfig = AudioSettings.GetConfiguration();
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_0;
		L_0 = AudioSettings_GetConfiguration_mDA005BAD9577EBBE375F6D6C040D7F110508C910(NULL);
		__this->___audioConfig_11 = L_0;
		// ResetContext(renderingQuality);
		int32_t L_1 = __this->___renderingQuality_9;
		PXR_Audio_Spatializer_Context_ResetContext_m583D2D2C04649D660724FB327215C0C62D3F94CA(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_Context::SetRenderingQuality(PXR_Audio.Spatializer.RenderingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_Context_SetRenderingQuality_m903358426A84C32A8C8303F3E8409FBEE7A0B56D (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___quality0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderingMode_tD457D1453B814D6C77D4C492BEABB498008379E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral159AB672B9FFB999CFC642C984A730E30204CFF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// renderingQuality = quality;
		int32_t L_0 = ___quality0;
		__this->___renderingQuality_9 = L_0;
		// AudioSettings.Reset(AudioSettings.GetConfiguration());
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_1;
		L_1 = AudioSettings_GetConfiguration_mDA005BAD9577EBBE375F6D6C040D7F110508C910(NULL);
		bool L_2;
		L_2 = AudioSettings_Reset_mA15BD1F6C3A6C78D85845D3D86C4271559A12D75(L_1, NULL);
		// Debug.Log("Pico Spatializer has set rendering quality to: " + renderingQuality);
		int32_t* L_3 = (&__this->___renderingQuality_9);
		Il2CppFakeBox<int32_t> L_4(RenderingMode_tD457D1453B814D6C77D4C492BEABB498008379E9_il2cpp_TypeInfo_var, L_3);
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral159AB672B9FFB999CFC642C984A730E30204CFF1, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_Context::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_Context_OnEnable_m5318A2BBB1A101ECF5950B417827F47A57F27F81 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PXR_Audio_Spatializer_Context_OnAudioConfigurationChangedEventHandler_m2A37DF93A73D469A432A7CA406475A3959AD3052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EB55A735670D9BC9AFD323DC93AE36440B6F110);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_0 = ((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// _instance = this;
		((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____instance_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____instance_6), (void*)__this);
		// AudioSettings.OnAudioConfigurationChanged += OnAudioConfigurationChangedEventHandler;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_2 = (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)il2cpp_codegen_object_new(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AudioConfigurationChangeHandler__ctor_mA9827AB9472EC8EE0A0F0FC24EBC06B4740DD944(L_2, __this, (intptr_t)((void*)PXR_Audio_Spatializer_Context_OnAudioConfigurationChangedEventHandler_m2A37DF93A73D469A432A7CA406475A3959AD3052_RuntimeMethod_var), NULL);
		AudioSettings_add_OnAudioConfigurationChanged_m53F7FD8FF545E23217D2271424843E27AF31585F(L_2, NULL);
		// StartInternal(renderingQuality);
		int32_t L_3 = __this->___renderingQuality_9;
		PXR_Audio_Spatializer_Context_StartInternal_mEE34CA8148880BC5B0B2AB45FCA781AB35D543AB(__this, L_3, NULL);
		// Debug.Log("Pico Spatializer Initialized.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5EB55A735670D9BC9AFD323DC93AE36440B6F110, NULL);
		return;
	}

IL_003b:
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_Context::StartInternal(PXR_Audio.Spatializer.RenderingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_Context_StartInternal_mEE34CA8148880BC5B0B2AB45FCA781AB35D543AB (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___quality0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF_m46938E1406A1F438430B89E1590E8D60D1838986_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F_m646ABD3384A71B0179BA6AB9D88CF492C77AD750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53_mD3A50A58F9C8A0016BAD412792E90F8A15015F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_t3CEB031445F0804AA3AD2D5E6DCDCD01EC966B50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1864E179A885039C1726EACC82C67416A2A62C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C9007DD914AEC9DEC38C8B3FA3E68CAD8A3518A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52FD3A27F14238F539AE7EE23D829800396E79AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral639A3416C5643F34195BC2C0B6FCCDD388AE52E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B4FA6E136A33F1C988E1BEA55EEDD61EF325710);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PXR_Audio_Spatializer_SceneGeometryU5BU5D_t41710776FD4261140EA6C38AF9BB28BD07C8D836* V_1 = NULL;
	int32_t V_2 = 0;
	PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// PXR_Audio.Spatializer.Result ret = Result.Success;
		V_0 = 0;
		// if (spatializerApiImpl != SpatializerApiImpl.wwise)
		int32_t L_0 = __this->___spatializerApiImpl_4;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0094;
		}
	}
	{
		// audioConfig = AudioSettings.GetConfiguration();
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_1;
		L_1 = AudioSettings_GetConfiguration_mDA005BAD9577EBBE375F6D6C040D7F110508C910(NULL);
		__this->___audioConfig_11 = L_1;
		// ret = PXR_Audio_Spatializer_Api.CreateContext(
		//     ref context,
		//     quality,
		//     (uint)audioConfig.dspBufferSize,
		//     (uint)audioConfig.sampleRate);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_2;
		L_2 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t* L_3 = (&__this->___context_7);
		int32_t L_4 = ___quality0;
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* L_5 = (&__this->___audioConfig_11);
		int32_t L_6 = L_5->___dspBufferSize_1;
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* L_7 = (&__this->___audioConfig_11);
		int32_t L_8 = L_7->___sampleRate_2;
		NullCheck(L_2);
		int32_t L_9;
		L_9 = VirtualFuncInvoker4< int32_t, intptr_t*, int32_t, uint32_t, uint32_t >::Invoke(5 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::CreateContext(System.IntPtr&,PXR_Audio.Spatializer.RenderingMode,System.UInt32,System.UInt32) */, L_2, L_3, L_4, L_6, L_8);
		V_0 = L_9;
		// if (ret != PXR_Audio.Spatializer.Result.Success)
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		// Debug.LogError("Failed to create context, error code: " + ret);
		Il2CppFakeBox<int32_t> L_11(Result_t3CEB031445F0804AA3AD2D5E6DCDCD01EC966B50_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1864E179A885039C1726EACC82C67416A2A62C51, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_13, NULL);
	}

IL_0061:
	{
		// ret = PXR_Audio_Spatializer_Api.InitializeContext(context);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_14;
		L_14 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_15 = __this->___context_7;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = VirtualFuncInvoker1< int32_t, intptr_t >::Invoke(6 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::InitializeContext(System.IntPtr) */, L_14, L_15);
		V_0 = L_16;
		// if (ret != PXR_Audio.Spatializer.Result.Success)
		int32_t L_17 = V_0;
		if (!L_17)
		{
			goto IL_00a0;
		}
	}
	{
		// Debug.LogError("Failed to initialize context, error code: " + ret);
		Il2CppFakeBox<int32_t> L_18(Result_t3CEB031445F0804AA3AD2D5E6DCDCD01EC966B50_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_19;
		L_19 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_18), NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral639A3416C5643F34195BC2C0B6FCCDD388AE52E8, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
		goto IL_00a0;
	}

IL_0094:
	{
		// PXR_Audio_Spatializer_Api.ResetContext();
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_21;
		L_21 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(40 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::ResetContext() */, L_21);
	}

IL_00a0:
	{
		// PXR_Audio_Spatializer_SceneGeometry[] geometries = FindObjectsOfType<PXR_Audio_Spatializer_SceneGeometry>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PXR_Audio_Spatializer_SceneGeometryU5BU5D_t41710776FD4261140EA6C38AF9BB28BD07C8D836* L_23;
		L_23 = Object_FindObjectsOfType_TisPXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53_mD3A50A58F9C8A0016BAD412792E90F8A15015F41(Object_FindObjectsOfType_TisPXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53_mD3A50A58F9C8A0016BAD412792E90F8A15015F41_RuntimeMethod_var);
		V_1 = L_23;
		// for (int geoId = 0; geoId < geometries.Length; ++geoId)
		V_2 = 0;
		goto IL_00eb;
	}

IL_00aa:
	{
		// geometries[geoId].SubmitMeshToContext();
		PXR_Audio_Spatializer_SceneGeometryU5BU5D_t41710776FD4261140EA6C38AF9BB28BD07C8D836* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		int32_t L_28;
		L_28 = PXR_Audio_Spatializer_SceneGeometry_SubmitMeshToContext_m043BB04D810ED77E81465F9EF94C6C9BEF0ABDA3(L_27, NULL);
		// geometries[geoId].SubmitStaticMeshToContext();
		PXR_Audio_Spatializer_SceneGeometryU5BU5D_t41710776FD4261140EA6C38AF9BB28BD07C8D836* L_29 = V_1;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		int32_t L_33;
		L_33 = PXR_Audio_Spatializer_SceneGeometry_SubmitStaticMeshToContext_mBFAEBA6763F2DB134C8AD1E3A0F320F163076CD0(L_32, NULL);
		// if (ret != PXR_Audio.Spatializer.Result.Success)
		int32_t L_34 = V_0;
		if (!L_34)
		{
			goto IL_00e7;
		}
	}
	{
		// Debug.LogError("Failed to submit geometry #" + geoId + ", error code: " + ret);
		String_t* L_35;
		L_35 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		Il2CppFakeBox<int32_t> L_36(Result_t3CEB031445F0804AA3AD2D5E6DCDCD01EC966B50_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_37;
		L_37 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_36), NULL);
		String_t* L_38;
		L_38 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral1C9007DD914AEC9DEC38C8B3FA3E68CAD8A3518A, L_35, _stringLiteral52FD3A27F14238F539AE7EE23D829800396E79AF, L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_38, NULL);
	}

IL_00e7:
	{
		// for (int geoId = 0; geoId < geometries.Length; ++geoId)
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00eb:
	{
		// for (int geoId = 0; geoId < geometries.Length; ++geoId)
		int32_t L_40 = V_2;
		PXR_Audio_Spatializer_SceneGeometryU5BU5D_t41710776FD4261140EA6C38AF9BB28BD07C8D836* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_00aa;
		}
	}
	{
		// ret = PXR_Audio_Spatializer_Api.CommitScene(context);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_42;
		L_42 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_43 = __this->___context_7;
		NullCheck(L_42);
		int32_t L_44;
		L_44 = VirtualFuncInvoker1< int32_t, intptr_t >::Invoke(12 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::CommitScene(System.IntPtr) */, L_42, L_43);
		V_0 = L_44;
		// if (ret != PXR_Audio.Spatializer.Result.Success)
		int32_t L_45 = V_0;
		if (!L_45)
		{
			goto IL_0122;
		}
	}
	{
		// Debug.LogError("Failed to commit scene, error code: " + ret);
		Il2CppFakeBox<int32_t> L_46(Result_t3CEB031445F0804AA3AD2D5E6DCDCD01EC966B50_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_47;
		L_47 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_46), NULL);
		String_t* L_48;
		L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6B4FA6E136A33F1C988E1BEA55EEDD61EF325710, L_47, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_48, NULL);
	}

IL_0122:
	{
		// lateInitEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_49 = __this->___lateInitEvent_10;
		NullCheck(L_49);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_49, NULL);
		// initialized = true;
		__this->___initialized_8 = (bool)1;
		// uuid = GetUuid();
		int32_t L_50;
		L_50 = PXR_Audio_Spatializer_Context_GetUuid_m78CE6D6D85F4F1E8F71D65AF271E14BADAECB4D9(NULL);
		__this->___uuid_14 = L_50;
		// if (spatializerApiImpl != SpatializerApiImpl.wwise)
		int32_t L_51 = __this->___spatializerApiImpl_4;
		if ((((int32_t)L_51) == ((int32_t)1)))
		{
			goto IL_0169;
		}
	}
	{
		// PXR_Audio_Spatializer_AudioSource[] sources = FindObjectsOfType<PXR_Audio_Spatializer_AudioSource>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* L_52;
		L_52 = Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F_m646ABD3384A71B0179BA6AB9D88CF492C77AD750(Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F_m646ABD3384A71B0179BA6AB9D88CF492C77AD750_RuntimeMethod_var);
		V_3 = L_52;
		// for (int i = 0; i < sources.Length; ++i)
		V_4 = 0;
		goto IL_0162;
	}

IL_0153:
	{
		// sources[i].RegisterInternal();
		PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* L_53 = V_3;
		int32_t L_54 = V_4;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		PXR_Audio_Spatializer_AudioSource_RegisterInternal_m7B61C1624057D461B03E7F580FF7E55F0162E0FF(L_56, NULL);
		// for (int i = 0; i < sources.Length; ++i)
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0162:
	{
		// for (int i = 0; i < sources.Length; ++i)
		int32_t L_58 = V_4;
		PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* L_59 = V_3;
		NullCheck(L_59);
		if ((((int32_t)L_58) < ((int32_t)((int32_t)(((RuntimeArray*)L_59)->max_length)))))
		{
			goto IL_0153;
		}
	}

IL_0169:
	{
		// PXR_Audio_Spatializer_AudioListener listener = FindObjectOfType<PXR_Audio_Spatializer_AudioListener>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* L_60;
		L_60 = Object_FindObjectOfType_TisPXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF_m46938E1406A1F438430B89E1590E8D60D1838986(Object_FindObjectOfType_TisPXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF_m46938E1406A1F438430B89E1590E8D60D1838986_RuntimeMethod_var);
		// listener.RegisterInternal();
		NullCheck(L_60);
		PXR_Audio_Spatializer_AudioListener_RegisterInternal_m23C1CC758D1944C708A3D0052FE1225A1B65FE64(L_60, NULL);
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_Context::DestroyInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_Context_DestroyInternal_m063774FDE9E5578ADA3BEB196EA9CE0056541066 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF_m4521E68A5454A7BA2DF6376A9698C573C837277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F_m646ABD3384A71B0179BA6AB9D88CF492C77AD750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	PXR_Audio_Spatializer_AudioListenerU5BU5D_t298F821046FC2FC6D8922BD28ABC4C755683F0E6* V_1 = NULL;
	int32_t V_2 = 0;
	PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* V_3 = NULL;
	PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* V_4 = NULL;
	PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* V_5 = NULL;
	{
		// if (spatializerApiImpl == SpatializerApiImpl.wwise)
		int32_t L_0 = __this->___spatializerApiImpl_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// context = IntPtr.Zero;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___context_7 = L_1;
		// return;
		return;
	}

IL_0015:
	{
		// initialized = false;
		__this->___initialized_8 = (bool)0;
		// uuid = -1;
		__this->___uuid_14 = (-1);
		// bool canContinue = true;
		V_0 = (bool)1;
	}

IL_0025:
	{
		// canContinue = true;
		V_0 = (bool)1;
		// PXR_Audio_Spatializer_AudioListener[] listeners = FindObjectsOfType<PXR_Audio_Spatializer_AudioListener>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PXR_Audio_Spatializer_AudioListenerU5BU5D_t298F821046FC2FC6D8922BD28ABC4C755683F0E6* L_2;
		L_2 = Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF_m4521E68A5454A7BA2DF6376A9698C573C837277E(Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF_m4521E68A5454A7BA2DF6376A9698C573C837277E_RuntimeMethod_var);
		// foreach (var listener in listeners)
		V_1 = L_2;
		V_2 = 0;
		goto IL_004e;
	}

IL_0031:
	{
		// foreach (var listener in listeners)
		PXR_Audio_Spatializer_AudioListenerU5BU5D_t298F821046FC2FC6D8922BD28ABC4C755683F0E6* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// if (listener != null && listener.IsAudioDSPInProgress)
		PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* L_7 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* L_9 = V_3;
		NullCheck(L_9);
		bool L_10;
		L_10 = PXR_Audio_Spatializer_AudioListener_get_IsAudioDSPInProgress_mE55F8F9AF1AC6C17DC2E6256C4A72F8E75F42BBB_inline(L_9, NULL);
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		// canContinue = false;
		V_0 = (bool)0;
		// break;
		goto IL_0054;
	}

IL_004a:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004e:
	{
		// foreach (var listener in listeners)
		int32_t L_12 = V_2;
		PXR_Audio_Spatializer_AudioListenerU5BU5D_t298F821046FC2FC6D8922BD28ABC4C755683F0E6* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0031;
		}
	}

IL_0054:
	{
		// PXR_Audio_Spatializer_AudioSource[] sources = FindObjectsOfType<PXR_Audio_Spatializer_AudioSource>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* L_14;
		L_14 = Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F_m646ABD3384A71B0179BA6AB9D88CF492C77AD750(Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F_m646ABD3384A71B0179BA6AB9D88CF492C77AD750_RuntimeMethod_var);
		// foreach (var source in sources)
		V_4 = L_14;
		V_2 = 0;
		goto IL_0080;
	}

IL_005f:
	{
		// foreach (var source in sources)
		PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* L_15 = V_4;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_5 = L_18;
		// if (source != null && source.IsAudioDSPInProgress)
		PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* L_19 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_007c;
		}
	}
	{
		PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* L_21 = V_5;
		NullCheck(L_21);
		bool L_22;
		L_22 = PXR_Audio_Spatializer_AudioSource_get_IsAudioDSPInProgress_m7D65A7961AD22BCD14306D8E531DE3274631B4E3_inline(L_21, NULL);
		if (!L_22)
		{
			goto IL_007c;
		}
	}
	{
		// canContinue = false;
		V_0 = (bool)0;
		// break;
		goto IL_0087;
	}

IL_007c:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0080:
	{
		// foreach (var source in sources)
		int32_t L_24 = V_2;
		PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* L_25 = V_4;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_005f;
		}
	}

IL_0087:
	{
		// } while (!canContinue);
		bool L_26 = V_0;
		if (!L_26)
		{
			goto IL_0025;
		}
	}
	{
		// PXR_Audio_Spatializer_Api.Destroy(context);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_27;
		L_27 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_28 = __this->___context_7;
		NullCheck(L_27);
		int32_t L_29;
		L_29 = VirtualFuncInvoker1< int32_t, intptr_t >::Invoke(39 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::Destroy(System.IntPtr) */, L_27, L_28);
		// context = IntPtr.Zero;
		intptr_t L_30 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___context_7 = L_30;
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_Context::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_Context_OnDisable_m88E684529E9EBF80DB795F0959EDDC33ACBC3BBA (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PXR_Audio_Spatializer_Context_OnAudioConfigurationChangedEventHandler_m2A37DF93A73D469A432A7CA406475A3959AD3052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance != null)
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_0 = ((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// _instance = null;
		((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____instance_6 = (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____instance_6), (void*)(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F*)NULL);
		// AudioSettings.OnAudioConfigurationChanged -= OnAudioConfigurationChangedEventHandler;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_2 = (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)il2cpp_codegen_object_new(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AudioConfigurationChangeHandler__ctor_mA9827AB9472EC8EE0A0F0FC24EBC06B4740DD944(L_2, __this, (intptr_t)((void*)PXR_Audio_Spatializer_Context_OnAudioConfigurationChangedEventHandler_m2A37DF93A73D469A432A7CA406475A3959AD3052_RuntimeMethod_var), NULL);
		AudioSettings_remove_OnAudioConfigurationChanged_mA9CB4575FC75DF3761B8AA0D0259A1255FFF908D(L_2, NULL);
		// DestroyInternal();
		PXR_Audio_Spatializer_Context_DestroyInternal_m063774FDE9E5578ADA3BEB196EA9CE0056541066(__this, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_Context::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_Context_Update_m59E3867F59FD37016F84A4A9308B5F8ED8E58246 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) 
{
	{
		// PXR_Audio_Spatializer_Api.UpdateScene(context);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_0;
		L_0 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(__this, NULL);
		intptr_t L_1 = __this->___context_7;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, intptr_t >::Invoke(27 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::UpdateScene(System.IntPtr) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_Context::ResetContext(PXR_Audio.Spatializer.RenderingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_Context_ResetContext_m583D2D2C04649D660724FB327215C0C62D3F94CA (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, int32_t ___quality0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD_m80DA459432BA29F3580B06090BEBFF62A7805F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F_m646ABD3384A71B0179BA6AB9D88CF492C77AD750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67EEFE16795828DCBC09AB1F73B300B9C918075D);
		s_Il2CppMethodInitialized = true;
	}
	PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* V_0 = NULL;
	int32_t V_1 = 0;
	PXR_Audio_Spatializer_AmbisonicSourceU5BU5D_t1E738B873F32F0993A18656501380CC7D308956F* V_2 = NULL;
	{
		// DestroyInternal();
		PXR_Audio_Spatializer_Context_DestroyInternal_m063774FDE9E5578ADA3BEB196EA9CE0056541066(__this, NULL);
		// StartInternal(quality);
		int32_t L_0 = ___quality0;
		PXR_Audio_Spatializer_Context_StartInternal_mEE34CA8148880BC5B0B2AB45FCA781AB35D543AB(__this, L_0, NULL);
		// if (spatializerApiImpl == SpatializerApiImpl.wwise)
		int32_t L_1 = __this->___spatializerApiImpl_4;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// var sources = FindObjectsOfType<PXR_Audio_Spatializer_AudioSource>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* L_2;
		L_2 = Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F_m646ABD3384A71B0179BA6AB9D88CF492C77AD750(Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F_m646ABD3384A71B0179BA6AB9D88CF492C77AD750_RuntimeMethod_var);
		// foreach (var source in sources)
		V_0 = L_2;
		V_1 = 0;
		goto IL_002d;
	}

IL_0021:
	{
		// foreach (var source in sources)
		PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// source.Resume();
		NullCheck(L_6);
		PXR_Audio_Spatializer_AudioSource_Resume_m88F7E0B383D656AD6F5B8F8D7FC79E6640F4FEB2(L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002d:
	{
		// foreach (var source in sources)
		int32_t L_8 = V_1;
		PXR_Audio_Spatializer_AudioSourceU5BU5D_t8BF92CB096F35267290E973664FB443F83B2EF23* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		// var ambisonicSources =
		//     FindObjectsOfType<PXR_Audio_Spatializer_AmbisonicSource>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PXR_Audio_Spatializer_AmbisonicSourceU5BU5D_t1E738B873F32F0993A18656501380CC7D308956F* L_10;
		L_10 = Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD_m80DA459432BA29F3580B06090BEBFF62A7805F0D(Object_FindObjectsOfType_TisPXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD_m80DA459432BA29F3580B06090BEBFF62A7805F0D_RuntimeMethod_var);
		// foreach (var source in ambisonicSources)
		V_2 = L_10;
		V_1 = 0;
		goto IL_0049;
	}

IL_003d:
	{
		// foreach (var source in ambisonicSources)
		PXR_Audio_Spatializer_AmbisonicSourceU5BU5D_t1E738B873F32F0993A18656501380CC7D308956F* L_11 = V_2;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		PXR_Audio_Spatializer_AmbisonicSource_t4409D1A05A2F405D39813CDCF53D6EED463B1CDD* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		// source.Resume();
		NullCheck(L_14);
		PXR_Audio_Spatializer_AmbisonicSource_Resume_m138F693F9371F6182C5B87BAC3F1E99A24377F3A(L_14, NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0049:
	{
		// foreach (var source in ambisonicSources)
		int32_t L_16 = V_1;
		PXR_Audio_Spatializer_AmbisonicSourceU5BU5D_t1E738B873F32F0993A18656501380CC7D308956F* L_17 = V_2;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_003d;
		}
	}
	{
		// Debug.Log("Pico Spatializer Context restarted.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral67EEFE16795828DCBC09AB1F73B300B9C918075D, NULL);
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_Context::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_Context__ctor_m99EA75B0016A7F57BE849F7CDE29BE80C8D1CB48 (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IntPtr context = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___context_7 = L_0;
		// private PXR_Audio.Spatializer.RenderingMode renderingQuality = PXR_Audio.Spatializer.RenderingMode.MediumQuality;
		__this->___renderingQuality_9 = 1;
		// private bool bypass = true;
		__this->___bypass_12 = (bool)1;
		// private int uuid = -1;
		__this->___uuid_14 = (-1);
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
// System.Boolean PXR_Audio_Spatializer_SceneGeometry::get_isStaticMeshBaked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PXR_Audio_Spatializer_SceneGeometry_get_isStaticMeshBaked_mFB26905D33FBA55B35D22709ADC8F086FB90E81E (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool isStaticMeshBaked => bakedStaticMesh != null;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___bakedStaticMesh_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// System.Int32 PXR_Audio_Spatializer_SceneGeometry::get_GeometryId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_SceneGeometry_get_GeometryId_m0400B7368975DCF3571A1EF98D10349B3A83CF55 (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, const RuntimeMethod* method) 
{
	{
		// get => geometryId;
		int32_t L_0 = __this->___geometryId_7;
		return L_0;
	}
}
// System.Int32 PXR_Audio_Spatializer_SceneGeometry::get_StaticGeometryId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_SceneGeometry_get_StaticGeometryId_m69123CD11B4CB97692420F61BCDEA896F39CA38B (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, const RuntimeMethod* method) 
{
	{
		// public int StaticGeometryId => staticGeometryID;
		int32_t L_0 = __this->___staticGeometryID_8;
		return L_0;
	}
}
// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_SceneGeometry::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* PXR_Audio_Spatializer_SceneGeometry_get_Context_m2CF4B604CF0D757F781228877EA5F57FEDCB7C6A (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_m2C2B44C6E1E077F07BA26B62502FDAC27C3586F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (context == null)
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_0 = __this->___context_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// context = FindObjectOfType<PXR_Audio_Spatializer_Context>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_2;
		L_2 = Object_FindObjectOfType_TisPXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_m2C2B44C6E1E077F07BA26B62502FDAC27C3586F5(Object_FindObjectOfType_TisPXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_m2C2B44C6E1E077F07BA26B62502FDAC27C3586F5_RuntimeMethod_var);
		__this->___context_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_9), (void*)L_2);
	}

IL_0019:
	{
		// return context;
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_3 = __this->___context_9;
		return L_3;
	}
}
// PXR_Audio_Spatializer_SceneMaterial PXR_Audio_Spatializer_SceneGeometry::get_Material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* PXR_Audio_Spatializer_SceneGeometry_get_Material_m9AF67E0552537A7C2B382EF18FF5FCF6F81186CD (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83_m6DD39ECB61DE35F9832CED3797D8BEAC09D9C957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (material == null)
		PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* L_0 = __this->___material_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// material = GetComponent<PXR_Audio_Spatializer_SceneMaterial>();
		PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* L_2;
		L_2 = Component_GetComponent_TisPXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83_m6DD39ECB61DE35F9832CED3797D8BEAC09D9C957(__this, Component_GetComponent_TisPXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83_m6DD39ECB61DE35F9832CED3797D8BEAC09D9C957_RuntimeMethod_var);
		__this->___material_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_10), (void*)L_2);
	}

IL_001a:
	{
		// return material;
		PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* L_3 = __this->___material_10;
		return L_3;
	}
}
// System.Void PXR_Audio_Spatializer_SceneGeometry::GetAllMeshFilter(UnityEngine.Transform,System.Boolean,System.Collections.Generic.List`1<UnityEngine.MeshFilter>,System.Boolean,UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_SceneGeometry_GetAllMeshFilter_m96C494F9519996A5456BF827C56348528A902976 (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, bool ___includeChildren1, List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___meshFilterList2, bool ___isStatic3, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53_m9CA41EB6780D04DC11DE2DDCE2F8D27641D38715_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m35299BFF8173B59B694DE1E24B53697CE7E65128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* V_3 = NULL;
	int32_t V_4 = 0;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_5 = NULL;
	{
		// if (includeChildren)
		bool L_0 = ___includeChildren1;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// int childCount = transform.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___transform0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		V_0 = L_2;
		// for (int i = 0; i < childCount; i++)
		V_1 = 0;
		goto IL_003a;
	}

IL_000e:
	{
		// var childTransform = transform.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___transform0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		V_2 = L_5;
		// if (childTransform.GetComponent<PXR_Audio_Spatializer_SceneGeometry>() == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_2;
		NullCheck(L_6);
		PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* L_7;
		L_7 = Component_GetComponent_TisPXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53_m9CA41EB6780D04DC11DE2DDCE2F8D27641D38715(L_6, Component_GetComponent_TisPXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53_m9CA41EB6780D04DC11DE2DDCE2F8D27641D38715_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// GetAllMeshFilter(childTransform.transform, includeChildren, meshFilterList, isStatic, layerMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_2;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		bool L_11 = ___includeChildren1;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_12 = ___meshFilterList2;
		bool L_13 = ___isStatic3;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_14 = ___layerMask4;
		PXR_Audio_Spatializer_SceneGeometry_GetAllMeshFilter_m96C494F9519996A5456BF827C56348528A902976(__this, L_10, L_11, L_12, L_13, L_14, NULL);
	}

IL_0036:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003a:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000e;
		}
	}

IL_003e:
	{
		// if (transform.gameObject.isStatic == isStatic && ((1 << transform.gameObject.layer) & layerMask) != 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ___transform0;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		NullCheck(L_19);
		bool L_20;
		L_20 = GameObject_get_isStatic_mB88ADDE2E0D3544FACC287E9B49AFA116C07FB66(L_19, NULL);
		bool L_21 = ___isStatic3;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_00bc;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = ___transform0;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_23, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_25 = ___layerMask4;
		int32_t L_26;
		L_26 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_25, NULL);
		if (!((int32_t)(((int32_t)(1<<((int32_t)(L_24&((int32_t)31)))))&L_26)))
		{
			goto IL_00bc;
		}
	}
	{
		// var meshFilterArray = transform.GetComponents<MeshFilter>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = ___transform0;
		NullCheck(L_27);
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_28;
		L_28 = Component_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m35299BFF8173B59B694DE1E24B53697CE7E65128(L_27, Component_GetComponents_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m35299BFF8173B59B694DE1E24B53697CE7E65128_RuntimeMethod_var);
		V_3 = L_28;
		// if (meshFilterArray != null)
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_29 = V_3;
		if (!L_29)
		{
			goto IL_00bc;
		}
	}
	{
		// for (int i = 0; i < meshFilterArray.Length; i++)
		V_4 = 0;
		goto IL_00b5;
	}

IL_0076:
	{
		// var meshFilter = meshFilterArray[i];
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_30 = V_3;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_5 = L_33;
		// if (meshFilter != null && meshFilter.sharedMesh != null &&
		//     (isStatic || meshFilter.sharedMesh.isReadable))
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_34 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_34, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_35)
		{
			goto IL_00af;
		}
	}
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_36 = V_5;
		NullCheck(L_36);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37;
		L_37 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_38)
		{
			goto IL_00af;
		}
	}
	{
		bool L_39 = ___isStatic3;
		if (L_39)
		{
			goto IL_00a7;
		}
	}
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_40 = V_5;
		NullCheck(L_40);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_41;
		L_41 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_40, NULL);
		NullCheck(L_41);
		bool L_42;
		L_42 = Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0(L_41, NULL);
		if (!L_42)
		{
			goto IL_00af;
		}
	}

IL_00a7:
	{
		// meshFilterList.Add(meshFilter);
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_43 = ___meshFilterList2;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_44 = V_5;
		NullCheck(L_43);
		List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_inline(L_43, L_44, List_1_Add_m2DCDE5FFA7020B15019DC9EB26D48CB88BE23252_RuntimeMethod_var);
	}

IL_00af:
	{
		// for (int i = 0; i < meshFilterArray.Length; i++)
		int32_t L_45 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00b5:
	{
		// for (int i = 0; i < meshFilterArray.Length; i++)
		int32_t L_46 = V_4;
		MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* L_47 = V_3;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_0076;
		}
	}

IL_00bc:
	{
		// }
		return;
	}
}
// UnityEngine.Mesh PXR_Audio_Spatializer_SceneGeometry::CombineMeshes(System.Collections.Generic.List`1<UnityEngine.MeshFilter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* PXR_Audio_Spatializer_SceneGeometry_CombineMeshes_mB74A76D83A46D6A1406B8FC7B21475B72649D4AA (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___meshFilterList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95C6F82ADE26334D66638052BC9EB17CF660EB4C);
		s_Il2CppMethodInitialized = true;
	}
	CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// CombineInstance[] combines = new CombineInstance[meshFilterList.Count];
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_0 = ___meshFilterList0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline(L_0, List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* L_2 = (CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093*)(CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093*)SZArrayNew(CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// for (int i = 0; i < meshFilterList.Count; i++)
		V_1 = 0;
		goto IL_0067;
	}

IL_0010:
	{
		// combines[i].mesh = meshFilterList[i].sharedMesh;
		CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_5 = ___meshFilterList0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_7;
		L_7 = List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348(L_5, L_6, List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		NullCheck(L_7);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8;
		L_8 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_7, NULL);
		CombineInstance_set_mesh_mB74AB585ED11B0D8B619F7ADC8B55286DD50A1B5(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), L_8, NULL);
		// combines[i].transform =
		//     Matrix4x4.Scale(new Vector3(1, 1, -1)) * meshFilterList[i].transform.localToWorldMatrix;
		CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (1.0f), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642(L_11, NULL);
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_13 = ___meshFilterList0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_15;
		L_15 = List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348(L_13, L_14, List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17;
		L_17 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_16, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18;
		L_18 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_12, L_17, NULL);
		CombineInstance_set_transform_m9C9911DE1F613A1B949DF89CD46B0E8F742F3BEE(((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), L_18, NULL);
		// for (int i = 0; i < meshFilterList.Count; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0067:
	{
		// for (int i = 0; i < meshFilterList.Count; i++)
		int32_t L_20 = V_1;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_21 = ___meshFilterList0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline(L_21, List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0010;
		}
	}
	{
		// Mesh combinedMesh = new Mesh
		// {
		//     name = "combined meshes",
		//     indexFormat = UnityEngine.Rendering.IndexFormat.UInt32
		// };
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_23, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_24 = L_23;
		NullCheck(L_24);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_24, _stringLiteral95C6F82ADE26334D66638052BC9EB17CF660EB4C, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_25 = L_24;
		NullCheck(L_25);
		Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_25, 1, NULL);
		// combinedMesh.CombineMeshes(combines, true, true);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_26 = L_25;
		CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* L_27 = V_0;
		NullCheck(L_26);
		Mesh_CombineMeshes_m23172B6FF99A4464AA5F4A497209121978A165D5(L_26, L_27, (bool)1, (bool)1, NULL);
		// return combinedMesh;
		return L_26;
	}
}
// System.Single[] PXR_Audio_Spatializer_SceneGeometry::FlattenVerticesBuffer(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* PXR_Audio_Spatializer_SceneGeometry_FlattenVerticesBuffer_m4D854FE84EC191191B1AFA7E78C8B4B2FEFA1BD8 (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___verticesBuffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// float[] vertices = new float[verticesBuffer.Length * 3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___verticesBuffer0;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 3)));
		V_0 = L_1;
		// int index = 0;
		V_1 = 0;
		// foreach (Vector3 vertex in verticesBuffer)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___verticesBuffer0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_004a;
	}

IL_0013:
	{
		// foreach (Vector3 vertex in verticesBuffer)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		// vertices[index++] = vertex.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_4;
		float L_11 = L_10.___x_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (float)L_11);
		// vertices[index++] = vertex.y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_4;
		float L_16 = L_15.___y_3;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (float)L_16);
		// vertices[index++] = vertex.z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_4;
		float L_21 = L_20.___z_4;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (float)L_21);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_004a:
	{
		// foreach (Vector3 vertex in verticesBuffer)
		int32_t L_23 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_2;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// return vertices;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = V_0;
		return L_25;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_SceneGeometry::SubmitMeshToContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_SceneGeometry_SubmitMeshToContext_m043BB04D810ED77E81465F9EF94C6C9BEF0ABDA3 (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* V_0 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_1 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	{
		// var meshFilterList = new List<MeshFilter>();
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_0 = (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*)il2cpp_codegen_object_new(List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C(L_0, List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		V_0 = L_0;
		// GetAllMeshFilter(transform, includeChildren, meshFilterList, false, ~0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		bool L_2 = __this->___includeChildren_4;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_3 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4;
		L_4 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		PXR_Audio_Spatializer_SceneGeometry_GetAllMeshFilter_m96C494F9519996A5456BF827C56348528A902976(__this, L_1, L_2, L_3, (bool)0, L_4, NULL);
		// Mesh combinedMesh = CombineMeshes(meshFilterList);
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_5 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6;
		L_6 = PXR_Audio_Spatializer_SceneGeometry_CombineMeshes_mB74A76D83A46D6A1406B8FC7B21475B72649D4AA(L_5, NULL);
		V_1 = L_6;
		// float[] vertices = FlattenVerticesBuffer(combinedMesh.vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = V_1;
		NullCheck(L_7);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8;
		L_8 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_7, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9;
		L_9 = PXR_Audio_Spatializer_SceneGeometry_FlattenVerticesBuffer_m4D854FE84EC191191B1AFA7E78C8B4B2FEFA1BD8(L_8, NULL);
		V_2 = L_9;
		// PXR_Audio.Spatializer.Result result = PXR_Audio_Spatializer_Context.Instance.SubmitMeshAndMaterialFactor(
		//     vertices, vertices.Length / 3,
		//     combinedMesh.triangles, combinedMesh.triangles.Length / 3,
		//     Material.absorption, Material.scattering, Material.transmission,
		//     ref geometryId);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_10;
		L_10 = PXR_Audio_Spatializer_Context_get_Instance_m2C5DEDC032B552279DF0796E599F3ADEC18493B0_inline(NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_2;
		NullCheck(L_12);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_13 = V_1;
		NullCheck(L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14;
		L_14 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_13, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_15 = V_1;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_15, NULL);
		NullCheck(L_16);
		PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* L_17;
		L_17 = PXR_Audio_Spatializer_SceneGeometry_get_Material_m9AF67E0552537A7C2B382EF18FF5FCF6F81186CD(__this, NULL);
		NullCheck(L_17);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = L_17->___absorption_6;
		PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* L_19;
		L_19 = PXR_Audio_Spatializer_SceneGeometry_get_Material_m9AF67E0552537A7C2B382EF18FF5FCF6F81186CD(__this, NULL);
		NullCheck(L_19);
		float L_20 = L_19->___scattering_7;
		PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* L_21;
		L_21 = PXR_Audio_Spatializer_SceneGeometry_get_Material_m9AF67E0552537A7C2B382EF18FF5FCF6F81186CD(__this, NULL);
		NullCheck(L_21);
		float L_22 = L_21->___transmission_8;
		int32_t* L_23 = (&__this->___geometryId_7);
		NullCheck(L_10);
		int32_t L_24;
		L_24 = PXR_Audio_Spatializer_Context_SubmitMeshAndMaterialFactor_mACE6829D79C3F3F145E7D8BA854790889F6C7638(L_10, L_11, ((int32_t)(((int32_t)(((RuntimeArray*)L_12)->max_length))/3)), L_14, ((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/3)), L_18, L_20, L_22, L_23, NULL);
		// return result;
		return L_24;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio_Spatializer_SceneGeometry::SubmitStaticMeshToContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_SceneGeometry_SubmitStaticMeshToContext_mBFAEBA6763F2DB134C8AD1E3A0F320F163076CD0 (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_t3CEB031445F0804AA3AD2D5E6DCDCD01EC966B50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31A896FA03CB0C2A853E88220B3543601F4638DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F89E2F0767D89994F86794572CCE7C3B3703E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE934B09999108814CCD75A4F3E7237746C03072);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	{
		// PXR_Audio.Spatializer.Result result = Result.Success;
		V_0 = 0;
		// if (bakedStaticMesh != null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___bakedStaticMesh_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00d6;
		}
	}
	{
		// float[] tempVertices = FlattenVerticesBuffer(bakedStaticMesh.vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___bakedStaticMesh_6;
		NullCheck(L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3;
		L_3 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_2, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4;
		L_4 = PXR_Audio_Spatializer_SceneGeometry_FlattenVerticesBuffer_m4D854FE84EC191191B1AFA7E78C8B4B2FEFA1BD8(L_3, NULL);
		V_1 = L_4;
		// result = PXR_Audio_Spatializer_Context.Instance.SubmitMeshAndMaterialFactor(tempVertices,
		//     bakedStaticMesh.vertices.Length, bakedStaticMesh.triangles,
		//     bakedStaticMesh.triangles.Length / 3, Material.absorption, Material.scattering, Material.transmission,
		//     ref staticGeometryID);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_5;
		L_5 = PXR_Audio_Spatializer_Context_get_Instance_m2C5DEDC032B552279DF0796E599F3ADEC18493B0_inline(NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_1;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = __this->___bakedStaticMesh_6;
		NullCheck(L_7);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8;
		L_8 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_7, NULL);
		NullCheck(L_8);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = __this->___bakedStaticMesh_6;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10;
		L_10 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_9, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_11 = __this->___bakedStaticMesh_6;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12;
		L_12 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_11, NULL);
		NullCheck(L_12);
		PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* L_13;
		L_13 = PXR_Audio_Spatializer_SceneGeometry_get_Material_m9AF67E0552537A7C2B382EF18FF5FCF6F81186CD(__this, NULL);
		NullCheck(L_13);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = L_13->___absorption_6;
		PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* L_15;
		L_15 = PXR_Audio_Spatializer_SceneGeometry_get_Material_m9AF67E0552537A7C2B382EF18FF5FCF6F81186CD(__this, NULL);
		NullCheck(L_15);
		float L_16 = L_15->___scattering_7;
		PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* L_17;
		L_17 = PXR_Audio_Spatializer_SceneGeometry_get_Material_m9AF67E0552537A7C2B382EF18FF5FCF6F81186CD(__this, NULL);
		NullCheck(L_17);
		float L_18 = L_17->___transmission_8;
		int32_t* L_19 = (&__this->___staticGeometryID_8);
		NullCheck(L_5);
		int32_t L_20;
		L_20 = PXR_Audio_Spatializer_Context_SubmitMeshAndMaterialFactor_mACE6829D79C3F3F145E7D8BA854790889F6C7638(L_5, L_6, ((int32_t)(((RuntimeArray*)L_8)->max_length)), L_10, ((int32_t)(((int32_t)(((RuntimeArray*)L_12)->max_length))/3)), L_14, L_16, L_18, L_19, NULL);
		V_0 = L_20;
		// if (result != Result.Success)
		int32_t L_21 = V_0;
		if (!L_21)
		{
			goto IL_00af;
		}
	}
	{
		// Debug.LogError("Failed to submit static audio mesh: " + gameObject.name + ", Error code is: " + result);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_22, NULL);
		Il2CppFakeBox<int32_t> L_24(Result_t3CEB031445F0804AA3AD2D5E6DCDCD01EC966B50_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_25;
		L_25 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_24), NULL);
		String_t* L_26;
		L_26 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralB2F89E2F0767D89994F86794572CCE7C3B3703E0, L_23, _stringLiteral31A896FA03CB0C2A853E88220B3543601F4638DA, L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_26, NULL);
		goto IL_00d6;
	}

IL_00af:
	{
		// Debug.LogFormat("Submitted static geometry #{0}, gameObject name is {1}", staticGeometryID.ToString(),
		//     name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_27;
		int32_t* L_29 = (&__this->___staticGeometryID_8);
		String_t* L_30;
		L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_29, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_28;
		String_t* L_32;
		L_32 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_32);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralBE934B09999108814CCD75A4F3E7237746C03072, L_31, NULL);
	}

IL_00d6:
	{
		// return result;
		int32_t L_33 = V_0;
		return L_33;
	}
}
// System.Void PXR_Audio_Spatializer_SceneGeometry::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_SceneGeometry_OnDrawGizmos_m12922771316E732B8A8D1F693B75C3D8ED9DD585 (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* V_0 = NULL;
	int32_t V_1 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (visualizeMeshInEditor)
		bool L_0 = __this->___visualizeMeshInEditor_5;
		if (!L_0)
		{
			goto IL_00dd;
		}
	}
	{
		// var meshFilterList = new List<MeshFilter>();
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_1 = (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*)il2cpp_codegen_object_new(List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C(L_1, List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		V_0 = L_1;
		// GetAllMeshFilter(transform, includeChildren, meshFilterList, false, ~0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		bool L_3 = __this->___includeChildren_4;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_4 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		PXR_Audio_Spatializer_SceneGeometry_GetAllMeshFilter_m96C494F9519996A5456BF827C56348528A902976(__this, L_2, L_3, L_4, (bool)0, L_5, NULL);
		// for (int i = 0; i < meshFilterList.Count; i++)
		V_1 = 0;
		goto IL_0063;
	}

IL_002f:
	{
		// var mesh = meshFilterList[i].sharedMesh;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_8;
		L_8 = List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348(L_6, L_7, List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		NullCheck(L_8);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9;
		L_9 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_8, NULL);
		// var transform = meshFilterList[i].transform;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_12;
		L_12 = List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348(L_10, L_11, List_1_get_Item_m1DDAF5804C36E171686D1F31AEDD7D32876E8348_RuntimeMethod_var);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		V_2 = L_13;
		// Gizmos.DrawWireMesh(mesh,
		//     transform.position, transform.rotation, transform.localScale);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_2;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_2;
		NullCheck(L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_2;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_18, NULL);
		Gizmos_DrawWireMesh_m742B67F2113E1DEE8F8416C62AB700E2D76726DF(L_9, L_15, L_17, L_19, NULL);
		// for (int i = 0; i < meshFilterList.Count; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0063:
	{
		// for (int i = 0; i < meshFilterList.Count; i++)
		int32_t L_21 = V_1;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline(L_22, List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_002f;
		}
	}
	{
		// if (isStaticMeshBaked)
		bool L_24;
		L_24 = PXR_Audio_Spatializer_SceneGeometry_get_isStaticMeshBaked_mFB26905D33FBA55B35D22709ADC8F086FB90E81E(__this, NULL);
		if (!L_24)
		{
			goto IL_00dd;
		}
	}
	{
		// Color colorBackUp = Gizmos.color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Gizmos_get_color_mF7A6194876F0DB8D2629715134BAAD3765849A3B(NULL);
		// c.r = 0.0f;
		(&V_3)->___r_0 = (0.0f);
		// c.g = 0.7f;
		(&V_3)->___g_1 = (0.699999988f);
		// c.b = 0.0f;
		(&V_3)->___b_2 = (0.0f);
		// c.a = 1.0f;
		(&V_3)->___a_3 = (1.0f);
		// Gizmos.color = c;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = V_3;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_26, NULL);
		// Gizmos.DrawWireMesh(bakedStaticMesh, Vector3.zero, Quaternion.identity, new Vector3(1, 1, -1));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27 = __this->___bakedStaticMesh_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), (1.0f), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Gizmos_DrawWireMesh_m742B67F2113E1DEE8F8416C62AB700E2D76726DF(L_27, L_28, L_29, L_30, NULL);
		// Gizmos.color = colorBackUp;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_25, NULL);
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_SceneGeometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_SceneGeometry__ctor_m53CB6871E508C6888EC8D70150FF06034D0DA8B0 (PXR_Audio_Spatializer_SceneGeometry_t3895127FE77B20D7F830293CA954EE8FD0A16A53* __this, const RuntimeMethod* method) 
{
	{
		// private int geometryId = -1;
		__this->___geometryId_7 = (-1);
		// private int staticGeometryID = -1;
		__this->___staticGeometryID_8 = (-1);
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
// PXR_Audio_Spatializer_Context PXR_Audio_Spatializer_SceneMaterial::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* PXR_Audio_Spatializer_SceneMaterial_get_Context_m089D37FED71CC522CA7891F1C36F9F3A373202A3 (PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_m2C2B44C6E1E077F07BA26B62502FDAC27C3586F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (context == null)
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_0 = __this->___context_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// context = FindObjectOfType<PXR_Audio_Spatializer_Context>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_2;
		L_2 = Object_FindObjectOfType_TisPXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_m2C2B44C6E1E077F07BA26B62502FDAC27C3586F5(Object_FindObjectOfType_TisPXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_m2C2B44C6E1E077F07BA26B62502FDAC27C3586F5_RuntimeMethod_var);
		__this->___context_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_9), (void*)L_2);
	}

IL_0019:
	{
		// return context;
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_3 = __this->___context_9;
		return L_3;
	}
}
// System.Void PXR_Audio_Spatializer_SceneMaterial::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_SceneMaterial_OnValidate_m42BDBA9223FC91314E596304F5174F2317D915C4 (PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lastMaterialPreset != materialPreset) // material_preset is changed
		int32_t L_0 = __this->___lastMaterialPreset_5;
		int32_t L_1 = __this->___materialPreset_4;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_009d;
		}
	}
	{
		// if (materialPreset != PXR_Audio.Spatializer.AcousticsMaterial.Custom)
		int32_t L_2 = __this->___materialPreset_4;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)29))))
		{
			goto IL_0090;
		}
	}
	{
		// if (Context != null)
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_3;
		L_3 = PXR_Audio_Spatializer_SceneMaterial_get_Context_m089D37FED71CC522CA7891F1C36F9F3A373202A3(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_01cb;
		}
	}
	{
		// Context.PXR_Audio_Spatializer_Api.GetAbsorptionFactor(materialPreset, absorption);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_5;
		L_5 = PXR_Audio_Spatializer_SceneMaterial_get_Context_m089D37FED71CC522CA7891F1C36F9F3A373202A3(__this, NULL);
		NullCheck(L_5);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_6;
		L_6 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(L_5, NULL);
		int32_t L_7 = __this->___materialPreset_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = __this->___absorption_6;
		NullCheck(L_6);
		int32_t L_9;
		L_9 = VirtualFuncInvoker2< int32_t, int32_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(9 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::GetAbsorptionFactor(PXR_Audio.Spatializer.AcousticsMaterial,System.Single[]) */, L_6, L_7, L_8);
		// Context.PXR_Audio_Spatializer_Api.GetScatteringFactor(materialPreset, ref scattering);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_10;
		L_10 = PXR_Audio_Spatializer_SceneMaterial_get_Context_m089D37FED71CC522CA7891F1C36F9F3A373202A3(__this, NULL);
		NullCheck(L_10);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_11;
		L_11 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(L_10, NULL);
		int32_t L_12 = __this->___materialPreset_4;
		float* L_13 = (&__this->___scattering_7);
		NullCheck(L_11);
		int32_t L_14;
		L_14 = VirtualFuncInvoker2< int32_t, int32_t, float* >::Invoke(10 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::GetScatteringFactor(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&) */, L_11, L_12, L_13);
		// Context.PXR_Audio_Spatializer_Api.GetTransmissionFactor(materialPreset, ref transmission);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_15;
		L_15 = PXR_Audio_Spatializer_SceneMaterial_get_Context_m089D37FED71CC522CA7891F1C36F9F3A373202A3(__this, NULL);
		NullCheck(L_15);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_16;
		L_16 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(L_15, NULL);
		int32_t L_17 = __this->___materialPreset_4;
		float* L_18 = (&__this->___transmission_8);
		NullCheck(L_16);
		int32_t L_19;
		L_19 = VirtualFuncInvoker2< int32_t, int32_t, float* >::Invoke(11 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::GetTransmissionFactor(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&) */, L_16, L_17, L_18);
		// lastMaterialPreset = materialPreset;
		int32_t L_20 = __this->___materialPreset_4;
		__this->___lastMaterialPreset_5 = L_20;
		return;
	}

IL_0090:
	{
		// lastMaterialPreset = materialPreset;
		int32_t L_21 = __this->___materialPreset_4;
		__this->___lastMaterialPreset_5 = L_21;
		return;
	}

IL_009d:
	{
		// else if (materialPreset != PXR_Audio.Spatializer.AcousticsMaterial.Custom && Context != null) // material_preset is not changed, but acoustic properties are changed manually
		int32_t L_22 = __this->___materialPreset_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)29))))
		{
			goto IL_01cb;
		}
	}
	{
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_23;
		L_23 = PXR_Audio_Spatializer_SceneMaterial_get_Context_m089D37FED71CC522CA7891F1C36F9F3A373202A3(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_01cb;
		}
	}
	{
		// Context.PXR_Audio_Spatializer_Api.GetAbsorptionFactor(materialPreset, absorptionForValidation);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_25;
		L_25 = PXR_Audio_Spatializer_SceneMaterial_get_Context_m089D37FED71CC522CA7891F1C36F9F3A373202A3(__this, NULL);
		NullCheck(L_25);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_26;
		L_26 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(L_25, NULL);
		int32_t L_27 = __this->___materialPreset_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = __this->___absorptionForValidation_10;
		NullCheck(L_26);
		int32_t L_29;
		L_29 = VirtualFuncInvoker2< int32_t, int32_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(9 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::GetAbsorptionFactor(PXR_Audio.Spatializer.AcousticsMaterial,System.Single[]) */, L_26, L_27, L_28);
		// Context.PXR_Audio_Spatializer_Api.GetScatteringFactor(materialPreset, ref scatteringForValidation);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_30;
		L_30 = PXR_Audio_Spatializer_SceneMaterial_get_Context_m089D37FED71CC522CA7891F1C36F9F3A373202A3(__this, NULL);
		NullCheck(L_30);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_31;
		L_31 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(L_30, NULL);
		int32_t L_32 = __this->___materialPreset_4;
		float* L_33 = (&__this->___scatteringForValidation_11);
		NullCheck(L_31);
		int32_t L_34;
		L_34 = VirtualFuncInvoker2< int32_t, int32_t, float* >::Invoke(10 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::GetScatteringFactor(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&) */, L_31, L_32, L_33);
		// Context.PXR_Audio_Spatializer_Api.GetTransmissionFactor(materialPreset, ref transmissionForValidation);
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_35;
		L_35 = PXR_Audio_Spatializer_SceneMaterial_get_Context_m089D37FED71CC522CA7891F1C36F9F3A373202A3(__this, NULL);
		NullCheck(L_35);
		Api_t64D8A27773AE5882B3B45C264344706B43D1141A* L_36;
		L_36 = PXR_Audio_Spatializer_Context_get_PXR_Audio_Spatializer_Api_m0B5FAF8866CBF942DEEC8B19AC151A21B6FD04A4(L_35, NULL);
		int32_t L_37 = __this->___materialPreset_4;
		float* L_38 = (&__this->___transmissionForValidation_12);
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, int32_t, float* >::Invoke(11 /* PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.Api::GetTransmissionFactor(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&) */, L_36, L_37, L_38);
		// if (Mathf.Abs(absorption[0] - absorptionForValidation[0]) > float.Epsilon ||
		//     Mathf.Abs(absorption[1] - absorptionForValidation[1]) > float.Epsilon ||
		//     Mathf.Abs(absorption[2] - absorptionForValidation[2]) > float.Epsilon ||
		//     Mathf.Abs(absorption[3] - absorptionForValidation[3]) > float.Epsilon ||
		//     Mathf.Abs(scattering - scatteringForValidation) > float.Epsilon ||
		//     Mathf.Abs(transmission - transmissionForValidation) > float.Epsilon)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = __this->___absorption_6;
		NullCheck(L_40);
		int32_t L_41 = 0;
		float L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_43 = __this->___absorptionForValidation_10;
		NullCheck(L_43);
		int32_t L_44 = 0;
		float L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		float L_46;
		L_46 = fabsf(((float)il2cpp_codegen_subtract(L_42, L_45)));
		if ((((float)L_46) > ((float)(1.40129846E-45f))))
		{
			goto IL_01bb;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47 = __this->___absorption_6;
		NullCheck(L_47);
		int32_t L_48 = 1;
		float L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = __this->___absorptionForValidation_10;
		NullCheck(L_50);
		int32_t L_51 = 1;
		float L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		float L_53;
		L_53 = fabsf(((float)il2cpp_codegen_subtract(L_49, L_52)));
		if ((((float)L_53) > ((float)(1.40129846E-45f))))
		{
			goto IL_01bb;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = __this->___absorption_6;
		NullCheck(L_54);
		int32_t L_55 = 2;
		float L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_57 = __this->___absorptionForValidation_10;
		NullCheck(L_57);
		int32_t L_58 = 2;
		float L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		float L_60;
		L_60 = fabsf(((float)il2cpp_codegen_subtract(L_56, L_59)));
		if ((((float)L_60) > ((float)(1.40129846E-45f))))
		{
			goto IL_01bb;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = __this->___absorption_6;
		NullCheck(L_61);
		int32_t L_62 = 3;
		float L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_64 = __this->___absorptionForValidation_10;
		NullCheck(L_64);
		int32_t L_65 = 3;
		float L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		float L_67;
		L_67 = fabsf(((float)il2cpp_codegen_subtract(L_63, L_66)));
		if ((((float)L_67) > ((float)(1.40129846E-45f))))
		{
			goto IL_01bb;
		}
	}
	{
		float L_68 = __this->___scattering_7;
		float L_69 = __this->___scatteringForValidation_11;
		float L_70;
		L_70 = fabsf(((float)il2cpp_codegen_subtract(L_68, L_69)));
		if ((((float)L_70) > ((float)(1.40129846E-45f))))
		{
			goto IL_01bb;
		}
	}
	{
		float L_71 = __this->___transmission_8;
		float L_72 = __this->___transmissionForValidation_12;
		float L_73;
		L_73 = fabsf(((float)il2cpp_codegen_subtract(L_71, L_72)));
		if ((!(((float)L_73) > ((float)(1.40129846E-45f)))))
		{
			goto IL_01cb;
		}
	}

IL_01bb:
	{
		// materialPreset = PXR_Audio.Spatializer.AcousticsMaterial.Custom;
		__this->___materialPreset_4 = ((int32_t)29);
		// lastMaterialPreset = PXR_Audio.Spatializer.AcousticsMaterial.Custom;
		__this->___lastMaterialPreset_5 = ((int32_t)29);
	}

IL_01cb:
	{
		// }
		return;
	}
}
// System.Void PXR_Audio_Spatializer_SceneMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PXR_Audio_Spatializer_SceneMaterial__ctor_mF8AA2E61DCD45722498435A638B278A56BC24FD1 (PXR_Audio_Spatializer_SceneMaterial_t5ADBA43D586195CE87E91E4793E0F7D7D93D8C83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float[] absorption = new float[4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___absorption_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___absorption_6), (void*)L_0);
		// private float[] absorptionForValidation = new float[4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___absorptionForValidation_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___absorptionForValidation_10), (void*)L_1);
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
// System.Void PXR_Audio.Spatializer.Api::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api__ctor_mE949CF5885EA222299D3D29088CE0AA7A5EA70F8 (Api_t64D8A27773AE5882B3B45C264344706B43D1141A* __this, const RuntimeMethod* method) 
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
// System.String PXR_Audio.Spatializer.ApiUnityImpl::GetVersionImport(System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiUnityImpl_GetVersionImport_mFBF4D7104C338C47AFCA8585A8DF335F8498E64A (int32_t* ___major0, int32_t* ___minor1, int32_t* ___patch2, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t*) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_get_version", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_get_version)(___major0, ___minor1, ___patch2);
	#else
	char* returnValue = il2cppPInvokeFunc(___major0, ___minor1, ___patch2);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String PXR_Audio.Spatializer.ApiUnityImpl::GetVersion(System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiUnityImpl_GetVersion_mBE2DCBB6811D3FFEBB19EE4DAE34E0C225BCD4E7 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, int32_t* ___major0, int32_t* ___minor1, int32_t* ___patch2, const RuntimeMethod* method) 
{
	{
		// return GetVersionImport(ref major, ref minor, ref patch);
		int32_t* L_0 = ___major0;
		int32_t* L_1 = ___minor1;
		int32_t* L_2 = ___patch2;
		String_t* L_3;
		L_3 = ApiUnityImpl_GetVersionImport_mFBF4D7104C338C47AFCA8585A8DF335F8498E64A(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::CreateContextImport(System.IntPtr&,PXR_Audio.Spatializer.RenderingMode,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_CreateContextImport_mE2DA0933509C046253B2CED514C4659454DC117E (intptr_t* ___ctx0, int32_t ___mode1, uint32_t ___framesPerBuffer2, uint32_t ___sampleRate3, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*, int32_t, uint32_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(int32_t) + sizeof(uint32_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_create_context", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_create_context)(___ctx0, ___mode1, ___framesPerBuffer2, ___sampleRate3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___mode1, ___framesPerBuffer2, ___sampleRate3);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::CreateContext(System.IntPtr&,PXR_Audio.Spatializer.RenderingMode,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_CreateContext_mEE5503B936F170A0200C539072ECF4DA301DBB49 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t* ___ctx0, int32_t ___mode1, uint32_t ___framesPerBuffer2, uint32_t ___sampleRate3, const RuntimeMethod* method) 
{
	{
		// return CreateContextImport(ref ctx, mode, framesPerBuffer, sampleRate);
		intptr_t* L_0 = ___ctx0;
		int32_t L_1 = ___mode1;
		uint32_t L_2 = ___framesPerBuffer2;
		uint32_t L_3 = ___sampleRate3;
		int32_t L_4;
		L_4 = ApiUnityImpl_CreateContextImport_mE2DA0933509C046253B2CED514C4659454DC117E(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::InitializeContextImport(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_InitializeContextImport_mC5C62793E5E4176E137F471A5C443243BBDB1FD0 (intptr_t ___ctx0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_initialize_context", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_initialize_context)(___ctx0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::InitializeContext(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_InitializeContext_mB71D877D8DDFD3654792D28E8DEEAAD8F56A387C (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, const RuntimeMethod* method) 
{
	{
		// return InitializeContextImport(ctx);
		intptr_t L_0 = ___ctx0;
		int32_t L_1;
		L_1 = ApiUnityImpl_InitializeContextImport_mC5C62793E5E4176E137F471A5C443243BBDB1FD0(L_0, NULL);
		return L_1;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitMeshImport(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,PXR_Audio.Spatializer.AcousticsMaterial,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitMeshImport_mD102C291BB2F8527E58A482F78741BCE65737932 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices1, int32_t ___verticesCount2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices3, int32_t ___indicesCount4, int32_t ___material5, int32_t* ___geometryId6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int32_t*, int32_t, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_submit_mesh", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___vertices1' to native representation
	float* ____vertices1_marshaled = NULL;
	if (___vertices1 != NULL)
	{
		____vertices1_marshaled = reinterpret_cast<float*>((___vertices1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___indices3' to native representation
	int32_t* ____indices3_marshaled = NULL;
	if (___indices3 != NULL)
	{
		____indices3_marshaled = reinterpret_cast<int32_t*>((___indices3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_submit_mesh)(___ctx0, ____vertices1_marshaled, ___verticesCount2, ____indices3_marshaled, ___indicesCount4, ___material5, ___geometryId6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____vertices1_marshaled, ___verticesCount2, ____indices3_marshaled, ___indicesCount4, ___material5, ___geometryId6);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitMesh(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,PXR_Audio.Spatializer.AcousticsMaterial,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitMesh_mCF9B4622D3F7FDACBCADC4364DEBC799FCAA8072 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices1, int32_t ___verticesCount2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices3, int32_t ___indicesCount4, int32_t ___material5, int32_t* ___geometryId6, const RuntimeMethod* method) 
{
	{
		// return SubmitMeshImport(ctx, vertices, verticesCount, indices, indicesCount, material, ref geometryId);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___vertices1;
		int32_t L_2 = ___verticesCount2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___indices3;
		int32_t L_4 = ___indicesCount4;
		int32_t L_5 = ___material5;
		int32_t* L_6 = ___geometryId6;
		int32_t L_7;
		L_7 = ApiUnityImpl_SubmitMeshImport_mD102C291BB2F8527E58A482F78741BCE65737932(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitMeshAndMaterialFactorImport(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,System.Single[],System.Single,System.Single,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitMeshAndMaterialFactorImport_mFCB8B8EA6E548756C2EC8197504764020FFA600F (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices1, int32_t ___verticesCount2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices3, int32_t ___indicesCount4, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor5, float ___scatteringFactor6, float ___transmissionFactor7, int32_t* ___geometryId8, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int32_t*, int32_t, float*, float, float, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(void*) + sizeof(float) + sizeof(float) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_submit_mesh_and_material_factor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___vertices1' to native representation
	float* ____vertices1_marshaled = NULL;
	if (___vertices1 != NULL)
	{
		____vertices1_marshaled = reinterpret_cast<float*>((___vertices1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___indices3' to native representation
	int32_t* ____indices3_marshaled = NULL;
	if (___indices3 != NULL)
	{
		____indices3_marshaled = reinterpret_cast<int32_t*>((___indices3)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___absorptionFactor5' to native representation
	float* ____absorptionFactor5_marshaled = NULL;
	if (___absorptionFactor5 != NULL)
	{
		____absorptionFactor5_marshaled = reinterpret_cast<float*>((___absorptionFactor5)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_submit_mesh_and_material_factor)(___ctx0, ____vertices1_marshaled, ___verticesCount2, ____indices3_marshaled, ___indicesCount4, ____absorptionFactor5_marshaled, ___scatteringFactor6, ___transmissionFactor7, ___geometryId8);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____vertices1_marshaled, ___verticesCount2, ____indices3_marshaled, ___indicesCount4, ____absorptionFactor5_marshaled, ___scatteringFactor6, ___transmissionFactor7, ___geometryId8);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitMeshAndMaterialFactor(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,System.Single[],System.Single,System.Single,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitMeshAndMaterialFactor_m2F48302277E8CE01EE210FB60A82DB3DD03F2350 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices1, int32_t ___verticesCount2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices3, int32_t ___indicesCount4, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor5, float ___scatteringFactor6, float ___transmissionFactor7, int32_t* ___geometryId8, const RuntimeMethod* method) 
{
	{
		// return SubmitMeshAndMaterialFactorImport(ctx, vertices, verticesCount, indices, indicesCount,
		//     absorptionFactor, scatteringFactor, transmissionFactor, ref geometryId);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___vertices1;
		int32_t L_2 = ___verticesCount2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___indices3;
		int32_t L_4 = ___indicesCount4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___absorptionFactor5;
		float L_6 = ___scatteringFactor6;
		float L_7 = ___transmissionFactor7;
		int32_t* L_8 = ___geometryId8;
		int32_t L_9;
		L_9 = ApiUnityImpl_SubmitMeshAndMaterialFactorImport_mFCB8B8EA6E548756C2EC8197504764020FFA600F(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetAbsorptionFactorImport(PXR_Audio.Spatializer.AcousticsMaterial,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetAbsorptionFactorImport_mD676D85C6B241952CAB15BAC118F4A61646C4E6D (int32_t ___material0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_get_absorption_factor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___absorptionFactor1' to native representation
	float* ____absorptionFactor1_marshaled = NULL;
	if (___absorptionFactor1 != NULL)
	{
		____absorptionFactor1_marshaled = reinterpret_cast<float*>((___absorptionFactor1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_get_absorption_factor)(___material0, ____absorptionFactor1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___material0, ____absorptionFactor1_marshaled);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetAbsorptionFactor(PXR_Audio.Spatializer.AcousticsMaterial,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetAbsorptionFactor_m72EE98939F81180C9D5E3D50A0D672C0BAF9A2F9 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, int32_t ___material0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor1, const RuntimeMethod* method) 
{
	{
		// return GetAbsorptionFactorImport(material, absorptionFactor);
		int32_t L_0 = ___material0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___absorptionFactor1;
		int32_t L_2;
		L_2 = ApiUnityImpl_GetAbsorptionFactorImport_mD676D85C6B241952CAB15BAC118F4A61646C4E6D(L_0, L_1, NULL);
		return L_2;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetScatteringFactorImport(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetScatteringFactorImport_m48A19551CD60102C652FBDADA1998C8933A8CA97 (int32_t ___material0, float* ___scatteringFactor1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_get_scattering_factor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_get_scattering_factor)(___material0, ___scatteringFactor1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___material0, ___scatteringFactor1);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetScatteringFactor(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetScatteringFactor_m6C433176599FD6A09677B950866F2D90FA0642E6 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, int32_t ___material0, float* ___scatteringFactor1, const RuntimeMethod* method) 
{
	{
		// return GetScatteringFactorImport(material, ref scatteringFactor);
		int32_t L_0 = ___material0;
		float* L_1 = ___scatteringFactor1;
		int32_t L_2;
		L_2 = ApiUnityImpl_GetScatteringFactorImport_m48A19551CD60102C652FBDADA1998C8933A8CA97(L_0, L_1, NULL);
		return L_2;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetTransmissionFactorImport(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetTransmissionFactorImport_mAE071EC135F8B1173E244E08C9C3B14CE5F8265E (int32_t ___material0, float* ___transmissionFactor1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_get_transmission_factor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_get_transmission_factor)(___material0, ___transmissionFactor1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___material0, ___transmissionFactor1);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetTransmissionFactor(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetTransmissionFactor_m0C15133FCCE2BB95CE115466FF558C12F867E3AE (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, int32_t ___material0, float* ___transmissionFactor1, const RuntimeMethod* method) 
{
	{
		// return GetTransmissionFactorImport(material, ref transmissionFactor);
		int32_t L_0 = ___material0;
		float* L_1 = ___transmissionFactor1;
		int32_t L_2;
		L_2 = ApiUnityImpl_GetTransmissionFactorImport_mAE071EC135F8B1173E244E08C9C3B14CE5F8265E(L_0, L_1, NULL);
		return L_2;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::CommitSceneImport(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_CommitSceneImport_m31759A3D80DACEA16D3BB52F1CD110DDA73291F9 (intptr_t ___ctx0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_commit_scene", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_commit_scene)(___ctx0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::CommitScene(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_CommitScene_mE7504E69935D11FE0ECF73466C849BB756ECCBF3 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, const RuntimeMethod* method) 
{
	{
		// return CommitSceneImport(ctx);
		intptr_t L_0 = ___ctx0;
		int32_t L_1;
		L_1 = ApiUnityImpl_CommitSceneImport_m31759A3D80DACEA16D3BB52F1CD110DDA73291F9(L_0, NULL);
		return L_1;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::AddSourceImport(System.IntPtr,PXR_Audio.Spatializer.SourceMode,System.Single[],System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_AddSourceImport_m14CCC235469EBBB4AEA7BF7280E1AA76E19DF167 (intptr_t ___ctx0, int32_t ___sourceMode1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position2, int32_t* ___sourceId3, bool ___isAsync4, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, float*, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_add_source", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___position2' to native representation
	float* ____position2_marshaled = NULL;
	if (___position2 != NULL)
	{
		____position2_marshaled = reinterpret_cast<float*>((___position2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_add_source)(___ctx0, ___sourceMode1, ____position2_marshaled, ___sourceId3, static_cast<int32_t>(___isAsync4));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___sourceMode1, ____position2_marshaled, ___sourceId3, static_cast<int32_t>(___isAsync4));
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::AddSource(System.IntPtr,PXR_Audio.Spatializer.SourceMode,System.Single[],System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_AddSource_m7FB44CE0AD07CB578B05144B3ED0A55452AE4AD9 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, int32_t ___sourceMode1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position2, int32_t* ___sourceId3, bool ___isAsync4, const RuntimeMethod* method) 
{
	{
		// return AddSourceImport(ctx, sourceMode, position, ref sourceId, isAsync);
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___sourceMode1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___position2;
		int32_t* L_3 = ___sourceId3;
		bool L_4 = ___isAsync4;
		int32_t L_5;
		L_5 = ApiUnityImpl_AddSourceImport_m14CCC235469EBBB4AEA7BF7280E1AA76E19DF167(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::AddSourceWithOrientationImport(System.IntPtr,PXR_Audio.Spatializer.SourceMode,System.Single[],System.Single[],System.Single[],System.Single,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_AddSourceWithOrientationImport_m79E407FA770110662032A7B32EC7C2DE5F2A680E (intptr_t ___ctx0, int32_t ___mode1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up4, float ___radius5, int32_t* ___sourceId6, bool ___isAsync7, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, float*, float*, float*, float, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(float) + sizeof(int32_t*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_add_source_with_orientation", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___position2' to native representation
	float* ____position2_marshaled = NULL;
	if (___position2 != NULL)
	{
		____position2_marshaled = reinterpret_cast<float*>((___position2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___front3' to native representation
	float* ____front3_marshaled = NULL;
	if (___front3 != NULL)
	{
		____front3_marshaled = reinterpret_cast<float*>((___front3)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___up4' to native representation
	float* ____up4_marshaled = NULL;
	if (___up4 != NULL)
	{
		____up4_marshaled = reinterpret_cast<float*>((___up4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_add_source_with_orientation)(___ctx0, ___mode1, ____position2_marshaled, ____front3_marshaled, ____up4_marshaled, ___radius5, ___sourceId6, static_cast<int32_t>(___isAsync7));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___mode1, ____position2_marshaled, ____front3_marshaled, ____up4_marshaled, ___radius5, ___sourceId6, static_cast<int32_t>(___isAsync7));
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::AddSourceWithOrientation(System.IntPtr,PXR_Audio.Spatializer.SourceMode,System.Single[],System.Single[],System.Single[],System.Single,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_AddSourceWithOrientation_m769BCD1A092E4403F13ABD2589A575D101B73CD1 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, int32_t ___mode1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up4, float ___radius5, int32_t* ___sourceId6, bool ___isAsync7, const RuntimeMethod* method) 
{
	{
		// return AddSourceWithOrientationImport(ctx, mode, position, front, up, radius, ref sourceId, isAsync);
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___mode1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___position2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___front3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___up4;
		float L_5 = ___radius5;
		int32_t* L_6 = ___sourceId6;
		bool L_7 = ___isAsync7;
		int32_t L_8;
		L_8 = ApiUnityImpl_AddSourceWithOrientationImport_m79E407FA770110662032A7B32EC7C2DE5F2A680E(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::AddSourceWithConfigImport(System.IntPtr,PXR_Audio.Spatializer.SourceConfig&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_AddSourceWithConfigImport_m63348636968AE3BFA917332B21C5D014E84E4CBE (intptr_t ___ctx0, SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9* ___sourceConfig1, int32_t* ___sourceId2, bool ___isAsync3, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9*, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9*) + sizeof(int32_t*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_add_source_with_config", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_add_source_with_config)(___ctx0, ___sourceConfig1, ___sourceId2, static_cast<int32_t>(___isAsync3));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___sourceConfig1, ___sourceId2, static_cast<int32_t>(___isAsync3));
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::AddSourceWithConfig(System.IntPtr,PXR_Audio.Spatializer.SourceConfig&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_AddSourceWithConfig_m8113212459F7F820C8788E4310E3D7DEC8B22880 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9* ___sourceConfig1, int32_t* ___sourceId2, bool ___isAsync3, const RuntimeMethod* method) 
{
	{
		// return AddSourceWithConfigImport(ctx, ref sourceConfig, ref sourceId, isAsync);
		intptr_t L_0 = ___ctx0;
		SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9* L_1 = ___sourceConfig1;
		int32_t* L_2 = ___sourceId2;
		bool L_3 = ___isAsync3;
		int32_t L_4;
		L_4 = ApiUnityImpl_AddSourceWithConfigImport_m63348636968AE3BFA917332B21C5D014E84E4CBE(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourceAttenuationModeImport(System.IntPtr,System.Int32,PXR_Audio.Spatializer.SourceAttenuationMode,PXR_Audio.Spatializer.DistanceAttenuationCallback,PXR_Audio.Spatializer.DistanceAttenuationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourceAttenuationModeImport_mD96101B13996BD6603CE601663E0D309D2AC8231 (intptr_t ___ctx0, int32_t ___sourceId1, int32_t ___mode2, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* ___directDistanceAttenuationCallback3, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* ___indirectDistanceAttenuationCallback4, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_set_source_attenuation_mode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___directDistanceAttenuationCallback3' to native representation
	Il2CppMethodPointer ____directDistanceAttenuationCallback3_marshaled = NULL;
	____directDistanceAttenuationCallback3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___directDistanceAttenuationCallback3));

	// Marshaling of parameter '___indirectDistanceAttenuationCallback4' to native representation
	Il2CppMethodPointer ____indirectDistanceAttenuationCallback4_marshaled = NULL;
	____indirectDistanceAttenuationCallback4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indirectDistanceAttenuationCallback4));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_set_source_attenuation_mode)(___ctx0, ___sourceId1, ___mode2, ____directDistanceAttenuationCallback3_marshaled, ____indirectDistanceAttenuationCallback4_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___sourceId1, ___mode2, ____directDistanceAttenuationCallback3_marshaled, ____indirectDistanceAttenuationCallback4_marshaled);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourceAttenuationMode(System.IntPtr,System.Int32,PXR_Audio.Spatializer.SourceAttenuationMode,PXR_Audio.Spatializer.DistanceAttenuationCallback,PXR_Audio.Spatializer.DistanceAttenuationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourceAttenuationMode_m2B76BB2B3222F6148F874A62DEC6C63E6040093E (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, int32_t ___sourceId1, int32_t ___mode2, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* ___directDistanceAttenuationCallback3, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* ___indirectDistanceAttenuationCallback4, const RuntimeMethod* method) 
{
	{
		// return SetSourceAttenuationModeImport(ctx, sourceId, mode, directDistanceAttenuationCallback,
		//     indirectDistanceAttenuationCallback);
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___sourceId1;
		int32_t L_2 = ___mode2;
		DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* L_3 = ___directDistanceAttenuationCallback3;
		DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* L_4 = ___indirectDistanceAttenuationCallback4;
		int32_t L_5;
		L_5 = ApiUnityImpl_SetSourceAttenuationModeImport_mD96101B13996BD6603CE601663E0D309D2AC8231(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourceRangeImport(System.IntPtr,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourceRangeImport_mE88063D8291F5022AF5035DED6747B1867B82BB0 (intptr_t ___ctx0, int32_t ___sourceId1, float ___rangeMin2, float ___rangeMax3, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, float, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(float) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_set_source_range", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_set_source_range)(___ctx0, ___sourceId1, ___rangeMin2, ___rangeMax3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___sourceId1, ___rangeMin2, ___rangeMax3);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourceRange(System.IntPtr,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourceRange_m79EB80D7AF57BA49D4E454DBA2892848AA25DB5D (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, int32_t ___sourceId1, float ___rangeMin2, float ___rangeMax3, const RuntimeMethod* method) 
{
	{
		// return SetSourceRangeImport(ctx, sourceId, rangeMin, rangeMax);
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___sourceId1;
		float L_2 = ___rangeMin2;
		float L_3 = ___rangeMax3;
		int32_t L_4;
		L_4 = ApiUnityImpl_SetSourceRangeImport_mE88063D8291F5022AF5035DED6747B1867B82BB0(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::RemoveSourceImport(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_RemoveSourceImport_m46F25D1FBA3B56C1EE931200A73C7E6348B29712 (intptr_t ___ctx0, int32_t ___sourceId1, bool ___is_async2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_remove_source", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_remove_source)(___ctx0, ___sourceId1, static_cast<int32_t>(___is_async2));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___sourceId1, static_cast<int32_t>(___is_async2));
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::RemoveSource(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_RemoveSource_mC6CF7EECFCA0474CA304B480CA0951865FD4E067 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, int32_t ___sourceId1, const RuntimeMethod* method) 
{
	{
		// return RemoveSourceImport(ctx, sourceId, true);
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___sourceId1;
		int32_t L_2;
		L_2 = ApiUnityImpl_RemoveSourceImport_m46F25D1FBA3B56C1EE931200A73C7E6348B29712(L_0, L_1, (bool)1, NULL);
		return L_2;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitSourceBufferImport(System.IntPtr,System.Int32,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitSourceBufferImport_mAB83ED2E459919437E71E5E41803909D2B97BB74 (intptr_t ___ctx0, int32_t ___sourceId1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputBufferPtr2, uint32_t ___numFrames3, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, float*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_submit_source_buffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___inputBufferPtr2' to native representation
	float* ____inputBufferPtr2_marshaled = NULL;
	if (___inputBufferPtr2 != NULL)
	{
		____inputBufferPtr2_marshaled = reinterpret_cast<float*>((___inputBufferPtr2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_submit_source_buffer)(___ctx0, ___sourceId1, ____inputBufferPtr2_marshaled, ___numFrames3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___sourceId1, ____inputBufferPtr2_marshaled, ___numFrames3);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitSourceBuffer(System.IntPtr,System.Int32,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitSourceBuffer_mE3FA114B4ED5D830AB9C30E52CC7DC7F01DAA553 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, int32_t ___sourceId1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputBufferPtr2, uint32_t ___numFrames3, const RuntimeMethod* method) 
{
	{
		// return SubmitSourceBufferImport(ctx, sourceId, inputBufferPtr, numFrames);
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___sourceId1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___inputBufferPtr2;
		uint32_t L_3 = ___numFrames3;
		int32_t L_4;
		L_4 = ApiUnityImpl_SubmitSourceBufferImport_mAB83ED2E459919437E71E5E41803909D2B97BB74(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitAmbisonicChannelBufferImport(System.IntPtr,System.Single[],System.Int32,System.Int32,PXR_Audio.Spatializer.AmbisonicNormalizationType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitAmbisonicChannelBufferImport_m5F45A40D378E471AED5A16C078ED8CBA19F5D7B8 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___ambisonicChannelBuffer1, int32_t ___order2, int32_t ___degree3, int32_t ___normType4, float ___gain5, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int32_t, int32_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_submit_ambisonic_channel_buffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___ambisonicChannelBuffer1' to native representation
	float* ____ambisonicChannelBuffer1_marshaled = NULL;
	if (___ambisonicChannelBuffer1 != NULL)
	{
		____ambisonicChannelBuffer1_marshaled = reinterpret_cast<float*>((___ambisonicChannelBuffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_submit_ambisonic_channel_buffer)(___ctx0, ____ambisonicChannelBuffer1_marshaled, ___order2, ___degree3, ___normType4, ___gain5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____ambisonicChannelBuffer1_marshaled, ___order2, ___degree3, ___normType4, ___gain5);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitAmbisonicChannelBuffer(System.IntPtr,System.Single[],System.Int32,System.Int32,PXR_Audio.Spatializer.AmbisonicNormalizationType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitAmbisonicChannelBuffer_m49763FCD59AB7493FBF7F79BFD9593D47C2E502D (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___ambisonicChannelBuffer1, int32_t ___order2, int32_t ___degree3, int32_t ___normType4, float ___gain5, const RuntimeMethod* method) 
{
	{
		// return SubmitAmbisonicChannelBufferImport(ctx, ambisonicChannelBuffer, order, degree, normType, gain);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___ambisonicChannelBuffer1;
		int32_t L_2 = ___order2;
		int32_t L_3 = ___degree3;
		int32_t L_4 = ___normType4;
		float L_5 = ___gain5;
		int32_t L_6;
		L_6 = ApiUnityImpl_SubmitAmbisonicChannelBufferImport_m5F45A40D378E471AED5A16C078ED8CBA19F5D7B8(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitInterleavedAmbisonicBufferImport(System.IntPtr,System.Single[],System.Int32,PXR_Audio.Spatializer.AmbisonicNormalizationType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitInterleavedAmbisonicBufferImport_mEC0E16E83BE0164DF914B3B76EE61BCD238E718B (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___ambisonicBuffer1, int32_t ___ambisonicOrder2, int32_t ___normType3, float ___gain4, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int32_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_submit_interleaved_ambisonic_buffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___ambisonicBuffer1' to native representation
	float* ____ambisonicBuffer1_marshaled = NULL;
	if (___ambisonicBuffer1 != NULL)
	{
		____ambisonicBuffer1_marshaled = reinterpret_cast<float*>((___ambisonicBuffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_submit_interleaved_ambisonic_buffer)(___ctx0, ____ambisonicBuffer1_marshaled, ___ambisonicOrder2, ___normType3, ___gain4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____ambisonicBuffer1_marshaled, ___ambisonicOrder2, ___normType3, ___gain4);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitInterleavedAmbisonicBuffer(System.IntPtr,System.Single[],System.Int32,PXR_Audio.Spatializer.AmbisonicNormalizationType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitInterleavedAmbisonicBuffer_m1FC9A1E8BC8EBAD144C4D058F646CE696C41787F (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___ambisonicBuffer1, int32_t ___ambisonicOrder2, int32_t ___normType3, float ___gain4, const RuntimeMethod* method) 
{
	{
		// return SubmitInterleavedAmbisonicBufferImport(ctx, ambisonicBuffer, ambisonicOrder, normType, gain);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___ambisonicBuffer1;
		int32_t L_2 = ___ambisonicOrder2;
		int32_t L_3 = ___normType3;
		float L_4 = ___gain4;
		int32_t L_5;
		L_5 = ApiUnityImpl_SubmitInterleavedAmbisonicBufferImport_mEC0E16E83BE0164DF914B3B76EE61BCD238E718B(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitMatrixInputBufferImport(System.IntPtr,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitMatrixInputBufferImport_m548CE0571D523D176D68FAA38FCDD100B4F62889 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputBuffer1, int32_t ___inputChannelIndex2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_submit_matrix_input_buffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___inputBuffer1' to native representation
	float* ____inputBuffer1_marshaled = NULL;
	if (___inputBuffer1 != NULL)
	{
		____inputBuffer1_marshaled = reinterpret_cast<float*>((___inputBuffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_submit_matrix_input_buffer)(___ctx0, ____inputBuffer1_marshaled, ___inputChannelIndex2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____inputBuffer1_marshaled, ___inputChannelIndex2);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SubmitMatrixInputBuffer(System.IntPtr,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SubmitMatrixInputBuffer_m3A63C95B1AFE20BEC1F7F2A05C33E0586EBB12E6 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputBuffer1, int32_t ___inputChannelIndex2, const RuntimeMethod* method) 
{
	{
		// return SubmitMatrixInputBufferImport(ctx, inputBuffer, inputChannelIndex);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___inputBuffer1;
		int32_t L_2 = ___inputChannelIndex2;
		int32_t L_3;
		L_3 = ApiUnityImpl_SubmitMatrixInputBufferImport_m548CE0571D523D176D68FAA38FCDD100B4F62889(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetInterleavedBinauralBufferImport(System.IntPtr,System.Single[],System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetInterleavedBinauralBufferImport_m33EBA4DFF6E25A9640E0609E658E16DDBE1CA840 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___outputBufferPtr1, uint32_t ___numFrames2, bool ___isAccumulative3, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, uint32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(uint32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_get_interleaved_binaural_buffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___outputBufferPtr1' to native representation
	float* ____outputBufferPtr1_marshaled = NULL;
	if (___outputBufferPtr1 != NULL)
	{
		____outputBufferPtr1_marshaled = reinterpret_cast<float*>((___outputBufferPtr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_get_interleaved_binaural_buffer)(___ctx0, ____outputBufferPtr1_marshaled, ___numFrames2, static_cast<int32_t>(___isAccumulative3));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____outputBufferPtr1_marshaled, ___numFrames2, static_cast<int32_t>(___isAccumulative3));
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetInterleavedBinauralBuffer(System.IntPtr,System.Single[],System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetInterleavedBinauralBuffer_m24E2BD7C9AC2ABF31B26FACD64E94BD366A62B1A (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___outputBufferPtr1, uint32_t ___numFrames2, bool ___isAccumulative3, const RuntimeMethod* method) 
{
	{
		// return GetInterleavedBinauralBufferImport(ctx, outputBufferPtr, numFrames, isAccumulative);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___outputBufferPtr1;
		uint32_t L_2 = ___numFrames2;
		bool L_3 = ___isAccumulative3;
		int32_t L_4;
		L_4 = ApiUnityImpl_GetInterleavedBinauralBufferImport_m33EBA4DFF6E25A9640E0609E658E16DDBE1CA840(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetPlanarBinauralBufferImport(System.IntPtr,System.Single[][],System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetPlanarBinauralBufferImport_mDF13D1CFE95B54AB7B0854DF79938AB7A44B058D (intptr_t ___ctx0, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___outputBufferPtr1, uint32_t ___numFrames2, bool ___isAccumulative3, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Single[][]'."), NULL);
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetPlanarBinauralBuffer(System.IntPtr,System.Single[][],System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetPlanarBinauralBuffer_m56BAB94D9F3477554FAA975BF3EACEEB66426802 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___outputBufferPtr1, uint32_t ___numFrames2, bool ___isAccumulative3, const RuntimeMethod* method) 
{
	{
		// return GetPlanarBinauralBufferImport(ctx, outputBufferPtr, numFrames, isAccumulative);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_1 = ___outputBufferPtr1;
		uint32_t L_2 = ___numFrames2;
		bool L_3 = ___isAccumulative3;
		int32_t L_4;
		L_4 = ApiUnityImpl_GetPlanarBinauralBufferImport_mDF13D1CFE95B54AB7B0854DF79938AB7A44B058D(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetInterleavedLoudspeakersBufferImport(System.IntPtr,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetInterleavedLoudspeakersBufferImport_m2468E743016EBB3387D8705ED572ABF4FE815473 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___outputBufferPtr1, uint32_t ___numFrames2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_get_interleaved_loudspeakers_buffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___outputBufferPtr1' to native representation
	float* ____outputBufferPtr1_marshaled = NULL;
	if (___outputBufferPtr1 != NULL)
	{
		____outputBufferPtr1_marshaled = reinterpret_cast<float*>((___outputBufferPtr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_get_interleaved_loudspeakers_buffer)(___ctx0, ____outputBufferPtr1_marshaled, ___numFrames2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____outputBufferPtr1_marshaled, ___numFrames2);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetInterleavedLoudspeakersBuffer(System.IntPtr,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetInterleavedLoudspeakersBuffer_m40B53C5501730E97A24E31E62A8BC3C9C1C2EA7E (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___outputBufferPtr1, uint32_t ___numFrames2, const RuntimeMethod* method) 
{
	{
		// return GetInterleavedLoudspeakersBufferImport(ctx, outputBufferPtr, numFrames);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___outputBufferPtr1;
		uint32_t L_2 = ___numFrames2;
		int32_t L_3;
		L_3 = ApiUnityImpl_GetInterleavedLoudspeakersBufferImport_m2468E743016EBB3387D8705ED572ABF4FE815473(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetPlanarLoudspeakersBufferImport(System.IntPtr,System.Single[][],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetPlanarLoudspeakersBufferImport_m8B30F4AF3064A2952A9F597355451EA648674E6A (intptr_t ___ctx0, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___outputBufferPtr1, uint32_t ___numFrames2, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Single[][]'."), NULL);
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::GetPlanarLoudspeakersBuffer(System.IntPtr,System.Single[][],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_GetPlanarLoudspeakersBuffer_mF00AF6A6992DD8EE50418ECEDB571EFF0BDCAE4A (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___outputBufferPtr1, uint32_t ___numFrames2, const RuntimeMethod* method) 
{
	{
		// return GetPlanarLoudspeakersBufferImport(ctx, outputBufferPtr, numFrames);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* L_1 = ___outputBufferPtr1;
		uint32_t L_2 = ___numFrames2;
		int32_t L_3;
		L_3 = ApiUnityImpl_GetPlanarLoudspeakersBufferImport_m8B30F4AF3064A2952A9F597355451EA648674E6A(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::UpdateSceneImport(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_UpdateSceneImport_mE5D3473C585D73306A3C0F9E9480CF339910C88D (intptr_t ___ctx0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_update_scene", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_update_scene)(___ctx0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::UpdateScene(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_UpdateScene_mC176DEAC79F0F9262AC50F830692D83D6FC7BFC4 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, const RuntimeMethod* method) 
{
	{
		// return UpdateSceneImport(ctx);
		intptr_t L_0 = ___ctx0;
		int32_t L_1;
		L_1 = ApiUnityImpl_UpdateSceneImport_mE5D3473C585D73306A3C0F9E9480CF339910C88D(L_0, NULL);
		return L_1;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetDopplerEffectImport(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetDopplerEffectImport_mD6E97B1179C87898CAA3A3D8781F3A9F17B4DB9C (intptr_t ___ctx0, int32_t ___sourceId1, bool ___on2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_set_doppler_effect", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_set_doppler_effect)(___ctx0, ___sourceId1, static_cast<int32_t>(___on2));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___sourceId1, static_cast<int32_t>(___on2));
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetDopplerEffect(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetDopplerEffect_mB4B590602C1D887BFE09220BEE5EC02A8944DF71 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, int32_t ___sourceId1, bool ___on2, const RuntimeMethod* method) 
{
	{
		// return SetDopplerEffectImport(ctx, sourceId, on);
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___sourceId1;
		bool L_2 = ___on2;
		int32_t L_3;
		L_3 = ApiUnityImpl_SetDopplerEffectImport_mD6E97B1179C87898CAA3A3D8781F3A9F17B4DB9C(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetPlaybackModeImport(System.IntPtr,PXR_Audio.Spatializer.PlaybackMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetPlaybackModeImport_m1365BDD02267856B5F4B2705190462F93FD7659F (intptr_t ___ctx0, int32_t ___playbackMode1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_set_playback_mode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_set_playback_mode)(___ctx0, ___playbackMode1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___playbackMode1);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetPlaybackMode(System.IntPtr,PXR_Audio.Spatializer.PlaybackMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetPlaybackMode_mC50485CD2AF0E64E2B7A704993E7F8E863D9FB74 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, int32_t ___playbackMode1, const RuntimeMethod* method) 
{
	{
		// return SetPlaybackModeImport(ctx, playbackMode);
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___playbackMode1;
		int32_t L_2;
		L_2 = ApiUnityImpl_SetPlaybackModeImport_m1365BDD02267856B5F4B2705190462F93FD7659F(L_0, L_1, NULL);
		return L_2;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetLoudspeakerArrayImport(System.IntPtr,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetLoudspeakerArrayImport_mA9AA83C0AD163D08875DBDA3D944287CE5834CB0 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___positions1, int32_t ___numLoudspeakers2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_set_loudspeaker_array", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___positions1' to native representation
	float* ____positions1_marshaled = NULL;
	if (___positions1 != NULL)
	{
		____positions1_marshaled = reinterpret_cast<float*>((___positions1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_set_loudspeaker_array)(___ctx0, ____positions1_marshaled, ___numLoudspeakers2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____positions1_marshaled, ___numLoudspeakers2);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetLoudspeakerArray(System.IntPtr,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetLoudspeakerArray_m912B295967000958AE5C538C86829A231372F012 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___positions1, int32_t ___numLoudspeakers2, const RuntimeMethod* method) 
{
	{
		// return SetLoudspeakerArrayImport(ctx, positions, numLoudspeakers);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___positions1;
		int32_t L_2 = ___numLoudspeakers2;
		int32_t L_3;
		L_3 = ApiUnityImpl_SetLoudspeakerArrayImport_mA9AA83C0AD163D08875DBDA3D944287CE5834CB0(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetMappingMatrixImport(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetMappingMatrixImport_mA15932349B9515B4F84671B76F151BE8938CD501 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___matrix1, int32_t ___numInputChannels2, int32_t ___numOutputChannels3, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_set_mapping_matrix", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___matrix1' to native representation
	float* ____matrix1_marshaled = NULL;
	if (___matrix1 != NULL)
	{
		____matrix1_marshaled = reinterpret_cast<float*>((___matrix1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_set_mapping_matrix)(___ctx0, ____matrix1_marshaled, ___numInputChannels2, ___numOutputChannels3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____matrix1_marshaled, ___numInputChannels2, ___numOutputChannels3);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetMappingMatrix(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetMappingMatrix_m2FE69E1950A1F0363D3A18839CA0309FED2F47C4 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___matrix1, int32_t ___numInputChannels2, int32_t ___numOutputChannels3, const RuntimeMethod* method) 
{
	{
		// return SetMappingMatrixImport(ctx, matrix, numInputChannels, numOutputChannels);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___matrix1;
		int32_t L_2 = ___numInputChannels2;
		int32_t L_3 = ___numOutputChannels3;
		int32_t L_4;
		L_4 = ApiUnityImpl_SetMappingMatrixImport_mA15932349B9515B4F84671B76F151BE8938CD501(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetListenerPositionImport(System.IntPtr,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetListenerPositionImport_m6B18AF0D7ADBFC63BC98212330420D3C7A16E23B (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_set_listener_position", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___position1' to native representation
	float* ____position1_marshaled = NULL;
	if (___position1 != NULL)
	{
		____position1_marshaled = reinterpret_cast<float*>((___position1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_set_listener_position)(___ctx0, ____position1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____position1_marshaled);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetListenerPosition(System.IntPtr,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetListenerPosition_m3ECDB2AF6DAB0BFC30A7813C7D3A66720E8F19DA (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position1, const RuntimeMethod* method) 
{
	{
		// return SetListenerPositionImport(ctx, position);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___position1;
		int32_t L_2;
		L_2 = ApiUnityImpl_SetListenerPositionImport_m6B18AF0D7ADBFC63BC98212330420D3C7A16E23B(L_0, L_1, NULL);
		return L_2;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetListenerOrientationImport(System.IntPtr,System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetListenerOrientationImport_mDBBD4FC62C9FFAA74B71238FD4E3F60B13555D09 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_set_listener_orientation", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___front1' to native representation
	float* ____front1_marshaled = NULL;
	if (___front1 != NULL)
	{
		____front1_marshaled = reinterpret_cast<float*>((___front1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___up2' to native representation
	float* ____up2_marshaled = NULL;
	if (___up2 != NULL)
	{
		____up2_marshaled = reinterpret_cast<float*>((___up2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_set_listener_orientation)(___ctx0, ____front1_marshaled, ____up2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____front1_marshaled, ____up2_marshaled);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetListenerOrientation(System.IntPtr,System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetListenerOrientation_mA230D4F23741BCCE874A2778ABE83FF668E21B6F (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up2, const RuntimeMethod* method) 
{
	{
		// return SetListenerOrientationImport(ctx, front, up);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___front1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___up2;
		int32_t L_3;
		L_3 = ApiUnityImpl_SetListenerOrientationImport_mDBBD4FC62C9FFAA74B71238FD4E3F60B13555D09(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetListenerPoseImport(System.IntPtr,System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetListenerPoseImport_m943D9C833EA12E255AD028A118B609230543C372 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up3, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_set_listener_pose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___position1' to native representation
	float* ____position1_marshaled = NULL;
	if (___position1 != NULL)
	{
		____position1_marshaled = reinterpret_cast<float*>((___position1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___front2' to native representation
	float* ____front2_marshaled = NULL;
	if (___front2 != NULL)
	{
		____front2_marshaled = reinterpret_cast<float*>((___front2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___up3' to native representation
	float* ____up3_marshaled = NULL;
	if (___up3 != NULL)
	{
		____up3_marshaled = reinterpret_cast<float*>((___up3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_set_listener_pose)(___ctx0, ____position1_marshaled, ____front2_marshaled, ____up3_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____position1_marshaled, ____front2_marshaled, ____up3_marshaled);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetListenerPose(System.IntPtr,System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetListenerPose_m5AE9049A2DF35B147A32FFCAAFF7C2745866EB95 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up3, const RuntimeMethod* method) 
{
	{
		// return SetListenerPoseImport(ctx, position, front, up);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___position1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___front2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___up3;
		int32_t L_4;
		L_4 = ApiUnityImpl_SetListenerPoseImport_m943D9C833EA12E255AD028A118B609230543C372(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourcePositionImport(System.IntPtr,System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourcePositionImport_mAFD86F93AFE1239BC81C4FF7245EA308FCC2816A (intptr_t ___ctx0, int32_t ___sourceId1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_set_source_position", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___position2' to native representation
	float* ____position2_marshaled = NULL;
	if (___position2 != NULL)
	{
		____position2_marshaled = reinterpret_cast<float*>((___position2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_set_source_position)(___ctx0, ___sourceId1, ____position2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___sourceId1, ____position2_marshaled);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourcePosition(System.IntPtr,System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourcePosition_m1ACBD5609A945674EE1E8CE66BD459B6641287B4 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, int32_t ___sourceId1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position2, const RuntimeMethod* method) 
{
	{
		// return SetSourcePositionImport(ctx, sourceId, position);
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___sourceId1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___position2;
		int32_t L_3;
		L_3 = ApiUnityImpl_SetSourcePositionImport_mAFD86F93AFE1239BC81C4FF7245EA308FCC2816A(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourceGainImport(System.IntPtr,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourceGainImport_m802634905D425208478675628448657910EF2164 (intptr_t ___ctx0, int32_t ___sourceId1, float ___gain2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_set_source_gain", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_set_source_gain)(___ctx0, ___sourceId1, ___gain2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___sourceId1, ___gain2);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourceGain(System.IntPtr,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourceGain_m42C1F860CF3221520405BDED2B9EDEC029F1DC89 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, int32_t ___sourceId1, float ___gain2, const RuntimeMethod* method) 
{
	{
		// return SetSourceGainImport(ctx, sourceId, gain);
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___sourceId1;
		float L_2 = ___gain2;
		int32_t L_3;
		L_3 = ApiUnityImpl_SetSourceGainImport_m802634905D425208478675628448657910EF2164(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourceSizeImport(System.IntPtr,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourceSizeImport_mF9C9631C56D860A9BC5EA8175E90E433311DB54B (intptr_t ___ctx0, int32_t ___sourceId1, float ___volumetricSize2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_set_source_size", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_set_source_size)(___ctx0, ___sourceId1, ___volumetricSize2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___sourceId1, ___volumetricSize2);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::SetSourceSize(System.IntPtr,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_SetSourceSize_m7CBD0CB7DAE794580646DAFF2DCB16A3C08E0365 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, int32_t ___sourceId1, float ___volumetricSize2, const RuntimeMethod* method) 
{
	{
		// return SetSourceSizeImport(ctx, sourceId, volumetricSize);
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___sourceId1;
		float L_2 = ___volumetricSize2;
		int32_t L_3;
		L_3 = ApiUnityImpl_SetSourceSizeImport_mF9C9631C56D860A9BC5EA8175E90E433311DB54B(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::UpdateSourceModeImport(System.IntPtr,System.Int32,PXR_Audio.Spatializer.SourceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_UpdateSourceModeImport_mC783BD11DD74F571C03B9549B15CF620F69184F5 (intptr_t ___ctx0, int32_t ___sourceId1, int32_t ___mode2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_update_source_mode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_update_source_mode)(___ctx0, ___sourceId1, ___mode2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ___sourceId1, ___mode2);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::UpdateSourceMode(System.IntPtr,System.Int32,PXR_Audio.Spatializer.SourceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_UpdateSourceMode_m07374CF092566ACE49673347516C0ABBDBFF72B1 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, int32_t ___sourceId1, int32_t ___mode2, const RuntimeMethod* method) 
{
	{
		// return UpdateSourceModeImport(ctx, sourceId, mode);
		intptr_t L_0 = ___ctx0;
		int32_t L_1 = ___sourceId1;
		int32_t L_2 = ___mode2;
		int32_t L_3;
		L_3 = ApiUnityImpl_UpdateSourceModeImport_mC783BD11DD74F571C03B9549B15CF620F69184F5(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::DestroyImport(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_DestroyImport_m09D8466D84C7AA040F2BB36695B460A4E854817A (intptr_t ___ctx0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializer_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializer"), "yggdrasil_audio_destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializer_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_audio_destroy)(___ctx0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_Destroy_mACDC49397C29FE45B524BB0A6B92B9E0712D2AD1 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, intptr_t ___ctx0, const RuntimeMethod* method) 
{
	{
		// return DestroyImport(ctx);
		intptr_t L_0 = ___ctx0;
		int32_t L_1;
		L_1 = ApiUnityImpl_DestroyImport_m09D8466D84C7AA040F2BB36695B460A4E854817A(L_0, NULL);
		return L_1;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiUnityImpl::ResetContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiUnityImpl_ResetContext_m558795347F49413121B09FBD14F732168EDFD344 (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// System.Void PXR_Audio.Spatializer.ApiUnityImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUnityImpl__ctor_m4687F4B6771497056FE2271446D857204F49E77B (ApiUnityImpl_tAA2B873D46F3FC53F3AF6AB670A7E63D8F03BCF8* __this, const RuntimeMethod* method) 
{
	{
		Api__ctor_mE949CF5885EA222299D3D29088CE0AA7A5EA70F8(__this, NULL);
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
// System.String PXR_Audio.Spatializer.ApiWwiseImpl::GetVersionImport(System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiWwiseImpl_GetVersionImport_mE5835DE1B52C33FCC8EEE34E67243E608DF0093A (int32_t* ___major0, int32_t* ___minor1, int32_t* ___patch2, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t*) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializerWwise"), "yggdrasil_get_version", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(yggdrasil_get_version)(___major0, ___minor1, ___patch2);
	#else
	char* returnValue = il2cppPInvokeFunc(___major0, ___minor1, ___patch2);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String PXR_Audio.Spatializer.ApiWwiseImpl::GetVersion(System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApiWwiseImpl_GetVersion_m1B2DE35990CE8473D505E2387205FC459955439F (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, int32_t* ___major0, int32_t* ___minor1, int32_t* ___patch2, const RuntimeMethod* method) 
{
	{
		// return GetVersionImport(ref major, ref minor, ref patch);
		int32_t* L_0 = ___major0;
		int32_t* L_1 = ___minor1;
		int32_t* L_2 = ___patch2;
		String_t* L_3;
		L_3 = ApiWwiseImpl_GetVersionImport_mE5835DE1B52C33FCC8EEE34E67243E608DF0093A(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::CreateContext(System.IntPtr&,PXR_Audio.Spatializer.RenderingMode,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_CreateContext_m423136C6523C563E1C593CA52A09545BEE28753A (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t* ___ctx0, int32_t ___mode1, uint32_t ___framesPerBuffer2, uint32_t ___sampleRate3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::InitializeContext(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_InitializeContext_mE8826AFCCB7684EF43454218432C409AAC12F356 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SubmitMeshImport(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,PXR_Audio.Spatializer.AcousticsMaterial,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SubmitMeshImport_m1A80028FFBDB3DD3B8F0D3FBDBCF9D452C43E449 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices1, int32_t ___verticesCount2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices3, int32_t ___indicesCount4, int32_t ___material5, int32_t* ___geometryId6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int32_t*, int32_t, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializerWwise"), "CSharp_PicoSpatializerWwise_SubmitMesh", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___vertices1' to native representation
	float* ____vertices1_marshaled = NULL;
	if (___vertices1 != NULL)
	{
		____vertices1_marshaled = reinterpret_cast<float*>((___vertices1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___indices3' to native representation
	int32_t* ____indices3_marshaled = NULL;
	if (___indices3 != NULL)
	{
		____indices3_marshaled = reinterpret_cast<int32_t*>((___indices3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CSharp_PicoSpatializerWwise_SubmitMesh)(___ctx0, ____vertices1_marshaled, ___verticesCount2, ____indices3_marshaled, ___indicesCount4, ___material5, ___geometryId6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____vertices1_marshaled, ___verticesCount2, ____indices3_marshaled, ___indicesCount4, ___material5, ___geometryId6);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SubmitMesh(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,PXR_Audio.Spatializer.AcousticsMaterial,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SubmitMesh_mD476C9D27C87C1CC4C43882A3BA3F354DC8CF828 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices1, int32_t ___verticesCount2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices3, int32_t ___indicesCount4, int32_t ___material5, int32_t* ___geometryId6, const RuntimeMethod* method) 
{
	{
		// return SubmitMeshImport(ctx, vertices, verticesCount, indices, indicesCount, material, ref geometryId);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___vertices1;
		int32_t L_2 = ___verticesCount2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___indices3;
		int32_t L_4 = ___indicesCount4;
		int32_t L_5 = ___material5;
		int32_t* L_6 = ___geometryId6;
		int32_t L_7;
		L_7 = ApiWwiseImpl_SubmitMeshImport_m1A80028FFBDB3DD3B8F0D3FBDBCF9D452C43E449(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SubmitMeshAndMaterialFactorImport(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,System.Single[],System.Single,System.Single,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SubmitMeshAndMaterialFactorImport_m555919D2A802B67C73182DBE35C0681EB7151D23 (intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices1, int32_t ___verticesCount2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices3, int32_t ___indicesCount4, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor5, float ___scatteringFactor6, float ___transmissionFactor7, int32_t* ___geometryId8, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int32_t*, int32_t, float*, float, float, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(void*) + sizeof(float) + sizeof(float) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializerWwise"), "CSharp_PicoSpatializerWwise_SubmitMeshAndMaterialFactor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___vertices1' to native representation
	float* ____vertices1_marshaled = NULL;
	if (___vertices1 != NULL)
	{
		____vertices1_marshaled = reinterpret_cast<float*>((___vertices1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___indices3' to native representation
	int32_t* ____indices3_marshaled = NULL;
	if (___indices3 != NULL)
	{
		____indices3_marshaled = reinterpret_cast<int32_t*>((___indices3)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___absorptionFactor5' to native representation
	float* ____absorptionFactor5_marshaled = NULL;
	if (___absorptionFactor5 != NULL)
	{
		____absorptionFactor5_marshaled = reinterpret_cast<float*>((___absorptionFactor5)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CSharp_PicoSpatializerWwise_SubmitMeshAndMaterialFactor)(___ctx0, ____vertices1_marshaled, ___verticesCount2, ____indices3_marshaled, ___indicesCount4, ____absorptionFactor5_marshaled, ___scatteringFactor6, ___transmissionFactor7, ___geometryId8);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0, ____vertices1_marshaled, ___verticesCount2, ____indices3_marshaled, ___indicesCount4, ____absorptionFactor5_marshaled, ___scatteringFactor6, ___transmissionFactor7, ___geometryId8);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SubmitMeshAndMaterialFactor(System.IntPtr,System.Single[],System.Int32,System.Int32[],System.Int32,System.Single[],System.Single,System.Single,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SubmitMeshAndMaterialFactor_mA9F12F5387340D084430B23921B32C73631FAD5C (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices1, int32_t ___verticesCount2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices3, int32_t ___indicesCount4, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor5, float ___scatteringFactor6, float ___transmissionFactor7, int32_t* ___geometryId8, const RuntimeMethod* method) 
{
	{
		// return SubmitMeshAndMaterialFactorImport(ctx, vertices, verticesCount, indices, indicesCount,
		//     absorptionFactor, scatteringFactor, transmissionFactor, ref geometryId);
		intptr_t L_0 = ___ctx0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___vertices1;
		int32_t L_2 = ___verticesCount2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___indices3;
		int32_t L_4 = ___indicesCount4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___absorptionFactor5;
		float L_6 = ___scatteringFactor6;
		float L_7 = ___transmissionFactor7;
		int32_t* L_8 = ___geometryId8;
		int32_t L_9;
		L_9 = ApiWwiseImpl_SubmitMeshAndMaterialFactorImport_m555919D2A802B67C73182DBE35C0681EB7151D23(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::GetAbsorptionFactorImport(PXR_Audio.Spatializer.AcousticsMaterial,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_GetAbsorptionFactorImport_m4B8D9CE73E937454569CEC75799A05F1345F2257 (int32_t ___material0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializerWwise"), "CSharp_PicoSpatializerWwise_GetAbsorptionFactor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___absorptionFactor1' to native representation
	float* ____absorptionFactor1_marshaled = NULL;
	if (___absorptionFactor1 != NULL)
	{
		____absorptionFactor1_marshaled = reinterpret_cast<float*>((___absorptionFactor1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CSharp_PicoSpatializerWwise_GetAbsorptionFactor)(___material0, ____absorptionFactor1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___material0, ____absorptionFactor1_marshaled);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::GetAbsorptionFactor(PXR_Audio.Spatializer.AcousticsMaterial,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_GetAbsorptionFactor_m9CE8FBC06D4DF2733849339A6A82D72C94A4493A (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, int32_t ___material0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___absorptionFactor1, const RuntimeMethod* method) 
{
	{
		// return GetAbsorptionFactorImport(material, absorptionFactor);
		int32_t L_0 = ___material0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___absorptionFactor1;
		int32_t L_2;
		L_2 = ApiWwiseImpl_GetAbsorptionFactorImport_m4B8D9CE73E937454569CEC75799A05F1345F2257(L_0, L_1, NULL);
		return L_2;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::GetScatteringFactorImport(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_GetScatteringFactorImport_mC8AFF489150A9A17DF00EC3C8A0E53D6FD31D652 (int32_t ___material0, float* ___scatteringFactor1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializerWwise"), "CSharp_PicoSpatializerWwise_GetScatteringFactor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CSharp_PicoSpatializerWwise_GetScatteringFactor)(___material0, ___scatteringFactor1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___material0, ___scatteringFactor1);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::GetScatteringFactor(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_GetScatteringFactor_m447A06A668D1F43B98D33200812923928FD7AAA7 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, int32_t ___material0, float* ___scatteringFactor1, const RuntimeMethod* method) 
{
	{
		// return GetScatteringFactorImport(material, ref scatteringFactor);
		int32_t L_0 = ___material0;
		float* L_1 = ___scatteringFactor1;
		int32_t L_2;
		L_2 = ApiWwiseImpl_GetScatteringFactorImport_mC8AFF489150A9A17DF00EC3C8A0E53D6FD31D652(L_0, L_1, NULL);
		return L_2;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::GetTransmissionFactorImport(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_GetTransmissionFactorImport_m86B6C4306CE0FE9897F3C196C6B8AA87D2451FF0 (int32_t ___material0, float* ___transmissionFactor1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializerWwise"), "CSharp_PicoSpatializerWwise_GetTransmissionFactor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CSharp_PicoSpatializerWwise_GetTransmissionFactor)(___material0, ___transmissionFactor1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___material0, ___transmissionFactor1);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::GetTransmissionFactor(PXR_Audio.Spatializer.AcousticsMaterial,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_GetTransmissionFactor_mE5656E3E074B3265371209D0218B782106A2599D (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, int32_t ___material0, float* ___transmissionFactor1, const RuntimeMethod* method) 
{
	{
		// return GetTransmissionFactorImport(material, ref transmissionFactor);
		int32_t L_0 = ___material0;
		float* L_1 = ___transmissionFactor1;
		int32_t L_2;
		L_2 = ApiWwiseImpl_GetTransmissionFactorImport_m86B6C4306CE0FE9897F3C196C6B8AA87D2451FF0(L_0, L_1, NULL);
		return L_2;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::CommitSceneImport(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_CommitSceneImport_mC705DF549F87594A577BF150BC7182DC4C234E8A (intptr_t ___ctx0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializerWwise"), "CSharp_PicoSpatializerWwise_CommitScene", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CSharp_PicoSpatializerWwise_CommitScene)(___ctx0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::CommitScene(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_CommitScene_m225A21D9A92D562BDF8B339C0BB6F714B5459294 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, const RuntimeMethod* method) 
{
	{
		// return CommitSceneImport(ctx);
		intptr_t L_0 = ___ctx0;
		int32_t L_1;
		L_1 = ApiWwiseImpl_CommitSceneImport_mC705DF549F87594A577BF150BC7182DC4C234E8A(L_0, NULL);
		return L_1;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::AddSource(System.IntPtr,PXR_Audio.Spatializer.SourceMode,System.Single[],System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_AddSource_mBD2E905A7379D06A3C488ADBD37F347921F1EA82 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, int32_t ___sourceMode1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position2, int32_t* ___sourceId3, bool ___isAsync4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::AddSourceWithOrientation(System.IntPtr,PXR_Audio.Spatializer.SourceMode,System.Single[],System.Single[],System.Single[],System.Single,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_AddSourceWithOrientation_m366ED5F188C649F6C48491CD2BC0B584BD712538 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, int32_t ___mode1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front3, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up4, float ___radius5, int32_t* ___sourceId6, bool ___isAsync7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::AddSourceWithConfig(System.IntPtr,PXR_Audio.Spatializer.SourceConfig&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_AddSourceWithConfig_m2F095AECBB9FF5265AD304279B9FB18137DAE633 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9* ___sourceConfig1, int32_t* ___sourceId2, bool ___isAsync3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetSourceAttenuationMode(System.IntPtr,System.Int32,PXR_Audio.Spatializer.SourceAttenuationMode,PXR_Audio.Spatializer.DistanceAttenuationCallback,PXR_Audio.Spatializer.DistanceAttenuationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetSourceAttenuationMode_mCA33C5381855259A6D6B5A25B3C7B7410479CB1A (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, int32_t ___sourceId1, int32_t ___mode2, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* ___directDistanceAttenuationCallback3, DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* ___indirectDistanceAttenuationCallback4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetSourceRange(System.IntPtr,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetSourceRange_mE1629B948C3373BD689D17F945EDB9B7709DFAD6 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, int32_t ___sourceId1, float ___rangeMin2, float ___rangeMax3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::RemoveSource(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_RemoveSource_m33AD7159438256143D025991BA4891BD76824960 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, int32_t ___sourceId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SubmitSourceBuffer(System.IntPtr,System.Int32,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SubmitSourceBuffer_m7EA73F7C8083F4F762786D1AACC7AA38A5B77C6C (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, int32_t ___sourceId1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputBufferPtr2, uint32_t ___numFrames3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SubmitAmbisonicChannelBuffer(System.IntPtr,System.Single[],System.Int32,System.Int32,PXR_Audio.Spatializer.AmbisonicNormalizationType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SubmitAmbisonicChannelBuffer_mAA6D9FF9AB00EF7DB23D0598F44C3C62DED1F34E (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___ambisonicChannelBuffer1, int32_t ___order2, int32_t ___degree3, int32_t ___normType4, float ___gain5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SubmitInterleavedAmbisonicBuffer(System.IntPtr,System.Single[],System.Int32,PXR_Audio.Spatializer.AmbisonicNormalizationType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SubmitInterleavedAmbisonicBuffer_mB13BB62774DAE93E9BF63CD2FB90C6038DD28246 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___ambisonicBuffer1, int32_t ___ambisonicOrder2, int32_t ___normType3, float ___gain4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SubmitMatrixInputBuffer(System.IntPtr,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SubmitMatrixInputBuffer_m27814FAEB1E2FA816A8ABD86BAA1C86E41EA8CFE (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___inputBuffer1, int32_t ___inputChannelIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::GetInterleavedBinauralBuffer(System.IntPtr,System.Single[],System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_GetInterleavedBinauralBuffer_m3615B78AB3FA62146DBCC1932BB32108E414B219 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___outputBufferPtr1, uint32_t ___numFrames2, bool ___isAccumulative3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::GetPlanarBinauralBuffer(System.IntPtr,System.Single[][],System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_GetPlanarBinauralBuffer_m04CC42440D4F8A83225C4651B46E948DC1D085C5 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___outputBufferPtr1, uint32_t ___numFrames2, bool ___isAccumulative3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::GetInterleavedLoudspeakersBuffer(System.IntPtr,System.Single[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_GetInterleavedLoudspeakersBuffer_m8C9125521670E034A702309E720185C1685A2D45 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___outputBufferPtr1, uint32_t ___numFrames2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::GetPlanarLoudspeakersBuffer(System.IntPtr,System.Single[][],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_GetPlanarLoudspeakersBuffer_m24C89202F8F77EEAF05D8C0A463C22BAF0599A92 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5DU5BU5D_tB190BCEA7F01FD9CFF9FC1273681C9F0C75359E4* ___outputBufferPtr1, uint32_t ___numFrames2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::UpdateSceneImport(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_UpdateSceneImport_m062EBD1274154A8B19C083101732080C3EEAC305 (intptr_t ___ctx0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializerWwise"), "CSharp_PicoSpatializerWwise_UpdateScene", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CSharp_PicoSpatializerWwise_UpdateScene)(___ctx0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ctx0);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::UpdateScene(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_UpdateScene_m0EAD3CE6C9A1DCB29D839333AA7B40FE14A7BDA2 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, const RuntimeMethod* method) 
{
	{
		// return UpdateSceneImport(ctx);
		intptr_t L_0 = ___ctx0;
		int32_t L_1;
		L_1 = ApiWwiseImpl_UpdateSceneImport_m062EBD1274154A8B19C083101732080C3EEAC305(L_0, NULL);
		return L_1;
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetDopplerEffect(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetDopplerEffect_m092A72CCF175DACE07DB0A3F010A2B4D40ED0E50 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, int32_t ___sourceId1, bool ___on2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetPlaybackMode(System.IntPtr,PXR_Audio.Spatializer.PlaybackMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetPlaybackMode_m45E13CF26B704D965D35A88E23E227AD84994CF6 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, int32_t ___playbackMode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetLoudspeakerArray(System.IntPtr,System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetLoudspeakerArray_mD655C8BE3D6F02D41F8D86ECA02FB19CC4441116 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___positions1, int32_t ___numLoudspeakers2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetMappingMatrix(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetMappingMatrix_m6020B62E2F862FF9B5159450E4AE1613ED472E31 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___matrix1, int32_t ___numInputChannels2, int32_t ___numOutputChannels3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetListenerPosition(System.IntPtr,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetListenerPosition_m3E66F0E66BEBB9797C53D5BECFBC88E10823EB94 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetListenerOrientation(System.IntPtr,System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetListenerOrientation_m87B62FDBDB9F9BE4CA484B79C1CFF34B191469C4 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetListenerPoseImport(System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetListenerPoseImport_m0C0E060E94F5537E09123CBA303CF3FA6A78FED8 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float*, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializerWwise"), "CSharp_PicoSpatializerWwise_SetListenerTransform", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___position0' to native representation
	float* ____position0_marshaled = NULL;
	if (___position0 != NULL)
	{
		____position0_marshaled = reinterpret_cast<float*>((___position0)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___front1' to native representation
	float* ____front1_marshaled = NULL;
	if (___front1 != NULL)
	{
		____front1_marshaled = reinterpret_cast<float*>((___front1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___up2' to native representation
	float* ____up2_marshaled = NULL;
	if (___up2 != NULL)
	{
		____up2_marshaled = reinterpret_cast<float*>((___up2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CSharp_PicoSpatializerWwise_SetListenerTransform)(____position0_marshaled, ____front1_marshaled, ____up2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____position0_marshaled, ____front1_marshaled, ____up2_marshaled);
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetListenerPose(System.IntPtr,System.Single[],System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetListenerPose_m2B3E3BD8253970E622CF4EF50B1F21453C7E2EE1 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___front2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___up3, const RuntimeMethod* method) 
{
	{
		// position[2] = -position[2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___position1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___position1;
		NullCheck(L_1);
		int32_t L_2 = 2;
		float L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((-L_3)));
		// front[2] = -front[2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___front2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___front2;
		NullCheck(L_5);
		int32_t L_6 = 2;
		float L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((-L_7)));
		// up[2] = -up[2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ___up3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___up3;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((-L_11)));
		// SetListenerPoseImport(position, front, up);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___position1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = ___front2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = ___up3;
		int32_t L_15;
		L_15 = ApiWwiseImpl_SetListenerPoseImport_m0C0E060E94F5537E09123CBA303CF3FA6A78FED8(L_12, L_13, L_14, NULL);
		// return Result.Success;
		return (int32_t)(0);
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetSourcePosition(System.IntPtr,System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetSourcePosition_m7A30DBD7023C9D71CEA641D0CB8B1D2B767BBB06 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, int32_t ___sourceId1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___position2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetSourceGain(System.IntPtr,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetSourceGain_mFC1B480372455BAFD9216D130046AC0A4D17544C (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, int32_t ___sourceId1, float ___gain2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::SetSourceSize(System.IntPtr,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_SetSourceSize_mF6C56B388E902B00B58A6F7AC134103E170C7D92 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, int32_t ___sourceId1, float ___volumetricSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::UpdateSourceMode(System.IntPtr,System.Int32,PXR_Audio.Spatializer.SourceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_UpdateSourceMode_m7BE92771C95F6F5B1D7D52F8B73CB287C1C5C801 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, int32_t ___sourceId1, int32_t ___mode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_Destroy_mCDDEE786E881A97AA58B800B7BDC1238EB186C7F (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, intptr_t ___ctx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Unexpected API calling.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral765EC18FDFD21B02058F3E3BD8682BFBF1ED8195, NULL);
		// return Result.Error;
		return (int32_t)((-1));
	}
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::ResetContextImported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_ResetContextImported_m93C35292CA8E4CFC5077BC136CC849E62680AAED (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PicoSpatializerWwise"), "CSharp_PicoSpatializerWwise_ResetContext", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_PicoSpatializerWwise_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CSharp_PicoSpatializerWwise_ResetContext)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// PXR_Audio.Spatializer.Result PXR_Audio.Spatializer.ApiWwiseImpl::ResetContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApiWwiseImpl_ResetContext_m8778EF667881CE1A520C11CEA8FE31E6B5879C7A (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, const RuntimeMethod* method) 
{
	{
		// return ResetContextImported();
		int32_t L_0;
		L_0 = ApiWwiseImpl_ResetContextImported_m93C35292CA8E4CFC5077BC136CC849E62680AAED(NULL);
		return L_0;
	}
}
// System.Void PXR_Audio.Spatializer.ApiWwiseImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiWwiseImpl__ctor_m85C99C89CFF41EFB859C8B8B47A8549E27805BE7 (ApiWwiseImpl_t0A408632CA40CE5BC2A494B341F79F69AC95EA9B* __this, const RuntimeMethod* method) 
{
	{
		Api__ctor_mE949CF5885EA222299D3D29088CE0AA7A5EA70F8(__this, NULL);
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
float DistanceAttenuationCallback_Invoke_mCF8EE5009BCF7DAC077F18FBEC50B2BE7F635A98_Multicast(DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* __this, float ___distance0, float ___rangeMin1, float ___rangeMax2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* currentDelegate = reinterpret_cast<DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, float, float, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___distance0, ___rangeMin1, ___rangeMax2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float DistanceAttenuationCallback_Invoke_mCF8EE5009BCF7DAC077F18FBEC50B2BE7F635A98_OpenInst(DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* __this, float ___distance0, float ___rangeMin1, float ___rangeMax2, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___distance0, ___rangeMin1, ___rangeMax2, method);
}
float DistanceAttenuationCallback_Invoke_mCF8EE5009BCF7DAC077F18FBEC50B2BE7F635A98_OpenStatic(DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* __this, float ___distance0, float ___rangeMin1, float ___rangeMax2, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___distance0, ___rangeMin1, ___rangeMax2, method);
}
float DistanceAttenuationCallback_Invoke_mCF8EE5009BCF7DAC077F18FBEC50B2BE7F635A98_OpenStaticInvoker(DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* __this, float ___distance0, float ___rangeMin1, float ___rangeMax2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< float, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___distance0, ___rangeMin1, ___rangeMax2);
}
float DistanceAttenuationCallback_Invoke_mCF8EE5009BCF7DAC077F18FBEC50B2BE7F635A98_ClosedStaticInvoker(DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* __this, float ___distance0, float ___rangeMin1, float ___rangeMax2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< float, RuntimeObject*, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___distance0, ___rangeMin1, ___rangeMax2);
}
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D (DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* __this, float ___distance0, float ___rangeMin1, float ___rangeMax2, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___distance0, ___rangeMin1, ___rangeMax2);

	return returnValue;
}
// System.Void PXR_Audio.Spatializer.DistanceAttenuationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistanceAttenuationCallback__ctor_mD616EC74561CF14CA3D8C4E5AB8BE5E27F9C2CC2 (DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DistanceAttenuationCallback_Invoke_mCF8EE5009BCF7DAC077F18FBEC50B2BE7F635A98_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DistanceAttenuationCallback_Invoke_mCF8EE5009BCF7DAC077F18FBEC50B2BE7F635A98_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DistanceAttenuationCallback_Invoke_mCF8EE5009BCF7DAC077F18FBEC50B2BE7F635A98_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DistanceAttenuationCallback_Invoke_mCF8EE5009BCF7DAC077F18FBEC50B2BE7F635A98_Multicast;
}
// System.Single PXR_Audio.Spatializer.DistanceAttenuationCallback::Invoke(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DistanceAttenuationCallback_Invoke_mCF8EE5009BCF7DAC077F18FBEC50B2BE7F635A98 (DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* __this, float ___distance0, float ___rangeMin1, float ___rangeMax2, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___distance0, ___rangeMin1, ___rangeMax2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PXR_Audio.Spatializer.DistanceAttenuationCallback::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DistanceAttenuationCallback_BeginInvoke_mCBD243F108D70B40D206FB339E2DF3892351FCD5 (DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* __this, float ___distance0, float ___rangeMin1, float ___rangeMax2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___distance0);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___rangeMin1);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___rangeMax2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Single PXR_Audio.Spatializer.DistanceAttenuationCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DistanceAttenuationCallback_EndInvoke_m96739E512F6B0CE34522A8089BAA64BBC2477BC7 (DistanceAttenuationCallback_tA7DE9D08561930839D7732BB68DC281270FD0D8D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
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
// System.Void PXR_Audio.Spatializer.SourceConfig::.ctor(PXR_Audio.Spatializer.SourceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceConfig__ctor_m6880CB0BEBB9D0CF3792D06D39D72E4FEC599887 (SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9* __this, int32_t ___inMode0, const RuntimeMethod* method) 
{
	{
		// mode = inMode;
		int32_t L_0 = ___inMode0;
		__this->___mode_0 = L_0;
		// position.x = 0.0f;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_1 = (&__this->___position_1);
		L_1->___x_0 = (0.0f);
		// position.y = 0.0f;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_2 = (&__this->___position_1);
		L_2->___y_1 = (0.0f);
		// position.z = 0.0f;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_3 = (&__this->___position_1);
		L_3->___z_2 = (0.0f);
		// front.x = 0.0f;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_4 = (&__this->___front_2);
		L_4->___x_0 = (0.0f);
		// front.y = 0.0f;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_5 = (&__this->___front_2);
		L_5->___y_1 = (0.0f);
		// front.z = -1.0f;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_6 = (&__this->___front_2);
		L_6->___z_2 = (-1.0f);
		// up.x = 0.0f;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_7 = (&__this->___up_3);
		L_7->___x_0 = (0.0f);
		// up.y = 1.0f;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_8 = (&__this->___up_3);
		L_8->___y_1 = (1.0f);
		// up.z = 0.0f;
		NativeVector3f_tFD0F1CF60EFCBC7E75D3C0C5B730F8A02CFBA52F* L_9 = (&__this->___up_3);
		L_9->___z_2 = (0.0f);
		// radius = 0.1f;
		__this->___radius_4 = (0.100000001f);
		// directivityAlpha = 0.0f;
		__this->___directivityAlpha_5 = (0.0f);
		// directivityOrder = 1.0f;
		__this->___directivityOrder_6 = (1.0f);
		// useDirectPathSpread = false;
		__this->___useDirectPathSpread_7 = (bool)0;
		// directPathSpread = 0.0f;
		__this->___directPathSpread_8 = (0.0f);
		// sourceGain = 1.0f;
		__this->___sourceGain_9 = (1.0f);
		// reflectionGain = 1.0f;
		__this->___reflectionGain_10 = (1.0f);
		// enableDoppler = false;
		__this->___enableDoppler_11 = (bool)0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SourceConfig__ctor_m6880CB0BEBB9D0CF3792D06D39D72E4FEC599887_AdjustorThunk (RuntimeObject* __this, int32_t ___inMode0, const RuntimeMethod* method)
{
	SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SourceConfig_t0FE6BA4C78D6D706E491C8D8C4EBB00C7F79C2B9*>(__this + _offset);
	SourceConfig__ctor_m6880CB0BEBB9D0CF3792D06D39D72E4FEC599887(_thisAdjusted, ___inMode0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* PXR_Audio_Spatializer_Context_get_Instance_m2C5DEDC032B552279DF0796E599F3ADEC18493B0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PXR_Audio_Spatializer_Context Instance => _instance;
		PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* L_0 = ((PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_StaticFields*)il2cpp_codegen_static_fields_for(PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F_il2cpp_TypeInfo_var))->____instance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PXR_Audio_Spatializer_Context_get_Initialized_m2BB4B8AF8AF269F7F792B4DF614D45A666228174_inline (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) 
{
	{
		// get => initialized;
		bool L_0 = __this->___initialized_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PXR_Audio_Spatializer_Context_get_UUID_mF1F08338481FCAB772AC1490572CB58E6FC44668_inline (PXR_Audio_Spatializer_Context_t53D44235FD78649BC7348CCC1EB94BAFA721257F* __this, const RuntimeMethod* method) 
{
	{
		// public int UUID => uuid;
		int32_t L_0 = __this->___uuid_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PXR_Audio_Spatializer_AudioListener_get_IsAudioDSPInProgress_mE55F8F9AF1AC6C17DC2E6256C4A72F8E75F42BBB_inline (PXR_Audio_Spatializer_AudioListener_tB8BC537F83671897EB33F0365DDE29F5D0581EDF* __this, const RuntimeMethod* method) 
{
	{
		// return isAudioDSPInProgress;
		bool L_0 = __this->___isAudioDSPInProgress_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PXR_Audio_Spatializer_AudioSource_get_IsAudioDSPInProgress_m7D65A7961AD22BCD14306D8E531DE3274631B4E3_inline (PXR_Audio_Spatializer_AudioSource_t6C502AC3BBD81DF4AB834C4162A05F7851DEA86F* __this, const RuntimeMethod* method) 
{
	{
		// get { return isAudioDSPInProgress; }
		bool L_0 = __this->___isAudioDSPInProgress_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
