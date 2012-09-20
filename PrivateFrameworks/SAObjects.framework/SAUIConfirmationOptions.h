/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAUIConfirmationOptions : AceObject <SAAceSerializable> {
}

@property(copy) NSString * cancelTrigger;
@property(copy) NSArray * confirmCommands;
@property(copy) NSString * confirmText;
@property(copy) NSArray * denyCommands;
@property(copy) NSString * denyText;

+ (id)confirmationOptionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)confirmationOptions;

- (id)groupIdentifier;
- (void)setDenyText:(id)arg1;
- (id)denyText;
- (void)setDenyCommands:(id)arg1;
- (id)denyCommands;
- (void)setConfirmText:(id)arg1;
- (id)confirmText;
- (void)setConfirmCommands:(id)arg1;
- (id)confirmCommands;
- (void)setCancelTrigger:(id)arg1;
- (id)cancelTrigger;
- (id)encodedClassName;

@end
