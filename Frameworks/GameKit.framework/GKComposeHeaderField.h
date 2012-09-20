/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKComposeHeaderFieldBackgroundView, UILabel;

@interface GKComposeHeaderField : UIImageView  {
    float _baselineNudge;
    GKComposeHeaderFieldBackgroundView *_backgroundView;
    float _verticalMargin;
    UILabel *_nameLabel;
    UILabel *_valueLabel;
    unsigned int _maxLineCount;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
    SEL _actionWhenTouched;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property(retain) UILabel * nameLabel;
@property(retain) UILabel * valueLabel;
@property(retain) GKComposeHeaderFieldBackgroundView * backgroundView;
@property float verticalMargin;
@property float baselineNudge;
@property unsigned int maxLineCount;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } valueFrame;
@property(retain) NSString * nameText;
@property(retain) NSString * valueText;
@property SEL actionWhenTouched;


- (void)setActionWhenTouched:(SEL)arg1;
- (SEL)actionWhenTouched;
- (unsigned int)maxLineCount;
- (void)setValueLabel:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setVerticalMargin:(float)arg1;
- (void)setBaselineNudge:(float)arg1;
- (id)valueText;
- (id)nameText;
- (void)layoutForSize:(struct CGSize { float x1; float x2; })arg1 contentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 nameFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 valueFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (float)baselineNudge;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustValueFrameIfNeeded:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)verticalMargin;
- (id)attributesForValueText;
- (id)valueLabel;
- (id)nameLabel;
- (void)setMaxLineCount:(unsigned int)arg1;
- (void)setNameText:(id)arg1;
- (void)setValueText:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })valueFrame;
- (void)dealloc;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)viewForBaselineLayout;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
