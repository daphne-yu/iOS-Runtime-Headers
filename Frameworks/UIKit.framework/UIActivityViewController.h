/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, UIActivity, NSOperationQueue, UIActivityListViewController;

@interface UIActivityViewController : UIViewController  {
    unsigned int _backgroundTaskIdentifier;
    int _completedProviderCount;
    BOOL _useBlackPopoverStyle;
    UIActivity *_activity;
    Class _originalPopoverBackgroundViewClass;
    int _originalPopoverBackgroundStyle;
    NSArray *_activityItems;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    NSArray *_applicationActivities;
    NSString *_subject;
    NSArray *_excludedActivityTypes;
    UIActivityListViewController *_activityListViewController;
    int _totalProviderCount;
    NSOperationQueue *_activityItemProviderOperationQueue;
}

@property(copy) id completionHandler;
@property(copy) NSArray * excludedActivityTypes;
@property(retain) UIActivity * activity;
@property BOOL useBlackPopoverStyle;
@property(copy) NSArray * activityItems;
@property(copy) NSArray * applicationActivities;
@property(retain) UIActivityListViewController * activityListViewController;
@property(retain) NSOperationQueue * activityItemProviderOperationQueue;
@property int totalProviderCount;
@property int completedProviderCount;
@property unsigned int backgroundTaskIdentifier;
@property int originalPopoverBackgroundStyle;
@property Class originalPopoverBackgroundViewClass;
@property(copy) NSString * subject;

+ (BOOL)_hasSystemActivityForActivityItems:(id)arg1;
+ (id)_builtinActivities;

- (void)dealloc;
- (void)setTotalProviderCount:(int)arg1;
- (int)totalProviderCount;
- (id)activityListViewController;
- (id)applicationActivities;
- (void)setOriginalPopoverBackgroundStyle:(int)arg1;
- (int)originalPopoverBackgroundStyle;
- (void)setOriginalPopoverBackgroundViewClass:(Class)arg1;
- (Class)originalPopoverBackgroundViewClass;
- (void)setUseBlackPopoverStyle:(BOOL)arg1;
- (void)setCompletedProviderCount:(int)arg1;
- (int)completedProviderCount;
- (unsigned int)backgroundTaskIdentifier;
- (void)_reloadImageForActivity:(id)arg1;
- (id)activityItemProviderOperationQueue;
- (BOOL)useBlackPopoverStyle;
- (void)_executeActivity;
- (void)_cleanupActivityWithSuccess:(BOOL)arg1;
- (void)_hideView;
- (id)subject;
- (id)_availableActivities;
- (id)activityItems;
- (id)excludedActivityTypes;
- (id)_activityItemValues;
- (void)setActivityItemProviderOperationQueue:(id)arg1;
- (void)setActivityListViewController:(id)arg1;
- (void)setBackgroundTaskIdentifier:(unsigned int)arg1;
- (void)setApplicationActivities:(id)arg1;
- (void)setActivityItems:(id)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)setActivity:(id)arg1;
- (void)_cancel;
- (void)setCompletionHandler:(id)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (id)activity;
- (void)_prepareActivity:(id)arg1;
- (BOOL)_shouldShowSystemActivity:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_setPopoverController:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)completionHandler;
- (unsigned int)supportedInterfaceOrientations;
- (void)_gkCallOnSuperSkippingSelf_viewDidAppear:(BOOL)arg1;

@end
