/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSString, NSDictionary;

@interface PLCloudSharedCommentsJob : PLCloudSharingJob  {
    NSDictionary *_mstreamdInfoDictionary;
    int _jobType;
    NSString *_commentGUID;
    NSArray *_msASComments;
    NSString *_assetGUID;
    NSString *_albumGUID;
}

@property int jobType;
@property(retain) NSArray * msASComments;
@property(retain) NSString * commentGUID;
@property(retain) NSString * assetGUID;
@property(retain) NSString * albumGUID;
@property(retain) NSDictionary * mstreamdInfoDictionary;

+ (void)locallyProcessDeletedComments:(id)arg1 info:(id)arg2;
+ (void)locallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4;
+ (id)directoryPathForInFlightComments:(BOOL)arg1;
+ (void)deleteSharedCommentFromServer:(id)arg1;
+ (void)publishCommentToServer:(id)arg1;

- (id)description;
- (void)dealloc;
- (void)run;
- (void)executeDeleteCommentFromServer;
- (void)executePublishCommentToServer;
- (void)executeProcessServerNotificationOfCommentChanges;
- (id)assetGUID;
- (id)commentGUID;
- (id)msASComments;
- (void)setMsASComments:(id)arg1;
- (void)setAssetGUID:(id)arg1;
- (void)setCommentGUID:(id)arg1;
- (void)setAlbumGUID:(id)arg1;
- (void)setJobType:(int)arg1;
- (void)setMstreamdInfoDictionary:(id)arg1;
- (int)jobType;
- (id)mstreamdInfoDictionary;
- (id)albumGUID;
- (BOOL)shouldArchiveXPCToDisk;
- (void)encodeToXPCObject:(id)arg1;
- (int)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1;

@end
