/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CNFRegController, <CNFRegWizardControllerDelegate>;

@interface CNFRegWizardController : PSSetupController <CNFRegFirstRunDelegate> {
    CNFRegController *_regController;
    int _serviceType;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alertHandler;

    <CNFRegWizardControllerDelegate> *_firstRunDelegate;
    id _resignListener;
    id _resumeListener;
    struct { 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int shouldListenForSuspension : 1; 
        unsigned int canStartNested : 1; 
        unsigned int canShowSplashScreen : 1; 
        unsigned int canShowDisabledScreen : 1; 
        unsigned int hideLearnMoreButton : 1; 
        unsigned int showSplashOnSignin : 1; 
        unsigned int reloadOnViewWillAppear : 1; 
        unsigned int allowCancel : 1; 
        unsigned int shouldTerminateInBackground : 1; 
    } _wizardFlags;
}

@property <CNFRegWizardControllerDelegate> * firstRunDelegate;
@property BOOL canStartNested;
@property BOOL canShowSplashScreen;
@property BOOL canShowDisabledScreen;
@property BOOL allowCancel;
@property BOOL hideLearnMoreButton;
@property BOOL showSplashOnSignin;
@property BOOL reloadOnViewWillAppear;
@property(retain) CNFRegController * regController;
@property(copy) id alertHandler;
@property BOOL shouldListenForSuspension;
@property BOOL shouldTerminateInBackground;

+ (void)setSupportsAutoRotation:(BOOL)arg1;
+ (void)setGlobalAppearanceStyle:(int)arg1;

- (id)firstRunDelegate;
- (void)setShowSplashOnSignin:(BOOL)arg1;
- (BOOL)showSplashOnSignin;
- (BOOL)hideLearnMoreButton;
- (BOOL)allowCancel;
- (BOOL)shouldListenForSuspension;
- (void)setReloadOnViewWillAppear:(BOOL)arg1;
- (BOOL)reloadOnViewWillAppear;
- (BOOL)canStartNested;
- (id)controllersToShow;
- (void)dismissWithState:(unsigned int)arg1;
- (void)dismissFinished:(BOOL)arg1;
- (void)_checkRestrictions;
- (void)_startListeningForResignResume;
- (BOOL)shouldShowFirstRunController:(BOOL)arg1;
- (id)controllersToShow:(BOOL)arg1;
- (void)_doCancel;
- (id)controllerClassesToShow:(BOOL)arg1;
- (BOOL)canShowDisabledScreen;
- (BOOL)canShowSplashScreen;
- (int)_firstRunState:(id)arg1;
- (void)setShouldTerminateInBackground:(BOOL)arg1;
- (BOOL)shouldTerminateInBackground;
- (BOOL)shouldShowFirstRunController;
- (void)_stopListeningForResignResume;
- (id)initWithServiceTypes:(int)arg1;
- (void)_applicationDidFinishLaunching;
- (void)_restrictionsChanged;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned int)arg2;
- (void)setFirstRunDelegate:(id)arg1;
- (void)setAllowCancel:(BOOL)arg1;
- (void)setShouldListenForSuspension:(BOOL)arg1;
- (void)setCanShowDisabledScreen:(BOOL)arg1;
- (void)setHideLearnMoreButton:(BOOL)arg1;
- (void)setCanShowSplashScreen:(BOOL)arg1;
- (void)setCanStartNested:(BOOL)arg1;
- (id)initWithRegController:(id)arg1;
- (void)setRegController:(id)arg1;
- (id)regController;
- (void)dealloc;
- (id)init;
- (void)setupController;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)alertHandler;
- (void)setAlertHandler:(id)arg1;
- (void)_applicationDidEnterBackground;

@end
