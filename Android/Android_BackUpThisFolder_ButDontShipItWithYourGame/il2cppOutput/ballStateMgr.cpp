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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Player>
struct List_1_tC126DB1F2EAC892E1A6DA4242770B75A794B10D3;
// System.Collections.Generic.List`1<TargetHit>
struct List_1_t47405468326F9C3F9EB55B36600E3853EBE97495;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// ScoreDot[]
struct ScoreDotU5BU5D_t34DB3704E3093FBA789E6A680D7C8103D6362C90;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Ball
struct Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC;
// BallCalcImpactState
struct BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940;
// BallDoneState
struct BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132;
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
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// GameManager
struct GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameSounds
struct GameSounds_tE160CF1666886E9284AD9EE66D97E21ECF8975B7;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// LSL.OutletPassThrough
struct OutletPassThrough_t0D321477E508FCA4045FB0C0627AC55ED9AC613C;
// Player
struct Player_t637772DB02240599AE6D1E7DB0850DE1D8743843;
// PlayerBallScoreEvent
struct PlayerBallScoreEvent_t3E7BCE357337F3C945F82C48518D8935488CC9CC;
// PlayerGroup
struct PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015;
// PlayerScore
struct PlayerScore_t431B7408AE2FB474DF2A32AB7DA1016BF98C93A6;
// PlayerVals
struct PlayerVals_t933C31541965D30E62F6D3A50F21D9C26A81789F;
// PlayersScoreEvent
struct PlayersScoreEvent_tE9E8E8EDDAA3712C0CDC512AE336857868841D35;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// ScoreBoardAll
struct ScoreBoardAll_t7F58F4F4D8A8E33DA2254F21D2E987108B4E6428;
// ScoreLightEmitting
struct ScoreLightEmitting_tA193FD2D067185A300B5B28F3EE366E76AF819DF;
// Slingshot
struct Slingshot_t1FEFA341B41A61634583E1971717EF07EA6DCD2D;
// StateMgrEvent
struct StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA;
// System.String
struct String_t;
// TargetGroup
struct TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.TrailRenderer
struct TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39;
// TrajectoryManager
struct TrajectoryManager_t615624328A65694AEC531CDF7913863D3FCE0372;
// TrialList
struct TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WebSocketSharp.WebSocket
struct WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4;
// WsClient
struct WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520;
// WsClient/WSHelloworld
struct WSHelloworld_t5DE1798A7A085904E1F53420E342D37548AB0BB7;
// WsClient/WsEvent
struct WsEvent_t6D1D80050A75DD11199C440F26A627C1AAFB25C8;

IL2CPP_EXTERN_C RuntimeClass* BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral50D09EC4F5A46E33630FD038B3AC66D927304936;
IL2CPP_EXTERN_C String_t* _stringLiteral563B706437BF0772B19FE10900E39C381D170147;
IL2CPP_EXTERN_C String_t* _stringLiteral952E500E3378324528F2117AD74C47F543278F0A;
IL2CPP_EXTERN_C String_t* _stringLiteralC6D5ABDBB429C04E09145EDB61034895D1C7B278;
IL2CPP_EXTERN_C String_t* _stringLiteralDB3C3CC7963131B913A94595557990806DF0F345;
IL2CPP_EXTERN_C String_t* _stringLiteralDD46D071D893700A505BEF56374E75169CB6F334;
IL2CPP_EXTERN_C String_t* _stringLiteralFC2566D7D48CAB76B0F369066161B2FCB1FD6543;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayer_t637772DB02240599AE6D1E7DB0850DE1D8743843_mE76776B8D7950B895DB7DF8E8431E40FCAF7CC2A_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t73B7DAF0BDBF8872807B36B6C514F417F05617B8 
{
};

// BallStateMachine
struct BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4  : public RuntimeObject
{
};

