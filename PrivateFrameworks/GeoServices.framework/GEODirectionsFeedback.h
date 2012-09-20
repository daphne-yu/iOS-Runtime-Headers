/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData, NSMutableArray;

@interface GEODirectionsFeedback : PBCodable  {
    struct { double x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } *_stepFeedbacks;
    unsigned int _stepFeedbacksCount;
    unsigned int _stepFeedbacksSpace;
    NSData *_directionResponseID;
    NSMutableArray *_traversedRouteIDs;
}

@property(readonly) BOOL hasDirectionResponseID;
@property(retain) NSData * directionResponseID;
@property(retain) NSMutableArray * traversedRouteIDs;
@property(readonly) unsigned int stepFeedbacksCount;
@property(readonly) struct { double x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }* stepFeedbacks;


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)traversedRouteIDs;
- (void)setStepFeedbacks:(struct { double x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned int)arg2;
- (struct { double x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)stepFeedbacks;
- (struct { double x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })stepFeedbackAtIndex:(unsigned int)arg1;
- (unsigned int)stepFeedbacksCount;
- (id)traversedRouteIDsAtIndex:(unsigned int)arg1;
- (void)clearTraversedRouteIDs;
- (unsigned int)traversedRouteIDsCount;
- (id)directionResponseID;
- (BOOL)hasDirectionResponseID;
- (void)clearStepFeedbacks;
- (void)setTraversedRouteIDs:(id)arg1;
- (void)addStepFeedback:(struct { double x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)addTraversedRouteIDs:(id)arg1;
- (void)setDirectionResponseID:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end
