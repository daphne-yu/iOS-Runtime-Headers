/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSString, NSDictionary;

@interface FTProfileLinkHandleMessage : FTProfileMessage <NSCopying> {
    NSString *_uri;
    NSDictionary *_authenticationData;
    NSNumber *_responseVettingStatus;
}

@property(setter=setURI:,copy) NSString * URI;
@property(copy) NSDictionary * authenticationData;
@property(copy) NSNumber * responseVettingStatus;


- (void)setAuthenticationData:(id)arg1;
- (id)authenticationData;
- (id)responseVettingStatus;
- (id)bagKey;
- (void)setResponseVettingStatus:(id)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (BOOL)wantsBodySignature;
- (BOOL)wantsSignature;
- (id)requiredKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)messageBody;
- (void)setURI:(id)arg1;
- (id)URI;

@end
