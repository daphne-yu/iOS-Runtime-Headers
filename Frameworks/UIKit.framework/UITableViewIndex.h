/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIColor, NSString, UIFont;

@interface UITableViewIndex : UIControl  {
    NSArray *_titles;
    UIFont *_font;
    int _selectedSection;
    BOOL _pastTop;
    BOOL _pastBottom;
    struct CGSize { 
        float width; 
        float height; 
    } _cachedSize;
    struct CGSize { 
        float width; 
        float height; 
    } _cachedSizeToFit;
    UIColor *_indexColor;
    UIColor *_indexBackgroundColor;
}

@property(retain) NSArray * titles;
@property(retain) UIFont * font;
@property(retain) UIColor * indexColor;
@property(retain) UIColor * indexBackgroundColor;
@property(readonly) int selectedSection;
@property(readonly) NSString * selectedSectionTitle;
@property(readonly) BOOL pastTop;
@property(readonly) BOOL pastBottom;


- (void)dealloc;
- (id)_createTouchesWithMouseEvent:(struct __GSEvent { }*)arg1 phase:(int)arg2;
- (id)indexBackgroundColor;
- (id)indexColor;
- (id)titles;
- (void)_selectSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (id)_displayTitles;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (unsigned int)maximumNumberOfTitlesWithoutTruncationForHeight:(float)arg1;
- (id)selectedSectionTitle;
- (BOOL)pastBottom;
- (BOOL)pastTop;
- (int)selectedSection;
- (void)setIndexBackgroundColor:(id)arg1;
- (void)setIndexColor:(id)arg1;
- (void)setTitles:(id)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
