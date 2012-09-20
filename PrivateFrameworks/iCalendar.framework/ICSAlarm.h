/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDateTimeUTCValue, NSArray, NSString, ICSTrigger, ICSStructuredLocation;

@interface ICSAlarm : ICSComponent  {
}

@property int action;
@property(retain) ICSDateTimeUTCValue * acknowledged;
@property(retain) NSArray * attach;
@property(retain) NSArray * attendee;
@property(retain) NSString * description;
@property(retain) NSString * summary;
@property(retain) ICSTrigger * trigger;
@property(retain) NSString * uid;
@property(retain) NSString * relatedTo;
@property(retain) NSString * x_wr_alarmuid;
@property(retain) NSString * x_apple_proximity;
@property BOOL x_apple_default_alarm;
@property BOOL x_apple_local_default_alarm;
@property(retain) ICSStructuredLocation * x_apple_structured_location;

+ (id)name;
+ (id)createNoneAlarm;
+ (id)parseableDocumentFromICS:(id)arg1;
+ (int)actionFromICSString:(id)arg1;
+ (id)ICSStringFromAction:(int)arg1;

- (int)action;
- (void)setAction:(int)arg1;
- (BOOL)x_apple_local_default_alarm;
- (void)setX_apple_local_default_alarm:(BOOL)arg1;
- (void)setRelatedTo:(id)arg1;
- (id)relatedTo;
- (void)fixAlarm;
- (BOOL)x_apple_default_alarm;
- (id)acknowledged;
- (id)x_apple_proximity;
- (id)x_wr_alarmuid;
- (void)setAcknowledged:(id)arg1;
- (void)setX_apple_default_alarm:(BOOL)arg1;
- (void)setX_apple_proximity:(id)arg1;
- (void)setX_wr_alarmuid:(id)arg1;

@end
