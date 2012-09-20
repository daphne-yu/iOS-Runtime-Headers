/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class <VMUMemory>;

@interface VMUFatArch : NSObject  {
    unsigned int _fileOffset;
    unsigned int _size;
    unsigned int _alignment;
    <VMUMemory> *_memory;
}

+ (id)fatArchWithMemory:(id)arg1 fileOffset:(unsigned int)arg2 size:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)fatArchWithMemory:(id)arg1 memoryView:(id)arg2;

- (void)dealloc;
- (unsigned int)alignment;
- (unsigned int)size;
- (unsigned int)fileOffset;
- (id)initWithMemory:(id)arg1 fileOffset:(unsigned int)arg2 size:(unsigned int)arg3 alignment:(unsigned int)arg4;
- (id)initWithMemory:(id)arg1 memoryView:(id)arg2;
- (id)memory;
- (id)architecture;

@end
