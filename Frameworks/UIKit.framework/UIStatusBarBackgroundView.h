/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarCorners, UIColor, UIImageView;

@interface UIStatusBarBackgroundView : UIView  {
    int _style;
    UIColor *_tintColor;
    UIStatusBarCorners *_topCorners;
    UIImageView *_glowView;
    BOOL _glowEnabled;
    BOOL _suppressGlow;
}


- (void)dealloc;
- (void)setSuppressesGlow:(BOOL)arg1;
- (void)setGlowAnimationEnabled:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2 tintColor:(id)arg3;
- (id)_imageNameForStyle:(int)arg1;
- (id)_glowImageForStyle:(int)arg1;
- (BOOL)_styleCanGlow:(int)arg1;
- (void)_stopGlowAnimation;
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)arg1;
- (void)_setGlowAnimationEnabled:(BOOL)arg1 waitForNextCycle:(BOOL)arg2;
- (BOOL)_topCornersAreRoundedForStyle:(int)arg1;
- (id)_baseImageForStyle:(int)arg1;
- (int)style;
- (id)tintColor;

@end
