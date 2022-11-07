#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Pico.Platform.Models.Room>
struct List_1_t3E88EE01D1DBD030C6906D837D7122DC2AACFDE4;
// System.Collections.Generic.List`1<Pico.Platform.Models.RoomInviteNotification>
struct List_1_tF50A4C96CBBA39B6B05A793A863236D6495E870F;
// System.Collections.Generic.List`1<Pico.Platform.Models.SportDailySummary>
struct List_1_t0D7C34B7489757DC97B25E20557E2B16D01601A2;
// System.Collections.Generic.List`1<Pico.Platform.Models.User>
struct List_1_tB43343FA205088D413BE1DA2F0549C16503E88BE;
// System.Collections.Generic.List`1<Pico.Platform.Models.UserRoom>
struct List_1_tBBD25E1E86D7966804E4978C61077B2E67606853;
// Pico.Platform.Models.MessageArray`1<System.Object>
struct MessageArray_1_tCE6EF260E4DCE08C9729CE5DD7D36D43B525C320;
// Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.Room>
struct MessageArray_1_t8A29A903207EB1BF7ADC149BC7E2533479F9617E;
// Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.RoomInviteNotification>
struct MessageArray_1_t62131693233091B9B8D9C69D8136FD8CD7EFD93A;
// Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.SportDailySummary>
struct MessageArray_1_tF5C14895EFD1F8AEDF1C136262D75FA93B9393DB;
// Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.User>
struct MessageArray_1_t8FB2AFA18B020CDB5F979EA0D8D62BE101BE1EC2;
// Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.UserRoom>
struct MessageArray_1_t785B10FA5D7BE1D6C33B67DD822B88EAEA2F29A3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Pico.Platform.Models.Room[]
struct RoomU5BU5D_tE1852BEFEECCEB3581BDB24227AE93B6AE5E180E;
// Pico.Platform.Models.RoomInviteNotification[]
struct RoomInviteNotificationU5BU5D_t66A67805EA0D135584A8A221193EFFD2D63444A1;
// Pico.Platform.Models.RtcLocalAudioPropertiesInfo[]
struct RtcLocalAudioPropertiesInfoU5BU5D_tDCE88CF7E7D8EA451A5D343EF305378092193836;
// Pico.Platform.Models.RtcRemoteAudioPropertiesInfo[]
struct RtcRemoteAudioPropertiesInfoU5BU5D_tE0D90F4B43BBDE54A41B95170B2B12C0E35B76F7;
// Pico.Platform.Models.SportDailySummary[]
struct SportDailySummaryU5BU5D_t16820435F89030234D4D0A2CD5674AC3F1AC5863;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Pico.Platform.Models.User[]
struct UserU5BU5D_tAD96F72993A688CBFFBBD6C20DE51071B3C072DD;
// Pico.Platform.Models.UserRoom[]
struct UserRoomU5BU5D_t743BBEBFB37874A69D2712368FF065E1862920D9;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Pico.Platform.Models.LaunchFriendResult
struct LaunchFriendResult_t4B8A2C26D6B6DFBD9FC0A966018DAC3DF1BF8370;
// Pico.Platform.Models.Packet
struct Packet_t14ED8D652670CAC56A14849AB08C1BC8467065BB;
// Pico.Platform.Models.PermissionResult
struct PermissionResult_t4919C9F18AE6ED16BEED29FD57489D329A0A59ED;
// Pico.Platform.Models.Room
struct Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D;
// Pico.Platform.Models.RoomInviteNotification
struct RoomInviteNotification_tBAE008A47ADD4EB23B5DDACF8C48524446764A81;
// Pico.Platform.Models.RoomInviteNotificationList
struct RoomInviteNotificationList_t6630ADB570BB0B97C538BDE757838F360295BF80;
// Pico.Platform.Models.RoomList
struct RoomList_t3F4F71C9DCEBC4EBB1541542D617DA67E1457AF8;
// Pico.Platform.Models.RtcAudioPropertyInfo
struct RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D;
// Pico.Platform.Models.RtcBinaryMessageReceived
struct RtcBinaryMessageReceived_tC9A88B36B776048E2DE7CAB6B6FC3F5D2B9D7E97;
// Pico.Platform.Models.RtcJoinRoomResult
struct RtcJoinRoomResult_t222AA0AA4390A38744032D6F5E176BD2E4D1AF86;
// Pico.Platform.Models.RtcLeaveRoomResult
struct RtcLeaveRoomResult_tAEC4346AD4A8B3227C7A6866A646DB44D80EE2F5;
// Pico.Platform.Models.RtcLocalAudioPropertiesInfo
struct RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7;
// Pico.Platform.Models.RtcLocalAudioPropertiesReport
struct RtcLocalAudioPropertiesReport_t32CB97B68D05215E397A0D852B11C37D8F45D843;
// Pico.Platform.Models.RtcMediaDeviceChangeInfo
struct RtcMediaDeviceChangeInfo_t8AF4D1C316FDE4DE287FB0B21D061933A2DB09B9;
// Pico.Platform.Models.RtcMessageSendResult
struct RtcMessageSendResult_t340C6173650F03204076588487BA8F92F5E57973;
// Pico.Platform.Models.RtcMuteInfo
struct RtcMuteInfo_t13EC090EF336129CF50A4B58F688F42CFA53CBCC;
// Pico.Platform.Models.RtcRemoteAudioPropertiesInfo
struct RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0;
// Pico.Platform.Models.RtcRemoteAudioPropertiesReport
struct RtcRemoteAudioPropertiesReport_t0E2035670F409963DFD1C9BB84670125169459DA;
// Pico.Platform.Models.RtcRemoteStreamKey
struct RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8;
// Pico.Platform.Models.RtcRoomError
struct RtcRoomError_t68499B928A94941DF435C88B6FAA0942D39C3181;
// Pico.Platform.Models.RtcRoomMessageReceived
struct RtcRoomMessageReceived_t59D10EBCDA6D8F93187CED472EC8F583F9E45DB1;
// Pico.Platform.Models.RtcRoomStats
struct RtcRoomStats_tF73914DABF13D8494F32E98648C491D8325345D0;
// Pico.Platform.Models.RtcRoomWarn
struct RtcRoomWarn_tDDB2A799E1AE0089AE0F3CD1FA0E67E129726C54;
// Pico.Platform.Models.RtcStreamSyncInfo
struct RtcStreamSyncInfo_t794F9FE01AD8FF9C5F4F0C13276A0FE4BF86D158;
// Pico.Platform.Models.RtcUserJoinInfo
struct RtcUserJoinInfo_tB5621FE936406D29E014B854A414CE9DBD573F5C;
// Pico.Platform.Models.RtcUserLeaveInfo
struct RtcUserLeaveInfo_tABD9D07FC0F0E3950CFB2374C32C33C4278601F9;
// Pico.Platform.Models.RtcUserMessageReceived
struct RtcUserMessageReceived_tAAE8A50CC325D49DF5A0032406971B9310471BEA;
// Pico.Platform.Models.RtcUserPublishInfo
struct RtcUserPublishInfo_tD1C72BDF929EB5EF4400C879E36D6151F8915493;
// Pico.Platform.Models.RtcUserUnPublishInfo
struct RtcUserUnPublishInfo_t72DA2A1DFAA80819C0B3331AA2FC2C3033506DCB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Pico.Platform.Models.SportDailySummary
struct SportDailySummary_t157AFBF25089D3D27A38BA94B50C7BE06FE8F227;
// Pico.Platform.Models.SportDailySummaryList
struct SportDailySummaryList_t57C835C93904EF5EEFA7C7BDC79AD9B7801E219B;
// Pico.Platform.Models.SportSummary
struct SportSummary_t16F36734D6C51BC8F25904D05E2EFA8B52B90DEF;
// Pico.Platform.Models.SportUserInfo
struct SportUserInfo_t4ED6C986AF2629CF8CE961DD6E035BEC64C47E30;
// System.String
struct String_t;
// Pico.Platform.Models.User
struct User_t4A57578F9001EB8B02745E9305A72B29570F459B;
// Pico.Platform.Models.UserList
struct UserList_t4FBD372AD727B86FE2C738E38D1BCAE7C3BB7281;
// Pico.Platform.Models.UserRoom
struct UserRoom_t79DBE9A132DE86412643A0D29CB6959379090B32;
// Pico.Platform.Models.UserRoomList
struct UserRoomList_t1356EC457562D614E92DDCE3D99004CB86CC9FD2;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomInviteNotification_tBAE008A47ADD4EB23B5DDACF8C48524446764A81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RtcLocalAudioPropertiesInfoU5BU5D_tDCE88CF7E7D8EA451A5D343EF305378092193836_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RtcRemoteAudioPropertiesInfoU5BU5D_tE0D90F4B43BBDE54A41B95170B2B12C0E35B76F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SportDailySummary_t157AFBF25089D3D27A38BA94B50C7BE06FE8F227_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserList_t4FBD372AD727B86FE2C738E38D1BCAE7C3BB7281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserRoom_t79DBE9A132DE86412643A0D29CB6959379090B32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* User_t4A57578F9001EB8B02745E9305A72B29570F459B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Util_tAA46537EC970B5CC1EC8F3648989D4B35968B6B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral117F539165B45A5AC4BAAE9D28D7843EC5548C9E;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2E7B33840E1BF3DFD2868E82D4E815FE4942A622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m40B1CAF48404FED800CB19BB5F977EEFE59A55FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m432089447997B5982386997CECED9946334CAF6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m92B8C781D726B84AF40CDA82917B0701B86B2F91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCFDD6AF77CD53FC9BD39A96B47042D35CB515624_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m282D35C16336809C7B6A230821F954A4505114B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m30720F96B6848FE93F84FA814959EFB82920CBFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m38E70F89B76F25A793317CAE6F6B8B2AC3CB6E05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m797F835E1497C61FC45E8F74AFA810F161C3FF9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mFA11F8A01B3611B3FBEB0C44D010EDB43E01215C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageArray_1__ctor_mA979AAEE168F9640490FF54CC91E4A42248A3DD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageArray_1__ctor_mB9282B974A69F693F481FD1242C22EA48D3DBB94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageArray_1__ctor_mC7EBC3393EB4CC530E06FCF5211EF9BBEBCE6212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageArray_1__ctor_mC9A4F0DDF161BCD0B98654B9D0EB3BB88C5FEC7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageArray_1__ctor_mFCAF643A2F55D902CBDBCB33CBFD114CAD97B23F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Packet_GetBytes_m39D8940C9652DAEA1DF47ED71397717B8CB4732B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Packet_GetBytes_m4C7DCFED67828EDF17C7FE19DF0B192FF9172EE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RtcLocalAudioPropertiesReport__ctor_m070996393241820FE38C6BC98C80DD3A805E2937_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RtcLocalAudioPropertiesInfoU5BU5D_tDCE88CF7E7D8EA451A5D343EF305378092193836;
struct RtcRemoteAudioPropertiesInfoU5BU5D_tE0D90F4B43BBDE54A41B95170B2B12C0E35B76F7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.List`1<Pico.Platform.Models.Room>
struct List_1_t3E88EE01D1DBD030C6906D837D7122DC2AACFDE4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RoomU5BU5D_tE1852BEFEECCEB3581BDB24227AE93B6AE5E180E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3E88EE01D1DBD030C6906D837D7122DC2AACFDE4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RoomU5BU5D_tE1852BEFEECCEB3581BDB24227AE93B6AE5E180E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Pico.Platform.Models.RoomInviteNotification>
struct List_1_tF50A4C96CBBA39B6B05A793A863236D6495E870F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RoomInviteNotificationU5BU5D_t66A67805EA0D135584A8A221193EFFD2D63444A1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF50A4C96CBBA39B6B05A793A863236D6495E870F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RoomInviteNotificationU5BU5D_t66A67805EA0D135584A8A221193EFFD2D63444A1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Pico.Platform.Models.SportDailySummary>
struct List_1_t0D7C34B7489757DC97B25E20557E2B16D01601A2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SportDailySummaryU5BU5D_t16820435F89030234D4D0A2CD5674AC3F1AC5863* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D7C34B7489757DC97B25E20557E2B16D01601A2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SportDailySummaryU5BU5D_t16820435F89030234D4D0A2CD5674AC3F1AC5863* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Pico.Platform.Models.User>
struct List_1_tB43343FA205088D413BE1DA2F0549C16503E88BE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UserU5BU5D_tAD96F72993A688CBFFBBD6C20DE51071B3C072DD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB43343FA205088D413BE1DA2F0549C16503E88BE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UserU5BU5D_tAD96F72993A688CBFFBBD6C20DE51071B3C072DD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Pico.Platform.Models.UserRoom>
struct List_1_tBBD25E1E86D7966804E4978C61077B2E67606853  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UserRoomU5BU5D_t743BBEBFB37874A69D2712368FF065E1862920D9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBBD25E1E86D7966804E4978C61077B2E67606853_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UserRoomU5BU5D_t743BBEBFB37874A69D2712368FF065E1862920D9* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Pico.Platform.Models.LaunchFriendResult
struct LaunchFriendResult_t4B8A2C26D6B6DFBD9FC0A966018DAC3DF1BF8370  : public RuntimeObject
{
	// System.Boolean Pico.Platform.Models.LaunchFriendResult::DidCancel
	bool ___DidCancel_0;
	// System.Boolean Pico.Platform.Models.LaunchFriendResult::DidSendRequest
	bool ___DidSendRequest_1;
};

// Pico.Platform.Models.PermissionResult
struct PermissionResult_t4919C9F18AE6ED16BEED29FD57489D329A0A59ED  : public RuntimeObject
{
	// System.String[] Pico.Platform.Models.PermissionResult::AuthorizedPermissions
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___AuthorizedPermissions_0;
	// System.String Pico.Platform.Models.PermissionResult::AccessToken
	String_t* ___AccessToken_1;
	// System.String Pico.Platform.Models.PermissionResult::UserID
	String_t* ___UserID_2;
};

// Pico.Platform.Models.Room
struct Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Pico.Platform.Models.Room::DataStore
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___DataStore_0;
	// System.String Pico.Platform.Models.Room::Description
	String_t* ___Description_1;
	// System.UInt64 Pico.Platform.Models.Room::RoomId
	uint64_t ___RoomId_2;
	// System.Boolean Pico.Platform.Models.Room::IsMembershipLocked
	bool ___IsMembershipLocked_3;
	// Pico.Platform.RoomJoinPolicy Pico.Platform.Models.Room::RoomJoinPolicy
	int32_t ___RoomJoinPolicy_4;
	// Pico.Platform.RoomJoinability Pico.Platform.Models.Room::RoomJoinability
	int32_t ___RoomJoinability_5;
	// System.UInt32 Pico.Platform.Models.Room::MaxUsers
	uint32_t ___MaxUsers_6;
	// Pico.Platform.Models.User Pico.Platform.Models.Room::OwnerOptional
	User_t4A57578F9001EB8B02745E9305A72B29570F459B* ___OwnerOptional_7;
	// Pico.Platform.RoomType Pico.Platform.Models.Room::RoomType
	int32_t ___RoomType_8;
	// Pico.Platform.Models.UserList Pico.Platform.Models.Room::UsersOptional
	UserList_t4FBD372AD727B86FE2C738E38D1BCAE7C3BB7281* ___UsersOptional_9;
};

// Pico.Platform.Models.RtcAudioPropertyInfo
struct RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D  : public RuntimeObject
{
	// System.Int32 Pico.Platform.Models.RtcAudioPropertyInfo::Volume
	int32_t ___Volume_0;
};

// Pico.Platform.Models.RtcBinaryMessageReceived
struct RtcBinaryMessageReceived_tC9A88B36B776048E2DE7CAB6B6FC3F5D2B9D7E97  : public RuntimeObject
{
	// System.String Pico.Platform.Models.RtcBinaryMessageReceived::UserId
	String_t* ___UserId_0;
	// System.Byte[] Pico.Platform.Models.RtcBinaryMessageReceived::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_1;
	// System.String Pico.Platform.Models.RtcBinaryMessageReceived::RoomId
	String_t* ___RoomId_2;
};

// Pico.Platform.Models.RtcJoinRoomResult
struct RtcJoinRoomResult_t222AA0AA4390A38744032D6F5E176BD2E4D1AF86  : public RuntimeObject
{
	// System.String Pico.Platform.Models.RtcJoinRoomResult::RoomId
	String_t* ___RoomId_0;
	// System.String Pico.Platform.Models.RtcJoinRoomResult::UserId
	String_t* ___UserId_1;
	// System.Int32 Pico.Platform.Models.RtcJoinRoomResult::ErrorCode
	int32_t ___ErrorCode_2;
	// System.Int32 Pico.Platform.Models.RtcJoinRoomResult::Elapsed
	int32_t ___Elapsed_3;
	// Pico.Platform.RtcJoinRoomType Pico.Platform.Models.RtcJoinRoomResult::JoinType
	int32_t ___JoinType_4;
};

// Pico.Platform.Models.RtcLeaveRoomResult
struct RtcLeaveRoomResult_tAEC4346AD4A8B3227C7A6866A646DB44D80EE2F5  : public RuntimeObject
{
	// System.String Pico.Platform.Models.RtcLeaveRoomResult::RoomId
	String_t* ___RoomId_0;
};

// Pico.Platform.Models.RtcLocalAudioPropertiesInfo
struct RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7  : public RuntimeObject
{
	// Pico.Platform.RtcStreamIndex Pico.Platform.Models.RtcLocalAudioPropertiesInfo::StreamIndex
	int32_t ___StreamIndex_0;
	// Pico.Platform.Models.RtcAudioPropertyInfo Pico.Platform.Models.RtcLocalAudioPropertiesInfo::AudioPropertyInfo
	RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D* ___AudioPropertyInfo_1;
};

// Pico.Platform.Models.RtcLocalAudioPropertiesReport
struct RtcLocalAudioPropertiesReport_t32CB97B68D05215E397A0D852B11C37D8F45D843  : public RuntimeObject
{
	// Pico.Platform.Models.RtcLocalAudioPropertiesInfo[] Pico.Platform.Models.RtcLocalAudioPropertiesReport::AudioPropertiesInfos
	RtcLocalAudioPropertiesInfoU5BU5D_tDCE88CF7E7D8EA451A5D343EF305378092193836* ___AudioPropertiesInfos_0;
};

// Pico.Platform.Models.RtcMediaDeviceChangeInfo
struct RtcMediaDeviceChangeInfo_t8AF4D1C316FDE4DE287FB0B21D061933A2DB09B9  : public RuntimeObject
{
	// System.String Pico.Platform.Models.RtcMediaDeviceChangeInfo::DeviceId
	String_t* ___DeviceId_0;
	// Pico.Platform.RtcMediaDeviceType Pico.Platform.Models.RtcMediaDeviceChangeInfo::DeviceType
	int32_t ___DeviceType_1;
	// Pico.Platform.RtcMediaDeviceState Pico.Platform.Models.RtcMediaDeviceChangeInfo::DeviceState
	int32_t ___DeviceState_2;
	// Pico.Platform.RtcMediaDeviceError Pico.Platform.Models.RtcMediaDeviceChangeInfo::DeviceError
	int32_t ___DeviceError_3;
};

// Pico.Platform.Models.RtcMessageSendResult
struct RtcMessageSendResult_t340C6173650F03204076588487BA8F92F5E57973  : public RuntimeObject
{
	// System.Int64 Pico.Platform.Models.RtcMessageSendResult::MessageId
	int64_t ___MessageId_0;
	// System.Int32 Pico.Platform.Models.RtcMessageSendResult::Error
	int32_t ___Error_1;
	// System.String Pico.Platform.Models.RtcMessageSendResult::RoomId
	String_t* ___RoomId_2;
};

// Pico.Platform.Models.RtcMuteInfo
struct RtcMuteInfo_t13EC090EF336129CF50A4B58F688F42CFA53CBCC  : public RuntimeObject
{
	// System.String Pico.Platform.Models.RtcMuteInfo::UserId
	String_t* ___UserId_0;
	// Pico.Platform.RtcMuteState Pico.Platform.Models.RtcMuteInfo::MuteState
	int32_t ___MuteState_1;
};

// Pico.Platform.Models.RtcRemoteAudioPropertiesInfo
struct RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0  : public RuntimeObject
{
	// Pico.Platform.Models.RtcRemoteStreamKey Pico.Platform.Models.RtcRemoteAudioPropertiesInfo::StreamKey
	RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8* ___StreamKey_0;
	// Pico.Platform.Models.RtcAudioPropertyInfo Pico.Platform.Models.RtcRemoteAudioPropertiesInfo::AudioPropertiesInfo
	RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D* ___AudioPropertiesInfo_1;
};

// Pico.Platform.Models.RtcRemoteAudioPropertiesReport
struct RtcRemoteAudioPropertiesReport_t0E2035670F409963DFD1C9BB84670125169459DA  : public RuntimeObject
{
	// Pico.Platform.Models.RtcRemoteAudioPropertiesInfo[] Pico.Platform.Models.RtcRemoteAudioPropertiesReport::AudioPropertiesInfos
	RtcRemoteAudioPropertiesInfoU5BU5D_tE0D90F4B43BBDE54A41B95170B2B12C0E35B76F7* ___AudioPropertiesInfos_0;
	// System.Int32 Pico.Platform.Models.RtcRemoteAudioPropertiesReport::TotalRemoteVolume
	int32_t ___TotalRemoteVolume_1;
};

// Pico.Platform.Models.RtcRemoteStreamKey
struct RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8  : public RuntimeObject
{
	// System.String Pico.Platform.Models.RtcRemoteStreamKey::RoomId
	String_t* ___RoomId_0;
	// System.String Pico.Platform.Models.RtcRemoteStreamKey::UserId
	String_t* ___UserId_1;
	// Pico.Platform.RtcStreamIndex Pico.Platform.Models.RtcRemoteStreamKey::RtcStreamIndex
	int32_t ___RtcStreamIndex_2;
};

// Pico.Platform.Models.RtcRoomError
struct RtcRoomError_t68499B928A94941DF435C88B6FAA0942D39C3181  : public RuntimeObject
{
	// System.Int32 Pico.Platform.Models.RtcRoomError::Code
	int32_t ___Code_0;
	// System.String Pico.Platform.Models.RtcRoomError::RoomId
	String_t* ___RoomId_1;
};

// Pico.Platform.Models.RtcRoomMessageReceived
struct RtcRoomMessageReceived_t59D10EBCDA6D8F93187CED472EC8F583F9E45DB1  : public RuntimeObject
{
	// System.String Pico.Platform.Models.RtcRoomMessageReceived::UserId
	String_t* ___UserId_0;
	// System.String Pico.Platform.Models.RtcRoomMessageReceived::Message
	String_t* ___Message_1;
	// System.String Pico.Platform.Models.RtcRoomMessageReceived::RoomId
	String_t* ___RoomId_2;
};

// Pico.Platform.Models.RtcRoomStats
struct RtcRoomStats_tF73914DABF13D8494F32E98648C491D8325345D0  : public RuntimeObject
{
	// System.Int32 Pico.Platform.Models.RtcRoomStats::TotalDuration
	int32_t ___TotalDuration_0;
	// System.Int32 Pico.Platform.Models.RtcRoomStats::UserCount
	int32_t ___UserCount_1;
	// System.String Pico.Platform.Models.RtcRoomStats::RoomId
	String_t* ___RoomId_2;
};

// Pico.Platform.Models.RtcRoomWarn
struct RtcRoomWarn_tDDB2A799E1AE0089AE0F3CD1FA0E67E129726C54  : public RuntimeObject
{
	// System.Int32 Pico.Platform.Models.RtcRoomWarn::Code
	int32_t ___Code_0;
	// System.String Pico.Platform.Models.RtcRoomWarn::RoomId
	String_t* ___RoomId_1;
};

// Pico.Platform.Models.RtcStreamSyncInfo
struct RtcStreamSyncInfo_t794F9FE01AD8FF9C5F4F0C13276A0FE4BF86D158  : public RuntimeObject
{
	// Pico.Platform.Models.RtcRemoteStreamKey Pico.Platform.Models.RtcStreamSyncInfo::StreamKey
	RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8* ___StreamKey_0;
	// Pico.Platform.RtcSyncInfoStreamType Pico.Platform.Models.RtcStreamSyncInfo::StreamType
	int32_t ___StreamType_1;
	// System.Byte[] Pico.Platform.Models.RtcStreamSyncInfo::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_2;
};

// Pico.Platform.Models.RtcUserJoinInfo
struct RtcUserJoinInfo_tB5621FE936406D29E014B854A414CE9DBD573F5C  : public RuntimeObject
{
	// System.String Pico.Platform.Models.RtcUserJoinInfo::UserId
	String_t* ___UserId_0;
	// System.String Pico.Platform.Models.RtcUserJoinInfo::UserExtra
	String_t* ___UserExtra_1;
	// System.Int32 Pico.Platform.Models.RtcUserJoinInfo::Elapsed
	int32_t ___Elapsed_2;
	// System.String Pico.Platform.Models.RtcUserJoinInfo::RoomId
	String_t* ___RoomId_3;
};

// Pico.Platform.Models.RtcUserLeaveInfo
struct RtcUserLeaveInfo_tABD9D07FC0F0E3950CFB2374C32C33C4278601F9  : public RuntimeObject
{
	// System.String Pico.Platform.Models.RtcUserLeaveInfo::UserId
	String_t* ___UserId_0;
	// Pico.Platform.RtcUserLeaveReasonType Pico.Platform.Models.RtcUserLeaveInfo::OfflineReason
	int32_t ___OfflineReason_1;
	// System.String Pico.Platform.Models.RtcUserLeaveInfo::RoomId
	String_t* ___RoomId_2;
};

// Pico.Platform.Models.RtcUserMessageReceived
struct RtcUserMessageReceived_tAAE8A50CC325D49DF5A0032406971B9310471BEA  : public RuntimeObject
{
	// System.String Pico.Platform.Models.RtcUserMessageReceived::UserId
	String_t* ___UserId_0;
	// System.String Pico.Platform.Models.RtcUserMessageReceived::Message
	String_t* ___Message_1;
	// System.String Pico.Platform.Models.RtcUserMessageReceived::RoomId
	String_t* ___RoomId_2;
};

// Pico.Platform.Models.RtcUserPublishInfo
struct RtcUserPublishInfo_tD1C72BDF929EB5EF4400C879E36D6151F8915493  : public RuntimeObject
{
	// System.String Pico.Platform.Models.RtcUserPublishInfo::UserId
	String_t* ___UserId_0;
	// Pico.Platform.RtcMediaStreamType Pico.Platform.Models.RtcUserPublishInfo::MediaStreamType
	int32_t ___MediaStreamType_1;
	// System.String Pico.Platform.Models.RtcUserPublishInfo::RoomId
	String_t* ___RoomId_2;
};

// Pico.Platform.Models.RtcUserUnPublishInfo
struct RtcUserUnPublishInfo_t72DA2A1DFAA80819C0B3331AA2FC2C3033506DCB  : public RuntimeObject
{
	// System.String Pico.Platform.Models.RtcUserUnPublishInfo::UserId
	String_t* ___UserId_0;
	// Pico.Platform.RtcMediaStreamType Pico.Platform.Models.RtcUserUnPublishInfo::MediaStreamType
	int32_t ___MediaStreamType_1;
	// Pico.Platform.RtcStreamRemoveReason Pico.Platform.Models.RtcUserUnPublishInfo::Reason
	int32_t ___Reason_2;
	// System.String Pico.Platform.Models.RtcUserUnPublishInfo::RoomId
	String_t* ___RoomId_3;
};

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

// Pico.Platform.Models.User
struct User_t4A57578F9001EB8B02745E9305A72B29570F459B  : public RuntimeObject
{
	// System.String Pico.Platform.Models.User::DisplayName
	String_t* ___DisplayName_0;
	// System.String Pico.Platform.Models.User::ImageUrl
	String_t* ___ImageUrl_1;
	// System.String Pico.Platform.Models.User::ID
	String_t* ___ID_2;
	// Pico.Platform.UserPresenceStatus Pico.Platform.Models.User::PresenceStatus
	int32_t ___PresenceStatus_3;
	// Pico.Platform.Gender Pico.Platform.Models.User::Gender
	int32_t ___Gender_4;
	// System.String Pico.Platform.Models.User::Presence
	String_t* ___Presence_5;
	// System.String Pico.Platform.Models.User::PresenceDeeplinkMessage
	String_t* ___PresenceDeeplinkMessage_6;
	// System.String Pico.Platform.Models.User::PresenceDestinationApiName
	String_t* ___PresenceDestinationApiName_7;
	// System.String Pico.Platform.Models.User::PresenceLobbySessionId
	String_t* ___PresenceLobbySessionId_8;
	// System.String Pico.Platform.Models.User::PresenceMatchSessionId
	String_t* ___PresenceMatchSessionId_9;
	// System.String Pico.Platform.Models.User::PresenceExtra
	String_t* ___PresenceExtra_10;
	// System.String Pico.Platform.Models.User::SmallImageUrl
	String_t* ___SmallImageUrl_11;
	// System.String Pico.Platform.Models.User::InviteToken
	String_t* ___InviteToken_12;
	// System.String Pico.Platform.Models.User::StoreRegion
	String_t* ___StoreRegion_13;
};

// Pico.Platform.Models.UserRoom
struct UserRoom_t79DBE9A132DE86412643A0D29CB6959379090B32  : public RuntimeObject
{
	// Pico.Platform.Models.User Pico.Platform.Models.UserRoom::User
	User_t4A57578F9001EB8B02745E9305A72B29570F459B* ___User_0;
	// Pico.Platform.Models.Room Pico.Platform.Models.UserRoom::Room
	Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D* ___Room_1;
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

// Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.Room>
struct MessageArray_1_t8A29A903207EB1BF7ADC149BC7E2533479F9617E  : public List_1_t3E88EE01D1DBD030C6906D837D7122DC2AACFDE4
{
	// System.String Pico.Platform.Models.MessageArray`1::NextPageParam
	String_t* ___NextPageParam_6;
	// System.String Pico.Platform.Models.MessageArray`1::PreviousPageParam
	String_t* ___PreviousPageParam_7;
};

// Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.RoomInviteNotification>
struct MessageArray_1_t62131693233091B9B8D9C69D8136FD8CD7EFD93A  : public List_1_tF50A4C96CBBA39B6B05A793A863236D6495E870F
{
	// System.String Pico.Platform.Models.MessageArray`1::NextPageParam
	String_t* ___NextPageParam_6;
	// System.String Pico.Platform.Models.MessageArray`1::PreviousPageParam
	String_t* ___PreviousPageParam_7;
};

// Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.SportDailySummary>
struct MessageArray_1_tF5C14895EFD1F8AEDF1C136262D75FA93B9393DB  : public List_1_t0D7C34B7489757DC97B25E20557E2B16D01601A2
{
	// System.String Pico.Platform.Models.MessageArray`1::NextPageParam
	String_t* ___NextPageParam_6;
	// System.String Pico.Platform.Models.MessageArray`1::PreviousPageParam
	String_t* ___PreviousPageParam_7;
};

// Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.User>
struct MessageArray_1_t8FB2AFA18B020CDB5F979EA0D8D62BE101BE1EC2  : public List_1_tB43343FA205088D413BE1DA2F0549C16503E88BE
{
	// System.String Pico.Platform.Models.MessageArray`1::NextPageParam
	String_t* ___NextPageParam_6;
	// System.String Pico.Platform.Models.MessageArray`1::PreviousPageParam
	String_t* ___PreviousPageParam_7;
};

// Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.UserRoom>
struct MessageArray_1_t785B10FA5D7BE1D6C33B67DD822B88EAEA2F29A3  : public List_1_tBBD25E1E86D7966804E4978C61077B2E67606853
{
	// System.String Pico.Platform.Models.MessageArray`1::NextPageParam
	String_t* ___NextPageParam_6;
	// System.String Pico.Platform.Models.MessageArray`1::PreviousPageParam
	String_t* ___PreviousPageParam_7;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// Pico.Platform.Models.Packet
struct Packet_t14ED8D652670CAC56A14849AB08C1BC8467065BB  : public RuntimeObject
{
	// System.UInt64 Pico.Platform.Models.Packet::size
	uint64_t ___size_0;
	// System.IntPtr Pico.Platform.Models.Packet::handler
	intptr_t ___handler_1;
};

// Pico.Platform.Models.RoomInviteNotification
struct RoomInviteNotification_tBAE008A47ADD4EB23B5DDACF8C48524446764A81  : public RuntimeObject
{
	// System.UInt64 Pico.Platform.Models.RoomInviteNotification::ID
	uint64_t ___ID_0;
	// System.UInt64 Pico.Platform.Models.RoomInviteNotification::RoomID
	uint64_t ___RoomID_1;
	// System.String Pico.Platform.Models.RoomInviteNotification::SenderID
	String_t* ___SenderID_2;
	// System.DateTime Pico.Platform.Models.RoomInviteNotification::SentTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___SentTime_3;
};

// Pico.Platform.Models.RoomInviteNotificationList
struct RoomInviteNotificationList_t6630ADB570BB0B97C538BDE757838F360295BF80  : public MessageArray_1_t62131693233091B9B8D9C69D8136FD8CD7EFD93A
{
};

// Pico.Platform.Models.RoomList
struct RoomList_t3F4F71C9DCEBC4EBB1541542D617DA67E1457AF8  : public MessageArray_1_t8A29A903207EB1BF7ADC149BC7E2533479F9617E
{
	// System.Int32 Pico.Platform.Models.RoomList::CurIndex
	int32_t ___CurIndex_8;
	// System.Int32 Pico.Platform.Models.RoomList::PageSize
	int32_t ___PageSize_9;
};

// Pico.Platform.Models.SportDailySummary
struct SportDailySummary_t157AFBF25089D3D27A38BA94B50C7BE06FE8F227  : public RuntimeObject
{
	// System.Int64 Pico.Platform.Models.SportDailySummary::Id
	int64_t ___Id_0;
	// System.DateTime Pico.Platform.Models.SportDailySummary::Date
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Date_1;
	// System.Int32 Pico.Platform.Models.SportDailySummary::DurationInSeconds
	int32_t ___DurationInSeconds_2;
	// System.Int32 Pico.Platform.Models.SportDailySummary::PlanDurationInMinutes
	int32_t ___PlanDurationInMinutes_3;
	// System.Double Pico.Platform.Models.SportDailySummary::Calorie
	double ___Calorie_4;
	// System.Double Pico.Platform.Models.SportDailySummary::PlanCalorie
	double ___PlanCalorie_5;
};

// Pico.Platform.Models.SportDailySummaryList
struct SportDailySummaryList_t57C835C93904EF5EEFA7C7BDC79AD9B7801E219B  : public MessageArray_1_tF5C14895EFD1F8AEDF1C136262D75FA93B9393DB
{
};

// Pico.Platform.Models.SportSummary
struct SportSummary_t16F36734D6C51BC8F25904D05E2EFA8B52B90DEF  : public RuntimeObject
{
	// System.Int64 Pico.Platform.Models.SportSummary::DurationInSeconds
	int64_t ___DurationInSeconds_0;
	// System.Double Pico.Platform.Models.SportSummary::Calorie
	double ___Calorie_1;
	// System.DateTime Pico.Platform.Models.SportSummary::StartTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___StartTime_2;
	// System.DateTime Pico.Platform.Models.SportSummary::EndTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___EndTime_3;
};

// Pico.Platform.Models.SportUserInfo
struct SportUserInfo_t4ED6C986AF2629CF8CE961DD6E035BEC64C47E30  : public RuntimeObject
{
	// Pico.Platform.Gender Pico.Platform.Models.SportUserInfo::Gender
	int32_t ___Gender_0;
	// System.DateTime Pico.Platform.Models.SportUserInfo::Birthday
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Birthday_1;
	// System.Int32 Pico.Platform.Models.SportUserInfo::Stature
	int32_t ___Stature_2;
	// System.Int32 Pico.Platform.Models.SportUserInfo::Weight
	int32_t ___Weight_3;
	// System.Int32 Pico.Platform.Models.SportUserInfo::SportLevel
	int32_t ___SportLevel_4;
	// System.Int32 Pico.Platform.Models.SportUserInfo::DailyDurationInMinutes
	int32_t ___DailyDurationInMinutes_5;
	// System.Int32 Pico.Platform.Models.SportUserInfo::DaysPerWeek
	int32_t ___DaysPerWeek_6;
	// Pico.Platform.SportTarget Pico.Platform.Models.SportUserInfo::SportTarget
	int32_t ___SportTarget_7;
};

// Pico.Platform.Models.UserList
struct UserList_t4FBD372AD727B86FE2C738E38D1BCAE7C3BB7281  : public MessageArray_1_t8FB2AFA18B020CDB5F979EA0D8D62BE101BE1EC2
{
};

// Pico.Platform.Models.UserRoomList
struct UserRoomList_t1356EC457562D614E92DDCE3D99004CB86CC9FD2  : public MessageArray_1_t785B10FA5D7BE1D6C33B67DD822B88EAEA2F29A3
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Pico.Platform.Models.RtcLocalAudioPropertiesInfo[]
struct RtcLocalAudioPropertiesInfoU5BU5D_tDCE88CF7E7D8EA451A5D343EF305378092193836  : public RuntimeArray
{
	ALIGN_FIELD (8) RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7* m_Items[1];

	inline RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Pico.Platform.Models.RtcRemoteAudioPropertiesInfo[]
struct RtcRemoteAudioPropertiesInfoU5BU5D_tE0D90F4B43BBDE54A41B95170B2B12C0E35B76F7  : public RuntimeArray
{
	ALIGN_FIELD (8) RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0* m_Items[1];

