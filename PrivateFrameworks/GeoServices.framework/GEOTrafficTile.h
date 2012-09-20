/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSData;

@interface GEOTrafficTile : PBCodable  {
    NSMutableArray *_trafficIncidents;
    NSMutableArray *_trafficSegments;
    NSData *_vertices;
}

@property(readonly) BOOL hasVertices;
@property(retain) NSData * vertices;
@property(retain) NSMutableArray * trafficSegments;
@property(retain) NSMutableArray * trafficIncidents;


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)vertices;
- (id)trafficSegments;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (struct { int x1; int x2; }*)createUnpackedVerticesWithGutterSize:(int)arg1;
- (id)trafficIncidents;
- (id)trafficIncidentAtIndex:(unsigned int)arg1;
- (void)clearTrafficIncidents;
- (unsigned int)trafficIncidentsCount;
- (id)trafficSegmentAtIndex:(unsigned int)arg1;
- (void)clearTrafficSegments;
- (unsigned int)trafficSegmentsCount;
- (BOOL)hasVertices;
- (void)addTrafficIncident:(id)arg1;
- (void)addTrafficSegment:(id)arg1;
- (void)setTrafficIncidents:(id)arg1;
- (void)setTrafficSegments:(id)arg1;
- (void)setVertices:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end
