/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileSelection : NSObject  {
    int _tileSize;
    BOOL _bootstrap;
    unsigned int _maxZ;
}

@property int tileSize;
@property BOOL bootstrap;
@property unsigned int maxZ;


- (id)init;
- (int)tileSize;
- (void)setTileSize:(int)arg1;
- (void)setBootstrap:(BOOL)arg1;
- (BOOL)bootstrap;
- (float)_zoomLevelForGroundPoint:(const struct { double x1; double x2; double x3; }*)arg1 context:(id)arg2;
- (float)_zoomLevelForScreenPoint:(struct CGPoint { float x1; float x2; })arg1 context:(id)arg2;
- (struct { unsigned int x1; int x2; int x3; int x4; int x5; })relevantTilesForContext:(id)arg1;
- (id)keysForContext:(id)arg1;
- (void)setMaxZ:(unsigned int)arg1;
- (unsigned int)maxZ;

@end
