/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDTComputedFormatSpec;

@interface GQDTDateCell : GQDTCell  {
    struct __CFDate { } *mDate;
    GQDTComputedFormatSpec *mComputedFormat;
}


- (void)dealloc;
- (struct __CFDate { }*)date;
- (struct __CFString { }*)getDateFormat;
- (int)readAttributesForDateCell:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (struct __CFString { }*)createStringValue;

@end
