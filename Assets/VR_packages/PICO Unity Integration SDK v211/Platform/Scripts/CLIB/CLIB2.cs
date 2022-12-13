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
using System.Collections.Generic;

namespace Pico.Platform
{
    public partial class CLIB
    {
        public static ulong ppf_Achievements_GetProgressByName(string[] names)
        {
            var namesHandle = new PtrArray(names);
            var result = ppf_Achievements_GetProgressByName(namesHandle.a, names.Length);
            namesHandle.Free();
            return result;
        }

        public static ulong ppf_Achievements_GetDefinitionsByName(string[] names)
        {
            var namesHandle = new PtrArray(names);
            var result = ppf_Achievements_GetDefinitionsByName(namesHandle.a, names.Length);
            namesHandle.Free();
            return result;
        }

        public static ulong ppf_IAP_GetProductsBySKU(string[] names)
        {
            var namesHandle = new PtrArray(names);
            var result = ppf_IAP_GetProductsBySKU(namesHandle.a, names.Length);
            namesHandle.Free();
            return result;
        }

        public static ulong ppf_Leaderboard_GetEntriesByIds(string leaderboardName, int pageSize, int pageIdx, LeaderboardStartAt startAt, string[] userIDs)
        {
            var userIds = new PtrArray(userIDs);
            var result = ppf_Leaderboard_GetEntriesByIds(leaderboardName, pageSize, pageIdx, startAt, userIds.a, (uint)userIDs.Length);
            userIds.Free();
            return result;
        }

        public static ulong ppf_User_RequestUserPermissions(string[] permissions)
        {
            var ptrs = new PtrArray(permissions);
            var result = ppf_User_RequestUserPermissions(ptrs.a, permissions.Length);
            ptrs.Free();
            return result;
        }

        public static ulong ppf_Presence_SendInvites(string[] userIDs)
        {
            var ptrs = new PtrArray(userIDs);
            var result = ppf_Presence_SendInvites(ptrs.a, (uint)userIDs.Length);
            ptrs.Free();
            return result;
        }

        public static Dictionary<string, string> DataStoreFromNative(IntPtr ppfDataStore)
        {
            var map = new Dictionary<string, string>();
            var size = (int)ppf_DataStore_GetNumKeys(ppfDataStore);
            for (var i = 0; i < size; i++)
            {
                string key = ppf_DataStore_GetKey(ppfDataStore, i);
                map[key] = ppf_DataStore_GetValue(ppfDataStore, key);
            }

            return map;
        }
    }
}