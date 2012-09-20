/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUUtility : NSObject  {
}

+ (id)serialNumber;
+ (id)gregorianCalendar;
+ (id)prettyPrintDate:(id)arg1;
+ (id)addToDate:(id)arg1 numberOfDays:(int)arg2;
+ (id)URLIfFileExists:(id)arg1;
+ (BOOL)hasEnoughDiskSpace:(unsigned long long)arg1;
+ (void)assignError:(id*)arg1 withCode:(int)arg2;
+ (BOOL)cellularDataIsEnabled;
+ (BOOL)hasCellularRadio;
+ (BOOL)isCellularDataCapable;
+ (BOOL)isWiFiCapable;
+ (void)setIsDaemon:(BOOL)arg1;
+ (BOOL)isRestoringFromCloud;
+ (id)taskQueue;
+ (int)translateErrorCodeFromError:(id)arg1;
+ (id)translateError:(id)arg1 withAddedUserInfo:(id)arg2;
+ (id)translateError:(id)arg1;
+ (void)assignError:(id*)arg1 withError:(id)arg2 translate:(BOOL)arg3;
+ (id)errorWithCode:(int)arg1 originalError:(id)arg2;
+ (BOOL)isDaemon;
+ (id)currentProductCategory;
+ (id)currentReleaseType;
+ (id)currentProductVersion;
+ (id)currentProductBuild;
+ (id)currentProductType;
+ (id)errorWithCode:(int)arg1;


@end
