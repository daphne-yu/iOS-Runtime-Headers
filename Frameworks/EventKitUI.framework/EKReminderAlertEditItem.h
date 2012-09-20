/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSDate, EKReminderDueDateEditItem, UIAlertView, UILabel, UIImageView, UIView, EKReminderRecurrenceEditItem, NSString, EKStructuredLocation, EKReminderLocationPickerModel, UITableViewCell;

@interface EKReminderAlertEditItem : EKReminderEditItem <EKReminderLocationPickerModelDelegate, EKReminderLocationPickerDelegate, UIAlertViewDelegate> {
    UITableViewCell *_dateCell;
    UITableViewCell *_locationCell;
    UITableViewCell *_onArrivalCell;
    UITableViewCell *_onExitCell;
    EKReminderLocationPickerModel *_locationPickerModel;
    UILabel *_explanatoryLabel;
    UIView *_explanatoryLabelContainer;
    BOOL _locationAlertsAvailable;
    UIAlertView *_wifiDisabledAlert;
    BOOL _ignoreLocationPickerModelSelectionChanges;
    BOOL _dontRefreshInnerEditItems;
    EKReminderDueDateEditItem *_dueDateItem;
    EKReminderRecurrenceEditItem *_recurrenceItem;
    BOOL _showsDueDate;
    BOOL _allowsRecurrence;
    struct CGSize { 
        float width; 
        float height; 
    } _lastSeenFooterSize;
    NSString *_footerString;
    UIView *_footerView;
    UIView *_chevronView;
    UIImageView *_spinnerView;
    NSDate *_date;
    EKStructuredLocation *_structuredLocation;
    BOOL _showsLocation;
    BOOL _isAtALocation;
    BOOL _isOnADay;
    int _alarmProximity;
}

@property(retain) NSDate * date;
@property(copy) EKStructuredLocation * structuredLocation;
@property BOOL showsLocation;
@property BOOL isAtALocation;
@property BOOL isOnADay;
@property int alarmProximity;


- (void)setDelegate:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;
- (id)footerView;
- (void)setDate:(id)arg1;
- (id)date;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)applicationDidResume;
- (BOOL)showsLocation;
- (void)_wifiStatusDidChange:(id)arg1;
- (void)locationPickerRequiresHeightChange:(id)arg1;
- (void)locationPickerModel:(id)arg1 didEncounterError:(id)arg2;
- (void)locationPickerModelDidChangeSelection:(id)arg1;
- (void)locationPickerModel:(id)arg1 didUpdateMeCardItem:(int)arg2;
- (void)locationPickerModelDidUpdateCustomLocation:(id)arg1;
- (void)locationPickerModelDidUpdateCurrentLocation:(id)arg1;
- (void)_selectedItemChangedInModel:(id)arg1;
- (id)_cellForProximity:(int)arg1;
- (void)_setStructuredLocation:(id)arg1 updateModel:(BOOL)arg2;
- (void)_showWifiAlertIfNecessary;
- (void)_removeExistingWifiAlert;
- (void)_setDate:(id)arg1 updateTable:(BOOL)arg2 updateReminder:(BOOL)arg3;
- (void)_updateDateText;
- (void)_setIsAtALocation:(BOOL)arg1 updateTable:(BOOL)arg2 updateReminder:(BOOL)arg3;
- (void)_setIsOnADay:(BOOL)arg1 updateTable:(BOOL)arg2 animateDatePicker:(BOOL)arg3 updateReminder:(BOOL)arg4;
- (void)_updateShowsDueDate;
- (id)_indexPathsForDueDate;
- (void)_datePickerDateChanged:(id)arg1;
- (int)alarmProximity;
- (BOOL)isAtALocation;
- (BOOL)isOnADay;
- (void)_cleanupAndCommitFromSubitem:(int)arg1 inSubsection:(int)arg2 wasAllDay:(BOOL)arg3;
- (id)_getProximityCellAtIndex:(int)arg1;
- (int)_recurrenceOffset;
- (int)_dueDateOffset;
- (id)_setupLocationPickerCell;
- (id)_makeSwitchCell:(BOOL)arg1;
- (void)_updateDateTextOnCell:(id)arg1;
- (void)_updateLocationTextAndAccessoryView;
- (void)_isAtALocationChanged:(id)arg1;
- (void)_isOnADayChanged:(id)arg1;
- (void)_deselectDatePickerRowIfSelected;
- (void)_dismissDatePickerAnimated:(BOOL)arg1;
- (void)_updateReminderFromInlineSubitem:(int)arg1 inSubsection:(int)arg2;
- (void)_setAlarmProximity:(int)arg1 updateTable:(BOOL)arg2;
- (id)_locationPickerModel;
- (void)_presentDatePickerAnimated:(BOOL)arg1;
- (BOOL)_isDatePickerSubitem:(int)arg1 inSubsection:(int)arg2;
- (BOOL)_isDueDateSubitem:(int)arg1 inSubsection:(int)arg2;
- (BOOL)_isRecurrenceSubitem:(int)arg1 inSubsection:(int)arg2;
- (BOOL)_shouldShowRecurrence;
- (BOOL)isShowingLocation;
- (id)_footerLabel;
- (id)_footerString;
- (void)_updateFooterString;
- (void)_updateFooterStringAndUpdateHeight:(BOOL)arg1;
- (void)setShowsLocation:(BOOL)arg1;
- (void)setIsAtALocation:(BOOL)arg1;
- (void)setAlarmProximity:(int)arg1;
- (void)setIsOnADay:(BOOL)arg1;
- (id)_reasonableAlarmDateForDueDate:(id)arg1;
- (id)_alarmDateFromReminder:(id)arg1 withAlarm:(id)arg2;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(int)arg2 inSubsection:(int)arg3;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (BOOL)usesDetailViewControllerForSubitem:(int)arg1 inSubsection:(int)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(int)arg2 inSubsection:(int)arg3;
- (void)refreshFromCalendarItemAndStore;
- (void)editorDidScroll:(id)arg1;
- (float)footerHeightForWidth:(float)arg1;
- (void)editor:(id)arg1 didDeselectSubitem:(int)arg2 inSubsection:(int)arg3;
- (void)editor:(id)arg1 didSelectSubitem:(int)arg2 inSubsection:(int)arg3;
- (BOOL)editor:(id)arg1 shouldClearSelectionFromSubitem:(int)arg2 inSubsection:(int)arg3;
- (BOOL)editor:(id)arg1 canSelectSubitem:(int)arg2 inSubsection:(int)arg3;
- (id)cellForSubitemAtIndex:(int)arg1 inSubsection:(int)arg2;
- (int)numberOfSubitemsInSubsection:(int)arg1;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (int)numberOfSubsections;
- (void)_localeChanged;
- (void)setStyleProvider:(id)arg1;
- (void)_setCell:(id)arg1 checked:(BOOL)arg2;
- (void)setStructuredLocation:(id)arg1;
- (id)structuredLocation;

@end
