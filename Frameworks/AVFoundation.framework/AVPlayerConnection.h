/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, NSError, AVPlayerItem, NSObject<OS_dispatch_queue>, AVWeakReference;

@interface AVPlayerConnection : NSObject  {
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    BOOL _shouldAppendItem;
    int _status;
    NSError *_error;
    AVPlayerItem *_previousPlayerItem;
}

@property(readonly) AVPlayer * player;
@property(readonly) AVPlayerItem * playerItem;
@property(readonly) int status;
@property(readonly) NSError * error;
@property(readonly) NSObject<OS_dispatch_queue> * serializationQueue;


- (id)player;
- (id)playerItem;
- (id)description;
- (void)dealloc;
- (int)status;
- (id)error;
- (id)serializationQueue;
- (id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2 shouldAppendItem:(BOOL)arg3;
- (void)removeItemFromPlayQueue;
- (BOOL)addItemToPlayQueue;

@end
