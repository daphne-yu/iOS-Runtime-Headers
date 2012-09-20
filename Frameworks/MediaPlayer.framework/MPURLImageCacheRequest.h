/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSURL;

@interface MPURLImageCacheRequest : MPImageCacheRequest  {
    NSURL *_url;
    BOOL _usePlaceholderAsFallback;
}

@property BOOL usePlaceholderAsFallback;


- (id)placeholderImage;
- (BOOL)usePlaceholderAsFallback;
- (id)copyRawImageReturningError:(id*)arg1;
- (id)uniqueKey;
- (void)setUsePlaceholderAsFallback:(BOOL)arg1;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

@end
