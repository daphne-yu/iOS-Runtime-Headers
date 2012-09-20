/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPresetPattern : OADPattern  {
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)presetPatternHeader;
+ (id)namedBitmapDataForPresetPatternType:(int)arg1;
+ (id)nameForPresetPatternType:(int)arg1;
+ (id)defaultProperties;

- (int)type;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setType:(int)arg1;
- (BOOL)isTypeOverridden;
- (id)initWithDefaults;

@end