// StateMgrEvent
struct StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA  : public RuntimeObject
{
	// System.String StateMgrEvent::websocketMessage
	String_t* ___websocketMessage_0;
	// System.String StateMgrEvent::newState
	String_t* ___newState_1;
	// System.Single StateMgrEvent::_time
	float ____time_2;
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

// BallCalcImpactState
struct BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940  : public BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4
{
};

// BallDoneState
struct BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132  : public BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4
{
};

// BallInitState
struct BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D  : public BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4
{
};

// BallLaunchState
struct BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F  : public BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4
{
};

// BallPrepState
struct BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A  : public BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4
{
};

// BallWaitingState
struct BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C  : public BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4
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

// Ball
struct Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody Ball::Rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___Rb_4;
	// GameManager Ball::gameManager
	GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* ___gameManager_5;
	// TrajectoryManager Ball::trajectoryManager
	TrajectoryManager_t615624328A65694AEC531CDF7913863D3FCE0372* ___trajectoryManager_6;
	// Slingshot Ball::slingShot
	Slingshot_t1FEFA341B41A61634583E1971717EF07EA6DCD2D* ___slingShot_7;
	// UnityEngine.AudioSource Ball::BallFloorImpact
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___BallFloorImpact_8;
	// UnityEngine.AudioSource Ball::BallDestructionNoHitSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___BallDestructionNoHitSound_9;
	// UnityEngine.AudioSource Ball::ball_flying_audio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___ball_flying_audio_10;
	// System.Single Ball::ReleaseTime
	float ___ReleaseTime_11;
	// System.Single Ball::DestructionTime
	float ___DestructionTime_12;
	// System.Boolean Ball::didHitATarget
	bool ___didHitATarget_13;
	// System.Boolean Ball::ballIsGrabbed
	bool ___ballIsGrabbed_14;
	// System.Boolean Ball::ballIsReleased
	bool ___ballIsReleased_15;
	// System.Boolean Ball::ballDidHit
	bool ___ballDidHit_16;
	// System.Boolean Ball::canProcessCollisions
	bool ___canProcessCollisions_17;
	// System.Boolean Ball::ballDidScore
	bool ___ballDidScore_18;
	// System.Boolean Ball::showLinerender
	bool ___showLinerender_19;
	// System.Single Ball::_time_to_target
	float ____time_to_target_20;
	// UnityEngine.Vector3 Ball::_hitTargetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____hitTargetPos_21;
	// TargetGroup Ball::targets
	TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* ___targets_22;
	// UnityEngine.Vector3 Ball::launchForce
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___launchForce_23;
	// LSL.OutletPassThrough Ball::lsl
	OutletPassThrough_t0D321477E508FCA4045FB0C0627AC55ED9AC613C* ___lsl_24;
	// System.Collections.Generic.List`1<TargetHit> Ball::wrongHitTransforms
	List_1_t47405468326F9C3F9EB55B36600E3853EBE97495* ___wrongHitTransforms_25;
	// UnityEngine.GameObject Ball::backgroundSound
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___backgroundSound_26;
	// UnityEngine.TrailRenderer Ball::trail
	TrailRenderer_tF7E185EF383CF4300DFC3E1DE59FA6100B93CA39* ___trail_27;
	// System.Boolean Ball::doFakeLaunch
	bool ___doFakeLaunch_28;
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
	// BallDoneState BallStateManager::ballDoneState
	BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132* ___ballDoneState_10;
	// GameManager BallStateManager::gameManager
	GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* ___gameManager_11;
	// PlayerGroup BallStateManager::players
	PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* ___players_12;
	// TrialList BallStateManager::trialList
	TrialList_t36AEF901BBEBF02130139096DB8D8D3480DBDA05* ___trialList_13;
	// TargetGroup BallStateManager::targets
	TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* ___targets_14;
	// Ball BallStateManager::currentBall
	Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC* ___currentBall_15;
	// System.Int32 BallStateManager::amountOfBallsInTrial
	int32_t ___amountOfBallsInTrial_16;
	// System.Boolean BallStateManager::isGoodTrial
	bool ___isGoodTrial_17;
	// System.String BallStateManager::ballPhase
	String_t* ___ballPhase_18;
	// System.Boolean BallStateManager::sendStateWSMessage
	bool ___sendStateWSMessage_19;
	// WsClient BallStateManager::ws
	WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520* ___ws_20;
	// StateMgrEvent BallStateManager::ballStateMgrEvent
	StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA* ___ballStateMgrEvent_21;
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
	// System.Boolean GameManager::newNameSet
	bool ___newNameSet_8;
	// System.Boolean GameManager::restartBool
	bool ___restartBool_9;
	// System.Boolean GameManager::allMust
	bool ___allMust_10;
	// System.Boolean GameManager::developmentMode
	bool ___developmentMode_11;
	// System.Boolean GameManager::isTutorial
	bool ___isTutorial_12;
	// System.Int32 GameManager::ballsPerGame
	int32_t ___ballsPerGame_13;
	// System.Boolean GameManager::trialListGenerated
	bool ___trialListGenerated_14;
	// System.Boolean GameManager::doFakeLaunch
	bool ___doFakeLaunch_15;
	// System.Boolean GameManager::playerValsReceivedViaWS
	bool ___playerValsReceivedViaWS_16;
	// System.Boolean GameManager::startTrial
	bool ___startTrial_17;
	// System.Boolean GameManager::toPostTrial
	bool ___toPostTrial_18;
	// System.Boolean GameManager::restart
	bool ___restart_19;
	// System.Boolean GameManager::ballIsShot
	bool ___ballIsShot_20;
	// System.Boolean GameManager::trialIsRunning
	bool ___trialIsRunning_21;
	// System.Boolean GameManager::trialListFinished
	bool ___trialListFinished_22;
	// System.Int32 GameManager::currentTrial
	int32_t ___currentTrial_23;
	// System.Boolean GameManager::endMessagesSend
	bool ___endMessagesSend_24;
	// System.Boolean GameManager::trophyMayAppear
	bool ___trophyMayAppear_25;
	// System.Boolean GameManager::mayPrep
	bool ___mayPrep_26;
	// System.Boolean GameManager::canLaunch
	bool ___canLaunch_27;
	// System.Boolean GameManager::didShoot
	bool ___didShoot_28;
	// System.Boolean GameManager::MayGiveTrophy
	bool ___MayGiveTrophy_29;
	// System.Boolean GameManager::trophyIsGiven
	bool ___trophyIsGiven_30;
	// System.Boolean GameManager::didReadFeedback
	bool ___didReadFeedback_31;
	// System.Boolean GameManager::didGiveScore
	bool ___didGiveScore_32;
	// System.Boolean GameManager::mustGiveFeedback
	bool ___mustGiveFeedback_33;
	// System.Boolean GameManager::isInitiated
	bool ___isInitiated_34;
	// System.Boolean GameManager::LightIsSet
	bool ___LightIsSet_35;
};

// Player
struct Player_t637772DB02240599AE6D1E7DB0850DE1D8743843  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Player::playerName
	String_t* ___playerName_4;
	// Gender Player::gender
	int32_t ___gender_5;
	// System.Int32 Player::height
	int32_t ___height_6;
	// System.Boolean Player::isRealPlayer
	bool ___isRealPlayer_7;
	// System.Boolean Player::isActivePlayer
	bool ___isActivePlayer_8;
	// Contingency Player::contingency
	int32_t ___contingency_9;
	// System.Int32 Player::trial_block
	int32_t ___trial_block_10;
	// System.Int32 Player::score
	int32_t ___score_11;
	// System.Int32 Player::currentBallInTrial
	int32_t ___currentBallInTrial_12;
	// Slingshot Player::slingshot
	Slingshot_t1FEFA341B41A61634583E1971717EF07EA6DCD2D* ___slingshot_13;
	// PlayerScore Player::playerScore
	PlayerScore_t431B7408AE2FB474DF2A32AB7DA1016BF98C93A6* ___playerScore_14;
	// UnityEngine.GameObject Player::trophySpawnLocation
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___trophySpawnLocation_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Player::trophyWonList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___trophyWonList_16;
	// UnityEngine.GameObject Player::instBall
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instBall_17;
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
	// System.Collections.Generic.List`1<Player> PlayerGroup::players
	List_1_tC126DB1F2EAC892E1A6DA4242770B75A794B10D3* ___players_9;
	// WsClient PlayerGroup::ws
	WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520* ___ws_10;
	// LSL.OutletPassThrough PlayerGroup::lsl
	OutletPassThrough_t0D321477E508FCA4045FB0C0627AC55ED9AC613C* ___lsl_11;
	// PlayersScoreEvent PlayerGroup::playersScoreEvent
	PlayersScoreEvent_tE9E8E8EDDAA3712C0CDC512AE336857868841D35* ___playersScoreEvent_12;
	// UnityEngine.GameObject PlayerGroup::PlayerInvisibleWall
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlayerInvisibleWall_13;
	// UnityEngine.GameObject PlayerGroup::NPCInvisibleWall
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___NPCInvisibleWall_14;
};

