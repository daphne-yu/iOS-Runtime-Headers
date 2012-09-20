/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, NSString, SUPlayerStatus;

@interface SUScriptAudioPlayer : SUScriptObject  {
    SUPlayerStatus *_playerStatus;
    NSURL *_url;
}

@property(readonly) double currentTime;
@property(readonly) double duration;
@property(readonly) int state;
@property(readonly) NSString * URL;
@property(readonly) NSString * nowPlayingKeyAlbumTitle;
@property(readonly) NSString * nowPlayingKeyAlbumTrackCount;
@property(readonly) NSString * nowPlayingKeyAlbumTrackNumber;
@property(readonly) NSString * nowPlayingKeyArtist;
@property(readonly) NSString * nowPlayingKeyArtwork;
@property(readonly) NSString * nowPlayingKeyComposer;
@property(readonly) NSString * nowPlayingKeyDiscCount;
@property(readonly) NSString * nowPlayingKeyDiscNumber;
@property(readonly) NSString * nowPlayingKeyGenre;
@property(readonly) NSString * nowPlayingKeyPersistentID;
@property(readonly) NSString * nowPlayingKeyPlaybackDuration;
@property(readonly) NSString * nowPlayingKeyTitle;
@property(readonly) int playerStateActive;
@property(readonly) int playerStateBuffering;
@property(readonly) int playerStateFailed;
@property(readonly) int playerStateFinished;
@property(readonly) int playerStatePaused;
@property(readonly) int playerStateUnplayed;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (int)playerStateUnplayed;
- (int)playerStatePaused;
- (int)playerStateFinished;
- (int)playerStateFailed;
- (int)playerStateBuffering;
- (int)playerStateActive;
- (id)nowPlayingKeyTitle;
- (id)nowPlayingKeyPlaybackDuration;
- (id)nowPlayingKeyPersistentID;
- (id)nowPlayingKeyGenre;
- (id)nowPlayingKeyDiscNumber;
- (id)nowPlayingKeyDiscCount;
- (id)nowPlayingKeyComposer;
- (id)nowPlayingKeyArtwork;
- (id)nowPlayingKeyArtist;
- (id)nowPlayingKeyAlbumTrackNumber;
- (id)nowPlayingKeyAlbumTrackCount;
- (id)nowPlayingKeyAlbumTitle;
- (void)_audioPlayerStateChangeNotification:(id)arg1;
- (double)currentTime;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (id)_className;
- (id)scriptAttributeKeys;
- (int)state;
- (id)URL;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (void)pause;
- (void)stop;
- (double)duration;
- (id)attributeKeys;
- (void)play;

@end
