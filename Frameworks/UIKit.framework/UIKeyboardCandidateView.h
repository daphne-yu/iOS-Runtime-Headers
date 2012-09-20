/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIKeyboardCandidateSplitKeyboardToggleButton, UIKeyboardCandidateSortControl, UIKeyboardCandidateGrid, UIKeyboardCandidateUnsplitKeyboardToggleButton, UIKeyboardCandidateBar;

@interface UIKeyboardCandidateView : UIInputView  {
    UIKeyboardCandidateBar *_bar;
    UIKeyboardCandidateSortControl *_sortControl;
    UIKeyboardCandidateGrid *_extendedView;
    UIImageView *_leftBackground;
    UIImageView *_rightBackground;
    UIKeyboardCandidateUnsplitKeyboardToggleButton *_leftButton;
    UIKeyboardCandidateSplitKeyboardToggleButton *_rightButton;
    struct { 
        unsigned int isExtended; 
        unsigned int didMinimizeKeyboard; 
        unsigned int isSplit; 
    } _candidateBarFlags;
}

+ (id)sharedInstance;
+ (float)defaultExtendedControlHeight;
+ (void)setActiveCandidateView:(id)arg1;
+ (id)activeCandidateList;
+ (id)activeCandidateView;

- (void)dealloc;
- (void)_toggleExtendedCandidateView:(id)arg1;
- (void)setCandidateBarExtended:(BOOL)arg1;
- (unsigned int)_numberOfColumns:(BOOL)arg1;
- (void)setCandidateBarCanExtend:(BOOL)arg1;
- (void)updatePageControlStatus;
- (id)activeCandidateList;
- (void)candidatesDidChange;
- (void)willMoveToSuperview:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
