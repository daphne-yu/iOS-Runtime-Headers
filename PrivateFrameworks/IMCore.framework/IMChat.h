/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSDate, IMAccount, IMHandle, IMMessage, NSMutableArray, NSString, NSMutableSet, NSMutableDictionary, NSArray;

@interface IMChat : NSObject  {
    NSString *_guid;
    NSString *_currentQuery;
    NSString *_identifier;
    IMAccount *_account;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    NSDate *_dateCreated;
    NSDate *_dateModified;
    NSMutableArray *_chatItems;
    NSMutableDictionary *_unfinishedChatItemMap;
    NSArray *_participants;
    NSMutableDictionary *_participantStates;
    id _typingIndicatorTimer;
    IMMessage *_invitationForPendingParticipants;
    NSMutableArray *_messagesPendingJoin;
    NSMutableDictionary *_chatItemsChanged;
    NSMutableDictionary *_messageMap;
    NSMutableDictionary *_chatProperties;
    NSMutableDictionary *_participantProperties;
    int _joinState;
    unsigned char _style;
    unsigned int _numberOfMessagesToKeepLoaded;
    unsigned int _chatItemChangeCount;
    unsigned int _cachedUnreadCount;
    NSMutableSet *_cachedReadMessages;
    unsigned int _cachedFailureCount;
    unsigned int _dbFailedCount;
    unsigned int _dbUnreadCount;
    int _rowIDOfMostRecentFailedMessage;
    void *_context;
    unsigned int _hasBeenConfigured : 1;
    unsigned int _isRefreshing : 1;
    unsigned int _isFirstMessageInvitation : 1;
    unsigned int _wasInvitationHandled : 1;
    unsigned int _didSendAFinishedMessage : 1;
    unsigned int _shouldPostIndividualItemChanges : 1;
    unsigned int _didPostWillChangeNotification : 1;
}

@property unsigned int numberOfMessagesToKeepLoaded;
@property(readonly) NSString * guid;
@property(readonly) IMAccount * account;
@property(readonly) unsigned char chatStyle;
@property(readonly) NSString * chatIdentifier;
@property(readonly) NSString * persistentID;
@property(readonly) unsigned int messageCount;
@property(readonly) unsigned int unreadMessageCount;
@property(readonly) unsigned int messageFailureCount;
@property(readonly) BOOL canHaveMultipleParticipants;
@property(readonly) unsigned int overallChatStatus;
@property(readonly) NSString * roomName;
@property(readonly) NSString * roomNameWithoutSuffix;
@property(readonly) NSDate * dateCreated;
@property(readonly) NSDate * dateModified;
@property(readonly) int joinState;
@property(readonly) BOOL hasUnhandledInvitation;
@property(readonly) NSArray * chatItems;
@property(readonly) IMMessage * lastMessage;
@property(readonly) IMMessage * lastFinishedMessage;
@property(readonly) IMMessage * lastIncomingMessage;
@property(readonly) IMMessage * lastIncomingFinishedMessage;
@property(readonly) NSArray * participants;
@property(retain) IMHandle * recipient;
@property(retain) IMMessage * invitationForPendingParticipants;
@property(setter=_setShouldPostIndividualItemChanges:) BOOL _shouldPostIndividualItemChanges;
@property(readonly) BOOL _shouldRegisterChat;
@property(readonly) BOOL _isRefreshing;
@property void* contextInfo;
@property(readonly) int rowIDOfMostRecentFailedMessage;


