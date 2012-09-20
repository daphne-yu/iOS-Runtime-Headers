/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SANoteDelete : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(copy) NSURL * identifier;

+ (id)delete;
+ (id)deleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;

@end