// PlayerScore
struct PlayerScore_t431B7408AE2FB474DF2A32AB7DA1016BF98C93A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player PlayerScore::player
	Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* ___player_4;
	// GameManager PlayerScore::gameManager
	GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* ___gameManager_5;
	// ScoreDot[] PlayerScore::scoreDots
	ScoreDotU5BU5D_t34DB3704E3093FBA789E6A680D7C8103D6362C90* ___scoreDots_6;
	// ScoreBoardAll PlayerScore::scoreboard
	ScoreBoardAll_t7F58F4F4D8A8E33DA2254F21D2E987108B4E6428* ___scoreboard_7;
	// ScoreLightEmitting PlayerScore::floor
	ScoreLightEmitting_tA193FD2D067185A300B5B28F3EE366E76AF819DF* ___floor_8;
	// GameSounds PlayerScore::gameSounds
	GameSounds_tE160CF1666886E9284AD9EE66D97E21ECF8975B7* ___gameSounds_9;
	// WsClient PlayerScore::ws
	WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520* ___ws_10;
	// LSL.OutletPassThrough PlayerScore::lsl
	OutletPassThrough_t0D321477E508FCA4045FB0C0627AC55ED9AC613C* ___lsl_11;
	// PlayerBallScoreEvent PlayerScore::playerBallScoreEvent
	PlayerBallScoreEvent_t3E7BCE357337F3C945F82C48518D8935488CC9CC* ___playerBallScoreEvent_12;
};

// Slingshot
struct Slingshot_t1FEFA341B41A61634583E1971717EF07EA6DCD2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player Slingshot::player
	Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* ___player_4;
	// PlayerScore Slingshot::playerScore
	PlayerScore_t431B7408AE2FB474DF2A32AB7DA1016BF98C93A6* ___playerScore_5;
	// UnityEngine.GameObject Slingshot::Ball
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Ball_6;
	// UnityEngine.GameObject Slingshot::InstBall
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___InstBall_7;
	// UnityEngine.GameObject Slingshot::LeftSide
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LeftSide_8;
	// UnityEngine.GameObject Slingshot::RightSide
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RightSide_9;
	// UnityEngine.GameObject Slingshot::Hook
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Hook_10;
	// UnityEngine.GameObject Slingshot::_fakeBallStartPointDebug
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____fakeBallStartPointDebug_11;
	// UnityEngine.Vector3 Slingshot::slingshotPocketToBallDistance
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___slingshotPocketToBallDistance_12;
	// UnityEngine.LineRenderer Slingshot::Line
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___Line_13;
	// System.Single Slingshot::launchForceMultiplier
	float ___launchForceMultiplier_14;
	// System.Single Slingshot::minDeflectionDist
	float ___minDeflectionDist_15;
	// UnityEngine.GameObject Slingshot::hitTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hitTarget_16;
	// ReachTargetEnum Slingshot::reachTarget
	int32_t ___reachTarget_17;
	// System.Single Slingshot::minGuidanceDist
	float ___minGuidanceDist_18;
	// UnityEngine.AudioSource Slingshot::pullSlingShotClip
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___pullSlingShotClip_19;
	// UnityEngine.AudioSource Slingshot::releaseSlingShotClip
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___releaseSlingShotClip_20;
	// UnityEngine.UI.Toggle Slingshot::toggle_may
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_may_21;
	// UnityEngine.UI.Toggle Slingshot::toggle_must
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_must_22;
	// UnityEngine.UI.Toggle Slingshot::toggle_musnt
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_musnt_23;
	// UnityEngine.UI.Toggle Slingshot::toggle_prefmust
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_prefmust_24;
	// UnityEngine.UI.Toggle Slingshot::toggle_mayNPC
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_mayNPC_25;
	// SlingshotLinesEnum Slingshot::slingshotLinesEnum
	int32_t ___slingshotLinesEnum_26;
	// TrajectoryManager Slingshot::trajectoryManager
	TrajectoryManager_t615624328A65694AEC531CDF7913863D3FCE0372* ___trajectoryManager_27;
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
	// System.Single TargetGroup::minSpeed
	float ___minSpeed_8;
	// System.Single TargetGroup::maxSpeed
	float ___maxSpeed_9;
	// System.Single TargetGroup::yMinBorder
	float ___yMinBorder_10;
	// System.Single TargetGroup::yMaxBorder
	float ___yMaxBorder_11;
	// UnityEngine.GameObject[] TargetGroup::targetList
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___targetList_12;
	// UnityEngine.GameObject TargetGroup::hitTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hitTarget_13;
	// System.Boolean TargetGroup::readyForHit
	bool ___readyForHit_14;
	// EnumAngle TargetGroup::translateAngle
	int32_t ___translateAngle_15;
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
	// WsClient/WsEvent WsClient::wsMsgReceived
	WsEvent_t6D1D80050A75DD11199C440F26A627C1AAFB25C8* ___wsMsgReceived_13;
	// WsClient/WSHelloworld WsClient::wsHello
	WSHelloworld_t5DE1798A7A085904E1F53420E342D37548AB0BB7* ___wsHello_14;
};

// <Module>

// <Module>

// BallStateMachine

// BallStateMachine

// StateMgrEvent

// StateMgrEvent

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// BallCalcImpactState

// BallCalcImpactState

// BallDoneState

// BallDoneState

// BallInitState

// BallInitState

// BallLaunchState

// BallLaunchState

// BallPrepState

// BallPrepState

// BallWaitingState

// BallWaitingState

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

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Ball

// Ball

// BallStateManager

// BallStateManager

// GameManager
struct GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_StaticFields
{
	// GameManager GameManager::Instance
	GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* ___Instance_4;
};

// GameManager

// Player

// Player

// PlayerGroup

// PlayerGroup

// PlayerScore

// PlayerScore

// Slingshot

// Slingshot

// TargetGroup

