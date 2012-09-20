/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKStretchableRibbonButton : GKButton  {
    float _idealWidth;
}

@property float idealWidth;

+ (float)minimumWidthForString:(id)arg1;

- (void)setIdealWidth:(float)arg1;
- (float)idealWidth;
- (void)updateLetterpressStyle;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_gkPopoverPresentationInsets;
- (id)_backgroundForState:(unsigned int)arg1 usesBackgroundForNormalState:(BOOL*)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
