/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSASPlatformImplementation : NSObject <MSASPlatform> {
}


- (id)pathAlbumSharingDir;
- (id)albumSharingDaemon;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (id)baseSharingURLForPersonID:(id)arg1;
- (id)pushTokenForPersonID:(id)arg1;
- (int)MMCSConcurrentConnectionsCount;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;
- (BOOL)MSASIsAllowedToUploadAssets;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (id)personIDsEnabledForAlbumSharing;
- (Class)pluginClass;
- (void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
- (BOOL)shouldLogAtLevel:(int)arg1;

@end
