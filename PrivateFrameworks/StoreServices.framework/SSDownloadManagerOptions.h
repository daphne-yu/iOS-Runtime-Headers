/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSArray;

@interface SSDownloadManagerOptions : NSObject <NSCopying> {
    NSArray *_downloadKinds;
    BOOL _filterExternalOriginatedDownloads;
    NSString *_persistenceIdentifier;
    NSArray *_prefetchedDownloadExternalProperties;
    NSArray *_prefetchedDownloadProperties;
}

@property(copy) NSArray * downloadKinds;
@property(copy) NSString * persistenceIdentifier;
@property(copy) NSArray * prefetchedDownloadProperties;
@property BOOL shouldFilterExternalOriginatedDownloads;
@property(copy) NSArray * prefetchedDownloadExternalProperties;


- (id)downloadKinds;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setShouldFilterExternalOriginatedDownloads:(BOOL)arg1;
- (id)persistenceIdentifier;
- (id)prefetchedDownloadProperties;
- (id)prefetchedDownloadExternalProperties;
- (BOOL)shouldFilterExternalOriginatedDownloads;
- (void)setPrefetchedDownloadExternalProperties:(id)arg1;
- (void)setPrefetchedDownloadProperties:(id)arg1;
- (void)setPersistenceIdentifier:(id)arg1;
- (void)setDownloadKinds:(id)arg1;

@end
