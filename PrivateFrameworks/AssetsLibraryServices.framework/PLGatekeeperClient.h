/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface PLGatekeeperClient : NSObject  {
    NSObject<OS_xpc_object> *connection;
}

@property(readonly) NSObject<OS_dispatch_queue> * replyQueue;
@property NSObject<OS_xpc_object> * connection;

+ (id)sharedInstance;

- (void)clearAllBulletinsWithLastClearedRecordID:(unsigned int)arg1;
- (id)getThumbnailImageDataForBulletinWithRecordID:(unsigned int)arg1;
- (int)getCurrentApplicationBadgeCount;
- (id)getCurrentBulletins;
- (void)clearChangeStore;
- (void)notifyAboutTerminationDueToUncaughtException:(id)arg1;
- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2;
- (void)cleanupAfteriTunesSync;
- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)arg1;
- (void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 handler:(id)arg3;
- (void)addGroupWithName:(id)arg1 handler:(id)arg2;
- (int)fileDescriptorForAssetURL:(id)arg1;
- (id)sendQueue;
- (id)replyQueue;
- (void)getLibrarySizes:(id)arg1;
- (void)dataMigrationWillFinish;
- (void)cleanupModelAfteriTunesRestore;
- (void)getPhotosAndVideosCountWithHandler:(id)arg1;
- (id)fileURLForAssetURL:(id)arg1 withAdjustments:(BOOL)arg2;
- (id)init;
- (id)connection;
- (void)setConnection:(id)arg1;
- (void)waitUntilConnectionSendsAllMessages;
- (int)keyForEmailAddress:(id)arg1;
- (id)emailAddressForKey:(int)arg1;
- (unsigned long long)attemptToPurgeSharedAssetsSpace:(unsigned long long)arg1;
- (unsigned long long)purgeableSharedAssetsSpace;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)sendDaemonJob:(id)arg1 replyHandler:(id)arg2;
- (void)writeDataInBackground:(id)arg1 toFileURL:(id)arg2;
- (unsigned int)secondsNeededToCleanupModelAfteriTunesRestore;
- (void)recalculateCachedAlbumCounts;
- (void)updateCameraPreviewWellImage:(id)arg1;
- (void)automaticallyDeleteEmptyAlbum:(id)arg1;
- (void)updateStackedImageCacheForAlbum:(id)arg1;
- (void)createPhotostreamAlbumWithStreamID:(id)arg1;
- (void)updateThumbnailsForPhoto:(id)arg1 generatePreviewImage:(BOOL)arg2 waitForReply:(BOOL)arg3 assignNewIndex:(BOOL)arg4;
- (void)saveAssetWithJobDictionary:(id)arg1 handler:(id)arg2 imageSurface:(struct __IOSurface { }*)arg3 previewImageSurface:(struct __IOSurface { }*)arg4;
- (void)requestImageFromAssetURL:(id)arg1 format:(int)arg2 handler:(id)arg3;
- (id)imageDataFromAssetURL:(id)arg1 format:(int)arg2;
- (id)fileURLForNewAssetWithType:(unsigned int)arg1 extension:(id)arg2;
- (void)requestAccessWithHandler:(id)arg1;
- (void)cleanupForStoreDemoMode;
- (void)recoverFromCrashIfNeeded;
- (void)createPhotoLibraryDatabase;
- (void)repairSingletonObjects;
- (void)updateModelAfterOTARestore;
- (void)enablePhotostreamsWithStreamID:(id)arg1;
- (void)importFileSystemAssetsWaitingForReply:(BOOL)arg1;
- (void)launchAssetsd;
- (void)updateThumbnailsForPhoto:(id)arg1 generatePreviewImage:(BOOL)arg2 waitForReply:(BOOL)arg3;

@end
