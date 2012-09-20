/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDChartSheet;

@interface EMChartsheetMapper : EMSheetMapper  {
    EDChartSheet *mChartSheet;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBox;
}


- (id).cxx_construct;
- (int)width;
- (int)preprocessHeightWithState:(id)arg1;
- (int)preprocessWidthWithState:(id)arg1;
- (id)initWithChartSheet:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
