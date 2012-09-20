/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSMutableArray, NSString, SPIndex;

@interface SPContentIndexer : NSObject  {
    NSString *_displayIdentifier;
    NSString *_category;
    struct __CXQuery { } *_query;
    struct __CXIndex { } *_index;
    unsigned int _version;
    SPIndex *_store;
    NSMutableArray *_dirtyRecords;
    NSMutableArray *_dirtyContent;
    NSMutableArray *_dirtyRemoves;
}

+ (id)indexerForDisplayIdentifier:(id)arg1 category:(id)arg2;
+ (void)preheat;
+ (void)initialize;

- (id)existingRecordsForExtIDs:(id)arg1;
- (id)resultForIdentifier:(id)arg1;
- (BOOL)nextSearchResults:(id*)arg1;
- (void)beginSearch:(id)arg1;
- (void)removeRecord:(id)arg1;
- (void)setIdentifier:(id)arg1 forRecordDictionary:(id)arg2 existingRecord:(id)arg3;
- (BOOL)commitUpdates;
- (id)initWithDisplayIdentifier:(id)arg1 category:(id)arg2 version:(unsigned int)arg3;
- (void)_openOrCreateIndex;
- (id)_storePath;
- (id)_legacyStorePath;
- (id)_legacyIndexPath;
- (void)dealloc;
- (id)_indexPath;
- (void)cancelSearch;

@end
