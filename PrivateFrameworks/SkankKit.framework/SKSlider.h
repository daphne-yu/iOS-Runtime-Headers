/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@class DPTextLayer;

@interface SKSlider : SKControl  {
    DPTextLayer *_title;
    DPTextLayer *_readout;
    double _value;
    double _min;
    double _max;
    double _increment;
    BOOL _dragOnly;
    BOOL _dragOnSlider;
}


- (id)init;
- (void)setMinValue:(double)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sliderBounds;
- (void)setMaxValue:(double)arg1;
- (double)value;
- (void)setValue:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setReadoutText:(id)arg1;
- (void)setHasReadout:(BOOL)arg1;
- (void)setDragOnSlider:(BOOL)arg1;
- (void)setDragOnly:(BOOL)arg1;
- (void)setIncrement:(double)arg1;
- (void)decrement;
- (void)adjustReadoutFrame;
- (void)adjustTitleFrame;
- (BOOL)handleEvent:(struct __GSEvent { }*)arg1 inLayer:(id)arg2;
- (void)increment;
- (void)drawInContext:(struct CGContext { }*)arg1;

@end
