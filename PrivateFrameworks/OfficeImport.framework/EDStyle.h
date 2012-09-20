/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDProtection, EDResources;

@interface EDStyle : NSObject <NSCopying, EDImmutableObject> {
    EDResources *mResources;
    unsigned int mParentIndex;
    unsigned int mContentFormatId;
    unsigned int mFontIndex;
    unsigned int mFillIndex;
    unsigned int mAlignmentInfoIndex;
    unsigned int mBordersIndex;
    EDProtection *mProtection;
    unsigned int mIndex;
    boolmContentFormatOverridden;
    boolmFontOverridden;
    boolmFillOverridden;
    boolmAlignmentInfoOverridden;
    boolmBordersOverridden;
    boolmProtectionOverridden;
    boolmDoNotModify;
}

+ (id)styleWithResources:(id)arg1;

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)index;
- (id)font;
- (void)setFont:(id)arg1;
- (id)fill;
- (void)setAlignmentInfoIndex:(unsigned int)arg1;
- (unsigned int)alignmentInfoIndex;
- (void)setFillIndex:(unsigned int)arg1;
- (unsigned int)fillIndex;
- (void)setBordersIndex:(unsigned int)arg1;
- (unsigned int)bordersIndex;
- (unsigned int)parentIndex;
- (bool)isProtectionOverridden;
- (BOOL)isEqualToStyle:(id)arg1;
- (BOOL)isEquivalentToStyle:(id)arg1;
- (void)setDoNotModify:(bool)arg1;
- (id)protection;
- (void)setContentFormatOverridden:(bool)arg1;
- (void)setProtectionOverridden:(bool)arg1;
- (void)setFillOverridden:(bool)arg1;
- (void)setBordersOverridden:(bool)arg1;
- (void)setAlignmentInfoOverridden:(bool)arg1;
- (void)setFontOverridden:(bool)arg1;
- (void)setProtection:(id)arg1;
- (void)setBorders:(id)arg1;
- (void)setAlignmentInfo:(id)arg1;
- (void)setParentIndex:(unsigned int)arg1;
- (void)setContentFormat:(id)arg1;
- (unsigned int)fontIndex;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned int)arg1;
- (void)setContentFormatId:(unsigned int)arg1;
- (id)borders;
- (bool)isBordersOverridden;
- (id)contentFormat;
- (unsigned int)contentFormatId;
- (bool)isContentFormatOverridden;
- (id)alignmentInfo;
- (bool)isAlignmentInfoOverridden;
- (void)setParent:(id)arg1;
- (void)setFill:(id)arg1;
- (bool)isFillOverridden;
- (bool)isFontOverridden;
- (id)parent;

@end
