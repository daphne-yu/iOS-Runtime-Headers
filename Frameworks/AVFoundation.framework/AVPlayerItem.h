/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, MPAVItem, NSString, NSDate, AVPlayerItemInternal, NSError;

@interface AVPlayerItem : NSObject <NSCopying> {
    AVPlayerItemInternal *_playerItem;
}

@property(retain) MPAVItem * MPAVItem;
@property(getter=isAuthorizationRequiredForPlayback,readonly) BOOL authorizationRequiredForPlayback;
@property(getter=isApplicationAuthorizedForPlayback,readonly) BOOL applicationAuthorizedForPlayback;
@property(getter=isContentAuthorizedForPlayback,readonly) BOOL contentAuthorizedForPlayback;
@property(getter=_isExternalProtectionRequiredForPlayback,setter=_setExternalProtectionRequiredForPlayback:) BOOL _externalProtectionRequiredForPlayback;
@property(getter=_isRental,readonly) BOOL _rental;
@property(readonly) NSDate * _rentalStartDate;
@property(readonly) NSDate * _rentalExpirationDate;
@property(getter=_isRentalPlaybackStarted,readonly) BOOL _rentalPlaybackStarted;
@property(readonly) NSDate * _rentalPlaybackStartedDate;
@property(readonly) NSDate * _rentalPlaybackExpirationDate;
@property(copy) NSString * dataYouTubeID;
@property(readonly) BOOL canDisplayExternalSubtitles;
@property BOOL displaysExternalSubtitles;
@property(readonly) NSArray * outputs;
@property(readonly) int status;
@property(readonly) NSError * error;

