/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayPainter : NSObject  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _displayedDay;
    BOOL _isToday;
    BOOL _isInMonth;
    BOOL _isInspected;
    int _busyLevel;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property(readonly) struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; } displayedDay;
@property BOOL isInspected;
@property BOOL isToday;
@property(readonly) BOOL isInMonth;
@property int busyLevel;


- (id)todayTextColor;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBusyLevel:(int)arg1;
- (BOOL)isInMonth;
- (void)setIsToday:(BOOL)arg1;
- (BOOL)isToday;
- (void)setIsInspected:(BOOL)arg1;
- (BOOL)isInspected;
- (id)initWithDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 inMonth:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2;
- (id)inMonthTextColor;
- (id)busyLevelTextColor:(int)arg1;
- (id)outOfMonthTextColor;
- (int)outOfMonthTextStyle;
- (int)inMonthTextStyle;
- (id)dayNumberFont;
- (id)engravedTextColor;
- (int)todayTextStyle;
- (void)getDayWidth:(float*)arg1 height:(float*)arg2 x:(float*)arg3 y:(float*)arg4;
- (float)digitHeight;
- (float)twoDigitWidth;
- (float)oneDigitWidth;
- (void)drawInspectedHighlight;
- (struct CGGradient { }*)gradientForBusyLevel:(int)arg1;
- (float)heatmapFillInset;
- (int)busyLevel;
- (id)todayBackgroundImage;
- (struct CGPoint { float x1; float x2; })todayBackgroundInset;
- (id)outOfMonthBackgroundColor;
- (void)drawNumberIntoContext:(struct CGContext { }*)arg1 atZero:(BOOL)arg2;
- (void)drawBackground:(struct CGContext { }*)arg1;
- (id)inspectedBorderColor;
- (id)inspectedBackgroundImage;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })displayedDay;

@end
