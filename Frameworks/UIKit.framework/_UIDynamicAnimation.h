/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface _UIDynamicAnimation : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    int _state;
    unsigned int _began : 1;
    unsigned int _running : 1;
    unsigned int _yield : 1;
    unsigned int _grouped : 1;
    unsigned int _usesNSTimer : 1;
}

@property(readonly) int state;

+ (id)dynamicAnimationForView:(id)arg1 withInitialValue:(double)arg2 velocity:(double)arg3 type:(int)arg4 anchorPoint:(struct CGPoint { float x1; float x2; })arg5;
+ (void)_updateAnimationsWithTimer:(id)arg1;
+ (void)_updateAnimations:(id)arg1;
+ (void)_updateAnimations:(id)arg1 timer:(id)arg2;

- (int)state;
- (id)description;
- (void)dealloc;
- (id)init;
- (BOOL)_isRunning;
- (void)_setGrouped:(BOOL)arg1;
- (BOOL)_isGrouped;
- (void)_setUsesNSTimer:(BOOL)arg1;
- (void)_setShouldYield:(BOOL)arg1;
- (BOOL)_shouldYield;
- (void)_cancelWithAppliers:(id)arg1;
- (void)runWithCompletion:(id)arg1;
- (void)_callAppliers:(id)arg1 additionalEndAppliers:(id)arg2 done:(BOOL)arg3;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (void)stop;
- (void)runWithCompletion:(id)arg1 forScreen:(id)arg2 runLoopMode:(id)arg3;
- (BOOL)_animateForInterval:(double)arg1;
- (BOOL)_usesNSTimer;
- (void)_stopAnimation;

@end
