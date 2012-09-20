/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem;

@interface MPDownloadErrorResolver : MPAVErrorResolver  {
    MPMediaItem *_mediaItem;
}

@property(readonly) MPMediaItem * mediaItem;


- (id)initWithMediaItem:(id)arg1;
- (void)resolveError:(id)arg1;
- (id)mediaItem;
- (void)dealloc;

@end
