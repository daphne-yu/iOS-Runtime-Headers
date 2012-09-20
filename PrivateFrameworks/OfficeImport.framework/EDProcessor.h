/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDResources, NSMutableArray, EDWorkbook;

@interface EDProcessor : NSObject  {
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    NSMutableArray *mObjects;
}


- (void)dealloc;
- (void)applyProcessorWithSheet:(id)arg1;
- (void)markObjectForPostProcessing:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (bool)isObjectSupported:(id)arg1;
- (id)initWithWorkbook:(id)arg1;

@end
