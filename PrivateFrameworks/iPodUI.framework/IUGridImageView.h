/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIImage;

@interface IUGridImageView : UIView  {
}

@property(readonly) UIImage * image;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageSubRect;
@property(getter=isDownloadable) BOOL downloadable;
@property(getter=isHighlighted) BOOL highlighted;


- (BOOL)isDownloadable;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)image;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1 imageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageSubRect;
- (void)setTitleHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDownloadable:(BOOL)arg1;

@end
