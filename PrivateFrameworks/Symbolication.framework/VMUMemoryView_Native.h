/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUMemoryView_Native : NSObject <VMUMemoryView> {
    struct _VMURange { 
        unsigned long long location; 
        unsigned long long length; 
    } _addressRange;
    unsigned long _cursor;
    char *_data;
    id _gcKeepAlive;
}


- (id)description;
- (long long)int64;
- (void)setCursor:(unsigned long long)arg1;
- (unsigned long long)cursor;
- (id)initWithAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 data:(char *)arg2 memory:(id)arg3;
- (BOOL)charAtOffset:(unsigned long long)arg1;
- (id)arrayOfUInt64:(unsigned long)arg1;
- (id)arrayOfUInt32:(unsigned long)arg1;
- (id)arrayOfUInt16:(unsigned long)arg1;
- (id)arrayOfUInt8:(unsigned long)arg1;
- (id)arrayOfInt64:(unsigned long)arg1;
- (id)arrayOfInt32:(unsigned long)arg1;
- (id)arrayOfInt16:(unsigned long)arg1;
- (id)arrayOfInt8:(unsigned long)arg1;
- (short)int16;
- (void)pointerAlignCursor;
- (BOOL)isCursorPointerAligned;
- (void)rewindCursor:(unsigned long long)arg1;
- (int)int32;
- (struct dyld_image_info_64 { unsigned long long x1; unsigned long long x2; unsigned long long x3; })dyldImageInfo;
- (struct dyld_image_info_64 { unsigned long long x1; unsigned long long x2; unsigned long long x3; })dyldImageInfo64;
- (BOOL)int8;
- (unsigned long long)uint64;
- (long long)LEB128;
- (unsigned char)uint8;
- (unsigned long long)ULEB128;
- (id)stringWithEncoding:(unsigned int)arg1;
- (unsigned int)uint32;
- (unsigned short)uint16;
- (id)stringWithEncoding:(unsigned int)arg1 offset:(unsigned long long)arg2;
- (struct nlist_64 { union { unsigned int x_1_1_1; } x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned long long x5; })nlist;
- (struct nlist_64 { union { unsigned int x_1_1_1; } x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned long long x5; })nlist_64;
- (void)advanceCursor:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })addressRange;
- (id)stringWithEncoding:(unsigned int)arg1 size:(unsigned long)arg2;
- (id)readBytes:(unsigned long)arg1;

@end
