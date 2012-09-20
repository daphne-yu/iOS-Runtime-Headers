/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSObject<OS_dispatch_source>, NSMutableArray, CADisplayLink;

@interface VKMainLoop : NSObject  {
    CADisplayLink *_displayLink;
    NSMutableArray *_animations[2];
    NSMutableArray *_canvasList;
    BOOL _applicationInBackground;
    struct __CFRunLoop { } *_displayLinkRunLoop;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    int _rate;
    BOOL _isDebugRateForced;
    int _debugForcedRate;
    int _backgroundableCanvasCount;
}

@property int trueRate;
@property int rate;

+ (id)sharedInstance;

- (int)rate;
- (void)setRate:(int)arg1;
- (void)dealloc;
- (id)init;
- (void)performBlock:(id)arg1;
- (void)removeAnimation:(id)arg1;
- (void)addAnimation:(id)arg1;
- (void)willEnterForeground;
- (void)_receivedMemoryNotification;
- (void)setTrueRate:(int)arg1;
- (void)updateLinkState;
- (int)trueRate;
- (void)forceTrueRate:(int)arg1;
- (void)displayTimerFired:(id)arg1;
- (void)addBackgroundableCanvas;
- (void)addCanvas:(id)arg1;
- (void)removeBackgroundableCanvas;
- (void)removeCanvas:(id)arg1;
- (double)resumeAnimation:(id)arg1;
- (double)pauseAnimation:(id)arg1;
- (id)detailedDescription;
- (void)didEnterBackground;

@end
