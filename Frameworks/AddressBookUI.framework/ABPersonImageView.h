/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIImageView, UIImage, <ABPersonImageDataDelegate>, <ABStyleProvider>, ABClippingImageView;

@interface ABPersonImageView : ABPasteboardControl  {
    void *_displayedPerson;
    UIImageView *_personImageView;
    UIImageView *_editingImageView;
    ABClippingImageView *_emptyImageView;
    ABClippingImageView *_pasteboardMaskImageView;
    UIImage *_personImage;
    BOOL _isEditing;
    BOOL _showLabel;
    BOOL _scalesContentToFit;
    BOOL _needsReflow;
    BOOL _needsReload;
    BOOL _multiplePhotoBackdropEnabled;
    BOOL _shouldPickBestImage;
    <ABPersonImageDataDelegate> *_imageDataDelegate;
    <ABStyleProvider> *_styleProvider;
    BOOL _allowsEditing;
}

@property void* displayedPerson;
@property(retain) <ABStyleProvider> * styleProvider;
@property BOOL allowsEditing;
@property BOOL multiplePhotoBackdropEnabled;
@property <ABPersonImageDataDelegate> * imageDataDelegate;
@property(readonly) UIImage * maskImage;
@property(readonly) UIImage * backgroundImage;
@property(readonly) UIImage * overlayImage;
@property(readonly) UIImage * attributionImage;
@property BOOL scalesContentToFit;
@property BOOL shouldPickBestImage;

+ (id)newImageWithName:(id)arg1;
+ (struct CGSize { float x1; float x2; })sizeForOptimalPerformance;

- (id)overlayImage;
- (id)maskImage;
- (void)dealloc;
- (void)setAllowsEditing:(BOOL)arg1;
- (BOOL)allowsEditing;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (id)backgroundImage;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)reload;
- (void)layoutSubviews;
- (void)setNeedsReload;
- (void)setScalesContentToFit:(BOOL)arg1;
- (BOOL)scalesContentToFit;
- (void)setImageDataDelegate:(id)arg1;
- (id)imageDataDelegate;
- (void)setShouldPickBestImage:(BOOL)arg1;
- (BOOL)shouldPickBestImage;
- (BOOL)multiplePhotoBackdropEnabled;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (BOOL)abShouldShowMenu;
- (BOOL)hasImageToDisplay;
- (void)setMultiplePhotoBackdropEnabled:(BOOL)arg1;
- (id)copyImageForPerson:(void*)arg1 withFrameSize:(struct CGSize { float x1; float x2; })arg2 operation:(id)arg3 cache:(id)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (id)_newDictionaryWithImageData;
- (id)_supportedPasteboardImageTypesIncludingCustomTypes:(BOOL)arg1;
- (id)pasteboardMaskImageView;
- (void)setNeedsReflow;
- (id)copyDefaultImageForPerson:(void*)arg1;
- (void)reflowIfNeeded;
- (void)reloadIfNeeded;
- (id)emptyImageView;
- (id)personImageView;
- (id)framedPhoto;
- (id)editingImageView;
- (void)_drawEditLabelInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)attributionImage;
- (void)setIsEditing:(BOOL)arg1 animate:(BOOL)arg2;
- (id)styleProvider;
- (void)setStyleProvider:(id)arg1;
- (void*)displayedPerson;
- (void)setDisplayedPerson:(void*)arg1;
- (void)reflow;

@end
