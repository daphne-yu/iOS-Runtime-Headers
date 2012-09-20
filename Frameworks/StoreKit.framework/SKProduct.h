/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSDecimalNumber, NSLocale, NSString, NSArray;

@interface SKProduct : NSObject  {
    id _internal;
}

@property(readonly) NSString * localizedDescription;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSDecimalNumber * price;
@property(readonly) NSLocale * priceLocale;
@property(readonly) NSString * productIdentifier;
@property(getter=isDownloadable,readonly) BOOL downloadable;
@property(readonly) NSArray * downloadContentLengths;
@property(readonly) NSString * downloadContentVersion;
@property(getter=_localeIdentifier,setter=_setLocaleIdentifier:,copy) NSString * _localeIdentifier;


- (id)localizedTitle;
- (BOOL)isDownloadable;
- (id)price;
- (void)dealloc;
- (id)init;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)localizedDescription;
- (void)_setProductIdentifier:(id)arg1;
- (void)_setPriceLocale:(id)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setLocalizedTitle:(id)arg1;
- (void)_setLocalizedDescription:(id)arg1;
- (void)_setLocaleIdentifier:(id)arg1;
- (void)_setDownloadable:(BOOL)arg1;
- (void)_setDownloadContentLengths:(id)arg1;
- (void)_setContentVersion:(id)arg1;
- (id)_localeIdentifier;
- (id)priceLocale;
- (id)downloadContentVersion;
- (id)downloadContentLengths;
- (id)productIdentifier;

@end
