/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueIvarMutableOrderedSet : NSKeyValueMutableOrderedSet  {
    struct objc_ivar { } *_ivar;
}

+ (struct { unsigned int x1; id x2[4]; }*)_proxyNonGCPoolPointer;

- (unsigned int)indexOfObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (id)_nonNilMutableOrderedSetValueWithSelector:(SEL)arg1;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end
