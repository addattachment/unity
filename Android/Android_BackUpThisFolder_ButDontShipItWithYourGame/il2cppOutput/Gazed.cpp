#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// GameManager
struct GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE;
// GazeEvent
struct GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27;
// Gazed
struct Gazed_tB65319F17D326B9247B3BEBDA0C5CA2878426CEA;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// PlayerVals
struct PlayerVals_t933C31541965D30E62F6D3A50F21D9C26A81789F;
// System.String
struct String_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WebSocketSharp.WebSocket
struct WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4;
// WsClient
struct WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520;
// WsClient/WSHelloworld
struct WSHelloworld_t5DE1798A7A085904E1F53420E342D37548AB0BB7;

IL2CPP_EXTERN_C RuntimeClass* GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06C9C6781CB7DBA60531245FE4981CA8D87A30E6;
IL2CPP_EXTERN_C String_t* _stringLiteral485DA19638CBC30E5E0970BDE532B878988B9FCC;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t61D51631C02D654A8295371A32B64CB2600BF270 
{
};

// GazeEvent
struct GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27  : public RuntimeObject
{
	// System.Int32 GazeEvent::trialNumber
	int32_t ___trialNumber_0;
	// System.String GazeEvent::websocketMessage
	String_t* ___websocketMessage_1;
	// System.String GazeEvent::targetName
	String_t* ___targetName_2;
	// System.Boolean GazeEvent::gazeStart
	bool ___gazeStart_3;
	// System.Single GazeEvent::_time
	float ____time_4;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// GameManager
struct GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean GameManager::gameDidStart
	bool ___gameDidStart_5;
	// System.Boolean GameManager::aSceneIsLoaded
	bool ___aSceneIsLoaded_6;
	// System.Boolean GameManager::playerValuesAreUpdated
	bool ___playerValuesAreUpdated_7;
	// System.Boolean GameManager::playerContingencySet
	bool ___playerContingencySet_8;
	// System.Boolean GameManager::NPCShootsBall
	bool ___NPCShootsBall_9;
	// System.Boolean GameManager::newNameSet
	bool ___newNameSet_10;
	// System.Boolean GameManager::allMust
	bool ___allMust_11;
	// System.Boolean GameManager::developmentMode
	bool ___developmentMode_12;
	// System.Boolean GameManager::useTestingDataset
	bool ___useTestingDataset_13;
	// System.Boolean GameManager::isTutorial
	bool ___isTutorial_14;
	// System.Int32 GameManager::ballsPerGame
	int32_t ___ballsPerGame_15;
	// System.Boolean GameManager::trialListGenerated
	bool ___trialListGenerated_16;
	// System.Boolean GameManager::doFakeLaunch
	bool ___doFakeLaunch_17;
	// System.Boolean GameManager::playerValsReceivedViaWS
	bool ___playerValsReceivedViaWS_18;
	// System.Boolean GameManager::startTrial
	bool ___startTrial_19;
	// System.Boolean GameManager::toPostTrial
	bool ___toPostTrial_20;
	// System.Boolean GameManager::restart
	bool ___restart_21;
	// System.Boolean GameManager::ballIsShot
	bool ___ballIsShot_22;
	// System.Boolean GameManager::trialIsRunning
	bool ___trialIsRunning_23;
	// System.Boolean GameManager::trialListFinished
	bool ___trialListFinished_24;
	// System.Int32 GameManager::currentTrial
	int32_t ___currentTrial_25;
	// System.Boolean GameManager::endMessagesSend
	bool ___endMessagesSend_26;
	// System.Boolean GameManager::trophyMayAppear
	bool ___trophyMayAppear_27;
	// System.Boolean GameManager::mayPrep
	bool ___mayPrep_28;
	// System.Boolean GameManager::canLaunch
	bool ___canLaunch_29;
	// System.Boolean GameManager::didShoot
	bool ___didShoot_30;
	// System.Boolean GameManager::MayGiveTrophy
	bool ___MayGiveTrophy_31;
	// System.Boolean GameManager::trophyIsGiven
	bool ___trophyIsGiven_32;
	// System.Boolean GameManager::didReadFeedback
	bool ___didReadFeedback_33;
	// System.Boolean GameManager::didGiveScore
	bool ___didGiveScore_34;
	// System.Boolean GameManager::mustGiveFeedback
	bool ___mustGiveFeedback_35;
	// System.Boolean GameManager::isInitiated
	bool ___isInitiated_36;
	// System.Boolean GameManager::LightIsSet
	bool ___LightIsSet_37;
};

