/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCaptureMovieFileOutputInternal;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput  {
    AVCaptureMovieFileOutputInternal *_internal;
}

@property struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property(copy) NSArray * metadata;

+ (void)initialize;
+ (BOOL)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;
+ (BOOL)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2;
+ (id)recorderCommonMetadataForAVMetadataItemArray:(id)arg1;

- (void)dealloc;
- (id)init;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)stopRecording;
- (BOOL)sendsLastVideoPreviewFrame;
- (void)setSendsLastVideoPreviewFrame:(BOOL)arg1;
- (long)_avErrorForDidStopRecordingReason:(id)arg1;
- (void)_handleStartRecordingErrorWithDomain:(id)arg1 code:(long)arg2 info:(id)arg3;
- (long)_startRecording:(id)arg1;
- (BOOL)getRecorderBoolForKey:(id)arg1 withDefault:(BOOL)arg2;
- (void)resumeRecording;
- (void)pauseRecording;
- (BOOL)isRecordingPaused;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (id)outputFileURL;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (id)connectionMediaTypes;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (long)_stopRecording;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (BOOL)isRecording;

@end
