/*******************************************************************************
Copyright © 2015-2022 Pico Technology Co., Ltd.All rights reserved.

NOTICE：All information contained herein is, and remains the property of
Pico Technology Co., Ltd. The intellectual and technical concepts
contained herein are proprietary to Pico Technology Co., Ltd. and may be
covered by patents, patents in process, and are protected by trade secret or
copyright law. Dissemination of this information or reproduction of this
material is strictly forbidden unless prior written permission is obtained from
Pico Technology Co., Ltd.
*******************************************************************************/

using System;

namespace Pico.Platform.Models
{
    public class RtcBinaryMessageReceived
    {
        public readonly string UserId;
        public readonly byte[] Data;
        public readonly string RoomId;

        public RtcBinaryMessageReceived(IntPtr o)
        {
            UserId = CLIB.ppf_RtcBinaryMessageReceived_GetUserId(o);
            var ptr = CLIB.ppf_RtcBinaryMessageReceived_GetData(o);
            var sz = CLIB.ppf_RtcBinaryMessageReceived_GetLength(o);
            Data = MarshalUtil.ByteArrayFromNative(ptr, (uint)sz);
            RoomId = CLIB.ppf_RtcBinaryMessageReceived_GetRoomId(o);
        }
    }

    public class RtcMessageSendResult
    {
        public readonly long MessageId;
        public readonly int Error;
        public readonly string RoomId;

        public RtcMessageSendResult(IntPtr o)
        {
            MessageId = CLIB.ppf_RtcMessageSendResult_GetMessageId(o);
            Error = CLIB.ppf_RtcMessageSendResult_GetError(o);
            RoomId = CLIB.ppf_RtcMessageSendResult_GetRoomId(o);
        }
    }

    public class RtcUserUnPublishInfo
    {
        public readonly string UserId;
        public readonly RtcMediaStreamType MediaStreamType;
        public readonly RtcStreamRemoveReason Reason;
        public readonly string RoomId;

        public RtcUserUnPublishInfo(IntPtr o)
        {
            UserId = CLIB.ppf_RtcUserUnPublishInfo_GetUserId(o);
            MediaStreamType = CLIB.ppf_RtcUserUnPublishInfo_GetMediaStreamType(o);
            Reason = CLIB.ppf_RtcUserUnPublishInfo_GetReason(o);
            RoomId = CLIB.ppf_RtcUserUnPublishInfo_GetRoomId(o);
        }
    }

    public class RtcUserPublishInfo
    {
        public readonly string UserId;
        public readonly RtcMediaStreamType MediaStreamType;
        public readonly string RoomId;

        public RtcUserPublishInfo(IntPtr o)
        {
            UserId = CLIB.ppf_RtcUserPublishInfo_GetUserId(o);
            MediaStreamType = CLIB.ppf_RtcUserPublishInfo_GetMediaStreamType(o);
            RoomId = CLIB.ppf_RtcUserPublishInfo_GetRoomId(o);
        }
    }

    public class RtcRoomMessageReceived
    {
        public readonly string UserId;
        public readonly string Message;
        public readonly string RoomId;

        public RtcRoomMessageReceived(IntPtr o)
        {
            UserId = CLIB.ppf_RtcRoomMessageReceived_GetUserId(o);
            Message = CLIB.ppf_RtcRoomMessageReceived_GetMessage(o);
            RoomId = CLIB.ppf_RtcRoomMessageReceived_GetRoomId(o);
        }
    }

    public class RtcUserMessageReceived
    {
        public readonly string UserId;
        public readonly string Message;
        public readonly string RoomId;

        public RtcUserMessageReceived(IntPtr o)
        {
            UserId = CLIB.ppf_RtcUserMessageReceived_GetUserId(o);
            Message = CLIB.ppf_RtcUserMessageReceived_GetMessage(o);
            RoomId = CLIB.ppf_RtcUserMessageReceived_GetRoomId(o);
        }
    }

    public class RtcStreamSyncInfo
    {
        public readonly RtcRemoteStreamKey StreamKey;
        public readonly RtcSyncInfoStreamType StreamType;
        public readonly byte[] Data;

