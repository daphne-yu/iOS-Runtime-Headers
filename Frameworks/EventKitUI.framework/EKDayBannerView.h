/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKDayBannerNameView, CalendarArrowButton;

@interface EKDayBannerView : UIView  {
    CalendarArrowButton *_leftArrow;
    CalendarArrowButton *_rightArrow;
    EKDayBannerNameView *_nameView;
    id _delegate;
}

@property id delegate;
@property BOOL showsArrows;

+ (float)defaultHeight;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setDay:(id)arg1;
- (BOOL)isTracking;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)showsArrows;
- (void)swipeGesture:(id)arg1;
- (void)_timeOrLocaleChanged:(id)arg1;
- (void)setShowsArrows:(BOOL)arg1;
- (void)calendarArrowButtonActivated:(id)arg1 forRepeat:(BOOL)arg2;

@end
