/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemConfigurationDynamicStoreMISWatcher : NSObject  {
    struct __CFRunLoopSource { } *_scRunLoopSource;
    struct __SCDynamicStore { } *_scDynamicStore;
    int _misState;
    int _misReason;
}

+ (id)sharedManager;

- (void)sendStateUpdate;
- (void)getMISState:(int*)arg1 andReason:(int*)arg2;
- (void)readMISState:(int*)arg1 andReason:(int*)arg2;
- (void)dealloc;
- (id)init;

@end
