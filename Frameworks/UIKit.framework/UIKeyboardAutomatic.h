/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardAutomatic : UIKeyboard  {
    BOOL showsCandidateBar;
    BOOL showsCandidateInline;
    BOOL caretBlinks;
}

@property BOOL showsCandidateBar;
@property BOOL showsCandidateInline;
@property BOOL caretBlinks;


- (void)dealloc;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })geometryForHeightDelta:(float)arg1;
- (void)didSuspend:(id)arg1;
- (void)willResume:(id)arg1;
- (BOOL)_isAutomaticKeyboard;
- (void)maximize;
- (void)minimize;
- (void)setShowsCandidateInline:(BOOL)arg1;
- (BOOL)caretBlinks;
- (BOOL)isActive;
- (void)implBoundsHeightChangeDone:(float)arg1 suppressNotification:(BOOL)arg2;
- (void)prepareForImplBoundsHeightChange:(float)arg1 suppressNotification:(BOOL)arg2;
- (void)setShowsCandidateBar:(BOOL)arg1;
- (BOOL)showsCandidateInline;
- (BOOL)showsCandidateBar;
- (void)activate;
- (void)setCaretBlinks:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
