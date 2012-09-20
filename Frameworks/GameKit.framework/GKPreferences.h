/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKPreferences : NSObject  {
    BOOL _HTTPShouldUsePipelining;
    unsigned int _maxDefaultPlayersP2P;
    unsigned int _maxDefaultPlayersHosted;
    unsigned int _maxDefaultPlayersTurnBased;
    unsigned int _maxDefaultGameStateSizeTurnBasedd;
    BOOL __shouldSynchronizeOnNextRead;
}

@property int environment;
@property(retain) NSString * storeBagURL;
@property BOOL ignoreSandbox;
@property BOOL allowUnsignedBag;
@property BOOL useTestProtocols;
@property(getter=isAddingFriendsRestricted,readonly) BOOL addingFriendsRestricted;
@property(getter=isMultiplayerGamingRestricted,readonly) BOOL multiplayerGamingRestricted;
@property(getter=isAppInstallationRestricted,readonly) BOOL appInstallationRestricted;
@property(getter=isAccountModificationRestricted,readonly) BOOL accountModificationRestricted;
@property(getter=isGameCenterRestricted,readonly) BOOL gameCenterRestricted;
@property double terminationInterval;
@property double garbageCollectionInterval;
@property double minimumCacheTTL;
@property double cacheTTLOverride;
@property double operationTimeout;
@property double operationRetryDelay;
@property unsigned int operationRetryCount;
@property(getter=isNotificationCenterEnabled) BOOL notificationCenterEnabled;
@property BOOL notificationBadgesEnabled;
@property BOOL notificationSoundsEnabled;
@property BOOL notificationAlertsEnabled;
@property BOOL verboseLogging;
@property unsigned long logFilter;
@property BOOL forceRelay;
@property BOOL preemptiveRelay;
@property int pushEnvironment;
@property int pipeliningSetting;
@property BOOL HTTPShouldUsePipelining;
@property unsigned int maxPlayersP2P;
@property unsigned int maxPlayersHosted;
@property unsigned int maxPlayersTurnBased;
@property unsigned int maxDefaultPlayersP2P;
@property unsigned int maxDefaultPlayersHosted;
@property unsigned int maxDefaultPlayersTurnBased;
@property unsigned int maxGameStateSizeTurnBased;
@property unsigned int maxDefaultGameStateSizeTurnBased;
@property BOOL useInternalHeader;
@property(readonly) BOOL isStoreDemoModeEnabled;
@property BOOL shouldAnnotateImageUsage;
@property BOOL shouldTrackAtlasImageUsage;
@property BOOL shouldUseTestIcons;
@property BOOL shouldLinkPlayerToICloud;
@property BOOL shouldLinkPlayerToTwitter;
@property BOOL shouldLinkPlayerToFacebook;
@property(readonly) BOOL shouldDisallowInvitesFromStrangers;
@property BOOL shouldAddPlayerInfoToAddressBook;
@property BOOL _shouldSynchronizeOnNextRead;

+ (id)hostNameForEnvironment:(int)arg1;
+ (id)sharedPreferences;

