/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface GKRingBuffer : NSObject  {
    void *ringBufRef;
    unsigned long endTime;
    unsigned long capacity;
    unsigned long bytesPerFrame;
}


- (void)dealloc;
- (id)init;
- (long)fetch:(char *)arg1 numSamples:(unsigned long)arg2 timestamp:(unsigned long)arg3;
- (long)needsNewNumSamples:(unsigned long)arg1 timestamp:(unsigned long)arg2;
- (BOOL)store:(char *)arg1 numSamples:(unsigned long)arg2 timestamp:(unsigned long)arg3;
- (void)increaseCapacity:(unsigned long)arg1;
- (id)initWithCapacity:(unsigned long)arg1 bytesPerFrame:(unsigned long)arg2;

@end
