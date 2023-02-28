#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Player>
struct List_1_tC126DB1F2EAC892E1A6DA4242770B75A794B10D3;
// System.Collections.Generic.List`1<Trial>
struct List_1_t4E99A0E9DF5E731D4577A86288C55A5CA9CF4B85;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// Ball
struct Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC;
// BallCalcImpactState
struct BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940;
// BallInitState
struct BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D;
// BallLaunchState
struct BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F;
// BallPrepState
struct BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A;
// BallStateMachine
struct BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4;
// BallStateManager
struct BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C;
// BallWaitingState
struct BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CaregiverStateManager
struct CaregiverStateManager_t73B7CD360FDA163774F383F3A1DABF89AD9E44F8;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CountDown
struct CountDown_tDEFEB702F9E648A9877A4C214047B43243989DEE;
// DebugConnection
struct DebugConnection_t5AEBED88F8326F8B01674082CA550DFC96FE8F83;
// GameManager
struct GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// IntroState
struct IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Player
struct Player_t637772DB02240599AE6D1E7DB0850DE1D8743843;
// PlayerGroup
struct PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015;
// PostTrialState
struct PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B;
// PreTrialState
struct PreTrialState_t1C495298ED36B0F6283A5805032045205512133B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// ShowTrialState
struct ShowTrialState_t39CD78C86788F15F30E0D5510924B43D6093D890;
// StateMachine
struct StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E;
// System.String
struct String_t;
// SwitchStateMgrManual
struct SwitchStateMgrManual_t263081FFEC4C462A0A751D3ED9E446F25F1C7691;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TargetGroup
struct TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Trial
struct Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468;
// TrialList
struct TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05;
// TrialState
struct TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C;
// TrialStateManager
struct TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06;
// TrophyStateManager
struct TrophyStateManager_tF770DD096B59FDE5876570AB1D2ACDC45B969CF6;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PreTrialState_t1C495298ED36B0F6283A5805032045205512133B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03FBC201CD1952EC3C1AD3598C93028F89C84E95;
IL2CPP_EXTERN_C String_t* _stringLiteral184564089B180E8C7DA73994F16811AF32F2EF89;
IL2CPP_EXTERN_C String_t* _stringLiteral1E73A0024C019D7E2CF7B41443B2F4F83144941A;
IL2CPP_EXTERN_C String_t* _stringLiteral246D03E7F8D65327E31CD81FBB24FB158BDC2FDA;
IL2CPP_EXTERN_C String_t* _stringLiteral24F1738C140BBFC1B0E8208802434B04EF9EA6A8;
IL2CPP_EXTERN_C String_t* _stringLiteral2FD52AE23C286DE14F6F87582B1B878240576D9D;
IL2CPP_EXTERN_C String_t* _stringLiteral3ED5B41C9401B67FC689C1091F59C38A94497869;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral49F298F4BEB922B6AC70BB4F2BDC2C4FBAC9F509;
IL2CPP_EXTERN_C String_t* _stringLiteral666AEAD691DCC31D7E446E0245735B51E3541C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral71F1D2936EE4CAA270001C21DAD6D3665307D7E9;
IL2CPP_EXTERN_C String_t* _stringLiteral79C0CF77E3136C40705C156E6256F481CB8756A6;
IL2CPP_EXTERN_C String_t* _stringLiteral88DA339BED32211741E3B648D624CABE831DB1B3;
IL2CPP_EXTERN_C String_t* _stringLiteralB22B20C2FE103B99C1659DA0C14517EBAC471D5A;
IL2CPP_EXTERN_C String_t* _stringLiteralB60B5EDA806699B8F084BC1794FB3471600F8A9B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05_m5CB247B3F5719D636588A5F8624F2EEB738F5FB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06_m317B15A80E10C15C4FFA7EC4CECCF117B6BA0FB6_RuntimeMethod_var;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDA5617CCF5D5EDFA35EA944CB9CB550AC6D6FE7A 
{
};

// BallStateMachine
struct BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4  : public RuntimeObject
{
};

// StateMachine
struct StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E  : public RuntimeObject
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

// Trial
struct Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468  : public RuntimeObject
{
	// System.Int32 Trial::trialNumber
	int32_t ___trialNumber_0;
	// System.Boolean Trial::isGoodTrial
	bool ___isGoodTrial_1;
	// System.String Trial::response
	String_t* ___response_2;
	// Atmosphere Trial::atmosphere
	int32_t ___atmosphere_3;
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

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// BallInitState
struct BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D  : public BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// IntroState
struct IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09  : public StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E
{
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// PostTrialState
struct PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B  : public StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E
{
};

// PreTrialState
struct PreTrialState_t1C495298ED36B0F6283A5805032045205512133B  : public StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E
{
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// TrialState
struct TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C  : public StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E
{
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BallStateManager
struct BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BallStateMachine BallStateManager::currentBallState
	BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4* ___currentBallState_4;
	// BallInitState BallStateManager::ballInitState
	BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D* ___ballInitState_5;
	// BallWaitingState BallStateManager::ballWaiting
	BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C* ___ballWaiting_6;
	// BallPrepState BallStateManager::ballPrepState
	BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A* ___ballPrepState_7;
	// BallLaunchState BallStateManager::ballLaunchState
	BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F* ___ballLaunchState_8;
	// BallCalcImpactState BallStateManager::ballCalcImpactState
	BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940* ___ballCalcImpactState_9;
	// GameManager BallStateManager::gameManager
	GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* ___gameManager_10;
	// PlayerGroup BallStateManager::players
	PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* ___players_11;
	// TrialList BallStateManager::trialList
	TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05* ___trialList_12;
	// TargetGroup BallStateManager::targets
	TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* ___targets_13;
	// Ball BallStateManager::currentBall
	Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC* ___currentBall_14;
	// System.Int32 BallStateManager::amountOfBallsInTrial
	int32_t ___amountOfBallsInTrial_15;
	// System.Boolean BallStateManager::isGoodTrial
	bool ___isGoodTrial_16;
	// System.String BallStateManager::ballPhase
	String_t* ___ballPhase_17;
};

// CountDown
struct CountDown_tDEFEB702F9E648A9877A4C214047B43243989DEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CountDown::numbers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___numbers_4;
	// System.String CountDown::numbers_directory
	String_t* ___numbers_directory_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CountDown::countDownList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___countDownList_6;
	// UnityEngine.GameObject CountDown::numberInst
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___numberInst_7;
	// System.Boolean CountDown::testCountDown
	bool ___testCountDown_8;
	// System.Boolean CountDown::countDownFinished
	bool ___countDownFinished_9;
};

// GameManager
struct GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean GameManager::gameDidStart
	bool ___gameDidStart_5;
	// System.Boolean GameManager::playerSettingsAreSet
	bool ___playerSettingsAreSet_6;
	// System.Boolean GameManager::NPCShootsBall
	bool ___NPCShootsBall_7;
	// System.Boolean GameManager::restartBool
	bool ___restartBool_8;
	// System.Boolean GameManager::allMust
	bool ___allMust_9;
	// System.Int32 GameManager::ballsPerGame
	int32_t ___ballsPerGame_10;
	// System.Boolean GameManager::trialListGenerated
	bool ___trialListGenerated_11;
	// System.Boolean GameManager::doFakeLaunch
	bool ___doFakeLaunch_12;
	// System.Boolean GameManager::isTutorial
	bool ___isTutorial_13;
	// System.Boolean GameManager::startTrial
	bool ___startTrial_14;
	// System.Boolean GameManager::endTrial
	bool ___endTrial_15;
	// System.Boolean GameManager::restart
	bool ___restart_16;
	// System.Boolean GameManager::ballIsShot
	bool ___ballIsShot_17;
	// System.Boolean GameManager::trialIsRunning
	bool ___trialIsRunning_18;
	// System.Boolean GameManager::trialListFinished
	bool ___trialListFinished_19;
	// System.Int32 GameManager::currentTrial
	int32_t ___currentTrial_20;
	// System.Boolean GameManager::trophyMayAppear
	bool ___trophyMayAppear_21;
	// System.Boolean GameManager::mayPrep
	bool ___mayPrep_22;
	// System.Boolean GameManager::canLaunch
	bool ___canLaunch_23;
	// System.Boolean GameManager::didShoot
	bool ___didShoot_24;
	// System.Boolean GameManager::trophyIsGiven
	bool ___trophyIsGiven_25;
	// System.Boolean GameManager::didReadFeedback
	bool ___didReadFeedback_26;
	// System.Boolean GameManager::didGiveScore
	bool ___didGiveScore_27;
	// System.Boolean GameManager::mustGiveFeedback
	bool ___mustGiveFeedback_28;
	// System.Boolean GameManager::isInitiated
	bool ___isInitiated_29;
};

// PlayerGroup
struct PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player PlayerGroup::player
	Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* ___player_4;
	// Player PlayerGroup::NPC
	Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* ___NPC_5;
	// Player PlayerGroup::activeParticipant
	Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* ___activeParticipant_6;
	// GameManager PlayerGroup::gameManager
	GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* ___gameManager_7;
	// System.Boolean PlayerGroup::switchPlayer
	bool ___switchPlayer_8;
	// DebugConnection PlayerGroup::debug_text
	DebugConnection_t5AEBED88F8326F8B01674082CA550DFC96FE8F83* ___debug_text_9;
	// System.Collections.Generic.List`1<Player> PlayerGroup::players
	List_1_tC126DB1F2EAC892E1A6DA4242770B75A794B10D3* ___players_10;
};

