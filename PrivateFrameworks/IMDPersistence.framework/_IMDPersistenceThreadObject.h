/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

@class NSRunLoop, NSThread;

@interface _IMDPersistenceThreadObject : NSObject  {
    NSThread *_thread;
    NSRunLoop *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
}

+ (id)sharedInstance;

- (id)init;
- (void)performBlock:(id)arg1;
- (BOOL)isCurrentThreadDBThread;
- (void)performBlock:(id)arg1 waitUntilDone:(BOOL)arg2;
- (void)performBlock:(id)arg1 afterDelay:(double)arg2;
- (id)thread;
- (void)_threadedMain;

@end
