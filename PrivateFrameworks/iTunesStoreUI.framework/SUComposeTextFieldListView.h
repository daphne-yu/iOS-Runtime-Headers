/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, UIResponder;

@interface SUComposeTextFieldListView : UIView  {
    id _delegate;
    NSMutableArray *_fields;
    BOOL _isValid;
    int _style;
}

@property(readonly) int composeReviewStyle;
@property(readonly) float height;
@property(readonly) UIResponder * initialFirstResponder;


- (id)textForFieldAtIndex:(unsigned int)arg1;
- (void)_updateValidity;
- (void)composeTextFieldValidityChanged:(id)arg1;
- (id)initialFirstResponder;
- (int)composeReviewStyle;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (float)height;
- (BOOL)isValid;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)reloadData;

@end
