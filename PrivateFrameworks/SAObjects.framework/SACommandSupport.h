/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SAObjectSupport, NSURL;

@interface SACommandSupport : AceObject <SAAceSerializable> {
}

@property(copy) NSString * aceVersion;
@property(copy) NSString * commandId;
@property(retain) SAObjectSupport * resultSupport;
@property(copy) NSURL * serverEndpoint;
@property(copy) NSArray * supportedConstraints;
@property int weight;

+ (id)commandSupportWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandSupport;

- (id)groupIdentifier;
- (int)weight;
- (void)setWeight:(int)arg1;
- (void)setSupportedConstraints:(id)arg1;
- (id)supportedConstraints;
- (void)setServerEndpoint:(id)arg1;
- (id)serverEndpoint;
- (void)setResultSupport:(id)arg1;
- (id)resultSupport;
- (void)setCommandId:(id)arg1;
- (id)commandId;
- (void)setAceVersion:(id)arg1;
- (id)aceVersion;
- (id)encodedClassName;

@end
