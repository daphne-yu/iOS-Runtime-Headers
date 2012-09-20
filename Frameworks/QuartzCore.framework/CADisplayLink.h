/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CADisplay;

@interface CADisplayLink : NSObject  {
    void *_impl;
}

@property(readonly) CADisplay * display;
@property(retain) id userInfo;
@property(readonly) double timestamp;
@property(readonly) double duration;
@property(getter=isPaused) BOOL paused;
@property int frameInterval;

+ (id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;

- (void)invalidate;
- (double)timestamp;
- (id)userInfo;
- (void)dealloc;
- (void)setUserInfo:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (int)frameInterval;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setFrameInterval:(int)arg1;
- (double)duration;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)display;
- (id)_initWithDisplayLink:(struct DisplayLink { int (**x1)(); struct Display {} *x2; void *x3; SEL x4; void *x5; int x6; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_7_1_1; } x7; struct Condition { struct _opaque_pthread_cond_t { long x_1_2_1; BOOL x_1_2_2[24]; } x_8_1_1; } x8; struct _opaque_pthread_t {} *x9; id x10; struct __CFRunLoop {} *x11; struct List<const __CFString *> {} *x12; unsigned long long x13; unsigned long long x14; unsigned int x15 : 1; }*)arg1;
- (BOOL)isPaused;

@end