	inline RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void Pico.Platform.Models.MessageArray`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageArray_1__ctor_mB9AA519DC3819501D064517EA47E7D98C883AA88_gshared (MessageArray_1_tCE6EF260E4DCE08C9729CE5DD7D36D43B525C320* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.RoomInviteNotification>::.ctor()
inline void MessageArray_1__ctor_mFCAF643A2F55D902CBDBCB33CBFD114CAD97B23F (MessageArray_1_t62131693233091B9B8D9C69D8136FD8CD7EFD93A* __this, const RuntimeMethod* method)
{
	((  void (*) (MessageArray_1_t62131693233091B9B8D9C69D8136FD8CD7EFD93A*, const RuntimeMethod*))MessageArray_1__ctor_mB9AA519DC3819501D064517EA47E7D98C883AA88_gshared)(__this, method);
}
// System.Boolean Pico.Platform.CLIB::ppf_RoomInviteNotificationArray_HasNextPage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLIB_ppf_RoomInviteNotificationArray_HasNextPage_mBD788B2C4BAA371F45F9890B8BF968565616375C (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.UIntPtr Pico.Platform.CLIB::ppf_RoomInviteNotificationArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CLIB_ppf_RoomInviteNotificationArray_GetSize_mF1BB8BC228A57E1DAD14FC99C05CB4A60E0E489C (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.UInt32 System.UIntPtr::op_Explicit(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8 (uintptr_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Pico.Platform.Models.RoomInviteNotification>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mFA11F8A01B3611B3FBEB0C44D010EDB43E01215C (List_1_tF50A4C96CBBA39B6B05A793A863236D6495E870F* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF50A4C96CBBA39B6B05A793A863236D6495E870F*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___value0, method);
}
// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_mD94DCD8965DD2E7D5A3370A04CCEDBE5937C078C (uint32_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_RoomInviteNotificationArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_RoomInviteNotificationArray_GetElement_mAC223273A73C9EDF33DADCFCF48D9668A391C448 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.RoomInviteNotification::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInviteNotification__ctor_mE27363216CC7FBBF4DB9E28288DC3F94DD07B620 (RoomInviteNotification_tBAE008A47ADD4EB23B5DDACF8C48524446764A81* __this, intptr_t ___o0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Pico.Platform.Models.RoomInviteNotification>::Add(T)
inline void List_1_Add_m432089447997B5982386997CECED9946334CAF6C_inline (List_1_tF50A4C96CBBA39B6B05A793A863236D6495E870F* __this, RoomInviteNotification_tBAE008A47ADD4EB23B5DDACF8C48524446764A81* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF50A4C96CBBA39B6B05A793A863236D6495E870F*, RoomInviteNotification_tBAE008A47ADD4EB23B5DDACF8C48524446764A81*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.UIntPtr Pico.Platform.CLIB::ppf_Packet_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CLIB_ppf_Packet_GetSize_m78C58AF3AB6827B26335C65EF982BAF7E4A126B2 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.UInt64 System.UIntPtr::op_Explicit(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C (uintptr_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_Packet_GetBytes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_Packet_GetBytes_m2E236C86BA3A54CD86BAB04E7615E60D53992BD6 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_Packet_GetSenderID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_Packet_GetSenderID_m7AE7D8257960DF7452C89FFA336503D4A53D8E51 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.Packet::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Dispose_mEDBE99EA76C4FB2E42817AFBDC7BC7773B60A858 (Packet_t14ED8D652670CAC56A14849AB08C1BC8467065BB* __this, const RuntimeMethod* method) ;
// System.Void Pico.Platform.CLIB::ppf_Packet_Free(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLIB_ppf_Packet_Free_m0D4F4446DD5BA04912FB25DD43936F6124C076F3 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcBinaryMessageReceived_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcBinaryMessageReceived_GetUserId_mE45C4F2F5B7D60BB4C87F79701D1BE34E69C1B8C (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_RtcBinaryMessageReceived_GetData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_RtcBinaryMessageReceived_GetData_m35FC24664207B11DC7C807BE5C07B5D9A8E9FB3B (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_RtcBinaryMessageReceived_GetLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcBinaryMessageReceived_GetLength_mAE30F8C97E18C9BDF368A89900750B82AE66ADB6 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Byte[] Pico.Platform.MarshalUtil::ByteArrayFromNative(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MarshalUtil_ByteArrayFromNative_m84D6F9E95E13E6AB35441D4BA39E1A2F05E8D531 (intptr_t ___ptr0, uint32_t ___length1, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcBinaryMessageReceived_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcBinaryMessageReceived_GetRoomId_m23DC6D82961C00B198E46387A84E033F7C19D481 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int64 Pico.Platform.CLIB::ppf_RtcMessageSendResult_GetMessageId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CLIB_ppf_RtcMessageSendResult_GetMessageId_mE403582F3507BAC58C4EF607C78FF86DD37EFBA0 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_RtcMessageSendResult_GetError(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcMessageSendResult_GetError_mD09B407A9D3E17B174A07F89A14DC05FCC36BAAC (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcMessageSendResult_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcMessageSendResult_GetRoomId_mDCC70926C327B0AE0F5BB2A06FB1C0850A34C68D (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcUserUnPublishInfo_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcUserUnPublishInfo_GetUserId_mA37B27445683EA4B2DFBB62CFA2F95E448FB8DA9 (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RtcMediaStreamType Pico.Platform.CLIB::ppf_RtcUserUnPublishInfo_GetMediaStreamType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcUserUnPublishInfo_GetMediaStreamType_m8BEF1B6B827D549A369F3CD6C64929EB9E316155 (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RtcStreamRemoveReason Pico.Platform.CLIB::ppf_RtcUserUnPublishInfo_GetReason(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcUserUnPublishInfo_GetReason_m2367042A89CF45FE7951D94C5115978BAF9C5A50 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcUserUnPublishInfo_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcUserUnPublishInfo_GetRoomId_mD66F3A60F50913C4CBFE1F50AF1DFCD05C1988D3 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcUserPublishInfo_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcUserPublishInfo_GetUserId_m69213CBC6CF3AB752A858BA2535450CCF81CBF0A (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RtcMediaStreamType Pico.Platform.CLIB::ppf_RtcUserPublishInfo_GetMediaStreamType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcUserPublishInfo_GetMediaStreamType_m48EA9CE8808749082262171FCE1B25BF4DBBC2D6 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcUserPublishInfo_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcUserPublishInfo_GetRoomId_m94B6EC889D81EB2F10B286564CAD5867925DFDE7 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcRoomMessageReceived_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcRoomMessageReceived_GetUserId_mDEF77B5B82E0D7C2AF4DBE06C218781E89CDEA30 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcRoomMessageReceived_GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcRoomMessageReceived_GetMessage_m9AC303304E5BD20F89B44BC975E8301D8A81D011 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcRoomMessageReceived_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcRoomMessageReceived_GetRoomId_m60842CDD3D5DA56300A660B8E42B966A02888EA6 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcUserMessageReceived_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcUserMessageReceived_GetUserId_m353C743DCF95A09C947D31D7E637FB67E1C119D5 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcUserMessageReceived_GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcUserMessageReceived_GetMessage_mEA3E27B28839DA801E0F2488ABC85C48CDB3FDE6 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcUserMessageReceived_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcUserMessageReceived_GetRoomId_mD5410B65880B3302607F592B427B841CE3331259 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_RtcStreamSyncInfo_GetStreamKey(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_RtcStreamSyncInfo_GetStreamKey_m4639CACB71EF76F81BEEE3ED483B38836538B2D8 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.RtcRemoteStreamKey::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcRemoteStreamKey__ctor_m65CBF360CB0A78852AAC6D047639E0A94C31EEAF (RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8* __this, intptr_t ___o0, const RuntimeMethod* method) ;
// Pico.Platform.RtcSyncInfoStreamType Pico.Platform.CLIB::ppf_RtcStreamSyncInfo_GetStreamType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcStreamSyncInfo_GetStreamType_mC35845CD7F906258FED0C54C269D5E5972B9A6FC (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_RtcStreamSyncInfo_GetData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_RtcStreamSyncInfo_GetData_mA2195D3FFA943BE98EF536EBC25CEE2AE6656037 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_RtcStreamSyncInfo_GetLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcStreamSyncInfo_GetLength_m26D46D4D0E3A56BD9A68A012B7E1C74F4D353075 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_RtcAudioPropertyInfo_GetVolume(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcAudioPropertyInfo_GetVolume_mA04AC05CDC33AEBC64B22F872F10A4EB379B5507 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcJoinRoomResult_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcJoinRoomResult_GetRoomId_m7B3E440E1058D0C5EF7944078D7237E5C43768F9 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcJoinRoomResult_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcJoinRoomResult_GetUserId_mE792981D075553D845ACE9044234DB6FBB146CF0 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_RtcJoinRoomResult_GetErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcJoinRoomResult_GetErrorCode_m40F5640D389A049FDEB3214E4902E525CBD78D3E (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_RtcJoinRoomResult_GetElapsed(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcJoinRoomResult_GetElapsed_mDAB8BF00819197F9E98B3A7C2599831A8ACBAFDD (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RtcJoinRoomType Pico.Platform.CLIB::ppf_RtcJoinRoomResult_GetJoinType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcJoinRoomResult_GetJoinType_mAFADE43668B9B291F56C65888AD31C70CE635AC5 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcLeaveRoomResult_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcLeaveRoomResult_GetRoomId_m5B30176E3CFBF512492C273084F298117CC62D08 (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RtcStreamIndex Pico.Platform.CLIB::ppf_RtcLocalAudioPropertiesInfo_GetStreamIndex(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcLocalAudioPropertiesInfo_GetStreamIndex_m402C11D7B8B10D25A2E7419BF8488DCF0CA57AF1 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_RtcLocalAudioPropertiesInfo_GetAudioPropertyInfo(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_RtcLocalAudioPropertiesInfo_GetAudioPropertyInfo_m18741BB3473446F76767F349493836D9E38E2D69 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.RtcAudioPropertyInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcAudioPropertyInfo__ctor_mD841A6F25FFFC9CD55C2E37CA6ACE5271A4F700C (RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D* __this, intptr_t ___o0, const RuntimeMethod* method) ;
// System.UIntPtr Pico.Platform.CLIB::ppf_RtcLocalAudioPropertiesReport_GetAudioPropertiesInfosSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CLIB_ppf_RtcLocalAudioPropertiesReport_GetAudioPropertiesInfosSize_m28B6D26993F11462B9104B2B345E54A03BD52222 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_RtcLocalAudioPropertiesReport_GetAudioPropertiesInfos(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_RtcLocalAudioPropertiesReport_GetAudioPropertiesInfos_mAA0E4DA657D7FAFC7786EAEFECF23DC0C87CC203 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.RtcLocalAudioPropertiesInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcLocalAudioPropertiesInfo__ctor_m83E0BCA8598978313582143FAF96AFCF81A62B9C (RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7* __this, intptr_t ___o0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcMediaDeviceChangeInfo_GetDeviceId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcMediaDeviceChangeInfo_GetDeviceId_m2354CEBDFEE219BECBA38618F7136D6D9602AECF (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RtcMediaDeviceType Pico.Platform.CLIB::ppf_RtcMediaDeviceChangeInfo_GetDeviceType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcMediaDeviceChangeInfo_GetDeviceType_m72DEC7277335DEE53A459EB8EA26E8C93F6578AA (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RtcMediaDeviceState Pico.Platform.CLIB::ppf_RtcMediaDeviceChangeInfo_GetDeviceState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcMediaDeviceChangeInfo_GetDeviceState_mA59D7D1FA3BF4FBCAD870D7DEB505149E0DE5A0D (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RtcMediaDeviceError Pico.Platform.CLIB::ppf_RtcMediaDeviceChangeInfo_GetDeviceError(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcMediaDeviceChangeInfo_GetDeviceError_m99908FD336CBAD649B0EC59BC2A79251B3BE6759 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcMuteInfo_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcMuteInfo_GetUserId_m4C9FD6955904D00B8D62BD8DFF30BA340A7F6CC6 (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RtcMuteState Pico.Platform.CLIB::ppf_RtcMuteInfo_GetMuteState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcMuteInfo_GetMuteState_mBC0505EFE1FC5D90A47DEE7A1D43D08EB688E807 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_RtcRemoteAudioPropertiesInfo_GetStreamKey(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_RtcRemoteAudioPropertiesInfo_GetStreamKey_m3B66B97BD1934EA9018E93E3B0A6EC3254BD5BA7 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_RtcRemoteAudioPropertiesInfo_GetAudioPropertiesInfo(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_RtcRemoteAudioPropertiesInfo_GetAudioPropertiesInfo_mFEA490A4FA6B13D8EF9EA1B9D39DBFF6778AEC9D (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.UIntPtr Pico.Platform.CLIB::ppf_RtcRemoteAudioPropertiesReport_GetAudioPropertiesInfosSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CLIB_ppf_RtcRemoteAudioPropertiesReport_GetAudioPropertiesInfosSize_m9D4702327C744240AD526C07C1E38A8ADC1EBC8A (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_RtcRemoteAudioPropertiesReport_GetAudioPropertiesInfos(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_RtcRemoteAudioPropertiesReport_GetAudioPropertiesInfos_m931EDB0CB701CF665112E335651FFF43D0C76BFF (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.RtcRemoteAudioPropertiesInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcRemoteAudioPropertiesInfo__ctor_mA569B3B8D3851F60E6A5822CABDEFE943566856A (RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0* __this, intptr_t ___o0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_RtcRemoteAudioPropertiesReport_GetTotalRemoteVolume(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcRemoteAudioPropertiesReport_GetTotalRemoteVolume_m44DE0566717EC76B3F03F4A135F152AE696B644A (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcRemoteStreamKey_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcRemoteStreamKey_GetRoomId_m0313C4AAF081211D322C4B8AB84FBE47795B0F01 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcRemoteStreamKey_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcRemoteStreamKey_GetUserId_m921AFE124576D9255466DB9D05D9232954F8C094 (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RtcStreamIndex Pico.Platform.CLIB::ppf_RtcRemoteStreamKey_GetStreamIndex(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcRemoteStreamKey_GetStreamIndex_m62647B6A9999E7327873EFA3CBA40D031BC703A0 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_RtcRoomError_GetCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcRoomError_GetCode_m1755F19838ECD58EA09E8B0D7A16015487CC787F (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcRoomError_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcRoomError_GetRoomId_m35AFF13A43EECF31F9392C869C9494A35C2C0792 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_RtcRoomStats_GetTotalDuration(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcRoomStats_GetTotalDuration_m2E9B5C070831EE454BD421662415FF2AA36FFB80 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_RtcRoomStats_GetUserCount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcRoomStats_GetUserCount_m70C604780238325862215C593DEE3175E1E9EF63 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcRoomStats_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcRoomStats_GetRoomId_m030B0E8AD057ED2D71EA230E14A22551218EE1C3 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_RtcRoomWarn_GetCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcRoomWarn_GetCode_mE3E092DDE26B7C495D8E6A29F9E392984F4F9EA1 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcRoomWarn_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcRoomWarn_GetRoomId_m2CB39FD6675AB95144B48761D7021023D31243B2 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcUserJoinInfo_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcUserJoinInfo_GetUserId_m795A17B0B2A6D61556DBA3FDBFA720A5367EC4C3 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcUserJoinInfo_GetUserExtra(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcUserJoinInfo_GetUserExtra_m68F5AE4B4849B0DD5C7D2281A2F591D64465B6C8 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_RtcUserJoinInfo_GetElapsed(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcUserJoinInfo_GetElapsed_mF93D78390107E620C6B1289141E7ADB758BC322E (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcUserJoinInfo_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcUserJoinInfo_GetRoomId_m7CD73C1FE7D78B6F38069BF46FE80375EFE9E8EA (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcUserLeaveInfo_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcUserLeaveInfo_GetUserId_m22C1AB65E18858169BC76A08ABBD16F1862681B0 (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RtcUserLeaveReasonType Pico.Platform.CLIB::ppf_RtcUserLeaveInfo_GetOfflineReason(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RtcUserLeaveInfo_GetOfflineReason_m86C83C66CE2FC3B86A106AE760DE6EDAD02DDFAE (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_RtcUserLeaveInfo_GetRoomId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_RtcUserLeaveInfo_GetRoomId_m092EADC04DB3E1C51753F6213E5B012A9108A57C (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_Room_GetDataStore(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_Room_GetDataStore_m1F0B31E7E180A65119AFC55C8FA78606A8F77375 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Pico.Platform.CLIB::DataStoreFromNative(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* CLIB_DataStoreFromNative_mB7386DBDDF2B7A4D7AFE0D7101E3399F1CA8DD38 (intptr_t ___ppfDataStore0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_Room_GetDescription(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_Room_GetDescription_mEB4EA9CA77C6E9BCFC815BE739D130DCE0CFF13C (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.UInt64 Pico.Platform.CLIB::ppf_Room_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CLIB_ppf_Room_GetID_m13C361B9DE509CCE6DBF4D87E6D889CC0FDC30C8 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Boolean Pico.Platform.CLIB::ppf_Room_GetIsMembershipLocked(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLIB_ppf_Room_GetIsMembershipLocked_mBD764E8C3065A499C905B80F69DA01147CC0D871 (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RoomJoinPolicy Pico.Platform.CLIB::ppf_Room_GetJoinPolicy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_Room_GetJoinPolicy_m24C4471F581824B15E3B344C4A3FAA198CE53F67 (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RoomJoinability Pico.Platform.CLIB::ppf_Room_GetJoinability(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_Room_GetJoinability_m958ABFDE1B9363ECE134562E64BB668B95FE85EC (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.UInt32 Pico.Platform.CLIB::ppf_Room_GetMaxUsers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CLIB_ppf_Room_GetMaxUsers_m4D68C7BBEBF0ABC3FB3045C91E958E2E170DC3C8 (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.RoomType Pico.Platform.CLIB::ppf_Room_GetType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_Room_GetType_m700962CEBDAD23371A91A114BD94E77B035BEC46 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_Room_GetOwner(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_Room_GetOwner_m0D93BFA39D4A495C3EFE75B99F9A747DDCF5EACD (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.User::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m65AB5AB78CA800CFE2E148D87161D5B3F4CA9AEB (User_t4A57578F9001EB8B02745E9305A72B29570F459B* __this, intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_Room_GetUsers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_Room_GetUsers_m1ECF14F038528B341AFD41851CE2D765D83D9450 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.UserList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserList__ctor_m6ADA501463DDB1301F3FC042C5268ED720B596A1 (UserList_t4FBD372AD727B86FE2C738E38D1BCAE7C3BB7281* __this, intptr_t ___a0, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.Room>::.ctor()
inline void MessageArray_1__ctor_mC7EBC3393EB4CC530E06FCF5211EF9BBEBCE6212 (MessageArray_1_t8A29A903207EB1BF7ADC149BC7E2533479F9617E* __this, const RuntimeMethod* method)
{
	((  void (*) (MessageArray_1_t8A29A903207EB1BF7ADC149BC7E2533479F9617E*, const RuntimeMethod*))MessageArray_1__ctor_mB9AA519DC3819501D064517EA47E7D98C883AA88_gshared)(__this, method);
}
// System.Int32 Pico.Platform.CLIB::ppf_RoomArray_GetPageIndex(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RoomArray_GetPageIndex_mAA31FF43D2D9735BB2EF5AE4B11B9E52DDB812DA (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_RoomArray_GetPageSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_RoomArray_GetPageSize_mA768D6CDCB556CC906C87516E279DC5D8DED2A10 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Boolean Pico.Platform.CLIB::ppf_RoomArray_HasNextPage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLIB_ppf_RoomArray_HasNextPage_mA950C99EDFC9DA110FC11F2BD01B6E9460FCFCB6 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.UIntPtr Pico.Platform.CLIB::ppf_RoomArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CLIB_ppf_RoomArray_GetSize_m45370408581AA01542641B430FC8B9FAD0E647D4 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Pico.Platform.Models.Room>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m38E70F89B76F25A793317CAE6F6B8B2AC3CB6E05 (List_1_t3E88EE01D1DBD030C6906D837D7122DC2AACFDE4* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3E88EE01D1DBD030C6906D837D7122DC2AACFDE4*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___value0, method);
}
// System.IntPtr Pico.Platform.CLIB::ppf_RoomArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_RoomArray_GetElement_m1571C608A470781E98F5E12614C147284DF2E3B3 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.Room::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room__ctor_mA5B401D7DB201287BF39348613A73F88829701F8 (Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D* __this, intptr_t ___o0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Pico.Platform.Models.Room>::Add(T)
inline void List_1_Add_m40B1CAF48404FED800CB19BB5F977EEFE59A55FE_inline (List_1_t3E88EE01D1DBD030C6906D837D7122DC2AACFDE4* __this, Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3E88EE01D1DBD030C6906D837D7122DC2AACFDE4*, Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int64 Pico.Platform.CLIB::ppf_SportDailySummary_GetId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CLIB_ppf_SportDailySummary_GetId_m95A9E59BBF28FBF82B9E0605628A2F80FE351879 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int64 Pico.Platform.CLIB::ppf_SportDailySummary_GetDate(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CLIB_ppf_SportDailySummary_GetDate_m14FBE652B7AFC6B1F37B292885B6F47B7B1FEC45 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.DateTime Pico.Platform.Util::MilliSecondsToDateTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Util_MilliSecondsToDateTime_m50126A48BEFF575665E94E417DEBE9A39951559F (int64_t ___milliSeconds0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_SportDailySummary_GetDurationInSeconds(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_SportDailySummary_GetDurationInSeconds_mBFE01FF4B2DAF1C360C750E14BF85416723C2872 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_SportDailySummary_GetPlanDurationInMinutes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_SportDailySummary_GetPlanDurationInMinutes_m421E5F6A4B62E30DAB09AE43424CE929FF9263D6 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Double Pico.Platform.CLIB::ppf_SportDailySummary_GetCalorie(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CLIB_ppf_SportDailySummary_GetCalorie_m7A3AA191BD3BE44C07B34DBB3CC95460E9FD873F (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Double Pico.Platform.CLIB::ppf_SportDailySummary_GetPlanCalorie(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CLIB_ppf_SportDailySummary_GetPlanCalorie_m5B3D4A4FEAD4CBC7BCE25C47933DD941FB8EC29A (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.SportDailySummary>::.ctor()
inline void MessageArray_1__ctor_mA979AAEE168F9640490FF54CC91E4A42248A3DD3 (MessageArray_1_tF5C14895EFD1F8AEDF1C136262D75FA93B9393DB* __this, const RuntimeMethod* method)
{
	((  void (*) (MessageArray_1_tF5C14895EFD1F8AEDF1C136262D75FA93B9393DB*, const RuntimeMethod*))MessageArray_1__ctor_mB9AA519DC3819501D064517EA47E7D98C883AA88_gshared)(__this, method);
}
// System.UIntPtr Pico.Platform.CLIB::ppf_SportDailySummaryArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CLIB_ppf_SportDailySummaryArray_GetSize_m9F3A52497FFD1F31C7173BF514579B275F69CE6F (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Pico.Platform.Models.SportDailySummary>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m282D35C16336809C7B6A230821F954A4505114B9 (List_1_t0D7C34B7489757DC97B25E20557E2B16D01601A2* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D7C34B7489757DC97B25E20557E2B16D01601A2*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___value0, method);
}
// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8 (uint64_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_SportDailySummaryArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_SportDailySummaryArray_GetElement_m59C83C6A45925DAA526122A5AB67D119B7D55EED (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.SportDailySummary::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SportDailySummary__ctor_m57260C499581C9E9F815578BFD37075FA956CBA7 (SportDailySummary_t157AFBF25089D3D27A38BA94B50C7BE06FE8F227* __this, intptr_t ___o0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Pico.Platform.Models.SportDailySummary>::Add(T)
inline void List_1_Add_mCFDD6AF77CD53FC9BD39A96B47042D35CB515624_inline (List_1_t0D7C34B7489757DC97B25E20557E2B16D01601A2* __this, SportDailySummary_t157AFBF25089D3D27A38BA94B50C7BE06FE8F227* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D7C34B7489757DC97B25E20557E2B16D01601A2*, SportDailySummary_t157AFBF25089D3D27A38BA94B50C7BE06FE8F227*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int64 Pico.Platform.CLIB::ppf_SportSummary_GetDurationInSeconds(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CLIB_ppf_SportSummary_GetDurationInSeconds_m9B88949A0D9165A3C95A686DF236B489B31E8BFC (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Double Pico.Platform.CLIB::ppf_SportSummary_GetCalorie(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CLIB_ppf_SportSummary_GetCalorie_m96AC790C6F79415D832BBF42703BB819EEA21A9F (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int64 Pico.Platform.CLIB::ppf_SportSummary_GetStartTime(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CLIB_ppf_SportSummary_GetStartTime_m738B9DFD848500B880181F3BCFDCACCA3F366F91 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int64 Pico.Platform.CLIB::ppf_SportSummary_GetEndTime(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CLIB_ppf_SportSummary_GetEndTime_mDE51E609B9E533B3C1AF37B7C55F91AD358AD725 (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.Gender Pico.Platform.CLIB::ppf_SportUserInfo_GetGender(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_SportUserInfo_GetGender_m71CC42932486ADDCB8B93773545354BEF4EE6D46 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int64 Pico.Platform.CLIB::ppf_SportUserInfo_GetBirthday(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CLIB_ppf_SportUserInfo_GetBirthday_mE81318FE7536F5C15BBF999CE650F9F11D41E53D (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_SportUserInfo_GetStature(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_SportUserInfo_GetStature_m8BBDE449B416E186F627FC14F0CC996C6D9A8623 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_SportUserInfo_GetWeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_SportUserInfo_GetWeight_mBB924C90C0F9AE1CA7E6DDC61FD57DB3A7FD2641 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_SportUserInfo_GetSportLevel(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_SportUserInfo_GetSportLevel_mC777610CBCE421D9F1568E0AE2B0B063AB06D16E (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_SportUserInfo_GetDailyDurationInMinutes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_SportUserInfo_GetDailyDurationInMinutes_m42CEA5A37D074C854D6EC949D943AF9C3D46CCCA (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 Pico.Platform.CLIB::ppf_SportUserInfo_GetDaysPerWeek(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_SportUserInfo_GetDaysPerWeek_mD9A804E974190994F8C92205B74EE18C86B76CB6 (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.SportTarget Pico.Platform.CLIB::ppf_SportUserInfo_GetSportTarget(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_SportUserInfo_GetSportTarget_m5ABB84CCF1332468A6922217F60F60173B4D3030 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_User_GetDisplayName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_User_GetDisplayName_m7F18ED9B77264FAC59E9D9AC61B6724C5507880F (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_User_GetImageUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_User_GetImageUrl_m58A67CC084D255C1A8855587A3A2EECC82BBCCA1 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_User_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_User_GetID_mC41EEFD63BCDAE6E5D3F8A21B3A0B28F0B54822E (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_User_GetInviteToken(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_User_GetInviteToken_m377024C4A883A4F589D9B7EB0B0D7413EDF3EE24 (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.UserPresenceStatus Pico.Platform.CLIB::ppf_User_GetPresenceStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_User_GetPresenceStatus_m7F96CA0E4381A227C959BD40E48A8A5B1286E3ED (intptr_t ___obj0, const RuntimeMethod* method) ;
// Pico.Platform.Gender Pico.Platform.CLIB::ppf_User_GetGender(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CLIB_ppf_User_GetGender_m9E52B2729DE3B85223913B65FBE9DC39A3951F7F (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_User_GetPresence(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_User_GetPresence_m8CD577DD7E1A9928D3ECDA2C45A1DDB335F77599 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_User_GetPresenceDeeplinkMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_User_GetPresenceDeeplinkMessage_mE0C33D72B6B01CABFEB2F28923A9BC6067DF2E37 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_User_GetPresenceDestinationApiName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_User_GetPresenceDestinationApiName_mC4E6D1A5205241FBB09CD274D126C000558B37BB (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_User_GetPresenceLobbySessionId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_User_GetPresenceLobbySessionId_mA7F62B44ACAF48B30160B301BB37C0E620DAA7B3 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_User_GetPresenceMatchSessionId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_User_GetPresenceMatchSessionId_mDABDDE2B355EB1F0FACFEB3BB6236B81EDBC0618 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_User_GetPresenceExtra(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_User_GetPresenceExtra_m0B782AEDC7AB4ECADCAFEC2C4422E50A76F1404F (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_User_GetSmallImageUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_User_GetSmallImageUrl_mB864AC2409AACE66CF7E578A4D1E3F5DDB08A562 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_User_GetStoreRegion(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_User_GetStoreRegion_m18DFD5413237B3433AACECF3E76EF0E085CE6D17 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.User>::.ctor()
inline void MessageArray_1__ctor_mB9282B974A69F693F481FD1242C22EA48D3DBB94 (MessageArray_1_t8FB2AFA18B020CDB5F979EA0D8D62BE101BE1EC2* __this, const RuntimeMethod* method)
{
	((  void (*) (MessageArray_1_t8FB2AFA18B020CDB5F979EA0D8D62BE101BE1EC2*, const RuntimeMethod*))MessageArray_1__ctor_mB9AA519DC3819501D064517EA47E7D98C883AA88_gshared)(__this, method);
}
// System.UIntPtr Pico.Platform.CLIB::ppf_UserArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CLIB_ppf_UserArray_GetSize_m1B47B3FC655ECEE76E8E58D651BFF2B3576AC17E (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Pico.Platform.Models.User>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m797F835E1497C61FC45E8F74AFA810F161C3FF9D (List_1_tB43343FA205088D413BE1DA2F0549C16503E88BE* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB43343FA205088D413BE1DA2F0549C16503E88BE*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___value0, method);
}
// System.IntPtr Pico.Platform.CLIB::ppf_UserArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_UserArray_GetElement_m18C518BFDDE2264AE556F88DE8F563298A660EE1 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Pico.Platform.Models.User>::Add(T)
inline void List_1_Add_m2E7B33840E1BF3DFD2868E82D4E815FE4942A622_inline (List_1_tB43343FA205088D413BE1DA2F0549C16503E88BE* __this, User_t4A57578F9001EB8B02745E9305A72B29570F459B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB43343FA205088D413BE1DA2F0549C16503E88BE*, User_t4A57578F9001EB8B02745E9305A72B29570F459B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String Pico.Platform.CLIB::ppf_UserArray_GetNextPageParam(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_UserArray_GetNextPageParam_m31C1FD07F535A18BF41D519120092FC9E8D1611A (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Boolean Pico.Platform.CLIB::ppf_LaunchFriendRequestFlowResult_GetDidCancel(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLIB_ppf_LaunchFriendRequestFlowResult_GetDidCancel_m1AD8347D357CECAC6A55C7AA0246BBE6D6FE39B5 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Boolean Pico.Platform.CLIB::ppf_LaunchFriendRequestFlowResult_GetDidSendRequest(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CLIB_ppf_LaunchFriendRequestFlowResult_GetDidSendRequest_mD10E3D65E746B06F58A2FE322B33423CF4EAF52D (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_UserAndRoom_GetUser(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_UserAndRoom_GetUser_m157BC1471B6D1081B397ADBF807AB818348A3A1A (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Pico.Platform.CLIB::ppf_UserAndRoom_GetRoom(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_UserAndRoom_GetRoom_m2E220803CB16CBE55D79D567E8F3CABE81D83CFE (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.MessageArray`1<Pico.Platform.Models.UserRoom>::.ctor()
inline void MessageArray_1__ctor_mC9A4F0DDF161BCD0B98654B9D0EB3BB88C5FEC7D (MessageArray_1_t785B10FA5D7BE1D6C33B67DD822B88EAEA2F29A3* __this, const RuntimeMethod* method)
{
	((  void (*) (MessageArray_1_t785B10FA5D7BE1D6C33B67DD822B88EAEA2F29A3*, const RuntimeMethod*))MessageArray_1__ctor_mB9AA519DC3819501D064517EA47E7D98C883AA88_gshared)(__this, method);
}
// System.UIntPtr Pico.Platform.CLIB::ppf_UserAndRoomArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CLIB_ppf_UserAndRoomArray_GetSize_m14CBF59FA42C319C705958304E3FE7FC3DA051F1 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Pico.Platform.Models.UserRoom>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m30720F96B6848FE93F84FA814959EFB82920CBFF (List_1_tBBD25E1E86D7966804E4978C61077B2E67606853* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBBD25E1E86D7966804E4978C61077B2E67606853*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___value0, method);
}
// System.IntPtr Pico.Platform.CLIB::ppf_UserAndRoomArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CLIB_ppf_UserAndRoomArray_GetElement_m44DDAE8C1E67D78932F86B3892299F30D8992B31 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method) ;
// System.Void Pico.Platform.Models.UserRoom::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserRoom__ctor_m3CC17B91ED840F0E6975E674234BCEC7301B9F03 (UserRoom_t79DBE9A132DE86412643A0D29CB6959379090B32* __this, intptr_t ___o0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Pico.Platform.Models.UserRoom>::Add(T)
inline void List_1_Add_m92B8C781D726B84AF40CDA82917B0701B86B2F91_inline (List_1_tBBD25E1E86D7966804E4978C61077B2E67606853* __this, UserRoom_t79DBE9A132DE86412643A0D29CB6959379090B32* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBBD25E1E86D7966804E4978C61077B2E67606853*, UserRoom_t79DBE9A132DE86412643A0D29CB6959379090B32*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String Pico.Platform.CLIB::ppf_UserAndRoomArray_GetNextPageParam(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_UserAndRoomArray_GetNextPageParam_m30A7410D812231C45E43B5A4747BA8DA1F5A5334 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.UIntPtr Pico.Platform.CLIB::ppf_PermissionResult_GetAuthorizedPermissionsSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CLIB_ppf_PermissionResult_GetAuthorizedPermissionsSize_mC0764542BF7D615FDB4203A1016864686BD81440 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_PermissionResult_GetAuthorizedPermissions(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_PermissionResult_GetAuthorizedPermissions_m5325AE5103DD3E1072E932AC62F16EC0C6101C14 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_PermissionResult_GetAccessToken(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_PermissionResult_GetAccessToken_m69EA3290A74FEB53F6070AB377C20B2ABC50E1C9 (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.String Pico.Platform.CLIB::ppf_PermissionResult_GetUserID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CLIB_ppf_PermissionResult_GetUserID_m985FB5253F45123C7E01E50070663B4DA690CEC8 (intptr_t ___obj0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pico.Platform.Models.RoomInviteNotificationList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInviteNotificationList__ctor_mEEC75BA3052D7F573FF10F4E7DE71918AFA1B24F (RoomInviteNotificationList_t6630ADB570BB0B97C538BDE757838F360295BF80* __this, intptr_t ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m432089447997B5982386997CECED9946334CAF6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mFA11F8A01B3611B3FBEB0C44D010EDB43E01215C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageArray_1__ctor_mFCAF643A2F55D902CBDBCB33CBFD114CAD97B23F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomInviteNotification_tBAE008A47ADD4EB23B5DDACF8C48524446764A81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	RoomInviteNotificationList_t6630ADB570BB0B97C538BDE757838F360295BF80* G_B2_0 = NULL;
	RoomInviteNotificationList_t6630ADB570BB0B97C538BDE757838F360295BF80* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	RoomInviteNotificationList_t6630ADB570BB0B97C538BDE757838F360295BF80* G_B3_1 = NULL;
	{
		// public RoomInviteNotificationList(IntPtr a)
		MessageArray_1__ctor_mFCAF643A2F55D902CBDBCB33CBFD114CAD97B23F(__this, MessageArray_1__ctor_mFCAF643A2F55D902CBDBCB33CBFD114CAD97B23F_RuntimeMethod_var);
		// NextPageParam = CLIB.ppf_RoomInviteNotificationArray_HasNextPage(a) ? "true" : string.Empty;
		intptr_t L_0 = ___a0;
		bool L_1;
		L_1 = CLIB_ppf_RoomInviteNotificationArray_HasNextPage_mBD788B2C4BAA371F45F9890B8BF968565616375C(L_0, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		NullCheck(G_B3_1);
		((MessageArray_1_t62131693233091B9B8D9C69D8136FD8CD7EFD93A*)G_B3_1)->___NextPageParam_6 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageArray_1_t62131693233091B9B8D9C69D8136FD8CD7EFD93A*)G_B3_1)->___NextPageParam_6), (void*)G_B3_0);
		// int count = (int) CLIB.ppf_RoomInviteNotificationArray_GetSize(a);
		intptr_t L_3 = ___a0;
		uintptr_t L_4;
		L_4 = CLIB_ppf_RoomInviteNotificationArray_GetSize_mF1BB8BC228A57E1DAD14FC99C05CB4A60E0E489C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_4, NULL);
		V_0 = L_5;
		// this.Capacity = count;
		int32_t L_6 = V_0;
		List_1_set_Capacity_mFA11F8A01B3611B3FBEB0C44D010EDB43E01215C(__this, L_6, List_1_set_Capacity_mFA11F8A01B3611B3FBEB0C44D010EDB43E01215C_RuntimeMethod_var);
		// for (uint i = 0; i < count; i++)
		V_1 = 0;
		goto IL_0052;
	}

IL_0037:
	{
		// this.Add(new RoomInviteNotification(CLIB.ppf_RoomInviteNotificationArray_GetElement(a, (UIntPtr)i)));
		intptr_t L_7 = ___a0;
		uint32_t L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_9;
		L_9 = UIntPtr_op_Explicit_mD94DCD8965DD2E7D5A3370A04CCEDBE5937C078C(L_8, NULL);
		intptr_t L_10;
		L_10 = CLIB_ppf_RoomInviteNotificationArray_GetElement_mAC223273A73C9EDF33DADCFCF48D9668A391C448(L_7, L_9, NULL);
		RoomInviteNotification_tBAE008A47ADD4EB23B5DDACF8C48524446764A81* L_11 = (RoomInviteNotification_tBAE008A47ADD4EB23B5DDACF8C48524446764A81*)il2cpp_codegen_object_new(RoomInviteNotification_tBAE008A47ADD4EB23B5DDACF8C48524446764A81_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		RoomInviteNotification__ctor_mE27363216CC7FBBF4DB9E28288DC3F94DD07B620(L_11, L_10, NULL);
		List_1_Add_m432089447997B5982386997CECED9946334CAF6C_inline(__this, L_11, List_1_Add_m432089447997B5982386997CECED9946334CAF6C_RuntimeMethod_var);
		// for (uint i = 0; i < count; i++)
		uint32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, 1));
	}

IL_0052:
	{
		// for (uint i = 0; i < count; i++)
		uint32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_13)) < ((int64_t)((int64_t)L_14))))
		{
			goto IL_0037;
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
// System.Void Pico.Platform.Models.Packet::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet__ctor_mF5AA777719C7728CACC4426F08555C0CC79219C6 (Packet_t14ED8D652670CAC56A14849AB08C1BC8467065BB* __this, intptr_t ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Packet(IntPtr handler)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.handler = handler;
		intptr_t L_0 = ___handler0;
		__this->___handler_1 = L_0;
		// this.size = (ulong) CLIB.ppf_Packet_GetSize(handler);
		intptr_t L_1 = ___handler0;
		uintptr_t L_2;
		L_2 = CLIB_ppf_Packet_GetSize_m78C58AF3AB6827B26335C65EF982BAF7E4A126B2(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C(L_2, NULL);
		__this->___size_0 = L_3;
		// }
		return;
	}
}
// System.UInt64 Pico.Platform.Models.Packet::GetBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Packet_GetBytes_m39D8940C9652DAEA1DF47ED71397717B8CB4732B (Packet_t14ED8D652670CAC56A14849AB08C1BC8467065BB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dest0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((ulong) dest.LongLength >= size)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___dest0;
		NullCheck(L_0);
		uint64_t L_1 = __this->___size_0;
		if ((!(((uint64_t)((int64_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) >= ((uint64_t)L_1))))
		{
			goto IL_002b;
		}
	}
	{
		// Marshal.Copy(CLIB.ppf_Packet_GetBytes(handler), dest, 0, (int) size);
		intptr_t L_2 = __this->___handler_1;
		intptr_t L_3;
		L_3 = CLIB_ppf_Packet_GetBytes_m2E236C86BA3A54CD86BAB04E7615E60D53992BD6(L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___dest0;
		uint64_t L_5 = __this->___size_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_3, L_4, 0, ((int32_t)L_5), NULL);
		// return size;
		uint64_t L_6 = __this->___size_0;
		return L_6;
	}

IL_002b:
	{
		// throw new ArgumentException($"Dest array can't  hold {size} bytes");
		uint64_t L_7 = __this->___size_0;
		uint64_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral117F539165B45A5AC4BAAE9D28D7843EC5548C9E)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Packet_GetBytes_m39D8940C9652DAEA1DF47ED71397717B8CB4732B_RuntimeMethod_var)));
	}
}
// System.String Pico.Platform.Models.Packet::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Packet_GetBytes_m4C7DCFED67828EDF17C7FE19DF0B192FF9172EE9 (Packet_t14ED8D652670CAC56A14849AB08C1BC8467065BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Packet_GetBytes_m4C7DCFED67828EDF17C7FE19DF0B192FF9172EE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (size > 0)
		uint64_t L_0 = __this->___size_0;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)0)))))
		{
			goto IL_003c;
		}
	}
	{
		// byte[] bytes = new byte[size];
		uint64_t L_1 = __this->___size_0;
		if ((uint64_t)(L_1) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Packet_GetBytes_m4C7DCFED67828EDF17C7FE19DF0B192FF9172EE9_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_1));
		V_0 = L_2;
		// Marshal.Copy(CLIB.ppf_Packet_GetBytes(handler), bytes, 0, (int) size);
		intptr_t L_3 = __this->___handler_1;
		intptr_t L_4;
		L_4 = CLIB_ppf_Packet_GetBytes_m2E236C86BA3A54CD86BAB04E7615E60D53992BD6(L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		uint64_t L_6 = __this->___size_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_4, L_5, 0, ((int32_t)L_6), NULL);
		// return System.Text.Encoding.UTF8.GetString(bytes);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7;
		L_7 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_7, L_8);
		return L_9;
	}