        public RtcStreamSyncInfo(IntPtr o)
        {
            StreamKey = new RtcRemoteStreamKey(CLIB.ppf_RtcStreamSyncInfo_GetStreamKey(o));
            StreamType = CLIB.ppf_RtcStreamSyncInfo_GetStreamType(o);
            var ptr = CLIB.ppf_RtcStreamSyncInfo_GetData(o);
            var sz = CLIB.ppf_RtcStreamSyncInfo_GetLength(o);
            Data = MarshalUtil.ByteArrayFromNative(ptr, (uint)sz);
        }
    }

    public class RtcAudioPropertyInfo
    {
        public readonly int Volume;

        public RtcAudioPropertyInfo(IntPtr o)
        {
            Volume = CLIB.ppf_RtcAudioPropertyInfo_GetVolume(o);
        }
    }

    public class RtcJoinRoomResult
    {
        public readonly string RoomId;
        public readonly string UserId;
        public readonly int ErrorCode;
        public readonly int Elapsed;
        public readonly RtcJoinRoomType JoinType;

        public RtcJoinRoomResult(IntPtr o)
        {
            RoomId = CLIB.ppf_RtcJoinRoomResult_GetRoomId(o);
            UserId = CLIB.ppf_RtcJoinRoomResult_GetUserId(o);
            ErrorCode = CLIB.ppf_RtcJoinRoomResult_GetErrorCode(o);
            Elapsed = CLIB.ppf_RtcJoinRoomResult_GetElapsed(o);
            JoinType = CLIB.ppf_RtcJoinRoomResult_GetJoinType(o);
        }
    }

    public class RtcLeaveRoomResult
    {
        public readonly string RoomId;

        public RtcLeaveRoomResult(IntPtr o)
        {
            RoomId = CLIB.ppf_RtcLeaveRoomResult_GetRoomId(o);
        }
    }

    public class RtcLocalAudioPropertiesInfo
    {
        public readonly RtcStreamIndex StreamIndex;
        public readonly RtcAudioPropertyInfo AudioPropertyInfo;

        public RtcLocalAudioPropertiesInfo(IntPtr o)
        {
            StreamIndex = CLIB.ppf_RtcLocalAudioPropertiesInfo_GetStreamIndex(o);
            AudioPropertyInfo = new RtcAudioPropertyInfo(CLIB.ppf_RtcLocalAudioPropertiesInfo_GetAudioPropertyInfo(o));
        }
    }

    public class RtcLocalAudioPropertiesReport
    {
        public readonly RtcLocalAudioPropertiesInfo[] AudioPropertiesInfos;

        public RtcLocalAudioPropertiesReport(IntPtr o)
        {
            ulong total = (ulong)CLIB.ppf_RtcLocalAudioPropertiesReport_GetAudioPropertiesInfosSize(o);
            AudioPropertiesInfos = new RtcLocalAudioPropertiesInfo[total];
            for (uint i = 0; i < total; i++)
            {
                AudioPropertiesInfos[i] = new RtcLocalAudioPropertiesInfo(CLIB.ppf_RtcLocalAudioPropertiesReport_GetAudioPropertiesInfos(o, (UIntPtr)i));
            }
        }
    }

    public class RtcMediaDeviceChangeInfo
    {
        public readonly string DeviceId;
        public readonly RtcMediaDeviceType DeviceType;
        public readonly RtcMediaDeviceState DeviceState;
        public readonly RtcMediaDeviceError DeviceError;

        public RtcMediaDeviceChangeInfo(IntPtr o)
        {
            DeviceId = CLIB.ppf_RtcMediaDeviceChangeInfo_GetDeviceId(o);
            DeviceType = CLIB.ppf_RtcMediaDeviceChangeInfo_GetDeviceType(o);
            DeviceState = CLIB.ppf_RtcMediaDeviceChangeInfo_GetDeviceState(o);
            DeviceError = CLIB.ppf_RtcMediaDeviceChangeInfo_GetDeviceError(o);
        }
    }

    public class RtcMuteInfo
    {
        public readonly string UserId;
        public readonly RtcMuteState MuteState;

        public RtcMuteInfo(IntPtr o)
        {
            UserId = CLIB.ppf_RtcMuteInfo_GetUserId(o);
            MuteState = CLIB.ppf_RtcMuteInfo_GetMuteState(o);
        }
    }

    public class RtcRemoteAudioPropertiesInfo
    {
        public readonly RtcRemoteStreamKey StreamKey;
        public readonly RtcAudioPropertyInfo AudioPropertiesInfo;

