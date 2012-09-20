/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAReminderSmsPayload : AceObject <SAReminderPayload> {
}

@property(copy) NSString * message;
@property(copy) NSArray * recipients;

+ (id)smsPayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)smsPayload;

- (id)groupIdentifier;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setRecipients:(id)arg1;
- (id)recipients;
- (id)encodedClassName;

@end
