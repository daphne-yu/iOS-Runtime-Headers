/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSURL, AVAssetCacheInternal;

@interface AVAssetCache : NSObject  {
    AVAssetCacheInternal *_priv;
}

@property long long maxSize;
@property long long maxEntrySize;
@property(readonly) long long currentSize;
@property(readonly) NSURL * URL;

+ (id)assetCacheWithURL:(id)arg1;

- (id)URL;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)allKeys;
- (void)removeEntryForKey:(id)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;
- (long long)currentSize;
- (void)setMaxEntrySize:(long long)arg1;
- (long long)maxEntrySize;
- (void)setMaxSize:(long long)arg1;
- (long long)maxSize;

@end
