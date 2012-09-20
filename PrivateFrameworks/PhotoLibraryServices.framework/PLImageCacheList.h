/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLLoadRequestKey, NSObject<OS_dispatch_queue>;

@interface PLImageCacheList : NSObject  {
    NSObject<OS_dispatch_queue> *_isolation;
    unsigned int _length;
    unsigned int _lastFailLocation;
    id *_keys;
    unsigned int *_keyHashes;
    id *_images;
    PLLoadRequestKey *_dummy[1];
}

+ (id)newImageCacheList;

- (void)dealloc;
- (id)init;
- (id)_init;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)imageForKey:(id)arg1;
- (void)removeImageForKey:(id)arg1;

@end
