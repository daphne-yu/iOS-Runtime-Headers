/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CMGyroData, CMMagnetometerData, CMDeviceMotion, CMAccelerometerData;

@interface CMMotionManager : NSObject  {
    id _internal;
}

@property double accelerometerUpdateInterval;
@property(getter=isAccelerometerAvailable,readonly) BOOL accelerometerAvailable;
@property(getter=isAccelerometerActive,readonly) BOOL accelerometerActive;
@property(readonly) CMAccelerometerData * accelerometerData;
@property double gyroUpdateInterval;
@property(getter=isGyroAvailable,readonly) BOOL gyroAvailable;
@property(getter=isGyroActive,readonly) BOOL gyroActive;
@property(readonly) CMGyroData * gyroData;
@property double magnetometerUpdateInterval;
@property(getter=isMagnetometerAvailable,readonly) BOOL magnetometerAvailable;
@property(getter=isMagnetometerActive,readonly) BOOL magnetometerActive;
@property(readonly) CMMagnetometerData * magnetometerData;
@property double deviceMotionUpdateInterval;
@property(readonly) int attitudeReferenceFrame;
@property(getter=isDeviceMotionAvailable,readonly) BOOL deviceMotionAvailable;
@property(getter=isDeviceMotionActive,readonly) BOOL deviceMotionActive;
@property(readonly) CMDeviceMotion * deviceMotion;
@property BOOL showsDeviceMovementDisplay;

+ (void)initialize;
+ (void)setAllowInBackground:(BOOL)arg1;
+ (unsigned int)availableAttitudeReferenceFrames;
+ (void)dummySelector:(id)arg1;

- (void)startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (BOOL)isAccelerometerAvailable;
- (void)dealloc;
- (id)init;
- (id)accelerometerData;
- (id)deviceMotion;
- (void)startAccelerometerUpdates;
- (void)startDeviceMotionUpdates;
- (void)setAccelerometerUpdateInterval:(double)arg1;
- (void)setDeviceMotionUpdateInterval:(double)arg1;
- (BOOL)isDeviceMotionAvailable;
- (void)stopAccelerometerUpdates;
- (void)stopDeviceMotionUpdates;
- (id)initUsingGyroOnlySensorFusion;
- (id)initUsing6AxisSensorFusion;
- (void)setShowsDeviceMovementDisplay:(BOOL)arg1;
- (void)stopMagnetometerUpdates;
- (void)startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startMagnetometerUpdates;
- (id)magnetometerData;
- (double)magnetometerUpdateInterval;
- (void)setMagnetometerUpdateInterval:(double)arg1;
- (BOOL)isMagnetometerActive;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)arg1 toQueue:(id)arg2 withHandler:(id)arg3;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)arg1;
- (void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (double)deviceMotionUpdateInterval;
- (void)stopGyroUpdates;
- (void)startGyroUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startGyroUpdates;
- (id)gyroData;
- (double)gyroUpdateInterval;
- (void)setGyroUpdateInterval:(double)arg1;
- (BOOL)isGyroActive;
- (double)accelerometerUpdateInterval;
- (BOOL)isAccelerometerActive;
- (BOOL)useAccelerometer;
- (void)setUseAccelerometer:(BOOL)arg1;
- (void)didBecomeActivePrivate:(id)arg1;
- (void)willResignActivePrivate:(id)arg1;
- (void)showDeviceMovementDisplay;
- (BOOL)showsDeviceMovementDisplay;
- (void)setDeviceMotionCallback:(int (*)())arg1 info:(void*)arg2 interval:(double)arg3 fsync:(BOOL)arg4;
- (void)setGyroDataCallback:(int (*)())arg1 info:(void*)arg2 interval:(double)arg3;
- (void)setAccelerometerDataCallback:(int (*)())arg1 info:(void*)arg2 interval:(double)arg3;
- (void)setShowsDeviceMovementDisplayPrivate:(BOOL)arg1;
- (BOOL)isMagnetometerAvailable;
- (void)stopMagnetometerUpdatesPrivate;
- (void)startMagnetometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)setMagnetometerUpdateIntervalPrivate:(double)arg1;
- (void)dismissDeviceMovementDisplay;
- (BOOL)isDeviceMotionActive;
- (void)stopDeviceMotionUpdatesPrivate;
- (void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(int)arg1 toQueue:(id)arg2 withHandler:(id)arg3;
- (int)attitudeReferenceFrame;
- (void)setDeviceMotionUpdateIntervalPrivate:(double)arg1;
- (BOOL)isGyroAvailable;
- (void)stopGyroUpdatesPrivate;
- (void)startGyroUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)setGyroUpdateIntervalPrivate:(double)arg1;
- (void)stopAccelerometerUpdatesPrivate;
- (void)startAccelerometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)setAccelerometerUpdateIntervalPrivate:(double)arg1;
- (void)deallocPrivate;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (id)initPrivate;
- (void)onGeomagneticModel:(const struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; }*)arg1;
- (void)onDeviceMotion:(const struct Sample { double x1; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_2_1_4; int x_2_1_5; boolx_2_1_6; boolx_2_1_7; boolx_2_1_8; } x2; boolx3; }*)arg1;
- (void)onMagnetometer:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (void)onGyro:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; unsigned short x3; boolx4; }*)arg1;
- (void)onAccelerometer:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;

@end
