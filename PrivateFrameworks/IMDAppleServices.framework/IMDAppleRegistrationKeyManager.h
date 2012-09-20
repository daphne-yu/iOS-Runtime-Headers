/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class IMTimer, NSString, NSRecursiveLock;

@interface IMDAppleRegistrationKeyManager : NSObject  {
    struct _SecMPFullIdentity { } *_identity;
    struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } *_privateKey;
    struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } *_publicKey;
    NSString *_signature;
    BOOL _isMigratedSignature;
    BOOL _loaded;
    BOOL _identityLoaded;
    NSRecursiveLock *_lock;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _purgeCancelBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _purgeEnqueueBlock;

    IMTimer *_purgeTimer;
}

+ (BOOL)setupKeys;
+ (id)sharedInstance;

- (struct _SecMPFullIdentity { }*)copyMessageProtectionIdentity;
- (void)_purgeMap;
- (void)_save;
- (void)_loadIfNeeded:(BOOL)arg1;
- (void)purgeMessageProtectionIdentity;
- (struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)identityPublicKey;
- (BOOL)isMigratedKeyPairSignature;
- (id)generateCSRForUserID:(id)arg1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)identityPrivateKey;
- (id)publicMessageProtectionData;
- (void)_setPurgeTimer;
- (id)keyPairSignature;
- (void)dealloc;
- (id)init;

@end
