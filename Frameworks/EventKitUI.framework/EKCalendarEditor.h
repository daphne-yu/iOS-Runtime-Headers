/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCalendarShareesEditItem, UITableView, EKSource, <EKStyleProvider>, EKEventStore, EKCalendar, <EKCalendarEditorDelegate>, NSArray;

@interface EKCalendarEditor : UIViewController <EKCalendarEditItemDelegate> {
    UITableView *_tableView;
    NSArray *_editItems;
    EKCalendarShareesEditItem *_shareesEditItem;
    EKCalendar *_calendar;
    EKSource *_source;
    EKEventStore *_eventStore;
    unsigned int _entityType;
    <EKCalendarEditorDelegate> *_delegate;
    <EKStyleProvider> *_styleProvider;
    BOOL _isNewCalendar;
}

@property(retain) EKEventStore * eventStore;
@property(retain) EKCalendar * calendar;
@property <EKCalendarEditorDelegate> * delegate;
@property BOOL isNewCalendar;
@property(retain) <EKStyleProvider> * styleProvider;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)done:(id)arg1;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (id)tableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)owningNavigationController;
- (int)sectionForCalendarEditItem:(id)arg1;
- (void)calendarItemStartedEditing:(id)arg1;
- (void)_deleteCalendar;
- (void)setupForCalendar;
- (BOOL)_shouldShowDeleteButton;
- (BOOL)isNewCalendar;
- (void)setIsNewCalendar:(BOOL)arg1;
- (id)initWithSource:(id)arg1 eventStore:(id)arg2 entityType:(unsigned int)arg3;
- (id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned int)arg3;
- (void)_eventStoreChanged:(id)arg1;
- (id)_editItems;
- (void)_presentValidationAlert:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)_localeChanged;
- (id)styleProvider;
- (void)setStyleProvider:(id)arg1;
- (void)cancel:(id)arg1;
- (id)eventStore;

@end
