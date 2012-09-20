/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardEmojiCategoryController;

@interface UIKeyboardEmojiCategoryPicker : UIKeyboardEmojiPicker <UIKeyboardEmojiCategoryControl> {
    UIKeyboardEmojiCategoryController *_categoryController;
}


- (void)dealloc;
- (id)categoryForCurrentRow;
- (id)symbolForRow:(int)arg1;
- (id)titleForRow:(int)arg1;
- (void)setCategory:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboard:(id)arg2 key:(id)arg3 state:(int)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
