/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SURatingControl;

@interface SURatingAlertView : UIAlertView  {
    SURatingControl *_ratingControl;
}

@property float rating;


- (void)setRating:(float)arg1;
- (float)rating;
- (void)_ratingControlChanged:(id)arg1;
- (void)dealloc;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
