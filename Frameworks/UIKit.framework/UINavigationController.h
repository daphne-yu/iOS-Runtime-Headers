/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINavigationBar, UIToolbar, <UINavigationControllerDelegate>, UINavigationTransitionView, UIView, UIViewController, NSArray;

@interface UINavigationController : UIViewController <GKContentRefresh, GKURLHandling, ViewControllerArchiveNode> {
    UIView *_containerView;
    UINavigationBar *_navigationBar;
    Class _navigationBarClass;
    UIToolbar *_toolbar;
    UIView *_navigationTransitionView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _currentScrollContentInsetDelta;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _previousScrollContentInsetDelta;
    float _previousScrollContentOffsetDelta;
    float _bottomInsetDelta;
    UIViewController *_disappearingViewController;
    <UINavigationControllerDelegate> *_delegate;
    int _savedNavBarStyleBeforeSheet;
    int _savedToolBarStyleBeforeSheet;
    struct { 
        unsigned int isAppearingAnimated : 1; 
        unsigned int isAlreadyPoppingNavigationItem : 1; 
        unsigned int isNavigationBarHidden : 1; 
        unsigned int isToolbarShown : 1; 
        unsigned int needsDeferredTransition : 1; 
        unsigned int isTransitioning : 1; 
        unsigned int lastOperation : 4; 
        unsigned int lastOperationAnimated : 1; 
        unsigned int deferredTransition : 8; 
        unsigned int didPreloadKeyboardAnimation : 1; 
        unsigned int didHideBottomBar : 1; 
        unsigned int isChangingOrientationForPop : 1; 
        unsigned int pretendNavBarHidden : 1; 
        unsigned int avoidMovingNavBarOffscreenBeforeUnhiding : 1; 
        unsigned int searchBarHidNavBar : 1; 
        unsigned int useSystemPopoverBarAppearance : 1; 
        unsigned int isCustomTransition : 1; 
    } _navigationControllerFlags;
    Class _toolbarClass;
    float _customNavigationTransitionDuration;
    BOOL _interactiveTransition;
}