+ (void)initialize;
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1;
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2;
+ (BOOL)automaticallyNotifiesObserversOfTracks;
+ (BOOL)automaticallyNotifiesObserversOfPresentationSize;
+ (BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;
+ (BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+ (BOOL)automaticallyNotifiesObserversOfAsset;
+ (BOOL)automaticallyNotifiesObserversOfStatus;
+ (BOOL)automaticallyNotifiesObserversOfNonForcedSubtitleDisplayEnabled;
+ (BOOL)automaticallyNotifiesObserversOfVolumeAdjustment;
+ (BOOL)automaticallyNotifiesObserversOfSoundCheckVolumeNormalization;
+ (BOOL)automaticallyNotifiesObserversOfGaplessInfo;
+ (BOOL)automaticallyNotifiesObserversOfVariableSpeedAudioProcessor;
+ (BOOL)automaticallyNotifiesObserversOfTextStyleRules;
+ (BOOL)automaticallyNotifiesObserversOfSeekingWaitsForVideoCompositionRendering;
+ (BOOL)automaticallyNotifiesObserversOfVideoComposition;
+ (BOOL)automaticallyNotifiesObserversOfAudioMix;
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForRateChange;
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForSeek;
+ (BOOL)automaticallyNotifiesObserversOfWillNeverSeekBackwardsHint;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUpTrigger;
+ (BOOL)automaticallyNotifiesObserversOfAlwaysMonitorsPlayability;
+ (BOOL)automaticallyNotifiesObserversOfBufferingTargetMinimum;
+ (BOOL)automaticallyNotifiesObserversOfBufferingTargetMaximum;
+ (BOOL)automaticallyNotifiesObserversOfLimitReadAhead;
+ (BOOL)automaticallyNotifiesObserversOfReversePlaybackEndTime;
+ (BOOL)automaticallyNotifiesObserversOfForwardPlaybackEndTime;
+ (id)playerItemWithAsset:(id)arg1;
+ (BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+ (BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;
+ (id)playerItemWithURL:(id)arg1;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)setAudioMix:(id)arg1;
- (void)_setURL:(id)arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPlaybackLikelyToKeepUpTrigger:(int)arg1;
- (long long)_availableFileSize;
- (BOOL)canPlayFastReverse;
- (BOOL)canPlayFastForward;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (float)soundCheckVolumeNormalization;
- (id)tracks;
- (void)_setRampInOutInfo:(id)arg1;
- (void)_setAudibleDRMInfo:(id)arg1;
- (void)setGaplessInfo:(id)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (id)seekableTimeRanges;
- (id)loadedTimeRanges;
- (id)_seekableTimeRanges;
- (void)setDataYouTubeID:(id)arg1;
- (id)dataYouTubeID;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (void)setNonForcedSubtitleDisplayEnabled:(BOOL)arg1;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (BOOL)seekToDate:(id)arg1;
- (id)currentDate;
- (id)timedMetadata;
- (id)errorLog;
- (id)accessLog;
- (id)_player;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (struct CGSize { float x1; float x2; })presentationSize;
- (int)status;
- (id)asset;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (void)finalize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_duration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (long long)_fileSize;
- (id)valueForUndefinedKey:(id)arg1;
- (void)addOutput:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)error;
- (void)removeOutput:(id)arg1;
- (void)_setTimebaseOnOutputs:(struct OpaqueCMTimebase { }*)arg1;
- (void)setDisplaysExternalSubtitles:(BOOL)arg1;
- (void)displayExternalSubtitleString:(id)arg1 forced:(BOOL)arg2;
- (BOOL)canDisplayExternalSubtitles;
- (id)_rentalPlaybackExpirationDate;
- (id)_rentalPlaybackStartedDate;
- (BOOL)_isRentalPlaybackStarted;
- (id)_rentalExpirationDate;
- (id)_rentalStartDate;
- (BOOL)_isRental;
- (void)_setExternalProtectionRequiredForPlayback:(BOOL)arg1;
- (BOOL)isContentAuthorizedForPlayback;
- (BOOL)isApplicationAuthorizedForPlayback;
- (BOOL)isAuthorizationRequiredForPlayback;
- (void)_renderingSuppressionDidChangeForOutput:(id)arg1;
- (id)_playbackItemNotificationPayloadToError:(struct __CFDictionary { }*)arg1;
- (void)_addSyncLayer:(id)arg1;
- (void)_removeSyncLayer:(id)arg1;
- (struct OpaqueFigCPEProtector { }*)_figCPEProtector;
- (void)selectTrackWithID:(int)arg1 inTrackGroup:(id)arg2;
- (int)selectedTrackIDInTrackGroup:(id)arg1;
- (id)playabilityMetrics;
- (float)progressTowardsPlaybackLikelyToKeepUp;
- (BOOL)isPlaybackBufferEmpty;
- (BOOL)isPlaybackBufferFull;
- (BOOL)isPlaybackLikelyToKeepUp;
- (void)setVariableSpeedAudioProcessor:(id)arg1;
- (id)variableSpeedAudioProcessor;
- (void)setSeekingWaitsForVideoCompositionRendering:(BOOL)arg1;
- (void)setWillNeverSeekBackwardsHint:(BOOL)arg1;
- (BOOL)willNeverSeekBackwardsHint;
- (int)playbackLikelyToKeepUpTrigger;
- (void)setAlwaysMonitorsPlayability:(BOOL)arg1;
- (BOOL)alwaysMonitorsPlayability;
- (void)setBufferingTargetMinimum:(double)arg1;
- (double)bufferingTargetMinimum;
- (void)setBufferingTargetMaximum:(double)arg1;
- (double)bufferingTargetMaximum;
- (void)setLimitReadAhead:(BOOL)arg1;
- (BOOL)limitReadAhead;
- (void)_updateTimebase;
- (struct OpaqueCMTimebase { }*)timebase;
- (void)stepByCount:(int)arg1;
- (void)setInitialEstimatedDate:(id)arg1;
- (id)currentEstimatedDate;
- (void)setInitialDate:(id)arg1;
- (BOOL)canStepBackward;
- (BOOL)canStepForward;
- (BOOL)canPlaySlowReverse;
- (BOOL)canPlaySlowForward;
- (BOOL)canPlayReverse;
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
- (BOOL)_suppressionForOutputs:(id)arg1;
- (void)_selectMediaOption:(id)arg1 inKeyValueGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (void)_selectMediaOption:(id)arg1 inAlternateTrackGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2;
- (void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2;
- (void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (void)_selectTrackWithID:(int)arg1 amongTrackIDs:(id)arg2;
- (void)_setEnabledState:(BOOL)arg1 ofTrackID:(int)arg2;
- (id)_trackWithTrackID:(int)arg1;
- (id)_loadedTimeRanges;
- (id)_variableSpeedAudioProcessor;
- (void)_applyAudioMix;
- (BOOL)_continuesPlayingDuringPrerollForRateChange;
- (BOOL)_continuesPlayingDuringPrerollForSeek;
- (BOOL)_willNeverSeekBackwardsHint;
- (int)_playbackLikelyToKeepUpTrigger;
- (BOOL)_alwaysMonitorsPlayability;
- (double)_bufferingTargetMinimum;
- (double)_bufferingTargetMaximum;
- (BOOL)_limitReadAhead;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_reversePlaybackEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_forwardPlaybackEndTime;
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(BOOL)arg2;
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(id)arg1;
- (int)_CreateSeekID;
- (BOOL)_canStepBackward;
- (BOOL)_canStepForward;
- (BOOL)_canPlaySlowReverse;
- (BOOL)_canPlaySlowForward;
- (BOOL)_canPlayReverse;
- (BOOL)_isAFileBasedItemThatsReadyToPlay;
- (BOOL)_canPlayFastReverse;
- (BOOL)_canPlayFastForward;
- (void)_invokeReadyForEnqueueingHandlers;
- (void)_respondToBecomingReadyForBasicInspection;
- (void)_kickAssetObserversIfAppropriate;
- (void)_setTrackIDsForAssetWithFigPlaybackItem:(id)arg1;
- (void)_makeNewAssetWithFigPlaybackItem;
- (void)_setAssetWithFigPlaybackItem:(id)arg1;
- (void)_createPlayerConnection:(id)arg1 shouldAppendItem:(BOOL)arg2;
- (void)_attachToFigPlayer;
- (BOOL)_isCurrentPlayerItem;
- (void)_informObserversAboutAvailabilityOfTracks;
- (void)_applyInitialAudioMix;
- (struct CGSize { float x1; float x2; })_presentationSize;
- (void)_evaluateVisualContexts;
- (void)_evaluateSuppression;
- (void)_quietlySetBufferingTargetMinimum:(double)arg1;
- (void)_quietlySetBufferingTargetMaximum:(double)arg1;
- (void)_quietlySetAlwaysMonitorsPlayability:(BOOL)arg1;
- (void)_quietlySetWillNeverSeekBackwardsHint:(BOOL)arg1;
- (void)_quietlySetPlaybackLikelyToKeepUpTrigger:(int)arg1;
- (void)_quietlySetLimitReadAhead:(BOOL)arg1;
- (void)_configurePlaybackItem;
- (void)_setPlayerConnection:(id)arg1;
- (void)_detachOutputs;
- (void)_attachOutputs;
- (void)_setSyncLayersOnFigPlaybackItem:(id)arg1;
- (void)_applyTextStyleRules;
- (void)_applyMediaSelectionOptions;
- (void)_applyTrackSelectionsFromAlternateTrackGroupSPI;
- (void)_quietlySetFigTimePitchAlgorithm:(struct __CFString { }*)arg1;
- (void)_quietlySetVolumeAdjustment:(float)arg1;
- (void)_quietlySetSoundCheckVolumeNormalization:(float)arg1;
- (void)_quietlySetPlaybackProperties:(id)arg1;
- (id)_playbackProperties;
- (void)_quietlySetEQPreset:(int)arg1;
- (void)_applySeekingWaitsForVideoCompositionRendering;
- (void)_setVideoCompositor:(id)arg1;
- (void)_setVideoCompositionInstructions:(id)arg1;
- (void)_setVideoCompositionRenderScale:(float)arg1;
- (void)_setVideoCompositionRenderSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setVideoCompositionFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(BOOL)arg1;
- (void)_quietlySetContinuesPlayingDuringPrerollForSeek:(BOOL)arg1;
- (void)_quietlySetReversePlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_quietlySetForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (BOOL)_isExternalProtectionRequiredForPlayback;
- (id)_URL;
- (BOOL)isNonForcedSubtitleDisplayEnabled;
- (void)setContinuesPlayingDuringPrerollForSeek:(BOOL)arg1;
- (BOOL)continuesPlayingDuringPrerollForSeek;
- (void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)arg1;
- (BOOL)continuesPlayingDuringPrerollForRateChange;
- (void)setVolumeAdjustment:(float)arg1;
- (void)setReversePlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })reversePlaybackEndTime;
- (void)setTextStyleRules:(id)arg1;
- (void)_setAsset:(id)arg1;
- (void)_createPlayerItemInternal;
- (float)volumeAdjustment;
- (id)gaplessInfo;
- (id)textStyleRules;
- (BOOL)seekingWaitsForVideoCompositionRendering;
- (id)audioMix;
- (id)initialEstimatedDate;
- (id)initialDate;
- (void)cancelPendingSeeks;
- (BOOL)displaysExternalSubtitles;
- (void)_setTimedMetadata:(id)arg1;
- (BOOL)_hasEnabledVideoMedia;
- (struct OpaqueCMTimebase { }*)_copyTimebase;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id)arg2;
- (id)_fpNotificationNames;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id)arg4;
- (BOOL)seekToDate:(id)arg1 completionHandler:(id)arg2;
- (void)_removeFromItems;
- (void)_dequeueFromPlayer;
- (id)_previousItem;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (id)_nextItem;
- (id)_propertyStorage;
- (void)_addFPListeners;
- (void)_makeReadyForEnqueueingWithCompletionHandler:(id)arg1;
- (void)_insertAfterItem:(id)arg1;
- (void)_attachToPlayer:(id)arg1;
- (id)_playerConnection;
- (void)_enqueueWithPlayer:(id)arg1 shouldAppendItem:(BOOL)arg2;
- (struct OpaqueFigPlaybackItem { }*)_figPlaybackItem;
- (void)_setIsCurrentPlayerItem:(BOOL)arg1;
- (void)_playerChangeStatusToFailedWithError:(id)arg1;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_removeFPListeners;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;
- (id)_tracks;
- (id)_weakReference;
- (id)outputs;
- (id)_stateDispatchQueue;
- (id)_cachedValueForKey:(id)arg1;
- (void)setMPAVItem:(id)arg1;
- (id)MPAVItem;

@end
