#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// DataStreamInitializer
struct DataStreamInitializer_t80C6812154954AAFDD8FDD995406DC8F9475EB59;
// GameManager
struct GameManager_tA0A711758C0F8A7192442809330FEE13EE9E35BE;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// LSL.OutletPassThrough
struct OutletPassThrough_t0D321477E508FCA4045FB0C0627AC55ED9AC613C;
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
// LSL.liblsl/StreamOutlet
struct StreamOutlet_t06961477DBA011448D8EC4EBFA0BE4B7E8ACC179;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB12B5D26A52B6EDAB12DAC85822073B70D5DF02C 
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

// DataStreamInitializer
struct DataStreamInitializer_t80C6812154954AAFDD8FDD995406DC8F9475EB59  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LSL.OutletPassThrough DataStreamInitializer::outlet
	OutletPassThrough_t0D321477E508FCA4045FB0C0627AC55ED9AC613C* ___outlet_4;
	// WsClient DataStreamInitializer::ws
	WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520* ___ws_5;
};

// LSL.OutletPassThrough
struct OutletPassThrough_t0D321477E508FCA4045FB0C0627AC55ED9AC613C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String LSL.OutletPassThrough::StreamName_1
	String_t* ___StreamName_1_5;
	// System.String LSL.OutletPassThrough::StreamName_2
	String_t* ___StreamName_2_6;
	// System.String LSL.OutletPassThrough::ContentType_1
	String_t* ___ContentType_1_7;
	// System.String LSL.OutletPassThrough::ContentType_2
	String_t* ___ContentType_2_8;
	// System.String LSL.OutletPassThrough::StreamId_1
	String_t* ___StreamId_1_9;
	// System.String LSL.OutletPassThrough::StreamId_2
	String_t* ___StreamId_2_10;
	// LSL.liblsl/channel_format_t LSL.OutletPassThrough::channel_format_type
	uint8_t ___channel_format_type_11;
	// LSL.liblsl/StreamOutlet LSL.OutletPassThrough::outlet_1
	StreamOutlet_t06961477DBA011448D8EC4EBFA0BE4B7E8ACC179* ___outlet_1_12;
	// LSL.liblsl/StreamOutlet LSL.OutletPassThrough::outlet_2
	StreamOutlet_t06961477DBA011448D8EC4EBFA0BE4B7E8ACC179* ___outlet_2_13;
	// System.String[] LSL.OutletPassThrough::sample
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___sample_14;
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

// System.Void

// System.Void

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// DataStreamInitializer

// DataStreamInitializer

// LSL.OutletPassThrough
struct OutletPassThrough_t0D321477E508FCA4045FB0C0627AC55ED9AC613C_StaticFields
{
	// LSL.OutletPassThrough LSL.OutletPassThrough::_instance
	OutletPassThrough_t0D321477E508FCA4045FB0C0627AC55ED9AC613C* ____instance_4;
};

// LSL.OutletPassThrough

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



// LSL.OutletPassThrough LSL.OutletPassThrough::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OutletPassThrough_t0D321477E508FCA4045FB0C0627AC55ED9AC613C* OutletPassThrough_get_Instance_m44A3F49F7B62F902DE06BAC5177947EC9941F006 (const RuntimeMethod* method) ;
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
// System.Void DataStreamInitializer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStreamInitializer_Start_m856E103B04CB25DF0828FAAB9999CA4B2E29F15C (DataStreamInitializer_t80C6812154954AAFDD8FDD995406DC8F9475EB59* __this, const RuntimeMethod* method) 
{
	{
		// outlet = OutletPassThrough.Instance;
		OutletPassThrough_t0D321477E508FCA4045FB0C0627AC55ED9AC613C* L_0;
		L_0 = OutletPassThrough_get_Instance_m44A3F49F7B62F902DE06BAC5177947EC9941F006(NULL);
		__this->___outlet_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outlet_4), (void*)L_0);
		// ws = WsClient.Instance;
		WsClient_t439BD04F8F8B8D6E26AD57F7657348FD02ABB520* L_1;
		L_1 = WsClient_get_Instance_m0DA315E124184F2DF0F96F3C0ADB3985FD420075(NULL);
		__this->___ws_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ws_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void DataStreamInitializer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStreamInitializer_Update_m7280BE7E488BC7AECF6E7D507E2AD175A1738FC7 (DataStreamInitializer_t80C6812154954AAFDD8FDD995406DC8F9475EB59* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DataStreamInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStreamInitializer__ctor_m1EFBFC532C59EF76E6993F0456F294A894E361C6 (DataStreamInitializer_t80C6812154954AAFDD8FDD995406DC8F9475EB59* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
