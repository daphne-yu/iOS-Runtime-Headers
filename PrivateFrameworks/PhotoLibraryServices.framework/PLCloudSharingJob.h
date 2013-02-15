/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, PLPhotoLibrary;

@interface PLCloudSharingJob : PLDaemonJob {
    NSString *_archiveFilename;
    PLPhotoLibrary *_photoLibrary;
}

@property(readonly) PLPhotoLibrary * transientPhotoLibrary;

+ (id)archiveDirectory;
+ (void)deleteAllRecoveryEvents;
+ (id)recoveredEventsIgnoringEvent:(id)arg1;

- (void)archiveXPCToDisk:(id)arg1;
- (void)dealloc;
- (id)initFromXPCObject:(id)arg1;
- (void)runAndWaitForMessageToBeSent;
- (void)runDaemonSide;
- (id)serialJobQueue;
- (BOOL)shouldArchiveXPCToDisk;
- (id)transientPhotoLibrary;

@end