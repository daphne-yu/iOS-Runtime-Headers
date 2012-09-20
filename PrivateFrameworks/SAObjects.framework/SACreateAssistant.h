/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSData * activationToken;
@property(copy) NSString * connectionType;
@property(copy) NSString * language;
@property(copy) NSData * validationData;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)createAssistantWithDictionary:(id)arg1 context:(id)arg2;
+ (id)createAssistant;

- (void)setValidationData:(id)arg1;
- (id)validationData;
- (id)groupIdentifier;
- (void)setLanguage:(id)arg1;
- (id)language;
- (void)setConnectionType:(id)arg1;
- (id)connectionType;
- (void)setActivationToken:(id)arg1;
- (id)activationToken;
- (id)encodedClassName;

@end
