#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.UI.IUIInteractor,UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster>
struct Dictionary_2_t2323318B731FF9544F068484433616DAB723D8CA;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster/RaycastHitData>
struct List_1_t91BC45BAAA80A09253B338C6334A8106CD4B8A3F;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// EnableXRLine
struct EnableXRLine_tF44E8AD6475DCB83145F12DF880C3F27C405F06B;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// Hand
struct Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0;
// HandController
struct HandController_t4A324EFF760CA0BDED5A2B6DCB3F88B613CF9A37;
// UnityEngine.XR.Interaction.Toolkit.ILineRenderable
struct ILineRenderable_t31B0CD4F7660B33DA1844249EF11B0F653E36ADA;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// System.String
struct String_t;
// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster
struct TrackedDeviceGraphicRaycaster_t10211666BB4A468E839EEFBDFEC7D5AAB4555149;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableSnapVolume
struct XRInteractableSnapVolume_tD614E0736458EA1101162BA07F94960E19F18E25;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual
struct XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic
struct XRPokeLogic_tFF15963730D3A0A66FA658DD48177B2CD5A2F26D;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76;
// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster/RaycastHitComparer
struct RaycastHitComparer_tEB1BB66D92D6C7722C052F9F77D771620A40FA8F;

IL2CPP_EXTERN_C RuntimeClass* List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral26CA1D5E2F6785F2DC7432A0B6AD44F0E0349443;
IL2CPP_EXTERN_C String_t* _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrackedDeviceGraphicRaycaster_t10211666BB4A468E839EEFBDFEC7D5AAB4555149_mCAB7F87C096417A8E259EE833FCED89F960B7E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m5D8A8F360840FDED02943C3A2AB04222BF59E160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t66B2E8DCEAD0077C5253CEE3798CEE3D39D558AD 
{
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.PhysicsScene
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.PhysicsScene2D
struct PhysicsScene2D_t550D023B9E77BE6844564BB4F9FA291EEA10FDC9 
{
	// System.Int32 UnityEngine.PhysicsScene2D::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
struct Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ____current_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// EnableXRLine
struct EnableXRLine_tF44E8AD6475DCB83145F12DF880C3F27C405F06B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual EnableXRLine::xrLine
	XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* ___xrLine_4;
	// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster EnableXRLine::xrRay
	TrackedDeviceGraphicRaycaster_t10211666BB4A468E839EEFBDFEC7D5AAB4555149* ___xrRay_5;
	// System.Single EnableXRLine::maxLineLength
	float ___maxLineLength_6;
	// System.String[] EnableXRLine::enableLineTags
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___enableLineTags_7;
	// System.Boolean EnableXRLine::testLineLength
	bool ___testLineLength_8;
	// UnityEngine.EventSystems.PointerEventData EnableXRLine::m_PointerEventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_PointerEventData_9;
	// UnityEngine.EventSystems.EventSystem EnableXRLine::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_10;
};

// Hand
struct Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Hand::speed
	float ___speed_4;
	// UnityEngine.Animator Hand::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
	// System.Single Hand::gripTarget
	float ___gripTarget_6;
	// System.Single Hand::triggerTarget
	float ___triggerTarget_7;
	// System.Single Hand::gripCurrent
	float ___gripCurrent_8;
	// System.Single Hand::triggerCurrent
	float ___triggerCurrent_9;
	// System.String Hand::animatorGripParam
	String_t* ___animatorGripParam_10;
	// System.String Hand::animatorTriggerParam
	String_t* ___animatorTriggerParam_11;
};

// HandController
struct HandController_t4A324EFF760CA0BDED5A2B6DCB3F88B613CF9A37  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController HandController::controller
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___controller_4;
	// Hand HandController::hand
	Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* ___hand_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_18;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_23;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual
