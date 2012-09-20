/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchFeedbackRequest : PBRequest  {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionGUID;
    long long _businessID;
    double _timestamp;
    int _feedbackType;
    int _numberOfResults;
    int _positionInResults;
    int _sequenceNumber;
    struct { 
        unsigned int sessionGUID : 1; 
        unsigned int businessID : 1; 
        unsigned int timestamp : 1; 
        unsigned int feedbackType : 1; 
        unsigned int numberOfResults : 1; 
        unsigned int positionInResults : 1; 
        unsigned int sequenceNumber : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property double timestamp;
@property BOOL hasSessionGUID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property BOOL hasBusinessID;
@property long long businessID;
@property BOOL hasFeedbackType;
@property int feedbackType;
@property BOOL hasNumberOfResults;
@property int numberOfResults;
@property BOOL hasPositionInResults;
@property int positionInResults;
@property BOOL hasSequenceNumber;
@property int sequenceNumber;


- (void)setSequenceNumber:(int)arg1;
- (int)sequenceNumber;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (BOOL)hasBusinessID;
- (long long)businessID;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHasPositionInResults:(BOOL)arg1;
- (void)setHasNumberOfResults:(BOOL)arg1;
- (void)setHasFeedbackType:(BOOL)arg1;
- (void)setHasBusinessID:(BOOL)arg1;
- (void)setPositionInResults:(int)arg1;
- (int)positionInResults;
- (BOOL)hasPositionInResults;
- (void)setNumberOfResults:(int)arg1;
- (int)numberOfResults;
- (BOOL)hasNumberOfResults;
- (void)setFeedbackType:(int)arg1;
- (int)feedbackType;
- (BOOL)hasFeedbackType;
- (void)setBusinessID:(long long)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setHasSessionGUID:(BOOL)arg1;
- (BOOL)hasSequenceNumber;
- (void)setSessionGUID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (BOOL)hasSessionGUID;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;

@end