@property(readonly) BOOL isTransitionInProgress;
@property(readonly) BOOL shouldBeCustomizableInTabBar;
@property(readonly) UIViewController * firstViewController;
@property(readonly) BOOL _gkHasFormSheetImages;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } _gkFormSheetContentInsets;
@property(retain) UIViewController * detailViewController;
@property BOOL isExpanded;
@property(readonly) UIViewController * topViewController;
@property(readonly) UIViewController * visibleViewController;
@property(copy) NSArray * viewControllers;
@property(getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property(readonly) UINavigationBar * navigationBar;
@property(getter=isToolbarHidden) BOOL toolbarHidden;
@property(readonly) UIToolbar * toolbar;
@property <UINavigationControllerDelegate> * delegate;
@property BOOL needsDeferredTransition;
@property(readonly) UINavigationTransitionView * navigationTransitionView;
@property BOOL pretendNavBarHidden;
@property BOOL avoidMovingNavBarOffscreenBeforeUnhiding;
@property float customNavigationTransitionDuration;
@property(retain) UIViewController * disappearingViewController;
@property(readonly) UIViewController * previousViewController;
@property(readonly) UIViewController * bottomViewController;
@property(setter=_setToolbarClass:) Class _toolbarClass;
@property(getter=isInteractiveTransition) BOOL interactiveTransition;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setIsExpanded:(BOOL)arg1;
- (BOOL)isExpanded;
- (id)detailViewController;
- (void)setDetailViewController:(id)arg1;
- (float)customNavigationTransitionDuration;
- (Class)_toolbarClass;
- (id)popToViewControllerWithSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerWithAnimationTransition:(int)arg1 duration:(double)arg2 curve:(int)arg3;
- (void)_tabBarControllerDidFinishShowingTabBar:(id)arg1;
- (void)_updateBottomBarHiddenState;
- (void)_resetBottomBarHiddenState;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)__viewWillLayoutSubviews;
- (double)navigationTransitionView:(id)arg1 durationForTransition:(int)arg2;
- (void)navigationTransitionView:(id)arg1 didStartTransition:(int)arg2;
- (BOOL)_isTransitioning;
- (BOOL)isShown;
- (void)setToolbarHidden:(BOOL)arg1;
- (void)setToolbar:(id)arg1;
- (void)_sendNavigationBarToBack;
- (void)setAvoidMovingNavBarOffscreenBeforeUnhiding:(BOOL)arg1;
- (BOOL)avoidMovingNavBarOffscreenBeforeUnhiding;
- (void)setPretendNavBarHidden:(BOOL)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (Class)navigationBarClass;
- (void)_setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setClipsToBounds:(BOOL)arg1;
- (void)setViewControllers:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)_layoutTopViewControllerOutOfSheet;
- (struct CGSize { float x1; float x2; })_adjustedContentSizeForPopover:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)pretendNavBarHidden;
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)arg1;
- (id)bottomViewController;
- (BOOL)_doesTopViewControllerSupportInterfaceOrientation:(int)arg1;
- (void)makeModalViewControllerTopViewController;
- (id)popViewControllerWithTransition:(int)arg1;
- (id)popToViewController:(id)arg1 transition:(int)arg2;
- (id)popToRootViewControllerWithTransition:(int)arg1;
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)arg1;
- (BOOL)_shouldPopFromLandscapeToPortraitOrientation;
- (id)_snapshotView;
- (BOOL)_shouldBottomBarBeHidden;
- (id)_popViewControllerWithTransition:(int)arg1 allowPoppingLast:(BOOL)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2 forceImmediate:(BOOL)arg3;
- (void)_startDeferredTransitionIfNeeded:(id)arg1;
- (void)_startCustomTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionController:(id)arg3;
- (void)_startTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (int)_navigationTransitionForUITransition:(int)arg1;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)arg1;
- (void)_applyScrollContentInsetDelta:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 forViewController:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_expectedContentInsetDeltaForViewController:(id)arg1;
- (float)_scrollViewBottomContentInset;
- (float)_scrollViewTopContentInsetForViewController:(id)arg1;
- (void)_layoutViewController:(id)arg1;
- (BOOL)isCustomTransition;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1;
- (BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)arg1;
- (BOOL)_isNavigationBarVisible;
- (void)_applyScrollContentOffsetDelta:(float)arg1 toScrollView:(id)arg2;
- (void)_applyScrollContentInsetDelta:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 toScrollView:(id)arg2;
- (void)setNeedsDeferredTransition:(BOOL)arg1;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_clearLastOperation;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)viewControllers;
- (void)_restoreOriginalInsetAndOffsetToScrollView:(id)arg1;
- (id)_viewControllerForDisappearCallback;
- (void)_updateBarsForCurrentInterfaceOrientation;
- (void)_hideShowToolbarDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)toolbar;
- (id)_existingToolbar;
- (void)_positionToolbarHidden:(BOOL)arg1 edge:(int)arg2;
- (void)_setToolbarHidden:(BOOL)arg1 edge:(int)arg2 duration:(double)arg3;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_configureToolbar;
- (void)_positionToolbarHidden:(BOOL)arg1;
- (BOOL)isToolbarHidden;
- (void)_layoutTopViewControllerInSheet;
- (void)_layoutTopViewController;
- (void)_hideShowNavigationBarDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_positionNavigationBarHidden:(BOOL)arg1 edge:(int)arg2;
- (BOOL)_animationParametersForHidingNavigationBar:(BOOL)arg1 lastOperation:(int)arg2 edge:(int*)arg3 duration:(double*)arg4;
- (int)lastOperation;
- (BOOL)wasLastOperationAnimated;
- (void)_setNavigationBarHidden:(BOOL)arg1 edge:(int)arg2 duration:(double)arg3;
- (void)_setNavigationBarHidden:(BOOL)arg1 edgeIfNotNavigating:(int)arg2 duration:(double)arg3;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_positionNavigationBarHidden:(BOOL)arg1;
- (void)setCustomNavigationTransitionDuration:(float)arg1;
- (void)navigationTransitionView:(id)arg1 didCancelTransition:(int)arg2 fromView:(id)arg3 toView:(id)arg4 wrapperView:(id)arg5;
- (void)navigationTransitionView:(id)arg1 didEndTransition:(int)arg2 fromView:(id)arg3 toView:(id)arg4;
- (id)navigationTransitionView;
- (int)_deferredTransition;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (void)_updateScrollViewFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_startDeferredTransitionIfNeeded;
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)arg1;
- (void)setNeedsDeferredTransition;
- (id)_navigationItems;
- (BOOL)isNavigationBarHidden;
- (BOOL)needsDeferredTransition;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2;
- (int)_transitionForOldViewControllers:(id)arg1 newViewControllers:(id)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)visibleViewController;
- (void)_releaseContainerViews;
- (void)_setToolbarClass:(Class)arg1;
- (void)setNavigationBarClass:(Class)arg1;
- (void)setDisappearingViewController:(id)arg1;
- (id)disappearingViewController;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)topViewController;
- (id)previousViewController;
- (void)setInteractiveTransition:(BOOL)arg1;
- (BOOL)isInteractiveTransition;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2;
- (id)moreListTableCell;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (id)_moreListTitle;
- (id)tabBarItem;
- (void)updateTabBarItemForViewController:(id)arg1;
- (id)defaultPNGName;
- (id)segueForUnwindingToViewController:(id)arg1 fromViewController:(id)arg2 identifier:(id)arg3;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)setContentSizeForViewInPopover:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)searchBarHidNavBar;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_shouldUseOnePartRotation;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (BOOL)_allowsAutorotation;
- (int)modalTransitionStyle;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (BOOL)_reallyWantsFullScreenLayout;
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateTitleForViewController:(id)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)viewDidUnload;
- (void)setSearchBarHidNavBar:(BOOL)arg1;
- (void)loadView;
- (BOOL)_shouldPersistViewWhenCoding;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)_isPresentationContextByDefault;
- (id)_viewForContentInPopover;
- (BOOL)isModalInPopover;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)editing;
- (void)_cancelInteractiveTransition:(float)arg1;
- (void)_finishInteractiveTransition:(float)arg1;
- (void)_updateInteractiveTransition:(float)arg1;
- (void)navigationBar:(id)arg1 buttonClicked:(int)arg2;
- (void)navigationBarDidResizeForPrompt:(id)arg1;
- (BOOL)_willPerformCustomNavigationTransitionForPop;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (float)_customNavigationTransitionDuration;
- (BOOL)_isInteractiveCustomNavigationTransition;
- (BOOL)_willPerformCustomNavigationTransitionForPush;
- (void)navigationBarDidChangeOpacity:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (id)navigationBar;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)defaultFirstResponder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_gkAlertViewControllerWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 dismissHandler:(id)arg4;
- (BOOL)_gkHasFormSheetImages;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_gkFormSheetContentInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_gkRemoveFormSheetFrameImages;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkSetContentsNeedUpdateWithHandler:(id)arg1;
- (void)_gkForceNextContentUpdate;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_gkAddFormSheetFrameImages;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (void)_gkResetContents;
- (id)mf_keyPathsMapForUICustomization;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (id)firstViewController;
- (void)invalidate;
- (unsigned int)indexOfViewController:(id)arg1;
- (void)popToSigninControllerAnimated:(BOOL)arg1;
- (id)signInControllerInHierarchy;
- (BOOL)ckCanDismissWhenSuspending;
- (id)firstViewController;
- (int)localizedCompare:(id)arg1;
- (void)swapInPreviouslySkippedViewControllers;
- (void)swapTopViewControllerWithContext:(id)arg1;
- (id)viewControllersForTopContext:(id)arg1;
- (void)pushControllerForContext:(id)arg1 animated:(BOOL)arg2;
- (void)restoreArchivedContexts:(id)arg1;
- (id)copyArchivableContexts;
- (BOOL)isTransitionInProgress;
- (id)_rootControllerIfRespondsToSelector:(SEL)arg1;
- (BOOL)shouldDisableWhileDownloading;
- (BOOL)shouldBeCustomizableInTabBar;

@end
