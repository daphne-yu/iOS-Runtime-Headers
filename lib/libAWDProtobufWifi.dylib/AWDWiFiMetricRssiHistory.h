/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDProtobufWifi.dylib
 */

@interface AWDWiFiMetricRssiHistory : PBCodable  {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _rssiHistorys;
    unsigned long long _timestamp;
    struct { 
        unsigned int timestamp : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) unsigned int rssiHistorysCount;
@property(readonly) int* rssiHistorys;


- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)setRssiHistorys:(int*)arg1 count:(unsigned int)arg2;
- (int*)rssiHistorys;
- (void)addRssiHistory:(int)arg1;
- (int)rssiHistoryAtIndex:(unsigned int)arg1;
- (void)clearRssiHistorys;
- (unsigned int)rssiHistorysCount;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;

@end
