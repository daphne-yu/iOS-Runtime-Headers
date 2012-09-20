/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class Account, AuthScheme, Connection;

@interface MFSASLAuthenticator : NSObject  {
    Connection *_connection;
    AuthScheme *_authScheme;
    Account *_account;
    int _authenticationState;
}


- (void)dealloc;
- (void)setMissingPasswordError;
- (BOOL)couldRetry;
- (BOOL)isUsingSSL;
- (id)securityLayer;
- (BOOL)supportsInitialClientResponse;
- (id)authScheme;
- (id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;
- (int)authenticationState;
- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(int)arg1;
- (BOOL)base64EncodeResponseData;
- (id)saslName;
- (id)account;

@end
