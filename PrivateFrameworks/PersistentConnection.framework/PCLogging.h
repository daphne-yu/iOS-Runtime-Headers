/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCLogging : NSObject  {
}

+ (void)enableLoggingForCustomHandler:(id)arg1;
+ (void)initialize;
+ (void)enableFileLogging:(BOOL)arg1;
+ (id)getMainBundleId;
+ (void)_appendString:(id)arg1 toFileNamed:(id)arg2;
+ (void)_configureLogFacilityIfNeeded:(id)arg1;
+ (id)_formatBlock;
+ (id)_facilityForIdentifier:(id)arg1;
+ (id)_fileNameForIdentifier:(id)arg1;
+ (void)logAtLevel:(int)arg1 delegate:(id)arg2 format:(id)arg3 arguments:(void*)arg4;
+ (void)logKeepAliveInterval:(double)arg1 forServiceIdentifier:(id)arg2;
+ (void)logAtLevel:(int)arg1 delegate:(id)arg2 format:(id)arg3;
+ (void)enableConsoleLoggingForLevel:(int)arg1;
+ (BOOL)loggingEnabledForLevel:(int)arg1;
+ (id)logFileDirectory;


@end
