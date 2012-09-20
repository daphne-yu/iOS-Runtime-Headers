/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSDate, NSDictionary;

@interface MPNowPlayingInfoCenter : NSObject  {
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_queuedNowPlayingInfo;
    NSDate *_pushDate;
}

@property(copy) NSDictionary * nowPlayingInfo;

+ (id)defaultCenter;

- (void)setNowPlayingInfo:(id)arg1;
- (id)nowPlayingInfo;
- (void)_pushNowPlayingInfoAndRetry:(BOOL)arg1;
- (id)init;
- (id)_init;

@end