// ShowTrialState
struct ShowTrialState_t39CD78C86788F15F30E0D5510924B43D6093D890  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TrialStateManager ShowTrialState::stateManager
	TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___stateManager_4;
	// TrialList ShowTrialState::trialList
	TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05* ___trialList_5;
	// TMPro.TextMeshProUGUI ShowTrialState::_text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____text_6;
	// System.String ShowTrialState::stateMgrName
	String_t* ___stateMgrName_7;
	// System.String ShowTrialState::trialListName
	String_t* ___trialListName_8;
};

// SwitchStateMgrManual
struct SwitchStateMgrManual_t263081FFEC4C462A0A751D3ED9E446F25F1C7691  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TrialStateManager SwitchStateMgrManual::statemgr
	TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___statemgr_4;
	// System.String SwitchStateMgrManual::stateMgrName
	String_t* ___stateMgrName_5;
};

// TargetGroup
struct TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TargetGroup/Mode TargetGroup::movementMode
	int32_t ___movementMode_4;
	// UnityEngine.Vector3 TargetGroup::rotationVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationVector_5;
	// System.Single TargetGroup::xMinBorder
	float ___xMinBorder_6;
	// System.Single TargetGroup::xMaxBorder
	float ___xMaxBorder_7;
	// System.Single TargetGroup::xMinSpeed
	float ___xMinSpeed_8;
	// System.Single TargetGroup::xMaxSpeed
	float ___xMaxSpeed_9;
	// System.Single TargetGroup::yMinBorder
	float ___yMinBorder_10;
	// System.Single TargetGroup::yMaxBorder
	float ___yMaxBorder_11;
	// System.Single TargetGroup::yMinSpeed
	float ___yMinSpeed_12;
	// System.Single TargetGroup::yMaxSpeed
	float ___yMaxSpeed_13;
	// System.Single TargetGroup::minBorder
	float ___minBorder_14;
	// System.Single TargetGroup::maxBorder
	float ___maxBorder_15;
	// System.Single TargetGroup::minSpeed
	float ___minSpeed_16;
	// System.Single TargetGroup::maxSpeed
	float ___maxSpeed_17;
	// UnityEngine.GameObject[] TargetGroup::targetList
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___targetList_18;
	// UnityEngine.GameObject TargetGroup::hitTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hitTarget_19;
	// System.Boolean TargetGroup::readyForHit
	bool ___readyForHit_20;
	// EnumAngle TargetGroup::translateAngle
	int32_t ___translateAngle_21;
};

// TrialList
struct TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player TrialList::player
	Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* ___player_4;
	// System.Collections.Generic.List`1<Trial> TrialList::trialsList
	List_1_t4E99A0E9DF5E731D4577A86288C55A5CA9CF4B85* ___trialsList_5;
	// System.String TrialList::audioClips20_dir
	String_t* ___audioClips20_dir_6;
	// System.String TrialList::audioClips80_dir
	String_t* ___audioClips80_dir_7;
	// UnityEngine.AudioClip[] TrialList::audioClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___audioClips_8;
	// UnityEngine.TextAsset TrialList::trialListTA
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___trialListTA_9;
	// GameManager TrialList::gameManager
	GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* ___gameManager_10;
};

// TrialStateManager
struct TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// StateMachine TrialStateManager::currentState
	StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E* ___currentState_4;
	// PreTrialState TrialStateManager::preTrialState
	PreTrialState_t1C495298ED36B0F6283A5805032045205512133B* ___preTrialState_5;
	// TrialState TrialStateManager::trialState
	TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C* ___trialState_6;
	// PostTrialState TrialStateManager::postTrialState
	PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B* ___postTrialState_7;
	// IntroState TrialStateManager::introState
	IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09* ___introState_8;
	// PlayerGroup TrialStateManager::players
	PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* ___players_9;
	// TargetGroup TrialStateManager::targets
	TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* ___targets_10;
	// TrialList TrialStateManager::trialList
	TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05* ___trialList_11;
	// GameManager TrialStateManager::gameManager
	GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* ___gameManager_12;
	// BallStateManager TrialStateManager::ballStates
	BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___ballStates_13;
	// CaregiverStateManager TrialStateManager::caregiverStates
	CaregiverStateManager_t73B7CD360FDA163774F383F3A1DABF89AD9E44F8* ___caregiverStates_14;
	// TrophyStateManager TrialStateManager::trophyStates
	TrophyStateManager_tF770DD096B59FDE5876570AB1D2ACDC45B969CF6* ___trophyStates_15;
	// CountDown TrialStateManager::countDown
	CountDown_tDEFEB702F9E648A9877A4C214047B43243989DEE* ___countDown_16;
	// System.String TrialStateManager::trialPhase
	String_t* ___trialPhase_17;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_266;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_267;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_268;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_269;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_270;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_271;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_272;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_273;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_274;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_275;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_276;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_277;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_279;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_300;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_301;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_302;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_303;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_304;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_305;
};

