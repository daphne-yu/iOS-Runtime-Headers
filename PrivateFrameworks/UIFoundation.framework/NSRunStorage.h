/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSRunStorage : NSObject <NSCopying> {
    unsigned int _count;
    unsigned int _elementSize;
    unsigned int _numBlocks;
    unsigned int _maxBlocks;
    unsigned int _indexDeltaStartBlock;
    int _indexDelta;
    struct _NSRunBlock { unsigned int x1; unsigned char x2[0]; } *_runs;
    unsigned int _cachedBlock;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _cachedBlockRange;
    unsigned int _gapBlockIndex;
}

+ (void)initialize;
+ (void)_setConsistencyCheckingEnabled:(BOOL)arg1 superCheckEnabled:(BOOL)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)count;
- (void)_consistencyCheck:(int)arg1;
- (void)_moveGapAndMergeWithBlockRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_ensureCapacity:(unsigned int)arg1;
- (void)_consistencyError:(int)arg1 startAtZeroError:(BOOL)arg2 cacheError:(BOOL)arg3 inconsistentBlockError:(BOOL)arg4;
- (void)_moveGapToBlockIndex:(unsigned int)arg1;
- (void*)elementAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (unsigned int)elementSize;
- (void)_reallocData:(unsigned long)arg1;
- (id)initWithRunStorage:(id)arg1;
- (void)_deallocData;
- (void)_allocData:(unsigned long)arg1;
- (id)initWithElementSize:(unsigned int)arg1 capacity:(unsigned int)arg2;
- (void)removeElementsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 coalesceRuns:(BOOL)arg2;
- (void)replaceElementsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withElement:(void*)arg2 coalesceRuns:(BOOL)arg3;
- (void)insertElement:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 coalesceRuns:(BOOL)arg3;

@end