IL_003c:
	{
		// return string.Empty;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_10;
	}
}
// System.String Pico.Platform.Models.Packet::get_SenderId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Packet_get_SenderId_m2A8E37937488790196283B908800CEF0113D48F2 (Packet_t14ED8D652670CAC56A14849AB08C1BC8467065BB* __this, const RuntimeMethod* method) 
{
	{
		// get { return CLIB.ppf_Packet_GetSenderID(handler); }
		intptr_t L_0 = __this->___handler_1;
		String_t* L_1;
		L_1 = CLIB_ppf_Packet_GetSenderID_m7AE7D8257960DF7452C89FFA336503D4A53D8E51(L_0, NULL);
		return L_1;
	}
}
// System.UInt64 Pico.Platform.Models.Packet::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Packet_get_Size_mA2CC485064F4253878DAB38378F290BB261744DB (Packet_t14ED8D652670CAC56A14849AB08C1BC8467065BB* __this, const RuntimeMethod* method) 
{
	{
		// get { return size; }
		uint64_t L_0 = __this->___size_0;
		return L_0;
	}
}
// System.Void Pico.Platform.Models.Packet::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Finalize_mA9E1EF5181314E0236E84B48D59C0D5720CECE57 (Packet_t14ED8D652670CAC56A14849AB08C1BC8467065BB* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose();
			Packet_Dispose_mEDBE99EA76C4FB2E42817AFBDC7BC7773B60A858(__this, NULL);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Pico.Platform.Models.Packet::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Dispose_mEDBE99EA76C4FB2E42817AFBDC7BC7773B60A858 (Packet_t14ED8D652670CAC56A14849AB08C1BC8467065BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CLIB.ppf_Packet_Free(handler);
		intptr_t L_0 = __this->___handler_1;
		CLIB_ppf_Packet_Free_m0D4F4446DD5BA04912FB25DD43936F6124C076F3(L_0, NULL);
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
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
// System.Void Pico.Platform.Models.RtcBinaryMessageReceived::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcBinaryMessageReceived__ctor_mB89F58994F39109EFA378DC279473F9478F5A422 (RtcBinaryMessageReceived_tC9A88B36B776048E2DE7CAB6B6FC3F5D2B9D7E97* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// public RtcBinaryMessageReceived(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// UserId = CLIB.ppf_RtcBinaryMessageReceived_GetUserId(o);
		intptr_t L_0 = ___o0;
		String_t* L_1;
		L_1 = CLIB_ppf_RtcBinaryMessageReceived_GetUserId_mE45C4F2F5B7D60BB4C87F79701D1BE34E69C1B8C(L_0, NULL);
		__this->___UserId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UserId_0), (void*)L_1);
		// var ptr = CLIB.ppf_RtcBinaryMessageReceived_GetData(o);
		intptr_t L_2 = ___o0;
		intptr_t L_3;
		L_3 = CLIB_ppf_RtcBinaryMessageReceived_GetData_m35FC24664207B11DC7C807BE5C07B5D9A8E9FB3B(L_2, NULL);
		V_0 = L_3;
		// var sz = CLIB.ppf_RtcBinaryMessageReceived_GetLength(o);
		intptr_t L_4 = ___o0;
		int32_t L_5;
		L_5 = CLIB_ppf_RtcBinaryMessageReceived_GetLength_mAE30F8C97E18C9BDF368A89900750B82AE66ADB6(L_4, NULL);
		V_1 = L_5;
		// Data = MarshalUtil.ByteArrayFromNative(ptr, (uint) sz);
		intptr_t L_6 = V_0;
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = MarshalUtil_ByteArrayFromNative_m84D6F9E95E13E6AB35441D4BA39E1A2F05E8D531(L_6, L_7, NULL);
		__this->___Data_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_1), (void*)L_8);
		// RoomId = CLIB.ppf_RtcBinaryMessageReceived_GetRoomId(o);
		intptr_t L_9 = ___o0;
		String_t* L_10;
		L_10 = CLIB_ppf_RtcBinaryMessageReceived_GetRoomId_m23DC6D82961C00B198E46387A84E033F7C19D481(L_9, NULL);
		__this->___RoomId_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_2), (void*)L_10);
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
// System.Void Pico.Platform.Models.RtcMessageSendResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcMessageSendResult__ctor_m2162DE41657A7E784AA02064625130069E74C18B (RtcMessageSendResult_t340C6173650F03204076588487BA8F92F5E57973* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcMessageSendResult(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// MessageId = CLIB.ppf_RtcMessageSendResult_GetMessageId(o);
		intptr_t L_0 = ___o0;
		int64_t L_1;
		L_1 = CLIB_ppf_RtcMessageSendResult_GetMessageId_mE403582F3507BAC58C4EF607C78FF86DD37EFBA0(L_0, NULL);
		__this->___MessageId_0 = L_1;
		// Error = CLIB.ppf_RtcMessageSendResult_GetError(o);
		intptr_t L_2 = ___o0;
		int32_t L_3;
		L_3 = CLIB_ppf_RtcMessageSendResult_GetError_mD09B407A9D3E17B174A07F89A14DC05FCC36BAAC(L_2, NULL);
		__this->___Error_1 = L_3;
		// RoomId = CLIB.ppf_RtcMessageSendResult_GetRoomId(o);
		intptr_t L_4 = ___o0;
		String_t* L_5;
		L_5 = CLIB_ppf_RtcMessageSendResult_GetRoomId_mDCC70926C327B0AE0F5BB2A06FB1C0850A34C68D(L_4, NULL);
		__this->___RoomId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_2), (void*)L_5);
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
// System.Void Pico.Platform.Models.RtcUserUnPublishInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcUserUnPublishInfo__ctor_m1D60504810CC87668FCA04EF1877A522B4A00B32 (RtcUserUnPublishInfo_t72DA2A1DFAA80819C0B3331AA2FC2C3033506DCB* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcUserUnPublishInfo(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// UserId = CLIB.ppf_RtcUserUnPublishInfo_GetUserId(o);
		intptr_t L_0 = ___o0;
		String_t* L_1;
		L_1 = CLIB_ppf_RtcUserUnPublishInfo_GetUserId_mA37B27445683EA4B2DFBB62CFA2F95E448FB8DA9(L_0, NULL);
		__this->___UserId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UserId_0), (void*)L_1);
		// MediaStreamType = CLIB.ppf_RtcUserUnPublishInfo_GetMediaStreamType(o);
		intptr_t L_2 = ___o0;
		int32_t L_3;
		L_3 = CLIB_ppf_RtcUserUnPublishInfo_GetMediaStreamType_m8BEF1B6B827D549A369F3CD6C64929EB9E316155(L_2, NULL);
		__this->___MediaStreamType_1 = L_3;
		// Reason = CLIB.ppf_RtcUserUnPublishInfo_GetReason(o);
		intptr_t L_4 = ___o0;
		int32_t L_5;
		L_5 = CLIB_ppf_RtcUserUnPublishInfo_GetReason_m2367042A89CF45FE7951D94C5115978BAF9C5A50(L_4, NULL);
		__this->___Reason_2 = L_5;
		// RoomId = CLIB.ppf_RtcUserUnPublishInfo_GetRoomId(o);
		intptr_t L_6 = ___o0;
		String_t* L_7;
		L_7 = CLIB_ppf_RtcUserUnPublishInfo_GetRoomId_mD66F3A60F50913C4CBFE1F50AF1DFCD05C1988D3(L_6, NULL);
		__this->___RoomId_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_3), (void*)L_7);
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
// System.Void Pico.Platform.Models.RtcUserPublishInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcUserPublishInfo__ctor_m1FA7B4E103936FF3CBCAE21E2E1CA30544A9D842 (RtcUserPublishInfo_tD1C72BDF929EB5EF4400C879E36D6151F8915493* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcUserPublishInfo(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// UserId = CLIB.ppf_RtcUserPublishInfo_GetUserId(o);
		intptr_t L_0 = ___o0;
		String_t* L_1;
		L_1 = CLIB_ppf_RtcUserPublishInfo_GetUserId_m69213CBC6CF3AB752A858BA2535450CCF81CBF0A(L_0, NULL);
		__this->___UserId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UserId_0), (void*)L_1);
		// MediaStreamType = CLIB.ppf_RtcUserPublishInfo_GetMediaStreamType(o);
		intptr_t L_2 = ___o0;
		int32_t L_3;
		L_3 = CLIB_ppf_RtcUserPublishInfo_GetMediaStreamType_m48EA9CE8808749082262171FCE1B25BF4DBBC2D6(L_2, NULL);
		__this->___MediaStreamType_1 = L_3;
		// RoomId = CLIB.ppf_RtcUserPublishInfo_GetRoomId(o);
		intptr_t L_4 = ___o0;
		String_t* L_5;
		L_5 = CLIB_ppf_RtcUserPublishInfo_GetRoomId_m94B6EC889D81EB2F10B286564CAD5867925DFDE7(L_4, NULL);
		__this->___RoomId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_2), (void*)L_5);
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
// System.Void Pico.Platform.Models.RtcRoomMessageReceived::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcRoomMessageReceived__ctor_m7AE539120296BFB6A9147EFA500A71AC1E6139D3 (RtcRoomMessageReceived_t59D10EBCDA6D8F93187CED472EC8F583F9E45DB1* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcRoomMessageReceived(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// UserId = CLIB.ppf_RtcRoomMessageReceived_GetUserId(o);
		intptr_t L_0 = ___o0;
		String_t* L_1;
		L_1 = CLIB_ppf_RtcRoomMessageReceived_GetUserId_mDEF77B5B82E0D7C2AF4DBE06C218781E89CDEA30(L_0, NULL);
		__this->___UserId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UserId_0), (void*)L_1);
		// Message = CLIB.ppf_RtcRoomMessageReceived_GetMessage(o);
		intptr_t L_2 = ___o0;
		String_t* L_3;
		L_3 = CLIB_ppf_RtcRoomMessageReceived_GetMessage_m9AC303304E5BD20F89B44BC975E8301D8A81D011(L_2, NULL);
		__this->___Message_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Message_1), (void*)L_3);
		// RoomId = CLIB.ppf_RtcRoomMessageReceived_GetRoomId(o);
		intptr_t L_4 = ___o0;
		String_t* L_5;
		L_5 = CLIB_ppf_RtcRoomMessageReceived_GetRoomId_m60842CDD3D5DA56300A660B8E42B966A02888EA6(L_4, NULL);
		__this->___RoomId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_2), (void*)L_5);
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
// System.Void Pico.Platform.Models.RtcUserMessageReceived::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcUserMessageReceived__ctor_m9B49452A746458135A2387CE9FE1A5279BB261C7 (RtcUserMessageReceived_tAAE8A50CC325D49DF5A0032406971B9310471BEA* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcUserMessageReceived(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// UserId = CLIB.ppf_RtcUserMessageReceived_GetUserId(o);
		intptr_t L_0 = ___o0;
		String_t* L_1;
		L_1 = CLIB_ppf_RtcUserMessageReceived_GetUserId_m353C743DCF95A09C947D31D7E637FB67E1C119D5(L_0, NULL);
		__this->___UserId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UserId_0), (void*)L_1);
		// Message = CLIB.ppf_RtcUserMessageReceived_GetMessage(o);
		intptr_t L_2 = ___o0;
		String_t* L_3;
		L_3 = CLIB_ppf_RtcUserMessageReceived_GetMessage_mEA3E27B28839DA801E0F2488ABC85C48CDB3FDE6(L_2, NULL);
		__this->___Message_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Message_1), (void*)L_3);
		// RoomId = CLIB.ppf_RtcUserMessageReceived_GetRoomId(o);
		intptr_t L_4 = ___o0;
		String_t* L_5;
		L_5 = CLIB_ppf_RtcUserMessageReceived_GetRoomId_mD5410B65880B3302607F592B427B841CE3331259(L_4, NULL);
		__this->___RoomId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_2), (void*)L_5);
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
// System.Void Pico.Platform.Models.RtcStreamSyncInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcStreamSyncInfo__ctor_m251C46F04E8586503B14A1C9B2125A5CFBAF2D71 (RtcStreamSyncInfo_t794F9FE01AD8FF9C5F4F0C13276A0FE4BF86D158* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// public RtcStreamSyncInfo(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// StreamKey = new RtcRemoteStreamKey(CLIB.ppf_RtcStreamSyncInfo_GetStreamKey(o));
		intptr_t L_0 = ___o0;
		intptr_t L_1;
		L_1 = CLIB_ppf_RtcStreamSyncInfo_GetStreamKey_m4639CACB71EF76F81BEEE3ED483B38836538B2D8(L_0, NULL);
		RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8* L_2 = (RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8*)il2cpp_codegen_object_new(RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RtcRemoteStreamKey__ctor_m65CBF360CB0A78852AAC6D047639E0A94C31EEAF(L_2, L_1, NULL);
		__this->___StreamKey_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___StreamKey_0), (void*)L_2);
		// StreamType = CLIB.ppf_RtcStreamSyncInfo_GetStreamType(o);
		intptr_t L_3 = ___o0;
		int32_t L_4;
		L_4 = CLIB_ppf_RtcStreamSyncInfo_GetStreamType_mC35845CD7F906258FED0C54C269D5E5972B9A6FC(L_3, NULL);
		__this->___StreamType_1 = L_4;
		// var ptr = CLIB.ppf_RtcStreamSyncInfo_GetData(o);
		intptr_t L_5 = ___o0;
		intptr_t L_6;
		L_6 = CLIB_ppf_RtcStreamSyncInfo_GetData_mA2195D3FFA943BE98EF536EBC25CEE2AE6656037(L_5, NULL);
		V_0 = L_6;
		// var sz = CLIB.ppf_RtcStreamSyncInfo_GetLength(o);
		intptr_t L_7 = ___o0;
		int32_t L_8;
		L_8 = CLIB_ppf_RtcStreamSyncInfo_GetLength_m26D46D4D0E3A56BD9A68A012B7E1C74F4D353075(L_7, NULL);
		V_1 = L_8;
		// Data = MarshalUtil.ByteArrayFromNative(ptr, (uint) sz);
		intptr_t L_9 = V_0;
		int32_t L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = MarshalUtil_ByteArrayFromNative_m84D6F9E95E13E6AB35441D4BA39E1A2F05E8D531(L_9, L_10, NULL);
		__this->___Data_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_2), (void*)L_11);
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
// System.Void Pico.Platform.Models.RtcAudioPropertyInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcAudioPropertyInfo__ctor_mD841A6F25FFFC9CD55C2E37CA6ACE5271A4F700C (RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcAudioPropertyInfo(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Volume = CLIB.ppf_RtcAudioPropertyInfo_GetVolume(o);
		intptr_t L_0 = ___o0;
		int32_t L_1;
		L_1 = CLIB_ppf_RtcAudioPropertyInfo_GetVolume_mA04AC05CDC33AEBC64B22F872F10A4EB379B5507(L_0, NULL);
		__this->___Volume_0 = L_1;
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
// System.Void Pico.Platform.Models.RtcJoinRoomResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcJoinRoomResult__ctor_m7B314C8949F4E8A063062D3D75F9B40A5B6D5354 (RtcJoinRoomResult_t222AA0AA4390A38744032D6F5E176BD2E4D1AF86* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcJoinRoomResult(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// RoomId = CLIB.ppf_RtcJoinRoomResult_GetRoomId(o);
		intptr_t L_0 = ___o0;
		String_t* L_1;
		L_1 = CLIB_ppf_RtcJoinRoomResult_GetRoomId_m7B3E440E1058D0C5EF7944078D7237E5C43768F9(L_0, NULL);
		__this->___RoomId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_0), (void*)L_1);
		// UserId = CLIB.ppf_RtcJoinRoomResult_GetUserId(o);
		intptr_t L_2 = ___o0;
		String_t* L_3;
		L_3 = CLIB_ppf_RtcJoinRoomResult_GetUserId_mE792981D075553D845ACE9044234DB6FBB146CF0(L_2, NULL);
		__this->___UserId_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UserId_1), (void*)L_3);
		// ErrorCode = CLIB.ppf_RtcJoinRoomResult_GetErrorCode(o);
		intptr_t L_4 = ___o0;
		int32_t L_5;
		L_5 = CLIB_ppf_RtcJoinRoomResult_GetErrorCode_m40F5640D389A049FDEB3214E4902E525CBD78D3E(L_4, NULL);
		__this->___ErrorCode_2 = L_5;
		// Elapsed = CLIB.ppf_RtcJoinRoomResult_GetElapsed(o);
		intptr_t L_6 = ___o0;
		int32_t L_7;
		L_7 = CLIB_ppf_RtcJoinRoomResult_GetElapsed_mDAB8BF00819197F9E98B3A7C2599831A8ACBAFDD(L_6, NULL);
		__this->___Elapsed_3 = L_7;
		// JoinType = CLIB.ppf_RtcJoinRoomResult_GetJoinType(o);
		intptr_t L_8 = ___o0;
		int32_t L_9;
		L_9 = CLIB_ppf_RtcJoinRoomResult_GetJoinType_mAFADE43668B9B291F56C65888AD31C70CE635AC5(L_8, NULL);
		__this->___JoinType_4 = L_9;
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
// System.Void Pico.Platform.Models.RtcLeaveRoomResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcLeaveRoomResult__ctor_mB66FF86D0BAB29F9340A0285A1EC9A02F1B50C6C (RtcLeaveRoomResult_tAEC4346AD4A8B3227C7A6866A646DB44D80EE2F5* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcLeaveRoomResult(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// RoomId = CLIB.ppf_RtcLeaveRoomResult_GetRoomId(o);
		intptr_t L_0 = ___o0;
		String_t* L_1;
		L_1 = CLIB_ppf_RtcLeaveRoomResult_GetRoomId_m5B30176E3CFBF512492C273084F298117CC62D08(L_0, NULL);
		__this->___RoomId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_0), (void*)L_1);
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
// System.Void Pico.Platform.Models.RtcLocalAudioPropertiesInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcLocalAudioPropertiesInfo__ctor_m83E0BCA8598978313582143FAF96AFCF81A62B9C (RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RtcLocalAudioPropertiesInfo(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// StreamIndex = CLIB.ppf_RtcLocalAudioPropertiesInfo_GetStreamIndex(o);
		intptr_t L_0 = ___o0;
		int32_t L_1;
		L_1 = CLIB_ppf_RtcLocalAudioPropertiesInfo_GetStreamIndex_m402C11D7B8B10D25A2E7419BF8488DCF0CA57AF1(L_0, NULL);
		__this->___StreamIndex_0 = L_1;
		// AudioPropertyInfo = new RtcAudioPropertyInfo(CLIB.ppf_RtcLocalAudioPropertiesInfo_GetAudioPropertyInfo(o));
		intptr_t L_2 = ___o0;
		intptr_t L_3;
		L_3 = CLIB_ppf_RtcLocalAudioPropertiesInfo_GetAudioPropertyInfo_m18741BB3473446F76767F349493836D9E38E2D69(L_2, NULL);
		RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D* L_4 = (RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D*)il2cpp_codegen_object_new(RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		RtcAudioPropertyInfo__ctor_mD841A6F25FFFC9CD55C2E37CA6ACE5271A4F700C(L_4, L_3, NULL);
		__this->___AudioPropertyInfo_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AudioPropertyInfo_1), (void*)L_4);
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
// System.Void Pico.Platform.Models.RtcLocalAudioPropertiesReport::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcLocalAudioPropertiesReport__ctor_m070996393241820FE38C6BC98C80DD3A805E2937 (RtcLocalAudioPropertiesReport_t32CB97B68D05215E397A0D852B11C37D8F45D843* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtcLocalAudioPropertiesInfoU5BU5D_tDCE88CF7E7D8EA451A5D343EF305378092193836_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtcLocalAudioPropertiesReport__ctor_m070996393241820FE38C6BC98C80DD3A805E2937_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		// public RtcLocalAudioPropertiesReport(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ulong total = (ulong) CLIB.ppf_RtcLocalAudioPropertiesReport_GetAudioPropertiesInfosSize(o);
		intptr_t L_0 = ___o0;
		uintptr_t L_1;
		L_1 = CLIB_ppf_RtcLocalAudioPropertiesReport_GetAudioPropertiesInfosSize_m28B6D26993F11462B9104B2B345E54A03BD52222(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C(L_1, NULL);
		V_0 = L_2;
		// AudioPropertiesInfos = new RtcLocalAudioPropertiesInfo[total];
		uint64_t L_3 = V_0;
		if ((uint64_t)(L_3) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), RtcLocalAudioPropertiesReport__ctor_m070996393241820FE38C6BC98C80DD3A805E2937_RuntimeMethod_var);
		RtcLocalAudioPropertiesInfoU5BU5D_tDCE88CF7E7D8EA451A5D343EF305378092193836* L_4 = (RtcLocalAudioPropertiesInfoU5BU5D_tDCE88CF7E7D8EA451A5D343EF305378092193836*)(RtcLocalAudioPropertiesInfoU5BU5D_tDCE88CF7E7D8EA451A5D343EF305378092193836*)SZArrayNew(RtcLocalAudioPropertiesInfoU5BU5D_tDCE88CF7E7D8EA451A5D343EF305378092193836_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_3));
		__this->___AudioPropertiesInfos_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AudioPropertiesInfos_0), (void*)L_4);
		// for (uint i = 0; i < total; i++)
		V_1 = 0;
		goto IL_0040;
	}

