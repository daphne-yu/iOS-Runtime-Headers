/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSError, NSObject<PFUbiquityImportScanOperationDelegate>, PFUbiquitySwitchboardEntry, PFUbiquityLocation, NSString, NSMutableDictionary, NSSet;

@interface PFUbiquityImportScanOperation : PFUbiquityImportOperation  {
    PFUbiquityLocation *_rootLocationToScan;
    NSString *_localPeerID;
    NSSet *_activeStoreNames;
    BOOL _includeLocalPeerLogs;
    BOOL _isFirstImport;
    BOOL _success;
    NSError *_scanError;
    PFUbiquitySwitchboardEntry *_entry;
    NSMutableDictionary *_receiptFileCache;
}

@property(readonly) PFUbiquityLocation * rootLocationToScan;
@property(readonly) NSString * localPeerID;
@property(readonly) NSSet * activeStoreNames;
@property(readonly) BOOL includeLocalPeerLogs;
@property BOOL isFirstImport;
@property NSObject<PFUbiquityImportScanOperationDelegate> * delegate;
@property(readonly) BOOL success;
@property(readonly) NSError * scanError;

+ (void)initialize;

- (void)main;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)batchDownloadTransactionLogsAtLocations:(id)arg1 error:(id*)arg2;
- (BOOL)includeLocalPeerLogs;
- (id)activeStoreNames;
- (id)rootLocationToScan;
- (BOOL)isFirstImport;
- (id)scanError;
- (void)setIsFirstImport:(BOOL)arg1;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 activeStoreNames:(id)arg3 includingLocalPeerLogs:(BOOL)arg4;
- (BOOL)success;
- (id)retainedDelegate;
- (id)localPeerID;

@end
