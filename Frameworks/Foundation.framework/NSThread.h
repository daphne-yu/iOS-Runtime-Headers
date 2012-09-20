/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSThread : NSObject  {
    id _private;
    unsigned char _bytes[44];
}

+ (BOOL)isMainThread;
+ (id)currentThread;
+ (id)callStackSymbols;
+ (id)callStackReturnAddresses;
+ (void)sleepUntilDate:(id)arg1;
+ (void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;
+ (void)exit;
+ (BOOL)isMultiThreaded;
+ (id)mainThread;
+ (BOOL)isDying;
+ (BOOL)setThreadPriority:(double)arg1;
+ (double)threadPriority;
+ (void)sleepForTimeInterval:(double)arg1;
+ (void)_im_runBlock:(id)arg1;
+ (void)_mapkit_runThread:(id)arg1;
+ (id)_mapkit_networkIOThread;

- (void)main;
- (BOOL)isMainThread;
- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (BOOL)isCancelled;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;
- (id)threadDictionary;
- (void)_nq:(id)arg1;
- (unsigned int)stackSize;
- (void)setStackSize:(unsigned int)arg1;
- (id)runLoop;
- (BOOL)isDying;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)setThreadPriority:(double)arg1;
- (double)threadPriority;
- (void)__im_performBlock:(id)arg1 waitUntilDone:(BOOL)arg2;
- (void)__im_performBlock:(id)arg1 afterDelay:(double)arg2;
- (void)__im_performBlock:(id)arg1;
- (void)__im_performBlock:(id)arg1 afterDelay:(double)arg2 modes:(id)arg3;
- (void)__im_performBlock:(id)arg1 waitUntilDone:(BOOL)arg2 modes:(id)arg3;
- (void)__im_performBlock:(id)arg1 modes:(id)arg2;
- (BOOL)shouldStop;
- (void)unregisterForStopNotification;
- (void)registerForStopNotification;

@end
