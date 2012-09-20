/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSObject<CAStateControllerDelegate>, CALayer;

@interface CAStateController : NSObject  {
    struct _CAStateControllerData { id x1; struct __CFDictionary {} *x2; id x3; id x4; } *_data;
}

@property(readonly) CALayer * layer;
@property NSObject<CAStateControllerDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (id)layer;
- (void)cancelTimers;
- (void)_removeTransition:(id)arg1 layer:(id)arg2;
- (void)restoreStateChanges:(id)arg1;
- (id)removeAllStateChanges;
- (void)setInitialStatesOfLayer:(id)arg1;
- (void)setState:(id)arg1 ofLayer:(id)arg2;
- (id)stateOfLayer:(id)arg1;
- (void)_addAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 undo:(id)arg4;
- (void)_applyTransitionElement:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4;
- (void)setInitialStatesOfLayer:(id)arg1 transitionSpeed:(float)arg2;
- (void)setState:(id)arg1 ofLayer:(id)arg2 transitionSpeed:(float)arg3;
- (void)_nextStateTimer:(id)arg1;
- (void)_applyTransition:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4;

@end
