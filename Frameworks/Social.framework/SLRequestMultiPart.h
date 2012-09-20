/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSData, NSString;

@interface SLRequestMultiPart : NSObject  {
    NSData *_payload;
    NSString *_name;
    NSString *_type;
    NSString *_uniqueIdentifier;
    NSString *_multiPartBoundary;
    NSString *_filename;
}

@property(readonly) NSString * uniqueIdentifier;
@property(retain) NSData * payload;
@property(copy) NSString * name;
@property(copy) NSString * type;
@property(copy) NSString * filename;
@property(copy) NSString * multiPartBoundary;

+ (id)multiPartWithName:(id)arg1 payload:(id)arg2 type:(id)arg3 multiPartBoundary:(id)arg4;

- (void)setName:(id)arg1;
- (id)name;
- (id)type;
- (void).cxx_destruct;
- (unsigned int)length;
- (void)setFilename:(id)arg1;
- (id)uniqueIdentifier;
- (void)setType:(id)arg1;
- (id)multiPartHeader;
- (id)payloadEpilogue;
- (id)payloadPreamble;
- (id)partData;
- (id)multiPartBoundary;
- (void)setMultiPartBoundary:(id)arg1;
- (void)setPayload:(id)arg1;
- (id)payload;
- (id)filename;

@end
