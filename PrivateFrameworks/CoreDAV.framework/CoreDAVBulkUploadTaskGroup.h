/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableDictionary, NSString, NSDictionary, NSURL;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    NSURL *_folderURL;
    NSString *_lastKnownCTag;
    BOOL _validCTag;
    void *_context;
    unsigned int _multiPutBatchMaxNumResources;
    unsigned int _multiPutBatchMaxSize;
    NSMutableDictionary *_remainingUUIDsToAddActions;
    NSMutableDictionary *_remainingHREFsToModDeleteActions;
    NSMutableDictionary *_uuidToHREF;
    NSMutableDictionary *_hrefToETag;
    NSMutableDictionary *_uuidToErrorItems;
    NSMutableDictionary *_hrefToErrorItems;
    NSMutableDictionary *_uuidToStatus;
    NSMutableDictionary *_hrefToStatus;
}

@property unsigned int multiPutBatchMaxNumResources;
@property unsigned int multiPutBatchMaxSize;
@property(readonly) NSURL * folderURL;
@property(readonly) void* context;
@property(readonly) BOOL validCTag;
@property(retain) NSString * nextCTag;
@property(readonly) NSDictionary * uuidToHREF;
@property(readonly) NSDictionary * hrefToETag;
@property(readonly) NSDictionary * uuidToStatus;
@property(readonly) NSDictionary * hrefToStatus;
@property(readonly) NSDictionary * uuidToErrorItems;
@property(readonly) NSDictionary * hrefToErrorItems;


- (id)description;
- (void)dealloc;
- (void*)context;
- (BOOL)validCTag;
- (void)setMultiPutBatchMaxSize:(unsigned int)arg1;
- (unsigned int)multiPutBatchMaxSize;
- (void)setMultiPutBatchMaxNumResources:(unsigned int)arg1;
- (unsigned int)multiPutBatchMaxNumResources;
- (id)initWithFolderURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 context:(void*)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (id)hrefToStatus;
- (id)uuidToStatus;
- (id)hrefToErrorItems;
- (id)uuidToErrorItems;
- (id)hrefToETag;
- (id)uuidToHREF;
- (Class)multiPutTaskClass;
- (id)folderURL;
- (void)syncAway;
- (void)setNextCTag:(id)arg1;
- (id)nextCTag;
- (void)_sendNextBatch;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
