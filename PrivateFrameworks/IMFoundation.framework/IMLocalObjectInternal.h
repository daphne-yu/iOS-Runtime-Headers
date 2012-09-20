/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSObject<OS_dispatch_queue>, NSProtocolChecker, NSRecursiveLock, NSMutableArray, NSObject<OS_dispatch_semaphore>, NSObject<OS_xpc_object>, NSLock, NSString;

@interface IMLocalObjectInternal : NSObject  {
    NSRecursiveLock *_lock;
    id _target;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_deathLock;
    NSString *_portName;
    NSProtocolChecker *_protocolChecker;
    NSMutableArray *_componentQueue;
    NSLock *_componentQueueLock;
    NSRecursiveLock *_componentQueueProcessingLock;
    BOOL _pendingComponentQueueProcessing;
    BOOL _busyForwarding;
}


- (void)dealloc;

@end
