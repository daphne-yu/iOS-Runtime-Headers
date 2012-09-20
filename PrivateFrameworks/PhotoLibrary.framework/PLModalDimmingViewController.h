/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIView, UIImageView, UIViewController<PLModalDimmingContained>;

@interface PLModalDimmingViewController : UIViewController  {
    UIImageView *_vignetteView;
    UIViewController<PLModalDimmingContained> *_contentViewController;
    UIView *_wrapperView;
}

@property(retain) UIViewController<PLModalDimmingContained> * contentViewController;


- (void)dealloc;
- (void)setContentViewController:(id)arg1;
- (id)initWithContentViewController:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)contentViewController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillLayoutSubviews;
- (void)presentWithCustomAnimation;
- (void)_updateVignetteToOrientation:(int)arg1;
- (void)_updateWrapperView:(id)arg1 toOrientation:(int)arg2 forViewController:(id)arg3;
- (void)dismissWithCustomAnimation:(int)arg1 completionHandler:(id)arg2;
- (void)presentModalOnViewController:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3;

@end
