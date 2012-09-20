/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSTimeZone : NSTimeZone  {
    struct __CFString { } *_name;
    struct __CFData { } *_data;
    void **_ucal;
    int _lock;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(struct __CFString { }*)arg1 cache:(BOOL)arg2;
+ (id)__new:(struct __CFString { }*)arg1 data:(struct __CFData { }*)arg2;

- (id)name;
- (id)data;
- (void)dealloc;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (void)finalize;
- (int)secondsFromGMTForDate:(id)arg1;
- (id)localizedName:(int)arg1 locale:(id)arg2;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;

@end
