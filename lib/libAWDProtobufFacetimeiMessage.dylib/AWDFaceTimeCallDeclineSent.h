/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
 */

@class NSString;

@interface AWDFaceTimeCallDeclineSent : PBCodable  {
    unsigned long long _timestamp;
    unsigned int _declineCode;
    int _errorCode;
    NSString *_guid;
    unsigned int _sendDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int declineCode : 1; 
        unsigned int errorCode : 1; 
        unsigned int sendDuration : 1; 
    } _has;
}

@property(readonly) BOOL hasGuid;
@property(retain) NSString * guid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasErrorCode;
@property int errorCode;
@property BOOL hasDeclineCode;
@property unsigned int declineCode;
@property BOOL hasSendDuration;
@property unsigned int sendDuration;


- (id)guid;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasDeclineCode:(BOOL)arg1;
- (void)setDeclineCode:(unsigned int)arg1;
- (unsigned int)declineCode;
- (BOOL)hasDeclineCode;
- (void)setHasSendDuration:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (unsigned int)sendDuration;
- (BOOL)hasSendDuration;
- (void)setErrorCode:(int)arg1;
- (int)errorCode;
- (BOOL)hasErrorCode;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (BOOL)hasGuid;
- (void)setGuid:(id)arg1;

@end