// TargetGroup

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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// Player PlayerGroup::GetActivePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* PlayerGroup_GetActivePlayer_m10B6804AEE843D10F5C91B7A4330CF49C383D534 (PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* __this, const RuntimeMethod* method) ;
// System.Void PlayerScore::AddToScore(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScore_AddToScore_m762CF79C0A0FFB91F565142BF73DBC03E430D850 (PlayerScore_t431B7408AE2FB474DF2A32AB7DA1016BF98C93A6* __this, bool ___0_score, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Player>()
inline Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* Component_GetComponent_TisPlayer_t637772DB02240599AE6D1E7DB0850DE1D8743843_mE76776B8D7950B895DB7DF8E8431E40FCAF7CC2A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean PlayerGroup::BallsLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerGroup_BallsLeft_m674FFFC44F54A7DEE34B0B495BA8597C32F238E9 (PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* __this, const RuntimeMethod* method) ;
// System.Void BallStateManager::SwitchState(BallStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallStateManager_SwitchState_mDD437A10B242DDD78AA846C0510E6F37672ABA98 (BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* __this, BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4* ___0_newState, const RuntimeMethod* method) ;
// System.Void PlayerGroup::SwitchPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGroup_SwitchPlayer_mDBD590E197805061E8DDCFD5981B35E88DF0C6DF (PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* __this, const RuntimeMethod* method) ;
// System.Void BallStateMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallStateMachine__ctor_m66CDA0C71373749819EBAFE9BC53E84EDF138CDB (BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4* __this, const RuntimeMethod* method) ;
// System.Void PlayerGroup::SetPlayerScoringChance(Slingshot,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGroup_SetPlayerScoringChance_m5331C9D5AD0A636A57FA316F0CEA141FFF9D855D (PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* __this, Slingshot_t1FEFA341B41A61634583E1971717EF07EA6DCD2D* ___0_slingshot, bool ___1_isGoodTrial, const RuntimeMethod* method) ;
// System.Void TargetGroup::SetNewHitTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetGroup_SetNewHitTarget_m80D7D8198B75B533F5719C7490E2BA2F49476D22 (TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* __this, const RuntimeMethod* method) ;
// Ball Slingshot::PrepNewBall(TargetGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC* Slingshot_PrepNewBall_m8CFF716361EE27BB51D95E38800217C92C6989E7 (Slingshot_t1FEFA341B41A61634583E1971717EF07EA6DCD2D* __this, TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* ___0_targets, const RuntimeMethod* method) ;
// System.Void Player::FakeShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FakeShot_m5F0AC23018512326A0DDEB71F90733B722524978 (Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void StateMgrEvent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMgrEvent__ctor_mDE672CE3235D39C2DDD5A24F22FE259BD54CDADE (StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA* __this, String_t* ___0_stateMgr, const RuntimeMethod* method) ;
// System.Void StateMgrEvent::Set(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateMgrEvent_Set_m5AE2E01405EF207CE38548C82100E7D2ECA2F6D6_inline (StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA* __this, String_t* ___0_states, const RuntimeMethod* method) ;
// System.String StateMgrEvent::SaveToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StateMgrEvent_SaveToString_m28495AF49ACBACA03B05B70C431AFA340B265AF2 (StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA* __this, const RuntimeMethod* method) ;
// System.Void WsClient::SendWSMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_SendWSMessage_m993AC696FB6C1B628E21CFD4B6CD31FE1830FE9D (WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void BallInitState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallInitState__ctor_mC35910FA918BAC7740746EE79F82B60BFF3E7A69 (BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D* __this, const RuntimeMethod* method) ;
// System.Void BallWaitingState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallWaitingState__ctor_m5C9B9A2470C9FF37EBFE57C8C6D3F5EF76E058A4 (BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C* __this, const RuntimeMethod* method) ;
// System.Void BallPrepState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallPrepState__ctor_mE8BEC2E99EFFC61FB1DE4F3DCD220408A093B45A (BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A* __this, const RuntimeMethod* method) ;
// System.Void BallLaunchState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallLaunchState__ctor_m17E03259287F20B866C40FA2137DA6B8A0EC44C3 (BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F* __this, const RuntimeMethod* method) ;
// System.Void BallCalcImpactState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallCalcImpactState__ctor_m65DF674A1FDCEFAA327967AD20C7B8216D0C15D2 (BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940* __this, const RuntimeMethod* method) ;
// System.Void BallDoneState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDoneState__ctor_m3ECD88E5882E8439A330156DB4B246975A2D03B3 (BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132* __this, const RuntimeMethod* method) ;
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
// System.Void BallCalcImpactState::EnterState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallCalcImpactState_EnterState_mEFC33F88DEC76A140D07648DF5A198B71D2E0869 (BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952E500E3378324528F2117AD74C47F543278F0A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// state.ballPhase = "ballCalcImpactState";
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_0 = ___0_state;
		NullCheck(L_0);
		L_0->___ballPhase_18 = _stringLiteral952E500E3378324528F2117AD74C47F543278F0A;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___ballPhase_18), (void*)_stringLiteral952E500E3378324528F2117AD74C47F543278F0A);
		// PlayerScore activePlayerScore = state.players.GetActivePlayer().playerScore;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_1 = ___0_state;
		NullCheck(L_1);
		PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* L_2 = L_1->___players_12;
		NullCheck(L_2);
		Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* L_3;
		L_3 = PlayerGroup_GetActivePlayer_m10B6804AEE843D10F5C91B7A4330CF49C383D534(L_2, NULL);
		NullCheck(L_3);
		PlayerScore_t431B7408AE2FB474DF2A32AB7DA1016BF98C93A6* L_4 = L_3->___playerScore_14;
		// bool score = state.currentBall.ballDidScore;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_5 = ___0_state;
		NullCheck(L_5);
		Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC* L_6 = L_5->___currentBall_15;
		NullCheck(L_6);
		bool L_7 = L_6->___ballDidScore_18;
		V_0 = L_7;
		// activePlayerScore.AddToScore(score);
		bool L_8 = V_0;
		NullCheck(L_4);
		PlayerScore_AddToScore_m762CF79C0A0FFB91F565142BF73DBC03E430D850(L_4, L_8, NULL);
		// }
		return;
	}
}
// System.Void BallCalcImpactState::ExitState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallCalcImpactState_ExitState_mD8D531FD9A6E2B34BE5832F020AC735E74DCD862 (BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BallCalcImpactState::UpdateState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallCalcImpactState_UpdateState_m13325C33EA0B14B6B6A2AEF01A1468E21B6025DC (BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t637772DB02240599AE6D1E7DB0850DE1D8743843_mE76776B8D7950B895DB7DF8E8431E40FCAF7CC2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Player currentPlayer = state.players.GetActivePlayer().GetComponent<Player>();
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_0 = ___0_state;
		NullCheck(L_0);
		PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* L_1 = L_0->___players_12;
		NullCheck(L_1);
		Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* L_2;
		L_2 = PlayerGroup_GetActivePlayer_m10B6804AEE843D10F5C91B7A4330CF49C383D534(L_1, NULL);
		NullCheck(L_2);
		Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* L_3;
		L_3 = Component_GetComponent_TisPlayer_t637772DB02240599AE6D1E7DB0850DE1D8743843_mE76776B8D7950B895DB7DF8E8431E40FCAF7CC2A(L_2, Component_GetComponent_TisPlayer_t637772DB02240599AE6D1E7DB0850DE1D8743843_mE76776B8D7950B895DB7DF8E8431E40FCAF7CC2A_RuntimeMethod_var);
		// currentPlayer.currentBallInTrial++;
		Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->___currentBallInTrial_12;
		NullCheck(L_4);
		L_4->___currentBallInTrial_12 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if (!state.players.BallsLeft())
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_6 = ___0_state;
		NullCheck(L_6);
		PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* L_7 = L_6->___players_12;
		NullCheck(L_7);
		bool L_8;
		L_8 = PlayerGroup_BallsLeft_m674FFFC44F54A7DEE34B0B495BA8597C32F238E9(L_7, NULL);
		if (L_8)
		{
			goto IL_0043;
		}
	}
	{
		// state.gameManager.toPostTrial = true;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_9 = ___0_state;
		NullCheck(L_9);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_10 = L_9->___gameManager_11;
		NullCheck(L_10);
		L_10->___toPostTrial_18 = (bool)1;
		// state.SwitchState(state.ballDoneState);
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_11 = ___0_state;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_12 = ___0_state;
		NullCheck(L_12);
		BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132* L_13 = L_12->___ballDoneState_10;
		NullCheck(L_11);
		BallStateManager_SwitchState_mDD437A10B242DDD78AA846C0510E6F37672ABA98(L_11, L_13, NULL);
		return;
	}

