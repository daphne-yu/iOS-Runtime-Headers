/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray, NSArray;

@interface ABMultiCellContentView_Address : ABMultiCellContentView_DisplayAlternate  {
    NSArray *_lineInfos;
    NSMutableArray *_lineSubviews;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _streetRange;
    unsigned int _entryFieldIndexOfFirstStreetField;
    NSMutableArray *_verticalDividers;
}

+ (unsigned int)rowsForPropertyGroup:(id)arg1 info:(id)arg2;
+ (int)calculateStreetRowsForText:(id)arg1;
+ (id)streetTextForPropertyGroup:(id)arg1 info:(id)arg2;
+ (id)lineInfosForPropertyGroup:(id)arg1 info:(id)arg2;
+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;

- (void)dealloc;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)reload;
- (void)removeStreetFieldAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)addStreetFieldAnimated:(BOOL)arg1;
- (id)streetFieldAtLineIndex:(unsigned int)arg1;
- (unsigned int)lineIndexOfStreetField:(id)arg1;
- (id)propertyKeyForTag:(int)arg1;
- (void)removeTextFieldAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (int)tagForPropertyKey:(id)arg1;
- (void)setPropertyGroupInfo:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (id)pickerView;
- (void)reloadFromModel;

@end
