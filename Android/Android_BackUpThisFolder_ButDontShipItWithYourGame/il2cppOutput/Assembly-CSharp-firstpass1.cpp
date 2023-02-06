#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.List`1<System.Collections.Hashtable>
struct List_1_t2A52E5C00B98CBC8D02BF94A380F75023D0D130B;
// System.Char[][]
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680;
// System.Char[,][]
struct CharU5BU2CU5DU5BU5D_tCC4725677889E532145DE17FC1F327B801A977F7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Rect[]
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// LSL.liblsl/StreamInfo[]
struct StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E;
// System.Char[,]
struct CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790;
// UnityEngine.Color[,]
struct ColorU5BU2CU5D_t3D6E7A083540AE9726FD6FD9693C85DFCDD8C89E;
// System.Double[,]
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;
// System.Int16[,]
struct Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E;
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;
// System.IntPtr[,]
struct IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E;
// System.Single[,]
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;
// System.String[,]
struct StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF;
// System.UInt32[,]
struct UInt32U5BU2CU5D_tCF36040D01374DE23B670D815BB4F2D422F03C33;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveSample
struct MoveSample_t50EAFDCE364F9950AA2E88DAEE7B78A0747C7CC9;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// RotateSample
struct RotateSample_t71FFD1FB1ED948DF554ECFD369AF2653DA5CCE7E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SampleInfo
struct SampleInfo_t8E7DD1A4BE08B1D6F4BDF7D6D9E53BE34ACAB64F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.TimeoutException
struct TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// iTween
struct iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE;
// LSL.liblsl
struct liblsl_t996B96A1A007F53B8B4275C93EE566BC9692EAF5;
// iTween/<Start>d__229
struct U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4;
// iTween/<TweenDelay>d__145
struct U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F;
// iTween/<TweenRestart>d__147
struct U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D;
// iTween/ApplyTween
struct ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE;
// iTween/CRSpline
struct CRSpline_t26884C694A4F5F7B7AA807B24360E25525FD6FF9;
// iTween/EasingFunction
struct EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A;
// LSL.liblsl/ContinuousResolver
struct ContinuousResolver_tBB02F2FABFA42B9399368A2177445CD29AFA78D8;
// LSL.liblsl/InternalException
struct InternalException_t62CBC9B5AE0095D52E1F032889AAA37FAD6D7FFA;
// LSL.liblsl/LostException
struct LostException_tC87FD7F8B17326CBFC0F3459C72D29B93E110703;
// LSL.liblsl/StreamInfo
struct StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F;
// LSL.liblsl/StreamInlet
struct StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD;
// LSL.liblsl/StreamOutlet
struct StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022;
// LSL.liblsl/dll
struct dll_t127607288F9669FDDDFACBCCE160C29EBC80CB83;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalException_t62CBC9B5AE0095D52E1F032889AAA37FAD6D7FFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LostException_tC87FD7F8B17326CBFC0F3459C72D29B93E110703_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral183F7C4E265E7DB93DEEF70EE53BC5C9D37ACD15;
IL2CPP_EXTERN_C String_t* _stringLiteral1A2CC37DDC5F3BB20ABA156EB40A3ABE9A0B1A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral1A50D1F217AA1477CED3D0741B17A7AC50308E26;
IL2CPP_EXTERN_C String_t* _stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692;
IL2CPP_EXTERN_C String_t* _stringLiteral3D0B19827752B6BECE6F3A397A67EFE100FAAC25;
IL2CPP_EXTERN_C String_t* _stringLiteral6F79F0FED4C4F782C62F985F43C94898ACDB9A69;
IL2CPP_EXTERN_C String_t* _stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951;
IL2CPP_EXTERN_C String_t* _stringLiteral9D8B4DFFDB947E6D4B163F0D5979DD072954B0E1;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF5CCB606FFC9C7594EFDAD73973DAE994E50D5;
IL2CPP_EXTERN_C String_t* _stringLiteralB0658EBD7117F5F9DCFBFF0FBF0210D62373F387;
IL2CPP_EXTERN_C String_t* _stringLiteralBDABE160FEA5C7408D72E2209F8998D1C1A855FF;
IL2CPP_EXTERN_C String_t* _stringLiteralCCFA21CBF3E84E63D329B0BDD8970B5CAD893616;
IL2CPP_EXTERN_C String_t* _stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F;
IL2CPP_EXTERN_C String_t* _stringLiteralE80F6E8491010499B7D49D765924D7ACBD9F9967;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__229_System_Collections_IEnumerator_Reset_m7BEDB379CCDE93F1E7A5212B53EC08F7DC3139BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTweenDelayU3Ed__145_System_Collections_IEnumerator_Reset_mE6863E87B5732E6CBD616214F8B73B5C7D79A18B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTweenRestartU3Ed__147_System_Collections_IEnumerator_Reset_m37C6D0A2AC74B39F51336822927A5641BD478167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680;
struct CharU5BU2CU5DU5BU5D_tCC4725677889E532145DE17FC1F327B801A977F7;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E;
struct CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790;
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;
struct Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E;
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;
struct IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E;
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;
struct StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF;
struct UInt32U5BU2CU5D_tCF36040D01374DE23B670D815BB4F2D422F03C33;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121  : public RuntimeObject
{
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// LSL.liblsl
struct liblsl_t996B96A1A007F53B8B4275C93EE566BC9692EAF5  : public RuntimeObject
{
};

// iTween/<Start>d__229
struct U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4  : public RuntimeObject
{
	// System.Int32 iTween/<Start>d__229::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object iTween/<Start>d__229::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// iTween iTween/<Start>d__229::<>4__this
	iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* ___U3CU3E4__this_2;
};

// iTween/<TweenDelay>d__145
struct U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F  : public RuntimeObject
{
	// System.Int32 iTween/<TweenDelay>d__145::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object iTween/<TweenDelay>d__145::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// iTween iTween/<TweenDelay>d__145::<>4__this
	iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* ___U3CU3E4__this_2;
};

// iTween/<TweenRestart>d__147
struct U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D  : public RuntimeObject
{
	// System.Int32 iTween/<TweenRestart>d__147::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object iTween/<TweenRestart>d__147::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// iTween iTween/<TweenRestart>d__147::<>4__this
	iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* ___U3CU3E4__this_2;
};

// iTween/CRSpline
struct CRSpline_t26884C694A4F5F7B7AA807B24360E25525FD6FF9  : public RuntimeObject
{
	// UnityEngine.Vector3[] iTween/CRSpline::pts
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___pts_0;
};

// LSL.liblsl/dll
struct dll_t127607288F9669FDDDFACBCCE160C29EBC80CB83  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// iTween/Defaults
struct Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE  : public RuntimeObject
{
};

// LSL.liblsl/ContinuousResolver
struct ContinuousResolver_tBB02F2FABFA42B9399368A2177445CD29AFA78D8  : public RuntimeObject
{
	// System.IntPtr LSL.liblsl/ContinuousResolver::obj
	intptr_t ___obj_0;
};

// LSL.liblsl/StreamInfo
struct StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F  : public RuntimeObject
{
	// System.IntPtr LSL.liblsl/StreamInfo::obj
	intptr_t ___obj_0;
};

// LSL.liblsl/StreamInlet
struct StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD  : public RuntimeObject
{
	// System.IntPtr LSL.liblsl/StreamInlet::obj
	intptr_t ___obj_0;
};

// LSL.liblsl/StreamOutlet
struct StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022  : public RuntimeObject
{
	// System.IntPtr LSL.liblsl/StreamOutlet::obj
	intptr_t ___obj_0;
};

// LSL.liblsl/XMLElement
struct XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 
{
	// System.IntPtr LSL.liblsl/XMLElement::obj
	intptr_t ___obj_0;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// LSL.liblsl/InternalException
struct InternalException_t62CBC9B5AE0095D52E1F032889AAA37FAD6D7FFA  : public Exception_t
{
};

// LSL.liblsl/LostException
struct LostException_tC87FD7F8B17326CBFC0F3459C72D29B93E110703  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.TimeoutException
struct TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// iTween/ApplyTween
struct ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE  : public MulticastDelegate_t
{
};

// iTween/EasingFunction
struct EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// MoveSample
struct MoveSample_t50EAFDCE364F9950AA2E88DAEE7B78A0747C7CC9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// RotateSample
struct RotateSample_t71FFD1FB1ED948DF554ECFD369AF2653DA5CCE7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SampleInfo
struct SampleInfo_t8E7DD1A4BE08B1D6F4BDF7D6D9E53BE34ACAB64F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// iTween
struct iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String iTween::id
	String_t* ___id_5;
	// System.String iTween::type
	String_t* ___type_6;
	// System.String iTween::method
	String_t* ___method_7;
	// iTween/EaseType iTween::easeType
	int32_t ___easeType_8;
	// System.Single iTween::time
	float ___time_9;
	// System.Single iTween::delay
	float ___delay_10;
	// iTween/LoopType iTween::loopType
	int32_t ___loopType_11;
	// System.Boolean iTween::isRunning
	bool ___isRunning_12;
	// System.Boolean iTween::isPaused
	bool ___isPaused_13;
	// System.String iTween::_name
	String_t* ____name_14;
	// System.Single iTween::runningTime
	float ___runningTime_15;
	// System.Single iTween::percentage
	float ___percentage_16;
	// System.Single iTween::delayStarted
	float ___delayStarted_17;
	// System.Boolean iTween::kinematic
	bool ___kinematic_18;
	// System.Boolean iTween::isLocal
	bool ___isLocal_19;
	// System.Boolean iTween::loop
	bool ___loop_20;
	// System.Boolean iTween::reverse
	bool ___reverse_21;
	// System.Boolean iTween::wasPaused
	bool ___wasPaused_22;
	// System.Boolean iTween::physics
	bool ___physics_23;
	// System.Collections.Hashtable iTween::tweenArguments
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___tweenArguments_24;
	// UnityEngine.Space iTween::space
	int32_t ___space_25;
	// iTween/EasingFunction iTween::ease
	EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* ___ease_26;
	// iTween/ApplyTween iTween::apply
	ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* ___apply_27;
	// UnityEngine.AudioSource iTween::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_28;
	// UnityEngine.Vector3[] iTween::vector3s
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vector3s_29;
	// UnityEngine.Vector2[] iTween::vector2s
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___vector2s_30;
	// UnityEngine.Color[,] iTween::colors
	ColorU5BU2CU5D_t3D6E7A083540AE9726FD6FD9693C85DFCDD8C89E* ___colors_31;
	// System.Single[] iTween::floats
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___floats_32;
	// UnityEngine.Rect[] iTween::rects
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ___rects_33;
	// iTween/CRSpline iTween::path
	CRSpline_t26884C694A4F5F7B7AA807B24360E25525FD6FF9* ___path_34;
	// UnityEngine.Vector3 iTween::preUpdate
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___preUpdate_35;
	// UnityEngine.Vector3 iTween::postUpdate
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___postUpdate_36;
	// iTween/NamedValueColor iTween::namedcolorvalue
	int32_t ___namedcolorvalue_37;
	// System.Single iTween::lastRealTime
	float ___lastRealTime_38;
	// System.Boolean iTween::useRealTime
	bool ___useRealTime_39;
	// UnityEngine.Transform iTween::thisTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___thisTransform_40;
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// <PrivateImplementationDetails>

// <PrivateImplementationDetails>

// UnityEngine.GUILayoutOption

// UnityEngine.GUILayoutOption

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.Hashtable

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// LSL.liblsl

// LSL.liblsl

// iTween/<Start>d__229

// iTween/<Start>d__229

// iTween/<TweenDelay>d__145

// iTween/<TweenDelay>d__145

// iTween/<TweenRestart>d__147

// iTween/<TweenRestart>d__147

// iTween/CRSpline

// iTween/CRSpline

// LSL.liblsl/dll

// LSL.liblsl/dll

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// System.UInt32

// System.UInt32

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

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// iTween/Defaults
struct Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields
{
	// System.Single iTween/Defaults::time
	float ___time_0;
	// System.Single iTween/Defaults::delay
	float ___delay_1;
	// iTween/NamedValueColor iTween/Defaults::namedColorValue
	int32_t ___namedColorValue_2;
	// iTween/LoopType iTween/Defaults::loopType
	int32_t ___loopType_3;
	// iTween/EaseType iTween/Defaults::easeType
	int32_t ___easeType_4;
	// System.Single iTween/Defaults::lookSpeed
	float ___lookSpeed_5;
	// System.Boolean iTween/Defaults::isLocal
	bool ___isLocal_6;
	// UnityEngine.Space iTween/Defaults::space
	int32_t ___space_7;
	// System.Boolean iTween/Defaults::orientToPath
	bool ___orientToPath_8;
	// UnityEngine.Color iTween/Defaults::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_9;
	// System.Single iTween/Defaults::updateTimePercentage
	float ___updateTimePercentage_10;
	// System.Single iTween/Defaults::updateTime
	float ___updateTime_11;
	// System.Single iTween/Defaults::lookAhead
	float ___lookAhead_12;
	// System.Boolean iTween/Defaults::useRealTime
	bool ___useRealTime_13;
	// UnityEngine.Vector3 iTween/Defaults::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_14;
};

// iTween/Defaults

// LSL.liblsl/ContinuousResolver

// LSL.liblsl/ContinuousResolver

// LSL.liblsl/StreamInfo

// LSL.liblsl/StreamInfo

// LSL.liblsl/StreamInlet

// LSL.liblsl/StreamInlet

// LSL.liblsl/StreamOutlet

// LSL.liblsl/StreamOutlet

// LSL.liblsl/XMLElement

// LSL.liblsl/XMLElement

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// LSL.liblsl/InternalException

// LSL.liblsl/InternalException

// LSL.liblsl/LostException

// LSL.liblsl/LostException

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// System.TimeoutException

// System.TimeoutException

// iTween/ApplyTween

// iTween/ApplyTween

// iTween/EasingFunction

// iTween/EasingFunction

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// MoveSample

// MoveSample

// RotateSample

// RotateSample

// SampleInfo

// SampleInfo

// iTween
struct iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE_StaticFields
{
	// System.Collections.Generic.List`1<System.Collections.Hashtable> iTween::tweens
	List_1_t2A52E5C00B98CBC8D02BF94A380F75023D0D130B* ___tweens_4;
};

// iTween
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
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
// LSL.liblsl/StreamInfo[]
struct StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E  : public RuntimeArray
{
	ALIGN_FIELD (8) StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* m_Items[1];

