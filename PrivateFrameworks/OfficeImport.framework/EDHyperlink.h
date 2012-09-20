/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDReference, EDString;

@interface EDHyperlink : NSObject  {
    EDString *mPath;
    EDString *mDosPath;
    EDString *mDescriptionText;
    EDString *mTextMark;
    EDString *mToolTip;
    EDReference *mReference;
    int mType;
}

+ (id)hyperlink;

- (id)path;
- (int)type;
- (void)dealloc;
- (void)setPath:(id)arg1;
- (void)setType:(int)arg1;
- (id)toolTip;
- (id)textMark;
- (id)dosPath;
- (id)descriptionText;
- (void)setToolTip:(id)arg1;
- (void)setReference:(id)arg1;
- (void)setTextMark:(id)arg1;
- (void)setDosPath:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (id)reference;

@end
