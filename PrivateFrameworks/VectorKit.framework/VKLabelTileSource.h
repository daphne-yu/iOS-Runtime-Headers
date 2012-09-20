/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKLabelFeaturePool;

@interface VKLabelTileSource : VKTileSetBackedTileSource  {
    VKLabelFeaturePool *_featurePool;
    BOOL _localizeLabels;
    int _labelScaleFactor;
}

@property(retain) VKLabelFeaturePool * featurePool;
@property BOOL localizeLabels;
@property int labelScaleFactor;


- (void)dealloc;
- (id)featurePool;
- (int)_labelTileType;
- (int)defaultMaximumZoomLevel;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (BOOL)maximumZoomLevelBoundsCamera;
- (BOOL)minimumZoomLevelBoundsCamera;
- (void)setFeaturePool:(id)arg1;
- (id)initWithTileSet:(id)arg1 featurePool:(id)arg2;
- (void)setLabelScaleFactor:(int)arg1;
- (int)labelScaleFactor;
- (void)setLocalizeLabels:(BOOL)arg1;
- (BOOL)localizeLabels;

@end
