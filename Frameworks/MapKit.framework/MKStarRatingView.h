/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableArray, UIImage;

@interface MKStarRatingView : UIView  {
    float _rating;
    int _numLevels;
    float _padding;
    BOOL _highlighted;
    UIImage *_fullStarImage;
    UIImage *_halfStarImage;
    UIImage *_emptyStarImage;
    UIImage *_fullStarHighlightedImage;
    UIImage *_halfStarHighlightedImage;
    UIImage *_emptyStarHighlightedImage;
    NSMutableArray *_ratingViews;
    int _numReviews;
}

@property int numberOfRatingLevels;
@property float rating;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) UIImage * fullStarImage;
@property(retain) UIImage * halfStarImage;
@property(retain) UIImage * emptyStarImage;
@property(retain) UIImage * fullStarHighlightedImage;
@property(retain) UIImage * halfStarHighlightedImage;
@property(retain) UIImage * emptyStarHighlightedImage;


- (void)setRating:(float)arg1;
- (float)rating;
- (void)dealloc;
- (void)setPadding:(float)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEmptyStarHighlightedImage:(id)arg1;
- (id)emptyStarHighlightedImage;
- (void)setHalfStarHighlightedImage:(id)arg1;
- (id)halfStarHighlightedImage;
- (void)setFullStarHighlightedImage:(id)arg1;
- (id)fullStarHighlightedImage;
- (void)setEmptyStarImage:(id)arg1;
- (id)emptyStarImage;
- (void)setHalfStarImage:(id)arg1;
- (id)halfStarImage;
- (void)setFullStarImage:(id)arg1;
- (id)fullStarImage;
- (void)setNumberOfRatingLevels:(int)arg1;
- (int)numberOfRatingLevels;

@end
