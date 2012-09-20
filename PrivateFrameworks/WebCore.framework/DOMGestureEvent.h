/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class <DOMEventTarget>;

@interface DOMGestureEvent : DOMUIEvent  {
}

@property(readonly) <DOMEventTarget> * target;
@property(readonly) float scale;
@property(readonly) float rotation;
@property(readonly) BOOL ctrlKey;
@property(readonly) BOOL shiftKey;
@property(readonly) BOOL altKey;
@property(readonly) BOOL metaKey;


- (id)target;
- (float)rotation;
- (float)scale;
- (void)initGestureEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(BOOL)arg10 altKey:(BOOL)arg11 shiftKey:(BOOL)arg12 metaKey:(BOOL)arg13 target:(id)arg14 scale:(float)arg15 rotation:(float)arg16;
- (BOOL)metaKey;
- (BOOL)altKey;
- (BOOL)shiftKey;
- (BOOL)ctrlKey;

@end
