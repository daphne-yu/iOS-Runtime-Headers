/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDAuthenticationPluginManager, ACDDatabase, NSMutableArray, ACDAccessPluginManager, ACDClient, <ACDAccountStoreDelegate>, ACDAccountNotifier, ACDClientAuthorizationManager;

@interface ACDAccountStore : NSObject <ACDAccountStoreProtocol, XPCProxyTarget> {
    ACDClient *_client;
    ACDDatabase *_database;
    <ACDAccountStoreDelegate> *_delegate;
    ACDAuthenticationPluginManager *_authenticationPluginManager;
    ACDAccessPluginManager *_accessPluginManager;
    ACDAccountNotifier *_accountNotifier;
    ACDClientAuthorizationManager *_authorizationManager;
    NSMutableArray *_accountChanges;
    BOOL _notificationsEnabled;
}

@property <ACDAccountStoreDelegate> * delegate;
@property(retain) ACDClient * client;
@property(readonly) ACDClientAuthorizationManager * authorizationManager;
@property(readonly) ACDDatabase * database;
@property(retain) ACDAuthenticationPluginManager * authenticationPluginManager;
@property(retain) ACDAccessPluginManager * accessPluginManager;
@property BOOL notificationsEnabled;

+ (id)_whiteList;

- (id)_save;
- (void)setClient:(id)arg1;
- (id)accountTypeWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (id)database;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (BOOL)notificationsEnabled;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (id)authorizationManager;
- (void)setAccessPluginManager:(id)arg1;
- (id)accessPluginManager;
- (void)setAuthenticationPluginManager:(id)arg1;
- (id)authenticationPluginManager;
- (id)masterCredentialForAccountIdentifier:(id)arg1;
- (void)performSanityCheckOnDatabase:(id)arg1;
- (id)addAccountNoSave:(id)arg1 error:(id*)arg2;
- (BOOL)accountsExistWithAccountTypeIdentifier:(id)arg1;
- (id)accountsWithAccountTypeIdentifier:(id)arg1 checkEntitlement:(BOOL)arg2;
- (id)initWithClient:(id)arg1 database:(id)arg2;
- (void)accessKeysForAccountType:(id)arg1 handler:(id)arg2;
- (void)setClientBundleID:(id)arg1 withHandler:(id)arg2;
- (void)promptUserForCredentialsWithAccount:(id)arg1 withHandler:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 withHandler:(id)arg2;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)typeIdentifierForDomain:(id)arg1 withHandler:(id)arg2;
- (void)permissionForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(id)arg4;
- (void)appPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)setNotificationsEnabledNum:(id)arg1;
- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(id)arg3;
- (void)insertAccountDataclass:(id)arg1 withHandler:(id)arg2;
- (void)removeAccountType:(id)arg1 withHandler:(id)arg2;
- (void)insertAccountType:(id)arg1 withHandler:(id)arg2;
- (void)removeAccount:(id)arg1 withHandler:(id)arg2;
- (void)saveAccount:(id)arg1 withHandler:(id)arg2;
- (void)dataclassesWithHandler:(id)arg1;
- (void)propertiesForDataclassWithName:(id)arg1 accountIdentifier:(id)arg2 handler:(id)arg3;
- (void)syncableDataclassesForAccountType:(id)arg1 handler:(id)arg2;
- (void)supportedDataclassesForAccountType:(id)arg1 handler:(id)arg2;
- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(id)arg2;
- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)credentialForAccountWithIdentifier:(id)arg1 bundleID:(id)arg2 handler:(id)arg3;
- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)accountTypeForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)accountTypeWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)accountTypesWithHandler:(id)arg1;
- (void)accountsWithHandler:(id)arg1;
- (void)accountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(id)arg3;
- (id)_handleAccountAdd:(id)arg1 forPID:(id)arg2;
- (id)_handleAccountMod:(id)arg1;
- (BOOL)_canSaveAccount:(id)arg1;
- (void)saveAccount:(id)arg1 forPID:(id)arg2 withHandler:(id)arg3;
- (id)_removeAccountNoSave:(id)arg1;
- (void)_accountsWithAccountType:(id)arg1 checkEntitlement:(BOOL)arg2 handler:(id)arg3;
- (id)_currentBundleIDForPID:(id)arg1;
- (BOOL)_callerWithPID:(id)arg1 hasPermissionToAddAccount:(id)arg2;
- (id)_updateAccountNoSave:(id)arg1 error:(id*)arg2;
- (void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)accountsWithAccountType:(id)arg1 handler:(id)arg2;
- (id)_displayAccountForAccount:(id)arg1;
- (BOOL)_isClientPermittedToAccessAccountType:(id)arg1;
- (BOOL)_accessGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;
- (BOOL)_accessGrantedForClient:(id)arg1 onAccountType:(id)arg2;
- (void)_setAccountManagedObjectRelationships:(id)arg1 withAccount:(id)arg2 isNew:(BOOL)arg3;
- (id)_addAccountNoSave:(id)arg1 error:(id*)arg2;
- (void)_noteAccountStoreDidSaveAccountsWithAccountTypeIdentifiers:(id)arg1;
- (BOOL)_isClientPermittedToRemoveAccount:(id)arg1;
- (id)_accountWithIdentifier:(id)arg1;
- (BOOL)_isClientPermittedToAccessAccount:(id)arg1;
- (id)_accountTypeWithIdentifier:(id)arg1;
- (id)_dataclassWithName:(id)arg1;
- (id)client;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(id)arg2;

@end
