/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextEffectsWindow : UIAutoRotatingWindow  {
    unsigned long _activeEffectsCount;
    BOOL _inDealloc;
    BOOL _nonServiceHosted;
    float _defaultWindowLevel;
    struct CGPoint { 
        float x; 
        float y; 
    } _hostedWindowOffset;
}

@property(readonly) unsigned int contextID;
@property BOOL nonServiceHosted;
@property float defaultWindowLevel;
@property struct CGPoint { float x1; float x2; } hostedWindowOffset;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } hostedFrame;

+ (void)lowerTextEffectsWindowsForHideNotificationCenter;
+ (void)raiseTextEffectsWindowsForShowNotificationCenter;
+ (void)_releaseSharedInstances;
+ (id)preferredTextEffectsWindowAboveStatusBar;
+ (id)preferredTextEffectsWindow;
+ (id)sharedTextEffectsWindow:(BOOL)arg1;
+ (id)sharedTextEffectsWindowAboveStatusBar;
+ (id)sharedTextEffectsWindow;

- (void)dealloc;
- (void)setHostedWindowOffset:(struct CGPoint { float x1; float x2; })arg1;
- (float)defaultWindowLevel;
- (void)setNonServiceHosted:(BOOL)arg1;
- (void)updateSubviewOrdering;
- (void)resetTransform;
- (struct CGPoint { float x1; float x2; })magnifierScreenPointForPoint:(struct CGPoint { float x1; float x2; })arg1 targetWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })classicWindowPointForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hostedFrame;
- (unsigned int)contextID;
- (void)setDefaultWindowLevel:(float)arg1;
- (void)updateForOrientation:(int)arg1 forceResetTransform:(BOOL)arg2;
- (void)updateForOrientation:(int)arg1;
- (void)sortSubviews;
- (void)delayHideWindow;
- (struct CGPoint { float x1; float x2; })_adjustPointForHostedDisplay:(struct CGPoint { float x1; float x2; })arg1 hasTarget:(BOOL)arg2 inset:(BOOL)arg3;
- (BOOL)_isTextEffectsWindow;
- (struct CGPoint { float x1; float x2; })hostedWindowOffset;
- (void)matchDeviceOrientation;
- (BOOL)nonServiceHosted;
- (void)_didRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)setKeepContextInBackground:(BOOL)arg1;
- (BOOL)_disableViewScaling;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromWindow:(id)arg2;
- (void)handleStatusBarChangeFromHeight:(float)arg1 toHeight:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toWindow:(id)arg2;
- (void)_updateTransformLayerForClassicPresentation;
- (BOOL)isInternalWindow;
- (BOOL)_affectsTintView;
- (BOOL)_usesWindowServerHitTesting;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
- (id)_showServiceForText:(id)arg1 type:(int)arg2 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (BOOL)_canShowTextServices;
- (BOOL)_isWindowServerHostingManaged;
- (int)interfaceOrientation;
- (void)bringSubviewToFront:(id)arg1;
- (void)sendSubviewToBack:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
