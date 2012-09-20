/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString;

@interface DOMKeyboardEvent : DOMUIEvent  {
}

@property(readonly) NSString * keyIdentifier;
@property(readonly) unsigned int keyLocation;
@property(readonly) BOOL ctrlKey;
@property(readonly) BOOL shiftKey;
@property(readonly) BOOL altKey;
@property(readonly) BOOL metaKey;
@property(readonly) BOOL altGraphKey;
@property(readonly) int keyCode;
@property(readonly) int charCode;


- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10;
- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 altGraphKey:(BOOL)arg11;
- (BOOL)getModifierState:(id)arg1;
- (int)charCode;
- (int)keyCode;
- (BOOL)altGraphKey;
- (unsigned int)keyLocation;
- (id)keyIdentifier;
- (BOOL)metaKey;
- (BOOL)altKey;
- (BOOL)shiftKey;
- (BOOL)ctrlKey;

@end