struct XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineWidth
	float ___m_LineWidth_6;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_OverrideInteractorLineLength
	bool ___m_OverrideInteractorLineLength_7;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineLength
	float ___m_LineLength_8;
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_WidthCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_WidthCurve_9;
	// UnityEngine.Gradient UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ValidColorGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_ValidColorGradient_10;
	// UnityEngine.Gradient UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_InvalidColorGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_InvalidColorGradient_11;
	// UnityEngine.Gradient UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_BlockedColorGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_BlockedColorGradient_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_TreatSelectionAsValidState
	bool ___m_TreatSelectionAsValidState_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_SmoothMovement
	bool ___m_SmoothMovement_14;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_FollowTightness
	float ___m_FollowTightness_15;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_SnapThresholdDistance
	float ___m_SnapThresholdDistance_16;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_Reticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Reticle_17;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_BlockedReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_BlockedReticle_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_StopLineAtFirstRaycastHit
	bool ___m_StopLineAtFirstRaycastHit_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_StopLineAtSelection
	bool ___m_StopLineAtSelection_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_SnapEndpointIfAvailable
	bool ___m_SnapEndpointIfAvailable_21;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ReticlePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ReticlePos_22;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ReticleNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ReticleNormal_23;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_EndPositionInLine
	int32_t ___m_EndPositionInLine_24;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_SnapCurve
	bool ___m_SnapCurve_25;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_PerformSetup
	bool ___m_PerformSetup_26;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ReticleToUse
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ReticleToUse_27;
	// UnityEngine.LineRenderer UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___m_LineRenderer_28;
	// UnityEngine.XR.Interaction.Toolkit.ILineRenderable UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderable
	RuntimeObject* ___m_LineRenderable_29;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderableAsSelectInteractor
	RuntimeObject* ___m_LineRenderableAsSelectInteractor_30;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderableAsBaseInteractor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___m_LineRenderableAsBaseInteractor_31;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderableAsRayInteractor
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___m_LineRenderableAsRayInteractor_32;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_TargetPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_TargetPoints_33;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_NoTargetPoints
	int32_t ___m_NoTargetPoints_34;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_RenderPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RenderPoints_35;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_NoRenderPoints
	int32_t ___m_NoRenderPoints_36;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_PreviousRenderPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_PreviousRenderPoints_37;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_NoPreviousRenderPoints
	int32_t ___m_NoPreviousRenderPoints_38;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ClearArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ClearArray_39;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_40;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_CustomReticleAttached
	bool ___m_CustomReticleAttached_41;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_Snapping
	bool ___m_Snapping_42;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableSnapVolume UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_XRInteractableSnapVolume
	XRInteractableSnapVolume_tD614E0736458EA1101162BA07F94960E19F18E25* ___m_XRInteractableSnapVolume_43;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_NumberOfSegmentsForBendableLine
	int32_t ___m_NumberOfSegmentsForBendableLine_44;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderablePoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_LineRenderablePoints_45;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_CurrentHitPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CurrentHitPoint_46;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_HasHitInfo
	bool ___m_HasHitInfo_47;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ValidHit
	bool ___m_ValidHit_48;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_CurrentRenderEndpoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CurrentRenderEndpoint_49;
	// UnityEngine.Collider UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_PreviousCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_PreviousCollider_50;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_XROrigin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___m_XROrigin_51;
};

// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68  : public XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C
{
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_PositionAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_PositionAction_24;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotationAction_25;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TrackingStateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TrackingStateAction_26;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectAction_27;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectActionValue_28;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateAction_29;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateActionValue_30;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressAction_31;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressActionValue_32;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HapticDeviceAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_HapticDeviceAction_33;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotateAnchorAction_34;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_DirectionalAnchorRotationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_DirectionalAnchorRotationAction_35;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TranslateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TranslateAnchorAction_36;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledTrackingInputReferenceActions
	bool ___m_HasCheckedDisabledTrackingInputReferenceActions_37;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledInputReferenceActions
	bool ___m_HasCheckedDisabledInputReferenceActions_38;
	// System.Single UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ButtonPressPoint
	float ___m_ButtonPressPoint_39;
};

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___m_RootRaycaster_4;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster
struct TrackedDeviceGraphicRaycaster_t10211666BB4A468E839EEFBDFEC7D5AAB4555149  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_6;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::m_CheckFor2DOcclusion
	bool ___m_CheckFor2DOcclusion_7;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::m_CheckFor3DOcclusion
	bool ___m_CheckFor3DOcclusion_8;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::m_BlockingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_BlockingMask_9;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::m_RaycastTriggerInteraction
	int32_t ___m_RaycastTriggerInteraction_10;
	// UnityEngine.Canvas UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::m_HasWarnedEventCameraNull
	bool ___m_HasWarnedEventCameraNull_12;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::m_OcclusionHits3D
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_OcclusionHits3D_13;
	// UnityEngine.RaycastHit2D[] UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::m_OcclusionHits2D
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___m_OcclusionHits2D_14;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster/RaycastHitData> UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::m_RaycastResultsCache
	List_1_t91BC45BAAA80A09253B338C6334A8106CD4B8A3F* ___m_RaycastResultsCache_17;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::m_PokeLogic
	XRPokeLogic_tFF15963730D3A0A66FA658DD48177B2CD5A2F26D* ___m_PokeLogic_19;
	// UnityEngine.PhysicsScene UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::m_LocalPhysicsScene
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___m_LocalPhysicsScene_21;
	// UnityEngine.PhysicsScene2D UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::m_LocalPhysicsScene2D
	PhysicsScene2D_t550D023B9E77BE6844564BB4F9FA291EEA10FDC9 ___m_LocalPhysicsScene2D_22;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.InputSystem.InputActionProperty

