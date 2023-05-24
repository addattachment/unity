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

using Pico.Platform.Models;
using System;
using UnityEngine;

namespace Pico.Platform
{
    /**
     * \ingroup Platform
     */
    public static class PresenceService
    {
        /// <summary>
        /// Gets a list of invitable users for the current logged-in user.
        /// @note Currently, only invitable friends will be returned.
        /// </summary>
        /// <param name="options">Defines whether to return the users suggested being invited.</param>
        /// <returns>
        /// A list of friends that can be invited to the current destination.
        /// </returns>
        public static Task<UserList> GetInvitableUsers(InviteOptions options)
        {
            if (!CoreService.Initialized)
            {
                Debug.LogError(CoreService.UninitializedError);
                return null;
            }

            return new Task<UserList>(CLIB.ppf_Presence_GetInvitableUsers((IntPtr)options));
        }

        /// <summary>
        /// Gets a list of invited users for the current logged-in user.
        /// </summary>
        /// <returns>
        /// A list of users that have been invited.
        /// </returns>
        public static Task<ApplicationInviteList> GetSentInvites()
        {
            if (!CoreService.Initialized)
            {
                Debug.LogError(CoreService.UninitializedError);
                return null;
            }

            return new Task<ApplicationInviteList>(CLIB.ppf_Presence_GetSentInvites());
        }

        /// <summary>
        /// Get the next page of invited users.
        /// </summary>
        /// <param name="list">The current page of invited users.</param>
        /// <returns>The next page of invited users.</returns>
        public static Task<ApplicationInviteList> GetNextApplicationInviteListPage(ApplicationInviteList list)
        {
            if (!CoreService.Initialized)
            {
                Debug.LogError(CoreService.UninitializedError);
                return null;
            }

            if (!list.HasNextPage)
            {
                Debug.LogWarning("GetNextApplicationInviteListPage: List has no next page");
                return null;
            }

            if (!String.IsNullOrEmpty(list.NextPageParam))
            {
                Debug.LogWarning("GetNextApplicationInviteListPage: list.NextPageParam is empty");
                return null;
            }

            return new Task<ApplicationInviteList>(CLIB.ppf_Presence_GetNextApplicationInviteArrayPage(list.NextPageParam));
        }

        /// <summary>
        /// Invites specified users to the current destination.
        /// </summary>
        /// <param name="userIds">The IDs of the users to invite.</param>
        public static Task<SendInvitesResult> SendInvites(string[] userIds)
        {
            if (!CoreService.Initialized)
            {
                Debug.LogError(CoreService.UninitializedError);
                return null;
            }

            if (userIds == null)
                userIds = Array.Empty<string>();
            return new Task<SendInvitesResult>(CLIB.ppf_Presence_SendInvites(userIds));
        }

        /// <summary>Sets presence data for the current logged-in user.</summary>
        /// <param name="options">Presence-related options, including:
        /// * `DestinationApiName`: string, the API name of the destination.
        /// * `IsJoinable`: bool,
        ///   * `true`: joinable
        ///   * `false`: not joinable
        /// * `LobbySessionId`: string, a lobby session ID identifies a user group or team. Users with the same lobby session ID can play together or form a team in a game.
        /// * `MatchSessionId`: string, a match session ID identifies all users within a same destination, such as a map or a level. Users with different lobby session IDs will have the same match session ID when playing the same match.
        /// * `Extra`: string, extra presence data defined by the developer.
        /// </param>
        public static Task Set(PresenceOptions options)
        {
            if (!CoreService.Initialized)
            {
                Debug.LogError(CoreService.UninitializedError);
                return null;
            }

            return new Task(CLIB.ppf_Presence_Set((IntPtr)options));
        }

        /// <summary>
        /// Replaces the current logged-in user's destination with the provided one.
        /// @note Other presence parameter settings will remain the same.
        /// </summary>
        /// <param name="apiName">The API name of the new destination.</param>
        public static Task SetDestination(string apiName)
        {
            if (!CoreService.Initialized)
            {
                Debug.LogError(CoreService.UninitializedError);
                return null;
            }

            return new Task(CLIB.ppf_Presence_SetDestination(apiName));
        }

        /// <summary>Sets whether the current logged-in user is joinable.
        /// @note Other presence parameter settings will remain the same. If the user's destination or session
        /// ID has not been set, the user cannot be set as joinable.</summary>
        /// <param name="joinable">Defines whether the user is joinable:
        /// * `true`: joinable
        /// * `false`: not joinable
        /// </param>
        public static Task SetIsJoinable(bool joinable)
        {
            if (!CoreService.Initialized)
            {
                Debug.LogError(CoreService.UninitializedError);
                return null;
            }

            return new Task(CLIB.ppf_Presence_SetIsJoinable(joinable));
        }

