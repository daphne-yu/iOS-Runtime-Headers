/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPMediaItem, IUVideoTitleViewPlayButton, MPDownloadProgressIndicator;

@interface IUVideoTitleView : UIView  {
    SEL _action;
    BOOL _downloadable;
    BOOL _downloading;
    float _downloadProgress;
    MPDownloadProgressIndicator *_downloadProgressIndicator;
    MPMediaItem *_mediaItem;
    IUVideoTitleViewPlayButton *_playButton;
    id _target;
}

@property(getter=isPlayButtonEnabled) BOOL playButtonEnabled;
@property(getter=isDownloadable) BOOL downloadable;
@property(getter=isDownloading) BOOL downloading;
@property BOOL canCancelDownload;
@property float downloadProgress;
@property(retain) MPMediaItem * mediaItem;


- (BOOL)isDownloading;
- (BOOL)isDownloadable;
- (void)_cancelAction:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (id)mediaItem;
- (void)dealloc;
- (float)downloadProgress;
- (void)setDownloadProgress:(float)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDownloading:(BOOL)arg1;
- (BOOL)canCancelDownload;
- (BOOL)isPlayButtonEnabled;
- (id)_copyrightFormattedString;
- (void)_updatePlayButtonImages;
- (void)setCanCancelDownload:(BOOL)arg1;
- (void)setPlayButtonEnabled:(BOOL)arg1;
- (void)_playMovie:(id)arg1;
- (void)setDownloadable:(BOOL)arg1;

@end
