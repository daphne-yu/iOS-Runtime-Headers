/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UIColor, NSString, NSSet;

@interface UINavigationButton : UIButton  {
    NSSet *_possibleTitles;
    int _style;
    int _barStyle;
    UIColor *_navigationBarTintColor;
    struct CGSize { 
        float width; 
        float height; 
    } _boundsAdjustment;
    id _appearanceStorage;
    NSSet *_possibleSystemItems;
    unsigned int _size : 2;
    unsigned int _pad : 30;
    float _minimumWidth;
    float _maximumWidth;
}

@property(retain) NSString * title;
@property(retain) UIImage * image;
@property int barStyle;
@property int style;
@property int controlSize;
@property(retain) UIColor * tintColor;
@property float minimumWidth;
@property float maximumWidth;

+ (id)defaultFont;

- (void)dealloc;
- (float)maximumWidth;
- (float)minimumWidth;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (struct UIOffset { float x1; float x2; })_titlePositionAdjustmentForBarMetrics:(int)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)_titleTextAttributesForState:(unsigned int)arg1;
- (id)_backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBoundsAdjustment:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithImage:(id)arg1 style:(int)arg2;
- (id)initWithImage:(id)arg1 width:(float)arg2 style:(int)arg3;
- (id)initWithImage:(id)arg1 width:(float)arg2 style:(int)arg3 applyBezel:(BOOL)arg4 forBarStyle:(int)arg5 buttonItemStyle:(int)arg6;
- (id)initWithTitle:(id)arg1 possibleTitles:(id)arg2 style:(int)arg3;
- (id)initWithTitle:(id)arg1 style:(int)arg2;
- (void)setMaximumWidth:(float)arg1;
- (void)setMinimumWidth:(float)arg1;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_setTintColor:(id)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (int)controlSize;
- (void)_adjustBounds;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithValue:(id)arg1 width:(float)arg2 style:(int)arg3 barStyle:(int)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6;
- (id)initWithValue:(id)arg1 width:(float)arg2 style:(int)arg3 barStyle:(int)arg4 possibleTitles:(id)arg5 possibleSystemItems:(id)arg6 tintColor:(id)arg7 applyBezel:(BOOL)arg8 forButtonItemStyle:(int)arg9;
- (void)_updateStyle;
- (void)_updateTitleColorsForState:(unsigned int)arg1;
- (void)_updateContentInsets;
- (int)_barButtonItemStyle;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned int)arg2;
- (id)_defaultTitleShadowColorForState:(unsigned int)arg1;
- (id)_defaultTitleColorForState:(unsigned int)arg1;
- (struct UIOffset { float x1; float x2; })_defaultTitleShadowOffsetForState:(unsigned int)arg1;
- (id)_tintColor;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (id)image;
- (int)barStyle;
- (int)style;
- (BOOL)contentsEqualTo:(id)arg1 withStyle:(int)arg2;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)setNavigationBarTintColor:(id)arg1;
- (void)setBarStyle:(int)arg1;
- (void)setControlSize:(int)arg1;
- (void)setStyle:(int)arg1;
- (id)initWithTitle:(id)arg1;
- (id)title;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_scriptingInfo;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithImage:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setTitle:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setImage:(id)arg1;

@end
