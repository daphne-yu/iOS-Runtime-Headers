/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class STAnimatableButtonSlice, UIImage, UIColor, STShadowLabel;

@interface STAnimatableButton : UIView <STAnimatableButtonSliceDelegate> {
    UIImage *_image;
    UIImage *_normalImage;
    UIImage *_highlightedImage;
    STShadowLabel *_titleLabel;
    STShadowLabel *_subtitleLabel;
    id _target;
    SEL _action;
    BOOL _isLandscape;
    BOOL _touchInside;
    BOOL _slicesNeedDisplay;
    UIColor *_shadowColor;
    float _shadowBlurRadius;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _hitRectEdgeInsets;
    STAnimatableButtonSlice *_leftSlice;
    STAnimatableButtonSlice *_middleSlice;
    STAnimatableButtonSlice *_rightSlice;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } hitRectEdgeInsets;


- (void)dealloc;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setSubtitle:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (id)_buttonWellImage;
- (id)_buttonWellLandscapeImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })hitRectEdgeInsets;
- (void)drawImageForSlice;
- (void)setShadowColor:(id)arg1 blurRadius:(float)arg2;
- (void)setLandscape:(BOOL)arg1;
- (void)setHighlightedBackgroundImage:(id)arg1;
- (void)setNormalBackgroundImage:(id)arg1;
- (void)setHitRectEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end
