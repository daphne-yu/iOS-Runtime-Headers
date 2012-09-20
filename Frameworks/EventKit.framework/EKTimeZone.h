/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKTimeZone : NSObject <NSCopying> {
    NSString *_name;
    void *_internal;
    long _lastStart;
    long _lastEnd;
    unsigned int _lastIndex;
    double _offset;
}

+ (id)timeZoneWithName:(id)arg1;
+ (id)timeZoneWithNSTimeZone:(id)arg1;

- (id)name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)secondsFromGMTForDate:(id)arg1;
- (double)secondsFromGMT;
- (id)abbreviation;
- (id)initWithName:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (id)_abbreviationForIndex:(unsigned int)arg1;
- (unsigned int)_indexForAbsoluteTime:(double)arg1;
- (id)abbreviationForAbsoluteTime:(double)arg1;
- (id)initWithOffset:(double)arg1 name:(id)arg2;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1;
- (double)secondsFromGMTForAbsoluteTime:(double)arg1;
- (id)NSTimeZone;

@end