IL_0023:
	{
		// AudioPropertiesInfos[i] = new RtcLocalAudioPropertiesInfo(CLIB.ppf_RtcLocalAudioPropertiesReport_GetAudioPropertiesInfos(o, (UIntPtr)i));
		RtcLocalAudioPropertiesInfoU5BU5D_tDCE88CF7E7D8EA451A5D343EF305378092193836* L_5 = __this->___AudioPropertiesInfos_0;
		uint32_t L_6 = V_1;
		intptr_t L_7 = ___o0;
		uint32_t L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_9;
		L_9 = UIntPtr_op_Explicit_mD94DCD8965DD2E7D5A3370A04CCEDBE5937C078C(L_8, NULL);
		intptr_t L_10;
		L_10 = CLIB_ppf_RtcLocalAudioPropertiesReport_GetAudioPropertiesInfos_mAA0E4DA657D7FAFC7786EAEFECF23DC0C87CC203(L_7, L_9, NULL);
		RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7* L_11 = (RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7*)il2cpp_codegen_object_new(RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		RtcLocalAudioPropertiesInfo__ctor_m83E0BCA8598978313582143FAF96AFCF81A62B9C(L_11, L_10, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_11);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RtcLocalAudioPropertiesInfo_t983B2EF5ED28307CEE3EBF1C6B1D5E07FF998CD7*)L_11);
		// for (uint i = 0; i < total; i++)
		uint32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, 1));
	}

