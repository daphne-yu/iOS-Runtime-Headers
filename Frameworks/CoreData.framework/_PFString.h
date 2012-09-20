/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFString : NSString  {
    int _reserved1;
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
    int _reserved2;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)description;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)retain;
- (BOOL)isEqual:(id)arg1;
- (const char *)UTF8String;
- (void)getCharacters:(unsigned short*)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)copy;
- (unsigned int)length;
- (void)getCString:(char *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (const char *)cString;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)encodeWithCoder:(id)arg1;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (unsigned int)cStringLength;

@end
