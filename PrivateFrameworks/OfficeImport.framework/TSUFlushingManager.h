/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUPointerKeyDictionary, <TSUFlushable>, TSUMemoryWatcher, NSThread, NSCondition, TSURetainedPointerKeyDictionary;

@interface TSUFlushingManager : NSObject  {
    TSURetainedPointerKeyDictionary *_objects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::allocator<TSUFlushableObjectInfo *> > { struct _Rb_tree<TSUFlushableObjectInfo *, TSUFlushableObjectInfo *, std::_Identity<TSUFlushableObjectInfo *>, TSUFlushableObjectInfoPointerFlushingOrderLess, std::allocator<TSUFlushableObjectInfo *> > { struct _Rb_tree_impl<TSUFlushableObjectInfoPointerFlushingOrderLess, false> { struct TSUFlushableObjectInfoPointerFlushingOrderLess { } x_1_2_1; struct _Rb_tree_node_base { int x_2_3_1; struct _Rb_tree_node_base {} *x_2_3_2; struct _Rb_tree_node_base {} *x_2_3_3; struct _Rb_tree_node_base {} *x_2_3_4; } x_1_2_2; unsigned int x_1_2_3; } x_1_1_1; } x1; } *_sortedObjects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::allocator<TSUFlushableObjectInfo *> > { struct _Rb_tree<TSUFlushableObjectInfo *, TSUFlushableObjectInfo *, std::_Identity<TSUFlushableObjectInfo *>, TSUFlushableObjectInfoPointerTimeStampLess, std::allocator<TSUFlushableObjectInfo *> > { struct _Rb_tree_impl<TSUFlushableObjectInfoPointerTimeStampLess, false> { struct TSUFlushableObjectInfoPointerTimeStampLess { } x_1_2_1; struct _Rb_tree_node_base { int x_2_3_1; struct _Rb_tree_node_base {} *x_2_3_2; struct _Rb_tree_node_base {} *x_2_3_3; struct _Rb_tree_node_base {} *x_2_3_4; } x_1_2_2; unsigned int x_1_2_3; } x_1_1_1; } x1; } *_sortedNewObjects;
    TSUPointerKeyDictionary *_inactiveObjects;
    unsigned long _clock;
    BOOL _alwaysFlushing;
    BOOL _stopFlushing;
    BOOL _stopFlushingWhenQueueEmpty;
    BOOL _isFlushing;
    <TSUFlushable> *_flushingObject;
    BOOL _isWaitingForFlush;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    TSUMemoryWatcher *_memoryWatcher;
    NSThread *_bgThread;
    unsigned int _backgroundTransitionTaskId;
    unsigned int _activeBgThreadTask;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;
+ (id)_singletonAlloc;

- (unsigned int)retainCount;
- (void)addObject:(id)arg1;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)init;
- (id)autorelease;
- (void)willEnterForeground;
- (void)didReceiveMemoryWarning;
- (void)removeObject:(id)arg1;
- (BOOL)controlsInactiveObject:(id)arg1;
- (BOOL)controlsActiveObject:(id)arg1;
- (void)memoryLevelDecreased:(int)arg1 was:(int)arg2;
- (void)memoryLevelIncreased:(int)arg1 was:(int)arg2;
- (void)didEnterBackground;
- (void)safeToFlush:(id)arg1 wasAccessed:(BOOL)arg2;
- (void)unsafeToFlush:(id)arg1;
- (void)doneWithObject:(id)arg1;
- (void)stopProtectingObject:(id)arg1;
- (void)protectObject:(id)arg1;
- (void)transferNewObjects;
- (BOOL)isNewObject:(struct TSUFlushableObjectInfo { id x1; int x2; int x3; int x4; unsigned long x5[2]; }*)arg1;
- (void)_bgTaskFinished;
- (void)_bgThreadInactive;
- (void)_bgThreadActive;
- (void)_backgroundThread:(id)arg1;
- (void)_bgTaskStarted;
- (void)_flushAllEligible;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo { id x1; int x2; int x3; int x4; unsigned long x5[2]; }*)arg1;
- (struct TSUFlushableObjectInfo { id x1; int x2; int x3; int x4; unsigned long x5[2]; }*)eraseInfoForObject:(id)arg1;
- (void)_didUseObject:(id)arg1;
- (void)advanceClock;
- (void)_stopFlushingObjects;
- (void)_startFlushingObjects;

@end
