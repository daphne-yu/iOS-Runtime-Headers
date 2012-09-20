/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSWeakCallback;

@interface NSConcreteHashTable : NSHashTable  {
    struct NSSlice { 
        void **items; 
        BOOL wantsStrong; 
        BOOL wantsWeak; 
        BOOL wantsARC; 
        BOOL shouldCopyIn; 
        BOOL usesStrong; 
        BOOL usesWeak; 
        BOOL usesARC; 
        BOOL usesSentinel; 
        BOOL pointerPersonality; 
        BOOL integerPersonality; 
        BOOL simpleReadClear; 
        NSWeakCallback *callback; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    } slice;
    unsigned int count;
    unsigned int capacity;
    unsigned int options;
    unsigned int mutations;
}


- (id)description;
- (unsigned int)hash;
- (void)addObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)init;
- (id)copy;
- (unsigned int)count;
- (void)finalize;
- (id)initWithOptions:(unsigned int)arg1 capacity:(unsigned int)arg2;
- (id)allObjects;
- (id)objectEnumerator;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)rehash;
- (void)hashGrow;
- (void)assign:(unsigned int)arg1 key:(const void*)arg2;
- (unsigned int)rehashAround:(unsigned int)arg1;
- (void)raiseCountUnderflowException;
- (void)insertItem:(const void*)arg1;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned int)arg2;
- (void)getKeys:(void**)arg1 count:(unsigned int*)arg2;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (void)removeAllItems;
- (void)removeItem:(const void*)arg1;
- (void*)getItem:(const void*)arg1;
- (void)_initBlock;
- (id)pointerFunctions;

@end
