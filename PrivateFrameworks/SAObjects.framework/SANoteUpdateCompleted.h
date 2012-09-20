/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SANoteUpdateCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)updateCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)updateCompleted;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
