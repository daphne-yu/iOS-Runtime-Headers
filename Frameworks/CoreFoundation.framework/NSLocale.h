/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSLocale : NSObject <NSCopying, NSSecureCoding> {
}

+ (id)currentLocale;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;
+ (id)preferredLanguages;
+ (id)localeIdentifierFromComponents:(id)arg1;
+ (id)internetServicesRegion;
+ (unsigned int)lineDirectionForLanguage:(id)arg1;
+ (unsigned int)characterDirectionForLanguage:(id)arg1;
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg1;
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;
+ (id)canonicalLocaleIdentifierFromString:(id)arg1;
+ (id)commonISOCurrencyCodes;
+ (id)ISOCurrencyCodes;
+ (id)ISOCountryCodes;
+ (id)ISOLanguageCodes;
+ (id)availableLocaleIdentifiers;
+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)systemLocale;
+ (BOOL)supportsSecureCoding;
+ (id)autoupdatingCurrentLocale;
+ (id)currentDeviceLanguageForFacebook;

- (id)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)localeIdentifier;
- (id)initWithLocaleIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (unsigned long)_cfTypeID;
- (id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2;
- (id)_prefs;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
