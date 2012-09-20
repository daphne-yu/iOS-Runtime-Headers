/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

@class FTPushHandler, NSDate, NSMutableArray, IMTimer;

@interface IMDAppleSMSRegistrationCenter : NSObject <IMUserNotificationListener, IMSystemMonitorListener> {
    FTPushHandler *_pushHandler;
    int _status;
    struct __CTServerConnection { } *_ctServer;
    NSMutableArray *_handlers;
    NSMutableArray *_registrations;
    unsigned int _numberOfSMSSent;
    unsigned int _SMSRetries;
    unsigned int _isSMSWarningUp : 1;
    unsigned int _hasAcceptedSMSRequest : 1;
    unsigned int _commCenterDead : 1;
    int _carrierShortcodeSupported;
    unsigned int _smsIsAvailable : 1;
    unsigned int _needsToCheckPhoneNumberState : 1;
    NSDate *_nextSendSMSDate;
    IMTimer *_lastSendSMSTimer;
}

@property(readonly) int status;
@property(readonly) BOOL carrierSupportsShortCode;

+ (id)sharedInstance;

- (void)handleIncomingSMSForPhoneNumber:(id)arg1 signature:(id)arg2;
- (void)handleRegistrationSMSSuccessfullyDelivered:(id)arg1;
- (void)handlePhoneNumberChangedNotification:(id)arg1;
- (void)handlePhoneNumberRegistrationStateChangedNotification:(id)arg1;
- (void)carrierSettingsChanged:(id)arg1;
- (void)_handleSMSAddressAvailable;
- (void)userNotificationDidFinish:(id)arg1;
- (void)_tryToSendSMSIdentification;
- (void)handleRegistrationSMSDeliveryFailed:(id)arg1;
- (void)_notifySuccess;
- (void)_checkRegistrationStatus;
- (void)_notifyNeedsNewIdentification;
- (void)_sendSMSVerification;
- (BOOL)carrierSupportsShortCode;
- (void)_setSMSDeliveryTimeout:(double)arg1;
- (void)timedOutWaitingForSMS;
- (void)_notifyFailureWithError:(int)arg1 registration:(id)arg2;
- (BOOL)_canDeliverSMSNow;
- (void)_smsDeliveryClear;
- (void)_lockdownStateChanged:(id)arg1;
- (BOOL)_deviceCanRegisterPresently;
- (BOOL)_failIfRegistrationIsNotSupported;
- (void)_commCenterAlive;
- (void)_registerForCoreTelephonyNotifications;
- (void)_registerForCommCenterReadyNotifications;
- (void)_airplaneModeChangedNotification:(id)arg1;
- (void)_deviceIDChangedNotification:(id)arg1;
- (struct __CTServerConnection { }*)ctServer;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_unregisterForCoreTelephonyNotifications;
- (void)_unregisterForCarrierNotifications;
- (void)_clearSMSDeliveryTimeout;
- (void)_daemonShuttingDown:(id)arg1;
- (void)_startupCoreTelephony;
- (void)_registerForCarrierNotifications;
- (void)_registerForLockdownNotifications;
- (void)_registerForDeviceCenterNotifications;
- (void)_scheduleHeartbeat:(double)arg1;
- (void)resetSMSCounter;
- (void)_registrationStateChangedNotification:(id)arg1;
- (void)sendRegistration:(id)arg1;
- (void)cancelActionsForRegistrationInfo:(id)arg1;
- (void)dealloc;
- (id)init;
- (int)status;
- (void)systemRestoreStateDidChange;
- (void)systemDidFinishMigration;
- (void)systemDidStopBackup;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)heartbeat;

@end
