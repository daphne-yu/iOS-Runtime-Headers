/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKReminderEditor, <EKStyleProvider>, <EKReminderViewControllerDelegate>, EKEventStore, EKReminder;

@interface EKReminderViewController : UIViewController <EKCalendarItemEditorDelegate, EKReminderEditorDelegate> {
    <EKReminderViewControllerDelegate> *_delegate;
    float _minimumTableHeight;
    BOOL _shouldShowDatePicker;
    EKReminderEditor *_editor;
}

@property(retain) EKReminder * reminder;
@property(retain) EKEventStore * eventStore;
@property(retain) <EKStyleProvider> * styleProvider;
@property <EKReminderViewControllerDelegate> * delegate;
@property(retain) EKReminderEditor * editor;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (id)navigationItem;
- (void)saveReminderAnimated:(BOOL)arg1;
- (void)didEndDatePickingWithTarget:(id)arg1 animated:(BOOL)arg2;
- (void)willBeginDatePickingWithDate:(id)arg1 target:(id)arg2 action:(SEL)arg3 animated:(BOOL)arg4 minimumTableHeight:(float)arg5;
- (void)editItemChanged;
- (void)viewSizeChangedAnimated:(BOOL)arg1;
- (id)reminder;
- (void)setReminder:(id)arg1;
- (void)_eventStoreChanged:(id)arg1;
- (void)setEditor:(id)arg1;
- (id)editor;
- (void)editor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)editor:(id)arg1 didChangeHeightAnimated:(BOOL)arg2;
- (void)setEventStore:(id)arg1;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
- (id)viewForActionSheet;
- (id)styleProvider;
- (void)setStyleProvider:(id)arg1;
- (id)eventStore;

@end
