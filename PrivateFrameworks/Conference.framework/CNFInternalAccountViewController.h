/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class FTRegConnectionHandler, IMAccount;

@interface CNFInternalAccountViewController : PSListController  {
    IMAccount *_account;
    FTRegConnectionHandler *_connectionHandler;
}

@property(retain) IMAccount * account;


- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_handleAccountNotification:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (id)statusForAlias:(id)arg1;
- (id)specifiers;
- (void)dealloc;
- (id)accountIsActive:(id)arg1;
- (id)registrationFailureReason:(id)arg1;
- (id)accountDisplayName:(id)arg1;
- (id)accountType:(id)arg1;
- (id)accountLogin:(id)arg1;
- (id)registrationStatus:(id)arg1;
- (id)accountLoginStatus:(id)arg1;
- (id)specifierForAlias:(id)arg1;
- (id)bundle;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)isConnectedToDaemon;
- (void)setAccount:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)account;
- (void)_startListeningForNotifications;

@end