        /// <summary>
        /// Replaces the current logged-in user's lobby session ID with the provided one.
        /// @note Other presence parameter settings will remain the same.
        /// </summary>
        /// <param name="lsId">The new lobby session ID.</param>
        public static Task SetLobbySession(string lsId)
        {
            if (!CoreService.Initialized)
            {
                Debug.LogError(CoreService.UninitializedError);
                return null;
            }

            return new Task(CLIB.ppf_Presence_SetLobbySession(lsId));
        }

        /// <summary>
        /// Replaces the current logged-in user's match session ID with the provided one.
        /// @note  Other presence parameter settings will remain the same.
        /// </summary>
        /// <param name="msId">The new match session ID.</param>
        public static Task SetMatchSession(string msId)
        {
            if (!CoreService.Initialized)
            {
                Debug.LogError(CoreService.UninitializedError);
                return null;
            }

            return new Task(CLIB.ppf_Presence_SetMatchSession(msId));
        }

        /// <summary>
        /// Sets extra presence data for the current logged-in user.
        /// </summary>
        /// <param name="extra">The extra presence data, which is defined by the developer and will be returned in the user's presence information.</param>
        public static Task SetExtra(string extra)
        {
            if (!CoreService.Initialized)
            {
                Debug.LogError(CoreService.UninitializedError);
                return null;
            }

            return new Task(CLIB.ppf_Presence_SetExtra(extra));
        }

        /// <summary>
        /// Clears presence data for the current logged-in user.
        /// @note You need to clear a user's presence data when the user exits your app, leaves a specific destination within the app, or does not want others to see their destination and status.
        /// </summary>
        public static Task Clear()
        {
            if (!CoreService.Initialized)
            {
                Debug.LogError(CoreService.UninitializedError);
                return null;
            }

            return new Task(CLIB.ppf_Presence_Clear());
        }
    }

    public class PresenceOptions
    {
        public PresenceOptions()
        {
            Handle = CLIB.ppf_PresenceOptions_Create();
        }

        /// <summary>
        /// Sets a destination for the current logged-in user.
        /// </summary>
        /// <param name="value">The API name of the destination.</param>
        public void SetDestinationApiName(string value)
        {
            CLIB.ppf_PresenceOptions_SetDestinationApiName(Handle, value);
        }

        /// <summary>
        /// Sets whether the current logged-in user is joinable.
        /// </summary>
        /// <param name="value">
        /// * `true`: joinable
        /// * `false`: not joinable
        /// </param>
        public void SetIsJoinable(bool value)
        {
            CLIB.ppf_PresenceOptions_SetIsJoinable(Handle, value);
        }

        /// <summary>
        /// Sets a lobby session ID for the current logged-in user.
        /// </summary>
        /// <param name="value">The lobby session ID.</param>
        public void SetLobbySessionId(string value)
        {
            CLIB.ppf_PresenceOptions_SetLobbySessionId(Handle, value);
        }

        /// <summary>
        /// Sets a match session ID for the current logged-in user.
        /// </summary>
        /// <param name="value">The match session ID.</param>
        public void SetMatchSessionId(string value)
        {
            CLIB.ppf_PresenceOptions_SetMatchSessionId(Handle, value);
        }

        /// <summary>
        /// Sets extra presence data for the current logged-in user.
        /// </summary>
        /// <param name="value">Extra presence data defined by the developer.</param>
        public void SetExtra(string value)
        {
            CLIB.ppf_PresenceOptions_SetExtra(Handle, value);
        }


        /// For passing to native C
        public static explicit operator IntPtr(PresenceOptions options)
        {
            return options != null ? options.Handle : IntPtr.Zero;
        }

        ~PresenceOptions()
        {
            CLIB.ppf_PresenceOptions_Destroy(Handle);
        }

        IntPtr Handle;
    }

    public class InviteOptions
    {
        public InviteOptions()
        {
            Handle = CLIB.ppf_InviteOptions_Create();
        }


        public void AddSuggestedUser(string ele)
        {
            CLIB.ppf_InviteOptions_AddSuggestedUser(Handle, ele);
        }

        public void ClearSuggestedUsers()
        {
            CLIB.ppf_InviteOptions_ClearSuggestedUsers(Handle);
        }


        /// For passing to native C
        public static explicit operator IntPtr(InviteOptions options)
        {
            return options != null ? options.Handle : IntPtr.Zero;
        }

        ~InviteOptions()
        {
            CLIB.ppf_InviteOptions_Destroy(Handle);
        }

        IntPtr Handle;
    }
}