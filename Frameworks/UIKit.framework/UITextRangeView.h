/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UITouch, UISelectionGrabber, UIResponder<UITextInput>, UITextSelectionView, NSMutableArray;

@interface UITextRangeView : UIView  {
    UITextSelectionView *m_selectionView;
    UIResponder<UITextInput> *m_container;
    int m_mode;
    NSArray *m_rects;
    NSMutableArray *m_rectViews;
    UITouch *m_activeTouch;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_startEdge;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_endEdge;
    struct CGPoint { 
        float x; 
        float y; 
    } m_basePoint;
    struct CGPoint { 
        float x; 
        float y; 
    } m_extentPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } m_initialBasePoint;
    struct CGPoint { 
        float x; 
        float y; 
    } m_initialExtentPoint;
    float m_initialDistance;
    struct CGPoint { 
        float x; 
        float y; 
    } m_touchOffset;
    double m_firstMovedTime;
    UISelectionGrabber *m_startGrabber;
    UISelectionGrabber *m_endGrabber;
    BOOL m_animateUpdate;
    BOOL m_baseIsStart;
    BOOL m_commandsWereShowing;
    BOOL m_inGesture;
    BOOL m_magnifying;
    BOOL m_scrolling;
    BOOL m_scaling;
    BOOL m_rotating;
    BOOL m_inputViewIsChanging;
}

@property(readonly) UITextSelectionView * selectionView;
@property(readonly) UIResponder<UITextInput> * container;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } startEdge;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } endEdge;
@property struct CGPoint { float x1; float x2; } basePoint;
@property struct CGPoint { float x1; float x2; } extentPoint;
@property int mode;
@property(retain) NSArray * rects;
@property(readonly) BOOL autoscrolled;
@property BOOL inGesture;
@property BOOL isScrolling;
@property BOOL rotating;
@property BOOL scaling;
@property BOOL inputViewIsChanging;
@property(retain) UITouch * activeTouch;
@property BOOL baseIsStart;
@property struct CGPoint { float x1; float x2; } initialBasePoint;
@property struct CGPoint { float x1; float x2; } initialExtentPoint;
@property float initialDistance;
@property struct CGPoint { float x1; float x2; } touchOffset;
@property double firstMovedTime;
@property(retain) UISelectionGrabber * startGrabber;
@property(retain) UISelectionGrabber * endGrabber;
@property BOOL animateUpdate;
@property BOOL commandsWereShowing;
@property BOOL magnifying;


- (void)dealloc;
- (BOOL)inputViewIsChanging;
- (BOOL)rotating;
- (BOOL)scaling;
- (BOOL)isScrolling;
- (BOOL)magnifying;
- (BOOL)animateUpdate;
- (void)setEndGrabber:(id)arg1;
- (void)setStartGrabber:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertFromMagnifierPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBasePoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setMagnifierOrientation;
- (struct CGPoint { float x1; float x2; })touchOffset;
- (void)setTouchOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInputViewIsChanging:(BOOL)arg1;
- (void)setRotating:(BOOL)arg1;
- (void)setScaling:(BOOL)arg1;
- (void)setMagnifying:(BOOL)arg1;
- (void)selectionAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)setAnimateUpdate:(BOOL)arg1;
- (void)setExtentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateGrabbers;
- (void)updateRectViews;
- (BOOL)commandsWereShowing;
- (struct CGPoint { float x1; float x2; })magnifierPoint;
- (float)initialDistance;
- (double)firstMovedTime;
- (void)setFirstMovedTime:(double)arg1;
- (void)beginMagnifying;
- (struct CGPoint { float x1; float x2; })applyTouchOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTouchOffset:(struct CGPoint { float x1; float x2; })arg1 touchPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)setInitialDistance:(float)arg1;
- (struct CGPoint { float x1; float x2; })initialExtentPoint;
- (struct CGPoint { float x1; float x2; })initialBasePoint;
- (void)setInitialExtentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })extentPoint;
- (void)setInitialBasePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })basePoint;
- (void)updateBaseAndExtentPointsFromEdges;
- (void)setBaseIsStart:(BOOL)arg1;
- (BOOL)pointCloserToEnd:(struct CGPoint { float x1; float x2; })arg1 startEdge:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 endEdge:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)setEndEdge:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStartEdge:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)container;
- (void)setCommandsWereShowing:(BOOL)arg1;
- (void)setEnclosingScrollViewsEnabled:(BOOL)arg1;
- (BOOL)_startIsHorizontal;
- (BOOL)_endIsHorizontal;
- (BOOL)baseIsStart;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endEdge;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })startEdge;
- (void)setIsScrolling:(BOOL)arg1;
- (id)endGrabber;
- (id)startGrabber;
- (void)cancelDelayedActions;
- (void)scaleDidChange;
- (void)scaleWillChange;
- (void)doneMagnifying;
- (void)prepareForMagnification;
- (id)rects;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selectionView:(id)arg2;
- (void)updateDots;
- (void)setRects:(id)arg1;
- (void)inputViewDidChange;
- (void)inputViewWillChange;
- (void)didScroll;
- (void)willScroll;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)autoscrolled;
- (BOOL)inGesture;
- (void)updateSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInGesture:(BOOL)arg1;
- (id)activeTouch;
- (void)setActiveTouch:(id)arg1;
- (void)didRotate;
- (void)willRotate;
- (int)mode;
- (void)setMode:(int)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionClipRect;
- (id)selectionView;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;

@end
