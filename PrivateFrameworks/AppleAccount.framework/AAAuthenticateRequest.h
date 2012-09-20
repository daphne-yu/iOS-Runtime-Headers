/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString, AAAccount;

@interface AAAuthenticateRequest : AARequest  {
    NSString *_username;
    NSString *_password;
    AAAccount *_account;
}

@property(copy) NSString * username;
@property(copy) NSString * password;
@property(copy) AAAccount * account;

+ (Class)responseClass;

- (void)setPassword:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
- (id)password;
- (id)urlString;
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;
- (id)urlCredential;
- (id)urlRequest;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (void)setAccount:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)account;

@end
