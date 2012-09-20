/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@class MSAudioProgressView, UIImageView, UIView, SUPlayerStatus;

@interface MSTableCell : SUTableCell  {
    UIImageView *_backsideSnapshotView;
    UIView *_previewContainerView;
    MSAudioProgressView *_previewProgressView;
    SUPlayerStatus *_previewStatus;
}

@property(retain) SUPlayerStatus * previewStatus;


- (id)previewStatus;
- (void)_flipToPreviewProgressView;
- (void)_destroyPreviewProgressView;
- (void)_flipFromPreviewProgressView;
- (void)setPreviewStatus:(id)arg1 animated:(BOOL)arg2;
- (void)setPreviewStatus:(id)arg1;
- (void)dealloc;

@end
