/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, WebScriptObject, SUScriptFunction, NSNumber;

@interface SUScriptMenuViewController : SUScriptViewController  {
    SUScriptFunction *_action;
}

@property(retain) WebScriptObject * action;
@property(retain) id items;
@property(retain) NSNumber * selectedIndex;
@property(retain) NSString * title;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)itemWithTitle:(id)arg1 userInfo:(id)arg2;
- (id)_viewController;
- (id)newNativeViewController;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)action;
- (void)dealloc;
- (void)setSelectedIndex:(id)arg1;
- (id)selectedIndex;
- (void)setAction:(id)arg1;
- (void)setItems:(id)arg1;
- (id)items;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)attributeKeys;

@end