// UnityEngine.InputSystem.InputActionProperty

// System.Int32

// System.Int32

// System.Single

// System.Single

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// EnableXRLine

// EnableXRLine

// Hand

// Hand

// HandController

// HandController

// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual
struct XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_StaticFields
{
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::s_XROriginCache
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___s_XROriginCache_52;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual

// UnityEngine.XR.Interaction.Toolkit.ActionBasedController

// UnityEngine.XR.Interaction.Toolkit.ActionBasedController

// UnityEngine.EventSystems.BaseRaycaster

// UnityEngine.EventSystems.BaseRaycaster

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster
struct TrackedDeviceGraphicRaycaster_t10211666BB4A468E839EEFBDFEC7D5AAB4555149_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster/RaycastHitComparer UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::s_RaycastHitComparer
	RaycastHitComparer_tEB1BB66D92D6C7722C052F9F77D771620A40FA8F* ___s_RaycastHitComparer_15;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::s_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Corners_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster/RaycastHitData> UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::s_SortedGraphics
	List_1_t91BC45BAAA80A09253B338C6334A8106CD4B8A3F* ___s_SortedGraphics_18;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.UI.IUIInteractor,UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster> UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster::s_InteractorRaycasters
	Dictionary_2_t2323318B731FF9544F068484433616DAB723D8CA* ___s_InteractorRaycasters_20;
};

// UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C_gshared (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_gshared_inline (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C_gshared (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual>()
inline XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* Component_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m5D8A8F360840FDED02943C3A2AB04222BF59E160 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster>()
inline TrackedDeviceGraphicRaycaster_t10211666BB4A468E839EEFBDFEC7D5AAB4555149* Component_GetComponent_TisTrackedDeviceGraphicRaycaster_t10211666BB4A468E839EEFBDFEC7D5AAB4555149_mCAB7F87C096417A8E259EE833FCED89F960B7E55 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TrackedDeviceGraphicRaycaster_t10211666BB4A468E839EEFBDFEC7D5AAB4555149* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::set_lineLength(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRInteractorLineVisual_set_lineLength_mE0287680765071A6C6CACF55CC00C788F15227A4_inline (XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___0_eventSystem, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
inline Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41 (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::Dispose()
inline void Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C*, const RuntimeMethod*))Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_inline (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method)
{
	return ((  RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 (*) (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C*, const RuntimeMethod*))Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
inline bool Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C*, const RuntimeMethod*))Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Hand::AnimateHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_AnimateHand_m679AF03BE4321A6006519ECC8A6B5EBBDE844976 (Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.ActionBasedController>()
inline ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::get_selectAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
// System.Void Hand::SetGrip(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hand_SetGrip_mC90D392D2A09BE016357ECC8DFEB572F6D4DF143_inline (Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* __this, float ___0_v, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::get_activateAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) ;
// System.Void Hand::SetTrigger(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hand_SetTrigger_m45C2269B67F94962EA789F20929D951CC09BBE1D_inline (Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* __this, float ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
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
// System.Void EnableXRLine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableXRLine_Start_m9309EFF4FF67EA5D9953552799C4E64D0FF1A294 (EnableXRLine_tF44E8AD6475DCB83145F12DF880C3F27C405F06B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTrackedDeviceGraphicRaycaster_t10211666BB4A468E839EEFBDFEC7D5AAB4555149_mCAB7F87C096417A8E259EE833FCED89F960B7E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m5D8A8F360840FDED02943C3A2AB04222BF59E160_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// xrLine = GetComponent<XRInteractorLineVisual>();
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_0;
		L_0 = Component_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m5D8A8F360840FDED02943C3A2AB04222BF59E160(__this, Component_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m5D8A8F360840FDED02943C3A2AB04222BF59E160_RuntimeMethod_var);
		__this->___xrLine_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrLine_4), (void*)L_0);
		// xrRay = GetComponent<TrackedDeviceGraphicRaycaster>();
		TrackedDeviceGraphicRaycaster_t10211666BB4A468E839EEFBDFEC7D5AAB4555149* L_1;
		L_1 = Component_GetComponent_TisTrackedDeviceGraphicRaycaster_t10211666BB4A468E839EEFBDFEC7D5AAB4555149_mCAB7F87C096417A8E259EE833FCED89F960B7E55(__this, Component_GetComponent_TisTrackedDeviceGraphicRaycaster_t10211666BB4A468E839EEFBDFEC7D5AAB4555149_mCAB7F87C096417A8E259EE833FCED89F960B7E55_RuntimeMethod_var);
		__this->___xrRay_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrRay_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void EnableXRLine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableXRLine_Update_m13A287FB2AA56AA07672CF327CB635877DCAB5B7 (EnableXRLine_tF44E8AD6475DCB83145F12DF880C3F27C405F06B* __this, const RuntimeMethod* method) 
{
	{
		// if (testLineLength)
		bool L_0 = __this->___testLineLength_8;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// xrLine.lineLength = maxLineLength;
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_1 = __this->___xrLine_4;
		float L_2 = __this->___maxLineLength_6;
		NullCheck(L_1);
		XRInteractorLineVisual_set_lineLength_mE0287680765071A6C6CACF55CC00C788F15227A4_inline(L_1, L_2, NULL);
		return;
	}

IL_001a:
	{
		// xrLine.lineLength = 0.0f;
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_3 = __this->___xrLine_4;
		NullCheck(L_3);
		XRInteractorLineVisual_set_lineLength_mE0287680765071A6C6CACF55CC00C788F15227A4_inline(L_3, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void EnableXRLine::EnableLine(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableXRLine_EnableLine_mB3DFEE0CBC825312C8EACA1E5AE4A786B7A43BA5 (EnableXRLine_tF44E8AD6475DCB83145F12DF880C3F27C405F06B* __this, bool ___0_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* V_1 = NULL;
	Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_3;
	memset((&V_3), 0, sizeof(V_3));
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	{
		// if (enable)
		bool L_0 = ___0_enable;
		if (!L_0)
		{
			goto IL_00b9;
		}
	}
	{
		// bool res = false;
		V_0 = (bool)0;
		// m_PointerEventData = new PointerEventData(m_EventSystem);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1 = __this->___m_EventSystem_10;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_2, L_1, NULL);
		__this->___m_PointerEventData_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PointerEventData_9), (void*)L_2);
		// m_PointerEventData.position = Input.mousePosition;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = __this->___m_PointerEventData_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_4, NULL);
		NullCheck(L_3);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_3, L_5, NULL);
		// List<RaycastResult> results = new List<RaycastResult>();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_6 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)il2cpp_codegen_object_new(List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B(L_6, List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		V_1 = L_6;
		// xrRay.Raycast(m_PointerEventData, results);
		TrackedDeviceGraphicRaycaster_t10211666BB4A468E839EEFBDFEC7D5AAB4555149* L_7 = __this->___xrRay_5;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = __this->___m_PointerEventData_9;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_9 = V_1;
		NullCheck(L_7);
		VirtualActionInvoker2< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*, List_1_t8292C421BBB00D7661DC07462822936152BAB446* >::Invoke(17 /* System.Void UnityEngine.EventSystems.BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>) */, L_7, L_8, L_9);
		// foreach (RaycastResult _res in results)
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_10 = V_1;
		NullCheck(L_10);
		Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C L_11;
		L_11 = List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41(L_10, List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41_RuntimeMethod_var);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0096:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C((&V_2), Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008b_1;
			}

IL_004f_1:
			{
				// foreach (RaycastResult _res in results)
				RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_12;
				L_12 = Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_inline((&V_2), Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_RuntimeMethod_var);
				V_3 = L_12;
				// foreach (string i in enableLineTags)
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = __this->___enableLineTags_7;
				V_4 = L_13;
				V_5 = 0;
				goto IL_0083_1;
			}

IL_0064_1:
			{
				// foreach (string i in enableLineTags)
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_4;
				int32_t L_15 = V_5;
				NullCheck(L_14);
				int32_t L_16 = L_15;
				String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
				V_6 = L_17;
				// if (_res.gameObject.CompareTag(i))
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
				L_18 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline((&V_3), NULL);
				String_t* L_19 = V_6;
				NullCheck(L_18);
				bool L_20;
				L_20 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_18, L_19, NULL);
				if (!L_20)
				{
					goto IL_007d_1;
				}
			}
			{
				// res = true;
				V_0 = (bool)1;
			}

IL_007d_1:
			{
				int32_t L_21 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
			}

IL_0083_1:
			{
				// foreach (string i in enableLineTags)
				int32_t L_22 = V_5;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_4;
				NullCheck(L_23);
				if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
				{
					goto IL_0064_1;
				}
			}

IL_008b_1:
			{
				// foreach (RaycastResult _res in results)
				bool L_24;
				L_24 = Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C((&V_2), Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_004f_1;
				}
			}
			{
				goto IL_00a4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a4:
	{
		// if (res)
		bool L_25 = V_0;
		if (!L_25)
		{
			goto IL_00c9;
		}
	}
	{
		// xrLine.lineLength = maxLineLength;
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_26 = __this->___xrLine_4;
		float L_27 = __this->___maxLineLength_6;
		NullCheck(L_26);
		XRInteractorLineVisual_set_lineLength_mE0287680765071A6C6CACF55CC00C788F15227A4_inline(L_26, L_27, NULL);
		return;
	}

IL_00b9:
	{
		// xrLine.lineLength = 0.0f;
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_28 = __this->___xrLine_4;
		NullCheck(L_28);
		XRInteractorLineVisual_set_lineLength_mE0287680765071A6C6CACF55CC00C788F15227A4_inline(L_28, (0.0f), NULL);
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void EnableXRLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableXRLine__ctor_m108C276F6BA56B73AF3FECCFF9A9D5A0162612FA (EnableXRLine_tF44E8AD6475DCB83145F12DF880C3F27C405F06B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26CA1D5E2F6785F2DC7432A0B6AD44F0E0349443);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField, Range(0.0f, 20.0f)] float maxLineLength = 10.0f;
		__this->___maxLineLength_6 = (10.0f);
		// [SerializeField] string[] enableLineTags = { "debug" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral26CA1D5E2F6785F2DC7432A0B6AD44F0E0349443);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral26CA1D5E2F6785F2DC7432A0B6AD44F0E0349443);
		__this->___enableLineTags_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enableLineTags_7), (void*)L_1);
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
// System.Void Hand::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_Start_mB3C41AB95EDAB96F10DFEED11E80C7B257BCA350 (Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_5), (void*)L_0);
		// gripTarget = 0;
		__this->___gripTarget_6 = (0.0f);
		// triggerTarget = 0;
		__this->___triggerTarget_7 = (0.0f);
		// }
		return;
	}
}
// System.Void Hand::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_Update_mCBEB5F59E6AAB11BD618EF947CFBD1B51B02708E (Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* __this, const RuntimeMethod* method) 
{
	{
		// AnimateHand();
		Hand_AnimateHand_m679AF03BE4321A6006519ECC8A6B5EBBDE844976(__this, NULL);
		// }
		return;
	}
}
// System.Void Hand::SetGrip(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_SetGrip_mC90D392D2A09BE016357ECC8DFEB572F6D4DF143 (Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* __this, float ___0_v, const RuntimeMethod* method) 
{
	{
		// gripTarget = v;
		float L_0 = ___0_v;
		__this->___gripTarget_6 = L_0;
		// }
		return;
	}
}
// System.Void Hand::SetTrigger(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_SetTrigger_m45C2269B67F94962EA789F20929D951CC09BBE1D (Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* __this, float ___0_v, const RuntimeMethod* method) 
{
	{
		// triggerTarget = v;
		float L_0 = ___0_v;
		__this->___triggerTarget_7 = L_0;
		// }
		return;
	}
}
// System.Void Hand::AnimateHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_AnimateHand_m679AF03BE4321A6006519ECC8A6B5EBBDE844976 (Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* __this, const RuntimeMethod* method) 
{
	{
		// if (gripTarget != gripCurrent)
		float L_0 = __this->___gripTarget_6;
		float L_1 = __this->___gripCurrent_8;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0048;
		}
	}
	{
		// gripCurrent =
		//     Mathf
		//         .MoveTowards(gripCurrent,
		//         gripTarget,
		//         Time.deltaTime * speed);
		float L_2 = __this->___gripCurrent_8;
		float L_3 = __this->___gripTarget_6;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5 = __this->___speed_4;
		float L_6;
		L_6 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		__this->___gripCurrent_8 = L_6;
		// animator.SetFloat(animatorGripParam, gripCurrent);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_5;
		String_t* L_8 = __this->___animatorGripParam_10;
		float L_9 = __this->___gripCurrent_8;
		NullCheck(L_7);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_7, L_8, L_9, NULL);
	}

