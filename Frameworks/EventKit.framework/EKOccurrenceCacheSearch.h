/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSSet, EKEventStore, NSNumber;

@interface EKOccurrenceCacheSearch : NSObject  {
    NSSet *_calendars;
    NSString *_searchTerm;
    EKEventStore *_store;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _callback;

    NSNumber *_replyID;
    BOOL _canceled;
}

+ (id)searchWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(id)arg4;

- (void)cancel;
- (void)dealloc;
- (void)run;
- (id)initWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(id)arg4;
- (id)searchTerm;

@end