	inline StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
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
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
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
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
// System.Single[,]
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4  : public RuntimeArray
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
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Double[,]
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
	inline double GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F  : public RuntimeArray
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Int16[,]
struct Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
	inline int16_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int16_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int16_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Char[,]
struct CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
	inline Il2CppChar GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Il2CppChar value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Il2CppChar value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.String[,]
struct StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF  : public RuntimeArray
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
	inline String_t* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, String_t* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, String_t* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IntPtr[,]
struct IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
	inline intptr_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, intptr_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, intptr_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Char[][]
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680  : public RuntimeArray
{
	ALIGN_FIELD (8) CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* m_Items[1];

	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[,][]
struct CharU5BU2CU5DU5BU5D_tCC4725677889E532145DE17FC1F327B801A977F7  : public RuntimeArray
{
	ALIGN_FIELD (8) CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* m_Items[1];

	inline CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[,]
struct UInt32U5BU2CU5D_tCF36040D01374DE23B670D815BB4F2D422F03C33  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
	inline uint32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, uint32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, uint32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Hashtable iTween::Hash(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* iTween_Hash_mA98A304100D620AA434A2CB5277FE060498BBD7D (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Void iTween::MoveBy(UnityEngine.GameObject,System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iTween_MoveBy_mD42756F0CC55A0DF39BFA08B8298E076CD377B53 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___1_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void iTween::RotateBy(UnityEngine.GameObject,System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iTween_RotateBy_m5174001D7DC2ADDA5D225458FDD23CE9724C4A20 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___1_args, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B (String_t* ___0_text, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___1_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___0_options, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E (String_t* ___0_text, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___1_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0 (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void iTween::TweenStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iTween_TweenStart_mB5252F8A233491758874358A5D10BC91E236ABB5 (iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_protocol_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_protocol_version_mAE5938B00376F54653433FF698563E28D658DF6F (const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_library_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_library_version_mC37D0B7214261016D2DB4651BA697497AE6C8BEA (const RuntimeMethod* method) ;
// System.Double LSL.liblsl/dll::lsl_local_clock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_local_clock_mE350521C11650AD9A7678649DBDE1D8D845A3A67 (const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_resolve_all(System.IntPtr[],System.UInt32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_resolve_all_mA3CB5A96360DE2530CF84E5FCDFBA70839FCEE40 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_buffer, uint32_t ___1_buffer_elements, double ___2_wait_time, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/StreamInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamInfo__ctor_m27903FA04B0B7B11F75CE51C857174672653820C (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_resolve_byprop(System.IntPtr[],System.UInt32,System.String,System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_resolve_byprop_mC6E3F3E5558217E16E85525B321B9CEE2676605D (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_buffer, uint32_t ___1_buffer_elements, String_t* ___2_prop, String_t* ___3_value, int32_t ___4_minimum, double ___5_wait_time, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_resolve_bypred(System.IntPtr[],System.UInt32,System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_resolve_bypred_m967EE07F45E3D1E04EC91F5C9C8147D7280F72CF (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_buffer, uint32_t ___1_buffer_elements, String_t* ___2_pred, int32_t ___3_minimum, double ___4_wait_time, const RuntimeMethod* method) ;
// System.Void System.TimeoutException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutException__ctor_mAC3BF713E7242641234A1E292C470655E1EFA964 (TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/LostException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostException__ctor_m54D90B4F732D3FE7DFC78813E38ADBCE75C16262 (LostException_tC87FD7F8B17326CBFC0F3459C72D29B93E110703* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/InternalException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalException__ctor_m05E9B87599B80C3FD2C1973C57C222042723CBCE (InternalException_t62CBC9B5AE0095D52E1F032889AAA37FAD6D7FFA* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_create_streaminfo(System.String,System.String,System.Int32,System.Double,LSL.liblsl/channel_format_t,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_create_streaminfo_mEE4186A1E190E507F93868F29451D7C9043D2E2B (String_t* ___0_name, String_t* ___1_type, int32_t ___2_channel_count, double ___3_nominal_srate, uint8_t ___4_channel_format, String_t* ___5_source_id, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_destroy_streaminfo(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_destroy_streaminfo_mA9D7FDAE837CDA23C19D07F9B675FB42088D8692 (intptr_t ___0_info, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_get_name(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_name_mE68CBD63A14500F5F4394886D6B741951F76992F (intptr_t ___0_info, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_get_type(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_type_m53D7FC62DC021488359EE14787A643D8DCF0A097 (intptr_t ___0_info, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_get_channel_count(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_get_channel_count_m7134F1674F5BBDD322AE3D52B348AE18E9B8253E (intptr_t ___0_info, const RuntimeMethod* method) ;
// System.Double LSL.liblsl/dll::lsl_get_nominal_srate(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_get_nominal_srate_mB747CDCC73026871CC3BFAD467E806B3B4F2CC69 (intptr_t ___0_info, const RuntimeMethod* method) ;
// LSL.liblsl/channel_format_t LSL.liblsl/dll::lsl_get_channel_format(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t dll_lsl_get_channel_format_m2D4C88CAC687EA5EA3AF6EA2E1AAC6EC9E91437B (intptr_t ___0_info, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_get_source_id(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_source_id_m35E1FC777087D6EF0D39B3BF2166011797F663EA (intptr_t ___0_info, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_get_version(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_get_version_m1EF244954E414AE7FEECBBAF7C7864A8CCA965CA (intptr_t ___0_info, const RuntimeMethod* method) ;
// System.Double LSL.liblsl/dll::lsl_get_created_at(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_get_created_at_mBAA0BDC8E7AB886EF9CFC5A9714D6CA42AFE7964 (intptr_t ___0_info, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_get_uid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_uid_m22A8DA3B12F3AEBF386D06721BAEDB82642877C8 (intptr_t ___0_info, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_get_session_id(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_session_id_mE07D131FAA6F1BBB0ED768F425D01E0F97805BCD (intptr_t ___0_info, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_get_hostname(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_hostname_m3C7D3C0578950C8AE47B918CC4E3380410AEF430 (intptr_t ___0_info, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_get_desc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_desc_mEE633A65A890CBD1AAAEC1B3CBE79D55D6939CD4 (intptr_t ___0_info, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/XMLElement::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, intptr_t ___0_handle, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_get_xml(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_xml_m65D40CDA7CD624D049D29628AB66CA811F29FB54 (intptr_t ___0_info, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/dll::lsl_destroy_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_destroy_string_mDDB7FD1167084E601A82CE5644D5AB5314844C76 (intptr_t ___0_str, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/StreamInfo::handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t StreamInfo_handle_m60F4FBB3EA825815C55FEED9ED7AA1CBFD8185F5_inline (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_create_outlet(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_create_outlet_mD425A821973A7FCF002EC24F885249E742039917 (intptr_t ___0_info, int32_t ___1_chunk_size, int32_t ___2_max_buffered, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/dll::lsl_destroy_outlet(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_destroy_outlet_mF4D1A63C444696B689C2669CFD42901B4987B52E (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_sample_ftp(System.IntPtr,System.Single[],System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_sample_ftp_m3D2BA2ECBCB89109DBDBC1DD9BA9B87C4464816C (intptr_t ___0_obj, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_data, double ___2_timestamp, int32_t ___3_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_sample_dtp(System.IntPtr,System.Double[],System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_sample_dtp_m014B9A6F4D8F73689124E84CBFD8D514057AE67A (intptr_t ___0_obj, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_data, double ___2_timestamp, int32_t ___3_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_sample_itp(System.IntPtr,System.Int32[],System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_sample_itp_m0A71969B78EE52A2D89DCACCFB10248AA44E5A02 (intptr_t ___0_obj, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_data, double ___2_timestamp, int32_t ___3_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_sample_stp(System.IntPtr,System.Int16[],System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_sample_stp_mC8598E1C6A69F031CB09258024E5BE5AC1813CD2 (intptr_t ___0_obj, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___1_data, double ___2_timestamp, int32_t ___3_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_sample_ctp(System.IntPtr,System.Char[],System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_sample_ctp_mB57C7CBA74EA9055CC4A6E6673567E0BD63D17C2 (intptr_t ___0_obj, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___1_data, double ___2_timestamp, int32_t ___3_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_sample_strtp(System.IntPtr,System.String[],System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_sample_strtp_m9370E5DA39ECD637CB24B54AE2806D3BD3F92DC8 (intptr_t ___0_obj, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_data, double ___2_timestamp, int32_t ___3_pushthrough, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_ftp(System.IntPtr,System.Single[,],System.UInt32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_ftp_m96081403822D28F62877A8E03A249B34739B4F9C (intptr_t ___0_obj, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___1_data, uint32_t ___2_data_elements, double ___3_timestamp, int32_t ___4_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_dtp(System.IntPtr,System.Double[,],System.UInt32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_dtp_mC271190B7CDB9A63EDC90A37E9C268A8D0D53194 (intptr_t ___0_obj, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___1_data, uint32_t ___2_data_elements, double ___3_timestamp, int32_t ___4_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_itp(System.IntPtr,System.Int32[,],System.UInt32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_itp_m3195C6772C50F1EBAD9D92C824A31DA5766FAAA4 (intptr_t ___0_obj, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___1_data, uint32_t ___2_data_elements, double ___3_timestamp, int32_t ___4_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_stp(System.IntPtr,System.Int16[,],System.UInt32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_stp_m0141AB8348949EAB3000404BC5CF82E1E2A09322 (intptr_t ___0_obj, Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* ___1_data, uint32_t ___2_data_elements, double ___3_timestamp, int32_t ___4_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_ctp(System.IntPtr,System.Char[,],System.UInt32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_ctp_m6267D0F9CB1201FE30812AC75C7BAF87E6870981 (intptr_t ___0_obj, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* ___1_data, uint32_t ___2_data_elements, double ___3_timestamp, int32_t ___4_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_strtp(System.IntPtr,System.String[,],System.UInt32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_strtp_mE6E231CBD12C14DBF68DA5C655D6CE8D202AA2BF (intptr_t ___0_obj, StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* ___1_data, uint32_t ___2_data_elements, double ___3_timestamp, int32_t ___4_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_ftnp(System.IntPtr,System.Single[,],System.UInt32,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_ftnp_m6AC024F97219BAAEF21E65271D5F720292AF0E60 (intptr_t ___0_obj, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___1_data, uint32_t ___2_data_elements, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_timestamps, int32_t ___4_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_dtnp(System.IntPtr,System.Double[,],System.UInt32,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_dtnp_mA495949A7C521F461557C1B6ACE787D0EF0DA34E (intptr_t ___0_obj, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___1_data, uint32_t ___2_data_elements, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_timestamps, int32_t ___4_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_itnp(System.IntPtr,System.Int32[,],System.UInt32,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_itnp_mA10442375713DDD11365371584EBD75671466DF5 (intptr_t ___0_obj, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___1_data, uint32_t ___2_data_elements, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_timestamps, int32_t ___4_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_stnp(System.IntPtr,System.Int16[,],System.UInt32,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_stnp_mA7027EEAE1FCA3F4C560141D90C94E44D410BE6D (intptr_t ___0_obj, Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* ___1_data, uint32_t ___2_data_elements, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_timestamps, int32_t ___4_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_ctnp(System.IntPtr,System.Char[,],System.UInt32,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_ctnp_mD3E65743C0E1259B7A89AE31BF1710848C0DBEB1 (intptr_t ___0_obj, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* ___1_data, uint32_t ___2_data_elements, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_timestamps, int32_t ___4_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_strtnp(System.IntPtr,System.String[,],System.UInt32,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_strtnp_m1C9E5E0D60FA5782A18D522835674A8F311582BE (intptr_t ___0_obj, StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* ___1_data, uint32_t ___2_data_elements, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_timestamps, int32_t ___4_pushthrough, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_have_consumers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_have_consumers_mA508BBD02ECE4D57323DF98EC530CD6B8D699003 (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_wait_for_consumers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_wait_for_consumers_m00B5A15B65134DA1F7A1BDB11A8BC36A9995770C (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_get_info(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_info_m8FE185F12CA752C3440CE6B45BB0B62E9809D886 (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_create_inlet(System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_create_inlet_mF89B755ACA052D1DABE52CAF1A1A246A8FF87775 (intptr_t ___0_info, int32_t ___1_max_buflen, int32_t ___2_max_chunklen, int32_t ___3_recover, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_set_postprocessing(System.IntPtr,LSL.liblsl/processing_options_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_set_postprocessing_mB23AA5AABA710D394652998493D8827736959450 (intptr_t ___0_obj, uint8_t ___1_flags, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/dll::lsl_destroy_inlet(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_destroy_inlet_m1F9040D05AF80EC51DE0A3B86E260FF8F6E26605 (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_get_fullinfo(System.IntPtr,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_fullinfo_mC3333A2D50A83F08D4F5A43F158DF42629C3B4DA (intptr_t ___0_obj, double ___1_timeout, int32_t* ___2_ec, const RuntimeMethod* method) ;
// System.Void LSL.liblsl::check_error(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F (int32_t ___0_ec, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/dll::lsl_open_stream(System.IntPtr,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_open_stream_mF17E07032F1EE68EBE804A665D126253DF3A123F (intptr_t ___0_obj, double ___1_timeout, int32_t* ___2_ec, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/dll::lsl_close_stream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_close_stream_m7777BB875AF9EDDEFDAC40F573802AC34D3BE3B5 (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.Double LSL.liblsl/dll::lsl_time_correction(System.IntPtr,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_time_correction_mE0FDD7B24765756487755CDF297B79C82D29547A (intptr_t ___0_obj, double ___1_timeout, int32_t* ___2_ec, const RuntimeMethod* method) ;
// System.Double LSL.liblsl/dll::lsl_pull_sample_f(System.IntPtr,System.Single[],System.Int32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_pull_sample_f_m5840CC8145E0B2C50B56A0A31F12491186C06BE3 (intptr_t ___0_obj, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_buffer, int32_t ___2_buffer_elements, double ___3_timeout, int32_t* ___4_ec, const RuntimeMethod* method) ;
// System.Double LSL.liblsl/dll::lsl_pull_sample_d(System.IntPtr,System.Double[],System.Int32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_pull_sample_d_mF50561A968D240647484A2B5DA08F9D5B10D65FC (intptr_t ___0_obj, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_buffer, int32_t ___2_buffer_elements, double ___3_timeout, int32_t* ___4_ec, const RuntimeMethod* method) ;
// System.Double LSL.liblsl/dll::lsl_pull_sample_i(System.IntPtr,System.Int32[],System.Int32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_pull_sample_i_mBE6688C4738191342A0A59EBF0E7CDC7DC7858CB (intptr_t ___0_obj, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_buffer, int32_t ___2_buffer_elements, double ___3_timeout, int32_t* ___4_ec, const RuntimeMethod* method) ;
// System.Double LSL.liblsl/dll::lsl_pull_sample_s(System.IntPtr,System.Int16[],System.Int32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_pull_sample_s_m6564A49F2B3BF8C2FB0EB131C7E32D187038E3D7 (intptr_t ___0_obj, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___1_buffer, int32_t ___2_buffer_elements, double ___3_timeout, int32_t* ___4_ec, const RuntimeMethod* method) ;
// System.Double LSL.liblsl/dll::lsl_pull_sample_c(System.IntPtr,System.Char[],System.Int32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_pull_sample_c_mC0AD1F7B3B5367E738275D2F21308AE79364E750 (intptr_t ___0_obj, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___1_buffer, int32_t ___2_buffer_elements, double ___3_timeout, int32_t* ___4_ec, const RuntimeMethod* method) ;
// System.Double LSL.liblsl/dll::lsl_pull_sample_str(System.IntPtr,System.IntPtr[],System.Int32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_pull_sample_str_m739420C1DB61FAB37A8CE22CF904F5F119D5C896 (intptr_t ___0_obj, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___1_buffer, int32_t ___2_buffer_elements, double ___3_timeout, int32_t* ___4_ec, const RuntimeMethod* method) ;
// System.UInt32 LSL.liblsl/dll::lsl_pull_chunk_f(System.IntPtr,System.Single[,],System.Double[],System.UInt32,System.UInt32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_pull_chunk_f_mF04FD34180EA5ED1FDF1BD3A29E54800E15593EF (intptr_t ___0_obj, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___1_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_timestamp_buffer, uint32_t ___3_data_buffer_elements, uint32_t ___4_timestamp_buffer_elements, double ___5_timeout, int32_t* ___6_ec, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
// System.UInt32 LSL.liblsl/dll::lsl_pull_chunk_d(System.IntPtr,System.Double[,],System.Double[],System.UInt32,System.UInt32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_pull_chunk_d_m2FB93A958E25BE609156D2764B479BB55CCA1623 (intptr_t ___0_obj, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___1_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_timestamp_buffer, uint32_t ___3_data_buffer_elements, uint32_t ___4_timestamp_buffer_elements, double ___5_timeout, int32_t* ___6_ec, const RuntimeMethod* method) ;
// System.UInt32 LSL.liblsl/dll::lsl_pull_chunk_i(System.IntPtr,System.Int32[,],System.Double[],System.UInt32,System.UInt32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_pull_chunk_i_mA36D4B95D5BF47511CE1453E450DE12DAF4CF7E2 (intptr_t ___0_obj, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___1_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_timestamp_buffer, uint32_t ___3_data_buffer_elements, uint32_t ___4_timestamp_buffer_elements, double ___5_timeout, int32_t* ___6_ec, const RuntimeMethod* method) ;
// System.UInt32 LSL.liblsl/dll::lsl_pull_chunk_s(System.IntPtr,System.Int16[,],System.Double[],System.UInt32,System.UInt32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_pull_chunk_s_m5FC56F49EA70EE804D6C1D15ACFFFCC89E092B0A (intptr_t ___0_obj, Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* ___1_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_timestamp_buffer, uint32_t ___3_data_buffer_elements, uint32_t ___4_timestamp_buffer_elements, double ___5_timeout, int32_t* ___6_ec, const RuntimeMethod* method) ;
// System.UInt32 LSL.liblsl/dll::lsl_pull_chunk_c(System.IntPtr,System.Char[,],System.Double[],System.UInt32,System.UInt32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_pull_chunk_c_m76B92C3FEFA7642FD62E641B6750277207C47EF5 (intptr_t ___0_obj, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* ___1_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_timestamp_buffer, uint32_t ___3_data_buffer_elements, uint32_t ___4_timestamp_buffer_elements, double ___5_timeout, int32_t* ___6_ec, const RuntimeMethod* method) ;
// System.UInt32 LSL.liblsl/dll::lsl_pull_chunk_str(System.IntPtr,System.IntPtr[,],System.Double[],System.UInt32,System.UInt32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_pull_chunk_str_mF1D0F280DCDAA9F0DD7462DBB1B12D3DFBA4B141 (intptr_t ___0_obj, IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E* ___1_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_timestamp_buffer, uint32_t ___3_data_buffer_elements, uint32_t ___4_timestamp_buffer_elements, double ___5_timeout, int32_t* ___6_ec, const RuntimeMethod* method) ;
// System.UInt32 LSL.liblsl/dll::lsl_samples_available(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_samples_available_m6FF6EA7A8A8D2397ADD7F6D7C73E8F07B29CA896 (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.UInt32 LSL.liblsl/dll::lsl_was_clock_reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_was_clock_reset_mDD4FFB3B3CE463E95493CA728EE2CF1D430E53FF (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_first_child(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_first_child_m7CD918D7F9BE640EC2B5DD38CE1646AD1F0214B3 (intptr_t ___0_e, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::first_child()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_first_child_mFB6AA56B9DD1E76105C7EFEEC5D55F5685DC03B3 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_last_child(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_last_child_m117ADF65E2AE9B2392DA35E50840FD554A5EE138 (intptr_t ___0_e, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::last_child()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_last_child_mA34715331376DC0708AA759741C9D39DCA54261E (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_next_sibling(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_next_sibling_m1DD81FD6D4EE5117BCD4676A40E98CF766D1B92A (intptr_t ___0_e, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::next_sibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_next_sibling_m6442252C8958919AE9A17CBDE97C6192564E21E0 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_previous_sibling(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_previous_sibling_m1DD2FF1826323E7F0E5637C10CD3DB60364FDFC8 (intptr_t ___0_e, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::previous_sibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_previous_sibling_m77C8A6308CE20BD3F5D0A4173A64A79FC5EDE023 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_parent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_parent_m1C7BA0420BC91DA0785A51B66F12B27D9B6E6043 (intptr_t ___0_e, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_parent_mC7A8DBEEDDF21DDC1A74FE78BFB2A91183AC4EF4 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_child(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_child_m9D6A8F930A211B62863089CA27C335BCF0AD8625 (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_child_m508E2F906B1F1AAA414B4A077CBEECB43797995C (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_next_sibling_n(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_next_sibling_n_mF7674016AAC2194187803D548AF279FD3BE35195 (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::next_sibling(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_next_sibling_m12C2558442E846CCCAB802B642D492C69677C18E (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_previous_sibling_n(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_previous_sibling_n_mAD60C70784B90854BEC348E3D9DD2D416118DE1B (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::previous_sibling(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_previous_sibling_m531BCBB58698652AAB16AA0FCBB86AA4BB40A774 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_empty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_empty_m48440A51C20892ADB505B2C979022A7DDC81FE96 (intptr_t ___0_e, const RuntimeMethod* method) ;
// System.Boolean LSL.liblsl/XMLElement::empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLElement_empty_m2D0E697AB77CE383CE1FC026CD6ED408AA95963A (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_is_text(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_is_text_mC561849ACE8BDD9C7A343D1C68D11C569AF91296 (intptr_t ___0_e, const RuntimeMethod* method) ;
// System.Boolean LSL.liblsl/XMLElement::is_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLElement_is_text_m6F5532A60E166256856027C39A0215DC12E6371D (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_name(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_name_m96A359F8D0E431D71638EFE47B8111267C41E8BA (intptr_t ___0_e, const RuntimeMethod* method) ;
// System.String LSL.liblsl/XMLElement::name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLElement_name_m9C8C9C8EF1B65B11B0E70A102EE43BFFA1F01B9F (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_value(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_value_m90B5ED8A2004BC0063308CB825A08530927F3D6F (intptr_t ___0_e, const RuntimeMethod* method) ;
// System.String LSL.liblsl/XMLElement::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLElement_value_mAA71140E308C39A4EBE0F858CE931D213364D427 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_child_value(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_child_value_mC57727F4F935D19D67ACE32D8943786977353D62 (intptr_t ___0_e, const RuntimeMethod* method) ;
// System.String LSL.liblsl/XMLElement::child_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLElement_child_value_m2A832DFB9A8D8E569B2BB838163E98D524807F73 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_child_value_n(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_child_value_n_mDC5D36CF48950916B3B40CB95CCC12C05C906D73 (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) ;
// System.String LSL.liblsl/XMLElement::child_value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLElement_child_value_mECCE13420009647F6C3D83F02A92313B3D3BE2D5 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_append_child_value(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_append_child_value_m6BD2BE72141AF4F09DD14B80FB1FE297077C14B3 (intptr_t ___0_e, String_t* ___1_name, String_t* ___2_value, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::append_child_value(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_append_child_value_mACD97C739BBF1E1ECA3F1B96A582404BA73AD880 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_prepend_child_value(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_prepend_child_value_m5E0A1BC418CC28CDE14362B7E2A965BFDB1CA394 (intptr_t ___0_e, String_t* ___1_name, String_t* ___2_value, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::prepend_child_value(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_prepend_child_value_m6FCC8974C391EEA45C9C3770B8786CD3D66E3BF4 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_set_child_value(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_set_child_value_m5441540DE146EF8ECF276E18D5E8C6D09B89EF04 (intptr_t ___0_e, String_t* ___1_name, String_t* ___2_value, const RuntimeMethod* method) ;
// System.Boolean LSL.liblsl/XMLElement::set_child_value(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLElement_set_child_value_m16C6A5A54B485EBECC810C5247A9A0A0F1AFFD05 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_set_name(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_set_name_mD89B1E0A6C5DC026CFE40B9F0F72515B5300EE7A (intptr_t ___0_e, String_t* ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean LSL.liblsl/XMLElement::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLElement_set_name_m179828D9C123E38667D2CABD6AE21A336E90C574 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_rhs, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_set_value(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_set_value_m42FFAF2B3E2400F32EDD2D78E15F95E062436806 (intptr_t ___0_e, String_t* ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean LSL.liblsl/XMLElement::set_value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLElement_set_value_m45EA0BE80A11E7DFEC7A8D73AA663B2209B11A29 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_rhs, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_append_child(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_append_child_mAD03EC0D3963839197D11FDCBDF56267C1D89897 (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::append_child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_append_child_m354E54DDF95E2A9C1D85CACE0D9735BB3875BA65 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_prepend_child(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_prepend_child_m662F88AAA69A851A82A3B4390A831D40E8174D43 (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::prepend_child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_prepend_child_m32866A181FE530FB9FA5D31CD4F0A3C8CFC27263 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_append_copy(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_append_copy_mAB0A84C4D6A7020BBF0E6C089B31B296D5B45392 (intptr_t ___0_e, intptr_t ___1_e2, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::append_copy(LSL.liblsl/XMLElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_append_copy_mC02D638CAA862EF32D6C5EE05CB12A9A2E5959F5 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 ___0_e, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_prepend_copy(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_prepend_copy_mCB4D515F87870985BCD022894F781B232EACA254 (intptr_t ___0_e, intptr_t ___1_e2, const RuntimeMethod* method) ;
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::prepend_copy(LSL.liblsl/XMLElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_prepend_copy_m0E4021EC81FA4A9AE4CE44ACE9F663BD4DD39084 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 ___0_e, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/dll::lsl_remove_child_n(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_remove_child_n_m82A57F31803DD8F4631D8F8D3988887834D4B533 (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/XMLElement::remove_child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLElement_remove_child_m4C57ABA865B892872CE6AFC038AFBF28090B8317 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/dll::lsl_remove_child(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_remove_child_m94954DEE964A448597A9FF52F99B3DB2A07A350C (intptr_t ___0_e, intptr_t ___1_e2, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/XMLElement::remove_child(LSL.liblsl/XMLElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLElement_remove_child_mDB2F8637ECDD39313283E1BC1CDB16CFC87C96CD (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 ___0_e, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_create_continuous_resolver(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_create_continuous_resolver_mDF0013DADF1FBECFEE9649F72061A2ACDB1F13B0 (double ___0_forget_after, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_create_continuous_resolver_byprop(System.String,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_create_continuous_resolver_byprop_m4CDE27287C89BA609B92E85D438C7CA0B1F45110 (String_t* ___0_prop, String_t* ___1_value, double ___2_forget_after, const RuntimeMethod* method) ;
// System.IntPtr LSL.liblsl/dll::lsl_create_continuous_resolver_bypred(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_create_continuous_resolver_bypred_mBA1D02F3FBB1281BFE056DAE7695E5AF728CA175 (String_t* ___0_pred, double ___1_forget_after, const RuntimeMethod* method) ;
// System.Void LSL.liblsl/dll::lsl_destroy_continuous_resolver(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_destroy_continuous_resolver_m769FCC1A3355F9A642E53A16D3212A22505E4304 (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.Int32 LSL.liblsl/dll::lsl_resolver_results(System.IntPtr,System.IntPtr[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_resolver_results_mA72EB8502CF5B0AA30C3834E5568AFEBEC94A39A (intptr_t ___0_obj, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___1_buffer, uint32_t ___2_buffer_elements, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_protocol_version();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_library_version();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C double CDECL lsl_local_clock();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_create_streaminfo(char*, char*, int32_t, double, uint8_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_destroy_streaminfo(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_get_name(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_get_type(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_get_channel_count(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C double CDECL lsl_get_nominal_srate(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C uint8_t CDECL lsl_get_channel_format(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_get_source_id(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_get_version(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C double CDECL lsl_get_created_at(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_get_uid(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_get_session_id(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_get_hostname(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_get_desc(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_get_xml(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_create_outlet(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C void CDECL lsl_destroy_outlet(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_sample_ftp(intptr_t, float*, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_sample_dtp(intptr_t, double*, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_sample_itp(intptr_t, int32_t*, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_sample_stp(intptr_t, int16_t*, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_sample_ctp(intptr_t, uint8_t*, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_sample_strtp(intptr_t, char**, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_sample_buftp(intptr_t, CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*, uint32_t*, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_ftp(intptr_t, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*, uint32_t, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_ftnp(intptr_t, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*, uint32_t, double*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_dtp(intptr_t, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*, uint32_t, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_dtnp(intptr_t, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*, uint32_t, double*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_itp(intptr_t, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*, uint32_t, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_itnp(intptr_t, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*, uint32_t, double*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_stp(intptr_t, Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E*, uint32_t, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_stnp(intptr_t, Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E*, uint32_t, double*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_ctp(intptr_t, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790*, uint32_t, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_ctnp(intptr_t, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790*, uint32_t, double*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_strtp(intptr_t, StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF*, uint32_t, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_strtnp(intptr_t, StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF*, uint32_t, double*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_buftp(intptr_t, CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*, uint32_t*, uint32_t, double, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_push_chunk_buftnp(intptr_t, CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*, uint32_t*, uint32_t, double*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_have_consumers(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_wait_for_consumers(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_get_info(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_resolve_all(intptr_t*, uint32_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_resolve_byprop(intptr_t*, uint32_t, char*, char*, int32_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_resolve_bypred(intptr_t*, uint32_t, char*, int32_t, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_create_inlet(intptr_t, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C void CDECL lsl_destroy_inlet(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_get_fullinfo(intptr_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C void CDECL lsl_open_stream(intptr_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C void CDECL lsl_close_stream(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C double CDECL lsl_time_correction(intptr_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_set_postprocessing(intptr_t, uint8_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C double CDECL lsl_pull_sample_f(intptr_t, float*, int32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C double CDECL lsl_pull_sample_d(intptr_t, double*, int32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C double CDECL lsl_pull_sample_i(intptr_t, int32_t*, int32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C double CDECL lsl_pull_sample_s(intptr_t, int16_t*, int32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C double CDECL lsl_pull_sample_c(intptr_t, uint8_t*, int32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C double CDECL lsl_pull_sample_str(intptr_t, intptr_t*, int32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C double CDECL lsl_pull_sample_buf(intptr_t, CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*, uint32_t*, int32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C void CDECL lsl_destroy_string(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL lsl_pull_chunk_f(intptr_t, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*, double*, uint32_t, uint32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL lsl_pull_chunk_d(intptr_t, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*, double*, uint32_t, uint32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL lsl_pull_chunk_i(intptr_t, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*, double*, uint32_t, uint32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL lsl_pull_chunk_s(intptr_t, Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E*, double*, uint32_t, uint32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL lsl_pull_chunk_c(intptr_t, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790*, double*, uint32_t, uint32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL lsl_pull_chunk_str(intptr_t, IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E*, double*, uint32_t, uint32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL lsl_pull_chunk_buf(intptr_t, CharU5BU2CU5DU5BU5D_tCC4725677889E532145DE17FC1F327B801A977F7*, UInt32U5BU2CU5D_tCF36040D01374DE23B670D815BB4F2D422F03C33*, double*, uint32_t, uint32_t, double, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL lsl_samples_available(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL lsl_was_clock_reset(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_first_child(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_last_child(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_next_sibling(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_previous_sibling(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_parent(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_child(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_next_sibling_n(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_previous_sibling_n(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_empty(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_is_text(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_name(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_value(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_child_value(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_child_value_n(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_append_child_value(intptr_t, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_prepend_child_value(intptr_t, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_set_child_value(intptr_t, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_set_name(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_set_value(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_append_child(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_prepend_child(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_append_copy(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_prepend_copy(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C void CDECL lsl_remove_child_n(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C void CDECL lsl_remove_child(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_create_continuous_resolver(double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_create_continuous_resolver_byprop(char*, char*, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL lsl_create_continuous_resolver_bypred(char*, double);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL lsl_resolver_results(intptr_t, intptr_t*, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
IL2CPP_EXTERN_C void CDECL lsl_destroy_continuous_resolver(intptr_t);
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
// System.Void MoveSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveSample_Start_m811917650C0CC675CC6798A0E78F3333D143EEE2 (MoveSample_t50EAFDCE364F9950AA2E88DAEE7B78A0747C7CC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDABE160FEA5C7408D72E2209F8998D1C1A855FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iTween.MoveBy(gameObject, iTween.Hash("x", 2, "easeType", "easeInOutExpo", "loopType", "pingPong", "delay", .1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = 2;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralBDABE160FEA5C7408D72E2209F8998D1C1A855FF);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteralBDABE160FEA5C7408D72E2209F8998D1C1A855FF);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)_stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		double L_12 = (0.10000000000000001);
		RuntimeObject* L_13 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_13);
		il2cpp_codegen_runtime_class_init_inline(iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE_il2cpp_TypeInfo_var);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_14;
		L_14 = iTween_Hash_mA98A304100D620AA434A2CB5277FE060498BBD7D(L_11, NULL);
		iTween_MoveBy_mD42756F0CC55A0DF39BFA08B8298E076CD377B53(L_0, L_14, NULL);
		// }
		return;
	}
}
// System.Void MoveSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveSample__ctor_mA33F8921CB254310C67D5DD25DD42B2FE6754F24 (MoveSample_t50EAFDCE364F9950AA2E88DAEE7B78A0747C7CC9* __this, const RuntimeMethod* method) 
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
// System.Void RotateSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSample_Start_m0A8E852DC8A300289EA0420F04A079395025D14D (RotateSample_t71FFD1FB1ED948DF554ECFD369AF2653DA5CCE7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCFA21CBF3E84E63D329B0BDD8970B5CAD893616);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iTween.RotateBy(gameObject, iTween.Hash("x", .25, "easeType", "easeInOutBack", "loopType", "pingPong", "delay", .4));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		double L_4 = (0.25);
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralD1CAF2FD7CC5FFB66D981890EC5474F03C3E417F);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralCCFA21CBF3E84E63D329B0BDD8970B5CAD893616);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteralCCFA21CBF3E84E63D329B0BDD8970B5CAD893616);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral1AE5A715D63570FA904E1F31CD7D5BF175213692);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)_stringLiteral79F0C5F03BB61E2F6249516603087180FCC55E1D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteral7EAA0DD4C277D27184E0F3D6A7709BE899C51951);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		double L_12 = (0.40000000000000002);
		RuntimeObject* L_13 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_13);
		il2cpp_codegen_runtime_class_init_inline(iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE_il2cpp_TypeInfo_var);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_14;
		L_14 = iTween_Hash_mA98A304100D620AA434A2CB5277FE060498BBD7D(L_11, NULL);
		iTween_RotateBy_m5174001D7DC2ADDA5D225458FDD23CE9724C4A20(L_0, L_14, NULL);
		// }
		return;
	}
}
// System.Void RotateSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateSample__ctor_m4AA775387D47F5B79B383266B2A6089B858C87CC (RotateSample_t71FFD1FB1ED948DF554ECFD369AF2653DA5CCE7E* __this, const RuntimeMethod* method) 
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
// System.Void SampleInfo::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleInfo_OnGUI_m0FE7127B70E2C60835E30205EEB551DAE1CD8AB7 (SampleInfo_t8E7DD1A4BE08B1D6F4BDF7D6D9E53BE34ACAB64F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A2CC37DDC5F3BB20ABA156EB40A3ABE9A0B1A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A50D1F217AA1477CED3D0741B17A7AC50308E26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE80F6E8491010499B7D49D765924D7ACBD9F9967);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUILayout.Label("iTween can spin, shake, punch, move, handle audio, fade color and transparency \nand much more with each task needing only one line of code.");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0;
		L_0 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteral1A50D1F217AA1477CED3D0741B17A7AC50308E26, L_0, NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_1;
		L_1 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_1, NULL);
		// GUILayout.Label("iTween works with C#, JavaScript and Boo. For full documentation and examples visit:");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_2;
		L_2 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteralE80F6E8491010499B7D49D765924D7ACBD9F9967, L_2, NULL);
		// if(GUILayout.Button("http://itween.pixelplacement.com")){
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_3;
		L_3 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_4;
		L_4 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteral1A2CC37DDC5F3BB20ABA156EB40A3ABE9A0B1A1B, L_3, NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		// Application.OpenURL("http://itween.pixelplacement.com");
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(_stringLiteral1A2CC37DDC5F3BB20ABA156EB40A3ABE9A0B1A1B, NULL);
	}

IL_0043:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		// }
		return;
	}
}
// System.Void SampleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleInfo__ctor_m40C2DE9743EE7BF329F12C5556C9996109677107 (SampleInfo_t8E7DD1A4BE08B1D6F4BDF7D6D9E53BE34ACAB64F* __this, const RuntimeMethod* method) 
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
float EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_Multicast(EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* currentDelegate = reinterpret_cast<EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, float, float, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_start, ___1_end, ___2_Value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_OpenInst(EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_start, ___1_end, ___2_Value, method);
}
float EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_OpenStatic(EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_start, ___1_end, ___2_Value, method);
}
float EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_OpenStaticInvoker(EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< float, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___0_start, ___1_end, ___2_Value);
}
float EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_ClosedStaticInvoker(EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< float, RuntimeObject*, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_start, ___1_end, ___2_Value);
}
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A (EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___0_start, ___1_end, ___2_Value);

	return returnValue;
}
// System.Void iTween/EasingFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasingFunction__ctor_m497978A316C82AF6C9B346BFBC8892EEA14D4E26 (EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A_Multicast;
}
// System.Single iTween/EasingFunction::Invoke(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingFunction_Invoke_m84683D25349BD2B9134147C48C3B85257A3CCC7A (EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_start, ___1_end, ___2_Value, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult iTween/EasingFunction::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EasingFunction_BeginInvoke_m29B96789E4181AF1A21B72003F0486D9DEE94E49 (EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, float ___0_start, float ___1_end, float ___2_Value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___0_start);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_end);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___2_Value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Single iTween/EasingFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingFunction_EndInvoke_m6DCA6FAEE37BE85EB2AD95693E5420F8FFEB273B (EasingFunction_tBB8E735FE937D3EED3124ECCA38015EB2FC13A0A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
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
void ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_Multicast(ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* currentDelegate = reinterpret_cast<ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_OpenInst(ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_OpenStatic(ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_OpenStaticInvoker(ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_ClosedStaticInvoker(ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE (ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void iTween/ApplyTween::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyTween__ctor_m525FF0AA40ADED0AC59F5BD794CD98666D539C1B (ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C_Multicast;
}
// System.Void iTween/ApplyTween::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyTween_Invoke_mFC327570301ECC2B148680688542EC261DECD16C (ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult iTween/ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ApplyTween_BeginInvoke_m0F111DBDF968D92CCAADB4CC53B483C56F9DF60C (ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void iTween/ApplyTween::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyTween_EndInvoke_mA91AA6232F984857701538C50F7082A3DEDDA6E8 (ApplyTween_t06B0C84616ECB97AF9EE7626ACB30120BEAF82CE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween/Defaults::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Defaults__cctor_mF78ADEF9B9CC2DF2625F6242F1278422AB157BB6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float time = 1f;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___time_0 = (1.0f);
		// public static float delay = 0f;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___delay_1 = (0.0f);
		// public static NamedValueColor namedColorValue = NamedValueColor._Color;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___namedColorValue_2 = 0;
		// public static LoopType loopType = LoopType.none;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___loopType_3 = 0;
		// public static EaseType easeType = iTween.EaseType.easeOutExpo;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___easeType_4 = ((int32_t)16);
		// public static float lookSpeed = 3f;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___lookSpeed_5 = (3.0f);
		// public static bool isLocal = false;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___isLocal_6 = (bool)0;
		// public static Space space = Space.Self;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___space_7 = 1;
		// public static bool orientToPath = false;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___orientToPath_8 = (bool)0;
		// public static Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___color_9 = L_0;
		// public static float updateTimePercentage = .05f;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___updateTimePercentage_10 = (0.0500000007f);
		// public static float updateTime = 1f*updateTimePercentage;
		float L_1 = ((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___updateTimePercentage_10;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___updateTime_11 = ((float)il2cpp_codegen_multiply((1.0f), L_1));
		// public static float lookAhead = .05f;
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___lookAhead_12 = (0.0500000007f);
		// public static bool useRealTime = false; // Added by PressPlay
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___useRealTime_13 = (bool)0;
		// public static Vector3 up = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		((Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tC6F516E693E35FE21466C7D8A419804F5DF5E5AE_il2cpp_TypeInfo_var))->___up_14 = L_2;
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
// System.Void iTween/CRSpline::.ctor(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRSpline__ctor_m24E1418A00A88BA911D3301A29F7C7A5E229CE39 (CRSpline_t26884C694A4F5F7B7AA807B24360E25525FD6FF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_pts, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CRSpline(params Vector3[] pts) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.pts = new Vector3[pts.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_pts;
		NullCheck(L_0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->___pts_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pts_0), (void*)L_1);
		// Array.Copy(pts, this.pts, pts.Length);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___0_pts;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___pts_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ___0_pts;
		NullCheck(L_4);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_2, (RuntimeArray*)L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 iTween/CRSpline::Interp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CRSpline_Interp_m1B887F4655AE6387B23D81EB85E1ADBF63DACC1A (CRSpline_t26884C694A4F5F7B7AA807B24360E25525FD6FF9* __this, float ___0_t, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// int numSections = pts.Length - 3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___pts_0;
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 3));
		// int currPt = Mathf.Min(Mathf.FloorToInt(t * (float) numSections), numSections - 1);
		float L_1 = ___0_t;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(L_1, ((float)L_2))), NULL);
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		V_1 = L_5;
		// float u = t * (float) numSections - (float) currPt;
		float L_6 = ___0_t;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_6, ((float)L_7))), ((float)L_8)));
		// Vector3 a = pts[currPt];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->___pts_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		// Vector3 b = pts[currPt + 1];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = __this->___pts_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		// Vector3 c = pts[currPt + 2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = __this->___pts_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_5 = L_20;
		// Vector3 d = pts[currPt + 3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = __this->___pts_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = L_24;
		// return .5f*((-a+3f*b-3f*c+d)*(u*u*u)+(2f*a-5f*b+4f*c-d)*(u*u)+(-a+c)*u+2f*b);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_29, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_33, NULL);
		float L_35 = V_2;
		float L_36 = V_2;
		float L_37 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_35, L_36)), L_37)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((5.0f), L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_40, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((4.0f), L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_46, L_47, NULL);
		float L_49 = V_2;
		float L_50 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_48, ((float)il2cpp_codegen_multiply(L_49, L_50)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_54, L_55, NULL);
		float L_57 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_56, L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_52, L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_59, L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.5f), L_62, NULL);
		return L_63;
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
// System.Void iTween/<TweenDelay>d__145::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__145__ctor_mBD8B0D260E078CB5EDEBB80B174D3F14CE6F7DDC (U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void iTween/<TweenDelay>d__145::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__145_System_IDisposable_Dispose_m87EDA8CB2254CFA0D98ACA0EDAC2624C3DBFCE2C (U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean iTween/<TweenDelay>d__145::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTweenDelayU3Ed__145_MoveNext_m3F9BEA5150328C01814E8349D5FCCD53DD596E31 (U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// delayStarted = Time.time;
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_4 = V_1;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		NullCheck(L_4);
		L_4->___delayStarted_17 = L_5;
		// yield return new WaitForSeconds (delay);
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___delay_10;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(wasPaused){
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = L_9->___wasPaused_22;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// wasPaused=false;
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_11 = V_1;
		NullCheck(L_11);
		L_11->___wasPaused_22 = (bool)0;
		// TweenStart();
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_12 = V_1;
		NullCheck(L_12);
		iTween_TweenStart_mB5252F8A233491758874358A5D10BC91E236ABB5(L_12, NULL);
	}

