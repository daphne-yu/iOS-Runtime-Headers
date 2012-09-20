/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol, AccountSettingsUIAccount> {
}

+ (id)tetheredSourceForDataClass:(id)arg1;
+ (BOOL)isTetheredSyncingDataclass:(id)arg1;
+ (id)localizedReferenceToSyncSourceStringForDataClass:(id)arg1;
+ (id)localizedSyncSourceStringForDataClass:(id)arg1 forBeginningOfSentence:(BOOL)arg2;
+ (id)accountWithBasicAccount:(id)arg1;
+ (id)basicAccountProperties;
+ (id)_identifier;
+ (id)typeString;
+ (void*)createSyncDataSourceForDataclass:(id)arg1 options:(id)arg2;
+ (id)displayedShortAccountTypeString;
+ (id)displayedAccountTypeString;

- (id)identifier;
- (id)displayName;
- (id)syncStoreIdentifier;
- (BOOL)supportsPush;
- (void)deleteLocalDataSourceForDataclass:(id)arg1;
- (void)setTetheredEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)showLocalStoreIfAppropriateForDataclass:(id)arg1;
- (void)hideLocalStoreForDataclass:(id)arg1;
- (BOOL)otherAccountEnabledForDataclass:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (id)uniqueId;
- (void)_saveChangesToOnMyDeviceAccount;
- (BOOL)_deleteDataSourceForDataclass:(id)arg1;
- (BOOL)_setTetheredDataSourceEnabled:(BOOL)arg1 forDataclass:(id)arg2;

@end
