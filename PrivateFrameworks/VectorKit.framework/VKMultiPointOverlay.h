/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class GEOMapRegion;

@interface VKMultiPointOverlay : NSObject <VKOverlay> {
    struct { float x1; float x2; } *_points;
    unsigned int _pointCount;
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
    } _bounds;
    GEOMapRegion *_boundingMapRegion;
}

@property(readonly) GEOMapRegion * boundingMapRegion;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) unsigned int pointCount;
@property(readonly) struct { float x1; float x2; }* points;
@property(readonly) struct { double x1; double x2; double x3; double x4; } bounds;


- (void)dealloc;
- (struct { double x1; double x2; double x3; double x4; })bounds;
- (struct { double x1; double x2; })coordinate;
- (void)_setCoordinates:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2;
- (id)boundingMapRegion;
- (struct { float x1; float x2; }*)points;
- (unsigned int)pointCount;

@end
