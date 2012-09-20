/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, NSString, NSArray;

@interface PLBulletinsTestDaemonJob : PLDaemonJob  {
    NSString *_albumUUID;
    PLPhotoLibrary *_photoLibrary;
    int _bulletinType;
    NSArray *_addedAssetUUIDs;
}

@property int bulletinType;
@property(retain) NSString * albumUUID;
@property(retain) NSArray * addedAssetUUIDs;
@property(retain) PLPhotoLibrary * photoLibrary;

+ (void)notifyAssets:(id)arg1 wereAddedToAlbum:(id)arg2;
+ (void)notifyInvitationWasReceivedForAlbum:(id)arg1;

- (void)dealloc;
- (void)run;
- (void)setAddedAssetUUIDs:(id)arg1;
- (void)setBulletinType:(int)arg1;
- (id)addedAssetUUIDs;
- (id)albumUUID;
- (int)bulletinType;
- (void)encodeToXPCObject:(id)arg1;
- (int)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1;
- (void)setAlbumUUID:(id)arg1;
- (id)photoLibrary;
- (void)setPhotoLibrary:(id)arg1;

@end