        public RtcRemoteAudioPropertiesInfo(IntPtr o)
        {
            StreamKey = new RtcRemoteStreamKey(CLIB.ppf_RtcRemoteAudioPropertiesInfo_GetStreamKey(o));
            AudioPropertiesInfo = new RtcAudioPropertyInfo(CLIB.ppf_RtcRemoteAudioPropertiesInfo_GetAudioPropertiesInfo(o));
        }
    }

    public class RtcRemoteAudioPropertiesReport
    {
        public readonly RtcRemoteAudioPropertiesInfo[] AudioPropertiesInfos;
        public readonly int TotalRemoteVolume;

        public RtcRemoteAudioPropertiesReport(IntPtr o)
        {
            AudioPropertiesInfos = new RtcRemoteAudioPropertiesInfo[(int)CLIB.ppf_RtcRemoteAudioPropertiesReport_GetAudioPropertiesInfosSize(o)];
            for (uint i = 0; i < AudioPropertiesInfos.Length; i++)
            {
                AudioPropertiesInfos[i] = new RtcRemoteAudioPropertiesInfo(CLIB.ppf_RtcRemoteAudioPropertiesReport_GetAudioPropertiesInfos(o, (UIntPtr)i));
            }

            TotalRemoteVolume = CLIB.ppf_RtcRemoteAudioPropertiesReport_GetTotalRemoteVolume(o);
        }
    }

    public class RtcRemoteStreamKey
    {
        public readonly string RoomId;
        public readonly string UserId;
        public readonly RtcStreamIndex RtcStreamIndex;

        public RtcRemoteStreamKey(IntPtr o)
        {
            RoomId = CLIB.ppf_RtcRemoteStreamKey_GetRoomId(o);
            UserId = CLIB.ppf_RtcRemoteStreamKey_GetUserId(o);
            RtcStreamIndex = CLIB.ppf_RtcRemoteStreamKey_GetStreamIndex(o);
        }
    }

    public class RtcRoomError
    {
        public readonly int Code;
        public readonly string RoomId;

        public RtcRoomError(IntPtr o)
        {
            Code = CLIB.ppf_RtcRoomError_GetCode(o);
            RoomId = CLIB.ppf_RtcRoomError_GetRoomId(o);
        }
    }

    public class RtcRoomStats
    {
        public readonly int TotalDuration;
        public readonly int UserCount;
        public readonly string RoomId;

        public RtcRoomStats(IntPtr o)
        {
            TotalDuration = CLIB.ppf_RtcRoomStats_GetTotalDuration(o);
            UserCount = CLIB.ppf_RtcRoomStats_GetUserCount(o);
            RoomId = CLIB.ppf_RtcRoomStats_GetRoomId(o);
        }
    }

    public class RtcRoomWarn
    {
        public readonly int Code;
        public readonly string RoomId;

        public RtcRoomWarn(IntPtr o)
        {
            Code = CLIB.ppf_RtcRoomWarn_GetCode(o);
            RoomId = CLIB.ppf_RtcRoomWarn_GetRoomId(o);
        }
    }

    public class RtcUserJoinInfo
    {
        public readonly string UserId;
        public readonly string UserExtra;
        public readonly int Elapsed;
        public readonly string RoomId;

        public RtcUserJoinInfo(IntPtr o)
        {
            UserId = CLIB.ppf_RtcUserJoinInfo_GetUserId(o);
            UserExtra = CLIB.ppf_RtcUserJoinInfo_GetUserExtra(o);
            Elapsed = CLIB.ppf_RtcUserJoinInfo_GetElapsed(o);
            RoomId = CLIB.ppf_RtcUserJoinInfo_GetRoomId(o);
        }
    }

    public class RtcUserLeaveInfo
    {
        public readonly string UserId;
        public readonly RtcUserLeaveReasonType OfflineReason;
        public readonly string RoomId;

        public RtcUserLeaveInfo(IntPtr o)
        {
            UserId = CLIB.ppf_RtcUserLeaveInfo_GetUserId(o);
            OfflineReason = CLIB.ppf_RtcUserLeaveInfo_GetOfflineReason(o);
            RoomId = CLIB.ppf_RtcUserLeaveInfo_GetRoomId(o);
        }
    }
}