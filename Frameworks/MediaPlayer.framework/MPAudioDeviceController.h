/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSString, BKSApplicationStateMonitor, NSDictionary, NSMutableArray;

@interface MPAudioDeviceController : NSObject <UIAlertViewDelegate> {
    NSString *_category;
    id _delegate;
    BOOL _determiningPickableRoutes;
    BOOL _fakeRouteAvailable;
    NSArray *_pickableRoutes;
    NSDictionary *_pickedRoute;
    BOOL _pickedRouteHasVolumeControl;
    BOOL _pickedRouteHasVolumeControlIsValid;
    NSMutableArray *_pickableRoutesCompletionHandlers;
    BKSApplicationStateMonitor *_applicationMonitor;
    int _retainCount;
}

@property id delegate;
@property BOOL routeDiscoveryEnabled;

+ (BOOL)routeDiscoveryEnabled;
+ (void)setRouteDiscoveryEnabled:(BOOL)arg1;

- (void)_sendFakeRouteChange;
- (BOOL)pickRouteAtIndex:(unsigned int)arg1;
- (BOOL)routeRequiresPasswordAtIndex:(unsigned int)arg1;
- (id)routeDescriptionAtIndex:(unsigned int)arg1;
- (void)restorePickedRoute;
- (BOOL)pickHandsetRoute;
- (BOOL)pickSpeakerRoute;
- (unsigned int)numberOfAudioRoutes;
- (BOOL)handsetRouteIsPicked;
- (BOOL)receiverRouteIsPicked;
- (BOOL)speakerRouteIsPicked;
- (BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (void)_mediaServerDied;
- (void)_portStatusDidChangeNotification:(id)arg1;
- (void)_pickableRoutesChangedNotification:(id)arg1;
- (void)_scheduleSendDelegateAudioRoutesChanged;
- (BOOL)routeDiscoveryEnabled;
- (BOOL)_routeIsDisplayPort:(id)arg1;
- (BOOL)_pickRoute:(id)arg1 withPassword:(id)arg2;
- (BOOL)_routeIsHeadphones:(id)arg1;
- (BOOL)_pickRoute:(id)arg1;
- (BOOL)_routeIsWireless:(id)arg1;
- (BOOL)_routeIsReceiver:(id)arg1;
- (id)_pickedRoute;
- (BOOL)_routeIsSpeaker:(id)arg1;
- (BOOL)_routeIsHandset:(id)arg1;
- (id)_pickableRoutes;
- (id)routeNameAtIndex:(unsigned int)arg1 isPicked:(BOOL*)arg2;
- (void)_sendDelegateAudioRoutesChanged;
- (void)_routeDiscoveryDidEndNotification:(id)arg1;
- (void)_registerForAVControllerNotifications;
- (BOOL)pickRouteAtIndex:(unsigned int)arg1 withPassword:(id)arg2;
- (int)indexOfPickedRoute;
- (void)determinePickableRoutesWithCompletionHandler:(id)arg1;
- (void)setRouteDiscoveryEnabled:(BOOL)arg1;
- (BOOL)routeOtherThanHandsetIsAvailable;
- (BOOL)wirelessRouteIsPicked;
- (BOOL)airtunesRouteIsPicked;
- (id)routeTypeAtIndex:(unsigned int)arg1;
- (void)clearCachedRoutes;
- (id)pickedRouteDescription;
- (BOOL)isPickedRouteDistinctFromRoute:(id)arg1;
- (id)nameOfPickedRoute;
- (BOOL)volumeControlIsAvailable;
- (BOOL)pickBestDeviceRoute;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (unsigned int)retainCount;
- (id)retain;
- (void)dealloc;
- (oneway void)release;
- (id)init;
- (void)setCategory:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;

@end
