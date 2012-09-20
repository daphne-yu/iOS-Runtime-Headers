/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKTrafficSegmentsAlongRoute, GEOMapRegion, NSArray, NSMutableArray, GEORoute;

@interface VKPolylineOverlay : NSObject <VKOverlay> {
    GEOMapRegion *_boundingMapRegion;
    NSMutableArray *_sections;
    GEORoute *_route;
    struct __CFSet { } *_observers;
    double _trafficTimeStamp;
    VKTrafficSegmentsAlongRoute *_trafficSegments;
}

@property(readonly) GEORoute * route;
@property(readonly) GEORoute * geoRoute;
@property(readonly) unsigned int pointCount;
@property(readonly) unsigned int trafficColorsCount;
@property(readonly) unsigned int* trafficColors;
@property(readonly) unsigned int trafficColorOffsetsCount;
@property(readonly) unsigned int* trafficColorOffsets;
@property(readonly) NSArray * sections;
@property(readonly) VKTrafficSegmentsAlongRoute * trafficSegments;
@property(readonly) double trafficTimeStamp;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) GEOMapRegion * boundingMapRegion;


- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dealloc;
- (id)sections;
- (struct { double x1; double x2; })coordinate;
- (struct { double x1; double x2; })coordinateAtIndex:(unsigned int)arg1;
- (BOOL)resetTrafficWithRoute:(id)arg1 WithStep:(struct RouteCalibration { unsigned int x1; float x2; }*)arg2 trafficWalking:(struct TrafficWalking { double x1; int x2; int x3; unsigned int *x4; unsigned int *x5; }*)arg3 routeIndex:(int*)arg4;
- (void)calibrate:(struct RouteCalibration { unsigned int x1; float x2; }*)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 forDistance:(unsigned int)arg4;
- (unsigned int*)trafficColorOffsets;
- (unsigned int)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned int)trafficColorsCount;
- (void)updateTraffic;
- (void)_buildSectionsFromRoute:(id)arg1;
- (double)trafficTimeStamp;
- (id)trafficSegments;
- (id)geoRoute;
- (struct _NSRange { unsigned int x1; unsigned int x2; })sectionRangeForBounds:(struct { double x1; double x2; double x3; double x4; })arg1;
- (id)initWithRoute:(id)arg1;
- (id)route;
- (id)boundingMapRegion;
- (unsigned int)pointCount;

@end