- (void)setShouldAddPlayerInfoToAddressBook:(BOOL)arg1;
- (BOOL)shouldAddPlayerInfoToAddressBook;
- (BOOL)shouldDisallowInvitesFromStrangers;
- (void)setShouldLinkPlayerToFacebook:(BOOL)arg1;
- (BOOL)shouldLinkPlayerToFacebook;
- (void)setShouldLinkPlayerToTwitter:(BOOL)arg1;
- (BOOL)shouldLinkPlayerToTwitter;
- (void)setShouldLinkPlayerToICloud:(BOOL)arg1;
- (BOOL)shouldLinkPlayerToICloud;
- (void)setShouldUseTestIcons:(BOOL)arg1;
- (BOOL)shouldUseTestIcons;
- (void)setShouldTrackAtlasImageUsage:(BOOL)arg1;
- (BOOL)shouldTrackAtlasImageUsage;
- (void)setShouldAnnotateImageUsage:(BOOL)arg1;
- (void)setCacheTTLOverride:(double)arg1;
- (double)cacheTTLOverride;
- (void)setMinimumCacheTTL:(double)arg1;
- (void)setGarbageCollectionInterval:(double)arg1;
- (double)garbageCollectionInterval;
- (void)setTerminationInterval:(double)arg1;
- (double)terminationInterval;
- (void)setUseInternalHeader:(BOOL)arg1;
- (void)setMaxGameStateSizeTurnBased:(unsigned int)arg1;
- (unsigned int)maxGameStateSizeTurnBased;
- (void)setMaxPlayersTurnBased:(unsigned int)arg1;
- (unsigned int)maxPlayersTurnBased;
- (void)setMaxPlayersHosted:(unsigned int)arg1;
- (unsigned int)maxPlayersHosted;
- (void)setMaxPlayersP2P:(unsigned int)arg1;
- (unsigned int)maxPlayersP2P;
- (void)setPipeliningSetting:(int)arg1;
- (int)pipeliningSetting;
- (void)setPushEnvironment:(int)arg1;
- (int)pushEnvironment;
- (void)setPreemptiveRelay:(BOOL)arg1;
- (BOOL)preemptiveRelay;
- (void)setForceRelay:(BOOL)arg1;
- (BOOL)forceRelay;
- (void)setLogFilter:(unsigned long)arg1;
- (void)setVerboseLogging:(BOOL)arg1;
- (BOOL)verboseLogging;
- (void)setOperationRetryCount:(unsigned int)arg1;
- (unsigned int)operationRetryCount;
- (void)setOperationRetryDelay:(double)arg1;
- (double)operationRetryDelay;
- (void)setOperationTimeout:(double)arg1;
- (double)operationTimeout;
- (BOOL)isGameCenterRestricted;
- (BOOL)isAccountModificationRestricted;
- (BOOL)isAddingFriendsRestricted;
- (BOOL)isMultiplayerGamingRestricted;
- (void)setIgnoreSandbox:(BOOL)arg1;
- (BOOL)ignoreSandbox;
- (void)setUseTestProtocols:(BOOL)arg1;
- (void)setAllowUnsignedBag:(BOOL)arg1;
- (BOOL)allowUnsignedBag;
- (void)setStoreBagURL:(id)arg1;
- (id)storeBagURL;
- (void)setEnvironment:(int)arg1;
- (unsigned int)maxDefaultGameStateSizeTurnBased;
- (unsigned int)maxDefaultPlayersTurnBased;
- (unsigned int)maxDefaultPlayersHosted;
- (unsigned int)maxDefaultPlayersP2P;
- (void)setUnsignedIntegerValue:(int)arg1 forKey:(struct __CFString { }*)arg2;
- (int)unsignedIntegerValueForKey:(struct __CFString { }*)arg1 defaultValue:(int)arg2;
- (void)setTimeInterval:(double)arg1 forKey:(struct __CFString { }*)arg2;
- (double)timeIntervalForKey:(struct __CFString { }*)arg1 defaultValue:(double)arg2;
- (BOOL)managedBooleanForKey:(id)arg1;
- (void)setBooleanValue:(BOOL)arg1 forKey:(struct __CFString { }*)arg2;
- (BOOL)booleanValueForKey:(struct __CFString { }*)arg1;
- (void)setIntegerValue:(int)arg1 forKey:(struct __CFString { }*)arg2;
- (int)integerValueForKey:(struct __CFString { }*)arg1 defaultValue:(int)arg2;
- (void)_didWriteKey:(struct __CFString { }*)arg1;
- (BOOL)booleanValueForKey:(struct __CFString { }*)arg1 defaultValue:(BOOL)arg2;
- (void)set_shouldSynchronizeOnNextRead:(BOOL)arg1;
- (BOOL)_shouldSynchronizeOnNextRead;
- (void)applicationWillEnterBackground:(id)arg1;
- (void)setMaxDefaultGameStateSizeTurnBased:(unsigned int)arg1;
- (void)setMaxDefaultPlayersTurnBased:(unsigned int)arg1;
- (void)setMaxDefaultPlayersHosted:(unsigned int)arg1;
- (void)setMaxDefaultPlayersP2P:(unsigned int)arg1;
- (BOOL)useTestProtocols;
- (unsigned long)logFilter;
- (double)minimumCacheTTL;
- (void)setNotificationCenterEnabled:(BOOL)arg1;
- (BOOL)isNotificationCenterEnabled;
- (void)setNotificationAlertsEnabled:(BOOL)arg1;
- (void)setNotificationSoundsEnabled:(BOOL)arg1;
- (void)setNotificationBadgesEnabled:(BOOL)arg1;
- (BOOL)notificationAlertsEnabled;
- (BOOL)notificationSoundsEnabled;
- (BOOL)notificationBadgesEnabled;
- (BOOL)shouldAnnotateImageUsage;
- (void)setHTTPShouldUsePipelining:(BOOL)arg1;
- (BOOL)HTTPShouldUsePipelining;
- (BOOL)useInternalHeader;
- (BOOL)isStoreDemoModeEnabled;
- (BOOL)isAppInstallationRestricted;
- (void)invalidate;
- (id)init;
- (int)environment;
- (void)synchronize;

@end
