/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPBitmapStoreSQL : CPBitmapStore  {
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_findStmt;
    struct sqlite3_stmt { } *_saveStmt;
    struct sqlite3_stmt { } *_beginStmt;
    struct sqlite3_stmt { } *_commitStmt;
    BOOL _dbIsReadOnly;
    BOOL _dbIsMissing;
    struct __CFRunLoopObserver { } *_txnObserver;
}


- (void)dealloc;
- (struct sqlite3 { }*)db;
- (void)removeImagesInGroups:(id)arg1;
- (struct CGImage { }*)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (int)setVersion:(int)arg1;
- (void)purge;
- (id)initWithPath:(id)arg1 version:(int)arg2;
- (int)version;
- (void)commitTransaction;
- (struct sqlite3_stmt { }*)commitStmt;
- (struct sqlite3_stmt { }*)beginStmt;
- (void)createDbAt:(const char *)arg1;
- (id)dbPath;
- (struct sqlite3_stmt { }*)saveStmt;
- (void)beginAutoTxn;
- (struct sqlite3_stmt { }*)findStmt;
- (void)commitTxn;
- (struct CGImage { }*)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { float x1; float x2; })arg3 opaque:(BOOL)arg4 scale:(float)arg5 fillMem:(id)arg6 alternateCompletion:(id)arg7;
- (BOOL)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img { id x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned char x6; }*)arg3;
- (unsigned int)memContentOffset;
- (void*)openAndMmap:(id)arg1 withInfo:(struct _img { id x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned char x6; }*)arg2;
- (BOOL)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img { id x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned char x6; }*)arg3;
- (id)imageNameForKey:(id)arg1 inGroup:(id)arg2;

@end
