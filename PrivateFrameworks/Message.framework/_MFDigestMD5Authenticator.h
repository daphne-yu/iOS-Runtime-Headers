/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData;

@interface _MFDigestMD5Authenticator : MFSASLAuthenticator  {
    unsigned int _maxbuf : 16;
    unsigned int _securityLevel : 2;
    NSData *_expectedResponse;
    void *_cryptInfo;
}


- (void)dealloc;
- (void)setExpectedResponse:(id)arg1;
- (void)setCryptInfo:(void*)arg1;
- (void)setMaxBuffer:(unsigned int)arg1;
- (int)securityLevel;
- (void)setSecurityLevel:(int)arg1;
- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(int)arg1;

@end
