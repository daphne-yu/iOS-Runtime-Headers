/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, NSObject<OS_dispatch_queue>;

@interface MSASModelBase : NSObject  {
    struct sqlite3 { } *_db;
    NSString *_personID;
    struct __CFDictionary { } *_statements;
    NSObject<OS_dispatch_queue> *_statementQueue;
    NSObject<OS_dispatch_queue> *_dbQueue;
    BOOL _dbWasRecreated;
}

@property(readonly) struct sqlite3 { }* dbQueueDB;
@property(readonly) NSString * personID;
@property(readonly) NSObject<OS_dispatch_queue> * dbQueue;
@property BOOL dbWasRecreated;
@property(retain) NSObject<OS_dispatch_queue> * statementQueue;
@property struct __CFDictionary { }* statements;


- (void).cxx_destruct;
- (void)dealloc;
- (struct sqlite3 { }*)db;
- (void)beginTransaction;
- (void)setDbWasRecreated:(BOOL)arg1;
- (void)setStatementQueue:(id)arg1;
- (void)setStatements:(struct __CFDictionary { }*)arg1;
- (struct __CFDictionary { }*)statements;
- (void)dbQueueRollbackTransaction;
- (id)dbQueuePersistentDataForKey:(id)arg1;
- (void)dbQueueDeletePersistentValueWithKey:(id)arg1;
- (void)dbQueueSetPersistentData:(id)arg1 forKey:(id)arg2;
- (id)dbQueuePersistentStringForKey:(id)arg1;
- (id)statementQueue;
- (void)dbQueueInitializeDatabasePath:(id)arg1 currentVersion:(int)arg2;
- (id)dbQueuePersistentObjectForKey:(id)arg1;
- (struct sqlite3_stmt { }*)statementForString:(id)arg1;
- (struct sqlite3 { }*)dbQueueDB;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (id)initWithPersonID:(id)arg1 databasePath:(id)arg2 currentVersion:(int)arg3;
- (void)setPersistentString:(id)arg1 forKey:(id)arg2;
- (void)deletePersistentValueWithKey:(id)arg1;
- (void)dbQueueEndTransaction;
- (void)dbQueueSetPersistentObject:(id)arg1 forKey:(id)arg2;
- (void)dbQueueSetPersistentString:(id)arg1 forKey:(id)arg2;
- (void)dbQueueBeginTransaction;
- (id)dbQueue;
- (id)persistentStringForKey:(id)arg1;
- (BOOL)dbWasRecreated;
- (void)setPersistentObject:(id)arg1 forKey:(id)arg2;
- (id)persistentObjectForKey:(id)arg1;
- (void)shutDownForDestruction:(BOOL)arg1 completionBlock:(id)arg2;
- (id)personID;
- (void)endTransaction;

@end
