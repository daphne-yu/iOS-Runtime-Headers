/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SABaseCommand : AceObject <SAAceSerializable, SAAceCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)baseCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)baseCommand;

- (id)groupIdentifier;
- (void)setRefId:(id)arg1;
- (id)refId;
- (void)setAceId:(id)arg1;
- (id)aceId;
- (id)encodedClassName;

@end
