/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class AVQueue, NSMutableArray;

@interface AVPlaybackQueue : NSObject  {
    id _delegate;
    AVQueue *_avItemQueue;
    NSMutableArray *_pbItemQueue;
    struct OpaqueFigPlayer { } *_figPlayer;
    int _ignoreAVQueueModifications;
    BOOL _hasBuiltPlaybackQueue;
    BOOL _waitingToAddFirstItem;
    int _avQueueTransactionCount;
    int _repeatMode;
}


- (void)setRepeatMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)removeItemsNoLongerInPlayQueue;
- (void)fillInPBItemQueue;
- (void)queueItemWillBeRemovedNotification:(id)arg1;
- (void)queueItemWasAddedNotification:(id)arg1;
- (void)clearPBItemQueueFromIndex:(int)arg1;
- (void)scheduleRemoveItemsNoLongerInPlayQueue;
- (void)checkQueueConsistency;
- (void)playbackItemInspectionComplete:(id)arg1;
- (void)updateBookmarkTimesIncludeFirst:(BOOL)arg1 updateFirst:(BOOL)arg2;
- (void)playbackItemWasRemovedFromPlayQueue:(id)arg1;
- (id)currentPlaybackItem;
- (void)ensurePlaybackQueueImmed;
- (void)ensurePlaybackQueue;
- (void)setAVItemQueue:(id)arg1;
- (id)initWithDelegate:(id)arg1 figPlayer:(struct OpaqueFigPlayer { }*)arg2;
- (void)endAVQueueTransaction;
- (void)beginAVQueueTransaction;

@end
