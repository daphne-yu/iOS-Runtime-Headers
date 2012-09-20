/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSRegularExpression, NSArray;

@interface NSComplexRegularExpressionCheckingResult : NSRegularExpressionCheckingResult  {
    NSRegularExpression *_regularExpression;
    NSArray *_rangeArray;
}


- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
- (id)rangeArray;
- (id)initWithRanges:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 count:(unsigned int)arg2 regularExpression:(id)arg3;
- (id)regularExpression;
- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (unsigned int)numberOfRanges;

@end
