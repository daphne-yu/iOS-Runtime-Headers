/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SADomainObjectRetrieveCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}

@property(copy) NSArray * objects;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)domainObjectRetrieveCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectRetrieveCompleted;

- (id)groupIdentifier;
- (void)setObjects:(id)arg1;
- (id)objects;
- (id)encodedClassName;

@end
