/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDate, NSArray;

@interface ICSTimeZoneBlock : ICSComponent  {
}

@property(retain) ICSDate * dtstart;
@property(retain) NSArray * rdate;
@property(retain) NSArray * rrule;
@property NSArray * tzname;
@property int tzoffsetfrom;
@property int tzoffsetto;


- (int)compare:(id)arg1;
- (id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;
- (void)addRecurrenceDate:(id)arg1;
- (void)setTzoffsetto:(int)arg1;
- (void)setTzoffsetfrom:(int)arg1;
- (void)setTzname:(id)arg1;
- (id)tzname;
- (int)tzoffsetto;
- (int)tzoffsetfrom;
- (id)rdate;
- (void)setRdate:(id)arg1;
- (id)rrule;
- (void)setRrule:(id)arg1;
- (BOOL)validate:(id*)arg1;
- (void)setDtstart:(id)arg1;
- (id)dtstart;

@end
