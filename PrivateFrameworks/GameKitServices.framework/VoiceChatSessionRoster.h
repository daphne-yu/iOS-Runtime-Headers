/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSMutableDictionary, NSString, GKSessionInternal, NSObject<OS_dispatch_queue>, GKVoiceChatSessionInternal, NSMutableArray;

@interface VoiceChatSessionRoster : NSObject  {
    GKSessionInternal *_gkSession;
    NSString *_peerID;
    GKVoiceChatSessionInternal *_gkvs;
    NSObject<OS_dispatch_queue> *_sendQueue;
    NSMutableArray *_connectedPeers;
    NSMutableDictionary *_peerStateTable;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } resMutex;
    BOOL _needsUpdateBeaconList;
    BOOL _waitingToCalculateFocus;
    unsigned int _deviceRating;
    unsigned int _focusRating;
    unsigned int _chosenFocusRating;
    unsigned int _focusID;
    BOOL _isBeaconUp;
    BOOL _hasFocus;
}


- (void)dealloc;
- (void)cleanup;
- (void)processUnsubscribeBeacon:(struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;
- (void)processSubscribeBeacon:(struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;
- (void)sendBeacon:(struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1 ToPeer:(id)arg2;
- (void)calculateFocus:(id)arg1;
- (void)sendBeacons;
- (void)startBeacon;
- (void)configureDeviceRating;
- (void)updateBeacon;
- (BOOL)recalculateFocusRating;
- (void)receivedBeacon:(id)arg1 fromPeer:(id)arg2;
- (void)peer:(id)arg1 didChangeState:(int)arg2;
- (void)stopBeacon;
- (id)subscribedPeers;
- (unsigned int)focusID;
- (void)startBeaconWrapper:(id)arg1;
- (id)initWithGKSession:(id)arg1 peerID:(id)arg2 voiceChatSession:(id)arg3 sendQueue:(id)arg4;
- (BOOL)hasFocus;

@end
