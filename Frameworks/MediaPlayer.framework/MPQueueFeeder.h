/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <NSObject>, MPAVController, NSDictionary;

@interface MPQueueFeeder : NSObject <MPAVPlaylistFeeder> {
    MPAVController *_avController;
    struct __CFSet { } *_itemsWithReferencesToClear;
    unsigned int _repeatType;
    unsigned int _shuffleType;
    struct __CFDictionary { } *_nextStartTimes;
    id _representedObject;
    BOOL _fullScreenPlaybackQueue;
    BOOL _isSourceChangeInProgress;
    BOOL _deallocating;
    unsigned int _activeShuffleType;
}

@property(readonly) Class itemClass;
@property BOOL fullScreenPlaybackQueue;
@property(readonly) NSDictionary * preferredLanguages;
@property(readonly) BOOL trackChangesCanEndPlayback;
@property(retain) <NSObject> * representedObject;
@property BOOL isSourceChangeInProgress;
@property MPAVController * AVController;
@property(readonly) unsigned int realRepeatType;
@property(readonly) unsigned int realShuffleType;
@property unsigned int repeatType;
@property unsigned int shuffleType;
@property unsigned int activeShuffleType;
@property(readonly) unsigned int initialPlaybackQueueDepth;
@property(readonly) unsigned int itemCount;
@property(readonly) unsigned int nonRepeatingItemCount;

+ (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2 feederClass:(Class)arg3;

- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (void)setFullScreenPlaybackQueue:(BOOL)arg1;
- (BOOL)fullScreenPlaybackQueue;
- (void)setActiveShuffleType:(unsigned int)arg1;
- (void)setShuffleType:(unsigned int)arg1;
- (void)setRepeatType:(unsigned int)arg1;
- (void)setAVController:(id)arg1;
- (id)AVController;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (unsigned int)realShuffleType;
- (unsigned int)realRepeatType;
- (BOOL)trackChangesCanEndPlayback;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
- (BOOL)canSkipItem:(id)arg1;
- (BOOL)shouldBeginPlaybackOfItem:(id)arg1 error:(id*)arg2;
- (id)errorResolverForItem:(id)arg1;
- (void)commitSourceChangeWithStartQueueIndex:(unsigned int)arg1;
- (void)beginSourceChange;
- (BOOL)reloadWithDataSource:(id)arg1;
- (void)shuffleItemsWithAnchor:(unsigned int*)arg1;
- (void)setSubsequenceFocused:(BOOL)arg1 currentItemIndex:(unsigned int)arg2;
- (void)setNextStartTime:(double)arg1 forIndex:(unsigned int)arg2;
- (void)_fixNextStartTimesByInsertingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)initialPlaybackQueueDepth;
- (BOOL)shouldReloadForChangeFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (id)itemForIndex:(unsigned int)arg1;
- (void)assumeOwnershipOfItems:(id)arg1;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (Class)itemClass;
- (BOOL)_canPurgeNextStartTimes;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned int)arg1;
- (BOOL)isSourceChangeInProgress;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_fixNextStartTimesByRemovingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)addReferenceToItem:(id)arg1;
- (unsigned int)shuffleType;
- (unsigned int)repeatType;
- (void)invalidateQueueCaches;
- (void)setIsSourceChangeInProgress:(BOOL)arg1;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (void)clearReferencesToItem:(id)arg1;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (unsigned int)itemCount;
- (unsigned int)activeShuffleType;
- (unsigned int)nonRepeatingItemCount;
- (void)dealloc;
- (id)preferredLanguages;
- (id)pathAtIndex:(unsigned int)arg1;
- (void)setMix:(id)arg1;
- (id)mix;

@end
