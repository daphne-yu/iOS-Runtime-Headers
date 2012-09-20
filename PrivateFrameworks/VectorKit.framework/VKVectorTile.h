/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKBuildingFootprintMaker, VKMapTileList, VKStylesheet, GEOVectorTile, VKTrafficTile, NSMutableArray, NSArray;

@interface VKVectorTile : VKTile  {
    GEOVectorTile *_modelTile;
    VKTrafficTile *_trafficTile;
    NSMutableArray *_roadGroups;
    NSMutableArray *_polygonGroups;
    NSMutableArray *_coastlineGroups;
    BOOL _shouldBlend;
    float _alpha;
    VKBuildingFootprintMaker *_buildingFootprintMaker;
    float _maximumStyleZ;
    float _textureScale;
    VKStylesheet *_stylesheet;
    int _vectorType;
    VKMapTileList *_fragments;
}

@property(retain) GEOVectorTile * modelTile;
@property(retain) VKTrafficTile * trafficTile;
@property(retain) VKStylesheet * stylesheet;
@property int vectorType;
@property(readonly) NSArray * roadGroups;
@property(readonly) NSArray * polygonGroups;
@property(readonly) NSArray * coastlineGroups;
@property BOOL shouldBlend;
@property float alpha;
@property(readonly) VKBuildingFootprintMaker * buildingFootprintMaker;
@property float maximumStyleZ;
@property(readonly) double maxHeight;
@property float textureScale;
@property(readonly) VKMapTileList * fragments;


- (void)setStylesheet:(id)arg1;
- (void)dealloc;
- (id)stylesheet;
- (void)setAlpha:(float)arg1;
- (float)alpha;
- (double)maxHeight;
- (void)setTextureScale:(float)arg1;
- (float)textureScale;
- (id)buildingFootprintMaker;
- (void)setShouldBlend:(BOOL)arg1;
- (BOOL)shouldBlend;
- (id)coastlineGroups;
- (id)polygonGroups;
- (id)roadGroups;
- (id)trafficTile;
- (int)vectorType;
- (void)generateBuildingFootprintMeshWithFacades:(BOOL)arg1;
- (void)buildPolygons;
- (void)buildCoastlines;
- (void)buildRoadGroupsAndGenerateMesh:(BOOL)arg1;
- (void)setTrafficTile:(id)arg1;
- (void)setModelTile:(id)arg1;
- (BOOL)heightAtX:(float)arg1 Y:(float)arg2 outZ:(float*)arg3;
- (id)modelTile;
- (void)setMaximumStyleZ:(float)arg1;
- (float)maximumStyleZ;
- (id)fragments;
- (void)setVectorType:(int)arg1;
- (unsigned int)geometryCount;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;

@end
