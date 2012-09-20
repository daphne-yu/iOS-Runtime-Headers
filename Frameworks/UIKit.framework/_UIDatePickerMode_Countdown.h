/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDatePickerMode_Countdown : _UIDatePickerMode  {
    float _componentWidth;
}

+ (unsigned int)extractableCalendarUnits;
+ (int)datePickerMode;

- (BOOL)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned int)arg3;
- (id)titleForRow:(int)arg1 inComponent:(int)arg2;
- (int)titleAlignmentForCalendarUnit:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeForCalendarUnit:(unsigned int)arg1;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (int)numberOfRowsForCalendarUnit:(unsigned int)arg1;
- (id)localizedFormatString;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (void)resetComponentWidths;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(int)arg2;
- (BOOL)areValidDateComponents:(id)arg1 comparingUnits:(int)arg2;
- (int)hourForRow:(int)arg1;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (float)rowHeight;
- (id)font;

@end
