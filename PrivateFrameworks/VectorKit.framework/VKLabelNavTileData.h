/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray, VKLabelTile, NSMapTable;

@interface VKLabelNavTileData : NSObject  {
    VKLabelTile *_tile;
    NSMapTable *_geoJunctionToJunctionMap;
    NSMutableArray *_tileEdgeJunctions;
    BOOL _foundTileEdgeJunctions;
    struct vector<LabelNavJunctionInfo, vk_allocator<LabelNavJunctionInfo> > { 
        struct LabelNavJunctionInfo {} *__begin_; 
        struct LabelNavJunctionInfo {} *__end_; 
        struct __compressed_pair<LabelNavJunctionInfo *, vk_allocator<LabelNavJunctionInfo> > { 
            struct LabelNavJunctionInfo {} *__first_; 
        } __end_cap_; 
    } _junctionInfos;
}

@property(retain) VKLabelTile * tile;


- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)appendNavJunctionsInWorldRect:(struct { double x1; double x2; double x3; double x4; })arg1 junctions:(id)arg2;
- (id)findTileEdgeJunctionAtCoordinate:(struct { float x1; float x2; })arg1;
- (id)junctionAtCoordinate:(struct { float x1; float x2; })arg1;
- (id)junctionForGeoJunction:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)initializeJunctionInfos;
- (void)_findTileEdgeJunctions;
- (void)addJunction:(id)arg1;
- (id)initWithTile:(id)arg1;
- (void)setTile:(id)arg1;
- (id)tile;

@end
