/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSString;

@interface MZKeyValueStoreAuthenticationController : NSObject  {
    NSString *_acceptedDSIDUserDefaultsKey;
    NSString *_acceptedDSIDTextUserDefaultsKey;
    BOOL _shouldAuthenticate;
}

@property(copy) NSString * acceptedDSIDUserDefaultsKey;
@property(copy) NSString * acceptedDSIDTextUserDefaultsKey;
@property BOOL shouldAuthenticate;
@property(readonly) NSString * DSID;
@property(readonly) NSString * DSIDText;
@property(retain) NSString * acceptedDSID;
@property(retain) NSString * acceptedDSIDText;


- (void)setAcceptedDSIDTextUserDefaultsKey:(id)arg1;
- (void)setAcceptedDSIDUserDefaultsKey:(id)arg1;
- (id)acceptedDSIDTextUserDefaultsKey;
- (id)acceptedDSIDUserDefaultsKey;
- (id)acceptedDSIDText;
- (id)DSIDText;
- (id)authenticationErrorsForTransaction:(id)arg1;
- (BOOL)shouldForceAuthenticationForTransaction:(id)arg1;
- (id)acceptedDSID;
- (void)resetAcceptedCredentials;
- (BOOL)isAuthenticationValidForTransaction:(id)arg1 error:(id*)arg2;
- (id)DSID;
- (void)setShouldAuthenticate:(BOOL)arg1;
- (BOOL)shouldAuthenticate;
- (void)dealloc;
- (id)init;

@end
