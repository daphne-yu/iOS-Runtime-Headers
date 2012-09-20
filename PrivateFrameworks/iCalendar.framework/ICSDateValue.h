/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSDateValue : NSObject <NSCoding> {
    int _year;
    int _month;
    int _day;
}

@property(readonly) int year;
@property(readonly) int month;
@property(readonly) int day;

+ (id)dateFromICSString:(id)arg1;
+ (id)dateFromICSUTF8String:(const char *)arg1;

- (int)compare:(id)arg1;
- (id)description;
- (id)components;
- (int)day;
- (int)month;
- (int)year;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)icsString;
- (int)dateType;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;

@end
