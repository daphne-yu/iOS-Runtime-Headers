/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSURLRequest, NSString, SSURLRequestProperties;

@interface SSDownloadAsset : SSEntity  {
    int _assetType;
    SSURLRequestProperties *_localProperties;
}

@property(readonly) NSURLRequest * URLRequest;
@property(readonly) NSArray * sinfs;
@property(readonly) long long fileSize;
@property(readonly) NSString * downloadFileName;
@property(readonly) NSString * downloadPath;
@property(readonly) NSString * finalizedPath;
@property(getter=isExternal,readonly) BOOL external;
@property(readonly) SSURLRequestProperties * URLRequestProperties;

+ (id)assetWithURL:(id)arg1 type:(int)arg2;
+ (long long)_setValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_existsMessage;

- (id)initWithURLRequest:(id)arg1;
- (id)URLRequest;
- (id)URLRequestProperties;
- (id)sinfs;
- (void)dealloc;
- (id)finalizedPath;
- (id)downloadPath;
- (id)downloadFileName;
- (id)initWithURLRequest:(id)arg1 type:(int)arg2;
- (id)_copyURLRequestProperties;
- (id)copyXPCEncoding;
- (id)_initWithDownloadMetadata:(id)arg1 type:(id)arg2;
- (void)_resetLocalIVars;
- (int)_legacyAssetType;
- (int)assetType;
- (BOOL)isExternal;
- (long long)bytesDownloaded;
- (long long)fileSize;

@end
