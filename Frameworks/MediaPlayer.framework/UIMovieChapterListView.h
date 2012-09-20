/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView, UITableView;

@interface UIMovieChapterListView : UIView  {
    UIImageView *_backgroundImageView;
    unsigned int _pinnedRow;
    UITableView *_tableView;
    float _topPadding;
}

@property(readonly) UITableView * tableView;
@property float topPadding;


- (float)topPadding;
- (void)setTopPadding:(float)arg1;
- (void)pinVisibleRow:(unsigned int)arg1;
- (id)init;
- (id)tableView;
- (void)layoutSubviews;

@end
