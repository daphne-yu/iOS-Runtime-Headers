/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSPerformanceLogger : MSASModelBase  {
}

+ (void)nukeCompletionBlock:(id)arg1;
+ (id)sharedLogger;

- (id)init;
- (void)dbQueueDiscardOperation:(id)arg1 itemGUID:(id)arg2;
- (void)_logSqliteErrorLine:(int)arg1;
- (void)summarizeOperation:(id)arg1 itemGUID:(id)arg2 formatBlock:(id)arg3;
- (void)startOperation:(id)arg1 itemGUID:(id)arg2;
- (void)discardOperation:(id)arg1 itemGUID:(id)arg2;
- (void)stopOperation:(id)arg1 itemGUID:(id)arg2;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;

@end
