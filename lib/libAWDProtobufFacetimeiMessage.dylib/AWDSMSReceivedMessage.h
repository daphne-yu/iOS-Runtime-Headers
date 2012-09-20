/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
 */

@class NSString;

@interface AWDSMSReceivedMessage : PBCodable  {
    unsigned long long _timestamp;
    int _ctError;
    int _fzError;
    NSString *_guid;
    unsigned int _hasAttachments;
    unsigned int _isFromEmail;
    unsigned int _isFromPhoneNumber;
    unsigned int _isGroupMessage;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int ctError : 1; 
        unsigned int fzError : 1; 
        unsigned int hasAttachments : 1; 
        unsigned int isFromEmail : 1; 
        unsigned int isFromPhoneNumber : 1; 
        unsigned int isGroupMessage : 1; 
    } _has;
}

@property(readonly) BOOL hasGuid;
@property(retain) NSString * guid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasFzError;
@property int fzError;
@property BOOL hasCtError;
@property int ctError;
@property BOOL hasIsGroupMessage;
@property unsigned int isGroupMessage;
@property BOOL hasIsFromPhoneNumber;
@property unsigned int isFromPhoneNumber;
@property BOOL hasIsFromEmail;
@property unsigned int isFromEmail;
@property BOOL hasHasAttachments;
@property unsigned int hasAttachments;


- (id)guid;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (unsigned int)isGroupMessage;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasCtError:(BOOL)arg1;
- (void)setCtError:(int)arg1;
- (int)ctError;
- (BOOL)hasCtError;
- (void)setHasIsFromEmail:(BOOL)arg1;
- (void)setHasIsFromPhoneNumber:(BOOL)arg1;
- (void)setIsFromEmail:(unsigned int)arg1;
- (unsigned int)isFromEmail;
- (BOOL)hasIsFromEmail;
- (void)setIsFromPhoneNumber:(unsigned int)arg1;
- (unsigned int)isFromPhoneNumber;
- (BOOL)hasIsFromPhoneNumber;
- (void)setHasHasAttachments:(BOOL)arg1;
- (void)setHasIsGroupMessage:(BOOL)arg1;
- (void)setHasAttachments:(unsigned int)arg1;
- (BOOL)hasHasAttachments;
- (void)setIsGroupMessage:(unsigned int)arg1;
- (BOOL)hasIsGroupMessage;
- (void)setHasFzError:(BOOL)arg1;
- (void)setFzError:(int)arg1;
- (int)fzError;
- (BOOL)hasFzError;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (BOOL)hasGuid;
- (void)setGuid:(id)arg1;
- (unsigned int)hasAttachments;

@end
