/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableSet, NSArray;

@interface UILongPressGestureRecognizer : UIGestureRecognizer  {
    NSArray *_touches;
    NSMutableSet *_activeTouches;
    unsigned int _numberOfTouchesRequired;
    double _minimumPressDuration;
    float _allowableMovement;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPointScreen;
    id _enoughTimeElapsed;
    id _tooMuchTimeElapsed;
    id _imp;
    unsigned int _gotTouchEnd : 1;
    unsigned int _gotTooMany : 1;
    unsigned int _gotEnoughTaps : 1;
    unsigned int _cancelPastAllowableMovement : 1;
}

@property unsigned int numberOfTapsRequired;
@property unsigned int numberOfTouchesRequired;
@property double minimumPressDuration;
@property float allowableMovement;
@property double delay;
@property(readonly) NSArray * touches;
@property(readonly) struct CGPoint { float x1; float x2; } startPoint;
@property(readonly) struct CGPoint { float x1; float x2; } centroid;
@property BOOL cancelPastAllowableMovement;

+ (void)addLongPressGestureRecognizerToView:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3 minimumPressDuration:(double)arg4 touchCount:(int)arg5;

- (void)invalidate;
- (void)dealloc;
- (float)allowableMovement;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (BOOL)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)setCancelPastAllowableMovement:(BOOL)arg1;
- (BOOL)cancelPastAllowableMovement;
- (double)minimumPressDuration;
- (void)_startTapFinishedTimer;
- (void)startTimer;
- (struct CGPoint { float x1; float x2; })centroidScreen;
- (void)tooMuchElapsed:(id)arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (void)setTouches:(id)arg1;
- (void)clearTimer;
- (id)touches;
- (struct CGPoint { float x1; float x2; })centroid;
- (void)setAllowableMovement:(float)arg1;
- (void)_resetGestureRecognizer;
- (struct CGPoint { float x1; float x2; })locationOfTouch:(unsigned int)arg1 inView:(id)arg2;
- (void)setNumberOfTapsRequired:(unsigned int)arg1;
- (void)setNumberOfTouchesRequired:(unsigned int)arg1;
- (void)setDelay:(double)arg1;
- (double)delay;
- (unsigned int)numberOfTapsRequired;
- (unsigned int)numberOfTouchesRequired;
- (struct CGPoint { float x1; float x2; })startPoint;
- (void)setMinimumPressDuration:(double)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (unsigned int)numberOfTouches;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (void)setView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
