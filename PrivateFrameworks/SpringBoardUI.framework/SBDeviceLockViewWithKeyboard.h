/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIKeyboard;

@interface SBDeviceLockViewWithKeyboard : SBDeviceLockView  {
    UIKeyboard *_keyboard;
    BOOL _isAnimating;
    BOOL _wasMinimizedWhenAnimationStarted;
    BOOL _triedToMinMaxWhileRotating;
    BOOL _previousKeyboardShowedInlineCandidates;
}


- (void)returnKeyPressed:(id)arg1;
- (void)dealloc;
- (void)maximize;
- (void)minimize;
- (void)setMinimized:(BOOL)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })keyboardFrameForInterfaceOrientation:(int)arg1;
- (void)_acceptOrCancelReturnKeyPress;
- (void)_layoutEntryView;
- (void)didAnimateToInterfaceOrientation:(int)arg1;
- (void)willAnimateToInterfaceOrientation:(int)arg1;
- (void)_layoutForCurrentOrientation;
- (void)animateToInterfaceInterfaceOrientation:(int)arg1;
- (BOOL)isKeypadMinimized;
- (void)geometryChanged:(id)arg1;
- (BOOL)canMinMaxKeyboard;
- (id)keypadView;
- (id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2 showsEmergencyCall:(BOOL)arg3;

@end
