/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardEmojiCategory, UIKeyboardEmojiInputController;

@interface UIKeyboardEmojiCharacterPicker : UIKeyboardEmojiPicker <UIKeyboardEmojiInput> {
    UIKeyboardEmojiCategory *_category;
    UIKeyboardEmojiInputController *_inputController;
}

@property UIKeyboardEmojiCategory * category;


- (void)dealloc;
- (id)charactersForRow:(int)arg1;
- (id)category;
- (void)setCategory:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboard:(id)arg2 key:(id)arg3 state:(int)arg4;
- (void)reloadForCategory:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;

@end
