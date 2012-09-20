/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLProgressView, <QLPreviewItemInteractionDelegate>, NSTimer, <QLPreviewItem>, QLDisplayBundle, NSString, UIDocumentPasswordView;

@interface QLPreviewViewController : UIViewController <QLPreviewItemInteractionDelegate, UIDocumentPasswordViewDelegate, QLProgressViewDelegate> {
    <QLPreviewItemInteractionDelegate> *_displayBundleDelegate;
    <QLPreviewItem> *_previewItem;
    int _index;
    struct { 
        int pid; 
        struct { 
            unsigned int val[8]; 
        } audit_token; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } contentFrame; 
    } _clientContext;
    int _previewMode;
    BOOL _needsReload;
    BOOL _swiping;
    BOOL _shouldSwapDisplayBundles;
    QLDisplayBundle *_displayBundle;
    QLDisplayBundle *_newDisplayBundle;
    NSTimer *_progressTimer;
    QLProgressView *_progressView;
    BOOL _loadingProgressVisible;
    NSString *_loadintTextForMissingFiles;
    BOOL _overlayHidden;
    UIDocumentPasswordView *_documentPasswordView;
    BOOL _loadedWithPassword;
}

@property(retain) <QLPreviewItem> * previewItem;
@property(readonly) QLDisplayBundle * displayBundle;
@property <QLPreviewItemInteractionDelegate> * displayBundleDelegate;
@property int previewMode;
@property struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; } clientContext;
@property int index;


- (void)setDisplayBundleDelegate:(id)arg1;
- (id)displayBundleDelegate;
- (void)didFinishSwiping;
- (void)willStartSwiping;
- (void)preloadIfNeeded;
- (id)displayBundle;
- (void)previewItemDidExitFullScreen:(id)arg1;
- (void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
- (void)previewItem:(id)arg1 setAVState:(id)arg2;
- (void)_showPasswordView;
- (void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)_swapDisplayBundles;
- (void)_scheduleShowProgressiveUI;
- (void)_showGenericDisplayBundleForPreviewItem:(id)arg1;
- (void)viewWasTappedOnPreviewItem:(id)arg1;
- (void)_removeDisplayBundles;
- (void)_hidePasswordView;
- (void)refreshPreviewItem;
- (void)_refreshPreviewItem:(BOOL)arg1 withPassword:(id)arg2;
- (void)_prepareDisplayBundle:(id)arg1 preload:(BOOL)arg2 withHints:(id)arg3;
- (void)_cancelScheduledShowProgressiveUI;
- (void)overlayWasInteractedWithOnPreviewItem:(id)arg1;
- (id)clientProcessAlertViewForPreviewItem:(id)arg1;
- (void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2;
- (id)previewItem:(id)arg1 willSendRequest:(id)arg2;
- (void)setClientContext:(struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1;
- (struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })clientContext;
- (void)cancelLoadIfNeeded;
- (void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3;
- (void)previewItemDidLoad:(id)arg1 atIndex:(int)arg2 withError:(id)arg3;
- (void)previewItemWillLoad:(id)arg1;
- (id)previewItem;
- (void)progressViewWasTapped:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)_removeProgressiveUIAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)_showProgressUI;
- (void)_hideProgressiveUI;
- (void)setLoadintTextForMissingFiles:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setIndex:(int)arg1;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)_adjustContentOffsetForKeyboardIfNeeded;
- (void)_keyboardDidShow:(id)arg1;
- (int)index;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (int)previewMode;
- (void)setPreviewMode:(int)arg1;

@end
