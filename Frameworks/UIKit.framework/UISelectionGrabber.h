/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISelectionGrabberDot, UITextRangeView;

@interface UISelectionGrabber : UIView  {
    UISelectionGrabberDot *m_dotView;
    BOOL m_isDotted;
    BOOL m_activeFlattened;
    BOOL m_alertFlattened;
    BOOL m_navigationTransitionFlattened;
    BOOL m_animating;
    int m_orientation;
    int _applicationDeactivationReason;
}

@property BOOL isDotted;
@property BOOL activeFlattened;
@property BOOL alertFlattened;
@property BOOL navigationTransitionFlattened;
@property BOOL animating;
@property int orientation;
@property(readonly) UITextRangeView * hostView;

+ (id)_grabberDot;

- (void)dealloc;
- (BOOL)isPointedUp;
- (BOOL)isScaling;
- (BOOL)clipDot:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)dotIsVisbleInDocument:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)navigationTransitionFlattened;
- (BOOL)activeFlattened;
- (BOOL)alertFlattened;
- (BOOL)isPointedRight;
- (BOOL)isDotted;
- (void)setNavigationTransitionFlattened:(BOOL)arg1;
- (void)setActiveFlattened:(BOOL)arg1;
- (void)setAlertFlattened:(BOOL)arg1;
- (void)canExpandAfterNavigationTransition:(id)arg1;
- (void)mustFlattenForNavigationTransition:(id)arg1;
- (void)canExpandAfterBecomeActive:(id)arg1;
- (void)mustFlattenForResignActive:(id)arg1;
- (void)saveDeactivationReason:(id)arg1;
- (void)canExpandAfterAlert:(id)arg1;
- (void)mustFlattenForAlert:(id)arg1;
- (id)hostView;
- (BOOL)isPointedLeft;
- (BOOL)isPointedDown;
- (BOOL)isVertical;
- (BOOL)inputViewIsChanging;
- (BOOL)isScrolling;
- (void)setIsDotted:(BOOL)arg1;
- (void)updateDot;
- (BOOL)autoscrolled;
- (BOOL)animating;
- (void)setOrientation:(int)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)didMoveToSuperview;
- (BOOL)isRotating;
- (int)orientation;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (void)setHidden:(BOOL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
