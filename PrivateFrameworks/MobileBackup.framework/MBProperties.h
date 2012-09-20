/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSString, NSData, NSDate, NSDictionary, NSMutableDictionary;

@interface MBProperties : NSObject  {
    NSMutableDictionary *_plist;
    BOOL _protect;
    BOOL _protected;
}

@property(readonly) id propertyList;
@property(getter=isProtected) BOOL protected;
@property double systemDomainsVersion;
@property(retain) NSData * keybagData;
@property(retain) NSDate * date;
@property double version;
@property(getter=wasPasscodeSet) BOOL passcodeSet;
@property(getter=isEncrypted) BOOL encrypted;
@property(readonly) NSDictionary * applications;
@property(readonly) NSDictionary * appleIDs;
@property(retain) NSDictionary * lockdownKeys;
@property(readonly) NSString * deviceID;
@property(readonly) NSString * serialNumber;
@property(readonly) NSString * deviceName;
@property(readonly) NSString * productType;
@property(readonly) NSString * buildVersion;
@property(readonly) BOOL hasCorruptSQLiteDBs;

+ (id)properties;
+ (id)propertiesWithFile:(id)arg1 error:(id*)arg2;

- (id)serialNumber;
- (id)applications;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setEncrypted:(BOOL)arg1;
- (id)productType;
- (BOOL)writeToFile:(id)arg1 error:(id*)arg2;
- (void)setVersion:(double)arg1;
- (double)version;
- (id)buildVersion;
- (void)setDate:(id)arg1;
- (id)date;
- (BOOL)_boolForKey:(id)arg1;
- (BOOL)isProtected;
- (id)deviceID;
- (id)deviceName;
- (void)setProtected:(BOOL)arg1;
- (void)addAppsFromArray:(id)arg1;
- (id)appWithBundleID:(id)arg1;
- (void)addAppleIDsFromSet:(id)arg1;
- (BOOL)hasCorruptSQLiteDBs;
- (void)setLockdownKeys:(id)arg1;
- (void)setPasscodeSet:(BOOL)arg1;
- (void)setKeybagData:(id)arg1;
- (id)keybagData;
- (BOOL)wasPasscodeSet;
- (void)addApp:(id)arg1;
- (id)appleIDs;
- (id)_stringForLockdownKey:(id)arg1;
- (id)lockdownKeys;
- (void)_setDictionary:(id)arg1 forKey:(id)arg2;
- (void)_setData:(id)arg1 forKey:(id)arg2;
- (void)_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setSystemDomainsVersion:(double)arg1;
- (double)systemDomainsVersion;
- (id)initWithFile:(id)arg1 error:(id*)arg2;
- (id)propertyList;
- (id)_dataForKey:(id)arg1;
- (BOOL)isEncrypted;
- (id)_dictionaryForKey:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;

@end
