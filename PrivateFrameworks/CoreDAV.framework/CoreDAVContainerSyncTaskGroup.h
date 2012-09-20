/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSArray, <CoreDAVLocalDBInfoProvider>, NSMutableArray, NSDictionary, NSMutableSet, NSString, NSMutableDictionary, NSURL;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate> {
    int _phase;
    NSURL *_folderURL;
    NSString *_previousCTag;
    NSString *_nextCTag;
    BOOL _ensureUpdatedCTag;
    BOOL _useSyncCollection;
    NSString *_previousSyncToken;
    NSString *_nextSyncToken;
    NSMutableArray *_actions;
    void *_context;
    unsigned int _multiGetBatchSize;
    NSMutableArray *_unsubmittedTasks;
    unsigned int _maxIndependentTasks;
    NSURL *_addMemberURL;
    BOOL _useMultiGet;
    NSDictionary *_bulkRequests;
    NSString *_bulkChangeCheckCTag;
    NSMutableSet *_syncReportDeletedURLs;
    NSMutableDictionary *_urlToETag;
    Class _appSpecificDataItemClass;
    BOOL _syncItemOrder;
    NSMutableArray *_localItemURLOrder;
    NSMutableDictionary *_remainingUUIDsToAddActions;
    NSMutableDictionary *_remainingHREFsToModDeleteActions;
    BOOL _actionsOnly;
}

@property(readonly) NSURL * folderURL;
@property(retain) NSString * previousCTag;
@property(retain) NSString * previousSyncToken;
@property BOOL useSyncCollection;
@property(readonly) void* context;
@property unsigned int multiGetBatchSize;
@property BOOL useMultiGet;
@property <CoreDAVLocalDBInfoProvider> * delegate;
@property unsigned int maxIndependentTasks;
@property(retain) NSURL * addMemberURL;
@property(retain) NSDictionary * bulkRequests;
@property(retain) NSString * bulkChangeCheckCTag;
@property BOOL actionsOnly;
@property(readonly) NSArray * localItemURLOrder;
@property BOOL ensureUpdatedCTag;
@property(retain) NSString * nextCTag;


- (id)description;
- (void)dealloc;
- (void*)context;
- (void)setActionsOnly:(BOOL)arg1;
- (BOOL)actionsOnly;
- (id)bulkChangeCheckCTag;
- (id)localItemURLOrder;
- (BOOL)useSyncCollection;
- (id)previousSyncToken;
- (void)setEnsureUpdatedCTag:(BOOL)arg1;
- (BOOL)ensureUpdatedCTag;
- (void)setPreviousCTag:(id)arg1;
- (id)previousCTag;
- (id)folderURL;
- (void)setUseMultiGet:(BOOL)arg1;
- (BOOL)useMultiGet;
- (void)setMaxIndependentTasks:(unsigned int)arg1;
- (unsigned int)maxIndependentTasks;
- (void)setMultiGetBatchSize:(unsigned int)arg1;
- (unsigned int)multiGetBatchSize;
- (void)syncAway;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(BOOL)arg5 context:(void*)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8;
- (void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;
- (BOOL)shouldFetchMoreETags;
- (void)setNextCTag:(id)arg1;
- (void)_bulkChangeTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_postTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)setBulkChangeCheckCTag:(id)arg1;
- (id)nextCTag;
- (void)_getOrder;
- (BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (void)setUseSyncCollection:(BOOL)arg1;
- (void)setPreviousSyncToken:(id)arg1;
- (void)applyAdditionalPropertiesFromPostTask:(id)arg1;
- (void)applyAdditionalPropertiesFromPutTask:(id)arg1;
- (BOOL)isWhitelistedError:(id)arg1;
- (void)_bulkChange;
- (id)copyGetTaskWithURL:(id)arg1;
- (void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 error:(id)arg3;
- (void)_configureMultiGet:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (void)_getDataPayloads;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)arg1;
- (id)copyAdditionalResourcePropertiesToFetch;
- (void)_sendNextBatch;
- (void)_pushActions;
- (Class)bulkChangeTaskClass;
- (void)_getCTag;
- (id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (id)copyPostTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (id)dataContentType;
- (void)_getETags;
- (unsigned int)_submitTasks;
- (void)cancelTaskGroup;
- (void)_tearDownAllUnsubmittedTasks;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)bailWithError:(id)arg1;
- (id)addMemberURL;
- (void)setBulkRequests:(id)arg1;
- (void)setAddMemberURL:(id)arg1;
- (id)bulkRequests;

@end
