/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UINavigationItem, NSMutableArray, UIView, UIImage, NSDictionary, UISwipeGestureRecognizer, NSArray;

@interface UINavigationBar : UIView <_UIShadowedView, UIStatusBarTinting, NSCoding> {
    NSMutableArray *_itemStack;
    float _rightMargin;
    unsigned int _state;
    id _delegate;
    UIView *_backgroundView;
    UIView *_titleView;
    NSArray *_leftViews;
    NSArray *_rightViews;
    UIView *_prompt;
    UIView *_accessoryView;
    UIColor *_tintColor;
    id _appearanceStorage;
    id _currentAlert;
    struct { 
        unsigned int animate : 1; 
        unsigned int animationDisabledCount : 10; 
        unsigned int transitioningBarStyle : 1; 
        unsigned int newBarStyle : 3; 
        unsigned int transitioningToTranslucent : 1; 
        unsigned int barStyle : 3; 
        unsigned int isTranslucent : 1; 
        unsigned int disableLayout : 1; 
        unsigned int backPressed : 1; 
        unsigned int animatePromptChange : 1; 
        unsigned int pendingHideBackButton : 1; 
        unsigned int titleAutosizesToFit : 1; 
        unsigned int usingNewAPI : 1; 
        unsigned int minibar : 1; 
        unsigned int forceFullHeightInLandscape : 1; 
        unsigned int isLocked : 1; 
        unsigned int shouldUpdatePromptAfterTransition : 1; 
        unsigned int crossfadeItems : 1; 
        unsigned int autoAdjustTitle : 1; 
        unsigned int isContainedInPopover : 1; 
        unsigned int needsDrawRect : 1; 
        unsigned int animationCleanupCancelled : 1; 
        unsigned int forceLayout : 1; 
        unsigned int layoutInProgress : 1; 
        unsigned int dynamicDuration : 1; 
        unsigned int isInteractive : 1; 
        unsigned int cancelledTransition : 1; 
        unsigned int animationCount : 4; 
    } _navbarFlags;
    UISwipeGestureRecognizer *_popSwipeGestureRecognizer;
}

@property int IUInterfaceStyle;
@property(setter=_setBackgroundView:,retain) UIView * _backgroundView;
@property int barStyle;
@property id delegate;
@property(getter=isTranslucent) BOOL translucent;
@property(readonly) UINavigationItem * topItem;
@property(readonly) UINavigationItem * backItem;
@property(copy) NSArray * items;
@property(retain) UIColor * tintColor;
@property(retain) UIImage * shadowImage;
@property(copy) NSDictionary * titleTextAttributes;

