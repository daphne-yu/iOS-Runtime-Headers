/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand> {
}

@property(copy) NSString * appId;
@property(copy) NSArray * callbacks;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)baseClientBoundCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)baseClientBoundCommand;

- (id)groupIdentifier;
- (id)callbacks;
- (void)setCallbacks:(id)arg1;
- (void)setAppId:(id)arg1;
- (id)appId;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
