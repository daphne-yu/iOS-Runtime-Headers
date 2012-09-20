/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SAMPGetState : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;

+ (id)getStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getState;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;

@end
