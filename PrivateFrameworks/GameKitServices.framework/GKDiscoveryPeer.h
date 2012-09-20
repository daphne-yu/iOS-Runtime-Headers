/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKDiscoveryPeerConnection, NSObject<OS_dispatch_queue>, NSMutableArray, NSMutableSet, NSString, GKSimpleTimer, NSNumber;

@interface GKDiscoveryPeer : NSObject <GKSimpleTimerDelegate> {
    NSString *_serviceName;
    NSString *_playerID;
    NSString *_deviceID;
    NSMutableSet *_interfaces;
    NSMutableArray *_orderedInterfaces;
    NSMutableArray *_attemptedInterfaces;
    GKDiscoveryPeerConnection *_trialConnection;
    NSNumber *_chosenInterface;
    BOOL _shouldSignalDiscovery;
    NSMutableArray *_sendDataBuffer;
    GKDiscoveryPeerConnection *_connection;
    GKSimpleTimer *_resolveTimer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _resolveTimeoutHandler;

    NSObject<OS_dispatch_queue> *_syncQueue;
    int _state;
    double _discoveryTimeStamp;
}

@property(copy) NSString * serviceName;
@property(retain) NSMutableSet * interfaces;
@property(retain) NSMutableArray * orderedInterfaces;
@property(retain) NSMutableArray * attemptedInterfaces;
@property(retain) NSNumber * chosenInterface;
@property(retain) GKDiscoveryPeerConnection * trialConnection;
@property BOOL shouldSignalDiscovery;
@property double discoveryTimeStamp;
@property(retain) NSMutableArray * sendDataBuffer;
@property int state;
@property(retain) GKDiscoveryPeerConnection * connection;
@property(readonly) NSObject<OS_dispatch_queue> * syncQueue;
@property(copy) NSString * playerID;
@property(copy) NSString * deviceID;
@property(retain) GKSimpleTimer * resolveTimer;
@property(copy) id resolveTimeoutHandler;


- (id)syncQueue;
- (void)setDeviceID:(id)arg1;
- (id)playerID;
- (void)setPlayerID:(id)arg1;
- (void)invalidate;
- (int)state;
- (id)description;
- (void)dealloc;
- (id)connection;
- (id)stringForState:(int)arg1;
- (void)setState:(int)arg1;
- (void)setTrialConnection:(id)arg1;
- (id)trialConnection;
- (id)resolveTimeoutHandler;
- (void)setDiscoveryTimeStamp:(double)arg1;
- (double)discoveryTimeStamp;
- (void)setSendDataBuffer:(id)arg1;
- (id)sendDataBuffer;
- (void)setShouldSignalDiscovery:(BOOL)arg1;
- (void)setChosenInterface:(id)arg1;
- (void)setAttemptedInterfaces:(id)arg1;
- (id)attemptedInterfaces;
- (void)setOrderedInterfaces:(id)arg1;
- (id)orderedInterfaces;
- (void)setInterfaces:(id)arg1;
- (void)flushDataBuffer;
- (void)didLoseInterface:(id)arg1;
- (void)stopResolveTimer;
- (void)startResolveTimerWithHandler:(id)arg1;
- (id)nextInterfaceIndex;
- (void)timeout:(id)arg1;
- (void)cleanUpForBrowse;
- (id)resolveTimer;
- (void)setResolveTimer:(id)arg1;
- (void)setResolveTimeoutHandler:(id)arg1;
- (id)chosenInterface;
- (id)interfaces;
- (BOOL)shouldSignalDiscovery;
- (BOOL)parseServiceNameForInit:(id)arg1;
- (void)sendData:(id)arg1 withCompletionHandler:(id)arg2;
- (id)serviceName;
- (void)setConnection:(id)arg1;
- (id)deviceID;
- (void)setServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1;

@end
