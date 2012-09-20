/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSArray, UIWindow, NSMutableArray;

@interface UITouch : NSObject  {
    float _movementMagnitudeSquared;
    double _timestamp;
    int _phase;
    int _savedPhase;
    unsigned int _tapCount;
    UIWindow *_window;
    UIView *_view;
    UIView *_gestureView;
    UIView *_warpedIntoView;
    NSMutableArray *_gestureRecognizers;
    NSMutableArray *_forwardingRecord;
    struct CGPoint { 
        float x; 
        float y; 
    } _locationInWindow;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousLocationInWindow;
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    float _pathMajorRadius;
    struct { 
        unsigned int _firstTouchForView : 1; 
        unsigned int _isTap : 1; 
        unsigned int _isDelayed : 1; 
        unsigned int _sentTouchesEnded : 1; 
        unsigned int _abandonForwardingRecord : 1; 
    } _touchFlags;
    BOOL _eaten;
}

@property double timestamp;
@property int phase;
@property unsigned int tapCount;
@property BOOL isTap;
@property BOOL sentTouchesEnded;
@property(retain) UIWindow * window;
@property(retain) UIView * view;
@property(retain) UIView * gestureView;
@property(retain) UIView * warpedIntoView;
@property(readonly) double timestamp;
@property(readonly) int phase;
@property(readonly) unsigned int tapCount;
@property(readonly) UIWindow * window;
@property(readonly) UIView * view;
@property(readonly) NSArray * gestureRecognizers;
@property(setter=_setPathIndex:) unsigned char _pathIndex;
@property(setter=_setPathIdentity:) unsigned char _pathIdentity;
@property(setter=_setPathMajorRadius:) float _pathMajorRadius;
@property(getter=_isEaten,setter=_setEaten:) BOOL _eaten;

+ (id)_createTouchesWithGSEvent:(struct __GSEvent { }*)arg1 phase:(int)arg2 view:(id)arg3;

- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (id)description;
- (float)_pathMajorRadius;
- (unsigned char)_pathIndex;
- (void)dealloc;
- (float)_distanceFrom:(id)arg1 inView:(id)arg2;
- (BOOL)_isStationaryRelativeToTouches:(id)arg1;
- (int)_compareIndex:(id)arg1;
- (struct CGPoint { float x1; float x2; })_previousLocationInWindow:(id)arg1;
- (struct CGPoint { float x1; float x2; })_locationInWindow:(id)arg1;
- (id)_phaseDescription;
- (void)_loadStateFromTouch:(id)arg1;
- (void)setIsDelayed:(BOOL)arg1;
- (int)info;
- (BOOL)_isFirstTouchForView;
- (void)_removeGestureRecognizer:(id)arg1;
- (BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (id)_forwardingRecord;
- (unsigned int)tapCount;
- (struct CGPoint { float x1; float x2; })previousLocationInView:(id)arg1;
- (void)_popPhase;
- (void)_pushPhase:(int)arg1;
- (BOOL)isDelayed;
- (id)_gestureRecognizers;
- (void)setSentTouchesEnded:(BOOL)arg1;
- (void)_addGestureRecognizer:(id)arg1;
- (void)_clearGestureRecognizers;
- (id)gestureView;
- (unsigned char)_pathIdentity;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (void)_updateMovementMagnitudeForLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setIsFirstTouchForView:(BOOL)arg1;
- (void)_setLocationInWindow:(struct CGPoint { float x1; float x2; })arg1 resetPrevious:(BOOL)arg2;
- (void)setWarpedIntoView:(id)arg1;
- (id)warpedIntoView;
- (void)_setPathMajorRadius:(float)arg1;
- (void)_setPathIdentity:(unsigned char)arg1;
- (void)_setPathIndex:(unsigned char)arg1;
- (BOOL)sentTouchesEnded;
- (void)setGestureView:(id)arg1;
- (void)setView:(id)arg1;
- (id)gestureRecognizers;
- (void)_setEaten:(BOOL)arg1;
- (void)setPhase:(int)arg1;
- (BOOL)_isEaten;
- (void)setTapCount:(unsigned int)arg1;
- (BOOL)isTap;
- (int)phase;
- (void)setIsTap:(BOOL)arg1;
- (id)view;
- (void)setWindow:(id)arg1;
- (id)window;

@end
