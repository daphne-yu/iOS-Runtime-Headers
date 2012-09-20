/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDResources;

@interface EDColorReference : NSObject <NSCopying> {
    EDResources *mResources;
    int mSystemColorID;
    unsigned int mColorIndex;
    unsigned int mThemeIndex;
    double mTint;
}

+ (id)colorReferenceWithXlThemeIndex:(unsigned int)arg1 tint:(double)arg2 resources:(id)arg3;
+ (id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2;
+ (id)colorReferenceWithColor:(id)arg1 resources:(id)arg2;
+ (id)colorReferenceWithResources:(id)arg1;
+ (id)colorReferenceWithColorIndex:(unsigned int)arg1 resources:(id)arg2;

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)tint;
- (id)color;
- (bool)isValid;
- (unsigned int)themeIndex;
- (unsigned int)colorIndex;
- (int)systemColorID;
- (BOOL)isEqualToColorReference:(id)arg1;
- (id)initWithColor:(id)arg1 resources:(id)arg2;
- (id)initWithResources:(id)arg1;

@end
