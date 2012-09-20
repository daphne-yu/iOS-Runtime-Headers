/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDProtection, EDContentFormat, EDBorders, EDAlignmentInfo, EDFont, EDFill;

@interface EDDifferentialStyle : NSObject <NSCopying> {
    EDAlignmentInfo *mAlignmentInfo;
    EDBorders *mBorders;
    EDFill *mFill;
    EDFont *mFont;
    EDProtection *mProtection;
    EDContentFormat *mContentFormat;
}

+ (id)differentialStyle;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)font;
- (void)setFont:(id)arg1;
- (id)fill;
- (id)protection;
- (void)setProtection:(id)arg1;
- (void)setBorders:(id)arg1;
- (void)setAlignmentInfo:(id)arg1;
- (void)setContentFormat:(id)arg1;
- (id)borders;
- (id)contentFormat;
- (id)alignmentInfo;
- (void)setFill:(id)arg1;

@end
