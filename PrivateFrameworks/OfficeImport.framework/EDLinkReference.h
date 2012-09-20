/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDLinkReference : NSObject  {
    unsigned int mLinkIndex;
    unsigned int mFirstSheetIndex;
    unsigned int mLastSheetIndex;
}

+ (id)linkReferenceWithLinkIndex:(unsigned int)arg1 firstSheetIndex:(unsigned int)arg2 lastSheetIndex:(unsigned int)arg3;

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)setLinkIndex:(unsigned int)arg1;
- (void)setLastSheetIndex:(unsigned int)arg1;
- (void)setFirstSheetIndex:(unsigned int)arg1;
- (BOOL)isEqualToLinkReference:(id)arg1;
- (id)initWithLinkIndex:(unsigned int)arg1 firstSheetIndex:(unsigned int)arg2 lastSheetIndex:(unsigned int)arg3;
- (unsigned int)linkIndex;
- (unsigned int)lastSheetIndex;
- (unsigned int)firstSheetIndex;

@end
