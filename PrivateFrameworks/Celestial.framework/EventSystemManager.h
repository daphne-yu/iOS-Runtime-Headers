/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableArray;

@interface EventSystemManager : NSObject  {
    struct __IOHIDEventSystemClient { } *eventSystemClient;
    NSMutableArray *clientList;
    struct __CFRunLoop { } *runLoop;
    BOOL manageAccel;
    int accelEventIndex;
    int accelUpdateInternalUS;
}

+ (id)sharedEventSystem;

- (void)dealloc;
- (id)init;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (id)clientList;
- (struct __IOHIDEventSystemClient { }*)eventSystemClient;
- (void)refreshEventSystem;
- (void)updateClientState;
- (void)setAccelUpdateInterval:(double)arg1;
- (BOOL)managingAccel;

@end
