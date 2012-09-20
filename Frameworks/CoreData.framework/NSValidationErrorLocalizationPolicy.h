/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSBundle, NSString, NSDictionary, NSURL;

@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying> {
    NSURL *_url;
    NSBundle *_localizationBundle;
    NSString *_modelStringsFileName;
    NSDictionary *_localizationDictionary;
    BOOL _hasSetLocalizationDictionary;
}


- (id)initWithURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)_localizedPropertyNameForProperty:(id)arg1 entity:(id)arg2;
- (id)_cachedObjectForKey:(id)arg1 value:(void*)arg2;
- (id)_localizedStringForKey:(id)arg1 value:(void*)arg2;
- (void)_ensureLocalizationDictionaryIsInitialized;
- (void)setLocalizationDictionary:(id)arg1;
- (id)localizationDictionary;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (id)localizedModelStringForKey:(id)arg1;
- (id)localizedPropertyNameForProperty:(id)arg1;
- (id)localizedEntityNameForEntity:(id)arg1;

@end
