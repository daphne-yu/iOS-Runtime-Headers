/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSURL, NSString, StockChartData;

@interface Stock : NSObject  {
    NSString *symbol;
    NSString *companyName;
    NSString *shortCompanyName;
    NSString *exchange;
    NSString *realtimeTimestamp;
    NSString *realtimePrice;
    NSString *realtimeChange;
    NSString *nonRealtimePrice;
    NSString *nonRealtimeChange;
    NSString *open;
    NSString *high;
    NSString *low;
    NSString *yearHigh;
    NSString *yearLow;
    NSString *volume;
    NSString *averageVolume;
    NSString *marketcap;
    NSString *peRatio;
    NSString *dividendYield;
    NSURL *infoURL;
    BOOL _marketIsOpen;
    unsigned int pricePrecision;
    double timeQuoteLastUpdated;
    double timeMetadataLastUpdated;
    StockChartData *_chartDataArray[9];
}

@property(retain) NSString * symbol;
@property(retain) NSString * companyName;
@property(retain) NSString * shortCompanyName;
@property(retain) NSString * exchange;
@property(retain) NSString * realtimeTimestamp;
@property(retain) NSString * realtimePrice;
@property(retain) NSString * realtimeChange;
@property(retain) NSString * nonRealtimePrice;
@property(retain) NSString * nonRealtimeChange;
@property(readonly) NSString * price;
@property(readonly) NSString * change;
@property(retain) NSString * open;
@property(retain) NSString * high;
@property(retain) NSString * low;
@property(retain) NSString * yearHigh;
@property(retain) NSString * yearLow;
@property(retain) NSString * volume;
@property(retain) NSString * averageVolume;
@property(retain) NSString * marketcap;
@property(retain) NSString * peRatio;
@property(retain) NSString * dividendYield;
@property(readonly) unsigned int pricePrecision;
@property(retain) NSURL * infoURL;
@property double timeQuoteLastUpdated;
@property double timeMetadataLastUpdated;

+ (void)resetLocale;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1;
+ (BOOL)localeUsesASCIIDigits;
+ (id)formattedStringForString:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3;
+ (id)urlForStock:(id)arg1;
+ (id)_potentiallyAbsentKeys;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 fractionDigits:(unsigned int)arg2;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3;
+ (id)postfixCharacterForEngineeringMagnitude:(unsigned int)arg1;
+ (id)BlankValueString;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4;

- (id)infoURL;
- (void)setInfoURL:(id)arg1;
- (id)price;
- (id)description;
- (unsigned int)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)change;
- (id)symbol;
- (void)setSymbol:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)resetLocale;
- (id)archiveDictionary;
- (void)setOpen:(id)arg1;
- (id)open;
- (void)setVolume:(id)arg1;
- (id)volume;
- (void)setTimeMetadataLastUpdated:(double)arg1;
- (double)timeMetadataLastUpdated;
- (void)setTimeQuoteLastUpdated:(double)arg1;
- (double)timeQuoteLastUpdated;
- (unsigned int)pricePrecision;
- (id)marketcap;
- (id)averageVolume;
- (id)yearLow;
- (id)yearHigh;
- (id)nonRealtimeChange;
- (id)nonRealtimePrice;
- (id)realtimeChange;
- (id)realtimePrice;
- (id)realtimeTimestamp;
- (void)updateMetadataWithDictionary:(id)arg1 forTime:(double)arg2;
- (void)updateQuoteWithDictionary:(id)arg1 forTime:(double)arg2;
- (void)clearCachedGraphImageSets;
- (id)chartDataForInterval:(int)arg1;
- (BOOL)changeIsZero;
- (BOOL)changeIsNegative;
- (BOOL)isIndex;
- (float)changeFloatPercent:(BOOL)arg1;
- (id)formattedChangePercent:(BOOL)arg1;
- (BOOL)priceIsRealtime;
- (BOOL)marketIsOpen;
- (void)setChartData:(id)arg1 forInterval:(int)arg2;
- (void)populateFromDictionary:(id)arg1;
- (void)_updatePricePrecision;
- (void)setNonRealtimeChange:(id)arg1;
- (void)setNonRealtimePrice:(id)arg1;
- (void)setRealtimeChange:(id)arg1;
- (void)setRealtimePrice:(id)arg1;
- (void)setRealtimeTimestamp:(id)arg1;
- (void)setMarketcap:(id)arg1;
- (void)setAverageVolume:(id)arg1;
- (void)setYearLow:(id)arg1;
- (void)setYearHigh:(id)arg1;
- (id)formattedPrice;
- (void)setShortCompanyName:(id)arg1;
- (id)shortCompanyName;
- (id)listName;
- (void)setPeRatio:(id)arg1;
- (id)peRatio;
- (void)setLow:(id)arg1;
- (id)low;
- (void)setHigh:(id)arg1;
- (id)high;
- (void)setExchange:(id)arg1;
- (id)exchange;
- (void)setDividendYield:(id)arg1;
- (id)dividendYield;
- (id)companyName;
- (void)setCompanyName:(id)arg1;

@end
