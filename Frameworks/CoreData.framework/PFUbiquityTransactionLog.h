/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, PFUbiquitySaveSnapshot, NSRecursiveLock, PFUbiquityLocation, NSString, PFUbiquityKnowledgeVector, NSNumber;

@interface PFUbiquityTransactionLog : NSObject  {
    NSMutableDictionary *_contents;
    int _transactionLogType;
    BOOL _useTemporaryLogLocation;
    PFUbiquityLocation *_transactionLogLocation;
    PFUbiquityLocation *_temporaryTransactionLogLocation;
    PFUbiquityLocation *_stagingTransactionLogLocation;
    NSString *_fileProtectionOption;
    NSNumber *_transactionNumber;
    BOOL _inTemporaryLocation;
    BOOL _inStagingLocation;
    BOOL _inPermanentLocation;
    PFUbiquityKnowledgeVector *_knowledgeVector;
    PFUbiquitySaveSnapshot *_saveSnapshot;
    NSString *_localPeerID;
    BOOL _loadUsingRetry;
    BOOL _loadedComparisonMetadata;
    BOOL _loadedImportMetadata;
    BOOL _loadedContents;
    NSRecursiveLock *_contentsLock;
}

@property BOOL useTemporaryLogLocation;
@property(readonly) BOOL inTemporaryLocation;
@property(readonly) BOOL inStagingLocation;
@property(readonly) BOOL inPermanentLocation;
@property(readonly) NSString * storeName;
@property(readonly) NSString * exportingPeerID;
@property(readonly) NSString * modelVersionHash;
@property(readonly) NSString * fileProtectionOption;
@property(readonly) NSNumber * transactionNumber;
@property(readonly) NSString * transactionLogFilename;
@property(readonly) int transactionLogType;
@property(readonly) PFUbiquityLocation * transactionLogLocation;
@property(readonly) PFUbiquityLocation * temporaryTransactionLogLocation;
@property(readonly) PFUbiquityLocation * stagingTransactionLogLocation;
@property(readonly) PFUbiquitySaveSnapshot * saveSnapshot;
@property(readonly) PFUbiquityLocation * currentLocation;
@property(readonly) PFUbiquityKnowledgeVector * knowledgeVector;
@property(readonly) NSString * localPeerID;
@property BOOL loadUsingRetry;

+ (id)generateTransactionLogFilename;
+ (BOOL)pruneTemporaryLogDirectoryForPeerRootLocation:(id)arg1 error:(id*)arg2;
+ (void)truncateLogFilesBeforeBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (void)pruneStagingDirectoryForLocalPeerID:(id)arg1 andStoreName:(id)arg2 andModelVersionHash:(id)arg3 withStack:(id)arg4 andStoreTransactionNumber:(id)arg5;
+ (id)transactionLogFilenameUUID;
+ (void)updateModificationTimesForLocation:(id)arg1;
+ (id)createTransactionLogFilenameForLogType:(int)arg1;
+ (int)transactionLogTypeFromLocation:(id)arg1;

- (id)description;
- (void)dealloc;
- (id)init;
- (void)setLoadUsingRetry:(BOOL)arg1;
- (BOOL)loadUsingRetry;
- (id)fileProtectionOption;
- (id)initWithTransactionLogURL:(id)arg1 ubiquityRootLocation:(id)arg2 andLocalPeerID:(id)arg3;
- (void)cleanupExternalDataReferences;
- (BOOL)deleteLogFileWithError:(id*)arg1;
- (id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)arg1;
- (void)populateContents;
- (BOOL)useTemporaryLogLocation;
- (BOOL)loadContents:(id*)arg1;
- (id)loadPlistAtLocation:(id)arg1 withError:(id*)arg2;
- (BOOL)inStagingLocation;
- (BOOL)inTemporaryLocation;
- (BOOL)inPermanentLocation;
- (id)stagingTransactionLogLocation;
- (id)temporaryTransactionLogLocation;
- (id)currentLocation;
- (int)transactionLogType;
- (id)initWithTransactionLogLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (BOOL)writeToDiskWithError:(id*)arg1 andUpdateFilenameInTransactionEntries:(id)arg2;
- (void)setUseTemporaryLogLocation:(BOOL)arg1;
- (id)initWithStoreName:(id)arg1 andSaveSnapshot:(id)arg2;
- (BOOL)moveFileToPermanentLocationWithError:(id*)arg1;
- (id)transactionLogFilename;
- (id)modelVersionHash;
- (id)transactionNumber;
- (id)knowledgeVector;
- (BOOL)loadImportMetadataWithError:(id*)arg1;
- (id)saveSnapshot;
- (id)exportingPeerID;
- (BOOL)loadComparisonMetadataWithError:(id*)arg1;
- (id)storeName;
- (id)transactionLogLocation;
- (BOOL)releaseContents:(id*)arg1;
- (BOOL)loadDeletedObjectsDataWithError:(id*)arg1;
- (BOOL)loadUpdatedObjectsDataWithError:(id*)arg1;
- (BOOL)loadInsertedObjectsDataWithError:(id*)arg1;
- (id)localPeerID;

@end