- (void)cancelMessage:(id)arg1;
- (void)declineInvitation;
- (void)acceptInvitation;
- (id)recipient;
- (void)setRecipient:(id)arg1;
- (id)participants;
- (id)guid;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)persistentID;
- (void)clear;
- (void)_endLegacyHistoryLoading;
- (void)_beginLegacyHistoryLoading;
- (void)_insertLegacyHistory:(id)arg1;
- (void)_setSearchResultChatItems:(id)arg1;
- (void)_typingIndicatorTimedOut:(id)arg1;
- (void)_setTypingIndicatorTimeout;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned int)arg2;
- (id)_buildLoadQueryForSynchronize;
- (unsigned int)numberOfMessagesToKeepLoaded;
- (void)_trimMessagesLeavingNumber:(unsigned int)arg1;
- (id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 chatItems:(id)arg4 participants:(id)arg5;
- (id)_copyChat;
- (id)dateModified;
- (id)_initWithDictionaryRepresentation:(id)arg1 initialItems:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4;
- (void)addPendingParticipants:(id)arg1;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)_invitePendingParticipants;
- (BOOL)canAddParticipants:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;
- (id)allChatProperties;
- (void)_setChatProperties:(id)arg1;
- (id)_lastMessageChatItem;
- (void)markMessagesAsRead:(id)arg1;
- (void)updateMessage:(id)arg1 flags:(unsigned long long)arg2;
- (BOOL)canSendMessage:(id)arg1;
- (BOOL)hasUnhandledInvitation;
- (id)roomNameWithoutSuffix;
- (void)setRoomName:(id)arg1;
- (unsigned int)overallChatStatus;
- (void)_showErrorMessage:(id)arg1;
- (void)_participant:(id)arg1 statusChanged:(int)arg2;
- (void)_handleMessageGUIDDeletions:(id)arg1;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_recomputeOverallChatStatusQuietly:(BOOL)arg1;
- (void)mark;
- (id)lastIncomingFinishedMessage;
- (id)lastIncomingMessage;
- (int)rowIDOfMostRecentFailedMessage;
- (void)_setRowIDOfMostRecentFailedMessage:(int)arg1;
- (BOOL)shouldAppendDatestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (BOOL)shouldAppendTimestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (BOOL)_doesChatItemContainTimestamp:(id)arg1;
- (void)_insertHistoricalChatItems:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4;
- (void)_fixLastReceipientMessage;
- (void)_fixHeader;
- (void)_buildChatItemForDecidingHandleWentOffline:(id)arg1;
- (void)_removeChatItem:(id)arg1;
- (unsigned int)_insertChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)_shouldAnnouncePeopleJoin;
- (id)_IMUnfinishedMapSenderGUIDToRemove:(id)arg1 requireFinished:(BOOL)arg2;
- (void)_setDBFailedCount:(unsigned int)arg1;
- (void)_setDBUnreadCount:(unsigned int)arg1;
- (BOOL)_shouldRegisterChat;
- (void)_setupObservation;
- (void)_setShouldPostIndividualItemChanges:(BOOL)arg1;
- (BOOL)_shouldPostIndividualItemChanges;
- (void)_setIsRefreshing:(BOOL)arg1;
- (BOOL)_isRefreshing;
- (BOOL)_sanityCheckAccounts;
- (void)setInvitationForPendingParticipants:(id)arg1;
- (void)_inviteParticipants:(id)arg1 reason:(id)arg2;
- (id)invitationForPendingParticipants;
- (id)_pendingParticipants;
- (id)participantsWithState:(unsigned int)arg1;
- (BOOL)canAddParticipant:(id)arg1;
- (void)_clearTypingIndicatorTimeout;
- (BOOL)_buildChatItemForNewRecipient:(id)arg1 oldRecipient:(id)arg2 date:(id)arg3 atIndex:(int)arg4;
- (void)_remapHandle:(id)arg1 toHandle:(id)arg2;
- (void)_addParticipant:(id)arg1;
- (void)setRecipient:(id)arg1 locally:(BOOL)arg2;
- (void)_setAccount:(id)arg1 locally:(BOOL)arg2;
- (id)allPropertiesOfParticipant:(id)arg1;
- (void)_clearUnreadCount;
- (id)_messageChatItems;
- (void)_markMessagesAsRead:(id)arg1;
- (BOOL)_handleIncomingMessage:(id)arg1;
- (void)_setTimerForReadMessageCache;
- (void)_cacheReadMessageGUID:(id)arg1;
- (void)__clearReadMessageCache;
- (BOOL)canSendTransfer:(id)arg1;
- (void)_updateHeaderChatItem;
- (void)_setJoinState:(int)arg1;
- (int)joinState;
- (void)_clearCachedIdentifier;
- (void)_buildChatItemForOverallChatStatusFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)_buildChatItemForErrorMessage:(id)arg1;
- (void)_setParticipantState:(unsigned int)arg1 forHandle:(id)arg2 quietly:(BOOL)arg3;
- (void)_sendMessage:(id)arg1 adjustingSender:(BOOL)arg2;
- (void)_setJoinState:(int)arg1 quietly:(BOOL)arg2;
- (void)_clearIncomingTypingIndicators;
- (BOOL)_isDuplicate:(id)arg1;
- (id)_chatItemForGUID:(id)arg1;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_buildChatItemForParticipantState:(unsigned int)arg1 handle:(id)arg2;
- (unsigned int)stateForParticipant:(id)arg1;
- (void)_buildChatItemForDisconnectOrLogout;
- (void)_handleDeliveredCommand:(id)arg1;
- (void)_handleIncomingCommand:(id)arg1;
- (id)roomName;
- (void)_cleanupTimestamps;
- (BOOL)canDeleteChatItem:(id)arg1;
- (void)_fixLastStatusMessageIfNecessary;
- (void)_trimMessagesAsNeeded;
- (void)_removeInitialTypingIndicator;
- (void)_appendChatItem:(id)arg1;
- (id)_newInitialTypingIndicatorChatItem;
- (BOOL)_shouldDisplayInitialTypingIndicator;
- (id)_newHeaderChatItemWithDate:(id)arg1 account:(id)arg2;
- (void)_replaceChatItem:(id)arg1 andTimestamp:(BOOL)arg2 withChatItem:(id)arg3;
- (void)_removeChatItem:(id)arg1 andTimestamp:(BOOL)arg2;
- (void)_replaceChatItem:(id)arg1 withChatItem:(id)arg2;
- (BOOL)shouldInsertChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_endChatItemChanges;
- (void)_mapChatItem:(id)arg1;
- (id)_timeStampForChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_postChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_dateStampForChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)processChatItem:(id)arg1;
- (void)_unmapChatItem:(id)arg1;
- (void)_beginChatItemChanges;
- (void)_postWillChangeIfNecessary;
- (void)_updateTypingIndicatorTimeout;
- (unsigned int)_recalculateCachedFailedCount;
- (unsigned int)_recalculateCachedUnreadCount;
- (unsigned int)messageFailureCount;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 chatItems:(id)arg5 participants:(id)arg6;
- (void)_initialize;
- (void)_updateUnreadCount;
- (void)_buildInitialChatItems:(id)arg1;
- (id)chatIdentifier;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (BOOL)canHaveMultipleParticipants;
- (void)_accountControllerUpdated:(id)arg1;
- (void)_daemonAlive:(id)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_accountLoggedOut:(id)arg1;
- (void)_updateFailedCount;
- (id)messageForGUID:(id)arg1;
- (BOOL)_hasCommunicatedOnService:(id)arg1;
- (id)lastMessage;
- (BOOL)sendDowngradeNotificationTo:(id)arg1;
- (void)_setAccount:(id)arg1;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned int)arg2 loadImmediately:(BOOL)arg3;
- (BOOL)deleteChatItem:(id)arg1;
- (BOOL)deleteChatItems:(id)arg1;
- (id)chatItemForMessage:(id)arg1;
- (BOOL)deleteAllHistory;
- (void)leave;
- (unsigned char)chatStyle;
- (id)valueForChatProperty:(id)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (id)chatItems;
- (unsigned int)messageCount;
- (void)markMessageAsRead:(id)arg1;
- (unsigned int)unreadMessageCount;
- (id)lastFinishedMessage;
- (void)setNumberOfMessagesToKeepLoaded:(unsigned int)arg1;
- (void)updateMessage:(id)arg1;
- (void)markAllMessagesAsRead;
- (void)sendMessage:(id)arg1;
- (id)dateCreated;
- (id)account;
- (void)join;
- (void*)contextInfo;
- (void)setContextInfo:(void*)arg1;
- (void)__ck_targetToService:(id)arg1;
- (BOOL)__ck_hasDowngradeMarkers;
- (BOOL)__ck_hasValidAccountForService:(id)arg1;
- (BOOL)__ck_accountIsOperational:(id)arg1 forService:(id)arg2;
- (void)__ck_setAndIncrementDowngradeMarkersForManual:(BOOL)arg1;
- (void)__ck_setPreviousAccount:(id)arg1 forService:(id)arg2;
- (id)__ck_previousAccountForService:(id)arg1;
- (void)__ck_clearDowngradeMarkers;
- (id)__ck_placeholderDate;

@end
