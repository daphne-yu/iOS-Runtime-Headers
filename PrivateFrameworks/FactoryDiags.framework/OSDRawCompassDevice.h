/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@class NSOperationQueue, NSMutableArray;

@interface OSDRawCompassDevice : NSObject  {
    NSOperationQueue *_operationQueue;
    struct __IOHIDEventSystemClient { } *_HIDSystemClient;
    struct __IOHIDServiceClient { } *_CompassPlugin;
    NSMutableArray *_samples;
    SEL _registeredCallback;
    id _registeredDelegate;
}

@property struct __IOHIDServiceClient { }* _CompassPlugin;


- (void)dealloc;
- (id)init;
- (void)set_CompassPlugin:(struct __IOHIDServiceClient { }*)arg1;
- (struct __IOHIDServiceClient { }*)_CompassPlugin;
- (struct __IOHIDServiceClient { }*)getCompassPlugin;
- (int)registerCompassCallback:(SEL)arg1 delegate:(id)arg2 operationQueue:(id)arg3 sampleInterval:(float)arg4;
- (void)unregisterCompassCallbackIOKit;
- (int)registerCompassCallbackIOKit:(float)arg1;
- (void)unregisterCompassCallback;
- (id)sampleForDuration:(float)arg1 sampleInterval:(float)arg2;
- (struct __IOHIDEventSystemClient { }*)getHIDSystem;
- (void)enqueueCallback:(id)arg1;
- (void)sampleForDurationCallback:(id)arg1;

@end
