/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMWheelEvent : DOMUIEvent  {
}

@property(readonly) int screenX;
@property(readonly) int screenY;
@property(readonly) int clientX;
@property(readonly) int clientY;
@property(readonly) BOOL ctrlKey;
@property(readonly) BOOL shiftKey;
@property(readonly) BOOL altKey;
@property(readonly) BOOL metaKey;
@property(readonly) int wheelDelta;
@property(readonly) int wheelDeltaX;
@property(readonly) int wheelDeltaY;
@property(readonly) int offsetX;
@property(readonly) int offsetY;
@property(readonly) int x;
@property(readonly) int y;
@property(readonly) BOOL isHorizontal;


- (BOOL)isHorizontal;
- (int)y;
- (int)x;
- (void)initWheelEvent:(int)arg1 wheelDeltaY:(int)arg2 view:(id)arg3 screenX:(int)arg4 screenY:(int)arg5 clientX:(int)arg6 clientY:(int)arg7 ctrlKey:(BOOL)arg8 altKey:(BOOL)arg9 shiftKey:(BOOL)arg10 metaKey:(BOOL)arg11;
- (BOOL)webkitDirectionInvertedFromDevice;
- (int)wheelDeltaY;
- (int)wheelDeltaX;
- (int)wheelDelta;
- (int)offsetY;
- (int)offsetX;
- (int)clientY;
- (int)clientX;
- (int)screenY;
- (int)screenX;
- (BOOL)metaKey;
- (BOOL)altKey;
- (BOOL)shiftKey;
- (BOOL)ctrlKey;

@end
