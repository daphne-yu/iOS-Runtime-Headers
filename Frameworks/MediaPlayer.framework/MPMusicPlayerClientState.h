/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, MPMediaQuery, MPMediaPlaylist;

@interface MPMusicPlayerClientState : NSObject  {
    BOOL _allowsRemoteUIAccess;
    int _backgroundPlaybackAccess;
    MPMediaItem *_firstItem;
    MPMediaPlaylist *_geniusMixPlaylist;
    BOOL _hasAudioBackgroundMode;
    MPMediaQuery *_query;
    int _repeatMode;
    BOOL _seeking;
    int _shuffleMode;
    BOOL _useApplicationSpecificQueue;
    BOOL _videoPlaybackEnabled;
}

@property BOOL allowsRemoteUIAccess;
@property int backgroundPlaybackAccess;
@property(retain) MPMediaItem * firstItem;
@property(retain) MPMediaPlaylist * geniusMixPlaylist;
@property BOOL hasAudioBackgroundMode;
@property int repeatMode;
@property BOOL seeking;
@property int shuffleMode;
@property(retain) MPMediaQuery * query;
@property BOOL useApplicationSpecificQueue;
@property BOOL videoPlaybackEnabled;


- (void)setShuffleMode:(int)arg1;
- (void)setRepeatMode:(int)arg1;
- (int)shuffleMode;
- (int)repeatMode;
- (BOOL)seeking;
- (BOOL)videoPlaybackEnabled;
- (id)geniusMixPlaylist;
- (void)setBackgroundPlaybackAccess:(int)arg1;
- (BOOL)hasAudioBackgroundMode;
- (int)backgroundPlaybackAccess;
- (void)setHasAudioBackgroundMode:(BOOL)arg1;
- (void)setGeniusMixPlaylist:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setFirstItem:(id)arg1;
- (BOOL)useApplicationSpecificQueue;
- (void)setSeeking:(BOOL)arg1;
- (void)setVideoPlaybackEnabled:(BOOL)arg1;
- (void)setUseApplicationSpecificQueue:(BOOL)arg1;
- (void)setAllowsRemoteUIAccess:(BOOL)arg1;
- (BOOL)allowsRemoteUIAccess;
- (void)dealloc;
- (id)firstItem;
- (id)query;

@end