IL_0043:
	{
		// state.players.SwitchPlayer();
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_14 = ___0_state;
		NullCheck(L_14);
		PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* L_15 = L_14->___players_12;
		NullCheck(L_15);
		PlayerGroup_SwitchPlayer_mDBD590E197805061E8DDCFD5981B35E88DF0C6DF(L_15, NULL);
		// state.SwitchState(state.ballWaiting);
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_16 = ___0_state;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_17 = ___0_state;
		NullCheck(L_17);
		BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C* L_18 = L_17->___ballWaiting_6;
		NullCheck(L_16);
		BallStateManager_SwitchState_mDD437A10B242DDD78AA846C0510E6F37672ABA98(L_16, L_18, NULL);
		// }
		return;
	}
}
// System.Void BallCalcImpactState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallCalcImpactState__ctor_m65DF674A1FDCEFAA327967AD20C7B8216D0C15D2 (BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940* __this, const RuntimeMethod* method) 
{
	{
		BallStateMachine__ctor_m66CDA0C71373749819EBAFE9BC53E84EDF138CDB(__this, NULL);
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
// System.Void BallDoneState::EnterState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDoneState_EnterState_mEAF55787AEAB8A2BB81E5D8D97E21A4AC98353C1 (BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6D5ABDBB429C04E09145EDB61034895D1C7B278);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.ballPhase = "ballDoneState";
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_0 = ___0_state;
		NullCheck(L_0);
		L_0->___ballPhase_18 = _stringLiteralC6D5ABDBB429C04E09145EDB61034895D1C7B278;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___ballPhase_18), (void*)_stringLiteralC6D5ABDBB429C04E09145EDB61034895D1C7B278);
		// }
		return;
	}
}
// System.Void BallDoneState::ExitState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDoneState_ExitState_m35F505DE4460DF0FCE6597005F70C25CBE45C1FF (BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BallDoneState::UpdateState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDoneState_UpdateState_m587C1886BC50372C9EE494F3B90EE0648B2F7B80 (BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BallDoneState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallDoneState__ctor_m3ECD88E5882E8439A330156DB4B246975A2D03B3 (BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132* __this, const RuntimeMethod* method) 
{
	{
		BallStateMachine__ctor_m66CDA0C71373749819EBAFE9BC53E84EDF138CDB(__this, NULL);
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
// System.Void BallInitState::EnterState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallInitState_EnterState_mAAA7A18B8D8BD6C1FE71DB72A509C00076543E78 (BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral563B706437BF0772B19FE10900E39C381D170147);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.ballPhase = "ballInitState";
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_0 = ___0_state;
		NullCheck(L_0);
		L_0->___ballPhase_18 = _stringLiteral563B706437BF0772B19FE10900E39C381D170147;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___ballPhase_18), (void*)_stringLiteral563B706437BF0772B19FE10900E39C381D170147);
		// state.amountOfBallsInTrial = state.gameManager.ballsPerGame;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_1 = ___0_state;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_2 = ___0_state;
		NullCheck(L_2);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_3 = L_2->___gameManager_11;
		NullCheck(L_3);
		int32_t L_4 = L_3->___ballsPerGame_13;
		NullCheck(L_1);
		L_1->___amountOfBallsInTrial_16 = L_4;
		// }
		return;
	}
}
// System.Void BallInitState::ExitState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallInitState_ExitState_m30EAD66EE56F9BEBBF76134CA5876199793801CA (BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BallInitState::UpdateState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallInitState_UpdateState_m2E136175C495AE815047F5BB8465BD5D07074C19 (BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	{
		// state.SwitchState(state.ballWaiting);
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_0 = ___0_state;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_1 = ___0_state;
		NullCheck(L_1);
		BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C* L_2 = L_1->___ballWaiting_6;
		NullCheck(L_0);
		BallStateManager_SwitchState_mDD437A10B242DDD78AA846C0510E6F37672ABA98(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void BallInitState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallInitState__ctor_mC35910FA918BAC7740746EE79F82B60BFF3E7A69 (BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D* __this, const RuntimeMethod* method) 
{
	{
		BallStateMachine__ctor_m66CDA0C71373749819EBAFE9BC53E84EDF138CDB(__this, NULL);
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
// System.Void BallLaunchState::EnterState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallLaunchState_EnterState_mED452BA2E8A6C6C7A5C3768934E0ECB1DA7412DB (BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50D09EC4F5A46E33630FD038B3AC66D927304936);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.ballPhase = "ballLaunchState";
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_0 = ___0_state;
		NullCheck(L_0);
		L_0->___ballPhase_18 = _stringLiteral50D09EC4F5A46E33630FD038B3AC66D927304936;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___ballPhase_18), (void*)_stringLiteral50D09EC4F5A46E33630FD038B3AC66D927304936);
		// state.currentBall.canProcessCollisions = true;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_1 = ___0_state;
		NullCheck(L_1);
		Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC* L_2 = L_1->___currentBall_15;
		NullCheck(L_2);
		L_2->___canProcessCollisions_17 = (bool)1;
		// }
		return;
	}
}
// System.Void BallLaunchState::ExitState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallLaunchState_ExitState_mFFDEDB408D016F779DEBAEB8D462DDAE8A14BA66 (BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	{
		// state.players.activeParticipant.slingshot.slingshotLinesEnum = SlingshotLinesEnum.passive;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_0 = ___0_state;
		NullCheck(L_0);
		PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* L_1 = L_0->___players_12;
		NullCheck(L_1);
		Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* L_2 = L_1->___activeParticipant_6;
		NullCheck(L_2);
		Slingshot_t1FEFA341B41A61634583E1971717EF07EA6DCD2D* L_3 = L_2->___slingshot_13;
		NullCheck(L_3);
		L_3->___slingshotLinesEnum_26 = 1;
		// }
		return;
	}
}
// System.Void BallLaunchState::UpdateState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallLaunchState_UpdateState_m86842A693A756617BDEA28992492E1B00428F6DC (BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	{
		// if (state.currentBall.ballDidHit)
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_0 = ___0_state;
		NullCheck(L_0);
		Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC* L_1 = L_0->___currentBall_15;
		NullCheck(L_1);
		bool L_2 = L_1->___ballDidHit_16;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// state.currentBall.ballDidHit = false;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_3 = ___0_state;
		NullCheck(L_3);
		Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC* L_4 = L_3->___currentBall_15;
		NullCheck(L_4);
		L_4->___ballDidHit_16 = (bool)0;
		// state.currentBall.canProcessCollisions = false;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_5 = ___0_state;
		NullCheck(L_5);
		Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC* L_6 = L_5->___currentBall_15;
		NullCheck(L_6);
		L_6->___canProcessCollisions_17 = (bool)0;
		// state.SwitchState(state.ballCalcImpactState);
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_7 = ___0_state;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_8 = ___0_state;
		NullCheck(L_8);
		BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940* L_9 = L_8->___ballCalcImpactState_9;
		NullCheck(L_7);
		BallStateManager_SwitchState_mDD437A10B242DDD78AA846C0510E6F37672ABA98(L_7, L_9, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void BallLaunchState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallLaunchState__ctor_m17E03259287F20B866C40FA2137DA6B8A0EC44C3 (BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F* __this, const RuntimeMethod* method) 
{
	{
		BallStateMachine__ctor_m66CDA0C71373749819EBAFE9BC53E84EDF138CDB(__this, NULL);
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
// System.Void BallPrepState::EnterState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallPrepState_EnterState_m80C08B651CBF1FFE3F8D888E30B6FA0F483CBE22 (BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD46D071D893700A505BEF56374E75169CB6F334);
		s_Il2CppMethodInitialized = true;
	}
	Slingshot_t1FEFA341B41A61634583E1971717EF07EA6DCD2D* V_0 = NULL;
	{
		// state.ballPhase = "ballPrepState";
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_0 = ___0_state;
		NullCheck(L_0);
		L_0->___ballPhase_18 = _stringLiteralDD46D071D893700A505BEF56374E75169CB6F334;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___ballPhase_18), (void*)_stringLiteralDD46D071D893700A505BEF56374E75169CB6F334);
		// Player activeParticipant = state.players.GetActivePlayer();
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_1 = ___0_state;
		NullCheck(L_1);
		PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* L_2 = L_1->___players_12;
		NullCheck(L_2);
		Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* L_3;
		L_3 = PlayerGroup_GetActivePlayer_m10B6804AEE843D10F5C91B7A4330CF49C383D534(L_2, NULL);
		// Slingshot slingshot = activeParticipant.slingshot;
		Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* L_4 = L_3;
		NullCheck(L_4);
		Slingshot_t1FEFA341B41A61634583E1971717EF07EA6DCD2D* L_5 = L_4->___slingshot_13;
		V_0 = L_5;
		// state.players.SetPlayerScoringChance(slingshot, state.isGoodTrial);
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_6 = ___0_state;
		NullCheck(L_6);
		PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* L_7 = L_6->___players_12;
		Slingshot_t1FEFA341B41A61634583E1971717EF07EA6DCD2D* L_8 = V_0;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_9 = ___0_state;
		NullCheck(L_9);
		bool L_10 = L_9->___isGoodTrial_17;
		NullCheck(L_7);
		PlayerGroup_SetPlayerScoringChance_m5331C9D5AD0A636A57FA316F0CEA141FFF9D855D(L_7, L_8, L_10, NULL);
		// if (activeParticipant.currentBallInTrial < state.amountOfBallsInTrial)
		NullCheck(L_4);
		int32_t L_11 = L_4->___currentBallInTrial_12;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_12 = ___0_state;
		NullCheck(L_12);
		int32_t L_13 = L_12->___amountOfBallsInTrial_16;
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_005b;
		}
	}
	{
		// state.targets.SetNewHitTarget();
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_14 = ___0_state;
		NullCheck(L_14);
		TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* L_15 = L_14->___targets_14;
		NullCheck(L_15);
		TargetGroup_SetNewHitTarget_m80D7D8198B75B533F5719C7490E2BA2F49476D22(L_15, NULL);
		// state.currentBall = slingshot.PrepNewBall(state.targets);
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_16 = ___0_state;
		Slingshot_t1FEFA341B41A61634583E1971717EF07EA6DCD2D* L_17 = V_0;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_18 = ___0_state;
		NullCheck(L_18);
		TargetGroup_t5E01407DB6F0156A988256EA1501BC20342AD444* L_19 = L_18->___targets_14;
		NullCheck(L_17);
		Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC* L_20;
		L_20 = Slingshot_PrepNewBall_m8CFF716361EE27BB51D95E38800217C92C6989E7(L_17, L_19, NULL);
		NullCheck(L_16);
		L_16->___currentBall_15 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___currentBall_15), (void*)L_20);
		goto IL_0067;
	}

