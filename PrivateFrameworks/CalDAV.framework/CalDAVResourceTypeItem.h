/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem  {
    CoreDAVItemWithNoChildren *_calendar;
    CoreDAVItemWithNoChildren *_scheduleInbox;
    CoreDAVItemWithNoChildren *_scheduleOutbox;
    CoreDAVItemWithNoChildren *_notification;
    CoreDAVItemWithNoChildren *_subscribed;
    CoreDAVItemWithNoChildren *_sharedOwner;
}

@property(retain) CoreDAVItemWithNoChildren * calendar;
@property(retain) CoreDAVItemWithNoChildren * scheduleInbox;
@property(retain) CoreDAVItemWithNoChildren * scheduleOutbox;
@property(retain) CoreDAVItemWithNoChildren * notification;
@property(retain) CoreDAVItemWithNoChildren * subscribed;
@property(retain) CoreDAVItemWithNoChildren * sharedOwner;


- (id)description;
- (void)dealloc;
- (id)calendar;
- (void)setCalendar:(id)arg1;
- (void)setSharedOwner:(id)arg1;
- (void)setNotification:(id)arg1;
- (void)setScheduleOutbox:(id)arg1;
- (void)setScheduleInbox:(id)arg1;
- (id)sharedOwner;
- (id)subscribed;
- (id)scheduleOutbox;
- (id)scheduleInbox;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)write:(id)arg1;
- (id)notification;
- (void)setSubscribed:(id)arg1;

@end
