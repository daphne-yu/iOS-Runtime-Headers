/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@interface SKLayer : CALayer  {
    id _context;
    BOOL _drawsBorder;
}

+ (void)initialize;
+ (void)createColors;

- (void)flipHorizontal;
- (void)dealloc;
- (id)init;
- (void)setContext:(id)arg1;
- (id)context;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)rotateC;
- (void)rotate180;
- (void)rotateCC;
- (void)drawLineInContext:(struct CGContext { }*)arg1 from:(struct CGPoint { float x1; float x2; })arg2 to:(struct CGPoint { float x1; float x2; })arg3 thickness:(float)arg4 color:(struct CGColor { }*)arg5;
- (void)flipVertical;
- (void)logBounds;
- (void)logFrame;
- (void)drawRectInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 thickness:(float)arg3 strokeColor:(struct CGColor { }*)arg4 fillColor:(struct CGColor { }*)arg5;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)setDrawsBorder:(BOOL)arg1;

@end
