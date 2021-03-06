/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKPassGroupViewDelegate>, NSMutableDictionary, PKGroup, PKPassView, PKReusablePassViewQueue, UIInterpolatingMotionEffect, UILongPressGestureRecognizer, UIPageControl, UIPanGestureRecognizer, UIScrollView, UIView;

@interface PKPassGroupView : UIView <WLCardViewDelegate, PKGroupDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate> {
    BOOL _canPan;
    <PKPassGroupViewDelegate> *_delegate;
    float _dimmerValue;
    UIView *_dimmerView;
    unsigned int _displayIndex;
    PKGroup *_group;
    UIInterpolatingMotionEffect *_horizontalMotionEffect;
    float _horizontalMotionRelativeValue;
    UIScrollView *_horizontalScrollView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIPageControl *_pageControl;
    UIPanGestureRecognizer *_panGestureRecognizer;
    PKReusablePassViewQueue *_passViewQueue;
    NSMutableDictionary *_passViewsByUniqueID;
    int _presentationState;
    BOOL _showPageControl;
    UIInterpolatingMotionEffect *_verticalMotionEffect;
    float _verticalMotionRelativeValue;
}

@property(readonly) <PKPassGroupViewDelegate> * delegate;
@property(readonly) unsigned int displayIndex;
@property(readonly) PKPassView * frontmostPassView;
@property(retain) PKGroup * group;
@property float horizontalMotionRelativeValue;
@property(readonly) UIPageControl * pageControl;
@property PKReusablePassViewQueue * passViewQueue;
@property int presentationState;
@property float verticalMotionRelativeValue;

- (void)_addPanAndLongPressGestureRecognizers;
- (struct CGSize { float x1; float x2; })_contentSize;
- (int)_defaultContentModeForIndex:(unsigned int)arg1;
- (void)_enumerateCardViewsByStackOrderWithBlock:(id)arg1;
- (void)_evictUnusedViews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_fanningFrameForCardView:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_handleLongPress:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (id)_loadCardViewForIndex:(unsigned int)arg1 contentMode:(int)arg2;
- (id)_loadCardViewForUniqueID:(id)arg1;
- (void)_loadNeededViews;
- (void)_pageControlChanged:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_pagingFrameForCardView:(id)arg1 atIndex:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfVisibleIndexes;
- (void)_removePanAndLongPressGestureRecognizers;
- (void)_setupPageControl;
- (void)_setupViewsForFanningWithAnimation:(BOOL)arg1 resizeCards:(BOOL)arg2;
- (void)_setupViewsForPagingWithAnimation:(BOOL)arg1 resizeCards:(BOOL)arg2;
- (void)_setupViewsForPileWithAnimation:(BOOL)arg1 resizeCards:(BOOL)arg2;
- (void)_setupViewsForStackingWithAnimation:(BOOL)arg1 resizeCards:(BOOL)arg2;
- (void)_showFrontmostPassOnly:(BOOL)arg1;
- (id)_stackIndexesFromVisibleIndexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_tilePagesEagerly:(BOOL)arg1;
- (id)_uniqueIDsOfVisibleCards;
- (void)_updatePageControl;
- (void)applyDefaultModeForPassesWithDuration:(double)arg1;
- (void)dealloc;
- (id)delegate;
- (unsigned int)displayIndex;
- (void)flipPassViewForPass:(id)arg1 animated:(BOOL)arg2 fromLeft:(BOOL)arg3;
- (id)frontmostPassView;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned int)arg3;
- (void)group:(id)arg1 didMovePassFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned int)arg3;
- (void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned int)arg3;
- (id)group;
- (id)groupID;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (float)horizontalMotionRelativeValue;
- (id)initWithGroup:(id)arg1 delegate:(id)arg2 contentMode:(int)arg3;
- (id)pageControl;
- (BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2;
- (BOOL)passViewBackGrowsCentered:(id)arg1;
- (void)passViewDidFlip:(id)arg1 animated:(BOOL)arg2;
- (id)passViewQueue;
- (BOOL)passViewShouldFlip:(id)arg1;
- (void)passViewTapped:(id)arg1;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)presentPassWithUniqueID:(id)arg1;
- (int)presentationState;
- (void)removeFromSuperview;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setDimmer:(float)arg1 animated:(BOOL)arg2;
- (void)setGroup:(id)arg1;
- (void)setHorizontalMotionEnabled:(BOOL)arg1;
- (void)setHorizontalMotionRelativeValue:(float)arg1;
- (void)setPassViewQueue:(id)arg1;
- (void)setPresentationState:(int)arg1 animated:(BOOL)arg2 resizePasses:(BOOL)arg3;
- (void)setPresentationState:(int)arg1 animated:(BOOL)arg2;
- (void)setPresentationState:(int)arg1;
- (void)setShowPageControlWithAnimation:(BOOL)arg1 duration:(double)arg2 delay:(double)arg3;
- (void)setVerticalMotionEnabled:(BOOL)arg1;
- (void)setVerticalMotionRelativeValue:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (float)verticalMotionRelativeValue;

@end
