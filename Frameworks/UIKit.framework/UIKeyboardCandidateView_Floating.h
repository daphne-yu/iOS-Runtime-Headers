/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateView_Floating : UIKeyboardCandidateView <UIKeyboardCandidateViewInline> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _collapsedRect;
    struct CGSize { 
        float width; 
        float height; 
    } presentationSize;
}

@property struct CGSize { float x1; float x2; } presentationSize;

+ (float)defaultExtendedControlHeight;

- (struct CGSize { float x1; float x2; })presentationSize;
- (void)setPresentationSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)_numberOfColumns:(BOOL)arg1;
- (void)setCandidateBarExtended:(BOOL)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)activeCandidateList;
- (void)candidatesDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
