/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class PCPersistentTimer;

@interface VSAssetUpdateListener : NSObject  {
    BOOL _isListening;
    PCPersistentTimer *_assetCleanupTimer;
}

+ (id)sharedListener;

- (void)dealloc;
- (id)init;
- (void)_updateNextCleanupDate;
- (void)_cancelAssetCleanupTimer;
- (void)_flushLanguageChanges;
- (void)_rescheduleAssetCleanup;
- (void)_scheduleNextCleanupForDate:(id)arg1;
- (void)_cleanupAssets;
- (void)_spokenLanguageChanged:(id)arg1;
- (void)stopListening;
- (void)startListening;
- (id)_initShared;

@end
