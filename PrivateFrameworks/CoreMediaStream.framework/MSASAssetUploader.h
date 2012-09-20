/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class <MSASAssetUploaderDelegate>, NSMutableArray, NSMutableDictionary;

@interface MSASAssetUploader : MSASAssetTransferer  {
    int _state;
    NSMutableArray *_itemsInFlight;
    NSMutableDictionary *_assetCollectionsToItemInFlightMap;
    NSMutableDictionary *_assetToAssetCollectionMap;
    NSMutableArray *_finishedAssetCollections;
    BOOL _didEncounterNetworkConditionError;
}

@property <MSASAssetUploaderDelegate> * delegate;
@property int state;
@property(retain) NSMutableArray * itemsInFlight;
@property(retain) NSMutableDictionary * assetCollectionsToItemInFlightMap;
@property(retain) NSMutableDictionary * assetToAssetCollectionMap;
@property(retain) NSMutableArray * finishedAssetCollections;
@property BOOL didEncounterNetworkConditionError;


- (int)state;
- (void).cxx_destruct;
- (void)setState:(int)arg1;
- (void)setFinishedAssetCollections:(id)arg1;
- (id)finishedAssetCollections;
- (void)setAssetToAssetCollectionMap:(id)arg1;
- (id)assetToAssetCollectionMap;
- (void)setAssetCollectionsToItemInFlightMap:(id)arg1;
- (id)assetCollectionsToItemInFlightMap;
- (void)setItemsInFlight:(id)arg1;
- (id)itemsInFlight;
- (void)workQueueCancel;
- (id)_pathForPersonID:(id)arg1;
- (BOOL)didEncounterNetworkConditionError;
- (void)workQueueStopTrackingItem:(id)arg1;
- (void)workQueueRegisterAssetCollections:(id)arg1 index:(unsigned int)arg2 results:(id)arg3 completionBlock:(id)arg4;
- (void)workQueueRegisterAssets:(id)arg1 index:(unsigned int)arg2 completionBlock:(id)arg3;
- (void)workQueueDidFinishWithItem:(id)arg1 error:(id)arg2;
- (id)_orphanedAssetCollectionError;
- (void)setDidEncounterNetworkConditionError:(BOOL)arg1;
- (void)workQueueShutDownCompletionBlock:(id)arg1;
- (void)workQueueStop;
- (void)_workQueueStop;
- (void)workQueueGoIdle;
- (void)workQueueUploadNextBatch;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAllAssetsContext:(id)arg2;
- (void)MMCSEngine:(id)arg1 didFinishGettingAllAssetsContext:(id)arg2;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 context:(id)arg3 putReceipt:(id)arg4 error:(id)arg5;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 context:(id)arg5;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 context:(id)arg4 error:(id)arg5;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 context:(id)arg5;
- (void)unregisterAssetCollections:(id)arg1 completionBlock:(id)arg2;
- (void)registerAssetCollections:(id)arg1 completionBlock:(id)arg2;
- (void)unregisterAssetCollections:(id)arg1;
- (void)workQueueRetryOutstandingActivities;

@end
