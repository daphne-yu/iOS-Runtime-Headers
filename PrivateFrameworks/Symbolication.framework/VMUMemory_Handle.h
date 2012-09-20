/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMUArchitecture, <VMUMemory>;

@interface VMUMemory_Handle : VMUMemory_Base <VMUMemory> {
    <VMUMemory> *_parent;
    char *_data;
    struct _VMURange { 
        unsigned long long location; 
        unsigned long long length; 
    } _addressRange;
    VMUArchitecture *_architecture;
}


- (id)description;
- (void)dealloc;
- (id)view;
- (id)initWithParent:(id)arg1 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2 architecture:(id)arg3 data:(char *)arg4;
- (id)swappedView;
- (id)memoryAtAddress:(unsigned long long)arg1 maxSize:(unsigned long long)arg2;
- (BOOL)isContiguous;
- (id)memoryFromSubRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 mapToAddress:(unsigned long long)arg2 architecture:(id)arg3;
- (id)architecture;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })addressRange;

@end
