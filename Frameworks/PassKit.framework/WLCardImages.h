/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSURL;

@interface WLCardImages : NSObject <NSCoding> {
    unsigned int _version;
    NSURL *_originCacheURL;
}

@property(copy) NSURL * originCacheURL;

+ (int)imageSet;
+ (id)archiveName;
+ (id)_archiveURL:(id)arg1;
+ (id)_archivedImages:(id)arg1;
+ (id)imageSet:(int)arg1 withCacheURL:(id)arg2 cardURL:(id)arg3 displayProfile:(id)arg4;
+ (Class)classForImageSet:(int)arg1;
+ (int)currentVersion;
+ (BOOL)supportsSecureCoding;

- (id)originCacheURL;
- (void)saveCache:(id)arg1;
- (void)setOriginCacheURL:(id)arg1;
- (id)initWithCardURL:(id)arg1 displayProfile:(id)arg2;
- (void)preheatImages;
- (void)dealloc;
- (int)version;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