IL_0048:
	{
		// if (triggerTarget != triggerCurrent)
		float L_10 = __this->___triggerTarget_7;
		float L_11 = __this->___triggerCurrent_9;
		if ((((float)L_10) == ((float)L_11)))
		{
			goto IL_0090;
		}
	}
	{
		// triggerCurrent =
		//     Mathf
		//         .MoveTowards(triggerCurrent,
		//         triggerTarget,
		//         Time.deltaTime * speed);
		float L_12 = __this->___triggerCurrent_9;
		float L_13 = __this->___triggerTarget_7;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_15 = __this->___speed_4;
		float L_16;
		L_16 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_12, L_13, ((float)il2cpp_codegen_multiply(L_14, L_15)), NULL);
		__this->___triggerCurrent_9 = L_16;
		// animator.SetFloat(animatorTriggerParam, triggerCurrent);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = __this->___animator_5;
		String_t* L_18 = __this->___animatorTriggerParam_11;
		float L_19 = __this->___triggerCurrent_9;
		NullCheck(L_17);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_17, L_18, L_19, NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void Hand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand__ctor_m821B3F2601B1F98D2CC6B7A7EE02C6453B0FBF47 (Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string animatorGripParam = "Grip";
		__this->___animatorGripParam_10 = _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animatorGripParam_10), (void*)_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		// private string animatorTriggerParam = "Trigger";
		__this->___animatorTriggerParam_11 = _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animatorTriggerParam_11), (void*)_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
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
// System.Void HandController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_Start_m2C8AB07C5C3E9FF0538595583F6360FBF8AF5707 (HandController_t4A324EFF760CA0BDED5A2B6DCB3F88B613CF9A37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = GetComponent<ActionBasedController>();
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0;
		L_0 = Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2(__this, Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2_RuntimeMethod_var);
		__this->___controller_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void HandController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_Update_m1A1B9A648FF3567FD7B5D5A6CAFAC781BE191704 (HandController_t4A324EFF760CA0BDED5A2B6DCB3F88B613CF9A37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// hand.SetGrip(controller.selectAction.action.ReadValue<float>());
		Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* L_0 = __this->___hand_5;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_1 = __this->___controller_4;
		NullCheck(L_1);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_2;
		L_2 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_1, NULL);
		V_0 = L_2;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		NullCheck(L_3);
		float L_4;
		L_4 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_3, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		NullCheck(L_0);
		Hand_SetGrip_mC90D392D2A09BE016357ECC8DFEB572F6D4DF143_inline(L_0, L_4, NULL);
		// hand.SetTrigger(controller.activateAction.action.ReadValue<float>());
		Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* L_5 = __this->___hand_5;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_6 = __this->___controller_4;
		NullCheck(L_6);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_7;
		L_7 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_6, NULL);
		V_0 = L_7;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		NullCheck(L_8);
		float L_9;
		L_9 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_8, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		NullCheck(L_5);
		Hand_SetTrigger_m45C2269B67F94962EA789F20929D951CC09BBE1D_inline(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void HandController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController__ctor_mB198726BF256A2AE98CC37B494476B82470C29E5 (HandController_t4A324EFF760CA0BDED5A2B6DCB3F88B613CF9A37* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRInteractorLineVisual_set_lineLength_mE0287680765071A6C6CACF55CC00C788F15227A4_inline (XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_LineLength = value;
		float L_0 = ___0_value;
		__this->___m_LineLength_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_GameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_GameObject_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___2_maxDelta;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___1_target;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___0_current;
		float L_7 = ___1_target;
		float L_8 = ___0_current;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___2_maxDelta;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_SelectAction_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hand_SetGrip_mC90D392D2A09BE016357ECC8DFEB572F6D4DF143_inline (Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* __this, float ___0_v, const RuntimeMethod* method) 
{
	{
		// gripTarget = v;
		float L_0 = ___0_v;
		__this->___gripTarget_6 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ActivateAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_ActivateAction_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hand_SetTrigger_m45C2269B67F94962EA789F20929D951CC09BBE1D_inline (Hand_t3C6536299C9ADFBD2BDF6B7389E3AB7CED6428D0* __this, float ___0_v, const RuntimeMethod* method) 
{
	{
		// triggerTarget = v;
		float L_0 = ___0_v;
		__this->___triggerTarget_7 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_gshared_inline (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method) 
{
	{
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
