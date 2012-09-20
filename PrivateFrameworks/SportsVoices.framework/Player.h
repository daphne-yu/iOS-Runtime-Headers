/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class NSString, NSBundle;

@interface Player : NSObject <AVAudioPlayerDelegate> {
    NSString *_directory;
    NSBundle *_bundle;
}

@property(readonly) BOOL isPlaying;

+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
+ (void)initialize;
+ (void)__deactivateAudioSession;
+ (void)__nts_queuePlayerStatusChanged:(id)arg1;
+ (void)__nts_indicateEndOfQueuePlayback:(id)arg1;
+ (void)__clearSharedPlayQueue;
+ (id)__sharedPlayQueue;
+ (id)__stringForAudioSessionError:(long)arg1;
+ (void)__initializeAudioSession;
+ (void)__audioSessionInterruptionDidEnd;
+ (void)__audioSessionInterruptionDidBegin;

- (BOOL)isPlaying;
- (void)dealloc;
- (void)playSoundFilesInSequence:(id)arg1;
- (id)initWithDirectory:(id)arg1 bundle:(id)arg2;
- (void)_addFileToQueue:(id)arg1;
- (id)_playerItemForFileNamed:(id)arg1;
- (void)stopAllSounds;

@end