IL_0040:
	{
		// for (uint i = 0; i < total; i++)
		uint32_t L_13 = V_1;
		uint64_t L_14 = V_0;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_13)) >= ((uint64_t)L_14))))
		{
			goto IL_0023;
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
// System.Void Pico.Platform.Models.RtcMediaDeviceChangeInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcMediaDeviceChangeInfo__ctor_m16167960098AA5B1BF63BC9534269AB593FA968D (RtcMediaDeviceChangeInfo_t8AF4D1C316FDE4DE287FB0B21D061933A2DB09B9* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcMediaDeviceChangeInfo(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// DeviceId = CLIB.ppf_RtcMediaDeviceChangeInfo_GetDeviceId(o);
		intptr_t L_0 = ___o0;
		String_t* L_1;
		L_1 = CLIB_ppf_RtcMediaDeviceChangeInfo_GetDeviceId_m2354CEBDFEE219BECBA38618F7136D6D9602AECF(L_0, NULL);
		__this->___DeviceId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeviceId_0), (void*)L_1);
		// DeviceType = CLIB.ppf_RtcMediaDeviceChangeInfo_GetDeviceType(o);
		intptr_t L_2 = ___o0;
		int32_t L_3;
		L_3 = CLIB_ppf_RtcMediaDeviceChangeInfo_GetDeviceType_m72DEC7277335DEE53A459EB8EA26E8C93F6578AA(L_2, NULL);
		__this->___DeviceType_1 = L_3;
		// DeviceState = CLIB.ppf_RtcMediaDeviceChangeInfo_GetDeviceState(o);
		intptr_t L_4 = ___o0;
		int32_t L_5;
		L_5 = CLIB_ppf_RtcMediaDeviceChangeInfo_GetDeviceState_mA59D7D1FA3BF4FBCAD870D7DEB505149E0DE5A0D(L_4, NULL);
		__this->___DeviceState_2 = L_5;
		// DeviceError = CLIB.ppf_RtcMediaDeviceChangeInfo_GetDeviceError(o);
		intptr_t L_6 = ___o0;
		int32_t L_7;
		L_7 = CLIB_ppf_RtcMediaDeviceChangeInfo_GetDeviceError_m99908FD336CBAD649B0EC59BC2A79251B3BE6759(L_6, NULL);
		__this->___DeviceError_3 = L_7;
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
// System.Void Pico.Platform.Models.RtcMuteInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcMuteInfo__ctor_m9893FFDE980619816EB2E328096D361F9FDA5FE4 (RtcMuteInfo_t13EC090EF336129CF50A4B58F688F42CFA53CBCC* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcMuteInfo(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// UserId = CLIB.ppf_RtcMuteInfo_GetUserId(o);
		intptr_t L_0 = ___o0;
		String_t* L_1;
		L_1 = CLIB_ppf_RtcMuteInfo_GetUserId_m4C9FD6955904D00B8D62BD8DFF30BA340A7F6CC6(L_0, NULL);
		__this->___UserId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UserId_0), (void*)L_1);
		// MuteState = CLIB.ppf_RtcMuteInfo_GetMuteState(o);
		intptr_t L_2 = ___o0;
		int32_t L_3;
		L_3 = CLIB_ppf_RtcMuteInfo_GetMuteState_mBC0505EFE1FC5D90A47DEE7A1D43D08EB688E807(L_2, NULL);
		__this->___MuteState_1 = L_3;
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
// System.Void Pico.Platform.Models.RtcRemoteAudioPropertiesInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcRemoteAudioPropertiesInfo__ctor_mA569B3B8D3851F60E6A5822CABDEFE943566856A (RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RtcRemoteAudioPropertiesInfo(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// StreamKey = new RtcRemoteStreamKey(CLIB.ppf_RtcRemoteAudioPropertiesInfo_GetStreamKey(o));
		intptr_t L_0 = ___o0;
		intptr_t L_1;
		L_1 = CLIB_ppf_RtcRemoteAudioPropertiesInfo_GetStreamKey_m3B66B97BD1934EA9018E93E3B0A6EC3254BD5BA7(L_0, NULL);
		RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8* L_2 = (RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8*)il2cpp_codegen_object_new(RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RtcRemoteStreamKey__ctor_m65CBF360CB0A78852AAC6D047639E0A94C31EEAF(L_2, L_1, NULL);
		__this->___StreamKey_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___StreamKey_0), (void*)L_2);
		// AudioPropertiesInfo = new RtcAudioPropertyInfo(CLIB.ppf_RtcRemoteAudioPropertiesInfo_GetAudioPropertiesInfo(o));
		intptr_t L_3 = ___o0;
		intptr_t L_4;
		L_4 = CLIB_ppf_RtcRemoteAudioPropertiesInfo_GetAudioPropertiesInfo_mFEA490A4FA6B13D8EF9EA1B9D39DBFF6778AEC9D(L_3, NULL);
		RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D* L_5 = (RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D*)il2cpp_codegen_object_new(RtcAudioPropertyInfo_t8723790CB0FF59986AF09C720C565EE36A07B28D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RtcAudioPropertyInfo__ctor_mD841A6F25FFFC9CD55C2E37CA6ACE5271A4F700C(L_5, L_4, NULL);
		__this->___AudioPropertiesInfo_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AudioPropertiesInfo_1), (void*)L_5);
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
// System.Void Pico.Platform.Models.RtcRemoteAudioPropertiesReport::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcRemoteAudioPropertiesReport__ctor_m51EE3585EA2CE5321E790619363C60D72D151BF5 (RtcRemoteAudioPropertiesReport_t0E2035670F409963DFD1C9BB84670125169459DA* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtcRemoteAudioPropertiesInfoU5BU5D_tE0D90F4B43BBDE54A41B95170B2B12C0E35B76F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// public RtcRemoteAudioPropertiesReport(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// AudioPropertiesInfos = new RtcRemoteAudioPropertiesInfo[(int)CLIB.ppf_RtcRemoteAudioPropertiesReport_GetAudioPropertiesInfosSize(o)];
		intptr_t L_0 = ___o0;
		uintptr_t L_1;
		L_1 = CLIB_ppf_RtcRemoteAudioPropertiesReport_GetAudioPropertiesInfosSize_m9D4702327C744240AD526C07C1E38A8ADC1EBC8A(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_1, NULL);
		RtcRemoteAudioPropertiesInfoU5BU5D_tE0D90F4B43BBDE54A41B95170B2B12C0E35B76F7* L_3 = (RtcRemoteAudioPropertiesInfoU5BU5D_tE0D90F4B43BBDE54A41B95170B2B12C0E35B76F7*)(RtcRemoteAudioPropertiesInfoU5BU5D_tE0D90F4B43BBDE54A41B95170B2B12C0E35B76F7*)SZArrayNew(RtcRemoteAudioPropertiesInfoU5BU5D_tE0D90F4B43BBDE54A41B95170B2B12C0E35B76F7_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___AudioPropertiesInfos_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AudioPropertiesInfos_0), (void*)L_3);
		// for (uint i = 0; i < AudioPropertiesInfos.Length; i++)
		V_0 = 0;
		goto IL_003d;
	}

IL_0020:
	{
		// AudioPropertiesInfos[i] = new RtcRemoteAudioPropertiesInfo(CLIB.ppf_RtcRemoteAudioPropertiesReport_GetAudioPropertiesInfos(o, (UIntPtr)i));
		RtcRemoteAudioPropertiesInfoU5BU5D_tE0D90F4B43BBDE54A41B95170B2B12C0E35B76F7* L_4 = __this->___AudioPropertiesInfos_0;
		uint32_t L_5 = V_0;
		intptr_t L_6 = ___o0;
		uint32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_mD94DCD8965DD2E7D5A3370A04CCEDBE5937C078C(L_7, NULL);
		intptr_t L_9;
		L_9 = CLIB_ppf_RtcRemoteAudioPropertiesReport_GetAudioPropertiesInfos_m931EDB0CB701CF665112E335651FFF43D0C76BFF(L_6, L_8, NULL);
		RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0* L_10 = (RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0*)il2cpp_codegen_object_new(RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		RtcRemoteAudioPropertiesInfo__ctor_mA569B3B8D3851F60E6A5822CABDEFE943566856A(L_10, L_9, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_10);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RtcRemoteAudioPropertiesInfo_tC525522C12C689373473B28A316E1FC94DB890B0*)L_10);
		// for (uint i = 0; i < AudioPropertiesInfos.Length; i++)
		uint32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, 1));
	}

IL_003d:
	{
		// for (uint i = 0; i < AudioPropertiesInfos.Length; i++)
		uint32_t L_12 = V_0;
		RtcRemoteAudioPropertiesInfoU5BU5D_tE0D90F4B43BBDE54A41B95170B2B12C0E35B76F7* L_13 = __this->___AudioPropertiesInfos_0;
		NullCheck(L_13);
		if ((((int64_t)((int64_t)(uint64_t)L_12)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		// TotalRemoteVolume = CLIB.ppf_RtcRemoteAudioPropertiesReport_GetTotalRemoteVolume(o);
		intptr_t L_14 = ___o0;
		int32_t L_15;
		L_15 = CLIB_ppf_RtcRemoteAudioPropertiesReport_GetTotalRemoteVolume_m44DE0566717EC76B3F03F4A135F152AE696B644A(L_14, NULL);
		__this->___TotalRemoteVolume_1 = L_15;
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
// System.Void Pico.Platform.Models.RtcRemoteStreamKey::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcRemoteStreamKey__ctor_m65CBF360CB0A78852AAC6D047639E0A94C31EEAF (RtcRemoteStreamKey_tB3AF6EB12FDE0158D5A844C89ADA0F411CF992B8* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcRemoteStreamKey(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// RoomId = CLIB.ppf_RtcRemoteStreamKey_GetRoomId(o);
		intptr_t L_0 = ___o0;
		String_t* L_1;
		L_1 = CLIB_ppf_RtcRemoteStreamKey_GetRoomId_m0313C4AAF081211D322C4B8AB84FBE47795B0F01(L_0, NULL);
		__this->___RoomId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_0), (void*)L_1);
		// UserId = CLIB.ppf_RtcRemoteStreamKey_GetUserId(o);
		intptr_t L_2 = ___o0;
		String_t* L_3;
		L_3 = CLIB_ppf_RtcRemoteStreamKey_GetUserId_m921AFE124576D9255466DB9D05D9232954F8C094(L_2, NULL);
		__this->___UserId_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UserId_1), (void*)L_3);
		// RtcStreamIndex = CLIB.ppf_RtcRemoteStreamKey_GetStreamIndex(o);
		intptr_t L_4 = ___o0;
		int32_t L_5;
		L_5 = CLIB_ppf_RtcRemoteStreamKey_GetStreamIndex_m62647B6A9999E7327873EFA3CBA40D031BC703A0(L_4, NULL);
		__this->___RtcStreamIndex_2 = L_5;
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
// System.Void Pico.Platform.Models.RtcRoomError::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcRoomError__ctor_mB64F1571CF325818D00BCDC49FAA247ADA012114 (RtcRoomError_t68499B928A94941DF435C88B6FAA0942D39C3181* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcRoomError(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Code = CLIB.ppf_RtcRoomError_GetCode(o);
		intptr_t L_0 = ___o0;
		int32_t L_1;
		L_1 = CLIB_ppf_RtcRoomError_GetCode_m1755F19838ECD58EA09E8B0D7A16015487CC787F(L_0, NULL);
		__this->___Code_0 = L_1;
		// RoomId = CLIB.ppf_RtcRoomError_GetRoomId(o);
		intptr_t L_2 = ___o0;
		String_t* L_3;
		L_3 = CLIB_ppf_RtcRoomError_GetRoomId_m35AFF13A43EECF31F9392C869C9494A35C2C0792(L_2, NULL);
		__this->___RoomId_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_1), (void*)L_3);
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
// System.Void Pico.Platform.Models.RtcRoomStats::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcRoomStats__ctor_m914648976E065CAF62609E705C0371F7C65B88D6 (RtcRoomStats_tF73914DABF13D8494F32E98648C491D8325345D0* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcRoomStats(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// TotalDuration = CLIB.ppf_RtcRoomStats_GetTotalDuration(o);
		intptr_t L_0 = ___o0;
		int32_t L_1;
		L_1 = CLIB_ppf_RtcRoomStats_GetTotalDuration_m2E9B5C070831EE454BD421662415FF2AA36FFB80(L_0, NULL);
		__this->___TotalDuration_0 = L_1;
		// UserCount = CLIB.ppf_RtcRoomStats_GetUserCount(o);
		intptr_t L_2 = ___o0;
		int32_t L_3;
		L_3 = CLIB_ppf_RtcRoomStats_GetUserCount_m70C604780238325862215C593DEE3175E1E9EF63(L_2, NULL);
		__this->___UserCount_1 = L_3;
		// RoomId = CLIB.ppf_RtcRoomStats_GetRoomId(o);
		intptr_t L_4 = ___o0;
		String_t* L_5;
		L_5 = CLIB_ppf_RtcRoomStats_GetRoomId_m030B0E8AD057ED2D71EA230E14A22551218EE1C3(L_4, NULL);
		__this->___RoomId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_2), (void*)L_5);
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
// System.Void Pico.Platform.Models.RtcRoomWarn::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcRoomWarn__ctor_m52802303C40D4D70D2F4FC0EA1CF7F79FE328C51 (RtcRoomWarn_tDDB2A799E1AE0089AE0F3CD1FA0E67E129726C54* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcRoomWarn(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Code = CLIB.ppf_RtcRoomWarn_GetCode(o);
		intptr_t L_0 = ___o0;
		int32_t L_1;
		L_1 = CLIB_ppf_RtcRoomWarn_GetCode_mE3E092DDE26B7C495D8E6A29F9E392984F4F9EA1(L_0, NULL);
		__this->___Code_0 = L_1;
		// RoomId = CLIB.ppf_RtcRoomWarn_GetRoomId(o);
		intptr_t L_2 = ___o0;
		String_t* L_3;
		L_3 = CLIB_ppf_RtcRoomWarn_GetRoomId_m2CB39FD6675AB95144B48761D7021023D31243B2(L_2, NULL);
		__this->___RoomId_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_1), (void*)L_3);
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
// System.Void Pico.Platform.Models.RtcUserJoinInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcUserJoinInfo__ctor_m59AA92846CD0072C2EC4B87CD40DA71C9E216F8E (RtcUserJoinInfo_tB5621FE936406D29E014B854A414CE9DBD573F5C* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcUserJoinInfo(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// UserId = CLIB.ppf_RtcUserJoinInfo_GetUserId(o);
		intptr_t L_0 = ___o0;
		String_t* L_1;
		L_1 = CLIB_ppf_RtcUserJoinInfo_GetUserId_m795A17B0B2A6D61556DBA3FDBFA720A5367EC4C3(L_0, NULL);
		__this->___UserId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UserId_0), (void*)L_1);
		// UserExtra = CLIB.ppf_RtcUserJoinInfo_GetUserExtra(o);
		intptr_t L_2 = ___o0;
		String_t* L_3;
		L_3 = CLIB_ppf_RtcUserJoinInfo_GetUserExtra_m68F5AE4B4849B0DD5C7D2281A2F591D64465B6C8(L_2, NULL);
		__this->___UserExtra_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UserExtra_1), (void*)L_3);
		// Elapsed = CLIB.ppf_RtcUserJoinInfo_GetElapsed(o);
		intptr_t L_4 = ___o0;
		int32_t L_5;
		L_5 = CLIB_ppf_RtcUserJoinInfo_GetElapsed_mF93D78390107E620C6B1289141E7ADB758BC322E(L_4, NULL);
		__this->___Elapsed_2 = L_5;
		// RoomId = CLIB.ppf_RtcUserJoinInfo_GetRoomId(o);
		intptr_t L_6 = ___o0;
		String_t* L_7;
		L_7 = CLIB_ppf_RtcUserJoinInfo_GetRoomId_m7CD73C1FE7D78B6F38069BF46FE80375EFE9E8EA(L_6, NULL);
		__this->___RoomId_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_3), (void*)L_7);
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
// System.Void Pico.Platform.Models.RtcUserLeaveInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RtcUserLeaveInfo__ctor_m73F2BA9077281477945F73CBA8541D309DB0F61D (RtcUserLeaveInfo_tABD9D07FC0F0E3950CFB2374C32C33C4278601F9* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	{
		// public RtcUserLeaveInfo(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// UserId = CLIB.ppf_RtcUserLeaveInfo_GetUserId(o);
		intptr_t L_0 = ___o0;
		String_t* L_1;
		L_1 = CLIB_ppf_RtcUserLeaveInfo_GetUserId_m22C1AB65E18858169BC76A08ABBD16F1862681B0(L_0, NULL);
		__this->___UserId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UserId_0), (void*)L_1);
		// OfflineReason = CLIB.ppf_RtcUserLeaveInfo_GetOfflineReason(o);
		intptr_t L_2 = ___o0;
		int32_t L_3;
		L_3 = CLIB_ppf_RtcUserLeaveInfo_GetOfflineReason_m86C83C66CE2FC3B86A106AE760DE6EDAD02DDFAE(L_2, NULL);
		__this->___OfflineReason_1 = L_3;
		// RoomId = CLIB.ppf_RtcUserLeaveInfo_GetRoomId(o);
		intptr_t L_4 = ___o0;
		String_t* L_5;
		L_5 = CLIB_ppf_RtcUserLeaveInfo_GetRoomId_m092EADC04DB3E1C51753F6213E5B012A9108A57C(L_4, NULL);
		__this->___RoomId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RoomId_2), (void*)L_5);
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
// System.Void Pico.Platform.Models.Room::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room__ctor_mA5B401D7DB201287BF39348613A73F88829701F8 (Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserList_t4FBD372AD727B86FE2C738E38D1BCAE7C3BB7281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t4A57578F9001EB8B02745E9305A72B29570F459B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public Room(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// DataStore = CLIB.DataStoreFromNative(CLIB.ppf_Room_GetDataStore(o));
		intptr_t L_0 = ___o0;
		intptr_t L_1;
		L_1 = CLIB_ppf_Room_GetDataStore_m1F0B31E7E180A65119AFC55C8FA78606A8F77375(L_0, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2;
		L_2 = CLIB_DataStoreFromNative_mB7386DBDDF2B7A4D7AFE0D7101E3399F1CA8DD38(L_1, NULL);
		__this->___DataStore_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DataStore_0), (void*)L_2);
		// Description = CLIB.ppf_Room_GetDescription(o);
		intptr_t L_3 = ___o0;
		String_t* L_4;
		L_4 = CLIB_ppf_Room_GetDescription_mEB4EA9CA77C6E9BCFC815BE739D130DCE0CFF13C(L_3, NULL);
		__this->___Description_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Description_1), (void*)L_4);
		// RoomId = CLIB.ppf_Room_GetID(o);
		intptr_t L_5 = ___o0;
		uint64_t L_6;
		L_6 = CLIB_ppf_Room_GetID_m13C361B9DE509CCE6DBF4D87E6D889CC0FDC30C8(L_5, NULL);
		__this->___RoomId_2 = L_6;
		// IsMembershipLocked = CLIB.ppf_Room_GetIsMembershipLocked(o);
		intptr_t L_7 = ___o0;
		bool L_8;
		L_8 = CLIB_ppf_Room_GetIsMembershipLocked_mBD764E8C3065A499C905B80F69DA01147CC0D871(L_7, NULL);
		__this->___IsMembershipLocked_3 = L_8;
		// RoomJoinPolicy = (RoomJoinPolicy) CLIB.ppf_Room_GetJoinPolicy(o);
		intptr_t L_9 = ___o0;
		int32_t L_10;
		L_10 = CLIB_ppf_Room_GetJoinPolicy_m24C4471F581824B15E3B344C4A3FAA198CE53F67(L_9, NULL);
		__this->___RoomJoinPolicy_4 = L_10;
		// RoomJoinability = (RoomJoinability) CLIB.ppf_Room_GetJoinability(o);
		intptr_t L_11 = ___o0;
		int32_t L_12;
		L_12 = CLIB_ppf_Room_GetJoinability_m958ABFDE1B9363ECE134562E64BB668B95FE85EC(L_11, NULL);
		__this->___RoomJoinability_5 = L_12;
		// MaxUsers = CLIB.ppf_Room_GetMaxUsers(o);
		intptr_t L_13 = ___o0;
		uint32_t L_14;
		L_14 = CLIB_ppf_Room_GetMaxUsers_m4D68C7BBEBF0ABC3FB3045C91E958E2E170DC3C8(L_13, NULL);
		__this->___MaxUsers_6 = L_14;
		// RoomType = (RoomType) CLIB.ppf_Room_GetType(o);
		intptr_t L_15 = ___o0;
		int32_t L_16;
		L_16 = CLIB_ppf_Room_GetType_m700962CEBDAD23371A91A114BD94E77B035BEC46(L_15, NULL);
		__this->___RoomType_8 = L_16;
		// var ptr = CLIB.ppf_Room_GetOwner(o);
		intptr_t L_17 = ___o0;
		intptr_t L_18;
		L_18 = CLIB_ppf_Room_GetOwner_m0D93BFA39D4A495C3EFE75B99F9A747DDCF5EACD(L_17, NULL);
		V_0 = L_18;
		// if (ptr == IntPtr.Zero)
		intptr_t L_19 = V_0;
		intptr_t L_20 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_21;
		L_21 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_0088;
		}
	}
	{
		// OwnerOptional = null;
		__this->___OwnerOptional_7 = (User_t4A57578F9001EB8B02745E9305A72B29570F459B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OwnerOptional_7), (void*)(User_t4A57578F9001EB8B02745E9305A72B29570F459B*)NULL);
		goto IL_0094;
	}

