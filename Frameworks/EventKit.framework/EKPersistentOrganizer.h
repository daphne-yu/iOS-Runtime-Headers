/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentOrganizer : EKPersistentParticipant  {
}

@property(getter=isCurrentUser) BOOL currentUser;

+ (id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4;
+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setOwner:(id)arg1;
- (id)owner;
- (void)setCurrentUser:(BOOL)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4;
- (BOOL)isCurrentUser;
- (int)entityType;

@end
