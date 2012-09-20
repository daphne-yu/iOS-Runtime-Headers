/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraRoundedRectView : UIView  {
    float outlineWidth;
    float outsideCornerRadius;
    float insideCornerRadius;
    float fillAlpha;
    float strokeWidth;
    float strokeAlpha;
}

@property float outlineWidth;
@property float outsideCornerRadius;
@property float insideCornerRadius;
@property float fillAlpha;
@property float strokeWidth;
@property float strokeAlpha;


- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOutlineWidth:(float)arg1;
- (float)outlineWidth;
- (void)setStrokeAlpha:(float)arg1;
- (void)setStrokeWidth:(float)arg1;
- (void)setFillAlpha:(float)arg1;
- (void)setInsideCornerRadius:(float)arg1;
- (void)setOutsideCornerRadius:(float)arg1;
- (float)insideCornerRadius;
- (float)outsideCornerRadius;
- (float)strokeAlpha;
- (float)fillAlpha;
- (float)strokeWidth;

@end
