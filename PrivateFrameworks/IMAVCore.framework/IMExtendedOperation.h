/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSMutableSet, NSString, NSThread;

@interface IMExtendedOperation : NSOperation  {
    NSThread *_operationThread;
    NSString *_operationName;
    unsigned int _operationState;
    double _operationTimeout;
    NSMutableSet *_childOperations;
}

@property(retain) NSString * name;
@property double timeout;
@property(readonly) unsigned int state;

+ (id)runLoopModes;

- (void)_setState:(unsigned int)arg1;
- (unsigned int)state;
- (void)setName:(id)arg1;
- (id)name;
- (void)cancel;
- (void)dealloc;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)start;
- (void)_threadedMain;
- (void)_stopWithState:(unsigned int)arg1;
- (unsigned int)_minChildOperationState;
- (void)_startThread;
- (void)_timeout;
- (unsigned int)_maxChildOperationState;
- (void)didFinish;
- (void)fail;
- (void)createChildOperations;
- (void)addChildOperation:(id)arg1;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (BOOL)isConcurrent;

@end
