/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SASportsEntityGroup : SASportsEntity  {
}

@property(copy) NSArray * entities;
@property(copy) NSString * groupType;

+ (id)entityGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)entityGroup;

- (id)groupIdentifier;
- (id)entities;
- (void)setEntities:(id)arg1;
- (void)setGroupType:(id)arg1;
- (id)groupType;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;

@end