IL_005f:
	{
		// }
		return (bool)0;
	}
}
// System.Object iTween/<TweenDelay>d__145::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenDelayU3Ed__145_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBA283366C84D35E665521DAC905998EABD55F8EC (U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void iTween/<TweenDelay>d__145::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__145_System_Collections_IEnumerator_Reset_mE6863E87B5732E6CBD616214F8B73B5C7D79A18B (U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTweenDelayU3Ed__145_System_Collections_IEnumerator_Reset_mE6863E87B5732E6CBD616214F8B73B5C7D79A18B_RuntimeMethod_var)));
	}
}
// System.Object iTween/<TweenDelay>d__145::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenDelayU3Ed__145_System_Collections_IEnumerator_get_Current_m878DC4466A22B02C196B1EFF47A1AB48907909D9 (U3CTweenDelayU3Ed__145_t77BDBD3975A66311EBCF6E82383EA243DE13506F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void iTween/<TweenRestart>d__147::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__147__ctor_m7F496C121695B098A5B6DD0F1D140335B2897B71 (U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void iTween/<TweenRestart>d__147::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__147_System_IDisposable_Dispose_m34EFCBEC363A6F6EB9894F8EA3DFF243779E8BA7 (U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean iTween/<TweenRestart>d__147::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTweenRestartU3Ed__147_MoveNext_m9615D37F1455E7CD3D963DC3C26869696C257984 (U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(delay > 0){
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___delay_10;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		// delayStarted = Time.time;
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_6 = V_1;
		float L_7;
		L_7 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		NullCheck(L_6);
		L_6->___delayStarted_17 = L_7;
		// yield return new WaitForSeconds (delay);
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->___delay_10;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0050:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0057:
	{
		// loop=true;
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_11 = V_1;
		NullCheck(L_11);
		L_11->___loop_20 = (bool)1;
		// TweenStart();
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_12 = V_1;
		NullCheck(L_12);
		iTween_TweenStart_mB5252F8A233491758874358A5D10BC91E236ABB5(L_12, NULL);
		// }
		return (bool)0;
	}
}
// System.Object iTween/<TweenRestart>d__147::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenRestartU3Ed__147_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m476B163AFD1CC5AE4240DE3359E5E6B6F6438638 (U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void iTween/<TweenRestart>d__147::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__147_System_Collections_IEnumerator_Reset_m37C6D0A2AC74B39F51336822927A5641BD478167 (U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTweenRestartU3Ed__147_System_Collections_IEnumerator_Reset_m37C6D0A2AC74B39F51336822927A5641BD478167_RuntimeMethod_var)));
	}
}
// System.Object iTween/<TweenRestart>d__147::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenRestartU3Ed__147_System_Collections_IEnumerator_get_Current_m672D0843DA4ABCCABFCCACE6AA8176CE88D8D214 (U3CTweenRestartU3Ed__147_t10706E288BEC024AB744898346E39CE4E8A32A0D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void iTween/<Start>d__229::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__229__ctor_mAAA70693E11EBB135BDE0149E5B47CFAF756A44D (U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void iTween/<Start>d__229::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__229_System_IDisposable_Dispose_m775F2078970286A6B244C7FDA94A077050B62D05 (U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean iTween/<Start>d__229::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__229_MoveNext_mB6D3802677543F0FF965901080DE7EDE2CD0B304 (U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0658EBD7117F5F9DCFBFF0FBF0210D62373F387);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(delay > 0){
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___delay_10;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		// yield return StartCoroutine("TweenDelay");
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_6 = V_1;
		NullCheck(L_6);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_6, _stringLiteralB0658EBD7117F5F9DCFBFF0FBF0210D62373F387, NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_004c:
	{
		// TweenStart();
		iTween_tC88C6F153D4639FF44518ED4B54A2E44BC3DC6AE* L_8 = V_1;
		NullCheck(L_8);
		iTween_TweenStart_mB5252F8A233491758874358A5D10BC91E236ABB5(L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object iTween/<Start>d__229::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__229_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m42EA9CB2BB0AFD18CB9A84E78C9AEB28484E1DE6 (U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void iTween/<Start>d__229::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__229_System_Collections_IEnumerator_Reset_m7BEDB379CCDE93F1E7A5212B53EC08F7DC3139BB (U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__229_System_Collections_IEnumerator_Reset_m7BEDB379CCDE93F1E7A5212B53EC08F7DC3139BB_RuntimeMethod_var)));
	}
}
// System.Object iTween/<Start>d__229::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__229_System_Collections_IEnumerator_get_Current_m2615EDA80E389A056F6D878F7AC94709A40CDDAB (U3CStartU3Ed__229_t741A933892675C556025BE0668F7866BE8CEABC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Int32 LSL.liblsl::protocol_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t liblsl_protocol_version_mBA5599AFD9EA5566211C276155FBE75F8F94788E (const RuntimeMethod* method) 
{
	{
		// public static int protocol_version() { return dll.lsl_protocol_version(); }
		int32_t L_0;
		L_0 = dll_lsl_protocol_version_mAE5938B00376F54653433FF698563E28D658DF6F(NULL);
		return L_0;
	}
}
// System.Int32 LSL.liblsl::library_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t liblsl_library_version_m3AC293017F3C6A15FBA68C0521A407BF4D02BF2C (const RuntimeMethod* method) 
{
	{
		// public static int library_version() { return dll.lsl_library_version(); }
		int32_t L_0;
		L_0 = dll_lsl_library_version_mC37D0B7214261016D2DB4651BA697497AE6C8BEA(NULL);
		return L_0;
	}
}
// System.Double LSL.liblsl::local_clock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double liblsl_local_clock_m43E69575BB261CB5696E5AA90F27B3B09F8E6E7A (const RuntimeMethod* method) 
{
	{
		// public static double local_clock() { return dll.lsl_local_clock(); }
		double L_0;
		L_0 = dll_lsl_local_clock_mE350521C11650AD9A7678649DBDE1D8D845A3A67(NULL);
		return L_0;
	}
}
// LSL.liblsl/StreamInfo[] LSL.liblsl::resolve_streams(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* liblsl_resolve_streams_m79CE4C942E9D9DDACA3DEBEFB7C2D2DF5572EC7C (double ___0_wait_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	int32_t V_1 = 0;
	StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// IntPtr[] buf = new IntPtr[1024]; int num = dll.lsl_resolve_all(buf, (uint)buf.Length, wait_time);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		// IntPtr[] buf = new IntPtr[1024]; int num = dll.lsl_resolve_all(buf, (uint)buf.Length, wait_time);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = V_0;
		NullCheck(L_2);
		double L_3 = ___0_wait_time;
		int32_t L_4;
		L_4 = dll_lsl_resolve_all_mA3CB5A96360DE2530CF84E5FCDFBA70839FCEE40(L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3, NULL);
		V_1 = L_4;
		// StreamInfo[] res = new StreamInfo[num];
		int32_t L_5 = V_1;
		StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* L_6 = (StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E*)(StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E*)SZArrayNew(StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		// for (int k = 0; k < num; k++)
		V_3 = 0;
		goto IL_0030;
	}

IL_0021:
	{
		// res[k] = new StreamInfo(buf[k]);
		StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* L_7 = V_2;
		int32_t L_8 = V_3;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_9 = V_0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		intptr_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* L_13 = (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F*)il2cpp_codegen_object_new(StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StreamInfo__ctor_m27903FA04B0B7B11F75CE51C857174672653820C(L_13, L_12, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_13);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F*)L_13);
		// for (int k = 0; k < num; k++)
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0030:
	{
		// for (int k = 0; k < num; k++)
		int32_t L_15 = V_3;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0021;
		}
	}
	{
		// return res;
		StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* L_17 = V_2;
		return L_17;
	}
}
// LSL.liblsl/StreamInfo[] LSL.liblsl::resolve_stream(System.String,System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* liblsl_resolve_stream_m55CBE17A4AD652500B054739C6346944C410B1A6 (String_t* ___0_prop, String_t* ___1_value, int32_t ___2_minimum, double ___3_timeout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	int32_t V_1 = 0;
	StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// IntPtr[] buf = new IntPtr[1024]; int num = dll.lsl_resolve_byprop(buf, (uint)buf.Length, prop, value, minimum, timeout);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		// IntPtr[] buf = new IntPtr[1024]; int num = dll.lsl_resolve_byprop(buf, (uint)buf.Length, prop, value, minimum, timeout);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = ___0_prop;
		String_t* L_4 = ___1_value;
		int32_t L_5 = ___2_minimum;
		double L_6 = ___3_timeout;
		int32_t L_7;
		L_7 = dll_lsl_resolve_byprop_mC6E3F3E5558217E16E85525B321B9CEE2676605D(L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3, L_4, L_5, L_6, NULL);
		V_1 = L_7;
		// StreamInfo[] res = new StreamInfo[num];
		int32_t L_8 = V_1;
		StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* L_9 = (StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E*)(StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E*)SZArrayNew(StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		// for (int k = 0; k < num; k++)
		V_3 = 0;
		goto IL_0033;
	}

IL_0024:
	{
		// res[k] = new StreamInfo(buf[k]);
		StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* L_10 = V_2;
		int32_t L_11 = V_3;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		intptr_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* L_16 = (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F*)il2cpp_codegen_object_new(StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		StreamInfo__ctor_m27903FA04B0B7B11F75CE51C857174672653820C(L_16, L_15, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_16);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F*)L_16);
		// for (int k = 0; k < num; k++)
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0033:
	{
		// for (int k = 0; k < num; k++)
		int32_t L_18 = V_3;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0024;
		}
	}
	{
		// return res;
		StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* L_20 = V_2;
		return L_20;
	}
}
// LSL.liblsl/StreamInfo[] LSL.liblsl::resolve_stream(System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* liblsl_resolve_stream_mCB3F8750FBADA899DB3D8C87218DBCB9642BF037 (String_t* ___0_pred, int32_t ___1_minimum, double ___2_timeout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	int32_t V_1 = 0;
	StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// IntPtr[] buf = new IntPtr[1024]; int num = dll.lsl_resolve_bypred(buf, (uint)buf.Length, pred, minimum, timeout);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		// IntPtr[] buf = new IntPtr[1024]; int num = dll.lsl_resolve_bypred(buf, (uint)buf.Length, pred, minimum, timeout);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = ___0_pred;
		int32_t L_4 = ___1_minimum;
		double L_5 = ___2_timeout;
		int32_t L_6;
		L_6 = dll_lsl_resolve_bypred_m967EE07F45E3D1E04EC91F5C9C8147D7280F72CF(L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3, L_4, L_5, NULL);
		V_1 = L_6;
		// StreamInfo[] res = new StreamInfo[num];
		int32_t L_7 = V_1;
		StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* L_8 = (StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E*)(StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E*)SZArrayNew(StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_2 = L_8;
		// for (int k = 0; k < num; k++)
		V_3 = 0;
		goto IL_0032;
	}

IL_0023:
	{
		// res[k] = new StreamInfo(buf[k]);
		StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* L_9 = V_2;
		int32_t L_10 = V_3;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_11 = V_0;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		intptr_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* L_15 = (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F*)il2cpp_codegen_object_new(StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		StreamInfo__ctor_m27903FA04B0B7B11F75CE51C857174672653820C(L_15, L_14, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_15);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F*)L_15);
		// for (int k = 0; k < num; k++)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0032:
	{
		// for (int k = 0; k < num; k++)
		int32_t L_17 = V_3;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0023;
		}
	}
	{
		// return res;
		StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* L_19 = V_2;
		return L_19;
	}
}
// System.Void LSL.liblsl::check_error(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F (int32_t ___0_ec, const RuntimeMethod* method) 
{
	{
		// if (ec < 0)
		int32_t L_0 = ___0_ec;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_1 = ___0_ec;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)-4))))
		{
			case 0:
			{
				goto IL_0040;
			}
			case 1:
			{
				goto IL_0035;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_001f:
	{
		// case -1: throw new TimeoutException("The operation failed due to a timeout.");
		TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F* L_2 = (TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		TimeoutException__ctor_mAC3BF713E7242641234A1E292C470655E1EFA964(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6F79F0FED4C4F782C62F985F43C94898ACDB9A69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F_RuntimeMethod_var)));
	}

IL_002a:
	{
		// case -2: throw new LostException("The stream has been lost.");
		LostException_tC87FD7F8B17326CBFC0F3459C72D29B93E110703* L_3 = (LostException_tC87FD7F8B17326CBFC0F3459C72D29B93E110703*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LostException_tC87FD7F8B17326CBFC0F3459C72D29B93E110703_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		LostException__ctor_m54D90B4F732D3FE7DFC78813E38ADBCE75C16262(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFF5CCB606FFC9C7594EFDAD73973DAE994E50D5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F_RuntimeMethod_var)));
	}

IL_0035:
	{
		// case -3: throw new ArgumentException("An argument was incorrectly specified (e.g., wrong format or wrong length).");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral183F7C4E265E7DB93DEEF70EE53BC5C9D37ACD15)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F_RuntimeMethod_var)));
	}

IL_0040:
	{
		// case -4: throw new InternalException("An internal internal error has occurred.");
		InternalException_t62CBC9B5AE0095D52E1F032889AAA37FAD6D7FFA* L_5 = (InternalException_t62CBC9B5AE0095D52E1F032889AAA37FAD6D7FFA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalException_t62CBC9B5AE0095D52E1F032889AAA37FAD6D7FFA_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InternalException__ctor_m05E9B87599B80C3FD2C1973C57C222042723CBCE(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D8B4DFFDB947E6D4B163F0D5979DD072954B0E1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F_RuntimeMethod_var)));
	}