+ (void)_setUseCustomBackButtonAction:(BOOL)arg1;
+ (void)setDefaultAnimationDuration:(double)arg1;
+ (id)defaultPromptFont;
+ (struct CGSize { float x1; float x2; })defaultSizeWithPrompt;
+ (BOOL)_useCustomBackButtonAction;
+ (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(int)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeWithPromptForOrientation:(int)arg1;
+ (id)_statusBarBaseTintColorForStyle:(int)arg1 translucent:(BOOL)arg2 tintColor:(id)arg3;
+ (id)_statusBarBaseTintColorForStyle:(int)arg1 translucent:(BOOL)arg2 tintColor:(id)arg3 backgroundImage:(id)arg4 viewSize:(struct CGSize { float x1; float x2; })arg5;
+ (id)_bottomColorForBackgroundImage:(id)arg1 viewSize:(struct CGSize { float x1; float x2; })arg2;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (int)state;
- (void)dealloc;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;
- (float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_setAutoAdjustTitle:(BOOL)arg1;
- (void)_navBarButtonPressed:(id)arg1;
- (void)_setNeedsLayoutForce:(BOOL)arg1;
- (id)_itemStack;
- (void)_drawPrompt:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withFont:(id)arg3 barStyle:(int)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForPrompt:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withFont:(id)arg3 barStyle:(int)arg4;
- (void)_removeAccessoryView;
- (void)setTopItemAlpha:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })availableTitleArea;
- (void)hideButtons;
- (void)setButton:(int)arg1 enabled:(BOOL)arg2;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2 leftBack:(BOOL)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2;
- (void)drawBackButtonBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withStyle:(int)arg2 pressed:(BOOL)arg3;
- (unsigned int)animationDisabledCount;
- (id)promptView;
- (id)currentRightView;
- (void)setRightMargin:(float)arg1;
- (id)buttonItemTextColor;
- (id)buttonItemShadowColor;
- (void)setForceFullHeightInLandscape:(BOOL)arg1;
- (void)_cancelInProgressPushOrPop;
- (void)setNavigationItems:(id)arg1;
- (void)_cancelInteractiveTransition:(float)arg1;
- (void)_finishInteractiveTransition:(float)arg1;
- (void)_updateInteractiveTransition:(float)arg1;
- (void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2;
- (void)setAccessoryView:(id)arg1 animate:(BOOL)arg2;
- (id)_defaultTitleFont;
- (void)_setDeferShadowToSearchBar:(BOOL)arg1;
- (void)_setHidesShadow:(BOOL)arg1;
- (BOOL)_hidesShadow;
- (float)titleVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)setTitleVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (id)titleTextAttributes;
- (void)setTitleTextAttributes:(id)arg1;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 rightViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 forViews:(id*)arg4;
- (float)defaultBackButtonAlignmentHeight;
- (id)_allViews;
- (void)_navigationAnimationDidFinish:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(float)arg2 rightBoundary:(float)arg3 tag:(int)arg4;
- (void)_backgroundFadeDidFinish:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)isTranslucent;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forItemAtIndex:(unsigned int)arg4;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 rightViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 forViews:(id*)arg4 forItemAtIndex:(unsigned int)arg5;
- (int)barStyle;
- (float)topItemAlpha;
- (void)showHideBackButtomAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)currentLeftView;
- (void)_hideButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_fadeViewsOut:(id)arg1;
- (void)_showLeftRightButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_incrementAnimationCountIfNecessary;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 rightViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (BOOL)_isIncomingButtonSameAsOutgoingButtonOnLeft:(BOOL)arg1;
- (void)_setLeftView:(id)arg1 rightView:(id)arg2;
- (id)createButtonWithContents:(id)arg1 width:(float)arg2 barStyle:(int)arg3 buttonStyle:(int)arg4 isRight:(BOOL)arg5;
- (void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4;
- (void)showButtonsWithLeft:(id)arg1 right:(id)arg2 leftBack:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })promptBounds;
- (void)_fadeViewsIn:(id)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)_shouldShowBackButtonForNavigationItem:(id)arg1;
- (id)backItem;
- (BOOL)_hasBackButton;
- (void)_setIsContainedInPopover:(BOOL)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)_updateNavigationBarItemsForStyle:(int)arg1;
- (void)_updateNavigationBarItemsForStyle:(int)arg1 previousTintColor:(id)arg2;
- (id)_currentRightViews;
- (id)_currentLeftViews;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(int)arg2;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(int)arg2 previousTintColor:(id)arg3;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)setBarStyle:(int)arg1;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (void)_alertIsDisappearing:(id)arg1;
- (void)_alertIsAppearing:(id)arg1;
- (void)_fadeAllViewsIn;
- (void)_fadeAllViewsOut;
- (void)_handleMouseUpAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_handleMouseDownAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_popForTouchAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_shouldPopForTouchAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)popNavigationItemAnimated:(BOOL)arg1;
- (void)setLocked:(BOOL)arg1;
- (id)backButtonViewAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_commonHitTest:(struct CGPoint { float x1; float x2; })arg1 forView:(id)arg2;
- (id)navigationItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_decrementAnimationCountIfNecessary;
- (void)_cancelInteractiveTransition;
- (unsigned int)_subviewIndexAboveBackground;
- (void)setItems:(id)arg1;
- (BOOL)forceFullHeightInLandscape;
- (void)_removeItemsFromSuperview:(id)arg1;
- (BOOL)_didVisibleItemsChangeWithNewItems:(id)arg1 oldItems:(id)arg2;
- (void)_setItems:(id)arg1 transition:(int)arg2;
- (int)_transitionForOldItems:(id)arg1 newItems:(id)arg2;
- (id)items;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)_startPopAnimationFromItems:(id)arg1 fromBarStyle:(int)arg2 toItems:(id)arg3 toBarStyle:(int)arg4;
- (id)navigationItems;
- (void)_prepareForPopAnimationWithNewTopItem:(id)arg1;
- (void)popNavigationItem;
- (id)_popNavigationItemWithTransition:(int)arg1;
- (void)_crossFadeToBarBackgroundImageForItem:(id)arg1;
- (void)_startBarStyleAnimation:(int)arg1 withTintColor:(id)arg2;
- (int)_currentBarStyle;
- (void)_startPushAnimationFromItems:(id)arg1 fromBarStyle:(int)arg2;
- (void)_resetBackgroundImageAsNecessary;
- (void)_setBarStyle:(int)arg1;
- (void)_prepareForPushAnimationWithItems:(id)arg1;
- (BOOL)isAnimationEnabled;
- (void)setTitleAutoresizesToFit:(BOOL)arg1;
- (BOOL)titleAutoresizesToFit;
- (int)_barStyle:(BOOL)arg1;
- (void)pushNavigationItem:(id)arg1;
- (void)_pushNavigationItem:(id)arg1 transition:(int)arg2;
- (void)_fadeViewOut:(id)arg1;
- (id)_defaultTitleFontFittingHeight:(float)arg1;
- (void)_setupTopNavItem:(id)arg1 oldTopNavItem:(id)arg2;
- (void)_commonNavBarInit;
- (void)_updateOpacity;
- (void)_handlePopSwipe:(id)arg1;
- (BOOL)_subclassImplementsDrawBackgroundInRect;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withStyle:(int)arg2;
- (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(int)arg1;
- (id)currentBackButton;
- (void)_updateBackgroundImage;
- (id)_shadowView;
- (void)_tintViewAppearanceDidChange;
- (void)_propagateEffectiveTintColorWithPreviousColor:(id)arg1;
- (id)_effectiveTintColor;
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)arg1;
- (void)_setButtonTextShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setPressedButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setBackButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_setBackgroundView:(id)arg1;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 forState:(unsigned int)arg3;
- (void)_applySPIAppearanceToButtons;
- (void)setPrompt:(id)arg1;
- (id)prompt;
- (void)setTitleView:(id)arg1;
- (BOOL)isMinibar;
- (void)showBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setLeftViews:(id)arg1 rightViews:(id)arg2;
- (void)updatePrompt;
- (void)_updateTitleView;
- (id)topItem;
- (id)_appearanceStorage;
- (BOOL)_deferShadowToSearchBar;
- (void)setShadowImage:(id)arg1;
- (id)shadowImage;
- (id)backgroundImageForBarMetrics:(int)arg1;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(int)arg2;
- (BOOL)_subclassImplementsDrawRect;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)enableAnimation;
- (void)disableAnimation;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)invalidateIntrinsicContentSize;
- (BOOL)_canDrawContent;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)isLocked;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)_statusBarTintColor;
- (id)_backgroundView;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_gkApplyTheme:(id)arg1;
- (void)_gkApplyTheme:(id)arg1 navbarStyle:(int)arg2;
- (void)setIUInterfaceStyle:(int)arg1;
- (int)IUInterfaceStyle;

@end
