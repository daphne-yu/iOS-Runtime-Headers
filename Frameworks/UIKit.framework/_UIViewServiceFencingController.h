/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, NSMutableArray, NSMutableSet;

@interface _UIViewServiceFencingController : NSObject  {
    int _lock;
    NSMutableSet *_pendingFenceSendRights;
    NSMutableArray *_resumeActions;
    unsigned int _expectedParticipatingFencingProxyCount;
    NSTimer *_fencingControlTimeoutTimer;
}

+ (id)activeFencePort;

- (void)dealloc;
- (id)init;
- (void)_fencingControlTimedOut;
- (void)fencingControlProxy:(id)arg1 didEndFencingWithSendRight:(id)arg2;
- (void)fencingControlProxy:(id)arg1 didBeginFencingWithSendRight:(id)arg2 expectedParticipatingFencingProxyCount:(unsigned int)arg3;

@end