IL_005b:
	{
		// state.gameManager.toPostTrial = true;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_21 = ___0_state;
		NullCheck(L_21);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_22 = L_21->___gameManager_11;
		NullCheck(L_22);
		L_22->___toPostTrial_18 = (bool)1;
	}

IL_0067:
	{
		// slingshot.slingshotLinesEnum = SlingshotLinesEnum.active;
		Slingshot_t1FEFA341B41A61634583E1971717EF07EA6DCD2D* L_23 = V_0;
		NullCheck(L_23);
		L_23->___slingshotLinesEnum_26 = 0;
		// }
		return;
	}
}
// System.Void BallPrepState::ExitState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallPrepState_ExitState_m9E8AD869531FA82912A490D6CF5DB57393F798CF (BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BallPrepState::UpdateState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallPrepState_UpdateState_m162E1025B4B9BC0A4313EF7531933AF479E07C7A (BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	{
		// if ((state.players.GetActivePlayer().isRealPlayer == false)
		//     && (state.players.GetActivePlayer().isActivePlayer == true))
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_0 = ___0_state;
		NullCheck(L_0);
		PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* L_1 = L_0->___players_12;
		NullCheck(L_1);
		Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* L_2;
		L_2 = PlayerGroup_GetActivePlayer_m10B6804AEE843D10F5C91B7A4330CF49C383D534(L_1, NULL);
		NullCheck(L_2);
		bool L_3 = L_2->___isRealPlayer_7;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_4 = ___0_state;
		NullCheck(L_4);
		PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* L_5 = L_4->___players_12;
		NullCheck(L_5);
		Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* L_6;
		L_6 = PlayerGroup_GetActivePlayer_m10B6804AEE843D10F5C91B7A4330CF49C383D534(L_5, NULL);
		NullCheck(L_6);
		bool L_7 = L_6->___isActivePlayer_8;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// state.players.GetActivePlayer().FakeShot();
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_8 = ___0_state;
		NullCheck(L_8);
		PlayerGroup_t9A018240A3C70C903D89AA964E4F977537B8B015* L_9 = L_8->___players_12;
		NullCheck(L_9);
		Player_t637772DB02240599AE6D1E7DB0850DE1D8743843* L_10;
		L_10 = PlayerGroup_GetActivePlayer_m10B6804AEE843D10F5C91B7A4330CF49C383D534(L_9, NULL);
		NullCheck(L_10);
		Player_FakeShot_m5F0AC23018512326A0DDEB71F90733B722524978(L_10, NULL);
	}