// <Module>

// <Module>

// BallStateMachine

// BallStateMachine

// StateMachine

// StateMachine

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Trial

// Trial

// BallInitState

// BallInitState

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// IntroState

// IntroState

// PostTrialState

// PostTrialState

// PreTrialState

// PreTrialState

// TrialState

// TrialState

// System.Void

// System.Void

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// BallStateManager

// BallStateManager

// CountDown

// CountDown

// GameManager
struct GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_StaticFields
{
	// GameManager GameManager::Instance
	GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* ___Instance_4;
};

// GameManager

// PlayerGroup

// PlayerGroup

// ShowTrialState

// ShowTrialState

// SwitchStateMgrManual

// SwitchStateMgrManual

// TargetGroup

// TargetGroup

// TrialList

// TrialList

// TrialStateManager

// TrialStateManager

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_280;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_281;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_299;
};

// TMPro.TextMeshProUGUI
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void CountDown::StartCountDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDown_StartCountDown_m86CE0C94A95684374DF4A5DDCA92F987E39C0057 (CountDown_tDEFEB702F9E648A9877A4C214047B43243989DEE* __this, const RuntimeMethod* method) ;
// System.Void TargetGroup::SetAllStartingPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetGroup_SetAllStartingPos_mC5D7A8ECB2D119FCE6DABC792798E9F15A1A41C6 (TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* __this, const RuntimeMethod* method) ;
// System.Void TargetGroup::HoldAllTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetGroup_HoldAllTargets_m2FA3DA9FF759B91F697E03A6419722B20E86FDB4 (TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void TrialStateManager::SwitchState(StateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialStateManager_SwitchState_mF53347D8B7C02C7613932CC07BB3FA35CB4D2A62 (TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* __this, StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E* ___0_newState, const RuntimeMethod* method) ;
// System.Void StateMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine__ctor_mDCC6428CD1426007FBFDACC7C467520FE38A74BE (StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E* __this, const RuntimeMethod* method) ;
// System.Void TrialList::NextTrial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialList_NextTrial_mACB31D18CCE50A911009A2775024F1353F704F4C (TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05* __this, const RuntimeMethod* method) ;
// System.Void PlayerGroup::ResetPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGroup_ResetPlayers_mC4639A51C9486865E6762113561C6960638F8263 (PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* __this, const RuntimeMethod* method) ;
// System.Void BallStateManager::SwitchState(BallStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallStateManager_SwitchState_mDD437A10B242DDD78AA846C0510E6F37672ABA98 (BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* __this, BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4* ___0_newState, const RuntimeMethod* method) ;
// Trial TrialList::GetCurrentTrial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* TrialList_GetCurrentTrial_mE3449ADB7FF0FAFC94D295D55909C31BCC1FDFE0 (TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05* __this, const RuntimeMethod* method) ;
// System.Boolean Trial::IsGoodTrial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Trial_IsGoodTrial_m98B20BE7B0E710DC3E11FE7EF328EC3397C34747_inline (Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* __this, const RuntimeMethod* method) ;
// System.Void TargetGroup::SetAllNewTranslateValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetGroup_SetAllNewTranslateValues_mEC6CFA56FF7242045F96CB84E3AFCADFCEF38323 (TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void PreTrialState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreTrialState__ctor_m9D383155AD1363CCA009E969F06FC58C9FEDF9AE (PreTrialState_t1C495298ED36B0F6283A5805032045205512133B* __this, const RuntimeMethod* method) ;
// System.Void TrialState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialState__ctor_mB0DBAA652BAE6B24A04ABE98A43FC0BAF4CF5EB2 (TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C* __this, const RuntimeMethod* method) ;
// System.Void PostTrialState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostTrialState__ctor_m48D334CE6C26D1B3631CFB5D56989CA3D65771AB (PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B* __this, const RuntimeMethod* method) ;
// System.Void IntroState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroState__ctor_mC5F08CF8CC84B33ACB4FD0CA79DB944615A22654 (IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TrialStateManager>()
inline TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* GameObject_GetComponent_TisTrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06_m317B15A80E10C15C4FFA7EC4CECCF117B6BA0FB6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<TrialList>()
inline TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05* GameObject_GetComponent_TisTrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05_m5CB247B3F5719D636588A5F8624F2EEB738F5FB0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 Trial::GetTrialNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Trial_GetTrialNumber_mF6FE0261A13F714BA6FA15087BA549B2996B279F_inline (Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String Trial::Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Trial_Response_m250BAEDAA3A15006DF842FC922413958C5419068_inline (Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
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
// System.Void IntroState::EnterState(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroState_EnterState_m20F67A726B042A04BF99B95819FC347FFE07866B (IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F1738C140BBFC1B0E8208802434B04EF9EA6A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.trialPhase = "IntroTrialState";
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = ___0_state;
		NullCheck(L_0);
		L_0->___trialPhase_17 = _stringLiteral24F1738C140BBFC1B0E8208802434B04EF9EA6A8;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___trialPhase_17), (void*)_stringLiteral24F1738C140BBFC1B0E8208802434B04EF9EA6A8);
		// state.countDown.StartCountDown();
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_1 = ___0_state;
		NullCheck(L_1);
		CountDown_tDEFEB702F9E648A9877A4C214047B43243989DEE* L_2 = L_1->___countDown_16;
		NullCheck(L_2);
		CountDown_StartCountDown_m86CE0C94A95684374DF4A5DDCA92F987E39C0057(L_2, NULL);
		// state.targets.SetAllStartingPos();
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_3 = ___0_state;
		NullCheck(L_3);
		TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* L_4 = L_3->___targets_10;
		NullCheck(L_4);
		TargetGroup_SetAllStartingPos_mC5D7A8ECB2D119FCE6DABC792798E9F15A1A41C6(L_4, NULL);
		// state.targets.HoldAllTargets(); // we don't want the targets to move yet
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_5 = ___0_state;
		NullCheck(L_5);
		TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* L_6 = L_5->___targets_10;
		NullCheck(L_6);
		TargetGroup_HoldAllTargets_m2FA3DA9FF759B91F697E03A6419722B20E86FDB4(L_6, NULL);
		// }
		return;
	}
}
// System.Void IntroState::OnCollisionEnter(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroState_OnCollisionEnter_mFA2A9B71E26E6EED0E889FAAA2DB24D7E648513A (IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E73A0024C019D7E2CF7B41443B2F4F83144941A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Collision Enter");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1E73A0024C019D7E2CF7B41443B2F4F83144941A, NULL);
		// }
		return;
	}
}
// System.Void IntroState::UpdateState(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroState_UpdateState_mF29C0DF47FD1F732D0CE50C72B74C17BEC0C5E1A (IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	{
		// if (state.gameManager.trialListGenerated && state.countDown.countDownFinished)
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = ___0_state;
		NullCheck(L_0);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_1 = L_0->___gameManager_12;
		NullCheck(L_1);
		bool L_2 = L_1->___trialListGenerated_11;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_3 = ___0_state;
		NullCheck(L_3);
		CountDown_tDEFEB702F9E648A9877A4C214047B43243989DEE* L_4 = L_3->___countDown_16;
		NullCheck(L_4);
		bool L_5 = L_4->___countDownFinished_9;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// state.SwitchState(state.preTrialState);
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_6 = ___0_state;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_7 = ___0_state;
		NullCheck(L_7);
		PreTrialState_t1C495298ED36B0F6283A5805032045205512133B* L_8 = L_7->___preTrialState_5;
		NullCheck(L_6);
		TrialStateManager_SwitchState_mF53347D8B7C02C7613932CC07BB3FA35CB4D2A62(L_6, L_8, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void IntroState::ExitState(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroState_ExitState_mE05FB66A0E97BA47A506DBED49A5C228F835E150 (IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void IntroState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroState__ctor_mC5F08CF8CC84B33ACB4FD0CA79DB944615A22654 (IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09* __this, const RuntimeMethod* method) 
{
	{
		StateMachine__ctor_mDCC6428CD1426007FBFDACC7C467520FE38A74BE(__this, NULL);
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
// System.Void PostTrialState::EnterState(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostTrialState_EnterState_m3F5036C2E3396A994E8461D1F184CB7996A5BFCC (PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB22B20C2FE103B99C1659DA0C14517EBAC471D5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.trialPhase = "PostTrialState";
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = ___0_state;
		NullCheck(L_0);
		L_0->___trialPhase_17 = _stringLiteralB22B20C2FE103B99C1659DA0C14517EBAC471D5A;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___trialPhase_17), (void*)_stringLiteralB22B20C2FE103B99C1659DA0C14517EBAC471D5A);
		// state.targets.HoldAllTargets();
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_1 = ___0_state;
		NullCheck(L_1);
		TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* L_2 = L_1->___targets_10;
		NullCheck(L_2);
		TargetGroup_HoldAllTargets_m2FA3DA9FF759B91F697E03A6419722B20E86FDB4(L_2, NULL);
		// }
		return;
	}
}
// System.Void PostTrialState::OnCollisionEnter(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostTrialState_OnCollisionEnter_m123694CE3FBBC320A23460B2AA0A458FB6231805 (PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E73A0024C019D7E2CF7B41443B2F4F83144941A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Collision Enter");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1E73A0024C019D7E2CF7B41443B2F4F83144941A, NULL);
		// }
		return;
	}
}
// System.Void PostTrialState::UpdateState(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostTrialState_UpdateState_m90E69845ACA7A5C333AD2C9AAFD4387BD541E7E2 (PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	{
		// if (state.gameManager.trophyIsGiven)
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = ___0_state;
		NullCheck(L_0);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_1 = L_0->___gameManager_12;
		NullCheck(L_1);
		bool L_2 = L_1->___trophyIsGiven_25;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// state.gameManager.trophyIsGiven = false;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_3 = ___0_state;
		NullCheck(L_3);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_4 = L_3->___gameManager_12;
		NullCheck(L_4);
		L_4->___trophyIsGiven_25 = (bool)0;
		// state.gameManager.mustGiveFeedback = true;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_5 = ___0_state;
		NullCheck(L_5);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_6 = L_5->___gameManager_12;
		NullCheck(L_6);
		L_6->___mustGiveFeedback_28 = (bool)1;
	}

