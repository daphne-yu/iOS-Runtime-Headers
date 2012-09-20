/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class LSApplicationProxy, NSArray, NSString, NSUUID, NSDictionary, NSURL;

@interface LSApplicationProxy : LSResourceProxy  {
    unsigned int _flags;
    unsigned int _bundleFlags;
    NSArray *_privateDocumentIconNames;
    LSApplicationProxy *_privateDocumentTypeOwner;
    NSURL *_bundleURL;
    NSString *_vendorID;
    NSString *_bundleVersion;
    NSString *_shortVersionString;
    NSString *_applicationType;
    NSString *_signerIdentity;
    NSDictionary *_entitlements;
    NSDictionary *_environmentVariables;
    NSArray *_directionsModes;
}

@property(readonly) NSString * applicationIdentifier;
@property(readonly) NSString * roleIdentifier;
@property(readonly) NSURL * bundleURL;
@property(readonly) NSURL * containerURL;
@property(readonly) NSString * vendorID;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSString * shortVersionString;
@property(readonly) NSString * applicationType;
@property(readonly) NSString * signerIdentity;
@property(readonly) BOOL profileValidated;
@property(readonly) NSDictionary * entitlements;
@property(readonly) NSDictionary * environmentVariables;
@property(readonly) NSArray * directionsModes;
@property(readonly) NSUUID * deviceIdentifierForVendor;

+ (id)applicationProxyForIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1 roleIdentifier:(id)arg2;

- (id)bundleVersion;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)containerURL;
- (id)deviceIdentifierForVendor;
- (id)localizedName;
- (id)bundleURL;
- (id)applicationIdentifier;
- (void)setPrivateDocumentTypeOwner:(id)arg1;
- (id)privateDocumentTypeOwner;
- (void)setPrivateDocumentIconAllowOverride:(BOOL)arg1;
- (void)setPrivateDocumentIconNames:(id)arg1;
- (id)directionsModes;
- (id)environmentVariables;
- (id)entitlements;
- (BOOL)profileValidated;
- (id)signerIdentity;
- (id)applicationType;
- (id)shortVersionString;
- (id)vendorID;
- (id)roleIdentifier;
- (id)_plistValueForKey:(id)arg1;
- (id)_initWithApplicationIdentifier:(id)arg1 name:(id)arg2 containerURL:(id)arg3 resourcesDirectoryURL:(id)arg4 iconsDictionary:(id)arg5 iconFileNames:(id)arg6 iconIsPrerendered:(BOOL)arg7;
- (id)privateDocumentIconNames;
- (id)resourcesDirectoryURL;
- (id)iconStyleDomain;
- (BOOL)privateDocumentIconAllowOverride;
- (struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;
- (struct CGSize { float x1; float x2; })_defaultStyleSize:(id)arg1;

@end