IL_0034:
	{
		// if (state.currentBall.ballIsGrabbed)
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_11 = ___0_state;
		NullCheck(L_11);
		Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC* L_12 = L_11->___currentBall_15;
		NullCheck(L_12);
		bool L_13 = L_12->___ballIsGrabbed_14;
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		// state.currentBall.ballIsGrabbed = false;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_14 = ___0_state;
		NullCheck(L_14);
		Ball_t6111C56AB29B5EDD3A473D5632FCD08605DB9BAC* L_15 = L_14->___currentBall_15;
		NullCheck(L_15);
		L_15->___ballIsGrabbed_14 = (bool)0;
		// state.SwitchState(state.ballLaunchState);
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_16 = ___0_state;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_17 = ___0_state;
		NullCheck(L_17);
		BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F* L_18 = L_17->___ballLaunchState_8;
		NullCheck(L_16);
		BallStateManager_SwitchState_mDD437A10B242DDD78AA846C0510E6F37672ABA98(L_16, L_18, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void BallPrepState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallPrepState__ctor_mE8BEC2E99EFFC61FB1DE4F3DCD220408A093B45A (BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A* __this, const RuntimeMethod* method) 
{
	{
		BallStateMachine__ctor_m66CDA0C71373749819EBAFE9BC53E84EDF138CDB(__this, NULL);
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
// System.Void BallStateMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallStateMachine__ctor_m66CDA0C71373749819EBAFE9BC53E84EDF138CDB (BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4* __this, const RuntimeMethod* method) 
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
// System.Void BallStateManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallStateManager_Start_m040BF95261ED210B71441B92E485768E03118DB9 (BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral563B706437BF0772B19FE10900E39C381D170147);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC2566D7D48CAB76B0F369066161B2FCB1FD6543);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentBallState = ballInitState;
		BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D* L_0 = __this->___ballInitState_5;
		__this->___currentBallState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentBallState_4), (void*)L_0);
		// ballPhase = "ballInitState";
		__this->___ballPhase_18 = _stringLiteral563B706437BF0772B19FE10900E39C381D170147;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ballPhase_18), (void*)_stringLiteral563B706437BF0772B19FE10900E39C381D170147);
		// currentBallState.EnterState(this);
		BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4* L_1 = __this->___currentBallState_4;
		NullCheck(L_1);
		VirtualActionInvoker1< BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* >::Invoke(4 /* System.Void BallStateMachine::EnterState(BallStateManager) */, L_1, __this);
		// gameManager = GameManager.Instance;
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_2 = ((GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE_il2cpp_TypeInfo_var))->___Instance_4;
		__this->___gameManager_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_11), (void*)L_2);
		// ballStateMgrEvent = new("ballstate");
		StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA* L_3 = (StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA*)il2cpp_codegen_object_new(StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StateMgrEvent__ctor_mDE672CE3235D39C2DDD5A24F22FE259BD54CDADE(L_3, _stringLiteralFC2566D7D48CAB76B0F369066161B2FCB1FD6543, NULL);
		__this->___ballStateMgrEvent_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ballStateMgrEvent_21), (void*)L_3);
		// }
		return;
	}
}
// System.Void BallStateManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallStateManager_Update_m10A5283A20C69C766344B3A949BF6395CD32BDF2 (BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* __this, const RuntimeMethod* method) 
{
	{
		// currentBallState.UpdateState(this);
		BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4* L_0 = __this->___currentBallState_4;
		NullCheck(L_0);
		VirtualActionInvoker1< BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* >::Invoke(5 /* System.Void BallStateMachine::UpdateState(BallStateManager) */, L_0, __this);
		// }
		return;
	}
}
// System.Void BallStateManager::SwitchState(BallStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallStateManager_SwitchState_mDD437A10B242DDD78AA846C0510E6F37672ABA98 (BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* __this, BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4* ___0_newState, const RuntimeMethod* method) 
{
	{
		// currentBallState.ExitState(this);
		BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4* L_0 = __this->___currentBallState_4;
		NullCheck(L_0);
		VirtualActionInvoker1< BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* >::Invoke(6 /* System.Void BallStateMachine::ExitState(BallStateManager) */, L_0, __this);
		// currentBallState = newState;
		BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4* L_1 = ___0_newState;
		__this->___currentBallState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentBallState_4), (void*)L_1);
		// if (sendStateWSMessage)
		bool L_2 = __this->___sendStateWSMessage_19;
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		// ballStateMgrEvent.Set(newState.ToString());
		StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA* L_3 = __this->___ballStateMgrEvent_21;
		BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4* L_4 = ___0_newState;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		NullCheck(L_3);
		StateMgrEvent_Set_m5AE2E01405EF207CE38548C82100E7D2ECA2F6D6_inline(L_3, L_5, NULL);
		// ws.SendWSMessage(ballStateMgrEvent.SaveToString());
		WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520* L_6 = __this->___ws_20;
		StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA* L_7 = __this->___ballStateMgrEvent_21;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = StateMgrEvent_SaveToString_m28495AF49ACBACA03B05B70C431AFA340B265AF2(L_7, NULL);
		NullCheck(L_6);
		WsClient_SendWSMessage_m993AC696FB6C1B628E21CFD4B6CD31FE1830FE9D(L_6, L_8, NULL);
	}