// Gazed
struct Gazed_tB65319F17D326B9247B3BEBDA0C5CA2878426CEA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Gazed::objectName
	String_t* ___objectName_4;
	// WsClient Gazed::ws
	WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520* ___ws_5;
	// GameManager Gazed::gameManager
	GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* ___gameManager_6;
	// GazeEvent Gazed::gazeEvent
	GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27* ___gazeEvent_7;
	// System.Boolean Gazed::hasBeenSeen
	bool ___hasBeenSeen_8;
};

// WsClient
struct WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManager WsClient::gameManager
	GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* ___gameManager_5;
	// WebSocketSharp.WebSocket WsClient::ws
	WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* ___ws_6;
	// System.Boolean WsClient::hasWsConnection
	bool ___hasWsConnection_7;
	// System.Single WsClient::timeoutLength
	float ___timeoutLength_8;
	// System.Single WsClient::timeoutTimer
	float ___timeoutTimer_9;
	// System.String WsClient::ip
	String_t* ___ip_10;
	// System.String WsClient::port
	String_t* ___port_11;
	// PlayerVals WsClient::playerVals
	PlayerVals_t933C31541965D30E62F6D3A50F21D9C26A81789F* ___playerVals_12;
	// UnityEngine.Events.UnityEvent WsClient::wsMsgReceived
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___wsMsgReceived_13;
	// WsClient/WSHelloworld WsClient::wsHello
	WSHelloworld_t5DE1798A7A085904E1F53420E342D37548AB0BB7* ___wsHello_14;
};

// <Module>

// <Module>

// GazeEvent

// GazeEvent

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

// System.Int32

// System.Int32

// System.Single

// System.Single

// System.Void

// System.Void

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// GameManager
struct GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_StaticFields
{
	// GameManager GameManager::Instance
	GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* ___Instance_4;
};

// GameManager

// Gazed

// Gazed

// WsClient
struct WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520_StaticFields
{
	// WsClient WsClient::_instance
	WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520* ____instance_4;
};

