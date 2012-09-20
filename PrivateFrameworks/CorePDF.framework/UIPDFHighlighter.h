/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSMutableArray;

@interface UIPDFHighlighter : NSObject  {
    NSMutableArray *_highLightLayers;
    struct CGColor { } *_highlightColor;
    struct CGColor { } *_borderColor;
    struct CGColor { } *_whiteColor;
    struct CGPDFPage { } *_page;
    float _enlargeFactor;
    float _pdfToViewScale;
    float inset;
}

@property float inset;


- (void)addHighlightFor:(id)arg1 to:(id)arg2 animated:(BOOL)arg3;
- (void)unhide;
- (void)addHighlightLayerFor:(id)arg1 atIndex:(unsigned int)arg2 to:(id)arg3 animated:(BOOL)arg4;
- (void)makeTheBorderPath:(id)arg1 layer:(id)arg2 rectangle:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })arg3 upright:(BOOL)arg4;
- (void)makeTheClipPath:(id)arg1 layer:(id)arg2 rectangle:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })arg3 upright:(BOOL)arg4;
- (float)inset;
- (void)addRectPath:(struct CGPath { }*)arg1 toView:(id)arg2 layer:(id)arg3 rectangle:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })arg4 upright:(BOOL)arg5;
- (void)dealloc;
- (id)init;
- (void)addAnimation:(id)arg1;
- (void)clear;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)setInset:(float)arg1;
- (void)setNeedsDisplay;

@end
