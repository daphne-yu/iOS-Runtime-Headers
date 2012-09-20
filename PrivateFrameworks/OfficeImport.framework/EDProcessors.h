/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, EDWorkbook;

@interface EDProcessors : NSObject  {
    EDWorkbook *mWorkbook;
    NSMutableArray *mProcessors;
}


- (void)removeAllObjects;
- (void)dealloc;
- (void)applyProcessorsWithSheet:(id)arg1;
- (void)removeProcessorClass:(Class)arg1;
- (bool)hasProcessors;
- (void)addProcessorClass:(Class)arg1;
- (id)initWithWorkbook:(id)arg1;
- (void)markObject:(id)arg1 processor:(Class)arg2;

@end
