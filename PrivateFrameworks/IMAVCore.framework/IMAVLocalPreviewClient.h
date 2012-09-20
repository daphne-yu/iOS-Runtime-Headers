/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMAVCamera;

@interface IMAVLocalPreviewClient : NSObject <IMSystemMonitorListener> {
    BOOL _wantsPreview;
}

@property(readonly) BOOL isPreviewRunning;
@property unsigned int cameraType;
@property unsigned int cameraOrientation;
@property IMAVCamera * localCamera;
@property void* localVideoLayer;
@property void* localVideoBackLayer;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)localCamera;
- (void)setLocalCamera:(id)arg1;
- (void)didReceiveCommError;
- (void*)localVideoLayer;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)didStopPreview;
- (void)didStartPreview;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didReceiveFirstPreviewFrameFromCamera:(unsigned int)arg1;
- (void)didReceiveErrorFromCamera:(unsigned int)arg1 error:(id)arg2;
- (void)stopPreview;
- (void)setCameraType:(unsigned int)arg1;
- (BOOL)isPreviewRunning;
- (void)startPreview;
- (void)endAnimationToPreview;
- (void)beginAnimationToPreview;
- (void)endAnimationToPIP;
- (void)beginAnimationToPIP;
- (void)_updatePreviewState;
- (BOOL)_shouldPreviewBeRunning;
- (void)_avDaemonConnected;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void*)localVideoBackLayer;
- (void)setCameraOrientation:(unsigned int)arg1;
- (void)systemScreenDidPowerDown;
- (void)systemScreenDidPowerUp;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (unsigned int)cameraOrientation;
- (unsigned int)cameraType;

@end
