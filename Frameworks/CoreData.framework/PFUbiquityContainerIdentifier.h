/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, PFUbiquityLocation;

@interface PFUbiquityContainerIdentifier : NSObject  {
    NSString *_storeName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_uuidString;
    PFUbiquityLocation *_uuidFileLocation;
    BOOL _usedExistingUUIDFile;
}

@property(readonly) NSString * uuidString;
@property(readonly) PFUbiquityLocation * uuidFileLocation;
@property(readonly) BOOL usedExistingUUIDFile;


- (void)dealloc;
- (id)init;
- (id)uuidFileLocation;
- (BOOL)writeToDisk:(id*)arg1;
- (void)setUUIDStringFromLocation:(id)arg1;
- (BOOL)replaceIdentifierWithUUID:(id)arg1 error:(id*)arg2;
- (id)uuidString;
- (BOOL)usedExistingUUIDFile;
- (BOOL)identifyContainer:(id*)arg1;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;

@end
