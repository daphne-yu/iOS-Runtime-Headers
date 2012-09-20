/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSAuthenticationContext, ISDialog, NSNumber, NSURL;

@interface ISServerAuthenticationOperation : ISOperation  {
    NSNumber *_authenticatedAccountDSID;
    SSAuthenticationContext *_authenticationContext;
    ISDialog *_dialog;
    NSURL *_redirectURL;
}

@property(retain) SSAuthenticationContext * authenticationContext;
@property(retain) ISDialog * dialog;
@property(retain) NSNumber * authenticatedAccountDSID;
@property(retain) NSURL * redirectURL;


- (id)redirectURL;
- (id)dialog;
- (id)authenticatedAccountDSID;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (void)dealloc;
- (void)run;
- (BOOL)_handleSelectedButton:(id)arg1;
- (BOOL)_copyAccountIdentifier:(id*)arg1 returningError:(id*)arg2;
- (BOOL)_shouldAuthenticateForButton:(id)arg1;
- (BOOL)_copySelectedButton:(id*)arg1 returningError:(id*)arg2;
- (id)_copyButtonForDialogSkip;
- (void)setDialog:(id)arg1;
- (void)setAuthenticatedAccountDSID:(id)arg1;
- (id)_copyAuthenticationContext;
- (void)setRedirectURL:(id)arg1;

@end
