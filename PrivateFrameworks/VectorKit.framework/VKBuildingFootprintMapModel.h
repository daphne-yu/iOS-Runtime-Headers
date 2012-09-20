/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKMercatorTerrainHeightCache, VGLRenderState, VKAnimation, VKVectorTile;

@interface VKBuildingFootprintMapModel : VKVectorMapModel <VKMercatorTerrainHeightProvider, VKMapLayer> {
    VKAnimation *_styleChangeAnimation;
    VGLRenderState *_renderState;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _topColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _facadeColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _landmarkColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _flatColor;
    int _vectorType;
    int _buildingMode;
    unsigned int _buildingOccluder;
    unsigned int _previousBuildingOccluder;
    VKAnimation *_fadeBuildingAnimation;
    float _buildingOccluderAlpha;
    VKVectorTile *_tileWithBuildingOccluder;
    BOOL _fadeTiles;
    VKMercatorTerrainHeightCache *_heightCache;
}

@property(readonly) VKMercatorTerrainHeightCache * heightCache;
@property int vectorType;
@property BOOL fadeTiles;
@property int buildingMode;


- (void)reset;
- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void)setActive:(BOOL)arg1;
- (BOOL)fadeTiles;
- (void)setBuildingMode:(int)arg1;
- (id)_globalBuildingDrawStyle;
- (void)_reloadStyleAnimated:(BOOL)arg1;
- (void)vectorTypeDidChange;
- (double)maxTileHeightAtPoint:(struct { double x1; double x2; double x3; })arg1;
- (int)vectorType;
- (void)willStopDrawingTiles:(id)arg1;
- (void)willStartDrawingTiles:(id)arg1;
- (void)removePersistingExitingTiles:(id)arg1;
- (BOOL)wantsCategorizedSourceTiles;
- (void)setBuildingMode:(int)arg1 animated:(BOOL)arg2;
- (int)buildingMode;
- (void)setVectorType:(int)arg1;
- (void)setFadeTiles:(BOOL)arg1;
- (id)heightCache;
- (void)drawDebugScene:(id)arg1 withContext:(id)arg2;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (double)heightAtPoint:(struct { double x1; double x2; double x3; })arg1;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)mapLayerPosition;

@end