IL_0088:
	{
		// OwnerOptional = new User(ptr);
		intptr_t L_22 = V_0;
		User_t4A57578F9001EB8B02745E9305A72B29570F459B* L_23 = (User_t4A57578F9001EB8B02745E9305A72B29570F459B*)il2cpp_codegen_object_new(User_t4A57578F9001EB8B02745E9305A72B29570F459B_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		User__ctor_m65AB5AB78CA800CFE2E148D87161D5B3F4CA9AEB(L_23, L_22, NULL);
		__this->___OwnerOptional_7 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OwnerOptional_7), (void*)L_23);
	}

IL_0094:
	{
		// var ptr = CLIB.ppf_Room_GetUsers(o);
		intptr_t L_24 = ___o0;
		intptr_t L_25;
		L_25 = CLIB_ppf_Room_GetUsers_m1ECF14F038528B341AFD41851CE2D765D83D9450(L_24, NULL);
		V_1 = L_25;
		// if (ptr == IntPtr.Zero)
		intptr_t L_26 = V_1;
		intptr_t L_27 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_28;
		L_28 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_26, L_27, NULL);
		if (!L_28)
		{
			goto IL_00b0;
		}
	}
	{
		// UsersOptional = null;
		__this->___UsersOptional_9 = (UserList_t4FBD372AD727B86FE2C738E38D1BCAE7C3BB7281*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UsersOptional_9), (void*)(UserList_t4FBD372AD727B86FE2C738E38D1BCAE7C3BB7281*)NULL);
		return;
	}

IL_00b0:
	{
		// UsersOptional = new UserList(ptr);
		intptr_t L_29 = V_1;
		UserList_t4FBD372AD727B86FE2C738E38D1BCAE7C3BB7281* L_30 = (UserList_t4FBD372AD727B86FE2C738E38D1BCAE7C3BB7281*)il2cpp_codegen_object_new(UserList_t4FBD372AD727B86FE2C738E38D1BCAE7C3BB7281_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		UserList__ctor_m6ADA501463DDB1301F3FC042C5268ED720B596A1(L_30, L_29, NULL);
		__this->___UsersOptional_9 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UsersOptional_9), (void*)L_30);
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
// System.Void Pico.Platform.Models.RoomList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomList__ctor_m5CF31AECDB9FFFF3EBF3AD923DE48636EDAF6712 (RoomList_t3F4F71C9DCEBC4EBB1541542D617DA67E1457AF8* __this, intptr_t ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m40B1CAF48404FED800CB19BB5F977EEFE59A55FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m38E70F89B76F25A793317CAE6F6B8B2AC3CB6E05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageArray_1__ctor_mC7EBC3393EB4CC530E06FCF5211EF9BBEBCE6212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	RoomList_t3F4F71C9DCEBC4EBB1541542D617DA67E1457AF8* G_B2_0 = NULL;
	RoomList_t3F4F71C9DCEBC4EBB1541542D617DA67E1457AF8* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	RoomList_t3F4F71C9DCEBC4EBB1541542D617DA67E1457AF8* G_B3_1 = NULL;
	{
		// public RoomList(IntPtr a)
		MessageArray_1__ctor_mC7EBC3393EB4CC530E06FCF5211EF9BBEBCE6212(__this, MessageArray_1__ctor_mC7EBC3393EB4CC530E06FCF5211EF9BBEBCE6212_RuntimeMethod_var);
		// CurIndex = CLIB.ppf_RoomArray_GetPageIndex(a);
		intptr_t L_0 = ___a0;
		int32_t L_1;
		L_1 = CLIB_ppf_RoomArray_GetPageIndex_mAA31FF43D2D9735BB2EF5AE4B11B9E52DDB812DA(L_0, NULL);
		__this->___CurIndex_8 = L_1;
		// PageSize = CLIB.ppf_RoomArray_GetPageSize(a);
		intptr_t L_2 = ___a0;
		int32_t L_3;
		L_3 = CLIB_ppf_RoomArray_GetPageSize_mA768D6CDCB556CC906C87516E279DC5D8DED2A10(L_2, NULL);
		__this->___PageSize_9 = L_3;
		// NextPageParam = CLIB.ppf_RoomArray_HasNextPage(a) ? "true" : string.Empty;
		intptr_t L_4 = ___a0;
		bool L_5;
		L_5 = CLIB_ppf_RoomArray_HasNextPage_mA950C99EDFC9DA110FC11F2BD01B6E9460FCFCB6(L_4, NULL);
		G_B1_0 = __this;
		if (L_5)
		{
			G_B2_0 = __this;
			goto IL_002e;
		}
	}
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_002e:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		((MessageArray_1_t8A29A903207EB1BF7ADC149BC7E2533479F9617E*)G_B3_1)->___NextPageParam_6 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageArray_1_t8A29A903207EB1BF7ADC149BC7E2533479F9617E*)G_B3_1)->___NextPageParam_6), (void*)G_B3_0);
		// int count = (int) CLIB.ppf_RoomArray_GetSize(a);
		intptr_t L_7 = ___a0;
		uintptr_t L_8;
		L_8 = CLIB_ppf_RoomArray_GetSize_m45370408581AA01542641B430FC8B9FAD0E647D4(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_9;
		L_9 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_8, NULL);
		V_0 = L_9;
		// this.Capacity = count;
		int32_t L_10 = V_0;
		List_1_set_Capacity_m38E70F89B76F25A793317CAE6F6B8B2AC3CB6E05(__this, L_10, List_1_set_Capacity_m38E70F89B76F25A793317CAE6F6B8B2AC3CB6E05_RuntimeMethod_var);
		// for (uint i = 0; i < count; i++)
		V_1 = 0;
		goto IL_006a;
	}

IL_004f:
	{
		// this.Add(new Room(CLIB.ppf_RoomArray_GetElement(a, (UIntPtr)i)));
		intptr_t L_11 = ___a0;
		uint32_t L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_13;
		L_13 = UIntPtr_op_Explicit_mD94DCD8965DD2E7D5A3370A04CCEDBE5937C078C(L_12, NULL);
		intptr_t L_14;
		L_14 = CLIB_ppf_RoomArray_GetElement_m1571C608A470781E98F5E12614C147284DF2E3B3(L_11, L_13, NULL);
		Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D* L_15 = (Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D*)il2cpp_codegen_object_new(Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Room__ctor_mA5B401D7DB201287BF39348613A73F88829701F8(L_15, L_14, NULL);
		List_1_Add_m40B1CAF48404FED800CB19BB5F977EEFE59A55FE_inline(__this, L_15, List_1_Add_m40B1CAF48404FED800CB19BB5F977EEFE59A55FE_RuntimeMethod_var);
		// for (uint i = 0; i < count; i++)
		uint32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, 1));
	}

IL_006a:
	{
		// for (uint i = 0; i < count; i++)
		uint32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int64_t)((int64_t)(uint64_t)L_17)) < ((int64_t)((int64_t)L_18))))
		{
			goto IL_004f;
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
// System.Void Pico.Platform.Models.SportDailySummary::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SportDailySummary__ctor_m57260C499581C9E9F815578BFD37075FA956CBA7 (SportDailySummary_t157AFBF25089D3D27A38BA94B50C7BE06FE8F227* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tAA46537EC970B5CC1EC8F3648989D4B35968B6B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SportDailySummary(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Id = CLIB.ppf_SportDailySummary_GetId(o);
		intptr_t L_0 = ___o0;
		int64_t L_1;
		L_1 = CLIB_ppf_SportDailySummary_GetId_m95A9E59BBF28FBF82B9E0605628A2F80FE351879(L_0, NULL);
		__this->___Id_0 = L_1;
		// Date = Util.MilliSecondsToDateTime(CLIB.ppf_SportDailySummary_GetDate(o));
		intptr_t L_2 = ___o0;
		int64_t L_3;
		L_3 = CLIB_ppf_SportDailySummary_GetDate_m14FBE652B7AFC6B1F37B292885B6F47B7B1FEC45(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Util_tAA46537EC970B5CC1EC8F3648989D4B35968B6B1_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = Util_MilliSecondsToDateTime_m50126A48BEFF575665E94E417DEBE9A39951559F(L_3, NULL);
		__this->___Date_1 = L_4;
		// DurationInSeconds = CLIB.ppf_SportDailySummary_GetDurationInSeconds(o);
		intptr_t L_5 = ___o0;
		int32_t L_6;
		L_6 = CLIB_ppf_SportDailySummary_GetDurationInSeconds_mBFE01FF4B2DAF1C360C750E14BF85416723C2872(L_5, NULL);
		__this->___DurationInSeconds_2 = L_6;
		// PlanDurationInMinutes = CLIB.ppf_SportDailySummary_GetPlanDurationInMinutes(o);
		intptr_t L_7 = ___o0;
		int32_t L_8;
		L_8 = CLIB_ppf_SportDailySummary_GetPlanDurationInMinutes_m421E5F6A4B62E30DAB09AE43424CE929FF9263D6(L_7, NULL);
		__this->___PlanDurationInMinutes_3 = L_8;
		// Calorie = CLIB.ppf_SportDailySummary_GetCalorie(o);
		intptr_t L_9 = ___o0;
		double L_10;
		L_10 = CLIB_ppf_SportDailySummary_GetCalorie_m7A3AA191BD3BE44C07B34DBB3CC95460E9FD873F(L_9, NULL);
		__this->___Calorie_4 = L_10;
		// PlanCalorie = CLIB.ppf_SportDailySummary_GetPlanCalorie(o);
		intptr_t L_11 = ___o0;
		double L_12;
		L_12 = CLIB_ppf_SportDailySummary_GetPlanCalorie_m5B3D4A4FEAD4CBC7BCE25C47933DD941FB8EC29A(L_11, NULL);
		__this->___PlanCalorie_5 = L_12;
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
// System.Void Pico.Platform.Models.SportDailySummaryList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SportDailySummaryList__ctor_mAA714F61645D775BFEAB1C915D77FCA5A25FEAB1 (SportDailySummaryList_t57C835C93904EF5EEFA7C7BDC79AD9B7801E219B* __this, intptr_t ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCFDD6AF77CD53FC9BD39A96B47042D35CB515624_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m282D35C16336809C7B6A230821F954A4505114B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageArray_1__ctor_mA979AAEE168F9640490FF54CC91E4A42248A3DD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SportDailySummary_t157AFBF25089D3D27A38BA94B50C7BE06FE8F227_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public SportDailySummaryList(IntPtr a)
		MessageArray_1__ctor_mA979AAEE168F9640490FF54CC91E4A42248A3DD3(__this, MessageArray_1__ctor_mA979AAEE168F9640490FF54CC91E4A42248A3DD3_RuntimeMethod_var);
		// var count = (int) CLIB.ppf_SportDailySummaryArray_GetSize(a);
		intptr_t L_0 = ___a0;
		uintptr_t L_1;
		L_1 = CLIB_ppf_SportDailySummaryArray_GetSize_m9F3A52497FFD1F31C7173BF514579B275F69CE6F(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_1, NULL);
		V_0 = L_2;
		// this.Capacity = count;
		int32_t L_3 = V_0;
		List_1_set_Capacity_m282D35C16336809C7B6A230821F954A4505114B9(__this, L_3, List_1_set_Capacity_m282D35C16336809C7B6A230821F954A4505114B9_RuntimeMethod_var);
		// for (int i = 0; i < count; i++)
		V_1 = 0;
		goto IL_0039;
	}

IL_001d:
	{
		// this.Add(new SportDailySummary(CLIB.ppf_SportDailySummaryArray_GetElement(a, (UIntPtr) i)));
		intptr_t L_4 = ___a0;
		int32_t L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_6;
		L_6 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((int64_t)L_5), NULL);
		intptr_t L_7;
		L_7 = CLIB_ppf_SportDailySummaryArray_GetElement_m59C83C6A45925DAA526122A5AB67D119B7D55EED(L_4, L_6, NULL);
		SportDailySummary_t157AFBF25089D3D27A38BA94B50C7BE06FE8F227* L_8 = (SportDailySummary_t157AFBF25089D3D27A38BA94B50C7BE06FE8F227*)il2cpp_codegen_object_new(SportDailySummary_t157AFBF25089D3D27A38BA94B50C7BE06FE8F227_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		SportDailySummary__ctor_m57260C499581C9E9F815578BFD37075FA956CBA7(L_8, L_7, NULL);
		List_1_Add_mCFDD6AF77CD53FC9BD39A96B47042D35CB515624_inline(__this, L_8, List_1_Add_mCFDD6AF77CD53FC9BD39A96B47042D35CB515624_RuntimeMethod_var);
		// for (int i = 0; i < count; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001d;
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
// System.Void Pico.Platform.Models.SportSummary::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SportSummary__ctor_mEC86645D41A0BB22D726A214B99592470EBE4D32 (SportSummary_t16F36734D6C51BC8F25904D05E2EFA8B52B90DEF* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tAA46537EC970B5CC1EC8F3648989D4B35968B6B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SportSummary(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// DurationInSeconds = CLIB.ppf_SportSummary_GetDurationInSeconds(o);
		intptr_t L_0 = ___o0;
		int64_t L_1;
		L_1 = CLIB_ppf_SportSummary_GetDurationInSeconds_m9B88949A0D9165A3C95A686DF236B489B31E8BFC(L_0, NULL);
		__this->___DurationInSeconds_0 = L_1;
		// Calorie = CLIB.ppf_SportSummary_GetCalorie(o);
		intptr_t L_2 = ___o0;
		double L_3;
		L_3 = CLIB_ppf_SportSummary_GetCalorie_m96AC790C6F79415D832BBF42703BB819EEA21A9F(L_2, NULL);
		__this->___Calorie_1 = L_3;
		// StartTime = Util.MilliSecondsToDateTime(CLIB.ppf_SportSummary_GetStartTime(o));
		intptr_t L_4 = ___o0;
		int64_t L_5;
		L_5 = CLIB_ppf_SportSummary_GetStartTime_m738B9DFD848500B880181F3BCFDCACCA3F366F91(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Util_tAA46537EC970B5CC1EC8F3648989D4B35968B6B1_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = Util_MilliSecondsToDateTime_m50126A48BEFF575665E94E417DEBE9A39951559F(L_5, NULL);
		__this->___StartTime_2 = L_6;
		// EndTime = Util.MilliSecondsToDateTime(CLIB.ppf_SportSummary_GetEndTime(o));
		intptr_t L_7 = ___o0;
		int64_t L_8;
		L_8 = CLIB_ppf_SportSummary_GetEndTime_mDE51E609B9E533B3C1AF37B7C55F91AD358AD725(L_7, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9;
		L_9 = Util_MilliSecondsToDateTime_m50126A48BEFF575665E94E417DEBE9A39951559F(L_8, NULL);
		__this->___EndTime_3 = L_9;
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
// System.Void Pico.Platform.Models.SportUserInfo::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SportUserInfo__ctor_mFC855C50FC4B5D9F1A8218C3A06BC0DEA99BE6DB (SportUserInfo_t4ED6C986AF2629CF8CE961DD6E035BEC64C47E30* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tAA46537EC970B5CC1EC8F3648989D4B35968B6B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SportUserInfo(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Gender = CLIB.ppf_SportUserInfo_GetGender(o);
		intptr_t L_0 = ___o0;
		int32_t L_1;
		L_1 = CLIB_ppf_SportUserInfo_GetGender_m71CC42932486ADDCB8B93773545354BEF4EE6D46(L_0, NULL);
		__this->___Gender_0 = L_1;
		// Birthday = Util.MilliSecondsToDateTime(CLIB.ppf_SportUserInfo_GetBirthday(o));
		intptr_t L_2 = ___o0;
		int64_t L_3;
		L_3 = CLIB_ppf_SportUserInfo_GetBirthday_mE81318FE7536F5C15BBF999CE650F9F11D41E53D(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Util_tAA46537EC970B5CC1EC8F3648989D4B35968B6B1_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = Util_MilliSecondsToDateTime_m50126A48BEFF575665E94E417DEBE9A39951559F(L_3, NULL);
		__this->___Birthday_1 = L_4;
		// Stature = CLIB.ppf_SportUserInfo_GetStature(o);
		intptr_t L_5 = ___o0;
		int32_t L_6;
		L_6 = CLIB_ppf_SportUserInfo_GetStature_m8BBDE449B416E186F627FC14F0CC996C6D9A8623(L_5, NULL);
		__this->___Stature_2 = L_6;
		// Weight = CLIB.ppf_SportUserInfo_GetWeight(o);
		intptr_t L_7 = ___o0;
		int32_t L_8;
		L_8 = CLIB_ppf_SportUserInfo_GetWeight_mBB924C90C0F9AE1CA7E6DDC61FD57DB3A7FD2641(L_7, NULL);
		__this->___Weight_3 = L_8;
		// SportLevel = CLIB.ppf_SportUserInfo_GetSportLevel(o);
		intptr_t L_9 = ___o0;
		int32_t L_10;
		L_10 = CLIB_ppf_SportUserInfo_GetSportLevel_mC777610CBCE421D9F1568E0AE2B0B063AB06D16E(L_9, NULL);
		__this->___SportLevel_4 = L_10;
		// DailyDurationInMinutes = CLIB.ppf_SportUserInfo_GetDailyDurationInMinutes(o);
		intptr_t L_11 = ___o0;
		int32_t L_12;
		L_12 = CLIB_ppf_SportUserInfo_GetDailyDurationInMinutes_m42CEA5A37D074C854D6EC949D943AF9C3D46CCCA(L_11, NULL);
		__this->___DailyDurationInMinutes_5 = L_12;
		// DaysPerWeek = CLIB.ppf_SportUserInfo_GetDaysPerWeek(o);
		intptr_t L_13 = ___o0;
		int32_t L_14;
		L_14 = CLIB_ppf_SportUserInfo_GetDaysPerWeek_mD9A804E974190994F8C92205B74EE18C86B76CB6(L_13, NULL);
		__this->___DaysPerWeek_6 = L_14;
		// SportTarget = CLIB.ppf_SportUserInfo_GetSportTarget(o);
		intptr_t L_15 = ___o0;
		int32_t L_16;
		L_16 = CLIB_ppf_SportUserInfo_GetSportTarget_m5ABB84CCF1332468A6922217F60F60173B4D3030(L_15, NULL);
		__this->___SportTarget_7 = L_16;
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
// System.Void Pico.Platform.Models.User::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m65AB5AB78CA800CFE2E148D87161D5B3F4CA9AEB (User_t4A57578F9001EB8B02745E9305A72B29570F459B* __this, intptr_t ___obj0, const RuntimeMethod* method) 
{
	{
		// public User(IntPtr obj)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// DisplayName = CLIB.ppf_User_GetDisplayName(obj);
		intptr_t L_0 = ___obj0;
		String_t* L_1;
		L_1 = CLIB_ppf_User_GetDisplayName_m7F18ED9B77264FAC59E9D9AC61B6724C5507880F(L_0, NULL);
		__this->___DisplayName_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DisplayName_0), (void*)L_1);
		// ImageUrl = CLIB.ppf_User_GetImageUrl(obj);
		intptr_t L_2 = ___obj0;
		String_t* L_3;
		L_3 = CLIB_ppf_User_GetImageUrl_m58A67CC084D255C1A8855587A3A2EECC82BBCCA1(L_2, NULL);
		__this->___ImageUrl_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ImageUrl_1), (void*)L_3);
		// ID = CLIB.ppf_User_GetID(obj);
		intptr_t L_4 = ___obj0;
		String_t* L_5;
		L_5 = CLIB_ppf_User_GetID_mC41EEFD63BCDAE6E5D3F8A21B3A0B28F0B54822E(L_4, NULL);
		__this->___ID_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ID_2), (void*)L_5);
		// InviteToken = CLIB.ppf_User_GetInviteToken(obj);
		intptr_t L_6 = ___obj0;
		String_t* L_7;
		L_7 = CLIB_ppf_User_GetInviteToken_m377024C4A883A4F589D9B7EB0B0D7413EDF3EE24(L_6, NULL);
		__this->___InviteToken_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___InviteToken_12), (void*)L_7);
		// PresenceStatus = CLIB.ppf_User_GetPresenceStatus(obj);
		intptr_t L_8 = ___obj0;
		int32_t L_9;
		L_9 = CLIB_ppf_User_GetPresenceStatus_m7F96CA0E4381A227C959BD40E48A8A5B1286E3ED(L_8, NULL);
		__this->___PresenceStatus_3 = L_9;
		// Gender = CLIB.ppf_User_GetGender(obj);
		intptr_t L_10 = ___obj0;
		int32_t L_11;
		L_11 = CLIB_ppf_User_GetGender_m9E52B2729DE3B85223913B65FBE9DC39A3951F7F(L_10, NULL);
		__this->___Gender_4 = L_11;
		// Presence = CLIB.ppf_User_GetPresence(obj);
		intptr_t L_12 = ___obj0;
		String_t* L_13;
		L_13 = CLIB_ppf_User_GetPresence_m8CD577DD7E1A9928D3ECDA2C45A1DDB335F77599(L_12, NULL);
		__this->___Presence_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Presence_5), (void*)L_13);
		// PresenceDeeplinkMessage = CLIB.ppf_User_GetPresenceDeeplinkMessage(obj);
		intptr_t L_14 = ___obj0;
		String_t* L_15;
		L_15 = CLIB_ppf_User_GetPresenceDeeplinkMessage_mE0C33D72B6B01CABFEB2F28923A9BC6067DF2E37(L_14, NULL);
		__this->___PresenceDeeplinkMessage_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PresenceDeeplinkMessage_6), (void*)L_15);
		// PresenceDestinationApiName = CLIB.ppf_User_GetPresenceDestinationApiName(obj);
		intptr_t L_16 = ___obj0;
		String_t* L_17;
		L_17 = CLIB_ppf_User_GetPresenceDestinationApiName_mC4E6D1A5205241FBB09CD274D126C000558B37BB(L_16, NULL);
		__this->___PresenceDestinationApiName_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PresenceDestinationApiName_7), (void*)L_17);
		// PresenceLobbySessionId = CLIB.ppf_User_GetPresenceLobbySessionId(obj);
		intptr_t L_18 = ___obj0;
		String_t* L_19;
		L_19 = CLIB_ppf_User_GetPresenceLobbySessionId_mA7F62B44ACAF48B30160B301BB37C0E620DAA7B3(L_18, NULL);
		__this->___PresenceLobbySessionId_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PresenceLobbySessionId_8), (void*)L_19);
		// PresenceMatchSessionId = CLIB.ppf_User_GetPresenceMatchSessionId(obj);
		intptr_t L_20 = ___obj0;
		String_t* L_21;
		L_21 = CLIB_ppf_User_GetPresenceMatchSessionId_mDABDDE2B355EB1F0FACFEB3BB6236B81EDBC0618(L_20, NULL);
		__this->___PresenceMatchSessionId_9 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PresenceMatchSessionId_9), (void*)L_21);
		// PresenceExtra = CLIB.ppf_User_GetPresenceExtra(obj);
		intptr_t L_22 = ___obj0;
		String_t* L_23;
		L_23 = CLIB_ppf_User_GetPresenceExtra_m0B782AEDC7AB4ECADCAFEC2C4422E50A76F1404F(L_22, NULL);
		__this->___PresenceExtra_10 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PresenceExtra_10), (void*)L_23);
		// SmallImageUrl = CLIB.ppf_User_GetSmallImageUrl(obj);
		intptr_t L_24 = ___obj0;
		String_t* L_25;
		L_25 = CLIB_ppf_User_GetSmallImageUrl_mB864AC2409AACE66CF7E578A4D1E3F5DDB08A562(L_24, NULL);
		__this->___SmallImageUrl_11 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SmallImageUrl_11), (void*)L_25);
		// InviteToken = CLIB.ppf_User_GetInviteToken(obj);
		intptr_t L_26 = ___obj0;
		String_t* L_27;
		L_27 = CLIB_ppf_User_GetInviteToken_m377024C4A883A4F589D9B7EB0B0D7413EDF3EE24(L_26, NULL);
		__this->___InviteToken_12 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___InviteToken_12), (void*)L_27);
		// StoreRegion = CLIB.ppf_User_GetStoreRegion(obj);
		intptr_t L_28 = ___obj0;
		String_t* L_29;
		L_29 = CLIB_ppf_User_GetStoreRegion_m18DFD5413237B3433AACECF3E76EF0E085CE6D17(L_28, NULL);
		__this->___StoreRegion_13 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___StoreRegion_13), (void*)L_29);
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
// System.Void Pico.Platform.Models.UserList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserList__ctor_m6ADA501463DDB1301F3FC042C5268ED720B596A1 (UserList_t4FBD372AD727B86FE2C738E38D1BCAE7C3BB7281* __this, intptr_t ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2E7B33840E1BF3DFD2868E82D4E815FE4942A622_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m797F835E1497C61FC45E8F74AFA810F161C3FF9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageArray_1__ctor_mB9282B974A69F693F481FD1242C22EA48D3DBB94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t4A57578F9001EB8B02745E9305A72B29570F459B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public UserList(IntPtr a)
		MessageArray_1__ctor_mB9282B974A69F693F481FD1242C22EA48D3DBB94(__this, MessageArray_1__ctor_mB9282B974A69F693F481FD1242C22EA48D3DBB94_RuntimeMethod_var);
		// var count = (int) CLIB.ppf_UserArray_GetSize(a);
		intptr_t L_0 = ___a0;
		uintptr_t L_1;
		L_1 = CLIB_ppf_UserArray_GetSize_m1B47B3FC655ECEE76E8E58D651BFF2B3576AC17E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_1, NULL);
		V_0 = L_2;
		// this.Capacity = count;
		int32_t L_3 = V_0;
		List_1_set_Capacity_m797F835E1497C61FC45E8F74AFA810F161C3FF9D(__this, L_3, List_1_set_Capacity_m797F835E1497C61FC45E8F74AFA810F161C3FF9D_RuntimeMethod_var);
		// for (int i = 0; i < count; i++)
		V_1 = 0;
		goto IL_0039;
	}