IL_0042:
	{
		// currentBallState.EnterState(this);
		BallStateMachine_t8AE8A0F43EF6C3B8542753B159866FB0FBCFF4C4* L_9 = __this->___currentBallState_4;
		NullCheck(L_9);
		VirtualActionInvoker1< BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* >::Invoke(4 /* System.Void BallStateMachine::EnterState(BallStateManager) */, L_9, __this);
		// }
		return;
	}
}
// System.Void BallStateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallStateManager__ctor_mDC8C2A744ACC7A0E5B1CAB61CF2110EBAB789BAE (BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral563B706437BF0772B19FE10900E39C381D170147);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BallInitState ballInitState = new();
		BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D* L_0 = (BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D*)il2cpp_codegen_object_new(BallInitState_t6D9ADE962E95DE096A94E1DD07A4A131BB0B554D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BallInitState__ctor_mC35910FA918BAC7740746EE79F82B60BFF3E7A69(L_0, NULL);
		__this->___ballInitState_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ballInitState_5), (void*)L_0);
		// public BallWaitingState ballWaiting = new();
		BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C* L_1 = (BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C*)il2cpp_codegen_object_new(BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BallWaitingState__ctor_m5C9B9A2470C9FF37EBFE57C8C6D3F5EF76E058A4(L_1, NULL);
		__this->___ballWaiting_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ballWaiting_6), (void*)L_1);
		// public BallPrepState ballPrepState = new();
		BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A* L_2 = (BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A*)il2cpp_codegen_object_new(BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BallPrepState__ctor_mE8BEC2E99EFFC61FB1DE4F3DCD220408A093B45A(L_2, NULL);
		__this->___ballPrepState_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ballPrepState_7), (void*)L_2);
		// public BallLaunchState ballLaunchState = new();
		BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F* L_3 = (BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F*)il2cpp_codegen_object_new(BallLaunchState_t6D2EB946E335303D3F1DAFE1F2C88EEFF4DE8F8F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BallLaunchState__ctor_m17E03259287F20B866C40FA2137DA6B8A0EC44C3(L_3, NULL);
		__this->___ballLaunchState_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ballLaunchState_8), (void*)L_3);
		// public BallCalcImpactState ballCalcImpactState = new();
		BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940* L_4 = (BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940*)il2cpp_codegen_object_new(BallCalcImpactState_t4FF057E926E0DB65CA47F19B3827F87CEE0CF940_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BallCalcImpactState__ctor_m65DF674A1FDCEFAA327967AD20C7B8216D0C15D2(L_4, NULL);
		__this->___ballCalcImpactState_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ballCalcImpactState_9), (void*)L_4);
		// public BallDoneState ballDoneState = new();
		BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132* L_5 = (BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132*)il2cpp_codegen_object_new(BallDoneState_t7DF5C08DF711C53F3D0CEF628AEA096B118EE132_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BallDoneState__ctor_m3ECD88E5882E8439A330156DB4B246975A2D03B3(L_5, NULL);
		__this->___ballDoneState_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ballDoneState_10), (void*)L_5);
		// public string ballPhase = "ballInitState";
		__this->___ballPhase_18 = _stringLiteral563B706437BF0772B19FE10900E39C381D170147;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ballPhase_18), (void*)_stringLiteral563B706437BF0772B19FE10900E39C381D170147);
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
// System.Void BallWaitingState::EnterState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallWaitingState_EnterState_m686F896A8E3ABC9384D09241D019C9F1F8155A6E (BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB3C3CC7963131B913A94595557990806DF0F345);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.ballPhase = "ballWaitingState";
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_0 = ___0_state;
		NullCheck(L_0);
		L_0->___ballPhase_18 = _stringLiteralDB3C3CC7963131B913A94595557990806DF0F345;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___ballPhase_18), (void*)_stringLiteralDB3C3CC7963131B913A94595557990806DF0F345);
		// }
		return;
	}
}
// System.Void BallWaitingState::ExitState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallWaitingState_ExitState_m384396EA75964D7A5A8FB1B55F5CA0E260AFE798 (BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BallWaitingState::UpdateState(BallStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallWaitingState_UpdateState_m4B6E87CAA333555FAE93AF523460A58C16183A7E (BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C* __this, BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* ___0_state, const RuntimeMethod* method) 
{
	{
		// if (state.gameManager.trialIsRunning)
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_0 = ___0_state;
		NullCheck(L_0);
		GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE* L_1 = L_0->___gameManager_11;
		NullCheck(L_1);
		bool L_2 = L_1->___trialIsRunning_21;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// state.SwitchState(state.ballPrepState);
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_3 = ___0_state;
		BallStateManager_t05128ABDAC2CB6032C562BAC2F5031417CD9EB3C* L_4 = ___0_state;
		NullCheck(L_4);
		BallPrepState_t22C2C60E4657245335C44C636A2CD04C5F20770A* L_5 = L_4->___ballPrepState_7;
		NullCheck(L_3);
		BallStateManager_SwitchState_mDD437A10B242DDD78AA846C0510E6F37672ABA98(L_3, L_5, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void BallWaitingState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallWaitingState__ctor_m5C9B9A2470C9FF37EBFE57C8C6D3F5EF76E058A4 (BallWaitingState_t66CFF72D7D203931328280E950EB41158B51214C* __this, const RuntimeMethod* method) 
{
	{
		BallStateMachine__ctor_m66CDA0C71373749819EBAFE9BC53E84EDF138CDB(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateMgrEvent_Set_m5AE2E01405EF207CE38548C82100E7D2ECA2F6D6_inline (StateMgrEvent_tEFE12CEADAA019A474830B9F41697C38A10182FA* __this, String_t* ___0_states, const RuntimeMethod* method) 
{
	{
		// newState = states;
		String_t* L_0 = ___0_states;
		__this->___newState_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___newState_1), (void*)L_0);
		// }
		return;
	}
}
