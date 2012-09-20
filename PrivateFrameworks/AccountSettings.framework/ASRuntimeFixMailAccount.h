/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@class NSSet;

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol> {
    BOOL _shouldNotifyMobileMail;
    NSSet *_supportedMailClasses;
}


- (void)dealloc;
- (id)init;
- (BOOL)_cleanupAccountClass:(id)arg1;
- (id)supportedAccountTypes;
- (void)accountsHaveBeenSaved:(BOOL)arg1;
- (int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2;

@end
