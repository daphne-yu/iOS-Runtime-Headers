/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary, IMDaemonListener, NSObject<OS_dispatch_queue>, NSProtocolChecker, NSArray, NSMutableArray, NSLock, NSString, IMLocalObject, IMRemoteObject<IMRemoteDaemonProtocol>;

@interface IMDaemonController : NSObject  {
    id _delegate;
    IMRemoteObject<IMRemoteDaemonProtocol> *_remoteObject;
    NSMutableDictionary *_listenerMap;
    IMLocalObject *_localObject;
    IMDaemonListener *_daemonListener;
    NSMutableArray *_services;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSLock *_connectionLock;
    NSArray *_servicesToAllow;
    NSArray *_servicesToDeny;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSLock *_blockingLock;
    BOOL _hasCheckedForDaemon;
    BOOL _preventReconnect;
    BOOL _inBlockingConnect;
    BOOL _acquiringDaemonConnection;
    BOOL _autoReconnect;
    BOOL _blocksConnectionAtResume;
    BOOL _hasBeenSuspended;
    unsigned int _gMyFZListenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdatedCapabilities;
}

@property(readonly) IMDaemonListener * listener;
@property(readonly) BOOL isConnected;
@property(readonly) unsigned int capabilities;
@property(setter=_setServicesToAllow:,retain) NSArray * _servicesToAllow;
@property(setter=_setServicesToDeny:,retain) NSArray * _servicesToDeny;
@property(setter=_setListenerID:,retain) NSString * _listenerID;
@property id delegate;
@property(setter=_setBlocksConnectionAtResume:) BOOL _blocksConnectionAtResume;
@property(readonly) BOOL isConnecting;
@property(setter=__setCapabilities:) unsigned int _capabilities;
@property(setter=_setAutoReconnect:) BOOL _autoReconnect;
@property(readonly) NSObject<OS_dispatch_queue> * _remoteMessageQueue;

+ (id)sharedInstance;
+ (id)sharedController;
+ (void)_setApplicationWillTerminate;
+ (BOOL)_applicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;

- (BOOL)isConnecting;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (void)_addressBookChanged:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)_setServicesToDeny:(id)arg1;
- (void)_setServicesToAllow:(id)arg1;
- (void)_setListenerID:(id)arg1;
- (id)_listenerID;
- (void)setDaemonLogsOutWithoutStatusListeners:(BOOL)arg1;
- (void)setDaemonTerminatesWithoutListeners:(BOOL)arg1;
- (void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3;
- (void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3;
- (void)listener:(id)arg1 setListenerCapabilities:(unsigned int)arg2;
- (BOOL)_acquiringDaemonConnection;
- (void)_setBlocksConnectionAtResume:(BOOL)arg1;
- (void)setPresenceValue:(id)arg1 forKey:(id)arg2 forAccount:(id)arg3;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2;
- (void)setMyProfile:(id)arg1;
- (void)setMyPicture:(id)arg1 smallPictureData:(id)arg2;
- (id)_remoteObject;
- (BOOL)addListenerID:(id)arg1 capabilities:(unsigned int)arg2;
- (void)_handleDaemonException:(id)arg1;
- (void)_agentDidLaunchNotification:(id)arg1;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2 forAccount:(id)arg3;
- (BOOL)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;
- (void)disconnectFromDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(BOOL)arg3;
- (void)_connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned long long)arg2;
- (BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(id)arg2;
- (void)disconnectFromDaemonWithForce:(BOOL)arg1;
- (BOOL)_autoReconnect;
- (void)_blockUntilSendQueueIsEmpty;
- (BOOL)_blocksConnectionAtResume;
- (void)__setCapabilities:(unsigned int)arg1;
- (void)_setAutoReconnect:(BOOL)arg1;
- (id)_servicesToDeny;
- (id)_servicesToAllow;
- (void)sendABInformationToDaemon;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (unsigned int)_capabilities;
- (void)_setCapabilities:(unsigned int)arg1;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1;
- (void)blockUntilConnected;
- (id)listener;
- (id)_remoteMessageQueue;
- (void)_noteSetupComplete;
- (BOOL)localObjectExists;
- (void)localObjectDiedNotification:(id)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (BOOL)remoteObjectExists;
- (void)_listenerSetUpdated;
- (BOOL)hasListenerForID:(id)arg1;
- (BOOL)__isRemoteObjectValidOnQueue:(id)arg1;
- (BOOL)__isLocalObjectValidOnQueue:(id)arg1;
- (BOOL)removeListenerID:(id)arg1;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (BOOL)connectToDaemon;
- (unsigned int)capabilities;
- (BOOL)isConnected;

@end
