/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationRecorderRippleTouchContext : NSObject  {
    double _creationTimestamp;
    struct { 
        float x; 
        float y; 
    } _location;
    float _speed;
}

@property(readonly) struct { float x1; float x2; } location;
@property(readonly) float speed;


- (double)timeIntervalSinceCreation;
- (void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(struct { float x1; float x2; })arg2;
- (void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(struct { float x1; float x2; })arg2 speed:(float)arg3;
- (void)reset;
- (id)init;
- (struct { float x1; float x2; })location;
- (float)speed;

@end
