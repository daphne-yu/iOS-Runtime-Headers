/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAUISnippetInteraction : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * requestId;
@property(copy) NSString * snippetId;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)snippetInteractionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)snippetInteraction;

- (id)groupIdentifier;
- (void)setSnippetId:(id)arg1;
- (id)snippetId;
- (id)encodedClassName;
- (void)setRequestId:(id)arg1;
- (id)requestId;

@end
