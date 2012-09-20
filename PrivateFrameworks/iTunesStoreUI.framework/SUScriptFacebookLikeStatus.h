/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSDictionary;

@interface SUScriptFacebookLikeStatus : SUScriptObject  {
    NSDictionary *_dictionary;
}

@property(readonly) unsigned int friendLikeCount;
@property(readonly) NSArray * friends;
@property(readonly) unsigned int globalLikeCount;
@property(getter=isLikedByMe,readonly) id likedByMe;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;

- (id)friends;
- (id)isLikedByMe;
- (unsigned int)globalLikeCount;
- (unsigned int)friendLikeCount;
- (id)initWithLikeStatusDictionary:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)dealloc;
- (id)attributeKeys;

@end
