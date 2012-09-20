/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface BBNotificationBehaviorUtilitiesClient : NSObject <BBNotificationBehaviorUtilitiesClientProtocol, XPCProxyTarget> {
    id _serverProxy;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _filteringStateChangeHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _activeBehaviorOverridesChangeHandler;

}


- (void)dealloc;
- (id)init;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)shouldPresentNotificationFromSender:(id)arg1 withHandler:(id)arg2;
- (void)setActiveBehaviorOverridesChangeHandler:(id)arg1;
- (void)setFilteringStateChangeHandler:(id)arg1;
- (void)notificationPresentationFilteringChangedToEnabled:(BOOL)arg1;
- (void)activeBehaviorOverrideTypesChanged:(unsigned int)arg1;

@end
