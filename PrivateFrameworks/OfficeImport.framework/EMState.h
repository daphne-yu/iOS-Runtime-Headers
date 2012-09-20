/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDSheet, EDWorkbook;

@interface EMState : CMState  {
    EDWorkbook *_workbook;
    EDSheet *_currentSheet;
}

@property(retain) EDWorkbook * workbook;
@property EDSheet * currentSheet;


- (void)dealloc;
- (void)setCurrentSheet:(id)arg1;
- (void)setWorkbook:(id)arg1;
- (id)currentSheet;
- (id)workbook;

@end
