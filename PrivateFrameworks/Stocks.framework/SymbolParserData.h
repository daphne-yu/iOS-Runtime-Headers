/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSString, NSMutableDictionary, NSMutableArray;

@interface SymbolParserData : NSObject  {
    int state;
    NSMutableDictionary *dictionary;
    NSMutableArray *symbols;
    NSString *bufferString;
}

@property(retain) NSMutableDictionary * dictionary;
@property(retain) NSMutableArray * symbols;
@property(retain) NSString * bufferString;


- (id)dictionary;
- (void).cxx_destruct;
- (id)symbols;
- (void)setSymbols:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setBufferString:(id)arg1;
- (id)bufferString;

@end
