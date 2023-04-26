#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// GameManager
struct GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7FA997458F871D67E4DDB4803EA1B1446FB61E94 
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
	// System.Boolean GameManager::isTutorial
	bool ___isTutorial_13;
	// System.Int32 GameManager::ballsPerGame
	int32_t ___ballsPerGame_14;
	// System.Boolean GameManager::trialListGenerated
	bool ___trialListGenerated_15;
	// System.Boolean GameManager::doFakeLaunch
	bool ___doFakeLaunch_16;
	// System.Boolean GameManager::playerValsReceivedViaWS
	bool ___playerValsReceivedViaWS_17;
	// System.Boolean GameManager::startTrial
	bool ___startTrial_18;
	// System.Boolean GameManager::toPostTrial
	bool ___toPostTrial_19;
	// System.Boolean GameManager::restart
	bool ___restart_20;
	// System.Boolean GameManager::ballIsShot
	bool ___ballIsShot_21;
	// System.Boolean GameManager::trialIsRunning
	bool ___trialIsRunning_22;
	// System.Boolean GameManager::trialListFinished
	bool ___trialListFinished_23;
	// System.Int32 GameManager::currentTrial
	int32_t ___currentTrial_24;
	// System.Boolean GameManager::endMessagesSend
	bool ___endMessagesSend_25;
	// System.Boolean GameManager::trophyMayAppear
	bool ___trophyMayAppear_26;
	// System.Boolean GameManager::mayPrep
	bool ___mayPrep_27;
	// System.Boolean GameManager::canLaunch
	bool ___canLaunch_28;
	// System.Boolean GameManager::didShoot
	bool ___didShoot_29;
	// System.Boolean GameManager::MayGiveTrophy
	bool ___MayGiveTrophy_30;
	// System.Boolean GameManager::trophyIsGiven
	bool ___trophyIsGiven_31;
	// System.Boolean GameManager::didReadFeedback
	bool ___didReadFeedback_32;
	// System.Boolean GameManager::didGiveScore
	bool ___didGiveScore_33;
	// System.Boolean GameManager::mustGiveFeedback
	bool ___mustGiveFeedback_34;
	// System.Boolean GameManager::isInitiated
	bool ___isInitiated_35;
	// System.Boolean GameManager::LightIsSet
	bool ___LightIsSet_36;
};

// <Module>

// <Module>

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

// System.Void

// System.Void

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// GameManager
struct GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_StaticFields
{
	// GameManager GameManager::Instance
	GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* ___Instance_4;
};

// GameManager
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m1417791C92F0F73F057C2A6E01196819F85589A4 (GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_0 = ((GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Instance = this;
		((GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m166FA9E7F81CE8956854EA9DF004EDACF683CEF4 (GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mFC1C467AC6E3B7029A1AB2C9788D28CFECB974E9 (GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mDF4F46B3EBDD4F605EFC53D1B78DA80A320C0874 (GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* __this, const RuntimeMethod* method) 
{
	{
		// public bool developmentMode = true;
		__this->___developmentMode_12 = (bool)1;
		// public int ballsPerGame = 5;
		__this->___ballsPerGame_14 = 5;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
