/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSet, NSString, NSData, NSDictionary, PFUbiquityLocation, NSURL;

@interface PFUbiquityStoreMetadata : NSManagedObject  {
}

@property(retain) NSDictionary * storeOptions;
@property(readonly) NSURL * ubiquityRootURL;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(retain) NSData * storeOptionsBinaryPlistData;
@property(retain) NSString * modelVersionHashString;
@property(retain) NSString * storeURLString;
@property(retain) NSString * ubiquityName;
@property(retain) NSString * storeType;
@property(retain) NSString * ubiquityRootURLString;
@property(retain) NSString * storeIdentifier;
@property(retain) NSString * ubiquityRelativePath;
@property(retain) NSSet * transactionEntries;
@property(retain) NSSet * peerStates;
@property(retain) NSSet * primaryKeyRanges;

+ (BOOL)isBaselineRootURL:(id)arg1;
+ (id)baselineMetaFileURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineGCModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineStoreURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)addMetadataForPersistentStore:(id)arg1 withLocalPeerID:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)allStoreMetadataInManagedObjectContext:(id)arg1;
+ (id)baselineRootDirectoryForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)storeMetadatasWithName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)metadataForStoreWithName:(id)arg1 inManagedObjectContext:(id)arg2;

- (id)storeOptions;
- (id)peerStoreURLForPeerIdentifier:(id)arg1;
- (void)updatePeerStatesToMatchKnowledgeVector:(id)arg1;
- (id)createPeerRangesForBaselineWithLocalPeerID:(id)arg1;
- (id)createKnowledgeVectorForBaseline;
- (void)loadFromBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2;
- (id)peerStateForPeerID:(id)arg1;
- (void)setStoreOptions:(id)arg1;
- (void)updateWithStore:(id)arg1;
- (id)initWithUbiquityName:(id)arg1 andUbiquityRootLocation:(id)arg2 insertIntoManagedObjectContext:(id)arg3;
- (id)ubiquityRootURL;
- (id)peerURLForPeerIdentifier:(id)arg1;
- (id)ubiquityRootLocation;

@end
