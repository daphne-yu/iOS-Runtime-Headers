/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary, AVCallbackRegistry;

@interface AVCMNotificationDispatcher : NSObject  {
    struct opaqueCMNotificationCenter { } *_cmNotificationCenter;
    AVCallbackRegistry *_callbackRegistry;
    NSMutableDictionary *_listenerObjectsPassedToFig;
    NSObject<OS_dispatch_queue> *_listenerObjectsQueue;
}

@property(readonly) struct opaqueCMNotificationCenter { }* CMNotificationCenter;
@property(getter=_callbackRegistry,readonly) AVCallbackRegistry * callbackRegistry;

+ (void)initialize;
+ (id)notificationDispatcherForCMNotificationCenter:(struct opaqueCMNotificationCenter { }*)arg1;

- (void)dealloc;
- (void)finalize;
- (id)_copyAndRemoveListenerAndCallbackForWeakReferenceToListener:(id)arg1 callback:(int (*)())arg2 name:(struct __CFString { }*)arg3 object:(const void*)arg4;
- (struct opaqueCMNotificationCenter { }*)CMNotificationCenter;
- (void)_addListenerAndCallback:(id)arg1 forWeakReferenceToListener:(id)arg2 callback:(int (*)())arg3 name:(struct __CFString { }*)arg4 object:(const void*)arg5;
- (id)_callbackRegistry;
- (id)initWithCMNotificationCenter:(struct opaqueCMNotificationCenter { }*)arg1;
- (void)removeListenerWithWeakReference:(id)arg1 callback:(int (*)())arg2 name:(struct __CFString { }*)arg3 object:(const void*)arg4;
- (void)addListenerWithWeakReference:(id)arg1 callback:(int (*)())arg2 name:(struct __CFString { }*)arg3 object:(const void*)arg4 flags:(unsigned long)arg5;

@end
