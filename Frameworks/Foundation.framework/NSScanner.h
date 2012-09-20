/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSScanner : NSObject <NSCopying> {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)scannerWithString:(id)arg1;
+ (id)localizedScannerWithString:(id)arg1;

- (BOOL)scanUpToString:(id)arg1 intoString:(id*)arg2;
- (id)initWithString:(id)arg1;
- (id)string;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)scanInt:(int*)arg1;
- (BOOL)scanString:(id)arg1 intoString:(id*)arg2;
- (BOOL)scanUpToCharactersFromSet:(id)arg1 intoString:(id*)arg2;
- (id)locale;
- (void)setLocale:(id)arg1;
- (BOOL)scanDecimal:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; }*)arg1;
- (BOOL)scanInteger:(int*)arg1;
- (BOOL)scanLongLong:(long long*)arg1;
- (BOOL)scanHexFloat:(float*)arg1;
- (BOOL)scanHexDouble:(double*)arg1;
- (BOOL)scanFloat:(float*)arg1;
- (BOOL)scanDouble:(double*)arg1;
- (id)_invertedSkipSet;
- (BOOL)scanHexLongLong:(unsigned long long*)arg1;
- (void)setCaseSensitive:(BOOL)arg1;
- (BOOL)caseSensitive;
- (id)charactersToBeSkipped;
- (BOOL)_scanDecimal:(unsigned int)arg1 into:(int*)arg2;
- (id)_remainingString;
- (BOOL)scanHexInt:(unsigned int*)arg1;
- (void)setScanLocation:(unsigned int)arg1;
- (unsigned int)scanLocation;
- (BOOL)scanCharactersFromSet:(id)arg1 intoString:(id*)arg2;
- (BOOL)isAtEnd;
- (void)setCharactersToBeSkipped:(id)arg1;
- (id)mf_nextTokenWithPunctuation:(struct __CFCharacterSet { }*)arg1;
- (BOOL)mf_scanUpAndOverString:(id)arg1;
- (id)mf_remainingString;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfFirstMatchWithRegularExpression:(id)arg1;
- (BOOL)mf_scanUpToRegularExpression:(id)arg1;

@end
