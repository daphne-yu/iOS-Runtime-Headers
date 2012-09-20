/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary, NSDictionary;

@interface MCRestrictionsPayload : MCPayload  {
    NSMutableDictionary *_restrictions;
}

@property(readonly) NSDictionary * restrictions;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (id)description;
- (void).cxx_destruct;
- (void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(BOOL)arg3;
- (id)restrictions;
- (id)_defaultMediaSettings;
- (id)_enforcedFeatureStrings;
- (id)_restrictedFeatureStrings;
- (id)subtitle1Description;
- (id)installationWarnings;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)_invalidFieldErrorWithFieldName:(id)arg1;

@end
