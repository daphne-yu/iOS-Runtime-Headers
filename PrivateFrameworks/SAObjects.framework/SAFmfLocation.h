/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, SAPersonAttribute;

@interface SAFmfLocation : SALocation  {
}

@property(retain) NSNumber * distance;
@property(copy) NSString * emailAddress;
@property(retain) SAPersonAttribute * friend;
@property(retain) NSNumber * locationDate;

+ (id)location;
+ (id)locationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)emailAddress;
- (id)distance;
- (void)setDistance:(id)arg1;
- (void)setLocationDate:(id)arg1;
- (id)locationDate;
- (void)setFriend:(id)arg1;
- (id)friend;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setEmailAddress:(id)arg1;

@end
