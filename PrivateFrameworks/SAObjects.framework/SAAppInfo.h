/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, NSDictionary;

@interface SAAppInfo : SADomainObject  {
}

@property(copy) NSString * appId;
@property(copy) NSString * appName;
@property(copy) NSDictionary * appNameMap;
@property(copy) NSString * appVersion;
@property(copy) NSString * displayAppName;
@property(copy) NSDictionary * displayAppNameMap;
@property(copy) NSString * providerName;
@property(copy) NSString * spotlightName;
@property(copy) NSDictionary * spotlightNameMap;
@property(copy) NSArray * supportedCommands;
@property(copy) NSArray * supportedSchemes;

+ (id)appInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appInfo;

- (id)groupIdentifier;
- (void)setAppName:(id)arg1;
- (id)appName;
- (id)providerName;
- (void)setSupportedSchemes:(id)arg1;
- (id)supportedSchemes;
- (void)setSupportedCommands:(id)arg1;
- (id)supportedCommands;
- (void)setSpotlightNameMap:(id)arg1;
- (id)spotlightNameMap;
- (void)setSpotlightName:(id)arg1;
- (id)spotlightName;
- (void)setProviderName:(id)arg1;
- (void)setDisplayAppNameMap:(id)arg1;
- (id)displayAppNameMap;
- (void)setDisplayAppName:(id)arg1;
- (id)displayAppName;
- (void)setAppVersion:(id)arg1;
- (id)appVersion;
- (void)setAppNameMap:(id)arg1;
- (id)appNameMap;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (void)setAppId:(id)arg1;
- (id)appId;
- (id)encodedClassName;

@end