IL_001d:
	{
		// this.Add(new User(CLIB.ppf_UserArray_GetElement(a, (UIntPtr) i)));
		intptr_t L_4 = ___a0;
		int32_t L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_6;
		L_6 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((int64_t)L_5), NULL);
		intptr_t L_7;
		L_7 = CLIB_ppf_UserArray_GetElement_m18C518BFDDE2264AE556F88DE8F563298A660EE1(L_4, L_6, NULL);
		User_t4A57578F9001EB8B02745E9305A72B29570F459B* L_8 = (User_t4A57578F9001EB8B02745E9305A72B29570F459B*)il2cpp_codegen_object_new(User_t4A57578F9001EB8B02745E9305A72B29570F459B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		User__ctor_m65AB5AB78CA800CFE2E148D87161D5B3F4CA9AEB(L_8, L_7, NULL);
		List_1_Add_m2E7B33840E1BF3DFD2868E82D4E815FE4942A622_inline(__this, L_8, List_1_Add_m2E7B33840E1BF3DFD2868E82D4E815FE4942A622_RuntimeMethod_var);
		// for (int i = 0; i < count; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001d;
		}
	}
	{
		// NextPageParam = CLIB.ppf_UserArray_GetNextPageParam(a);
		intptr_t L_12 = ___a0;
		String_t* L_13;
		L_13 = CLIB_ppf_UserArray_GetNextPageParam_m31C1FD07F535A18BF41D519120092FC9E8D1611A(L_12, NULL);
		((MessageArray_1_t8FB2AFA18B020CDB5F979EA0D8D62BE101BE1EC2*)__this)->___NextPageParam_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageArray_1_t8FB2AFA18B020CDB5F979EA0D8D62BE101BE1EC2*)__this)->___NextPageParam_6), (void*)L_13);
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
// System.Void Pico.Platform.Models.LaunchFriendResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchFriendResult__ctor_mCD16C4DDAEEF94E5C022273C4399A3B510D90277 (LaunchFriendResult_t4B8A2C26D6B6DFBD9FC0A966018DAC3DF1BF8370* __this, intptr_t ___obj0, const RuntimeMethod* method) 
{
	{
		// public LaunchFriendResult(IntPtr obj)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// DidCancel = CLIB.ppf_LaunchFriendRequestFlowResult_GetDidCancel(obj);
		intptr_t L_0 = ___obj0;
		bool L_1;
		L_1 = CLIB_ppf_LaunchFriendRequestFlowResult_GetDidCancel_m1AD8347D357CECAC6A55C7AA0246BBE6D6FE39B5(L_0, NULL);
		__this->___DidCancel_0 = L_1;
		// DidSendRequest = CLIB.ppf_LaunchFriendRequestFlowResult_GetDidSendRequest(obj);
		intptr_t L_2 = ___obj0;
		bool L_3;
		L_3 = CLIB_ppf_LaunchFriendRequestFlowResult_GetDidSendRequest_mD10E3D65E746B06F58A2FE322B33423CF4EAF52D(L_2, NULL);
		__this->___DidSendRequest_1 = L_3;
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
// System.Void Pico.Platform.Models.UserRoom::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserRoom__ctor_m3CC17B91ED840F0E6975E674234BCEC7301B9F03 (UserRoom_t79DBE9A132DE86412643A0D29CB6959379090B32* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t4A57578F9001EB8B02745E9305A72B29570F459B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public UserRoom(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// User = new User(CLIB.ppf_UserAndRoom_GetUser(o));
		intptr_t L_0 = ___o0;
		intptr_t L_1;
		L_1 = CLIB_ppf_UserAndRoom_GetUser_m157BC1471B6D1081B397ADBF807AB818348A3A1A(L_0, NULL);
		User_t4A57578F9001EB8B02745E9305A72B29570F459B* L_2 = (User_t4A57578F9001EB8B02745E9305A72B29570F459B*)il2cpp_codegen_object_new(User_t4A57578F9001EB8B02745E9305A72B29570F459B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		User__ctor_m65AB5AB78CA800CFE2E148D87161D5B3F4CA9AEB(L_2, L_1, NULL);
		__this->___User_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___User_0), (void*)L_2);
		// var ptr = CLIB.ppf_UserAndRoom_GetRoom(o);
		intptr_t L_3 = ___o0;
		intptr_t L_4;
		L_4 = CLIB_ppf_UserAndRoom_GetRoom_m2E220803CB16CBE55D79D567E8F3CABE81D83CFE(L_3, NULL);
		V_0 = L_4;
		// if (ptr != IntPtr.Zero)
		intptr_t L_5 = V_0;
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_7;
		L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		// Room = new Room(ptr);
		intptr_t L_8 = V_0;
		Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D* L_9 = (Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D*)il2cpp_codegen_object_new(Room_tCB5DAF5F3558E51C4D23D2288587BD8D19D50E5D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Room__ctor_mA5B401D7DB201287BF39348613A73F88829701F8(L_9, L_8, NULL);
		__this->___Room_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Room_1), (void*)L_9);
	}

IL_0037:
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
// System.Void Pico.Platform.Models.UserRoomList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserRoomList__ctor_m56D5B0A318930E1EBA2BCB233223EC40547F36A1 (UserRoomList_t1356EC457562D614E92DDCE3D99004CB86CC9FD2* __this, intptr_t ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m92B8C781D726B84AF40CDA82917B0701B86B2F91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m30720F96B6848FE93F84FA814959EFB82920CBFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageArray_1__ctor_mC9A4F0DDF161BCD0B98654B9D0EB3BB88C5FEC7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserRoom_t79DBE9A132DE86412643A0D29CB6959379090B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public UserRoomList(IntPtr a)
		MessageArray_1__ctor_mC9A4F0DDF161BCD0B98654B9D0EB3BB88C5FEC7D(__this, MessageArray_1__ctor_mC9A4F0DDF161BCD0B98654B9D0EB3BB88C5FEC7D_RuntimeMethod_var);
		// var count = (int) CLIB.ppf_UserAndRoomArray_GetSize(a);
		intptr_t L_0 = ___a0;
		uintptr_t L_1;
		L_1 = CLIB_ppf_UserAndRoomArray_GetSize_m14CBF59FA42C319C705958304E3FE7FC3DA051F1(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_1, NULL);
		V_0 = L_2;
		// this.Capacity = count;
		int32_t L_3 = V_0;
		List_1_set_Capacity_m30720F96B6848FE93F84FA814959EFB82920CBFF(__this, L_3, List_1_set_Capacity_m30720F96B6848FE93F84FA814959EFB82920CBFF_RuntimeMethod_var);
		// for (int i = 0; i < count; i++)
		V_1 = 0;
		goto IL_0039;
	}

IL_001d:
	{
		// this.Add(new UserRoom(CLIB.ppf_UserAndRoomArray_GetElement(a, (UIntPtr) i)));
		intptr_t L_4 = ___a0;
		int32_t L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_6;
		L_6 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((int64_t)L_5), NULL);
		intptr_t L_7;
		L_7 = CLIB_ppf_UserAndRoomArray_GetElement_m44DDAE8C1E67D78932F86B3892299F30D8992B31(L_4, L_6, NULL);
		UserRoom_t79DBE9A132DE86412643A0D29CB6959379090B32* L_8 = (UserRoom_t79DBE9A132DE86412643A0D29CB6959379090B32*)il2cpp_codegen_object_new(UserRoom_t79DBE9A132DE86412643A0D29CB6959379090B32_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UserRoom__ctor_m3CC17B91ED840F0E6975E674234BCEC7301B9F03(L_8, L_7, NULL);
		List_1_Add_m92B8C781D726B84AF40CDA82917B0701B86B2F91_inline(__this, L_8, List_1_Add_m92B8C781D726B84AF40CDA82917B0701B86B2F91_RuntimeMethod_var);
		// for (int i = 0; i < count; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001d;
		}
	}
	{
		// NextPageParam = CLIB.ppf_UserAndRoomArray_GetNextPageParam(a);
		intptr_t L_12 = ___a0;
		String_t* L_13;
		L_13 = CLIB_ppf_UserAndRoomArray_GetNextPageParam_m30A7410D812231C45E43B5A4747BA8DA1F5A5334(L_12, NULL);
		((MessageArray_1_t785B10FA5D7BE1D6C33B67DD822B88EAEA2F29A3*)__this)->___NextPageParam_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageArray_1_t785B10FA5D7BE1D6C33B67DD822B88EAEA2F29A3*)__this)->___NextPageParam_6), (void*)L_13);
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
// System.Void Pico.Platform.Models.PermissionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionResult__ctor_mEE6A0FB5268F3D3AE70698B36D27CD84ED2F30AF (PermissionResult_t4919C9F18AE6ED16BEED29FD57489D329A0A59ED* __this, intptr_t ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public PermissionResult(IntPtr o)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// int sz = (int) CLIB.ppf_PermissionResult_GetAuthorizedPermissionsSize(o);
		intptr_t L_0 = ___o0;
		uintptr_t L_1;
		L_1 = CLIB_ppf_PermissionResult_GetAuthorizedPermissionsSize_mC0764542BF7D615FDB4203A1016864686BD81440(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_1, NULL);
		V_0 = L_2;
		// AuthorizedPermissions = new string[sz];
		int32_t L_3 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___AuthorizedPermissions_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AuthorizedPermissions_0), (void*)L_4);
		// for (int i = 0; i < sz; i++)
		V_1 = 0;
		goto IL_003b;
	}

IL_0022:
	{
		// AuthorizedPermissions[i] = CLIB.ppf_PermissionResult_GetAuthorizedPermissions(o, (UIntPtr) i);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___AuthorizedPermissions_0;
		int32_t L_6 = V_1;
		intptr_t L_7 = ___o0;
		int32_t L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_9;
		L_9 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((int64_t)L_8), NULL);
		String_t* L_10;
		L_10 = CLIB_ppf_PermissionResult_GetAuthorizedPermissions_m5325AE5103DD3E1072E932AC62F16EC0C6101C14(L_7, L_9, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_10);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (String_t*)L_10);
		// for (int i = 0; i < sz; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003b:
	{
		// for (int i = 0; i < sz; i++)
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
		}
	}
	{
		// AccessToken = CLIB.ppf_PermissionResult_GetAccessToken(o);
		intptr_t L_14 = ___o0;
		String_t* L_15;
		L_15 = CLIB_ppf_PermissionResult_GetAccessToken_m69EA3290A74FEB53F6070AB377C20B2ABC50E1C9(L_14, NULL);
		__this->___AccessToken_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AccessToken_1), (void*)L_15);
		// UserID = CLIB.ppf_PermissionResult_GetUserID(o);
		intptr_t L_16 = ___o0;
		String_t* L_17;
		L_17 = CLIB_ppf_PermissionResult_GetUserID_m985FB5253F45123C7E01E50070663B4DA690CEC8(L_16, NULL);
		__this->___UserID_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UserID_2), (void*)L_17);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
