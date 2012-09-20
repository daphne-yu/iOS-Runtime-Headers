/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKSource, NSString, NSArray, NSSet, NSMutableArray;

@interface EKGroupInfo : NSObject  {
    EKSource *_source;
    NSMutableArray *_calendars;
    BOOL _selected;
    BOOL _showSelectAllButton;
    int _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
}

@property(retain) EKSource * source;
@property BOOL selected;
@property BOOL showSelectAllButton;
@property(readonly) NSString * title;
@property(readonly) NSString * typeTitle;
@property(readonly) NSArray * calendarInfos;
@property(readonly) NSSet * calendarSet;
@property(readonly) NSSet * selectedCalendarSet;
@property(readonly) int numCalendars;
@property(readonly) int numSelectedCalendars;
@property(readonly) BOOL showAddCalendarButton;
@property(readonly) BOOL showCalendarNameIfSolitary;
@property(readonly) int sortOrder;
@property(readonly) BOOL isSubscribed;


- (id)description;
- (void)dealloc;
- (id)init;
- (void)setSource:(id)arg1;
- (id)source;
- (BOOL)selected;
- (void)selectAll;
- (void)setSelected:(BOOL)arg1;
- (id)title;
- (void)removeCalendar:(id)arg1;
- (id)copyCalendars;
- (id)calendarAtIndex:(int)arg1;
- (id)typeTitle;
- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;
- (void)setShowSelectAllButton:(BOOL)arg1;
- (id)selectedCalendarSet;
- (BOOL)showCalendarNameIfSolitary;
- (void)selectNone;
- (id)titleForBeginningOfSentence:(BOOL)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (int)numCalendars;
- (int)numSelectedCalendars;
- (id)calendarSet;
- (id)initWithCustomGroupType:(int)arg1;
- (id)initWithSource:(id)arg1;
- (BOOL)showAddCalendarButton;
- (BOOL)showSelectAllButton;
- (id)calendarInfos;
- (int)sortOrder;
- (BOOL)isSubscribed;

@end
