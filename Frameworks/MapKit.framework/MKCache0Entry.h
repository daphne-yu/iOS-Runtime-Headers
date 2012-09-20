/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCache0Entry : NSObject <MKCacheableObject> {
    id key;
    id object;
    unsigned int accessTime;
}

@property(readonly) id key;
@property(retain) id object;
@property(readonly) id _mapkit_cache_key;
@property unsigned int _mapkit_cache_accessTime;


- (id)description;
- (void)dealloc;
- (void)setObject:(id)arg1;
- (id)key;
- (id)object;
- (id)initWithObject:(id)arg1 key:(id)arg2;
- (void)set_mapkit_cache_accessTime:(unsigned int)arg1;
- (id)_mapkit_cache_key;
- (unsigned int)_mapkit_cache_accessTime;

@end
