/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation  {
}

@property(copy) NSString * keyPath;
@property(getter=isAdditive) BOOL additive;
@property(getter=isCumulative) BOOL cumulative;
@property(retain) CAValueFunction * valueFunction;

+ (id)animationWithKeyPath:(id)arg1;

- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (void)setKeyPath:(id)arg1;
- (id)keyPath;
- (id)valueFunction;
- (void)setAdditive:(BOOL)arg1;
- (BOOL)isAdditive;
- (void)setValueFunction:(id)arg1;
- (BOOL)cumulative;
- (BOOL)additive;
- (void)setCumulative:(BOOL)arg1;
- (BOOL)isCumulative;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; void *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg1 layer:(id)arg2;

@end
