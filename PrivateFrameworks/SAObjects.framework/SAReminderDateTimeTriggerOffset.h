/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SAReminderDateTimeTriggerOffset : AceObject <SAAceSerializable> {
}

@property(copy) NSString * offsetTimeUnit;
@property(copy) NSNumber * offsetValue;

+ (id)dateTimeTriggerOffsetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dateTimeTriggerOffset;

- (id)groupIdentifier;
- (void)setOffsetValue:(id)arg1;
- (id)offsetValue;
- (void)setOffsetTimeUnit:(id)arg1;
- (id)offsetTimeUnit;
- (id)encodedClassName;

@end
