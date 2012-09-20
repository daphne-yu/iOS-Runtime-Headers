/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDate, NSCalendar, NSTimeZone, NSLocale, UILabel, NSDateComponents, UIDatePicker, _UIDatePickerMode;

@interface _UIDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource> {
    _UIDatePickerMode *_mode;
    NSTimeZone *_timeZone;
    double _countDownDuration;
    UILabel *_hourLabel;
    UILabel *_minuteLabel;
    UIDatePicker *_datePickerDelegate;
    id _delegateOfDatePicker;
    int _expectedAMPM;
    struct { 
        unsigned int staggerTimeIntervals : 1; 
        unsigned int loadingDateOrTime : 1; 
        unsigned int highlightsToday : 1; 
        unsigned int usesBlackChrome : 1; 
    } _datePickerFlags;
    int _loadingDate;
    NSDate *_userSuppliedDate;
    NSDate *_userSuppliedMinimumDate;
    NSDate *_userSuppliedMaximumDate;
    NSLocale *_compositeLocale;
    NSLocale *_userProvidedLocale;
    NSCalendar *_userProvidedCalendar;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    NSDateComponents *_lastSelectedDateComponents;
    BOOL _allowsZeroCountdownDuration;
}

@property int datePickerMode;
@property(retain) NSLocale * userProvidedLocale;
@property(retain) NSTimeZone * timeZone;
@property(copy) NSCalendar * userProvidedCalendar;
@property(copy) NSDate * date;
@property(copy) NSDate * minimumDate;
@property(copy) NSDate * maximumDate;
@property double countDownDuration;
@property int minuteInterval;
@property id delegateOfDatePicker;
@property(getter=_usesBlackChrome,setter=_setUsesBlackChrome:) BOOL usesBlackChrome;
@property(getter=_allowsZeroCountdownDuration,setter=_setAllowsZeroCountdownDuration:) BOOL allowsZeroCountdownDuration;
@property BOOL staggerTimeIntervals;
@property(copy) NSDateComponents * dateComponents;
@property BOOL highlightsToday;
@property(getter=_hasCustomCalendar,readonly) BOOL hasCustomCalendar;


- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegateOfDatePicker;
- (int)_selectionBarRowInComponent:(int)arg1;
- (BOOL)highlightsToday;
- (id)_lastSelectedDateComponents;
- (BOOL)staggerTimeIntervals;
- (BOOL)_showingDate;
- (id)_viewForSelectedRowInComponent:(int)arg1;
- (void)_updateLabels:(BOOL)arg1;
- (void)_setLabel:(id)arg1 forCalendarUnit:(unsigned int)arg2;
- (void)_positionLabel:(id)arg1 forCalendarUnit:(unsigned int)arg2 relativeTo:(id)arg3 order:(int)arg4;
- (id)_makeNewAccessoryLabel;
- (id)_labelForCalendarUnit:(unsigned int)arg1 createIfNecessary:(BOOL)arg2;
- (id)_hrMinFont;
- (id)_minutesStringForHour:(int)arg1 minutes:(int)arg2;
- (int)_selectedMinuteForColumn:(int)arg1;
- (void)_fadeLabelForCalendarUnit:(unsigned int)arg1 toText:(id)arg2 animated:(BOOL)arg3;
- (id)_hoursStringForHour:(int)arg1;
- (int)_selectedHourForColumn:(int)arg1;
- (id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)arg1 withLastManipulatedComponent:(int)arg2;
- (int)_amPmValue;
- (void)_setMode:(id)arg1;
- (void)_updateEnabledCellsIncludingWMDCells:(BOOL)arg1;
- (void)_loadDate:(id)arg1 animated:(BOOL)arg2;
- (void)_doneLoadingDateOrTime;
- (void)_setDate:(id)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (BOOL)_isCurrentCalendar:(id)arg1;
- (BOOL)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(int)arg1;
- (void)_todayChanged:(id)arg1;
- (void)_datePickerReset:(id)arg1;
- (void)_rebuildCompositeLocale;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(int)arg2 to:(int)arg3;
- (id)_selectedTextForCalendarUnit:(unsigned int)arg1;
- (void)_setAllowsZeroCountdownDuration:(BOOL)arg1;
- (BOOL)_allowsZeroCountdownDuration;
- (BOOL)_usesBlackChrome;
- (void)_setUsesBlackChrome:(BOOL)arg1;
- (BOOL)_updateDateOrTime;
- (void)_setHidesLabels:(BOOL)arg1;
- (float)contentWidth;
- (int)second;
- (int)minute;
- (int)hour;
- (void)setHighlightsToday:(BOOL)arg1;
- (void)setStaggerTimeIntervals:(BOOL)arg1;
- (void)setDateComponents:(id)arg1;
- (id)dateComponents;
- (void)setDelegateOfDatePicker:(id)arg1;
- (id)locale;
- (void)setUserProvidedCalendar:(id)arg1;
- (id)userProvidedCalendar;
- (void)setUserProvidedLocale:(id)arg1;
- (id)userProvidedLocale;
- (int)minuteInterval;
- (id)maximumDate;
- (id)minimumDate;
- (double)countDownDuration;
- (id)calendar;
- (BOOL)_hasCustomCalendar;
- (BOOL)_hasCustomLocale;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setCountDownDuration:(double)arg1;
- (int)datePickerMode;
- (void)setMinuteInterval:(int)arg1;
- (void)setDatePickerMode:(int)arg1;
- (id)timeZone;
- (void)setDate:(id)arg1;
- (id)shadowColor;
- (id)date;
- (void)setTimeZone:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_selectRow:(int)arg1 inComponent:(int)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_resetSelectionOfTables;
- (void)layoutSubviews;
- (float)_tableRowHeight;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerImageNamePrefix;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
