/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary;

@interface UISharedArtwork : NSObject  {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    NSMutableDictionary *_images;
    id *_files;
    int _preferredScale;
    int _preferredDevice;
}

@property float preferredScale;
@property int preferredIdiom;


- (void)dealloc;
- (unsigned int)count;
- (id)imageNamed:(id)arg1 scale:(int)arg2 device:(int)arg3;
- (void)enumerateImageInfoWithBlock:(id)arg1;
- (int)preferredIdiom;
- (float)preferredScale;
- (id)imageAtIndex:(unsigned int)arg1;
- (id)imageNamed:(id)arg1 device:(int)arg2;
- (id)initWithBasePath:(id)arg1;
- (id)nameAtIndex:(unsigned int)arg1;
- (id)imageNamed:(id)arg1 idiom:(int)arg2;
- (void)setPreferredScale:(float)arg1;
- (void)cacheImage:(id)arg1 name:(id)arg2 index:(unsigned int)arg3;
- (void)setPreferredIdiom:(int)arg1;
- (id)initWithName:(id)arg1 inBundle:(id)arg2;
- (id)imageNamed:(id)arg1;

@end
