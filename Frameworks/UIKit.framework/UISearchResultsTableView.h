/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISearchDisplayController, UIView;

@interface UISearchResultsTableView : UITableView  {
    UISearchDisplayController *_controller;
    float _offsetForNoResultsMessage;
    UIView *_topShadowView;
}

@property UISearchDisplayController * controller;
@property(getter=_topShadowView,setter=_setTopShadowView:,retain) UIView * _topShadowView;


- (void)_setTopShadowView:(id)arg1;
- (float)_offsetForNoResultsMessage;
- (void)_setOffsetForNoResultsMessage:(float)arg1;
- (id)controller;
- (void)setController:(id)arg1;
- (id)_topShadowView;
- (void)_numberOfRowsDidChange;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;

@end
