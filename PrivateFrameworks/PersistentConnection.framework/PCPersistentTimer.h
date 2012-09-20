/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSDate, NSString, NSTimer;

@interface PCPersistentTimer : NSObject <PCLoggingDelegate> {
    double _fireTime;
    double _startTime;
    double _lastUpdateTime;
    double _minimumEarlyFireProportion;
    BOOL _triggerOnGMTChange;
    BOOL _disableSystemWaking;
    NSDate *_scheduledWakeDate;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    NSTimer *_preventSleepRunLoopTimer;
    NSTimer *_fireRunLoopTimer;
    unsigned int _pmRootDomainConnect;
    unsigned int _pmNotifier;
    struct IONotificationPort { } *_pmNotificationPort;
    struct __CFRunLoopSource { } *_pmRunLoopSource;
    BOOL _sleepIsImminent;
    unsigned int _powerAssertionID;
    id _timeChangeSource;
    BOOL _disallowInterfaceManagerUsage;
}

@property double minimumEarlyFireProportion;
@property BOOL disableSystemWaking;
@property(readonly) NSString * loggingIdentifier;

+ (double)currentMachTimeInterval;
+ (id)lastSystemWakeDate;

- (void)invalidate;
- (id)debugDescription;
- (id)userInfo;
- (void)dealloc;
- (void)_significantTimeChange;
- (BOOL)isValid;
- (BOOL)disableSystemWaking;
- (double)minimumEarlyFireProportion;
- (void)_powerChangedMessageType:(unsigned int)arg1 notificationID:(void*)arg2;
- (id)_earlyFireDate;
- (double)_nextForcedAlignmentAbsoluteTime;
- (void)_setSignificantTimeChangeMonitoringEnabledForRunLoop:(id)arg1 mode:(id)arg2;
- (void)_setPowerMonitoringEnabledForRunLoop:(id)arg1 mode:(id)arg2;
- (void)_fireTimerFired;
- (void)_preventSleepFired;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (void)_updateTimers;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (id)_initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 triggerOnGMTChange:(BOOL)arg6;
- (id)loggingIdentifier;
- (void)setDisableSystemWaking:(BOOL)arg1;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 disallowInterfaceManagerUsage:(BOOL)arg6;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)arg1;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1;
- (void)setMinimumEarlyFireProportion:(double)arg1;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;

@end
