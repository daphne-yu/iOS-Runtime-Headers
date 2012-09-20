/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFSMTPConnection, NSTimer;

@interface SMTPAccount : DeliveryAccount  {
    Class _deliveryClass;
    MFSMTPConnection *_connection;
    NSTimer *_timer;
    long _lastTimerSetTime;
    unsigned int _supportsPipelining : 1;
    unsigned int _supportsOutboxCopy : 1;
    unsigned int _useCellDataOnly : 1;
}

+ (void)registerAppleServiceDeliveryHostname:(id)arg1;
+ (id)newDefaultInstance;
+ (id)saslProfileName;
+ (void*)keychainProtocol;
+ (id)accountTypeString;
+ (id)displayedShortAccountTypeString;
+ (id)displayedAccountTypeString;

- (void)dealloc;
- (id)serviceName;
- (id)customAuthenticationErrorStringForError:(id)arg1 authScheme:(id)arg2;
- (void)setDeliveryClass:(Class)arg1;
- (BOOL)_isAppleServiceDeliveryHostname:(id)arg1;
- (void)setTimer;
- (void)connectionExpired:(id)arg1;
- (void)disconnect:(id)arg1;
- (void)setSupportsPipelining:(BOOL)arg1;
- (id)connectionSettingsForAuthentication:(BOOL)arg1 secure:(id)arg2 insecure:(id)arg3;
- (id)_defaultSettingsWithPort:(unsigned int)arg1 useSSL:(BOOL)arg2 directSSL:(BOOL)arg3;
- (BOOL)supportsPipelining;
- (void)checkInConnection:(id)arg1;
- (void)setSupportsOutboxCopy:(BOOL)arg1;
- (id)authenticatedConnection:(BOOL)arg1;
- (BOOL)supportsOutboxCopy;
- (BOOL)canBeFallbackAccount;
- (Class)deliveryClass;
- (id)secureConnectionSettings;
- (id)insecureConnectionSettings;
- (id)alternateConnectionSettings;
- (void)setPreferredAuthScheme:(id)arg1;
- (void)releaseAllForcedConnections;
- (BOOL)isCommonPortNumber:(unsigned int)arg1;
- (unsigned int)keychainPortNumber;
- (struct __CFString { }*)connectionServiceType;
- (id)certUIService;
- (Class)connectionClass;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (unsigned int)defaultPortNumber;
- (id)preferredAuthScheme;
- (id)passwordFromKeychain;
- (void)setPasswordInKeychain:(id)arg1;
- (void)releaseAllConnections;

@end