// WsClient
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String GazeEvent::SaveToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GazeEvent_SaveToString_mF5321E832058E3240E8ADB8D579EFF338D62C4E2 (GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27* __this, const RuntimeMethod* method) ;
// System.Void WsClient::SendWSMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_SendWSMessage_m993AC696FB6C1B628E21CFD4B6CD31FE1830FE9D (WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void GazeEvent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeEvent__ctor_m2FAC105BAA3CCE47A285CDC2FA35B71FD881F5EF (GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27* __this, String_t* ___0_targetName, const RuntimeMethod* method) ;
// WsClient WsClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520* WsClient_get_Instance_m0DA315E124184F2DF0F96F3C0ADB3985FD420075 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
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
// System.Void GazeEvent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeEvent__ctor_m2FAC105BAA3CCE47A285CDC2FA35B71FD881F5EF (GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27* __this, String_t* ___0_targetName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06C9C6781CB7DBA60531245FE4981CA8D87A30E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string websocketMessage = "gaze";
		__this->___websocketMessage_1 = _stringLiteral06C9C6781CB7DBA60531245FE4981CA8D87A30E6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___websocketMessage_1), (void*)_stringLiteral06C9C6781CB7DBA60531245FE4981CA8D87A30E6);
		// public GazeEvent(string targetName)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.targetName = targetName;
		String_t* L_0 = ___0_targetName;
		__this->___targetName_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetName_2), (void*)L_0);
		// }
		return;
	}
}
// System.String GazeEvent::SaveToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GazeEvent_SaveToString_mF5321E832058E3240E8ADB8D579EFF338D62C4E2 (GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27* __this, const RuntimeMethod* method) 
{
	{
		// _time = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->____time_4 = L_0;
		// return JsonUtility.ToJson(this);
		String_t* L_1;
		L_1 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(__this, NULL);
		return L_1;
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
// System.Void Gazed::GazeFocusChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gazed_GazeFocusChanged_m331A4D2C16F18CD22CD18A47D7A2A79DA04D71E8 (Gazed_tB65319F17D326B9247B3BEBDA0C5CA2878426CEA* __this, bool ___0_hasFocus, const RuntimeMethod* method) 
{
	{
		// gazeEvent.gazeStart = hasFocus;
		GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27* L_0 = __this->___gazeEvent_7;
		bool L_1 = ___0_hasFocus;
		NullCheck(L_0);
		L_0->___gazeStart_3 = L_1;
		// gazeEvent.trialNumber = gameManager.currentTrial;
		GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27* L_2 = __this->___gazeEvent_7;
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_3 = __this->___gameManager_6;
		NullCheck(L_3);
		int32_t L_4 = L_3->___currentTrial_25;
		NullCheck(L_2);
		L_2->___trialNumber_0 = L_4;
		// ws.SendWSMessage(gazeEvent.SaveToString());
		WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520* L_5 = __this->___ws_5;
		GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27* L_6 = __this->___gazeEvent_7;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = GazeEvent_SaveToString_mF5321E832058E3240E8ADB8D579EFF338D62C4E2(L_6, NULL);
		NullCheck(L_5);
		WsClient_SendWSMessage_m993AC696FB6C1B628E21CFD4B6CD31FE1830FE9D(L_5, L_7, NULL);
		// hasBeenSeen = true;
		__this->___hasBeenSeen_8 = (bool)1;
		// }
		return;
	}
}
// System.Void Gazed::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gazed_Start_m0D4642EB027975905141C2A645B4562EAB5F5142 (Gazed_tB65319F17D326B9247B3BEBDA0C5CA2878426CEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gazeEvent = new(objectName);
		String_t* L_0 = __this->___objectName_4;
		GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27* L_1 = (GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27*)il2cpp_codegen_object_new(GazeEvent_tA0EDDD2980CD803E28383689F37C06C5C409FE27_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GazeEvent__ctor_m2FAC105BAA3CCE47A285CDC2FA35B71FD881F5EF(L_1, L_0, NULL);
		__this->___gazeEvent_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gazeEvent_7), (void*)L_1);
		// gameManager = GameManager.Instance;
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_2 = ((GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var))->___Instance_4;
		__this->___gameManager_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_6), (void*)L_2);
		// ws = WsClient.Instance;
		WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520* L_3;
		L_3 = WsClient_get_Instance_m0DA315E124184F2DF0F96F3C0ADB3985FD420075(NULL);
		__this->___ws_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ws_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void Gazed::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gazed_Update_mA69467293963A67ADB80F5E2831263827CA803C8 (Gazed_tB65319F17D326B9247B3BEBDA0C5CA2878426CEA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Gazed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gazed__ctor_mFE3B7EB383ECDEAB1AEFDC34C3B0F4C3F3F5CC59 (Gazed_tB65319F17D326B9247B3BEBDA0C5CA2878426CEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral485DA19638CBC30E5E0970BDE532B878988B9FCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField, Tooltip("either caregiver or NPC")] private string objectName = "caregiver"; // or "NPC"
		__this->___objectName_4 = _stringLiteral485DA19638CBC30E5E0970BDE532B878988B9FCC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectName_4), (void*)_stringLiteral485DA19638CBC30E5E0970BDE532B878988B9FCC);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
