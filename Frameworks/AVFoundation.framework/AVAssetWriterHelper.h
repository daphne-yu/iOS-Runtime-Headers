/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaFileType, NSArray, NSError, AVWeakReference, AVAssetWriterConfigurationState, NSURL;

@interface AVAssetWriterHelper : NSObject  {
    AVAssetWriterConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriter;
}

@property(readonly) AVAssetWriterConfigurationState * configurationState;
@property(retain) AVWeakReference * weakReferenceToAssetWriter;
@property(readonly) NSURL * outputURL;
@property(readonly) AVMediaFileType * mediaFileType;
@property(readonly) NSArray * availableMediaTypes;
@property(readonly) int status;
@property(readonly) NSError * error;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property BOOL shouldOptimizeForNetworkUse;
@property int movieTimeScale;
@property(copy) NSArray * metadata;
@property(readonly) NSArray * inputs;
@property(readonly) NSArray * inputGroups;


- (void)dealloc;
- (id)init;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (int)status;
- (void)addInput:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (void)startWriting;
- (id)error;
- (BOOL)_transitionToClientInitiatedTerminalStatus:(int)arg1;
- (id)weakReferenceToAssetWriter;
- (BOOL)_canApplyTrackReferences:(id)arg1 exceptionReason:(id*)arg2;
- (BOOL)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 exceptionReason:(id*)arg3;
- (id)configurationState;
- (id)initWithConfigurationState:(id)arg1;
- (void)transitionToFailedStatusWithError:(id)arg1;
- (void)finishWritingWithCompletionHandler:(id)arg1;
- (void)finishWriting;
- (void)cancelWriting;
- (void)endSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)startSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)addInputGroup:(id)arg1;
- (BOOL)canAddInputGroup:(id)arg1;
- (BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (id)availableMediaTypes;
- (id)outputURL;
- (void)setWeakReferenceToAssetWriter:(id)arg1;
- (id)inputGroups;
- (void)setMovieTimeScale:(int)arg1;
- (int)movieTimeScale;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (BOOL)shouldOptimizeForNetworkUse;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (id)mediaFileType;
- (id)inputs;

@end
