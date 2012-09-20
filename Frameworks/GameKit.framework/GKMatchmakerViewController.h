/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKMatchRequest, <GKMatchmakerViewControllerDelegate>, NSString, GKMatchmakerViewControllerPrivate;

@interface GKMatchmakerViewController : UINavigationController  {
    GKMatchmakerViewControllerPrivate *_privateViewController;
}

@property <GKMatchmakerViewControllerDelegate> * matchmakerDelegate;
@property(readonly) GKMatchRequest * matchRequest;
@property(getter=isHosted) BOOL hosted;
@property(copy) NSString * defaultInvitationMessage;
@property(retain) GKMatchmakerViewControllerPrivate * privateViewController;


- (id)privateViewController;
- (void)setHostedPlayerReady:(id)arg1;
- (void)setMatchmakerDelegate:(id)arg1;
- (id)matchmakerDelegate;
- (id)defaultInvitationMessage;
- (void)setDefaultInvitationMessage:(id)arg1;
- (id)initWithPrivateViewController:(id)arg1;
- (void)setPrivateViewController:(id)arg1;
- (void)setHostedPlayer:(id)arg1 connected:(BOOL)arg2;
- (void)addPlayersToMatch:(id)arg1;
- (id)initWithInvite:(id)arg1;
- (void)setHosted:(BOOL)arg1;
- (id)initWithMatchRequest:(id)arg1;
- (BOOL)isHosted;
- (id)matchRequest;
- (void)dealloc;
- (id)init;
- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;

@end
