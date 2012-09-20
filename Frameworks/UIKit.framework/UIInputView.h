/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIInputViewContent, UIView;

@interface UIInputView : UIView  {
    _UIInputViewContent *_leftContentView;
    _UIInputViewContent *_rightContentView;
    float _contentRatio;
    struct CGSize { 
        float width; 
        float height; 
    } _leftContentSize;
    struct CGSize { 
        float width; 
        float height; 
    } _rightContentSize;
    struct CGSize { 
        float width; 
        float height; 
    } _defaultSize;
    float _gapWidth;
    float _leftOffset;
    BOOL _isTransitioning;
    float _transitionGap;
    float _transitionLeftOffset;
    float _transitionRatio;
}

@property(readonly) UIView * leftContentView;
@property(readonly) UIView * rightContentView;
@property float contentRatio;
@property struct CGSize { float x1; float x2; } leftContentViewSize;
@property struct CGSize { float x1; float x2; } rightContentViewSize;


- (void)dealloc;
- (void)setRightContentViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setLeftContentViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)willBeginSplitTransition;
- (float)contentRatio;
- (float)_additionalClipHeight;
- (void)_setNeedsContentSizeUpdate;
- (id)rightContentView;
- (id)leftContentView;
- (void)setContentRatio:(float)arg1;
- (void)_setProgress:(float)arg1 boundedBy:(float)arg2;
- (void)_endSplitTransitionIfNeeded:(BOOL)arg1;
- (void)_beginSplitTransitionIfNeeded:(float)arg1 gapWidth:(float)arg2;
- (BOOL)_isToolbars;
- (void)didEndSplitTransition;
- (void)_setLeftOffset:(float)arg1 gapWidth:(float)arg2;
- (BOOL)_supportsSplit;
- (struct CGSize { float x1; float x2; })_defaultSize;
- (struct CGSize { float x1; float x2; })rightContentViewSize;
- (struct CGSize { float x1; float x2; })leftContentViewSize;
- (void)_updateClipCorners;
- (int)_clipCornersOfView:(id)arg1;
- (BOOL)_isTransitioning;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
