/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSNumberFormatter, UILabel;

@interface QLPageNumberView : UIView  {
    int _pageNumber;
    int _pageCount;
    UILabel *_backgroundLabel;
    UILabel *_label;
    NSNumberFormatter *_indexFormatter;
}

@property int pageNumber;
@property int pageCount;


- (struct CGPath { }*)_copyMutablePathForRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 radius:(float)arg2 inverted:(BOOL)arg3;
- (void)_updateString;
- (id)_indexFormatter;
- (void)setPageNumber:(int)arg1;
- (void)dealloc;
- (int)pageNumber;
- (void)setPageCount:(int)arg1;
- (int)pageCount;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