IL_004b:
	{
		// default: throw new Exception("An unknown error has occurred.");
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3D0B19827752B6BECE6F3A397A67EFE100FAAC25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F_RuntimeMethod_var)));
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void LSL.liblsl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void liblsl__ctor_m39F2FFC77364522363829A6B87E3269E5D4E2F69 (liblsl_t996B96A1A007F53B8B4275C93EE566BC9692EAF5* __this, const RuntimeMethod* method) 
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
// System.Void LSL.liblsl/StreamInfo::.ctor(System.String,System.String,System.Int32,System.Double,LSL.liblsl/channel_format_t,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamInfo__ctor_m70E8B7A32903C0B97A08D092B2A5125021130D95 (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, String_t* ___0_name, String_t* ___1_type, int32_t ___2_channel_count, double ___3_nominal_srate, uint8_t ___4_channel_format, String_t* ___5_source_id, const RuntimeMethod* method) 
{
	{
		// public StreamInfo(string name, string type, int channel_count = 1, double nominal_srate = IRREGULAR_RATE, channel_format_t channel_format = channel_format_t.cf_float32, string source_id = "") { obj = dll.lsl_create_streaminfo(name, type, channel_count, nominal_srate, channel_format, source_id); }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public StreamInfo(string name, string type, int channel_count = 1, double nominal_srate = IRREGULAR_RATE, channel_format_t channel_format = channel_format_t.cf_float32, string source_id = "") { obj = dll.lsl_create_streaminfo(name, type, channel_count, nominal_srate, channel_format, source_id); }
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_type;
		int32_t L_2 = ___2_channel_count;
		double L_3 = ___3_nominal_srate;
		uint8_t L_4 = ___4_channel_format;
		String_t* L_5 = ___5_source_id;
		intptr_t L_6;
		L_6 = dll_lsl_create_streaminfo_mEE4186A1E190E507F93868F29451D7C9043D2E2B(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		__this->___obj_0 = L_6;
		// public StreamInfo(string name, string type, int channel_count = 1, double nominal_srate = IRREGULAR_RATE, channel_format_t channel_format = channel_format_t.cf_float32, string source_id = "") { obj = dll.lsl_create_streaminfo(name, type, channel_count, nominal_srate, channel_format, source_id); }
		return;
	}
}
// System.Void LSL.liblsl/StreamInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamInfo__ctor_m27903FA04B0B7B11F75CE51C857174672653820C (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		// public StreamInfo(IntPtr handle) { obj = handle; }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public StreamInfo(IntPtr handle) { obj = handle; }
		intptr_t L_0 = ___0_handle;
		__this->___obj_0 = L_0;
		// public StreamInfo(IntPtr handle) { obj = handle; }
		return;
	}
}
// System.Void LSL.liblsl/StreamInfo::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamInfo_Finalize_mC8FCE6325FED2946D22A2030748EE029FB1D7C30 (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{// begin finally (depth: 1)
				// ~StreamInfo() { dll.lsl_destroy_streaminfo(obj); }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// ~StreamInfo() { dll.lsl_destroy_streaminfo(obj); }
			intptr_t L_0 = __this->___obj_0;
			intptr_t L_1;
			L_1 = dll_lsl_destroy_streaminfo_mA9D7FDAE837CDA23C19D07F9B675FB42088D8692(L_0, NULL);
			goto IL_0015;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		// ~StreamInfo() { dll.lsl_destroy_streaminfo(obj); }
		return;
	}
}
// System.String LSL.liblsl/StreamInfo::name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StreamInfo_name_m75AFBD8D91AAD4FBE386A664DA2CDD8927E249F2 (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string name() { return Marshal.PtrToStringAnsi(dll.lsl_get_name(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_get_name_mE68CBD63A14500F5F4394886D6B741951F76992F(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_1, NULL);
		return L_2;
	}
}
// System.String LSL.liblsl/StreamInfo::type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StreamInfo_type_m8CD086CC37A7BB9CFABE73569D3C0BA814839F8E (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string type() { return Marshal.PtrToStringAnsi(dll.lsl_get_type(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_get_type_m53D7FC62DC021488359EE14787A643D8DCF0A097(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_1, NULL);
		return L_2;
	}
}
// System.Int32 LSL.liblsl/StreamInfo::channel_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamInfo_channel_count_m980C8DF978B5660E63F9AE3E30EF4ED4CBBB8DD4 (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	{
		// public int channel_count() { return dll.lsl_get_channel_count(obj); }
		intptr_t L_0 = __this->___obj_0;
		int32_t L_1;
		L_1 = dll_lsl_get_channel_count_m7134F1674F5BBDD322AE3D52B348AE18E9B8253E(L_0, NULL);
		return L_1;
	}
}
// System.Double LSL.liblsl/StreamInfo::nominal_srate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double StreamInfo_nominal_srate_m95547E7C02CE9B8292908E2845BD7F41A57B58C8 (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	{
		// public double nominal_srate() { return dll.lsl_get_nominal_srate(obj); }
		intptr_t L_0 = __this->___obj_0;
		double L_1;
		L_1 = dll_lsl_get_nominal_srate_mB747CDCC73026871CC3BFAD467E806B3B4F2CC69(L_0, NULL);
		return L_1;
	}
}
// LSL.liblsl/channel_format_t LSL.liblsl/StreamInfo::channel_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t StreamInfo_channel_format_m4C23C147FC85A4A7B452FB6E4163C5A37C54079B (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	{
		// public channel_format_t channel_format() { return dll.lsl_get_channel_format(obj); }
		intptr_t L_0 = __this->___obj_0;
		uint8_t L_1;
		L_1 = dll_lsl_get_channel_format_m2D4C88CAC687EA5EA3AF6EA2E1AAC6EC9E91437B(L_0, NULL);
		return L_1;
	}
}
// System.String LSL.liblsl/StreamInfo::source_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StreamInfo_source_id_mEE52A5F4FA9396697D2BC8A654E39A4A01D43E02 (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string source_id() { return Marshal.PtrToStringAnsi(dll.lsl_get_source_id(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_get_source_id_m35E1FC777087D6EF0D39B3BF2166011797F663EA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_1, NULL);
		return L_2;
	}
}
// System.Int32 LSL.liblsl/StreamInfo::version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamInfo_version_mA5FE3F0FB449A7263E524616B801DA3F0815E772 (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	{
		// public int version() { return dll.lsl_get_version(obj); }
		intptr_t L_0 = __this->___obj_0;
		int32_t L_1;
		L_1 = dll_lsl_get_version_m1EF244954E414AE7FEECBBAF7C7864A8CCA965CA(L_0, NULL);
		return L_1;
	}
}
// System.Double LSL.liblsl/StreamInfo::created_at()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double StreamInfo_created_at_m36FB6C77BB7AD4540D7AE682FD8708C7EFA1266B (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	{
		// public double created_at() { return dll.lsl_get_created_at(obj); }
		intptr_t L_0 = __this->___obj_0;
		double L_1;
		L_1 = dll_lsl_get_created_at_mBAA0BDC8E7AB886EF9CFC5A9714D6CA42AFE7964(L_0, NULL);
		return L_1;
	}
}
// System.String LSL.liblsl/StreamInfo::uid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StreamInfo_uid_mF6EA99B2FD9601BFBC9432493E86E884468DB11D (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string uid() { return Marshal.PtrToStringAnsi(dll.lsl_get_uid(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_get_uid_m22A8DA3B12F3AEBF386D06721BAEDB82642877C8(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_1, NULL);
		return L_2;
	}
}
// System.String LSL.liblsl/StreamInfo::session_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StreamInfo_session_id_m73BCF8DE54EFC795C7841BB36706A83A63E483F8 (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string session_id() { return Marshal.PtrToStringAnsi(dll.lsl_get_session_id(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_get_session_id_mE07D131FAA6F1BBB0ED768F425D01E0F97805BCD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_1, NULL);
		return L_2;
	}
}
// System.String LSL.liblsl/StreamInfo::hostname()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StreamInfo_hostname_m11F0EECA127756243507968C14069FEB5C7AEE5B (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string hostname() { return Marshal.PtrToStringAnsi(dll.lsl_get_hostname(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_get_hostname_m3C7D3C0578950C8AE47B918CC4E3380410AEF430(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_1, NULL);
		return L_2;
	}
}
// LSL.liblsl/XMLElement LSL.liblsl/StreamInfo::desc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 StreamInfo_desc_m69C492AD95FEBC991AD400AE345E54E92E155CF4 (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	{
		// public XMLElement desc() { return new XMLElement(dll.lsl_get_desc(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_get_desc_mEE633A65A890CBD1AAAEC1B3CBE79D55D6939CD4(L_0, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_2;
		memset((&L_2), 0, sizeof(L_2));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String LSL.liblsl/StreamInfo::as_xml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StreamInfo_as_xml_m978E40E9B1F7B78EF0916EEC56595D120389E7C5 (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// IntPtr pXml = dll.lsl_get_xml(obj);
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_get_xml_m65D40CDA7CD624D049D29628AB66CA811F29FB54(L_0, NULL);
		// string strXml = Marshal.PtrToStringAnsi(pXml);
		intptr_t L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_2, NULL);
		V_0 = L_3;
		// dll.lsl_destroy_string(pXml);
		dll_lsl_destroy_string_mDDB7FD1167084E601A82CE5644D5AB5314844C76(L_2, NULL);
		// return strXml;
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.IntPtr LSL.liblsl/StreamInfo::handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StreamInfo_handle_m60F4FBB3EA825815C55FEED9ED7AA1CBFD8185F5 (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr handle() { return obj; }
		intptr_t L_0 = __this->___obj_0;
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
// System.Void LSL.liblsl/StreamOutlet::.ctor(LSL.liblsl/StreamInfo,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet__ctor_m27BB9E6C289CDB7D5E286F96D427B357ED7DBF58 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* ___0_info, int32_t ___1_chunk_size, int32_t ___2_max_buffered, const RuntimeMethod* method) 
{
	{
		// public StreamOutlet(StreamInfo info, int chunk_size = 0, int max_buffered = 360) { obj = dll.lsl_create_outlet(info.handle(), chunk_size, max_buffered); }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public StreamOutlet(StreamInfo info, int chunk_size = 0, int max_buffered = 360) { obj = dll.lsl_create_outlet(info.handle(), chunk_size, max_buffered); }
		StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* L_0 = ___0_info;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = StreamInfo_handle_m60F4FBB3EA825815C55FEED9ED7AA1CBFD8185F5_inline(L_0, NULL);
		int32_t L_2 = ___1_chunk_size;
		int32_t L_3 = ___2_max_buffered;
		intptr_t L_4;
		L_4 = dll_lsl_create_outlet_mD425A821973A7FCF002EC24F885249E742039917(L_1, L_2, L_3, NULL);
		__this->___obj_0 = L_4;
		// public StreamOutlet(StreamInfo info, int chunk_size = 0, int max_buffered = 360) { obj = dll.lsl_create_outlet(info.handle(), chunk_size, max_buffered); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_Finalize_m4A40B75AC8718947FD487562401C2A5427C13A82 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				// ~StreamOutlet() { dll.lsl_destroy_outlet(obj); }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// ~StreamOutlet() { dll.lsl_destroy_outlet(obj); }
			intptr_t L_0 = __this->___obj_0;
			dll_lsl_destroy_outlet_mF4D1A63C444696B689C2669CFD42901B4987B52E(L_0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		// ~StreamOutlet() { dll.lsl_destroy_outlet(obj); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_sample(System.Single[],System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_sample_mB0317455A322CEB67941EBEE2F6BBBE04191C983 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, double ___1_timestamp, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	double G_B2_0 = 0.0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B2_1 = NULL;
	intptr_t G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	double G_B1_0 = 0.0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B1_1 = NULL;
	intptr_t G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B3_2 = NULL;
	intptr_t G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	{
		// public void push_sample(float[] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_sample_ftp(obj, data, timestamp, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___0_data;
		double L_2 = ___1_timestamp;
		bool L_3 = ___2_pushthrough;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_000f:
	{
		int32_t L_4;
		L_4 = dll_lsl_push_sample_ftp_m3D2BA2ECBCB89109DBDBC1DD9BA9B87C4464816C(G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_sample(float[] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_sample_ftp(obj, data, timestamp, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_sample(System.Double[],System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_sample_m6461098F8603DA79CA4FA64C56D224927224A6D4 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_data, double ___1_timestamp, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	double G_B2_0 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B2_1 = NULL;
	intptr_t G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	double G_B1_0 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B1_1 = NULL;
	intptr_t G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B3_2 = NULL;
	intptr_t G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	{
		// public void push_sample(double[] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_sample_dtp(obj, data, timestamp, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___0_data;
		double L_2 = ___1_timestamp;
		bool L_3 = ___2_pushthrough;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_000f:
	{
		int32_t L_4;
		L_4 = dll_lsl_push_sample_dtp_m014B9A6F4D8F73689124E84CBFD8D514057AE67A(G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_sample(double[] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_sample_dtp(obj, data, timestamp, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_sample(System.Int32[],System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_sample_mD634E4966A81C0454C1DC0E294C16D1D0EA33518 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_data, double ___1_timestamp, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	double G_B2_0 = 0.0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B2_1 = NULL;
	intptr_t G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	double G_B1_0 = 0.0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B1_1 = NULL;
	intptr_t G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B3_2 = NULL;
	intptr_t G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	{
		// public void push_sample(int[] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_sample_itp(obj, data, timestamp, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_data;
		double L_2 = ___1_timestamp;
		bool L_3 = ___2_pushthrough;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_000f:
	{
		int32_t L_4;
		L_4 = dll_lsl_push_sample_itp_m0A71969B78EE52A2D89DCACCFB10248AA44E5A02(G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_sample(int[] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_sample_itp(obj, data, timestamp, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_sample(System.Int16[],System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_sample_m38FA82F62F8765D1F9F5FD4469A0B10D2849FAC3 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_data, double ___1_timestamp, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	double G_B2_0 = 0.0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B2_1 = NULL;
	intptr_t G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	double G_B1_0 = 0.0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B1_1 = NULL;
	intptr_t G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B3_2 = NULL;
	intptr_t G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	{
		// public void push_sample(short[] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_sample_stp(obj, data, timestamp, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ___0_data;
		double L_2 = ___1_timestamp;
		bool L_3 = ___2_pushthrough;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_000f:
	{
		int32_t L_4;
		L_4 = dll_lsl_push_sample_stp_mC8598E1C6A69F031CB09258024E5BE5AC1813CD2(G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_sample(short[] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_sample_stp(obj, data, timestamp, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_sample(System.Char[],System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_sample_m25413AD8779C455A52A7370FCC50AC9CFE425E6C (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_data, double ___1_timestamp, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	double G_B2_0 = 0.0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B2_1 = NULL;
	intptr_t G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	double G_B1_0 = 0.0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B1_1 = NULL;
	intptr_t G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B3_2 = NULL;
	intptr_t G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	{
		// public void push_sample(char[] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_sample_ctp(obj, data, timestamp, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___0_data;
		double L_2 = ___1_timestamp;
		bool L_3 = ___2_pushthrough;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_000f:
	{
		int32_t L_4;
		L_4 = dll_lsl_push_sample_ctp_mB57C7CBA74EA9055CC4A6E6673567E0BD63D17C2(G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_sample(char[] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_sample_ctp(obj, data, timestamp, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_sample(System.String[],System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_sample_mBECED1ED1F822AA5304C3B3699060E28947DE827 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_data, double ___1_timestamp, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	double G_B2_0 = 0.0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_1 = NULL;
	intptr_t G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	double G_B1_0 = 0.0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_1 = NULL;
	intptr_t G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	intptr_t G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	{
		// public void push_sample(string[] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_sample_strtp(obj, data, timestamp, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_data;
		double L_2 = ___1_timestamp;
		bool L_3 = ___2_pushthrough;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_000f:
	{
		int32_t L_4;
		L_4 = dll_lsl_push_sample_strtp_m9370E5DA39ECD637CB24B54AE2806D3BD3F92DC8(G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_sample(string[] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_sample_strtp(obj, data, timestamp, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_chunk(System.Single[,],System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_chunk_m254FFFA130C6E4B5B12CC074842174ABE57F4207 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___0_data, double ___1_timestamp, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	double G_B2_0 = 0.0;
	int32_t G_B2_1 = 0;
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* G_B2_2 = NULL;
	intptr_t G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	double G_B1_0 = 0.0;
	int32_t G_B1_1 = 0;
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* G_B1_2 = NULL;
	intptr_t G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	int32_t G_B3_2 = 0;
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	{
		// public void push_chunk(float[,] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_chunk_ftp(obj, data, (uint)data.Length, timestamp, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_1 = ___0_data;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_2 = ___0_data;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_2, NULL);
		double L_4 = ___1_timestamp;
		bool L_5 = ___2_pushthrough;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0015:
	{
		int32_t L_6;
		L_6 = dll_lsl_push_chunk_ftp_m96081403822D28F62877A8E03A249B34739B4F9C(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_chunk(float[,] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_chunk_ftp(obj, data, (uint)data.Length, timestamp, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_chunk(System.Double[,],System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_chunk_mBA39D276C4F546A41DBE7BD2B9248B4B4FE3C4FC (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___0_data, double ___1_timestamp, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	double G_B2_0 = 0.0;
	int32_t G_B2_1 = 0;
	DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* G_B2_2 = NULL;
	intptr_t G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	double G_B1_0 = 0.0;
	int32_t G_B1_1 = 0;
	DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* G_B1_2 = NULL;
	intptr_t G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	int32_t G_B3_2 = 0;
	DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	{
		// public void push_chunk(double[,] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_chunk_dtp(obj, data, (uint)data.Length, timestamp, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_1 = ___0_data;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_2 = ___0_data;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_2, NULL);
		double L_4 = ___1_timestamp;
		bool L_5 = ___2_pushthrough;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0015:
	{
		int32_t L_6;
		L_6 = dll_lsl_push_chunk_dtp_mC271190B7CDB9A63EDC90A37E9C268A8D0D53194(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_chunk(double[,] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_chunk_dtp(obj, data, (uint)data.Length, timestamp, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_chunk(System.Int32[,],System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_chunk_m7084952E535E091448448582247B3BDEE98896A9 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___0_data, double ___1_timestamp, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	double G_B2_0 = 0.0;
	int32_t G_B2_1 = 0;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* G_B2_2 = NULL;
	intptr_t G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	double G_B1_0 = 0.0;
	int32_t G_B1_1 = 0;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* G_B1_2 = NULL;
	intptr_t G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	int32_t G_B3_2 = 0;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	{
		// public void push_chunk(int[,] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_chunk_itp(obj, data, (uint)data.Length, timestamp, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_1 = ___0_data;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_2 = ___0_data;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_2, NULL);
		double L_4 = ___1_timestamp;
		bool L_5 = ___2_pushthrough;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0015:
	{
		int32_t L_6;
		L_6 = dll_lsl_push_chunk_itp_m3195C6772C50F1EBAD9D92C824A31DA5766FAAA4(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_chunk(int[,] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_chunk_itp(obj, data, (uint)data.Length, timestamp, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_chunk(System.Int16[,],System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_chunk_mCA8F829FFECE5C7A8E7A8DCBAB8E676565E31245 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* ___0_data, double ___1_timestamp, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	double G_B2_0 = 0.0;
	int32_t G_B2_1 = 0;
	Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* G_B2_2 = NULL;
	intptr_t G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	double G_B1_0 = 0.0;
	int32_t G_B1_1 = 0;
	Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* G_B1_2 = NULL;
	intptr_t G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	int32_t G_B3_2 = 0;
	Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	{
		// public void push_chunk(short[,] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_chunk_stp(obj, data, (uint)data.Length, timestamp, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* L_1 = ___0_data;
		Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* L_2 = ___0_data;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_2, NULL);
		double L_4 = ___1_timestamp;
		bool L_5 = ___2_pushthrough;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0015:
	{
		int32_t L_6;
		L_6 = dll_lsl_push_chunk_stp_m0141AB8348949EAB3000404BC5CF82E1E2A09322(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_chunk(short[,] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_chunk_stp(obj, data, (uint)data.Length, timestamp, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_chunk(System.Char[,],System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_chunk_mEEFB544FB9F5F77ECE10380C78D5E7624521A30F (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* ___0_data, double ___1_timestamp, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	double G_B2_0 = 0.0;
	int32_t G_B2_1 = 0;
	CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* G_B2_2 = NULL;
	intptr_t G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	double G_B1_0 = 0.0;
	int32_t G_B1_1 = 0;
	CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* G_B1_2 = NULL;
	intptr_t G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	int32_t G_B3_2 = 0;
	CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	{
		// public void push_chunk(char[,] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_chunk_ctp(obj, data, (uint)data.Length, timestamp, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* L_1 = ___0_data;
		CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* L_2 = ___0_data;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_2, NULL);
		double L_4 = ___1_timestamp;
		bool L_5 = ___2_pushthrough;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0015:
	{
		int32_t L_6;
		L_6 = dll_lsl_push_chunk_ctp_m6267D0F9CB1201FE30812AC75C7BAF87E6870981(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_chunk(char[,] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_chunk_ctp(obj, data, (uint)data.Length, timestamp, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_chunk(System.String[,],System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_chunk_m4A39528431F866C33A98AF9D507800D5F2F8A88E (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* ___0_data, double ___1_timestamp, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	double G_B2_0 = 0.0;
	int32_t G_B2_1 = 0;
	StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* G_B2_2 = NULL;
	intptr_t G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	double G_B1_0 = 0.0;
	int32_t G_B1_1 = 0;
	StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* G_B1_2 = NULL;
	intptr_t G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	int32_t G_B3_2 = 0;
	StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	{
		// public void push_chunk(string[,] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_chunk_strtp(obj, data, (uint)data.Length, timestamp, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_1 = ___0_data;
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_2 = ___0_data;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_2, NULL);
		double L_4 = ___1_timestamp;
		bool L_5 = ___2_pushthrough;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0015:
	{
		int32_t L_6;
		L_6 = dll_lsl_push_chunk_strtp_mE6E231CBD12C14DBF68DA5C655D6CE8D202AA2BF(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_chunk(string[,] data, double timestamp = 0.0, bool pushthrough = true) { dll.lsl_push_chunk_strtp(obj, data, (uint)data.Length, timestamp, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_chunk(System.Single[,],System.Double[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_chunk_m887DB7BD36364A7766786A8B3095AF0E16A8ACC4 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___0_data, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_timestamps, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* G_B2_2 = NULL;
	intptr_t G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* G_B1_2 = NULL;
	intptr_t G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	int32_t G_B3_0 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	{
		// public void push_chunk(float[,] data, double[] timestamps, bool pushthrough = true) { dll.lsl_push_chunk_ftnp(obj, data, (uint)data.Length, timestamps, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_1 = ___0_data;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_2 = ___0_data;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_2, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ___1_timestamps;
		bool L_5 = ___2_pushthrough;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0015:
	{
		int32_t L_6;
		L_6 = dll_lsl_push_chunk_ftnp_m6AC024F97219BAAEF21E65271D5F720292AF0E60(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_chunk(float[,] data, double[] timestamps, bool pushthrough = true) { dll.lsl_push_chunk_ftnp(obj, data, (uint)data.Length, timestamps, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_chunk(System.Double[,],System.Double[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_chunk_m2863F92C5162C10C935C9C330CDF8CCFFB68681F (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___0_data, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_timestamps, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* G_B2_2 = NULL;
	intptr_t G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* G_B1_2 = NULL;
	intptr_t G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	int32_t G_B3_0 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	{
		// public void push_chunk(double[,] data, double[] timestamps, bool pushthrough = true) { dll.lsl_push_chunk_dtnp(obj, data, (uint)data.Length, timestamps, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_1 = ___0_data;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_2 = ___0_data;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_2, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ___1_timestamps;
		bool L_5 = ___2_pushthrough;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0015:
	{
		int32_t L_6;
		L_6 = dll_lsl_push_chunk_dtnp_mA495949A7C521F461557C1B6ACE787D0EF0DA34E(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_chunk(double[,] data, double[] timestamps, bool pushthrough = true) { dll.lsl_push_chunk_dtnp(obj, data, (uint)data.Length, timestamps, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_chunk(System.Int32[,],System.Double[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_chunk_m85D36588CAD807B465A2958B40369FFC569C9B32 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___0_data, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_timestamps, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* G_B2_2 = NULL;
	intptr_t G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* G_B1_2 = NULL;
	intptr_t G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	int32_t G_B3_0 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	{
		// public void push_chunk(int[,] data, double[] timestamps, bool pushthrough = true) { dll.lsl_push_chunk_itnp(obj, data, (uint)data.Length, timestamps, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_1 = ___0_data;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_2 = ___0_data;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_2, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ___1_timestamps;
		bool L_5 = ___2_pushthrough;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0015:
	{
		int32_t L_6;
		L_6 = dll_lsl_push_chunk_itnp_mA10442375713DDD11365371584EBD75671466DF5(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_chunk(int[,] data, double[] timestamps, bool pushthrough = true) { dll.lsl_push_chunk_itnp(obj, data, (uint)data.Length, timestamps, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_chunk(System.Int16[,],System.Double[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_chunk_m89A37B2B6D34E17CD3C912C7B6870C2F3A885ECD (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* ___0_data, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_timestamps, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* G_B2_2 = NULL;
	intptr_t G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* G_B1_2 = NULL;
	intptr_t G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	int32_t G_B3_0 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	{
		// public void push_chunk(short[,] data, double[] timestamps, bool pushthrough = true) { dll.lsl_push_chunk_stnp(obj, data, (uint)data.Length, timestamps, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* L_1 = ___0_data;
		Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* L_2 = ___0_data;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_2, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ___1_timestamps;
		bool L_5 = ___2_pushthrough;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0015:
	{
		int32_t L_6;
		L_6 = dll_lsl_push_chunk_stnp_mA7027EEAE1FCA3F4C560141D90C94E44D410BE6D(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_chunk(short[,] data, double[] timestamps, bool pushthrough = true) { dll.lsl_push_chunk_stnp(obj, data, (uint)data.Length, timestamps, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_chunk(System.Char[,],System.Double[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_chunk_m9456FA68576E9221793E50BC663B9C6CC271D051 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* ___0_data, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_timestamps, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* G_B2_2 = NULL;
	intptr_t G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* G_B1_2 = NULL;
	intptr_t G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	int32_t G_B3_0 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	{
		// public void push_chunk(char[,] data, double[] timestamps, bool pushthrough = true) { dll.lsl_push_chunk_ctnp(obj, data, (uint)data.Length, timestamps, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* L_1 = ___0_data;
		CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* L_2 = ___0_data;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_2, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ___1_timestamps;
		bool L_5 = ___2_pushthrough;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0015:
	{
		int32_t L_6;
		L_6 = dll_lsl_push_chunk_ctnp_mD3E65743C0E1259B7A89AE31BF1710848C0DBEB1(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_chunk(char[,] data, double[] timestamps, bool pushthrough = true) { dll.lsl_push_chunk_ctnp(obj, data, (uint)data.Length, timestamps, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Void LSL.liblsl/StreamOutlet::push_chunk(System.String[,],System.Double[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOutlet_push_chunk_m60F7D41A147EC69F06203F59819026C99C963C09 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* ___0_data, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_timestamps, bool ___2_pushthrough, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* G_B2_2 = NULL;
	intptr_t G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* G_B1_2 = NULL;
	intptr_t G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	int32_t G_B3_0 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	{
		// public void push_chunk(string[,] data, double[] timestamps, bool pushthrough = true) { dll.lsl_push_chunk_strtnp(obj, data, (uint)data.Length, timestamps, pushthrough ? 1 : 0); }
		intptr_t L_0 = __this->___obj_0;
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_1 = ___0_data;
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_2 = ___0_data;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_2, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ___1_timestamps;
		bool L_5 = ___2_pushthrough;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_1;
		G_B1_3 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_1;
			G_B2_3 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0015:
	{
		int32_t L_6;
		L_6 = dll_lsl_push_chunk_strtnp_m1C9E5E0D60FA5782A18D522835674A8F311582BE(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// public void push_chunk(string[,] data, double[] timestamps, bool pushthrough = true) { dll.lsl_push_chunk_strtnp(obj, data, (uint)data.Length, timestamps, pushthrough ? 1 : 0); }
		return;
	}
}
// System.Boolean LSL.liblsl/StreamOutlet::have_consumers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOutlet_have_consumers_m386CE3989A6C34722324C37BB8BA309856C98EB4 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, const RuntimeMethod* method) 
{
	{
		// public bool have_consumers() { return dll.lsl_have_consumers(obj)>0; }
		intptr_t L_0 = __this->___obj_0;
		int32_t L_1;
		L_1 = dll_lsl_have_consumers_mA508BBD02ECE4D57323DF98EC530CD6B8D699003(L_0, NULL);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean LSL.liblsl/StreamOutlet::wait_for_consumers(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOutlet_wait_for_consumers_mDA1DBD47CBFF5351215FAFFD50AA0B6DC9D6DF96 (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, double ___0_timeout, const RuntimeMethod* method) 
{
	{
		// public bool wait_for_consumers(double timeout = FOREVER) { return dll.lsl_wait_for_consumers(obj)>0; }
		intptr_t L_0 = __this->___obj_0;
		int32_t L_1;
		L_1 = dll_lsl_wait_for_consumers_m00B5A15B65134DA1F7A1BDB11A8BC36A9995770C(L_0, NULL);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// LSL.liblsl/StreamInfo LSL.liblsl/StreamOutlet::info()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* StreamOutlet_info_m63274F858112FCB720001344737BEF6CD982470B (StreamOutlet_tF54FD15AD59F766665016C2D1209A87D4B4F5022* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public StreamInfo info() { return new StreamInfo(dll.lsl_get_info(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_get_info_m8FE185F12CA752C3440CE6B45BB0B62E9809D886(L_0, NULL);
		StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* L_2 = (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F*)il2cpp_codegen_object_new(StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StreamInfo__ctor_m27903FA04B0B7B11F75CE51C857174672653820C(L_2, L_1, NULL);
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
// System.Void LSL.liblsl/StreamInlet::.ctor(LSL.liblsl/StreamInfo,System.Int32,System.Int32,System.Boolean,LSL.liblsl/processing_options_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamInlet__ctor_m92E7E254D95DAD9D8040F9A4C58B598EB31C0D1A (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* ___0_info, int32_t ___1_max_buflen, int32_t ___2_max_chunklen, bool ___3_recover, uint8_t ___4_postproc_flags, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	intptr_t G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	intptr_t G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	intptr_t G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* G_B3_4 = NULL;
	{
		// public StreamInlet(StreamInfo info, int max_buflen = 360, int max_chunklen = 0, bool recover = true, processing_options_t postproc_flags = processing_options_t.proc_none) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// obj = dll.lsl_create_inlet(info.handle(), max_buflen, max_chunklen, recover?1:0);
		StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* L_0 = ___0_info;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = StreamInfo_handle_m60F4FBB3EA825815C55FEED9ED7AA1CBFD8185F5_inline(L_0, NULL);
		int32_t L_2 = ___1_max_buflen;
		int32_t L_3 = ___2_max_chunklen;
		bool L_4 = ___3_recover;
		G_B1_0 = L_3;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		G_B1_3 = __this;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			G_B2_3 = __this;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0017:
	{
		intptr_t L_5;
		L_5 = dll_lsl_create_inlet_mF89B755ACA052D1DABE52CAF1A1A246A8FF87775(G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		NullCheck(G_B3_4);
		G_B3_4->___obj_0 = L_5;
		// dll.lsl_set_postprocessing(obj, postproc_flags);
		intptr_t L_6 = __this->___obj_0;
		uint8_t L_7 = ___4_postproc_flags;
		int32_t L_8;
		L_8 = dll_lsl_set_postprocessing_mB23AA5AABA710D394652998493D8827736959450(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void LSL.liblsl/StreamInlet::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamInlet_Finalize_m4C8E61A6F867B926B35F1503654006B153F7A09B (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				// ~StreamInlet() { dll.lsl_destroy_inlet(obj); }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// ~StreamInlet() { dll.lsl_destroy_inlet(obj); }
			intptr_t L_0 = __this->___obj_0;
			dll_lsl_destroy_inlet_m1F9040D05AF80EC51DE0A3B86E260FF8F6E26605(L_0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		// ~StreamInlet() { dll.lsl_destroy_inlet(obj); }
		return;
	}
}
// LSL.liblsl/StreamInfo LSL.liblsl/StreamInlet::info(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* StreamInlet_info_m60E580506F9B21F9D02A3319DC5F4E3089479CC2 (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, double ___0_timeout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public StreamInfo info(double timeout = FOREVER) { int ec=0; IntPtr res = dll.lsl_get_fullinfo(obj, timeout, ref ec); check_error(ec); return new StreamInfo(res); }
		V_0 = 0;
		// public StreamInfo info(double timeout = FOREVER) { int ec=0; IntPtr res = dll.lsl_get_fullinfo(obj, timeout, ref ec); check_error(ec); return new StreamInfo(res); }
		intptr_t L_0 = __this->___obj_0;
		double L_1 = ___0_timeout;
		intptr_t L_2;
		L_2 = dll_lsl_get_fullinfo_mC3333A2D50A83F08D4F5A43F158DF42629C3B4DA(L_0, L_1, (&V_0), NULL);
		// public StreamInfo info(double timeout = FOREVER) { int ec=0; IntPtr res = dll.lsl_get_fullinfo(obj, timeout, ref ec); check_error(ec); return new StreamInfo(res); }
		int32_t L_3 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_3, NULL);
		// public StreamInfo info(double timeout = FOREVER) { int ec=0; IntPtr res = dll.lsl_get_fullinfo(obj, timeout, ref ec); check_error(ec); return new StreamInfo(res); }
		StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* L_4 = (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F*)il2cpp_codegen_object_new(StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StreamInfo__ctor_m27903FA04B0B7B11F75CE51C857174672653820C(L_4, L_2, NULL);
		return L_4;
	}
}
// System.Void LSL.liblsl/StreamInlet::open_stream(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamInlet_open_stream_m2E3C02C71A93658B07D3280AB9D77CE548FA024C (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, double ___0_timeout, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public void open_stream(double timeout = FOREVER) { int ec = 0; dll.lsl_open_stream(obj, timeout, ref ec); check_error(ec); }
		V_0 = 0;
		// public void open_stream(double timeout = FOREVER) { int ec = 0; dll.lsl_open_stream(obj, timeout, ref ec); check_error(ec); }
		intptr_t L_0 = __this->___obj_0;
		double L_1 = ___0_timeout;
		dll_lsl_open_stream_mF17E07032F1EE68EBE804A665D126253DF3A123F(L_0, L_1, (&V_0), NULL);
		// public void open_stream(double timeout = FOREVER) { int ec = 0; dll.lsl_open_stream(obj, timeout, ref ec); check_error(ec); }
		int32_t L_2 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_2, NULL);
		// public void open_stream(double timeout = FOREVER) { int ec = 0; dll.lsl_open_stream(obj, timeout, ref ec); check_error(ec); }
		return;
	}
}
// System.Void LSL.liblsl/StreamInlet::close_stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamInlet_close_stream_mBCF203ABE0E4FC67E6CCCF34D3E90B0C08C128A0 (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, const RuntimeMethod* method) 
{
	{
		// public void close_stream() { dll.lsl_close_stream(obj); }
		intptr_t L_0 = __this->___obj_0;
		dll_lsl_close_stream_m7777BB875AF9EDDEFDAC40F573802AC34D3BE3B5(L_0, NULL);
		// public void close_stream() { dll.lsl_close_stream(obj); }
		return;
	}
}
// System.Double LSL.liblsl/StreamInlet::time_correction(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double StreamInlet_time_correction_mE62E75B2482C2FD2159EB8A947B578A680FFA2C5 (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, double ___0_timeout, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public double time_correction(double timeout = FOREVER) { int ec = 0; double res = dll.lsl_time_correction(obj, timeout, ref ec); check_error(ec); return res; }
		V_0 = 0;
		// public double time_correction(double timeout = FOREVER) { int ec = 0; double res = dll.lsl_time_correction(obj, timeout, ref ec); check_error(ec); return res; }
		intptr_t L_0 = __this->___obj_0;
		double L_1 = ___0_timeout;
		double L_2;
		L_2 = dll_lsl_time_correction_mE0FDD7B24765756487755CDF297B79C82D29547A(L_0, L_1, (&V_0), NULL);
		// public double time_correction(double timeout = FOREVER) { int ec = 0; double res = dll.lsl_time_correction(obj, timeout, ref ec); check_error(ec); return res; }
		int32_t L_3 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_3, NULL);
		// public double time_correction(double timeout = FOREVER) { int ec = 0; double res = dll.lsl_time_correction(obj, timeout, ref ec); check_error(ec); return res; }
		return L_2;
	}
}
// System.Double LSL.liblsl/StreamInlet::pull_sample(System.Single[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double StreamInlet_pull_sample_mF3C1051C7987FF9C8CA54837B1A828B0ADDF4B62 (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_sample, double ___1_timeout, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public double pull_sample(float[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_f(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		V_0 = 0;
		// public double pull_sample(float[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_f(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		intptr_t L_0 = __this->___obj_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___0_sample;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_sample;
		NullCheck(L_2);
		double L_3 = ___1_timeout;
		double L_4;
		L_4 = dll_lsl_pull_sample_f_m5840CC8145E0B2C50B56A0A31F12491186C06BE3(L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3, (&V_0), NULL);
		// public double pull_sample(float[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_f(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		int32_t L_5 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_5, NULL);
		// public double pull_sample(float[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_f(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		return L_4;
	}
}
// System.Double LSL.liblsl/StreamInlet::pull_sample(System.Double[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double StreamInlet_pull_sample_m0E8D27B843DE19FFCC28123382720833A767193F (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_sample, double ___1_timeout, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public double pull_sample(double[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_d(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		V_0 = 0;
		// public double pull_sample(double[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_d(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		intptr_t L_0 = __this->___obj_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___0_sample;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___0_sample;
		NullCheck(L_2);
		double L_3 = ___1_timeout;
		double L_4;
		L_4 = dll_lsl_pull_sample_d_mF50561A968D240647484A2B5DA08F9D5B10D65FC(L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3, (&V_0), NULL);
		// public double pull_sample(double[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_d(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		int32_t L_5 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_5, NULL);
		// public double pull_sample(double[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_d(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		return L_4;
	}
}
// System.Double LSL.liblsl/StreamInlet::pull_sample(System.Int32[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double StreamInlet_pull_sample_m6441F90A11B7C0386D673DDA3E28ED38EC8B656F (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_sample, double ___1_timeout, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public double pull_sample(int[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_i(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		V_0 = 0;
		// public double pull_sample(int[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_i(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		intptr_t L_0 = __this->___obj_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_sample;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_sample;
		NullCheck(L_2);
		double L_3 = ___1_timeout;
		double L_4;
		L_4 = dll_lsl_pull_sample_i_mBE6688C4738191342A0A59EBF0E7CDC7DC7858CB(L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3, (&V_0), NULL);
		// public double pull_sample(int[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_i(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		int32_t L_5 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_5, NULL);
		// public double pull_sample(int[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_i(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		return L_4;
	}
}
// System.Double LSL.liblsl/StreamInlet::pull_sample(System.Int16[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double StreamInlet_pull_sample_m3523CA9C79CDD2A812DC3FDBA3FB6325F329A0E6 (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_sample, double ___1_timeout, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public double pull_sample(short[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_s(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		V_0 = 0;
		// public double pull_sample(short[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_s(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		intptr_t L_0 = __this->___obj_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ___0_sample;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ___0_sample;
		NullCheck(L_2);
		double L_3 = ___1_timeout;
		double L_4;
		L_4 = dll_lsl_pull_sample_s_m6564A49F2B3BF8C2FB0EB131C7E32D187038E3D7(L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3, (&V_0), NULL);
		// public double pull_sample(short[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_s(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		int32_t L_5 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_5, NULL);
		// public double pull_sample(short[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_s(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		return L_4;
	}
}
// System.Double LSL.liblsl/StreamInlet::pull_sample(System.Char[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double StreamInlet_pull_sample_m5E48A7754289F690EF68F72082C57754FE8D2F14 (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_sample, double ___1_timeout, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public double pull_sample(char[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_c(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		V_0 = 0;
		// public double pull_sample(char[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_c(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		intptr_t L_0 = __this->___obj_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___0_sample;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_sample;
		NullCheck(L_2);
		double L_3 = ___1_timeout;
		double L_4;
		L_4 = dll_lsl_pull_sample_c_mC0AD1F7B3B5367E738275D2F21308AE79364E750(L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3, (&V_0), NULL);
		// public double pull_sample(char[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_c(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		int32_t L_5 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_5, NULL);
		// public double pull_sample(char[] sample, double timeout = FOREVER) { int ec = 0; double res = dll.lsl_pull_sample_c(obj, sample, sample.Length, timeout, ref ec); check_error(ec); return res; }
		return L_4;
	}
}
// System.Double LSL.liblsl/StreamInlet::pull_sample(System.String[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double StreamInlet_pull_sample_m56FE787F6F2200FCD40B57427561B74C953714D2 (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_sample, double ___1_timeout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_1 = NULL;
	double V_2 = 0.0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int ec = 0;
		V_0 = 0;
		// IntPtr[] tmp = new IntPtr[sample.Length];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_sample;
		NullCheck(L_0);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_1 = L_1;
		// double res = dll.lsl_pull_sample_str(obj, tmp, tmp.Length, timeout, ref ec); check_error(ec);
		intptr_t L_2 = __this->___obj_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = V_1;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = V_1;
		NullCheck(L_4);
		double L_5 = ___1_timeout;
		double L_6;
		L_6 = dll_lsl_pull_sample_str_m739420C1DB61FAB37A8CE22CF904F5F119D5C896(L_2, L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5, (&V_0), NULL);
		V_2 = L_6;
		// double res = dll.lsl_pull_sample_str(obj, tmp, tmp.Length, timeout, ref ec); check_error(ec);
		int32_t L_7 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_7, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					// for (int k = 0; k < tmp.Length; k++)
					V_4 = 0;
					goto IL_0053;
				}

IL_0044:
				{
					// dll.lsl_destroy_string(tmp[k]);
					IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_8 = V_1;
					int32_t L_9 = V_4;
					NullCheck(L_8);
					int32_t L_10 = L_9;
					intptr_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
					dll_lsl_destroy_string_mDDB7FD1167084E601A82CE5644D5AB5314844C76(L_11, NULL);
					// for (int k = 0; k < tmp.Length; k++)
					int32_t L_12 = V_4;
					V_4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
				}

IL_0053:
				{
					// for (int k = 0; k < tmp.Length; k++)
					int32_t L_13 = V_4;
					IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_14 = V_1;
					NullCheck(L_14);
					if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
					{
						goto IL_0044;
					}
				}
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// for (int k = 0; k < tmp.Length; k++)
				V_3 = 0;
				goto IL_0037_1;
			}

IL_0028_1:
			{
				// sample[k] = Marshal.PtrToStringAnsi(tmp[k]);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = ___0_sample;
				int32_t L_16 = V_3;
				IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_17 = V_1;
				int32_t L_18 = V_3;
				NullCheck(L_17);
				int32_t L_19 = L_18;
				intptr_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				String_t* L_21;
				L_21 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_20, NULL);
				NullCheck(L_15);
				ArrayElementTypeCheck (L_15, L_21);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (String_t*)L_21);
				// for (int k = 0; k < tmp.Length; k++)
				int32_t L_22 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
			}

IL_0037_1:
			{
				// for (int k = 0; k < tmp.Length; k++)
				int32_t L_23 = V_3;
				IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_24 = V_1;
				NullCheck(L_24);
				if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
				{
					goto IL_0028_1;
				}
			}
			{
				// } finally {
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// return res;
		double L_25 = V_2;
		return L_25;
	}
}
// System.Int32 LSL.liblsl/StreamInlet::pull_chunk(System.Single[,],System.Double[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamInlet_pull_chunk_m28633FBB8F228939F35BD9B08078DB013DCDA40B (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___0_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_timestamp_buffer, double ___2_timeout, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public int pull_chunk(float[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_f(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		V_0 = 0;
		// public int pull_chunk(float[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_f(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		intptr_t L_0 = __this->___obj_0;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_1 = ___0_data_buffer;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___1_timestamp_buffer;
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_3 = ___0_data_buffer;
		NullCheck((RuntimeArray*)L_3);
		int32_t L_4;
		L_4 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_3, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = ___1_timestamp_buffer;
		NullCheck(L_5);
		double L_6 = ___2_timeout;
		uint32_t L_7;
		L_7 = dll_lsl_pull_chunk_f_mF04FD34180EA5ED1FDF1BD3A29E54800E15593EF(L_0, L_1, L_2, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6, (&V_0), NULL);
		// public int pull_chunk(float[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_f(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		int32_t L_8 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_8, NULL);
		// public int pull_chunk(float[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_f(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_9 = ___0_data_buffer;
		NullCheck((RuntimeArray*)L_9);
		int32_t L_10;
		L_10 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_9, 1, NULL);
		return ((int32_t)((int32_t)L_7/L_10));
	}
}
// System.Int32 LSL.liblsl/StreamInlet::pull_chunk(System.Double[,],System.Double[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamInlet_pull_chunk_m3A168F32154F2D19303EB44803710586FC10EC23 (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___0_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_timestamp_buffer, double ___2_timeout, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public int pull_chunk(double[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_d(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		V_0 = 0;
		// public int pull_chunk(double[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_d(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		intptr_t L_0 = __this->___obj_0;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_1 = ___0_data_buffer;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___1_timestamp_buffer;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_3 = ___0_data_buffer;
		NullCheck((RuntimeArray*)L_3);
		int32_t L_4;
		L_4 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_3, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = ___1_timestamp_buffer;
		NullCheck(L_5);
		double L_6 = ___2_timeout;
		uint32_t L_7;
		L_7 = dll_lsl_pull_chunk_d_m2FB93A958E25BE609156D2764B479BB55CCA1623(L_0, L_1, L_2, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6, (&V_0), NULL);
		// public int pull_chunk(double[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_d(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		int32_t L_8 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_8, NULL);
		// public int pull_chunk(double[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_d(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_9 = ___0_data_buffer;
		NullCheck((RuntimeArray*)L_9);
		int32_t L_10;
		L_10 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_9, 1, NULL);
		return ((int32_t)((int32_t)L_7/L_10));
	}
}
// System.Int32 LSL.liblsl/StreamInlet::pull_chunk(System.Int32[,],System.Double[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamInlet_pull_chunk_m7481F023F7B8DD89416BC6454BCFCDB888C822E2 (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___0_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_timestamp_buffer, double ___2_timeout, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public int pull_chunk(int[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_i(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		V_0 = 0;
		// public int pull_chunk(int[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_i(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		intptr_t L_0 = __this->___obj_0;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_1 = ___0_data_buffer;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___1_timestamp_buffer;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_3 = ___0_data_buffer;
		NullCheck((RuntimeArray*)L_3);
		int32_t L_4;
		L_4 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_3, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = ___1_timestamp_buffer;
		NullCheck(L_5);
		double L_6 = ___2_timeout;
		uint32_t L_7;
		L_7 = dll_lsl_pull_chunk_i_mA36D4B95D5BF47511CE1453E450DE12DAF4CF7E2(L_0, L_1, L_2, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6, (&V_0), NULL);
		// public int pull_chunk(int[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_i(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		int32_t L_8 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_8, NULL);
		// public int pull_chunk(int[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_i(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_9 = ___0_data_buffer;
		NullCheck((RuntimeArray*)L_9);
		int32_t L_10;
		L_10 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_9, 1, NULL);
		return ((int32_t)((int32_t)L_7/L_10));
	}
}
// System.Int32 LSL.liblsl/StreamInlet::pull_chunk(System.Int16[,],System.Double[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamInlet_pull_chunk_m769ABD1573E2B18FE6EC9CB7E0F8AEFA9F172D83 (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* ___0_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_timestamp_buffer, double ___2_timeout, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public int pull_chunk(short[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_s(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		V_0 = 0;
		// public int pull_chunk(short[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_s(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		intptr_t L_0 = __this->___obj_0;
		Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* L_1 = ___0_data_buffer;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___1_timestamp_buffer;
		Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* L_3 = ___0_data_buffer;
		NullCheck((RuntimeArray*)L_3);
		int32_t L_4;
		L_4 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_3, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = ___1_timestamp_buffer;
		NullCheck(L_5);
		double L_6 = ___2_timeout;
		uint32_t L_7;
		L_7 = dll_lsl_pull_chunk_s_m5FC56F49EA70EE804D6C1D15ACFFFCC89E092B0A(L_0, L_1, L_2, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6, (&V_0), NULL);
		// public int pull_chunk(short[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_s(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		int32_t L_8 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_8, NULL);
		// public int pull_chunk(short[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_s(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* L_9 = ___0_data_buffer;
		NullCheck((RuntimeArray*)L_9);
		int32_t L_10;
		L_10 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_9, 1, NULL);
		return ((int32_t)((int32_t)L_7/L_10));
	}
}
// System.Int32 LSL.liblsl/StreamInlet::pull_chunk(System.Char[,],System.Double[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamInlet_pull_chunk_mB66E501CCD88B6EFD5F00F80D5A7F65D2A08C86A (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* ___0_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_timestamp_buffer, double ___2_timeout, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public int pull_chunk(char[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_c(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		V_0 = 0;
		// public int pull_chunk(char[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_c(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		intptr_t L_0 = __this->___obj_0;
		CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* L_1 = ___0_data_buffer;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___1_timestamp_buffer;
		CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* L_3 = ___0_data_buffer;
		NullCheck((RuntimeArray*)L_3);
		int32_t L_4;
		L_4 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_3, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = ___1_timestamp_buffer;
		NullCheck(L_5);
		double L_6 = ___2_timeout;
		uint32_t L_7;
		L_7 = dll_lsl_pull_chunk_c_m76B92C3FEFA7642FD62E641B6750277207C47EF5(L_0, L_1, L_2, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6, (&V_0), NULL);
		// public int pull_chunk(char[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_c(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		int32_t L_8 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_8, NULL);
		// public int pull_chunk(char[,] data_buffer, double[] timestamp_buffer, double timeout = 0.0) { int ec = 0; uint res = dll.lsl_pull_chunk_c(obj, data_buffer, timestamp_buffer, (uint)data_buffer.Length, (uint)timestamp_buffer.Length, timeout, ref ec); check_error(ec); return (int)res / data_buffer.GetLength(1); }
		CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* L_9 = ___0_data_buffer;
		NullCheck((RuntimeArray*)L_9);
		int32_t L_10;
		L_10 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_9, 1, NULL);
		return ((int32_t)((int32_t)L_7/L_10));
	}
}
// System.Int32 LSL.liblsl/StreamInlet::pull_chunk(System.String[,],System.Double[],System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamInlet_pull_chunk_m643F170EAECC5D0B85996E5FADA6FB9892F41D3A (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* ___0_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_timestamp_buffer, double ___2_timeout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int ec = 0;
		V_0 = 0;
		// IntPtr[,] tmp = new IntPtr[data_buffer.GetLength(0),data_buffer.GetLength(1)];
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_0 = ___0_data_buffer;
		NullCheck((RuntimeArray*)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_0, 0, NULL);
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_2 = ___0_data_buffer;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_2, 1, NULL);
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_1, (il2cpp_array_size_t)L_3 };
		IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E* L_4 = (IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E*)GenArrayNew(IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E_il2cpp_TypeInfo_var, L_5);
		V_1 = L_4;
		// uint res = dll.lsl_pull_chunk_str(obj, tmp, timestamp_buffer, (uint)tmp.Length, (uint)timestamp_buffer.Length, timeout, ref ec);
		intptr_t L_6 = __this->___obj_0;
		IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E* L_7 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = ___1_timestamp_buffer;
		IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E* L_9 = V_1;
		NullCheck((RuntimeArray*)L_9);
		int32_t L_10;
		L_10 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_9, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = ___1_timestamp_buffer;
		NullCheck(L_11);
		double L_12 = ___2_timeout;
		uint32_t L_13;
		L_13 = dll_lsl_pull_chunk_str_mF1D0F280DCDAA9F0DD7462DBB1B12D3DFBA4B141(L_6, L_7, L_8, L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12, (&V_0), NULL);
		V_2 = L_13;
		// check_error(ec);
		int32_t L_14 = V_0;
		liblsl_check_error_mF57957A7EF9D1ADCFD0F9036FCF0E614E87CBD0F(L_14, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{// begin finally (depth: 1)
				{
					// for (int s = 0; s < tmp.GetLength(0); s++)
					V_5 = 0;
					goto IL_00a7;
				}

IL_007c:
				{
					// for (int c = 0; c < tmp.GetLength(1); c++)
					V_6 = 0;
					goto IL_0096;
				}

IL_0081:
				{
					// dll.lsl_destroy_string(tmp[s,c]);
					IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E* L_15 = V_1;
					int32_t L_16 = V_5;
					int32_t L_17 = V_6;
					NullCheck(L_15);
					intptr_t L_18;
					L_18 = (L_15)->GetAt(L_16, L_17);
					dll_lsl_destroy_string_mDDB7FD1167084E601A82CE5644D5AB5314844C76(L_18, NULL);
					// for (int c = 0; c < tmp.GetLength(1); c++)
					int32_t L_19 = V_6;
					V_6 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				}

IL_0096:
				{
					// for (int c = 0; c < tmp.GetLength(1); c++)
					int32_t L_20 = V_6;
					IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E* L_21 = V_1;
					NullCheck((RuntimeArray*)L_21);
					int32_t L_22;
					L_22 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_21, 1, NULL);
					if ((((int32_t)L_20) < ((int32_t)L_22)))
					{
						goto IL_0081;
					}
				}
				{
					// for (int s = 0; s < tmp.GetLength(0); s++)
					int32_t L_23 = V_5;
					V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
				}

IL_00a7:
				{
					// for (int s = 0; s < tmp.GetLength(0); s++)
					int32_t L_24 = V_5;
					IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E* L_25 = V_1;
					NullCheck((RuntimeArray*)L_25);
					int32_t L_26;
					L_26 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_25, 0, NULL);
					if ((((int32_t)L_24) < ((int32_t)L_26)))
					{
						goto IL_007c;
					}
				}
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// for (int s = 0; s < tmp.GetLength(0); s++)
				V_3 = 0;
				goto IL_006b_1;
			}

IL_003a_1:
			{
				// for (int c = 0; c < tmp.GetLength(1); c++)
				V_4 = 0;
				goto IL_005c_1;
			}

IL_003f_1:
			{
				// data_buffer[s,c] = Marshal.PtrToStringAnsi(tmp[s,c]);
				StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_27 = ___0_data_buffer;
				int32_t L_28 = V_3;
				int32_t L_29 = V_4;
				IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E* L_30 = V_1;
				int32_t L_31 = V_3;
				int32_t L_32 = V_4;
				NullCheck(L_30);
				intptr_t L_33;
				L_33 = (L_30)->GetAt(L_31, L_32);
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				String_t* L_34;
				L_34 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_33, NULL);
				NullCheck(L_27);
				(L_27)->SetAt(L_28, L_29, L_34);
				// for (int c = 0; c < tmp.GetLength(1); c++)
				int32_t L_35 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_35, 1));
			}

IL_005c_1:
			{
				// for (int c = 0; c < tmp.GetLength(1); c++)
				int32_t L_36 = V_4;
				IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E* L_37 = V_1;
				NullCheck((RuntimeArray*)L_37);
				int32_t L_38;
				L_38 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_37, 1, NULL);
				if ((((int32_t)L_36) < ((int32_t)L_38)))
				{
					goto IL_003f_1;
				}
			}
			{
				// for (int s = 0; s < tmp.GetLength(0); s++)
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
			}

IL_006b_1:
			{
				// for (int s = 0; s < tmp.GetLength(0); s++)
				int32_t L_40 = V_3;
				IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E* L_41 = V_1;
				NullCheck((RuntimeArray*)L_41);
				int32_t L_42;
				L_42 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_41, 0, NULL);
				if ((((int32_t)L_40) < ((int32_t)L_42)))
				{
					goto IL_003a_1;
				}
			}
			{
				// } finally {
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		// return (int)res / data_buffer.GetLength(1);
		uint32_t L_43 = V_2;
		StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* L_44 = ___0_data_buffer;
		NullCheck((RuntimeArray*)L_44);
		int32_t L_45;
		L_45 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_44, 1, NULL);
		return ((int32_t)((int32_t)L_43/L_45));
	}
}
// System.Int32 LSL.liblsl/StreamInlet::samples_available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamInlet_samples_available_m111F1A0A8D8C53EEC525BEA548478480A1D6EE84 (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, const RuntimeMethod* method) 
{
	{
		// public int samples_available() { return (int)dll.lsl_samples_available(obj); }
		intptr_t L_0 = __this->___obj_0;
		uint32_t L_1;
		L_1 = dll_lsl_samples_available_m6FF6EA7A8A8D2397ADD7F6D7C73E8F07B29CA896(L_0, NULL);
		return L_1;
	}
}
// System.Boolean LSL.liblsl/StreamInlet::was_clock_reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamInlet_was_clock_reset_mBA114297B5C04686F102F375C6071F26223E97C8 (StreamInlet_t69558C5A3B53DCACC14694B93D28EEF5BA21E8AD* __this, const RuntimeMethod* method) 
{
	{
		// public bool was_clock_reset() { return (int)dll.lsl_was_clock_reset(obj)!=0; }
		intptr_t L_0 = __this->___obj_0;
		uint32_t L_1;
		L_1 = dll_lsl_was_clock_reset_mDD4FFB3B3CE463E95493CA728EE2CF1D430E53FF(L_0, NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void LSL.liblsl/XMLElement::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		// public XMLElement(IntPtr handle) { obj = handle; }
		intptr_t L_0 = ___0_handle;
		__this->___obj_0 = L_0;
		// public XMLElement(IntPtr handle) { obj = handle; }
		return;
	}
}
IL2CPP_EXTERN_C  void XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_handle, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline(_thisAdjusted, ___0_handle, method);
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::first_child()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_first_child_mFB6AA56B9DD1E76105C7EFEEC5D55F5685DC03B3 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) 
{
	{
		// public XMLElement first_child() { return new XMLElement(dll.lsl_first_child(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_first_child_m7CD918D7F9BE640EC2B5DD38CE1646AD1F0214B3(L_0, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_2;
		memset((&L_2), 0, sizeof(L_2));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_first_child_mFB6AA56B9DD1E76105C7EFEEC5D55F5685DC03B3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_first_child_mFB6AA56B9DD1E76105C7EFEEC5D55F5685DC03B3(_thisAdjusted, method);
	return _returnValue;
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::last_child()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_last_child_mA34715331376DC0708AA759741C9D39DCA54261E (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) 
{
	{
		// public XMLElement last_child() { return new XMLElement(dll.lsl_last_child(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_last_child_m117ADF65E2AE9B2392DA35E50840FD554A5EE138(L_0, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_2;
		memset((&L_2), 0, sizeof(L_2));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_last_child_mA34715331376DC0708AA759741C9D39DCA54261E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_last_child_mA34715331376DC0708AA759741C9D39DCA54261E(_thisAdjusted, method);
	return _returnValue;
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::next_sibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_next_sibling_m6442252C8958919AE9A17CBDE97C6192564E21E0 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) 
{
	{
		// public XMLElement next_sibling() { return new XMLElement(dll.lsl_next_sibling(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_next_sibling_m1DD81FD6D4EE5117BCD4676A40E98CF766D1B92A(L_0, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_2;
		memset((&L_2), 0, sizeof(L_2));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_next_sibling_m6442252C8958919AE9A17CBDE97C6192564E21E0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_next_sibling_m6442252C8958919AE9A17CBDE97C6192564E21E0(_thisAdjusted, method);
	return _returnValue;
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::previous_sibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_previous_sibling_m77C8A6308CE20BD3F5D0A4173A64A79FC5EDE023 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) 
{
	{
		// public XMLElement previous_sibling() { return new XMLElement(dll.lsl_previous_sibling(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_previous_sibling_m1DD2FF1826323E7F0E5637C10CD3DB60364FDFC8(L_0, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_2;
		memset((&L_2), 0, sizeof(L_2));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_previous_sibling_m77C8A6308CE20BD3F5D0A4173A64A79FC5EDE023_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_previous_sibling_m77C8A6308CE20BD3F5D0A4173A64A79FC5EDE023(_thisAdjusted, method);
	return _returnValue;
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_parent_mC7A8DBEEDDF21DDC1A74FE78BFB2A91183AC4EF4 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) 
{
	{
		// public XMLElement parent() { return new XMLElement(dll.lsl_parent(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_parent_m1C7BA0420BC91DA0785A51B66F12B27D9B6E6043(L_0, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_2;
		memset((&L_2), 0, sizeof(L_2));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_parent_mC7A8DBEEDDF21DDC1A74FE78BFB2A91183AC4EF4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_parent_mC7A8DBEEDDF21DDC1A74FE78BFB2A91183AC4EF4(_thisAdjusted, method);
	return _returnValue;
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_child_m508E2F906B1F1AAA414B4A077CBEECB43797995C (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// public XMLElement child(string name) { return new XMLElement(dll.lsl_child(obj,name)); }
		intptr_t L_0 = __this->___obj_0;
		String_t* L_1 = ___0_name;
		intptr_t L_2;
		L_2 = dll_lsl_child_m9D6A8F930A211B62863089CA27C335BCF0AD8625(L_0, L_1, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_3), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_child_m508E2F906B1F1AAA414B4A077CBEECB43797995C_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_child_m508E2F906B1F1AAA414B4A077CBEECB43797995C(_thisAdjusted, ___0_name, method);
	return _returnValue;
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::next_sibling(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_next_sibling_m12C2558442E846CCCAB802B642D492C69677C18E (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// public XMLElement next_sibling(string name) { return new XMLElement(dll.lsl_next_sibling_n(obj, name)); }
		intptr_t L_0 = __this->___obj_0;
		String_t* L_1 = ___0_name;
		intptr_t L_2;
		L_2 = dll_lsl_next_sibling_n_mF7674016AAC2194187803D548AF279FD3BE35195(L_0, L_1, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_3), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_next_sibling_m12C2558442E846CCCAB802B642D492C69677C18E_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_next_sibling_m12C2558442E846CCCAB802B642D492C69677C18E(_thisAdjusted, ___0_name, method);
	return _returnValue;
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::previous_sibling(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_previous_sibling_m531BCBB58698652AAB16AA0FCBB86AA4BB40A774 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// public XMLElement previous_sibling(string name) { return new XMLElement(dll.lsl_previous_sibling_n(obj, name)); }
		intptr_t L_0 = __this->___obj_0;
		String_t* L_1 = ___0_name;
		intptr_t L_2;
		L_2 = dll_lsl_previous_sibling_n_mAD60C70784B90854BEC348E3D9DD2D416118DE1B(L_0, L_1, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_3), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_previous_sibling_m531BCBB58698652AAB16AA0FCBB86AA4BB40A774_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_previous_sibling_m531BCBB58698652AAB16AA0FCBB86AA4BB40A774(_thisAdjusted, ___0_name, method);
	return _returnValue;
}
// System.Boolean LSL.liblsl/XMLElement::empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLElement_empty_m2D0E697AB77CE383CE1FC026CD6ED408AA95963A (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) 
{
	{
		// public bool empty() { return dll.lsl_empty(obj)!=0; }
		intptr_t L_0 = __this->___obj_0;
		int32_t L_1;
		L_1 = dll_lsl_empty_m48440A51C20892ADB505B2C979022A7DDC81FE96(L_0, NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XMLElement_empty_m2D0E697AB77CE383CE1FC026CD6ED408AA95963A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	bool _returnValue;
	_returnValue = XMLElement_empty_m2D0E697AB77CE383CE1FC026CD6ED408AA95963A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean LSL.liblsl/XMLElement::is_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLElement_is_text_m6F5532A60E166256856027C39A0215DC12E6371D (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) 
{
	{
		// public bool is_text() { return dll.lsl_is_text(obj) != 0; }
		intptr_t L_0 = __this->___obj_0;
		int32_t L_1;
		L_1 = dll_lsl_is_text_mC561849ACE8BDD9C7A343D1C68D11C569AF91296(L_0, NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XMLElement_is_text_m6F5532A60E166256856027C39A0215DC12E6371D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	bool _returnValue;
	_returnValue = XMLElement_is_text_m6F5532A60E166256856027C39A0215DC12E6371D(_thisAdjusted, method);
	return _returnValue;
}
// System.String LSL.liblsl/XMLElement::name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLElement_name_m9C8C9C8EF1B65B11B0E70A102EE43BFFA1F01B9F (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string name() { return Marshal.PtrToStringAnsi(dll.lsl_name(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_name_m96A359F8D0E431D71638EFE47B8111267C41E8BA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* XMLElement_name_m9C8C9C8EF1B65B11B0E70A102EE43BFFA1F01B9F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XMLElement_name_m9C8C9C8EF1B65B11B0E70A102EE43BFFA1F01B9F(_thisAdjusted, method);
	return _returnValue;
}
// System.String LSL.liblsl/XMLElement::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLElement_value_mAA71140E308C39A4EBE0F858CE931D213364D427 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string value() { return Marshal.PtrToStringAnsi(dll.lsl_value(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_value_m90B5ED8A2004BC0063308CB825A08530927F3D6F(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* XMLElement_value_mAA71140E308C39A4EBE0F858CE931D213364D427_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XMLElement_value_mAA71140E308C39A4EBE0F858CE931D213364D427(_thisAdjusted, method);
	return _returnValue;
}
// System.String LSL.liblsl/XMLElement::child_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLElement_child_value_m2A832DFB9A8D8E569B2BB838163E98D524807F73 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string child_value() { return Marshal.PtrToStringAnsi(dll.lsl_child_value(obj)); }
		intptr_t L_0 = __this->___obj_0;
		intptr_t L_1;
		L_1 = dll_lsl_child_value_mC57727F4F935D19D67ACE32D8943786977353D62(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* XMLElement_child_value_m2A832DFB9A8D8E569B2BB838163E98D524807F73_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XMLElement_child_value_m2A832DFB9A8D8E569B2BB838163E98D524807F73(_thisAdjusted, method);
	return _returnValue;
}
// System.String LSL.liblsl/XMLElement::child_value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLElement_child_value_mECCE13420009647F6C3D83F02A92313B3D3BE2D5 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string child_value(string name) { return Marshal.PtrToStringAnsi(dll.lsl_child_value_n(obj,name)); }
		intptr_t L_0 = __this->___obj_0;
		String_t* L_1 = ___0_name;
		intptr_t L_2;
		L_2 = dll_lsl_child_value_n_mDC5D36CF48950916B3B40CB95CCC12C05C906D73(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* XMLElement_child_value_mECCE13420009647F6C3D83F02A92313B3D3BE2D5_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XMLElement_child_value_mECCE13420009647F6C3D83F02A92313B3D3BE2D5(_thisAdjusted, ___0_name, method);
	return _returnValue;
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::append_child_value(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_append_child_value_mACD97C739BBF1E1ECA3F1B96A582404BA73AD880 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		// public XMLElement append_child_value(string name, string value) { return new XMLElement(dll.lsl_append_child_value(obj, name, value)); }
		intptr_t L_0 = __this->___obj_0;
		String_t* L_1 = ___0_name;
		String_t* L_2 = ___1_value;
		intptr_t L_3;
		L_3 = dll_lsl_append_child_value_m6BD2BE72141AF4F09DD14B80FB1FE297077C14B3(L_0, L_1, L_2, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_4;
		memset((&L_4), 0, sizeof(L_4));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_4), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_append_child_value_mACD97C739BBF1E1ECA3F1B96A582404BA73AD880_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_append_child_value_mACD97C739BBF1E1ECA3F1B96A582404BA73AD880(_thisAdjusted, ___0_name, ___1_value, method);
	return _returnValue;
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::prepend_child_value(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_prepend_child_value_m6FCC8974C391EEA45C9C3770B8786CD3D66E3BF4 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		// public XMLElement prepend_child_value(string name, string value) { return new XMLElement(dll.lsl_prepend_child_value(obj, name, value)); }
		intptr_t L_0 = __this->___obj_0;
		String_t* L_1 = ___0_name;
		String_t* L_2 = ___1_value;
		intptr_t L_3;
		L_3 = dll_lsl_prepend_child_value_m5E0A1BC418CC28CDE14362B7E2A965BFDB1CA394(L_0, L_1, L_2, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_4;
		memset((&L_4), 0, sizeof(L_4));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_4), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_prepend_child_value_m6FCC8974C391EEA45C9C3770B8786CD3D66E3BF4_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_prepend_child_value_m6FCC8974C391EEA45C9C3770B8786CD3D66E3BF4(_thisAdjusted, ___0_name, ___1_value, method);
	return _returnValue;
}
// System.Boolean LSL.liblsl/XMLElement::set_child_value(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLElement_set_child_value_m16C6A5A54B485EBECC810C5247A9A0A0F1AFFD05 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		// public bool set_child_value(string name, string value) { return dll.lsl_set_child_value(obj, name, value) != 0; }
		intptr_t L_0 = __this->___obj_0;
		String_t* L_1 = ___0_name;
		String_t* L_2 = ___1_value;
		int32_t L_3;
		L_3 = dll_lsl_set_child_value_m5441540DE146EF8ECF276E18D5E8C6D09B89EF04(L_0, L_1, L_2, NULL);
		return (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XMLElement_set_child_value_m16C6A5A54B485EBECC810C5247A9A0A0F1AFFD05_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	bool _returnValue;
	_returnValue = XMLElement_set_child_value_m16C6A5A54B485EBECC810C5247A9A0A0F1AFFD05(_thisAdjusted, ___0_name, ___1_value, method);
	return _returnValue;
}
// System.Boolean LSL.liblsl/XMLElement::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLElement_set_name_m179828D9C123E38667D2CABD6AE21A336E90C574 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_rhs, const RuntimeMethod* method) 
{
	{
		// public bool set_name(string rhs) { return dll.lsl_set_name(obj, rhs) != 0; }
		intptr_t L_0 = __this->___obj_0;
		String_t* L_1 = ___0_rhs;
		int32_t L_2;
		L_2 = dll_lsl_set_name_mD89B1E0A6C5DC026CFE40B9F0F72515B5300EE7A(L_0, L_1, NULL);
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XMLElement_set_name_m179828D9C123E38667D2CABD6AE21A336E90C574_AdjustorThunk (RuntimeObject* __this, String_t* ___0_rhs, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	bool _returnValue;
	_returnValue = XMLElement_set_name_m179828D9C123E38667D2CABD6AE21A336E90C574(_thisAdjusted, ___0_rhs, method);
	return _returnValue;
}
// System.Boolean LSL.liblsl/XMLElement::set_value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLElement_set_value_m45EA0BE80A11E7DFEC7A8D73AA663B2209B11A29 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_rhs, const RuntimeMethod* method) 
{
	{
		// public bool set_value(string rhs) { return dll.lsl_set_value(obj, rhs) != 0; }
		intptr_t L_0 = __this->___obj_0;
		String_t* L_1 = ___0_rhs;
		int32_t L_2;
		L_2 = dll_lsl_set_value_m42FFAF2B3E2400F32EDD2D78E15F95E062436806(L_0, L_1, NULL);
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XMLElement_set_value_m45EA0BE80A11E7DFEC7A8D73AA663B2209B11A29_AdjustorThunk (RuntimeObject* __this, String_t* ___0_rhs, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	bool _returnValue;
	_returnValue = XMLElement_set_value_m45EA0BE80A11E7DFEC7A8D73AA663B2209B11A29(_thisAdjusted, ___0_rhs, method);
	return _returnValue;
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::append_child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_append_child_m354E54DDF95E2A9C1D85CACE0D9735BB3875BA65 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// public XMLElement append_child(string name) { return new XMLElement(dll.lsl_append_child(obj, name)); }
		intptr_t L_0 = __this->___obj_0;
		String_t* L_1 = ___0_name;
		intptr_t L_2;
		L_2 = dll_lsl_append_child_mAD03EC0D3963839197D11FDCBDF56267C1D89897(L_0, L_1, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_3), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_append_child_m354E54DDF95E2A9C1D85CACE0D9735BB3875BA65_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_append_child_m354E54DDF95E2A9C1D85CACE0D9735BB3875BA65(_thisAdjusted, ___0_name, method);
	return _returnValue;
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::prepend_child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_prepend_child_m32866A181FE530FB9FA5D31CD4F0A3C8CFC27263 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// public XMLElement prepend_child(string name) { return new XMLElement(dll.lsl_prepend_child(obj, name)); }
		intptr_t L_0 = __this->___obj_0;
		String_t* L_1 = ___0_name;
		intptr_t L_2;
		L_2 = dll_lsl_prepend_child_m662F88AAA69A851A82A3B4390A831D40E8174D43(L_0, L_1, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_3), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_prepend_child_m32866A181FE530FB9FA5D31CD4F0A3C8CFC27263_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_prepend_child_m32866A181FE530FB9FA5D31CD4F0A3C8CFC27263(_thisAdjusted, ___0_name, method);
	return _returnValue;
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::append_copy(LSL.liblsl/XMLElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_append_copy_mC02D638CAA862EF32D6C5EE05CB12A9A2E5959F5 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 ___0_e, const RuntimeMethod* method) 
{
	{
		// public XMLElement append_copy(XMLElement e) { return new XMLElement(dll.lsl_append_copy(obj, e.obj)); }
		intptr_t L_0 = __this->___obj_0;
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_1 = ___0_e;
		intptr_t L_2 = L_1.___obj_0;
		intptr_t L_3;
		L_3 = dll_lsl_append_copy_mAB0A84C4D6A7020BBF0E6C089B31B296D5B45392(L_0, L_2, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_4;
		memset((&L_4), 0, sizeof(L_4));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_4), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_append_copy_mC02D638CAA862EF32D6C5EE05CB12A9A2E5959F5_AdjustorThunk (RuntimeObject* __this, XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 ___0_e, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_append_copy_mC02D638CAA862EF32D6C5EE05CB12A9A2E5959F5(_thisAdjusted, ___0_e, method);
	return _returnValue;
}
// LSL.liblsl/XMLElement LSL.liblsl/XMLElement::prepend_copy(LSL.liblsl/XMLElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_prepend_copy_m0E4021EC81FA4A9AE4CE44ACE9F663BD4DD39084 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 ___0_e, const RuntimeMethod* method) 
{
	{
		// public XMLElement prepend_copy(XMLElement e) { return new XMLElement(dll.lsl_prepend_copy(obj, e.obj)); }
		intptr_t L_0 = __this->___obj_0;
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_1 = ___0_e;
		intptr_t L_2 = L_1.___obj_0;
		intptr_t L_3;
		L_3 = dll_lsl_prepend_copy_mCB4D515F87870985BCD022894F781B232EACA254(L_0, L_2, NULL);
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_4;
		memset((&L_4), 0, sizeof(L_4));
		XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline((&L_4), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 XMLElement_prepend_copy_m0E4021EC81FA4A9AE4CE44ACE9F663BD4DD39084_AdjustorThunk (RuntimeObject* __this, XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 ___0_e, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 _returnValue;
	_returnValue = XMLElement_prepend_copy_m0E4021EC81FA4A9AE4CE44ACE9F663BD4DD39084(_thisAdjusted, ___0_e, method);
	return _returnValue;
}
// System.Void LSL.liblsl/XMLElement::remove_child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLElement_remove_child_m4C57ABA865B892872CE6AFC038AFBF28090B8317 (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// public void remove_child(string name) { dll.lsl_remove_child_n(obj, name); }
		intptr_t L_0 = __this->___obj_0;
		String_t* L_1 = ___0_name;
		dll_lsl_remove_child_n_m82A57F31803DD8F4631D8F8D3988887834D4B533(L_0, L_1, NULL);
		// public void remove_child(string name) { dll.lsl_remove_child_n(obj, name); }
		return;
	}
}
IL2CPP_EXTERN_C  void XMLElement_remove_child_m4C57ABA865B892872CE6AFC038AFBF28090B8317_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_remove_child_m4C57ABA865B892872CE6AFC038AFBF28090B8317(_thisAdjusted, ___0_name, method);
}
// System.Void LSL.liblsl/XMLElement::remove_child(LSL.liblsl/XMLElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLElement_remove_child_mDB2F8637ECDD39313283E1BC1CDB16CFC87C96CD (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 ___0_e, const RuntimeMethod* method) 
{
	{
		// public void remove_child(XMLElement e) { dll.lsl_remove_child(obj, e.obj); }
		intptr_t L_0 = __this->___obj_0;
		XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 L_1 = ___0_e;
		intptr_t L_2 = L_1.___obj_0;
		dll_lsl_remove_child_m94954DEE964A448597A9FF52F99B3DB2A07A350C(L_0, L_2, NULL);
		// public void remove_child(XMLElement e) { dll.lsl_remove_child(obj, e.obj); }
		return;
	}
}
IL2CPP_EXTERN_C  void XMLElement_remove_child_mDB2F8637ECDD39313283E1BC1CDB16CFC87C96CD_AdjustorThunk (RuntimeObject* __this, XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1 ___0_e, const RuntimeMethod* method)
{
	XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1*>(__this + _offset);
	XMLElement_remove_child_mDB2F8637ECDD39313283E1BC1CDB16CFC87C96CD(_thisAdjusted, ___0_e, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LSL.liblsl/ContinuousResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContinuousResolver__ctor_m7D6A4C0F15DA4AC7526A8030F3F578916C7DC264 (ContinuousResolver_tBB02F2FABFA42B9399368A2177445CD29AFA78D8* __this, const RuntimeMethod* method) 
{
	{
		// public ContinuousResolver() { obj = dll.lsl_create_continuous_resolver(5.0); }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ContinuousResolver() { obj = dll.lsl_create_continuous_resolver(5.0); }
		intptr_t L_0;
		L_0 = dll_lsl_create_continuous_resolver_mDF0013DADF1FBECFEE9649F72061A2ACDB1F13B0((5.0), NULL);
		__this->___obj_0 = L_0;
		// public ContinuousResolver() { obj = dll.lsl_create_continuous_resolver(5.0); }
		return;
	}
}
// System.Void LSL.liblsl/ContinuousResolver::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContinuousResolver__ctor_m11B50D61345E26D4F69593ACE17787F9D90CCB37 (ContinuousResolver_tBB02F2FABFA42B9399368A2177445CD29AFA78D8* __this, double ___0_forget_after, const RuntimeMethod* method) 
{
	{
		// public ContinuousResolver(double forget_after) { obj = dll.lsl_create_continuous_resolver(forget_after); }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ContinuousResolver(double forget_after) { obj = dll.lsl_create_continuous_resolver(forget_after); }
		double L_0 = ___0_forget_after;
		intptr_t L_1;
		L_1 = dll_lsl_create_continuous_resolver_mDF0013DADF1FBECFEE9649F72061A2ACDB1F13B0(L_0, NULL);
		__this->___obj_0 = L_1;
		// public ContinuousResolver(double forget_after) { obj = dll.lsl_create_continuous_resolver(forget_after); }
		return;
	}
}
// System.Void LSL.liblsl/ContinuousResolver::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContinuousResolver__ctor_m42AE25D01C17DE758269342FBDE6E29BE74CFCFA (ContinuousResolver_tBB02F2FABFA42B9399368A2177445CD29AFA78D8* __this, String_t* ___0_prop, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		// public ContinuousResolver(string prop, string value) { obj = dll.lsl_create_continuous_resolver_byprop(prop, value, 5.0); }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ContinuousResolver(string prop, string value) { obj = dll.lsl_create_continuous_resolver_byprop(prop, value, 5.0); }
		String_t* L_0 = ___0_prop;
		String_t* L_1 = ___1_value;
		intptr_t L_2;
		L_2 = dll_lsl_create_continuous_resolver_byprop_m4CDE27287C89BA609B92E85D438C7CA0B1F45110(L_0, L_1, (5.0), NULL);
		__this->___obj_0 = L_2;
		// public ContinuousResolver(string prop, string value) { obj = dll.lsl_create_continuous_resolver_byprop(prop, value, 5.0); }
		return;
	}
}
// System.Void LSL.liblsl/ContinuousResolver::.ctor(System.String,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContinuousResolver__ctor_m98931766814C0B531E1BEA771D74391CF273928A (ContinuousResolver_tBB02F2FABFA42B9399368A2177445CD29AFA78D8* __this, String_t* ___0_prop, String_t* ___1_value, double ___2_forget_after, const RuntimeMethod* method) 
{
	{
		// public ContinuousResolver(string prop, string value, double forget_after) { obj = dll.lsl_create_continuous_resolver_byprop(prop, value, forget_after); }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ContinuousResolver(string prop, string value, double forget_after) { obj = dll.lsl_create_continuous_resolver_byprop(prop, value, forget_after); }
		String_t* L_0 = ___0_prop;
		String_t* L_1 = ___1_value;
		double L_2 = ___2_forget_after;
		intptr_t L_3;
		L_3 = dll_lsl_create_continuous_resolver_byprop_m4CDE27287C89BA609B92E85D438C7CA0B1F45110(L_0, L_1, L_2, NULL);
		__this->___obj_0 = L_3;
		// public ContinuousResolver(string prop, string value, double forget_after) { obj = dll.lsl_create_continuous_resolver_byprop(prop, value, forget_after); }
		return;
	}
}
// System.Void LSL.liblsl/ContinuousResolver::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContinuousResolver__ctor_m8EF0865DCA95772976D5D92D4CFCF2526BFC76BB (ContinuousResolver_tBB02F2FABFA42B9399368A2177445CD29AFA78D8* __this, String_t* ___0_pred, const RuntimeMethod* method) 
{
	{
		// public ContinuousResolver(string pred) { obj = dll.lsl_create_continuous_resolver_bypred(pred, 5.0); }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ContinuousResolver(string pred) { obj = dll.lsl_create_continuous_resolver_bypred(pred, 5.0); }
		String_t* L_0 = ___0_pred;
		intptr_t L_1;
		L_1 = dll_lsl_create_continuous_resolver_bypred_mBA1D02F3FBB1281BFE056DAE7695E5AF728CA175(L_0, (5.0), NULL);
		__this->___obj_0 = L_1;
		// public ContinuousResolver(string pred) { obj = dll.lsl_create_continuous_resolver_bypred(pred, 5.0); }
		return;
	}
}
// System.Void LSL.liblsl/ContinuousResolver::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContinuousResolver__ctor_mFBDB8055A16F50C36D5D27DC7A2AFC3E4D10D02C (ContinuousResolver_tBB02F2FABFA42B9399368A2177445CD29AFA78D8* __this, String_t* ___0_pred, double ___1_forget_after, const RuntimeMethod* method) 
{
	{
		// public ContinuousResolver(string pred, double forget_after) { obj = dll.lsl_create_continuous_resolver_bypred(pred, forget_after); }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ContinuousResolver(string pred, double forget_after) { obj = dll.lsl_create_continuous_resolver_bypred(pred, forget_after); }
		String_t* L_0 = ___0_pred;
		double L_1 = ___1_forget_after;
		intptr_t L_2;
		L_2 = dll_lsl_create_continuous_resolver_bypred_mBA1D02F3FBB1281BFE056DAE7695E5AF728CA175(L_0, L_1, NULL);
		__this->___obj_0 = L_2;
		// public ContinuousResolver(string pred, double forget_after) { obj = dll.lsl_create_continuous_resolver_bypred(pred, forget_after); }
		return;
	}
}
// System.Void LSL.liblsl/ContinuousResolver::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContinuousResolver_Finalize_mA79A9CF1D3C8BE7CE6BC283511A8DDC98DF5963A (ContinuousResolver_tBB02F2FABFA42B9399368A2177445CD29AFA78D8* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				// ~ContinuousResolver() { dll.lsl_destroy_continuous_resolver(obj); }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// ~ContinuousResolver() { dll.lsl_destroy_continuous_resolver(obj); }
			intptr_t L_0 = __this->___obj_0;
			dll_lsl_destroy_continuous_resolver_m769FCC1A3355F9A642E53A16D3212A22505E4304(L_0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		// ~ContinuousResolver() { dll.lsl_destroy_continuous_resolver(obj); }
		return;
	}
}
// LSL.liblsl/StreamInfo[] LSL.liblsl/ContinuousResolver::results()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* ContinuousResolver_results_mE7877293C9917ACF85470EEB6FB39CA3D1180D3E (ContinuousResolver_tBB02F2FABFA42B9399368A2177445CD29AFA78D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	int32_t V_1 = 0;
	StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// IntPtr[] buf = new IntPtr[1024];
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		// int num = dll.lsl_resolver_results(obj,buf,(uint)buf.Length);
		intptr_t L_1 = __this->___obj_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = dll_lsl_resolver_results_mA72EB8502CF5B0AA30C3834E5568AFEBEC94A39A(L_1, L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		V_1 = L_4;
		// StreamInfo[] res = new StreamInfo[num];
		int32_t L_5 = V_1;
		StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* L_6 = (StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E*)(StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E*)SZArrayNew(StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		// for (int k = 0; k < num; k++)
		V_3 = 0;
		goto IL_0035;
	}

IL_0026:
	{
		// res[k] = new StreamInfo(buf[k]);
		StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* L_7 = V_2;
		int32_t L_8 = V_3;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_9 = V_0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		intptr_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* L_13 = (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F*)il2cpp_codegen_object_new(StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StreamInfo__ctor_m27903FA04B0B7B11F75CE51C857174672653820C(L_13, L_12, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_13);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F*)L_13);
		// for (int k = 0; k < num; k++)
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0035:
	{
		// for (int k = 0; k < num; k++)
		int32_t L_15 = V_3;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0026;
		}
	}
	{
		// return res;
		StreamInfoU5BU5D_t55A86F0E9A47CC7C85603D79255BF618E378DD7E* L_17 = V_2;
		return L_17;
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
// System.Void LSL.liblsl/LostException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostException__ctor_mF8D689BBD7EDEFFE5D6B60E760101A7DF170D173 (LostException_tC87FD7F8B17326CBFC0F3459C72D29B93E110703* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LostException() { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public LostException() { }
		return;
	}
}
// System.Void LSL.liblsl/LostException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostException__ctor_m54D90B4F732D3FE7DFC78813E38ADBCE75C16262 (LostException_tC87FD7F8B17326CBFC0F3459C72D29B93E110703* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LostException(string message) { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public LostException(string message) { }
		return;
	}
}
// System.Void LSL.liblsl/LostException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostException__ctor_m8E4E40BFD928F2DF8C8CE71A94BE0E88E822F2C7 (LostException_tC87FD7F8B17326CBFC0F3459C72D29B93E110703* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LostException(string message, System.Exception inner) { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public LostException(string message, System.Exception inner) { }
		return;
	}
}
// System.Void LSL.liblsl/LostException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostException__ctor_mA89AD1CC8C17348FBAD8F93E14B64552A8D48F67 (LostException_tC87FD7F8B17326CBFC0F3459C72D29B93E110703* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected LostException(System.Runtime.Serialization.SerializationInfo info,
		//     System.Runtime.Serialization.StreamingContext context) { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// System.Runtime.Serialization.StreamingContext context) { }
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
// System.Void LSL.liblsl/InternalException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalException__ctor_mD4A0AE242EA8E7E249B680534A9F2C0C255F29A4 (InternalException_t62CBC9B5AE0095D52E1F032889AAA37FAD6D7FFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InternalException() { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public InternalException() { }
		return;
	}
}
// System.Void LSL.liblsl/InternalException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalException__ctor_m05E9B87599B80C3FD2C1973C57C222042723CBCE (InternalException_t62CBC9B5AE0095D52E1F032889AAA37FAD6D7FFA* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InternalException(string message) { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public InternalException(string message) { }
		return;
	}
}
// System.Void LSL.liblsl/InternalException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalException__ctor_m1BF23246F84383A4572CB3A92D91208A82027EA9 (InternalException_t62CBC9B5AE0095D52E1F032889AAA37FAD6D7FFA* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InternalException(string message, System.Exception inner) { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public InternalException(string message, System.Exception inner) { }
		return;
	}
}
// System.Void LSL.liblsl/InternalException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalException__ctor_mA1AC088D8637B3F55E2B7D13ECAE669D388C7843 (InternalException_t62CBC9B5AE0095D52E1F032889AAA37FAD6D7FFA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected InternalException(System.Runtime.Serialization.SerializationInfo info,
		//     System.Runtime.Serialization.StreamingContext context) { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// System.Runtime.Serialization.StreamingContext context) { }
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
// System.Int32 LSL.liblsl/dll::lsl_protocol_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_protocol_version_mAE5938B00376F54653433FF698563E28D658DF6F (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_protocol_version", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_protocol_version)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_library_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_library_version_mC37D0B7214261016D2DB4651BA697497AE6C8BEA (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_library_version", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_library_version)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Double LSL.liblsl/dll::lsl_local_clock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_local_clock_mE350521C11650AD9A7678649DBDE1D8D845A3A67 (const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_local_clock", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(lsl_local_clock)();
	#else
	double returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_create_streaminfo(System.String,System.String,System.Int32,System.Double,LSL.liblsl/channel_format_t,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_create_streaminfo_mEE4186A1E190E507F93868F29451D7C9043D2E2B (String_t* ___0_name, String_t* ___1_type, int32_t ___2_channel_count, double ___3_nominal_srate, uint8_t ___4_channel_format, String_t* ___5_source_id, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (char*, char*, int32_t, double, uint8_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*) + sizeof(int32_t) + sizeof(double) + sizeof(uint8_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_create_streaminfo", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_name' to native representation
	char* ____0_name_marshaled = NULL;
	____0_name_marshaled = il2cpp_codegen_marshal_string(___0_name);

	// Marshaling of parameter '___1_type' to native representation
	char* ____1_type_marshaled = NULL;
	____1_type_marshaled = il2cpp_codegen_marshal_string(___1_type);

	// Marshaling of parameter '___5_source_id' to native representation
	char* ____5_source_id_marshaled = NULL;
	____5_source_id_marshaled = il2cpp_codegen_marshal_string(___5_source_id);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_create_streaminfo)(____0_name_marshaled, ____1_type_marshaled, ___2_channel_count, ___3_nominal_srate, ___4_channel_format, ____5_source_id_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_name_marshaled, ____1_type_marshaled, ___2_channel_count, ___3_nominal_srate, ___4_channel_format, ____5_source_id_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_name' native representation
	il2cpp_codegen_marshal_free(____0_name_marshaled);
	____0_name_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_type' native representation
	il2cpp_codegen_marshal_free(____1_type_marshaled);
	____1_type_marshaled = NULL;

	// Marshaling cleanup of parameter '___5_source_id' native representation
	il2cpp_codegen_marshal_free(____5_source_id_marshaled);
	____5_source_id_marshaled = NULL;

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_destroy_streaminfo(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_destroy_streaminfo_mA9D7FDAE837CDA23C19D07F9B675FB42088D8692 (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_destroy_streaminfo", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_destroy_streaminfo)(___0_info);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_get_name(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_name_mE68CBD63A14500F5F4394886D6B741951F76992F (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_name", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_name)(___0_info);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_get_type(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_type_m53D7FC62DC021488359EE14787A643D8DCF0A097 (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_type", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_type)(___0_info);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_get_channel_count(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_get_channel_count_m7134F1674F5BBDD322AE3D52B348AE18E9B8253E (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_channel_count", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_channel_count)(___0_info);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// System.Double LSL.liblsl/dll::lsl_get_nominal_srate(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_get_nominal_srate_mB747CDCC73026871CC3BFAD467E806B3B4F2CC69 (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_nominal_srate", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_nominal_srate)(___0_info);
	#else
	double returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// LSL.liblsl/channel_format_t LSL.liblsl/dll::lsl_get_channel_format(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t dll_lsl_get_channel_format_m2D4C88CAC687EA5EA3AF6EA2E1AAC6EC9E91437B (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef uint8_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_channel_format", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_channel_format)(___0_info);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_get_source_id(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_source_id_m35E1FC777087D6EF0D39B3BF2166011797F663EA (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_source_id", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_source_id)(___0_info);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_get_version(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_get_version_m1EF244954E414AE7FEECBBAF7C7864A8CCA965CA (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_version", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_version)(___0_info);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// System.Double LSL.liblsl/dll::lsl_get_created_at(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_get_created_at_mBAA0BDC8E7AB886EF9CFC5A9714D6CA42AFE7964 (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_created_at", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_created_at)(___0_info);
	#else
	double returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_get_uid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_uid_m22A8DA3B12F3AEBF386D06721BAEDB82642877C8 (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_uid", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_uid)(___0_info);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_get_session_id(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_session_id_mE07D131FAA6F1BBB0ED768F425D01E0F97805BCD (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_session_id", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_session_id)(___0_info);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_get_hostname(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_hostname_m3C7D3C0578950C8AE47B918CC4E3380410AEF430 (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_hostname", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_hostname)(___0_info);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_get_desc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_desc_mEE633A65A890CBD1AAAEC1B3CBE79D55D6939CD4 (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_desc", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_desc)(___0_info);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_get_xml(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_xml_m65D40CDA7CD624D049D29628AB66CA811F29FB54 (intptr_t ___0_info, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_xml", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_xml)(___0_info);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_info);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_create_outlet(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_create_outlet_mD425A821973A7FCF002EC24F885249E742039917 (intptr_t ___0_info, int32_t ___1_chunk_size, int32_t ___2_max_buffered, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_create_outlet", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_create_outlet)(___0_info, ___1_chunk_size, ___2_max_buffered);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_info, ___1_chunk_size, ___2_max_buffered);
	#endif

	return returnValue;
}
// System.Void LSL.liblsl/dll::lsl_destroy_outlet(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_destroy_outlet_mF4D1A63C444696B689C2669CFD42901B4987B52E (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_destroy_outlet", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	reinterpret_cast<PInvokeFunc>(lsl_destroy_outlet)(___0_obj);
	#else
	il2cppPInvokeFunc(___0_obj);
	#endif

}
// System.Int32 LSL.liblsl/dll::lsl_push_sample_ftp(System.IntPtr,System.Single[],System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_sample_ftp_m3D2BA2ECBCB89109DBDBC1DD9BA9B87C4464816C (intptr_t ___0_obj, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_data, double ___2_timestamp, int32_t ___3_pushthrough, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*, double, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(double) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_push_sample_ftp", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_data' to native representation
	float* ____1_data_marshaled = NULL;
	if (___1_data != NULL)
	{
		____1_data_marshaled = reinterpret_cast<float*>((___1_data)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_push_sample_ftp)(___0_obj, ____1_data_marshaled, ___2_timestamp, ___3_pushthrough);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_obj, ____1_data_marshaled, ___2_timestamp, ___3_pushthrough);
	#endif

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_push_sample_dtp(System.IntPtr,System.Double[],System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_sample_dtp_m014B9A6F4D8F73689124E84CBFD8D514057AE67A (intptr_t ___0_obj, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_data, double ___2_timestamp, int32_t ___3_pushthrough, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, double*, double, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(double) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_push_sample_dtp", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_data' to native representation
	double* ____1_data_marshaled = NULL;
	if (___1_data != NULL)
	{
		____1_data_marshaled = reinterpret_cast<double*>((___1_data)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_push_sample_dtp)(___0_obj, ____1_data_marshaled, ___2_timestamp, ___3_pushthrough);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_obj, ____1_data_marshaled, ___2_timestamp, ___3_pushthrough);
	#endif

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_push_sample_itp(System.IntPtr,System.Int32[],System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_sample_itp_m0A71969B78EE52A2D89DCACCFB10248AA44E5A02 (intptr_t ___0_obj, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_data, double ___2_timestamp, int32_t ___3_pushthrough, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t*, double, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(double) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_push_sample_itp", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_data' to native representation
	int32_t* ____1_data_marshaled = NULL;
	if (___1_data != NULL)
	{
		____1_data_marshaled = reinterpret_cast<int32_t*>((___1_data)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_push_sample_itp)(___0_obj, ____1_data_marshaled, ___2_timestamp, ___3_pushthrough);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_obj, ____1_data_marshaled, ___2_timestamp, ___3_pushthrough);
	#endif

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_push_sample_stp(System.IntPtr,System.Int16[],System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_sample_stp_mC8598E1C6A69F031CB09258024E5BE5AC1813CD2 (intptr_t ___0_obj, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___1_data, double ___2_timestamp, int32_t ___3_pushthrough, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int16_t*, double, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(double) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_push_sample_stp", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_data' to native representation
	int16_t* ____1_data_marshaled = NULL;
	if (___1_data != NULL)
	{
		____1_data_marshaled = reinterpret_cast<int16_t*>((___1_data)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_push_sample_stp)(___0_obj, ____1_data_marshaled, ___2_timestamp, ___3_pushthrough);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_obj, ____1_data_marshaled, ___2_timestamp, ___3_pushthrough);
	#endif

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_push_sample_ctp(System.IntPtr,System.Char[],System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_sample_ctp_mB57C7CBA74EA9055CC4A6E6673567E0BD63D17C2 (intptr_t ___0_obj, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___1_data, double ___2_timestamp, int32_t ___3_pushthrough, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, double, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(double) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_push_sample_ctp", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_data' to native representation
	uint8_t* ____1_data_marshaled = NULL;
	if (___1_data != NULL)
	{
		il2cpp_array_size_t ____1_data_Length = (___1_data)->max_length;
		____1_data_marshaled = il2cpp_codegen_marshal_allocate_array<uint8_t>(____1_data_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_data_Length); i++)
		{
			(____1_data_marshaled)[i] = static_cast<uint8_t>((___1_data)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____1_data_marshaled = NULL;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_push_sample_ctp)(___0_obj, ____1_data_marshaled, ___2_timestamp, ___3_pushthrough);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_obj, ____1_data_marshaled, ___2_timestamp, ___3_pushthrough);
	#endif

	// Marshaling cleanup of parameter '___1_data' native representation
	if (____1_data_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____1_data_marshaled);
		____1_data_marshaled = NULL;
	}

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_push_sample_strtp(System.IntPtr,System.String[],System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_sample_strtp_m9370E5DA39ECD637CB24B54AE2806D3BD3F92DC8 (intptr_t ___0_obj, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_data, double ___2_timestamp, int32_t ___3_pushthrough, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char**, double, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(double) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_push_sample_strtp", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_data' to native representation
	char** ____1_data_marshaled = NULL;
	if (___1_data != NULL)
	{
		il2cpp_array_size_t ____1_data_Length = (___1_data)->max_length;
		____1_data_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____1_data_Length + 1);
		(____1_data_marshaled)[____1_data_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_data_Length); i++)
		{
			(____1_data_marshaled)[i] = il2cpp_codegen_marshal_string((___1_data)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____1_data_marshaled = NULL;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_push_sample_strtp)(___0_obj, ____1_data_marshaled, ___2_timestamp, ___3_pushthrough);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_obj, ____1_data_marshaled, ___2_timestamp, ___3_pushthrough);
	#endif

	// Marshaling cleanup of parameter '___1_data' native representation
	if (____1_data_marshaled != NULL)
	{
		const il2cpp_array_size_t ____1_data_marshaled_CleanupLoopCount = (___1_data != NULL) ? (___1_data)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_data_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____1_data_marshaled)[i]);
			(____1_data_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____1_data_marshaled);
		____1_data_marshaled = NULL;
	}

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_push_sample_buftp(System.IntPtr,System.Char[][],System.UInt32[],System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_sample_buftp_m7ACA6AFEF9859E7425EB52B1133EEE68CD96B70C (intptr_t ___0_obj, CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ___1_data, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_lengths, double ___3_timestamp, int32_t ___4_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Char[][]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_ftp(System.IntPtr,System.Single[,],System.UInt32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_ftp_m96081403822D28F62877A8E03A249B34739B4F9C (intptr_t ___0_obj, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___1_data, uint32_t ___2_data_elements, double ___3_timestamp, int32_t ___4_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Single[,]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_ftnp(System.IntPtr,System.Single[,],System.UInt32,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_ftnp_m6AC024F97219BAAEF21E65271D5F720292AF0E60 (intptr_t ___0_obj, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___1_data, uint32_t ___2_data_elements, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_timestamps, int32_t ___4_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Single[,]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_dtp(System.IntPtr,System.Double[,],System.UInt32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_dtp_mC271190B7CDB9A63EDC90A37E9C268A8D0D53194 (intptr_t ___0_obj, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___1_data, uint32_t ___2_data_elements, double ___3_timestamp, int32_t ___4_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Double[,]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_dtnp(System.IntPtr,System.Double[,],System.UInt32,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_dtnp_mA495949A7C521F461557C1B6ACE787D0EF0DA34E (intptr_t ___0_obj, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___1_data, uint32_t ___2_data_elements, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_timestamps, int32_t ___4_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Double[,]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_itp(System.IntPtr,System.Int32[,],System.UInt32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_itp_m3195C6772C50F1EBAD9D92C824A31DA5766FAAA4 (intptr_t ___0_obj, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___1_data, uint32_t ___2_data_elements, double ___3_timestamp, int32_t ___4_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Int32[,]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_itnp(System.IntPtr,System.Int32[,],System.UInt32,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_itnp_mA10442375713DDD11365371584EBD75671466DF5 (intptr_t ___0_obj, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___1_data, uint32_t ___2_data_elements, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_timestamps, int32_t ___4_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Int32[,]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_stp(System.IntPtr,System.Int16[,],System.UInt32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_stp_m0141AB8348949EAB3000404BC5CF82E1E2A09322 (intptr_t ___0_obj, Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* ___1_data, uint32_t ___2_data_elements, double ___3_timestamp, int32_t ___4_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Int16[,]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_stnp(System.IntPtr,System.Int16[,],System.UInt32,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_stnp_mA7027EEAE1FCA3F4C560141D90C94E44D410BE6D (intptr_t ___0_obj, Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* ___1_data, uint32_t ___2_data_elements, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_timestamps, int32_t ___4_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Int16[,]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_ctp(System.IntPtr,System.Char[,],System.UInt32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_ctp_m6267D0F9CB1201FE30812AC75C7BAF87E6870981 (intptr_t ___0_obj, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* ___1_data, uint32_t ___2_data_elements, double ___3_timestamp, int32_t ___4_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Char[,]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_ctnp(System.IntPtr,System.Char[,],System.UInt32,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_ctnp_mD3E65743C0E1259B7A89AE31BF1710848C0DBEB1 (intptr_t ___0_obj, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* ___1_data, uint32_t ___2_data_elements, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_timestamps, int32_t ___4_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Char[,]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_strtp(System.IntPtr,System.String[,],System.UInt32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_strtp_mE6E231CBD12C14DBF68DA5C655D6CE8D202AA2BF (intptr_t ___0_obj, StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* ___1_data, uint32_t ___2_data_elements, double ___3_timestamp, int32_t ___4_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.String[,]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_strtnp(System.IntPtr,System.String[,],System.UInt32,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_strtnp_m1C9E5E0D60FA5782A18D522835674A8F311582BE (intptr_t ___0_obj, StringU5BU2CU5D_tF2843FC5B60496ACCA54AD6538897DBA3E19A7EF* ___1_data, uint32_t ___2_data_elements, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_timestamps, int32_t ___4_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.String[,]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_buftp(System.IntPtr,System.Char[][],System.UInt32[],System.UInt32,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_buftp_m6BA85C4F8E78A445A59417F94BE4BA5D1BCFE894 (intptr_t ___0_obj, CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ___1_data, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_lengths, uint32_t ___3_data_elements, double ___4_timestamp, int32_t ___5_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Char[][]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_push_chunk_buftnp(System.IntPtr,System.Char[][],System.UInt32[],System.UInt32,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_push_chunk_buftnp_m6F68F7855ECC4CCD8D3BD3F6BF97FF48566F88AD (intptr_t ___0_obj, CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ___1_data, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_lengths, uint32_t ___3_data_elements, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___4_timestamps, int32_t ___5_pushthrough, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Char[][]'."), NULL);
}
// System.Int32 LSL.liblsl/dll::lsl_have_consumers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_have_consumers_mA508BBD02ECE4D57323DF98EC530CD6B8D699003 (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_have_consumers", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_have_consumers)(___0_obj);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_obj);
	#endif

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_wait_for_consumers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_wait_for_consumers_m00B5A15B65134DA1F7A1BDB11A8BC36A9995770C (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_wait_for_consumers", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_wait_for_consumers)(___0_obj);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_obj);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_get_info(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_info_m8FE185F12CA752C3440CE6B45BB0B62E9809D886 (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_info", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_info)(___0_obj);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_obj);
	#endif

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_resolve_all(System.IntPtr[],System.UInt32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_resolve_all_mA3CB5A96360DE2530CF84E5FCDFBA70839FCEE40 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_buffer, uint32_t ___1_buffer_elements, double ___2_wait_time, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t*, uint32_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint32_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_resolve_all", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_buffer' to native representation
	intptr_t* ____0_buffer_marshaled = NULL;
	if (___0_buffer != NULL)
	{
		____0_buffer_marshaled = reinterpret_cast<intptr_t*>((___0_buffer)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_resolve_all)(____0_buffer_marshaled, ___1_buffer_elements, ___2_wait_time);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_buffer_marshaled, ___1_buffer_elements, ___2_wait_time);
	#endif

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_resolve_byprop(System.IntPtr[],System.UInt32,System.String,System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_resolve_byprop_mC6E3F3E5558217E16E85525B321B9CEE2676605D (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_buffer, uint32_t ___1_buffer_elements, String_t* ___2_prop, String_t* ___3_value, int32_t ___4_minimum, double ___5_wait_time, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t*, uint32_t, char*, char*, int32_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint32_t) + sizeof(char*) + sizeof(char*) + sizeof(int32_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_resolve_byprop", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_buffer' to native representation
	intptr_t* ____0_buffer_marshaled = NULL;
	if (___0_buffer != NULL)
	{
		____0_buffer_marshaled = reinterpret_cast<intptr_t*>((___0_buffer)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___2_prop' to native representation
	char* ____2_prop_marshaled = NULL;
	____2_prop_marshaled = il2cpp_codegen_marshal_string(___2_prop);

	// Marshaling of parameter '___3_value' to native representation
	char* ____3_value_marshaled = NULL;
	____3_value_marshaled = il2cpp_codegen_marshal_string(___3_value);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_resolve_byprop)(____0_buffer_marshaled, ___1_buffer_elements, ____2_prop_marshaled, ____3_value_marshaled, ___4_minimum, ___5_wait_time);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_buffer_marshaled, ___1_buffer_elements, ____2_prop_marshaled, ____3_value_marshaled, ___4_minimum, ___5_wait_time);
	#endif

	// Marshaling cleanup of parameter '___2_prop' native representation
	il2cpp_codegen_marshal_free(____2_prop_marshaled);
	____2_prop_marshaled = NULL;

	// Marshaling cleanup of parameter '___3_value' native representation
	il2cpp_codegen_marshal_free(____3_value_marshaled);
	____3_value_marshaled = NULL;

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_resolve_bypred(System.IntPtr[],System.UInt32,System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_resolve_bypred_m967EE07F45E3D1E04EC91F5C9C8147D7280F72CF (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_buffer, uint32_t ___1_buffer_elements, String_t* ___2_pred, int32_t ___3_minimum, double ___4_wait_time, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t*, uint32_t, char*, int32_t, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint32_t) + sizeof(char*) + sizeof(int32_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_resolve_bypred", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_buffer' to native representation
	intptr_t* ____0_buffer_marshaled = NULL;
	if (___0_buffer != NULL)
	{
		____0_buffer_marshaled = reinterpret_cast<intptr_t*>((___0_buffer)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___2_pred' to native representation
	char* ____2_pred_marshaled = NULL;
	____2_pred_marshaled = il2cpp_codegen_marshal_string(___2_pred);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_resolve_bypred)(____0_buffer_marshaled, ___1_buffer_elements, ____2_pred_marshaled, ___3_minimum, ___4_wait_time);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_buffer_marshaled, ___1_buffer_elements, ____2_pred_marshaled, ___3_minimum, ___4_wait_time);
	#endif

	// Marshaling cleanup of parameter '___2_pred' native representation
	il2cpp_codegen_marshal_free(____2_pred_marshaled);
	____2_pred_marshaled = NULL;

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_create_inlet(System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_create_inlet_mF89B755ACA052D1DABE52CAF1A1A246A8FF87775 (intptr_t ___0_info, int32_t ___1_max_buflen, int32_t ___2_max_chunklen, int32_t ___3_recover, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_create_inlet", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_create_inlet)(___0_info, ___1_max_buflen, ___2_max_chunklen, ___3_recover);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_info, ___1_max_buflen, ___2_max_chunklen, ___3_recover);
	#endif

	return returnValue;
}
// System.Void LSL.liblsl/dll::lsl_destroy_inlet(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_destroy_inlet_m1F9040D05AF80EC51DE0A3B86E260FF8F6E26605 (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_destroy_inlet", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	reinterpret_cast<PInvokeFunc>(lsl_destroy_inlet)(___0_obj);
	#else
	il2cppPInvokeFunc(___0_obj);
	#endif

}
// System.IntPtr LSL.liblsl/dll::lsl_get_fullinfo(System.IntPtr,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_get_fullinfo_mC3333A2D50A83F08D4F5A43F158DF42629C3B4DA (intptr_t ___0_obj, double ___1_timeout, int32_t* ___2_ec, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, double, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(double) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_get_fullinfo", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_get_fullinfo)(___0_obj, ___1_timeout, ___2_ec);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_obj, ___1_timeout, ___2_ec);
	#endif

	return returnValue;
}
// System.Void LSL.liblsl/dll::lsl_open_stream(System.IntPtr,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_open_stream_mF17E07032F1EE68EBE804A665D126253DF3A123F (intptr_t ___0_obj, double ___1_timeout, int32_t* ___2_ec, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, double, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(double) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_open_stream", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	reinterpret_cast<PInvokeFunc>(lsl_open_stream)(___0_obj, ___1_timeout, ___2_ec);
	#else
	il2cppPInvokeFunc(___0_obj, ___1_timeout, ___2_ec);
	#endif

}
// System.Void LSL.liblsl/dll::lsl_close_stream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_close_stream_m7777BB875AF9EDDEFDAC40F573802AC34D3BE3B5 (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_close_stream", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	reinterpret_cast<PInvokeFunc>(lsl_close_stream)(___0_obj);
	#else
	il2cppPInvokeFunc(___0_obj);
	#endif

}
// System.Double LSL.liblsl/dll::lsl_time_correction(System.IntPtr,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_time_correction_mE0FDD7B24765756487755CDF297B79C82D29547A (intptr_t ___0_obj, double ___1_timeout, int32_t* ___2_ec, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, double, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(double) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_time_correction", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(lsl_time_correction)(___0_obj, ___1_timeout, ___2_ec);
	#else
	double returnValue = il2cppPInvokeFunc(___0_obj, ___1_timeout, ___2_ec);
	#endif

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_set_postprocessing(System.IntPtr,LSL.liblsl/processing_options_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_set_postprocessing_mB23AA5AABA710D394652998493D8827736959450 (intptr_t ___0_obj, uint8_t ___1_flags, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint8_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_set_postprocessing", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_set_postprocessing)(___0_obj, ___1_flags);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_obj, ___1_flags);
	#endif

	return returnValue;
}
// System.Double LSL.liblsl/dll::lsl_pull_sample_f(System.IntPtr,System.Single[],System.Int32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_pull_sample_f_m5840CC8145E0B2C50B56A0A31F12491186C06BE3 (intptr_t ___0_obj, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_buffer, int32_t ___2_buffer_elements, double ___3_timeout, int32_t* ___4_ec, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, float*, int32_t, double, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(double) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_pull_sample_f", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_buffer' to native representation
	float* ____1_buffer_marshaled = NULL;
	if (___1_buffer != NULL)
	{
		____1_buffer_marshaled = reinterpret_cast<float*>((___1_buffer)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(lsl_pull_sample_f)(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements, ___3_timeout, ___4_ec);
	#else
	double returnValue = il2cppPInvokeFunc(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements, ___3_timeout, ___4_ec);
	#endif

	return returnValue;
}
// System.Double LSL.liblsl/dll::lsl_pull_sample_d(System.IntPtr,System.Double[],System.Int32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_pull_sample_d_mF50561A968D240647484A2B5DA08F9D5B10D65FC (intptr_t ___0_obj, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_buffer, int32_t ___2_buffer_elements, double ___3_timeout, int32_t* ___4_ec, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, double*, int32_t, double, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(double) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_pull_sample_d", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_buffer' to native representation
	double* ____1_buffer_marshaled = NULL;
	if (___1_buffer != NULL)
	{
		____1_buffer_marshaled = reinterpret_cast<double*>((___1_buffer)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(lsl_pull_sample_d)(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements, ___3_timeout, ___4_ec);
	#else
	double returnValue = il2cppPInvokeFunc(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements, ___3_timeout, ___4_ec);
	#endif

	return returnValue;
}
// System.Double LSL.liblsl/dll::lsl_pull_sample_i(System.IntPtr,System.Int32[],System.Int32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_pull_sample_i_mBE6688C4738191342A0A59EBF0E7CDC7DC7858CB (intptr_t ___0_obj, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_buffer, int32_t ___2_buffer_elements, double ___3_timeout, int32_t* ___4_ec, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, int32_t*, int32_t, double, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(double) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_pull_sample_i", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_buffer' to native representation
	int32_t* ____1_buffer_marshaled = NULL;
	if (___1_buffer != NULL)
	{
		____1_buffer_marshaled = reinterpret_cast<int32_t*>((___1_buffer)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(lsl_pull_sample_i)(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements, ___3_timeout, ___4_ec);
	#else
	double returnValue = il2cppPInvokeFunc(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements, ___3_timeout, ___4_ec);
	#endif

	return returnValue;
}
// System.Double LSL.liblsl/dll::lsl_pull_sample_s(System.IntPtr,System.Int16[],System.Int32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_pull_sample_s_m6564A49F2B3BF8C2FB0EB131C7E32D187038E3D7 (intptr_t ___0_obj, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___1_buffer, int32_t ___2_buffer_elements, double ___3_timeout, int32_t* ___4_ec, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, int16_t*, int32_t, double, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(double) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_pull_sample_s", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_buffer' to native representation
	int16_t* ____1_buffer_marshaled = NULL;
	if (___1_buffer != NULL)
	{
		____1_buffer_marshaled = reinterpret_cast<int16_t*>((___1_buffer)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(lsl_pull_sample_s)(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements, ___3_timeout, ___4_ec);
	#else
	double returnValue = il2cppPInvokeFunc(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements, ___3_timeout, ___4_ec);
	#endif

	return returnValue;
}
// System.Double LSL.liblsl/dll::lsl_pull_sample_c(System.IntPtr,System.Char[],System.Int32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_pull_sample_c_mC0AD1F7B3B5367E738275D2F21308AE79364E750 (intptr_t ___0_obj, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___1_buffer, int32_t ___2_buffer_elements, double ___3_timeout, int32_t* ___4_ec, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, double, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(double) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_pull_sample_c", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_buffer' to native representation
	uint8_t* ____1_buffer_marshaled = NULL;
	if (___1_buffer != NULL)
	{
		il2cpp_array_size_t ____1_buffer_Length = (___1_buffer)->max_length;
		____1_buffer_marshaled = il2cpp_codegen_marshal_allocate_array<uint8_t>(____1_buffer_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_buffer_Length); i++)
		{
			(____1_buffer_marshaled)[i] = static_cast<uint8_t>((___1_buffer)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____1_buffer_marshaled = NULL;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(lsl_pull_sample_c)(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements, ___3_timeout, ___4_ec);
	#else
	double returnValue = il2cppPInvokeFunc(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements, ___3_timeout, ___4_ec);
	#endif

	// Marshaling cleanup of parameter '___1_buffer' native representation
	if (____1_buffer_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____1_buffer_marshaled);
		____1_buffer_marshaled = NULL;
	}

	return returnValue;
}
// System.Double LSL.liblsl/dll::lsl_pull_sample_str(System.IntPtr,System.IntPtr[],System.Int32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_pull_sample_str_m739420C1DB61FAB37A8CE22CF904F5F119D5C896 (intptr_t ___0_obj, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___1_buffer, int32_t ___2_buffer_elements, double ___3_timeout, int32_t* ___4_ec, const RuntimeMethod* method) 
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, intptr_t*, int32_t, double, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(double) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_pull_sample_str", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_buffer' to native representation
	intptr_t* ____1_buffer_marshaled = NULL;
	if (___1_buffer != NULL)
	{
		____1_buffer_marshaled = reinterpret_cast<intptr_t*>((___1_buffer)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(lsl_pull_sample_str)(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements, ___3_timeout, ___4_ec);
	#else
	double returnValue = il2cppPInvokeFunc(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements, ___3_timeout, ___4_ec);
	#endif

	return returnValue;
}
// System.Double LSL.liblsl/dll::lsl_pull_sample_buf(System.IntPtr,System.Char[][],System.UInt32[],System.Int32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double dll_lsl_pull_sample_buf_m46BE75CFA802CFAFFF0FDF1BC91E66D89D3AE484 (intptr_t ___0_obj, CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ___1_buffer, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_buffer_lengths, int32_t ___3_buffer_elements, double ___4_timeout, int32_t* ___5_ec, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Char[][]'."), NULL);
}
// System.Void LSL.liblsl/dll::lsl_destroy_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_destroy_string_mDDB7FD1167084E601A82CE5644D5AB5314844C76 (intptr_t ___0_str, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_destroy_string", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	reinterpret_cast<PInvokeFunc>(lsl_destroy_string)(___0_str);
	#else
	il2cppPInvokeFunc(___0_str);
	#endif

}
// System.UInt32 LSL.liblsl/dll::lsl_pull_chunk_f(System.IntPtr,System.Single[,],System.Double[],System.UInt32,System.UInt32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_pull_chunk_f_mF04FD34180EA5ED1FDF1BD3A29E54800E15593EF (intptr_t ___0_obj, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___1_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_timestamp_buffer, uint32_t ___3_data_buffer_elements, uint32_t ___4_timestamp_buffer_elements, double ___5_timeout, int32_t* ___6_ec, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Single[,]'."), NULL);
}
// System.UInt32 LSL.liblsl/dll::lsl_pull_chunk_d(System.IntPtr,System.Double[,],System.Double[],System.UInt32,System.UInt32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_pull_chunk_d_m2FB93A958E25BE609156D2764B479BB55CCA1623 (intptr_t ___0_obj, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___1_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_timestamp_buffer, uint32_t ___3_data_buffer_elements, uint32_t ___4_timestamp_buffer_elements, double ___5_timeout, int32_t* ___6_ec, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Double[,]'."), NULL);
}
// System.UInt32 LSL.liblsl/dll::lsl_pull_chunk_i(System.IntPtr,System.Int32[,],System.Double[],System.UInt32,System.UInt32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_pull_chunk_i_mA36D4B95D5BF47511CE1453E450DE12DAF4CF7E2 (intptr_t ___0_obj, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___1_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_timestamp_buffer, uint32_t ___3_data_buffer_elements, uint32_t ___4_timestamp_buffer_elements, double ___5_timeout, int32_t* ___6_ec, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Int32[,]'."), NULL);
}
// System.UInt32 LSL.liblsl/dll::lsl_pull_chunk_s(System.IntPtr,System.Int16[,],System.Double[],System.UInt32,System.UInt32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_pull_chunk_s_m5FC56F49EA70EE804D6C1D15ACFFFCC89E092B0A (intptr_t ___0_obj, Int16U5BU2CU5D_tA1085F28F76441E5B3C4F55200C853889884825E* ___1_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_timestamp_buffer, uint32_t ___3_data_buffer_elements, uint32_t ___4_timestamp_buffer_elements, double ___5_timeout, int32_t* ___6_ec, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Int16[,]'."), NULL);
}
// System.UInt32 LSL.liblsl/dll::lsl_pull_chunk_c(System.IntPtr,System.Char[,],System.Double[],System.UInt32,System.UInt32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_pull_chunk_c_m76B92C3FEFA7642FD62E641B6750277207C47EF5 (intptr_t ___0_obj, CharU5BU2CU5D_tCCA3F41D23D3591BAB506C658CD144FBD58D3790* ___1_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_timestamp_buffer, uint32_t ___3_data_buffer_elements, uint32_t ___4_timestamp_buffer_elements, double ___5_timeout, int32_t* ___6_ec, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Char[,]'."), NULL);
}
// System.UInt32 LSL.liblsl/dll::lsl_pull_chunk_str(System.IntPtr,System.IntPtr[,],System.Double[],System.UInt32,System.UInt32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_pull_chunk_str_mF1D0F280DCDAA9F0DD7462DBB1B12D3DFBA4B141 (intptr_t ___0_obj, IntPtrU5BU2CU5D_t3CE1409B81556F128D92955C648B4409210FD77E* ___1_data_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_timestamp_buffer, uint32_t ___3_data_buffer_elements, uint32_t ___4_timestamp_buffer_elements, double ___5_timeout, int32_t* ___6_ec, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.IntPtr[,]'."), NULL);
}
// System.UInt32 LSL.liblsl/dll::lsl_pull_chunk_buf(System.IntPtr,System.Char[,][],System.UInt32[,],System.Double[],System.UInt32,System.UInt32,System.Double,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_pull_chunk_buf_mA1837FD78CA5D24DF6A8B5000630756301A300DD (intptr_t ___0_obj, CharU5BU2CU5DU5BU5D_tCC4725677889E532145DE17FC1F327B801A977F7* ___1_data_buffer, UInt32U5BU2CU5D_tCF36040D01374DE23B670D815BB4F2D422F03C33* ___2_lengths_buffer, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_timestamp_buffer, uint32_t ___4_data_buffer_elements, uint32_t ___5_timestamp_buffer_elements, double ___6_timeout, int32_t* ___7_ec, const RuntimeMethod* method) 
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Char[,][]'."), NULL);
}
// System.UInt32 LSL.liblsl/dll::lsl_samples_available(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_samples_available_m6FF6EA7A8A8D2397ADD7F6D7C73E8F07B29CA896 (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_samples_available", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_samples_available)(___0_obj);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_obj);
	#endif

	return returnValue;
}
// System.UInt32 LSL.liblsl/dll::lsl_was_clock_reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t dll_lsl_was_clock_reset_mDD4FFB3B3CE463E95493CA728EE2CF1D430E53FF (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_was_clock_reset", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_was_clock_reset)(___0_obj);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_obj);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_first_child(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_first_child_m7CD918D7F9BE640EC2B5DD38CE1646AD1F0214B3 (intptr_t ___0_e, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_first_child", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_first_child)(___0_e);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_last_child(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_last_child_m117ADF65E2AE9B2392DA35E50840FD554A5EE138 (intptr_t ___0_e, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_last_child", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_last_child)(___0_e);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_next_sibling(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_next_sibling_m1DD81FD6D4EE5117BCD4676A40E98CF766D1B92A (intptr_t ___0_e, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_next_sibling", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_next_sibling)(___0_e);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_previous_sibling(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_previous_sibling_m1DD2FF1826323E7F0E5637C10CD3DB60364FDFC8 (intptr_t ___0_e, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_previous_sibling", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_previous_sibling)(___0_e);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_parent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_parent_m1C7BA0420BC91DA0785A51B66F12B27D9B6E6043 (intptr_t ___0_e, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_parent", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_parent)(___0_e);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_child(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_child_m9D6A8F930A211B62863089CA27C335BCF0AD8625 (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_child", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_child)(___0_e, ____1_name_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e, ____1_name_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_next_sibling_n(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_next_sibling_n_mF7674016AAC2194187803D548AF279FD3BE35195 (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_next_sibling_n", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_next_sibling_n)(___0_e, ____1_name_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e, ____1_name_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_previous_sibling_n(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_previous_sibling_n_mAD60C70784B90854BEC348E3D9DD2D416118DE1B (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_previous_sibling_n", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_previous_sibling_n)(___0_e, ____1_name_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e, ____1_name_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_empty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_empty_m48440A51C20892ADB505B2C979022A7DDC81FE96 (intptr_t ___0_e, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_empty", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_empty)(___0_e);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_e);
	#endif

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_is_text(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_is_text_mC561849ACE8BDD9C7A343D1C68D11C569AF91296 (intptr_t ___0_e, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_is_text", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_is_text)(___0_e);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_e);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_name(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_name_m96A359F8D0E431D71638EFE47B8111267C41E8BA (intptr_t ___0_e, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_name", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_name)(___0_e);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_value(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_value_m90B5ED8A2004BC0063308CB825A08530927F3D6F (intptr_t ___0_e, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_value", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_value)(___0_e);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_child_value(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_child_value_mC57727F4F935D19D67ACE32D8943786977353D62 (intptr_t ___0_e, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_child_value", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_child_value)(___0_e);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_child_value_n(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_child_value_n_mDC5D36CF48950916B3B40CB95CCC12C05C906D73 (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_child_value_n", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_child_value_n)(___0_e, ____1_name_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e, ____1_name_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_append_child_value(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_append_child_value_m6BD2BE72141AF4F09DD14B80FB1FE297077C14B3 (intptr_t ___0_e, String_t* ___1_name, String_t* ___2_value, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_append_child_value", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Marshaling of parameter '___2_value' to native representation
	char* ____2_value_marshaled = NULL;
	____2_value_marshaled = il2cpp_codegen_marshal_string(___2_value);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_append_child_value)(___0_e, ____1_name_marshaled, ____2_value_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e, ____1_name_marshaled, ____2_value_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_value' native representation
	il2cpp_codegen_marshal_free(____2_value_marshaled);
	____2_value_marshaled = NULL;

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_prepend_child_value(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_prepend_child_value_m5E0A1BC418CC28CDE14362B7E2A965BFDB1CA394 (intptr_t ___0_e, String_t* ___1_name, String_t* ___2_value, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_prepend_child_value", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Marshaling of parameter '___2_value' to native representation
	char* ____2_value_marshaled = NULL;
	____2_value_marshaled = il2cpp_codegen_marshal_string(___2_value);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_prepend_child_value)(___0_e, ____1_name_marshaled, ____2_value_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e, ____1_name_marshaled, ____2_value_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_value' native representation
	il2cpp_codegen_marshal_free(____2_value_marshaled);
	____2_value_marshaled = NULL;

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_set_child_value(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_set_child_value_m5441540DE146EF8ECF276E18D5E8C6D09B89EF04 (intptr_t ___0_e, String_t* ___1_name, String_t* ___2_value, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_set_child_value", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Marshaling of parameter '___2_value' to native representation
	char* ____2_value_marshaled = NULL;
	____2_value_marshaled = il2cpp_codegen_marshal_string(___2_value);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_set_child_value)(___0_e, ____1_name_marshaled, ____2_value_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_e, ____1_name_marshaled, ____2_value_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_value' native representation
	il2cpp_codegen_marshal_free(____2_value_marshaled);
	____2_value_marshaled = NULL;

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_set_name(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_set_name_mD89B1E0A6C5DC026CFE40B9F0F72515B5300EE7A (intptr_t ___0_e, String_t* ___1_rhs, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_set_name", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_rhs' to native representation
	char* ____1_rhs_marshaled = NULL;
	____1_rhs_marshaled = il2cpp_codegen_marshal_string(___1_rhs);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_set_name)(___0_e, ____1_rhs_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_e, ____1_rhs_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_rhs' native representation
	il2cpp_codegen_marshal_free(____1_rhs_marshaled);
	____1_rhs_marshaled = NULL;

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_set_value(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_set_value_m42FFAF2B3E2400F32EDD2D78E15F95E062436806 (intptr_t ___0_e, String_t* ___1_rhs, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_set_value", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_rhs' to native representation
	char* ____1_rhs_marshaled = NULL;
	____1_rhs_marshaled = il2cpp_codegen_marshal_string(___1_rhs);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_set_value)(___0_e, ____1_rhs_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_e, ____1_rhs_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_rhs' native representation
	il2cpp_codegen_marshal_free(____1_rhs_marshaled);
	____1_rhs_marshaled = NULL;

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_append_child(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_append_child_mAD03EC0D3963839197D11FDCBDF56267C1D89897 (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_append_child", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_append_child)(___0_e, ____1_name_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e, ____1_name_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_prepend_child(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_prepend_child_m662F88AAA69A851A82A3B4390A831D40E8174D43 (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_prepend_child", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_prepend_child)(___0_e, ____1_name_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e, ____1_name_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_append_copy(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_append_copy_mAB0A84C4D6A7020BBF0E6C089B31B296D5B45392 (intptr_t ___0_e, intptr_t ___1_e2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_append_copy", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_append_copy)(___0_e, ___1_e2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e, ___1_e2);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_prepend_copy(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_prepend_copy_mCB4D515F87870985BCD022894F781B232EACA254 (intptr_t ___0_e, intptr_t ___1_e2, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_prepend_copy", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_prepend_copy)(___0_e, ___1_e2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_e, ___1_e2);
	#endif

	return returnValue;
}
// System.Void LSL.liblsl/dll::lsl_remove_child_n(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_remove_child_n_m82A57F31803DD8F4631D8F8D3988887834D4B533 (intptr_t ___0_e, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_remove_child_n", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	reinterpret_cast<PInvokeFunc>(lsl_remove_child_n)(___0_e, ____1_name_marshaled);
	#else
	il2cppPInvokeFunc(___0_e, ____1_name_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

}
// System.Void LSL.liblsl/dll::lsl_remove_child(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_remove_child_m94954DEE964A448597A9FF52F99B3DB2A07A350C (intptr_t ___0_e, intptr_t ___1_e2, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_remove_child", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	reinterpret_cast<PInvokeFunc>(lsl_remove_child)(___0_e, ___1_e2);
	#else
	il2cppPInvokeFunc(___0_e, ___1_e2);
	#endif

}
// System.IntPtr LSL.liblsl/dll::lsl_create_continuous_resolver(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_create_continuous_resolver_mDF0013DADF1FBECFEE9649F72061A2ACDB1F13B0 (double ___0_forget_after, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_create_continuous_resolver", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_create_continuous_resolver)(___0_forget_after);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_forget_after);
	#endif

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_create_continuous_resolver_byprop(System.String,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_create_continuous_resolver_byprop_m4CDE27287C89BA609B92E85D438C7CA0B1F45110 (String_t* ___0_prop, String_t* ___1_value, double ___2_forget_after, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (char*, char*, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_create_continuous_resolver_byprop", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_prop' to native representation
	char* ____0_prop_marshaled = NULL;
	____0_prop_marshaled = il2cpp_codegen_marshal_string(___0_prop);

	// Marshaling of parameter '___1_value' to native representation
	char* ____1_value_marshaled = NULL;
	____1_value_marshaled = il2cpp_codegen_marshal_string(___1_value);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_create_continuous_resolver_byprop)(____0_prop_marshaled, ____1_value_marshaled, ___2_forget_after);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_prop_marshaled, ____1_value_marshaled, ___2_forget_after);
	#endif

	// Marshaling cleanup of parameter '___0_prop' native representation
	il2cpp_codegen_marshal_free(____0_prop_marshaled);
	____0_prop_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_value' native representation
	il2cpp_codegen_marshal_free(____1_value_marshaled);
	____1_value_marshaled = NULL;

	return returnValue;
}
// System.IntPtr LSL.liblsl/dll::lsl_create_continuous_resolver_bypred(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t dll_lsl_create_continuous_resolver_bypred_mBA1D02F3FBB1281BFE056DAE7695E5AF728CA175 (String_t* ___0_pred, double ___1_forget_after, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (char*, double);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_create_continuous_resolver_bypred", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_pred' to native representation
	char* ____0_pred_marshaled = NULL;
	____0_pred_marshaled = il2cpp_codegen_marshal_string(___0_pred);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_create_continuous_resolver_bypred)(____0_pred_marshaled, ___1_forget_after);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_pred_marshaled, ___1_forget_after);
	#endif

	// Marshaling cleanup of parameter '___0_pred' native representation
	il2cpp_codegen_marshal_free(____0_pred_marshaled);
	____0_pred_marshaled = NULL;

	return returnValue;
}
// System.Int32 LSL.liblsl/dll::lsl_resolver_results(System.IntPtr,System.IntPtr[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dll_lsl_resolver_results_mA72EB8502CF5B0AA30C3834E5568AFEBEC94A39A (intptr_t ___0_obj, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___1_buffer, uint32_t ___2_buffer_elements, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_resolver_results", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_buffer' to native representation
	intptr_t* ____1_buffer_marshaled = NULL;
	if (___1_buffer != NULL)
	{
		____1_buffer_marshaled = reinterpret_cast<intptr_t*>((___1_buffer)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lsl_resolver_results)(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_obj, ____1_buffer_marshaled, ___2_buffer_elements);
	#endif

	return returnValue;
}
// System.Void LSL.liblsl/dll::lsl_destroy_continuous_resolver(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll_lsl_destroy_continuous_resolver_m769FCC1A3355F9A642E53A16D3212A22505E4304 (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lsl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lsl"), "lsl_destroy_continuous_resolver", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lsl_INTERNAL
	reinterpret_cast<PInvokeFunc>(lsl_destroy_continuous_resolver)(___0_obj);
	#else
	il2cppPInvokeFunc(___0_obj);
	#endif

}
// System.Void LSL.liblsl/dll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dll__ctor_m361CF9135CA235E4EC02EDF7EF8B7CDE9EEBE168 (dll_t127607288F9669FDDDFACBCCE160C29EBC80CB83* __this, const RuntimeMethod* method) 
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
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
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XMLElement__ctor_m3516475CA1C2B8E81094FBC89B97AD8964CDDF6F_inline (XMLElement_t64713541F9DF5735E602FC950045292F59E70BB1* __this, intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		// public XMLElement(IntPtr handle) { obj = handle; }
		intptr_t L_0 = ___0_handle;
		__this->___obj_0 = L_0;
		// public XMLElement(IntPtr handle) { obj = handle; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t StreamInfo_handle_m60F4FBB3EA825815C55FEED9ED7AA1CBFD8185F5_inline (StreamInfo_t30E1A378925FA2480B86F35F77ADDA89166FCD1F* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr handle() { return obj; }
		intptr_t L_0 = __this->___obj_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
