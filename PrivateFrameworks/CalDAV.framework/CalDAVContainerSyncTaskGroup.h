/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSDateComponents, <CalDAVCalendar>;

@interface CalDAVContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup  {
    <CalDAVCalendar> *_calendar;
    BOOL _getScheduleTags;
    BOOL _getScheduleChanges;
    BOOL _syncEvents;
    BOOL _syncTodos;
    BOOL _supportsExtendedCalendarQuery;
    BOOL _fallbackOnMultiGetError;
    int _fetchingEtagState;
    NSDateComponents *_eventFilterStartDate;
    NSDateComponents *_eventFilterEndDate;
    NSDateComponents *_todoFilterStartDate;
    NSDateComponents *_todoFilterEndDate;
}

@property(retain) <CalDAVCalendar> * calendar;
@property BOOL getScheduleTags;
@property BOOL getScheduleChanges;
@property BOOL syncEvents;
@property BOOL syncTodos;
@property BOOL supportsExtendedCalendarQuery;
@property BOOL fallbackOnMultiGetError;
@property(retain) NSDateComponents * eventFilterStartDate;
@property(retain) NSDateComponents * eventFilterEndDate;
@property(retain) NSDateComponents * todoFilterStartDate;
@property(retain) NSDateComponents * todoFilterEndDate;


- (void)dealloc;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (id)todoFilterEndDate;
- (id)todoFilterStartDate;
- (id)eventFilterEndDate;
- (id)eventFilterStartDate;
- (BOOL)supportsExtendedCalendarQuery;
- (void)setFallbackOnMultiGetError:(BOOL)arg1;
- (BOOL)fallbackOnMultiGetError;
- (void)setSupportsExtendedCalendarQuery:(BOOL)arg1;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 getScheduleTags:(BOOL)arg4 getScheduleChanges:(BOOL)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 getScheduleTags:(BOOL)arg5 getScheduleChanges:(BOOL)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificCalendarItemClass:(Class)arg9;
- (id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;
- (void)setTodoFilterEndDate:(id)arg1;
- (void)setTodoFilterStartDate:(id)arg1;
- (void)setEventFilterEndDate:(id)arg1;
- (void)setEventFilterStartDate:(id)arg1;
- (BOOL)_shouldFetchTodosForState:(int)arg1;
- (BOOL)_shouldFetchEventsForState:(int)arg1;
- (BOOL)syncEvents;
- (BOOL)syncTodos;
- (BOOL)getScheduleChanges;
- (BOOL)getScheduleTags;
- (void)setGetScheduleChanges:(BOOL)arg1;
- (void)setGetScheduleTags:(BOOL)arg1;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7;
- (void)setSyncTodos:(BOOL)arg1;
- (void)setSyncEvents:(BOOL)arg1;
- (BOOL)shouldFetchMoreETags;
- (BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (void)applyAdditionalPropertiesFromPostTask:(id)arg1;
- (void)applyAdditionalPropertiesFromPutTask:(id)arg1;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)arg1;
- (id)copyAdditionalResourcePropertiesToFetch;
- (id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (id)dataContentType;

@end
