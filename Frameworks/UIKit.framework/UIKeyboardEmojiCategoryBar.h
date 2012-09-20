/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, NSMutableArray, UIKeyboardEmojiCategoryController;

@interface UIKeyboardEmojiCategoryBar : UIKBKeyView <UIKeyboardEmojiCategoryControl> {
    UIKeyboardEmojiCategoryController *_categoryController;
    int _selected;
    int _total;
    int _dividerTotal;
    UIImage *_darkDivider;
    UIImage *_plainDivider;
    UIImage *_selectedDivider;
    NSMutableArray *_segmentViews;
    NSMutableArray *_dividerViews;
}

@property int selectedIndex;


- (void)dealloc;
- (void)setCategory:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDivider:(int)arg1;
- (void)releaseImagesAndViews;
- (void)setSelectedIndex:(int)arg1;
- (int)selectedIndex;
- (void)sendActionsForControlEvents:(unsigned int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
