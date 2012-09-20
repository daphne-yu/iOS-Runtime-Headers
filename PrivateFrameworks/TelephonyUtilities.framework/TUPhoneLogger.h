/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class TURemoteAppender, TUInMemoryAppender;

@interface TUPhoneLogger : NSObject <TULogger> {
    int _lock;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _signalHandler;

    TUInMemoryAppender *_inMemoryAppender;
    TURemoteAppender *_remoteAppender;
    int _loggingConfiguration;
    BOOL _loggingConfigurationCached;
    struct dispatch_queue_s { } *_appenderQueue;
}

+ (id)sharedPhoneLogger;

- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4;
- (id)identifier;
- (void)dealloc;
- (id)init;
- (BOOL)shouldLogWithLevel:(int)arg1 topic:(id)arg2;
- (BOOL)shouldLog;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 text:(id)arg4;
- (id)signalHandler;
- (void)_loggingChanged;
- (void)_handleSignal:(int)arg1;
- (int)_loggingConfiguration;
- (id)_appender;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4 args:(void*)arg5;
- (BOOL)_shouldLogWithLevel:(int)arg1 topic:(id)arg2;

@end
