/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class UIActivityIndicatorView, UIImageView, UIImage;

@interface SLFacebookPreviewImageView : UIView  {
    UIImage *_image;
    UIImageView *_previewView;
    UIActivityIndicatorView *_activityView;
}

@property(retain) UIImage * image;
@property BOOL isTranscoding;

+ (id)blankWebpageImage;

- (void).cxx_destruct;
- (id)image;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIsTranscoding:(BOOL)arg1;
- (BOOL)isTranscoding;

@end
