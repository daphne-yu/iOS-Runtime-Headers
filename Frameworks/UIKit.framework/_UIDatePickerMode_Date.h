/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface _UIDatePickerMode_Date : _UIDatePickerMode  {
    float _dateYearWidth;
    float _dateMonthWidth;
    float _dateDayWidth;
    NSString *_yearFormat;
    NSString *_monthFormat;
    NSString *_dayFormat;
    BOOL _isUsingJapaneseCalendar;
}

+ (unsigned int)extractableCalendarUnits;
+ (int)datePickerMode;

- (void)dealloc;
- (BOOL)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned int)arg3;
- (int)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(int)arg3 currentRow:(int)arg4;
- (id)_dateForYearRow:(int)arg1;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (int)numberOfRowsForCalendarUnit:(unsigned int)arg1;
- (id)localizedFormatString;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (id)dateFormatForCalendarUnit:(unsigned int)arg1;
- (void)_shouldReset:(id)arg1;
- (void)resetComponentWidths;
- (int)displayedCalendarUnits;
- (void)noteCalendarChanged;

@end
