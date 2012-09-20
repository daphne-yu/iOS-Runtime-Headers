/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableSet, NSString, NSObject<OS_dispatch_queue>, NSLock, NSMutableArray, GEOTileDBMRU;

@interface GEOTileDBWriter : NSObject  {
    NSString *_path;
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_versionQuery;
    struct sqlite3_stmt { } *_versionInsert;
    struct sqlite3_stmt { } *_editionQuery;
    struct sqlite3_stmt { } *_editionDelete;
    struct sqlite3_stmt { } *_editionUpdate;
    struct sqlite3_stmt { } *_tileInsert;
    struct sqlite3_stmt { } *_tileDelete;
    struct sqlite3_stmt { } *_tileSize;
    struct sqlite3_stmt { } *_sizeQuery;
    long long _lastRowID;
    unsigned long long _databaseSize;
    unsigned long long _maxDatabaseSize;
    BOOL _closed;
    BOOL _defunct;
    NSMutableArray *_writeList;
    NSMutableSet *_uncommitedWriteSet;
    unsigned int _pendingWriteBytes;
    NSLock *_writeListLock;
    NSObject<OS_dispatch_queue> *_writeQueue;
    void *_editionMap;
    long long _evictionRowsThreshold;
    GEOTileDBMRU *_tileDBMRU;
    struct { unsigned int x1; double x2; } *_expirationRecords;
    unsigned int _expirationRecordCount;
    BOOL _preloading;
    double _lastCheckedGeneralExpiration;
}

@property(readonly) NSString * path;
@property BOOL closed;
@property(retain) GEOTileDBMRU * tileDBMRU;
@property(readonly) unsigned long long databaseSize;
@property unsigned long long maxDatabaseSize;


- (id)path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)_updateSize;
- (void)_localeChanged:(id)arg1;
- (void)setMaxDatabaseSize:(unsigned long long)arg1;
- (unsigned long long)maxDatabaseSize;
- (unsigned long long)databaseSize;
- (void)deleteTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)pendingWritesForKeys:(id)arg1 handler:(id)arg2;
- (id)pendingWriteForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)addTile:(id)arg1 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 edition:(unsigned int)arg3 tileSet:(unsigned int)arg4;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(id)arg2;
- (void)_printDBStatus:(const char *)arg1;
- (void)flushPendingWrites;
- (void)_writeEntry:(id)arg1;
- (void)_deleteKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (BOOL)_tileSetExpires:(unsigned int)arg1;
- (void)_shrinkToUnderSize:(unsigned long long)arg1 vacuum:(BOOL)arg2;
- (unsigned long long)_dbFileSize;
- (void)_assertDatabaseSize;
- (void)_evict;
- (BOOL)_readEditions;
- (void)_writeVersion;
- (void)_prepareStatements;
- (void)_createTables;
- (void)_updateEdition:(unsigned int)arg1 forTileset:(unsigned int)arg2 provider:(unsigned int)arg3;
- (void)_openIfNecessary;
- (void)_performWrites:(BOOL)arg1;
- (void)_openDBForceRecreate:(BOOL)arg1;
- (void)_editionUpdate:(id)arg1;
- (void)_deviceLocked;
- (void)setTileDBMRU:(id)arg1;
- (id)tileDBMRU;
- (void)setExpirationRecords:(struct { unsigned int x1; double x2; }*)arg1 count:(unsigned int)arg2;
- (void)setClosed:(BOOL)arg1;
- (BOOL)closed;
- (void)_closeDB;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;

@end
