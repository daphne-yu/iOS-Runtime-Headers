/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VMUCallTreeNode, NSString, NSArray;

@interface VMUCallTreeNode : NSObject  {
    unsigned int flags;
    NSString *name;
    unsigned long long address;
    NSArray *sortedChildrenWithPseudoNode;
    unsigned int numBytes;
    unsigned int count;
    union { 
        NSString *thePseudoName; 
        VMUCallTreeNode *theChild; 
        id *theChildren; 
    } un;
    VMUCallTreeNode *parent;
}

+ (id)rootForCompare:(id)arg1 to:(id)arg2;
+ (id)rootForSampleFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
+ (id)rootForTraceData:(id)arg1;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg2;
+ (id)makeFakeRootForNode:(id)arg1;
+ (void)compareChildrenOf:(id)arg1 toChildrenOf:(id)arg2 storeDiffIn:(id)arg3;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg2 sampler:(id)arg3 options:(unsigned int)arg4;

- (unsigned long long)address;
- (int)compare:(id)arg1;
- (id)name;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)release;
- (unsigned int)count;
- (id)nextNode;
- (id)fullOutputWithThreshold:(unsigned int)arg1;
- (id)findNodeMatching:(id)arg1 searchForward:(BOOL)arg2 ignoreCase:(BOOL)arg3 wholeWords:(BOOL)arg4;
- (id)prevNode;
- (id)invertedNode;
- (id)filterOutSymbols:(id)arg1;
- (id)filterOutWaiting;
- (int)comparePuttingMainThreadFirst:(id)arg1;
- (BOOL)isPseudo;
- (id)browserName;
- (id)largestTopOfStackPath;
- (id)sortedChildrenWithPseudoNode;
- (id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2;
- (id)pseudoNodeTopOfStackChild;
- (void)setNameToCount:(id)arg1;
- (id)prune:(unsigned int)arg1;
- (id)filterOutSymbols:(id)arg1 required:(id)arg2;
- (id)pseudoName;
- (unsigned int)sumOfChildrenCounts;
- (id)sortedChildrenByNameWithPseudoNode;
- (char *)addSubTreeFromFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 withIndent:(int)arg2 withLine:(char *)arg3 withLen:(unsigned int*)arg4;
- (void)addTraceEvent:(id)arg1 forTraceData:(id)arg2;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2;
- (void)addStackEntry:(id)arg1 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg2 sampler:(id)arg3 numBytes:(unsigned int)arg4 options:(unsigned int)arg5 uniqueStrings:(id)arg6 addressToSymbolNameMap:(id)arg7 threadPortToNameMap:(id)arg8 dispatchQueueSerialNumToNameMap:(id)arg9;
- (unsigned int)numBytes;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 compareSymbolNames:(BOOL)arg3;
- (int)compareNames:(id)arg1;
- (id)parent;

@end
