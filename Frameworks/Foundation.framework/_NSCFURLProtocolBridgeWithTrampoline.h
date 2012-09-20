/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSThread, NSMutableArray, NSCountedSet;

@interface _NSCFURLProtocolBridgeWithTrampoline : _NSCFURLProtocolBridge  {
    NSMutableArray *_workQueue;
    NSCountedSet *_runloops;
    BOOL _canSignalDirectly;
    NSThread *_processThread;
}


- (void)dealloc;
- (void)finalize;
- (void)pushEvent:(id)arg1 from:(const char *)arg2;
- (void)unschedule:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (void)schedule:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (void)processEventQ;
- (BOOL)shouldSignalDirectly;
- (void)releaseWorkQueue;
- (id)initWithCFURLProtocol:(struct _CFURLProtocol { }*)arg1 request:(id)arg2 protocolClass:(Class)arg3;

@end
