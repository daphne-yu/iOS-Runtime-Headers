/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor;

@interface OADSolidFill : OADFill  {
    OADColor *mColor;
    BOOL mIsColorOverridden;
}

+ (id)whiteFill;
+ (id)defaultProperties;
+ (id)blackFill;

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)color;
- (void)setColor:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (id)initWithDefaults;
- (BOOL)isColorOverridden;

@end
