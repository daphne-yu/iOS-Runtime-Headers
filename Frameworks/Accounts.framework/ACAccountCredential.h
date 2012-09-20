/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@class NSDate, NSMutableDictionary, NSString;

@interface ACAccountCredential : NSObject  {
    NSMutableDictionary *_credentialItems;
    NSString *_credentialType;
}

@property(copy) NSString * oauthToken;
@property(copy) NSString * oauthTokenSecret;
@property(copy) NSString * password;
@property(copy) NSString * credentialType;
@property(copy) NSString * oauthRefreshToken;
@property(retain) NSDate * expiryDate;
@property(copy) NSString * appleidFacetimeToken;
@property(copy) NSString * appleidMadridToken;
@property(copy) NSString * appleidiCloudToken;
@property(copy) NSString * appleidGameCenterToken;

+ (id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
+ (id)keysForType:(id)arg1;
+ (id)nonPersistentCredentialItemsForType:(id)arg1;
+ (id)credentialWithPassword:(id)arg1;

- (id)oauthToken;
- (void)setPassword:(id)arg1;
- (id)appleidGameCenterToken;
- (id)oauthRefreshToken;
- (id)initWithOAuth2Token:(id)arg1 refreshToken:(id)arg2 expiryDate:(id)arg3;
- (id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
- (void)setExpiryDate:(id)arg1;
- (void)setOauthRefreshToken:(id)arg1;
- (id)credentialItems;
- (unsigned int)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)expiryDate;
- (id)password;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)credentialType;
- (void)setOauthTokenSecret:(id)arg1;
- (id)oauthTokenSecret;
- (void)setOauthToken:(id)arg1;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (void)setCredentialType:(id)arg1;
- (id)credentialItemForKey:(id)arg1;
- (id)keysForCredentialItems;
- (void)setAppleidGameCenterToken:(id)arg1;
- (void)setAppleidiCloudToken:(id)arg1;
- (id)appleidiCloudToken;
- (id)initWithAppleIDiCloudToken:(id)arg1 facetimeToken:(id)arg2 madridToken:(id)arg3 gamecenterToken:(id)arg4;
- (void)setAppleidFacetimeToken:(id)arg1;
- (void)setAppleidMadridToken:(id)arg1;
- (id)appleidFacetimeToken;
- (id)appleidMadridToken;
- (id)initWithPassword:(id)arg1;

@end
