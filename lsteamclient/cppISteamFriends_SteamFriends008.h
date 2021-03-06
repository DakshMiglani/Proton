#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppISteamFriends_SteamFriends008_GetPersonaName(void *);
extern void cppISteamFriends_SteamFriends008_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends008_GetPersonaState(void *);
extern int cppISteamFriends_SteamFriends008_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends008_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends008_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends008_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends008_GetFriendPersonaName(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends008_GetFriendGamePlayed(void *, CSteamID, FriendGameInfo_t *);
extern const char * cppISteamFriends_SteamFriends008_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends008_HasFriend(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends008_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends008_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends008_GetClanName(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends008_GetClanTag(void *, CSteamID);
extern int cppISteamFriends_SteamFriends008_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends008_GetFriendFromSourceByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends008_IsUserInSource(void *, CSteamID, CSteamID);
extern void cppISteamFriends_SteamFriends008_SetInGameVoiceSpeaking(void *, CSteamID, bool);
extern void cppISteamFriends_SteamFriends008_ActivateGameOverlay(void *, const char *);
extern void cppISteamFriends_SteamFriends008_ActivateGameOverlayToUser(void *, const char *, CSteamID);
extern void cppISteamFriends_SteamFriends008_ActivateGameOverlayToWebPage(void *, const char *);
extern void cppISteamFriends_SteamFriends008_ActivateGameOverlayToStore(void *, AppId_t);
extern void cppISteamFriends_SteamFriends008_SetPlayedWith(void *, CSteamID);
extern void cppISteamFriends_SteamFriends008_ActivateGameOverlayInviteDialog(void *, CSteamID);
extern int cppISteamFriends_SteamFriends008_GetSmallFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends008_GetMediumFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends008_GetLargeFriendAvatar(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends008_RequestUserInformation(void *, CSteamID, bool);
extern SteamAPICall_t cppISteamFriends_SteamFriends008_RequestClanOfficerList(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends008_GetClanOwner(void *, CSteamID);
extern int cppISteamFriends_SteamFriends008_GetClanOfficerCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends008_GetClanOfficerByIndex(void *, CSteamID, int);
extern uint32 cppISteamFriends_SteamFriends008_GetUserRestrictions(void *);
#ifdef __cplusplus
}
#endif
