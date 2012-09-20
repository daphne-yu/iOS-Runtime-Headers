/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAClearContext : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)clearContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clearContext;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
