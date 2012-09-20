/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class _PFArray, NSMutableArray;

@interface _PFMutableProxyArray : NSMutableArray  {
    int _cd_rc;
    unsigned int _editCount;
    unsigned int _offset;
    unsigned int _limit;
    _PFArray *_originalArray;
    NSMutableArray *_updatedObjectsArray;
    struct __CFArray { } *_indicesVeneer;
}


- (id)subarrayWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)retainCount;
- (void)removeLastObject;
- (unsigned int)indexOfObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)addObject:(id)arg1;
- (id)retain;
- (void)dealloc;
- (oneway void)release;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)initWithPFArray:(id)arg1;
- (void)_rehash;
- (id)initWithPFArray:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)managedObjectIDAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfManagedObjectForObjectID:(id)arg1;
- (id)arrayFromObjectIDs;
- (id)newArrayFromObjectIDs;
- (void)finalize;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

@end