IL_0025:
	{
		// if (state.gameManager.restart)
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_7 = ___0_state;
		NullCheck(L_7);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_8 = L_7->___gameManager_12;
		NullCheck(L_8);
		bool L_9 = L_8->___restart_16;
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		// state.gameManager.restart = false;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_10 = ___0_state;
		NullCheck(L_10);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_11 = L_10->___gameManager_12;
		NullCheck(L_11);
		L_11->___restart_16 = (bool)0;
		// state.SwitchState(state.preTrialState);
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_12 = ___0_state;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_13 = ___0_state;
		NullCheck(L_13);
		PreTrialState_t1C495298ED36B0F6283A5805032045205512133B* L_14 = L_13->___preTrialState_5;
		NullCheck(L_12);
		TrialStateManager_SwitchState_mF53347D8B7C02C7613932CC07BB3FA35CB4D2A62(L_12, L_14, NULL);
	}

IL_004a:
	{
		// if (state.gameManager.isTutorial)
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_15 = ___0_state;
		NullCheck(L_15);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_16 = L_15->___gameManager_12;
		NullCheck(L_16);
		bool L_17 = L_16->___isTutorial_13;
		if (!L_17)
		{
			goto IL_0063;
		}
	}
	{
		// state.SwitchState(state.preTrialState);
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_18 = ___0_state;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_19 = ___0_state;
		NullCheck(L_19);
		PreTrialState_t1C495298ED36B0F6283A5805032045205512133B* L_20 = L_19->___preTrialState_5;
		NullCheck(L_18);
		TrialStateManager_SwitchState_mF53347D8B7C02C7613932CC07BB3FA35CB4D2A62(L_18, L_20, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void PostTrialState::ExitState(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostTrialState_ExitState_mE798C175C8379DFB2B7B6981E704C3C5F3A58C55 (PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	{
		// state.gameManager.endTrial = false;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = ___0_state;
		NullCheck(L_0);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_1 = L_0->___gameManager_12;
		NullCheck(L_1);
		L_1->___endTrial_15 = (bool)0;
		// state.gameManager.startTrial = false;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_2 = ___0_state;
		NullCheck(L_2);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_3 = L_2->___gameManager_12;
		NullCheck(L_3);
		L_3->___startTrial_14 = (bool)0;
		// state.gameManager.ballIsShot = false;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_4 = ___0_state;
		NullCheck(L_4);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_5 = L_4->___gameManager_12;
		NullCheck(L_5);
		L_5->___ballIsShot_17 = (bool)0;
		// state.targets.SetAllStartingPos();
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_6 = ___0_state;
		NullCheck(L_6);
		TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* L_7 = L_6->___targets_10;
		NullCheck(L_7);
		TargetGroup_SetAllStartingPos_mC5D7A8ECB2D119FCE6DABC792798E9F15A1A41C6(L_7, NULL);
		// state.trialList.NextTrial();
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_8 = ___0_state;
		NullCheck(L_8);
		TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05* L_9 = L_8->___trialList_11;
		NullCheck(L_9);
		TrialList_NextTrial_mACB31D18CCE50A911009A2775024F1353F704F4C(L_9, NULL);
		// }
		return;
	}
}
// System.Void PostTrialState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostTrialState__ctor_m48D334CE6C26D1B3631CFB5D56989CA3D65771AB (PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B* __this, const RuntimeMethod* method) 
{
	{
		StateMachine__ctor_mDCC6428CD1426007FBFDACC7C467520FE38A74BE(__this, NULL);
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
// System.Void PreTrialState::EnterState(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreTrialState_EnterState_mF9D92394AB20147B07E3BE9EF8AE0A8C406E3EBD (PreTrialState_t1C495298ED36B0F6283A5805032045205512133B* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49F298F4BEB922B6AC70BB4F2BDC2C4FBAC9F509);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.trialPhase = "preTrial";
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = ___0_state;
		NullCheck(L_0);
		L_0->___trialPhase_17 = _stringLiteral49F298F4BEB922B6AC70BB4F2BDC2C4FBAC9F509;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___trialPhase_17), (void*)_stringLiteral49F298F4BEB922B6AC70BB4F2BDC2C4FBAC9F509);
		// state.players.ResetPlayers();
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_1 = ___0_state;
		NullCheck(L_1);
		PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* L_2 = L_1->___players_9;
		NullCheck(L_2);
		PlayerGroup_ResetPlayers_mC4639A51C9486865E6762113561C6960638F8263(L_2, NULL);
		// state.targets.HoldAllTargets(); // we don't want the targets to move yet
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_3 = ___0_state;
		NullCheck(L_3);
		TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* L_4 = L_3->___targets_10;
		NullCheck(L_4);
		TargetGroup_HoldAllTargets_m2FA3DA9FF759B91F697E03A6419722B20E86FDB4(L_4, NULL);
		// state.ballStates.SwitchState(state.ballStates.ballInitState);
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_5 = ___0_state;
		NullCheck(L_5);
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_6 = L_5->___ballStates_13;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_7 = ___0_state;
		NullCheck(L_7);
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_8 = L_7->___ballStates_13;
		NullCheck(L_8);
		BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D* L_9 = L_8->___ballInitState_5;
		NullCheck(L_6);
		BallStateManager_SwitchState_mDD437A10B242DDD78AA846C0510E6F37672ABA98(L_6, L_9, NULL);
		// state.ballStates.isGoodTrial = state.trialList.GetCurrentTrial().IsGoodTrial();
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_10 = ___0_state;
		NullCheck(L_10);
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_11 = L_10->___ballStates_13;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_12 = ___0_state;
		NullCheck(L_12);
		TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05* L_13 = L_12->___trialList_11;
		NullCheck(L_13);
		Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* L_14;
		L_14 = TrialList_GetCurrentTrial_mE3449ADB7FF0FAFC94D295D55909C31BCC1FDFE0(L_13, NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = Trial_IsGoodTrial_m98B20BE7B0E710DC3E11FE7EF328EC3397C34747_inline(L_14, NULL);
		NullCheck(L_11);
		L_11->___isGoodTrial_16 = L_15;
		// state.gameManager.trophyMayAppear = true;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_16 = ___0_state;
		NullCheck(L_16);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_17 = L_16->___gameManager_12;
		NullCheck(L_17);
		L_17->___trophyMayAppear_21 = (bool)1;
		// }
		return;
	}
}
// System.Void PreTrialState::OnCollisionEnter(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreTrialState_OnCollisionEnter_mEDF72D823A2D0625CA904F5AEE60C5B0CE3077B0 (PreTrialState_t1C495298ED36B0F6283A5805032045205512133B* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E73A0024C019D7E2CF7B41443B2F4F83144941A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Collision Enter");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1E73A0024C019D7E2CF7B41443B2F4F83144941A, NULL);
		// }
		return;
	}
}
// System.Void PreTrialState::UpdateState(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreTrialState_UpdateState_mEAA2288FA129333D9AACBA45F043F69E4412339C (PreTrialState_t1C495298ED36B0F6283A5805032045205512133B* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	{
		// if (state.gameManager.startTrial)
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = ___0_state;
		NullCheck(L_0);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_1 = L_0->___gameManager_12;
		NullCheck(L_1);
		bool L_2 = L_1->___startTrial_14;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// state.gameManager.startTrial = false;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_3 = ___0_state;
		NullCheck(L_3);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_4 = L_3->___gameManager_12;
		NullCheck(L_4);
		L_4->___startTrial_14 = (bool)0;
		// state.SwitchState(state.trialState);
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_5 = ___0_state;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_6 = ___0_state;
		NullCheck(L_6);
		TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C* L_7 = L_6->___trialState_6;
		NullCheck(L_5);
		TrialStateManager_SwitchState_mF53347D8B7C02C7613932CC07BB3FA35CB4D2A62(L_5, L_7, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void PreTrialState::ExitState(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreTrialState_ExitState_m361F97D48B89A9FF6B11FE6C264B8161B68E855F (PreTrialState_t1C495298ED36B0F6283A5805032045205512133B* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	{
		// state.gameManager.endTrial = false;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = ___0_state;
		NullCheck(L_0);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_1 = L_0->___gameManager_12;
		NullCheck(L_1);
		L_1->___endTrial_15 = (bool)0;
		// state.gameManager.ballIsShot = false;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_2 = ___0_state;
		NullCheck(L_2);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_3 = L_2->___gameManager_12;
		NullCheck(L_3);
		L_3->___ballIsShot_17 = (bool)0;
		// state.gameManager.restart = false;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_4 = ___0_state;
		NullCheck(L_4);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_5 = L_4->___gameManager_12;
		NullCheck(L_5);
		L_5->___restart_16 = (bool)0;
		// state.targets.SetAllNewTranslateValues();
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_6 = ___0_state;
		NullCheck(L_6);
		TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* L_7 = L_6->___targets_10;
		NullCheck(L_7);
		TargetGroup_SetAllNewTranslateValues_mEC6CFA56FF7242045F96CB84E3AFCADFCEF38323(L_7, NULL);
		// }
		return;
	}
}
// System.Void PreTrialState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreTrialState__ctor_m9D383155AD1363CCA009E969F06FC58C9FEDF9AE (PreTrialState_t1C495298ED36B0F6283A5805032045205512133B* __this, const RuntimeMethod* method) 
{
	{
		StateMachine__ctor_mDCC6428CD1426007FBFDACC7C467520FE38A74BE(__this, NULL);
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
// System.Void StateMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine__ctor_mDCC6428CD1426007FBFDACC7C467520FE38A74BE (StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E* __this, const RuntimeMethod* method) 
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
// System.Void TrialState::EnterState(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialState_EnterState_m2A22BD0E8CCF2DC1E0FE94D62BE77CFE2F2E2FFE (TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03FBC201CD1952EC3C1AD3598C93028F89C84E95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C0CF77E3136C40705C156E6256F481CB8756A6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Entering Trial State");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral79C0CF77E3136C40705C156E6256F481CB8756A6, NULL);
		// state.trialPhase = "TrialState";
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = ___0_state;
		NullCheck(L_0);
		L_0->___trialPhase_17 = _stringLiteral03FBC201CD1952EC3C1AD3598C93028F89C84E95;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___trialPhase_17), (void*)_stringLiteral03FBC201CD1952EC3C1AD3598C93028F89C84E95);
		// state.gameManager.trialIsRunning = true;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_1 = ___0_state;
		NullCheck(L_1);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_2 = L_1->___gameManager_12;
		NullCheck(L_2);
		L_2->___trialIsRunning_18 = (bool)1;
		// }
		return;
	}
}
// System.Void TrialState::OnCollisionEnter(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialState_OnCollisionEnter_m67F236954B761065ED0B500CBB2D35882F0F4A5E (TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E73A0024C019D7E2CF7B41443B2F4F83144941A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Collision Enter");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1E73A0024C019D7E2CF7B41443B2F4F83144941A, NULL);
		// }
		return;
	}
}
// System.Void TrialState::UpdateState(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialState_UpdateState_m5D400BB4E3B57024A5178B734E8CBD8587784485 (TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	{
		// if (state.gameManager.endTrial)
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = ___0_state;
		NullCheck(L_0);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_1 = L_0->___gameManager_12;
		NullCheck(L_1);
		bool L_2 = L_1->___endTrial_15;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// state.SwitchState(state.postTrialState);
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_3 = ___0_state;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_4 = ___0_state;
		NullCheck(L_4);
		PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B* L_5 = L_4->___postTrialState_7;
		NullCheck(L_3);
		TrialStateManager_SwitchState_mF53347D8B7C02C7613932CC07BB3FA35CB4D2A62(L_3, L_5, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void TrialState::ExitState(TrialStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialState_ExitState_mEB260BF6FD702ACA66323327E8EC45134DA97D16 (TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C* __this, TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DA339BED32211741E3B648D624CABE831DB1B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Exiting Trial State");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral88DA339BED32211741E3B648D624CABE831DB1B3, NULL);
		// state.gameManager.endTrial = false;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = ___0_state;
		NullCheck(L_0);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_1 = L_0->___gameManager_12;
		NullCheck(L_1);
		L_1->___endTrial_15 = (bool)0;
		// state.gameManager.trialIsRunning = false;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_2 = ___0_state;
		NullCheck(L_2);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_3 = L_2->___gameManager_12;
		NullCheck(L_3);
		L_3->___trialIsRunning_18 = (bool)0;
		// state.gameManager.restart = false;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_4 = ___0_state;
		NullCheck(L_4);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_5 = L_4->___gameManager_12;
		NullCheck(L_5);
		L_5->___restart_16 = (bool)0;
		// state.gameManager.ballIsShot = false;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_6 = ___0_state;
		NullCheck(L_6);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_7 = L_6->___gameManager_12;
		NullCheck(L_7);
		L_7->___ballIsShot_17 = (bool)0;
		// }
		return;
	}
}
// System.Void TrialState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialState__ctor_mB0DBAA652BAE6B24A04ABE98A43FC0BAF4CF5EB2 (TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C* __this, const RuntimeMethod* method) 
{
	{
		StateMachine__ctor_mDCC6428CD1426007FBFDACC7C467520FE38A74BE(__this, NULL);
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
// System.Void TrialStateManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialStateManager_Start_mD358C19D979475EFCF8EE3D8B91DEEFDF4A528B6 (TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral184564089B180E8C7DA73994F16811AF32F2EF89);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentState = introState;
		IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09* L_0 = __this->___introState_8;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// trialPhase = "IntroState";
		__this->___trialPhase_17 = _stringLiteral184564089B180E8C7DA73994F16811AF32F2EF89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trialPhase_17), (void*)_stringLiteral184564089B180E8C7DA73994F16811AF32F2EF89);
		// currentState.EnterState(this);
		StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E* L_1 = __this->___currentState_4;
		NullCheck(L_1);
		VirtualActionInvoker1< TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* >::Invoke(4 /* System.Void StateMachine::EnterState(TrialStateManager) */, L_1, __this);
		// gameManager = GameManager.Instance;
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_2 = ((GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var))->___Instance_4;
		__this->___gameManager_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_12), (void*)L_2);
		// }
		return;
	}
}
// System.Void TrialStateManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialStateManager_Update_m651FD6C7FE59D0A2BFB33A5071EFBD446AFE63A6 (TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* __this, const RuntimeMethod* method) 
{
	{
		// currentState.UpdateState(this);
		StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E* L_0 = __this->___currentState_4;
		NullCheck(L_0);
		VirtualActionInvoker1< TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* >::Invoke(5 /* System.Void StateMachine::UpdateState(TrialStateManager) */, L_0, __this);
		// }
		return;
	}
}
// System.Void TrialStateManager::SwitchState(StateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialStateManager_SwitchState_mF53347D8B7C02C7613932CC07BB3FA35CB4D2A62 (TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* __this, StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E* ___0_newState, const RuntimeMethod* method) 
{
	{
		// currentState.ExitState(this);
		StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E* L_0 = __this->___currentState_4;
		NullCheck(L_0);
		VirtualActionInvoker1< TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* >::Invoke(7 /* System.Void StateMachine::ExitState(TrialStateManager) */, L_0, __this);
		// currentState = newState;
		StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E* L_1 = ___0_newState;
		__this->___currentState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_1);
		// currentState.EnterState(this);
		StateMachine_tF246101103F32656E33047904621B7DFB8AFDB4E* L_2 = __this->___currentState_4;
		NullCheck(L_2);
		VirtualActionInvoker1< TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* >::Invoke(4 /* System.Void StateMachine::EnterState(TrialStateManager) */, L_2, __this);
		// }
		return;
	}
}
// System.Void TrialStateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialStateManager__ctor_mC0A7174854713E3203F87D117434B2505E918183 (TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreTrialState_t1C495298ED36B0F6283A5805032045205512133B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral184564089B180E8C7DA73994F16811AF32F2EF89);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PreTrialState preTrialState = new();
		PreTrialState_t1C495298ED36B0F6283A5805032045205512133B* L_0 = (PreTrialState_t1C495298ED36B0F6283A5805032045205512133B*)il2cpp_codegen_object_new(PreTrialState_t1C495298ED36B0F6283A5805032045205512133B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PreTrialState__ctor_m9D383155AD1363CCA009E969F06FC58C9FEDF9AE(L_0, NULL);
		__this->___preTrialState_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___preTrialState_5), (void*)L_0);
		// public TrialState trialState = new();
		TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C* L_1 = (TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C*)il2cpp_codegen_object_new(TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TrialState__ctor_mB0DBAA652BAE6B24A04ABE98A43FC0BAF4CF5EB2(L_1, NULL);
		__this->___trialState_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trialState_6), (void*)L_1);
		// public PostTrialState postTrialState = new();
		PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B* L_2 = (PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B*)il2cpp_codegen_object_new(PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PostTrialState__ctor_m48D334CE6C26D1B3631CFB5D56989CA3D65771AB(L_2, NULL);
		__this->___postTrialState_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___postTrialState_7), (void*)L_2);
		// public IntroState introState = new();
		IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09* L_3 = (IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09*)il2cpp_codegen_object_new(IntroState_t5E66AC9B004601686482C9FD4A6D9BD51458EF09_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		IntroState__ctor_mC5F08CF8CC84B33ACB4FD0CA79DB944615A22654(L_3, NULL);
		__this->___introState_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___introState_8), (void*)L_3);
		// public string trialPhase = "IntroState";
		__this->___trialPhase_17 = _stringLiteral184564089B180E8C7DA73994F16811AF32F2EF89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trialPhase_17), (void*)_stringLiteral184564089B180E8C7DA73994F16811AF32F2EF89);
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
// System.Void ShowTrialState::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowTrialState_Start_m44D28328E05D82FB57DB88973C02EE9C5B393EFE (ShowTrialState_t39CD78C86788F15F30E0D5510924B43D6093D890* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05_m5CB247B3F5719D636588A5F8624F2EEB738F5FB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06_m317B15A80E10C15C4FFA7EC4CECCF117B6BA0FB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ED5B41C9401B67FC689C1091F59C38A94497869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral666AEAD691DCC31D7E446E0245735B51E3541C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71F1D2936EE4CAA270001C21DAD6D3665307D7E9);
		s_Il2CppMethodInitialized = true;
	}
	Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// stateManager =
		//     GameObject.Find(stateMgrName).GetComponent<TrialStateManager>();
		String_t* L_0 = __this->___stateMgrName_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_0, NULL);
		NullCheck(L_1);
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_2;
		L_2 = GameObject_GetComponent_TisTrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06_m317B15A80E10C15C4FFA7EC4CECCF117B6BA0FB6(L_1, GameObject_GetComponent_TisTrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06_m317B15A80E10C15C4FFA7EC4CECCF117B6BA0FB6_RuntimeMethod_var);
		__this->___stateManager_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stateManager_4), (void*)L_2);
		// trialList = GameObject.Find(trialListName).GetComponent<TrialList>();
		String_t* L_3 = __this->___trialListName_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_3, NULL);
		NullCheck(L_4);
		TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05* L_5;
		L_5 = GameObject_GetComponent_TisTrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05_m5CB247B3F5719D636588A5F8624F2EEB738F5FB0(L_4, GameObject_GetComponent_TisTrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05_m5CB247B3F5719D636588A5F8624F2EEB738F5FB0_RuntimeMethod_var);
		__this->___trialList_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trialList_5), (void*)L_5);
		// _text = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6;
		L_6 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->____text_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_6), (void*)L_6);
		// var currentTrial = trialList.GetCurrentTrial();
		TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05* L_7 = __this->___trialList_5;
		NullCheck(L_7);
		Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* L_8;
		L_8 = TrialList_GetCurrentTrial_mE3449ADB7FF0FAFC94D295D55909C31BCC1FDFE0(L_7, NULL);
		V_0 = L_8;
		// string _updatedText =
		//     "state: " +
		//     stateManager.trialPhase.ToString() +
		//     "\r\n" +
		//     currentTrial.GetTrialNumber().ToString() +
		//     "\r\n good trial? " +
		//     currentTrial.IsGoodTrial().ToString() +
		//     "\r\n Response? " +
		//     currentTrial.Response().ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral3ED5B41C9401B67FC689C1091F59C38A94497869);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3ED5B41C9401B67FC689C1091F59C38A94497869);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_12 = __this->___stateManager_4;
		NullCheck(L_12);
		String_t* L_13 = L_12->___trialPhase_17;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Trial_GetTrialNumber_mF6FE0261A13F714BA6FA15087BA549B2996B279F_inline(L_17, NULL);
		V_2 = L_18;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_16;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral71F1D2936EE4CAA270001C21DAD6D3665307D7E9);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral71F1D2936EE4CAA270001C21DAD6D3665307D7E9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* L_22 = V_0;
		NullCheck(L_22);
		bool L_23;
		L_23 = Trial_IsGoodTrial_m98B20BE7B0E710DC3E11FE7EF328EC3397C34747_inline(L_22, NULL);
		V_3 = L_23;
		String_t* L_24;
		L_24 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_3), NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_21;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral666AEAD691DCC31D7E446E0245735B51E3541C3E);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral666AEAD691DCC31D7E446E0245735B51E3541C3E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* L_27 = V_0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Trial_Response_m250BAEDAA3A15006DF842FC922413958C5419068_inline(L_27, NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_29);
		String_t* L_30;
		L_30 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_26, NULL);
		V_1 = L_30;
		// _text.text = _updatedText;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31 = __this->____text_6;
		String_t* L_32 = V_1;
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_31, L_32);
		// }
		return;
	}
}
// System.Void ShowTrialState::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowTrialState_UpdateText_mA1FEF4BCABDF7EC422F3E423E3A07A955248BAED (ShowTrialState_t39CD78C86788F15F30E0D5510924B43D6093D890* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ED5B41C9401B67FC689C1091F59C38A94497869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral666AEAD691DCC31D7E446E0245735B51E3541C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71F1D2936EE4CAA270001C21DAD6D3665307D7E9);
		s_Il2CppMethodInitialized = true;
	}
	Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// var currentTrial = trialList.GetCurrentTrial();
		TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05* L_0 = __this->___trialList_5;
		NullCheck(L_0);
		Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* L_1;
		L_1 = TrialList_GetCurrentTrial_mE3449ADB7FF0FAFC94D295D55909C31BCC1FDFE0(L_0, NULL);
		V_0 = L_1;
		// string _updatedText =
		//     "state: " +
		//     stateManager.trialPhase.ToString() +
		//     "\r\n" +
		//     currentTrial.GetTrialNumber().ToString() +
		//     "\r\n good trial? " +
		//     currentTrial.IsGoodTrial().ToString() +
		//     "\r\n Response? " +
		//     currentTrial.Response().ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3ED5B41C9401B67FC689C1091F59C38A94497869);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3ED5B41C9401B67FC689C1091F59C38A94497869);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_5 = __this->___stateManager_4;
		NullCheck(L_5);
		String_t* L_6 = L_5->___trialPhase_17;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Trial_GetTrialNumber_mF6FE0261A13F714BA6FA15087BA549B2996B279F_inline(L_10, NULL);
		V_2 = L_11;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral71F1D2936EE4CAA270001C21DAD6D3665307D7E9);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral71F1D2936EE4CAA270001C21DAD6D3665307D7E9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = Trial_IsGoodTrial_m98B20BE7B0E710DC3E11FE7EF328EC3397C34747_inline(L_15, NULL);
		V_3 = L_16;
		String_t* L_17;
		L_17 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_3), NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_14;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral666AEAD691DCC31D7E446E0245735B51E3541C3E);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral666AEAD691DCC31D7E446E0245735B51E3541C3E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Trial_Response_m250BAEDAA3A15006DF842FC922413958C5419068_inline(L_20, NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_22);
		String_t* L_23;
		L_23 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_19, NULL);
		V_1 = L_23;
		// _text.text = _updatedText;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_24 = __this->____text_6;
		String_t* L_25 = V_1;
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_24, L_25);
		// }
		return;
	}
}
// System.Void ShowTrialState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowTrialState__ctor_m1FD6E59B19D3DE9B20C9F5065F0ADBA88869DA19 (ShowTrialState_t39CD78C86788F15F30E0D5510924B43D6093D890* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral246D03E7F8D65327E31CD81FBB24FB158BDC2FDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FD52AE23C286DE14F6F87582B1B878240576D9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string stateMgrName = "stateManagerPrefab";
		__this->___stateMgrName_7 = _stringLiteral246D03E7F8D65327E31CD81FBB24FB158BDC2FDA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stateMgrName_7), (void*)_stringLiteral246D03E7F8D65327E31CD81FBB24FB158BDC2FDA);
		// private string trialListName = "trialListPrefab";
		__this->___trialListName_8 = _stringLiteral2FD52AE23C286DE14F6F87582B1B878240576D9D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trialListName_8), (void*)_stringLiteral2FD52AE23C286DE14F6F87582B1B878240576D9D);
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
// System.Void SwitchStateMgrManual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchStateMgrManual_Start_mB37BF4455D76CF2DD72ACF63C91357789D73B6D8 (SwitchStateMgrManual_t263081FFEC4C462A0A751D3ED9E446F25F1C7691* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06_m317B15A80E10C15C4FFA7EC4CECCF117B6BA0FB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statemgr = GameObject.Find(stateMgrName).GetComponent<TrialStateManager>();
		String_t* L_0 = __this->___stateMgrName_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_0, NULL);
		NullCheck(L_1);
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_2;
		L_2 = GameObject_GetComponent_TisTrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06_m317B15A80E10C15C4FFA7EC4CECCF117B6BA0FB6(L_1, GameObject_GetComponent_TisTrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06_m317B15A80E10C15C4FFA7EC4CECCF117B6BA0FB6_RuntimeMethod_var);
		__this->___statemgr_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___statemgr_4), (void*)L_2);
		// }
		return;
	}
}
// System.Void SwitchStateMgrManual::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchStateMgrManual_Update_m224F1822EFA872BEF4EA94541FB7D89F36D614D4 (SwitchStateMgrManual_t263081FFEC4C462A0A751D3ED9E446F25F1C7691* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SwitchStateMgrManual::StartTrial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchStateMgrManual_StartTrial_m054002BB8D93BF067880F6A6334FA0B913E5B6C4 (SwitchStateMgrManual_t263081FFEC4C462A0A751D3ED9E446F25F1C7691* __this, const RuntimeMethod* method) 
{
	{
		// statemgr.SwitchState(statemgr.trialState);
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = __this->___statemgr_4;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_1 = __this->___statemgr_4;
		NullCheck(L_1);
		TrialState_t0F6AC170AC09F645CC8C1554BDC7E53A89449D1C* L_2 = L_1->___trialState_6;
		NullCheck(L_0);
		TrialStateManager_SwitchState_mF53347D8B7C02C7613932CC07BB3FA35CB4D2A62(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void SwitchStateMgrManual::EndTrial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchStateMgrManual_EndTrial_mA267AC9512232DFE338D0B83148AB5EA2BA58B85 (SwitchStateMgrManual_t263081FFEC4C462A0A751D3ED9E446F25F1C7691* __this, const RuntimeMethod* method) 
{
	{
		// statemgr.SwitchState(statemgr.postTrialState);
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = __this->___statemgr_4;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_1 = __this->___statemgr_4;
		NullCheck(L_1);
		PostTrialState_t16BF0A069D0762302860EF2E840C752AD451DB2B* L_2 = L_1->___postTrialState_7;
		NullCheck(L_0);
		TrialStateManager_SwitchState_mF53347D8B7C02C7613932CC07BB3FA35CB4D2A62(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void SwitchStateMgrManual::RestartTrial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchStateMgrManual_RestartTrial_m2D4F50364F50659B42463059CC01C9DC3D8835A5 (SwitchStateMgrManual_t263081FFEC4C462A0A751D3ED9E446F25F1C7691* __this, const RuntimeMethod* method) 
{
	{
		// statemgr.SwitchState(statemgr.preTrialState);
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_0 = __this->___statemgr_4;
		TrialStateManager_tCCF596B63A914D1C18E8CDBE5243112B9DF5BC06* L_1 = __this->___statemgr_4;
		NullCheck(L_1);
		PreTrialState_t1C495298ED36B0F6283A5805032045205512133B* L_2 = L_1->___preTrialState_5;
		NullCheck(L_0);
		TrialStateManager_SwitchState_mF53347D8B7C02C7613932CC07BB3FA35CB4D2A62(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void SwitchStateMgrManual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchStateMgrManual__ctor_m083EA3B9662C2B1BB922C2D88E8B7B49F65203E4 (SwitchStateMgrManual_t263081FFEC4C462A0A751D3ED9E446F25F1C7691* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB60B5EDA806699B8F084BC1794FB3471600F8A9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string stateMgrName = "trialStateManagerPrefab";
		__this->___stateMgrName_5 = _stringLiteralB60B5EDA806699B8F084BC1794FB3471600F8A9B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stateMgrName_5), (void*)_stringLiteralB60B5EDA806699B8F084BC1794FB3471600F8A9B);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Trial_IsGoodTrial_m98B20BE7B0E710DC3E11FE7EF328EC3397C34747_inline (Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsGoodTrial() { return this.isGoodTrial; }
		bool L_0 = __this->___isGoodTrial_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Trial_GetTrialNumber_mF6FE0261A13F714BA6FA15087BA549B2996B279F_inline (Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* __this, const RuntimeMethod* method) 
{
	{
		// public int GetTrialNumber() { return this.trialNumber; }
		int32_t L_0 = __this->___trialNumber_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Trial_Response_m250BAEDAA3A15006DF842FC922413958C5419068_inline (Trial_tA2D2FC6F06BE8EC0ECFDD5A2A941F4A06C622468* __this, const RuntimeMethod* method) 
{
	{
		// public string Response() { return this.response; }
		String_t* L_0 = __this->___response_2;
		return L_0;
	}
}
