/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaPlaylist, NSArray, NSString, MPMediaQuery;

@interface MPGeniusMix : NSObject <SSDownloadManagerObserver, NSCoding, NSCopying> {
    MPMediaPlaylist *_playlist;
    MPMediaQuery *_seedTracksQuery;
    NSArray *_representativeArtists;
    NSArray *_representativeImageItems;
}

@property(readonly) float downloadProgress;
@property(readonly) BOOL isCloudMix;
@property(readonly) BOOL isDownloading;
@property(readonly) NSString * name;
@property(readonly) MPMediaPlaylist * playlist;
@property(readonly) NSArray * representativeArtists;
@property(readonly) MPMediaQuery * seedTracksQuery;

+ (id)artworkImageForMediaItem:(id)arg1;
+ (id)artworkCacheDirectoryPath;
+ (id)artworkImageForMediaItem:(id)arg1 scaleMode:(int)arg2;
+ (id)mixQueue;

- (BOOL)isDownloading;
- (id)playlist;
- (void)preloadRepresentativeImageWithTileLength:(float)arg1 completionBlock:(id)arg2;
- (id)representativeArtists;
- (void)downloadMixWithCompletionHandler:(id)arg1;
- (BOOL)canPlayUsingNetworkType:(int)arg1;
- (void)cancelDownload;
- (struct CGImage { }*)_placeholderMixImageWithTileLength:(float)arg1;
- (struct CGImage { }*)_getAlreadyLoadedRepresentativeImageWithTileLength:(float)arg1 loadCompletionBlock:(id)arg2;
- (void)_generateMixImageWithTileLength:(float)arg1 imageDidLoadBlock:(id)arg2;
- (void)_onQueueLoadRepresentativeImageWithTileLength:(float)arg1;
- (BOOL)_observeMixImageLoadingWithImageDidLoadBlock:(id)arg1;
- (id)_cachedRepresentativeImagePath;
- (id)_cacheDirectoryPath;
- (unsigned long long)_entityArtworkCacheHashForRepresentativeItems:(id)arg1 ensureItemArtworkFilesExist:(BOOL)arg2;
- (id)_representativeImageItemsWithMaxCount:(unsigned int)arg1;
- (struct CGImage { }*)_placeholderImageWithTileLength:(float)arg1;
- (id)seedTracksQuery;
- (BOOL)isCloudMix;
- (struct CGImage { }*)loadRepresentativeImageWithTileLength:(float)arg1 completionBlock:(id)arg2;
- (id)initWithMPMediaPlaylist:(id)arg1;
- (id)name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (float)downloadProgress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
