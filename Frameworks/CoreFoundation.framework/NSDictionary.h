/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}

@property(readonly) unsigned short fileHFSFlags;
@property(readonly) unsigned long long fileHFSResourceForkSize;

+ (id)dictionary;
+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)dictionaryWithObjectsAndKeys:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)sharedKeySetForKeys:(id)arg1;
+ (id)dictionaryWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
+ (id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)dictionaryWithContentsOfFile:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1;
+ (id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)dictionaryWithArchiveData:(id)arg1 allowedClasses:(id)arg2;
+ (id)dictionaryWithPlistData:(id)arg1;
+ (id)dictionaryWithArchiveData:(id)arg1;
+ (id)_dictionaryWithData:(id)arg1 isPlist:(BOOL)arg2 allowedClasses:(id)arg3;
+ (id)_geo_dictionaryFromXPCObject:(id)arg1;
+ (id)_gkMetadataForBundlePath:(id)arg1;
+ (id)_gkDictionaryWithServerData:(id)arg1 error:(out id*)arg2;
+ (id)_gkDictionaryWithXMLPlistData:(id)arg1;
+ (id)_gkDictionaryWithFormEncodedString:(id)arg1;
+ (id)dictionaryWithParametersInURLString:(id)arg1;

- (void)enumerateKeysAndObjectsUsingBlock:(id)arg1;
- (id)initWithObjectsAndKeys:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)containsObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)count;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
- (id)keyEnumerator;
- (id)allValues;
- (id)initWithDictionary:(id)arg1;
- (id)allObjects;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (BOOL)isEqualToDictionary:(id)arg1;
- (id)objectEnumerator;
- (id)allKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 forKey:(id)arg2;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (id)keysSortedByValueUsingComparator:(id)arg1;
- (id)keysOfEntriesPassingTest:(id)arg1;
- (id)invertedDictionary;
- (void)getKeys:(id*)arg1;
- (id)allKeysForObject:(id)arg1;
- (id)keysSortedByValueWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (id)keysOfEntriesWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned int)arg3;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (BOOL)isNSDictionary__;
- (void)getObjects:(id*)arg1;
- (unsigned long)_cfTypeID;
- (id)descriptionWithLocale:(id)arg1;
- (void)__apply:(int (*)())arg1 context:(void*)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (unsigned int)countForObject:(id)arg1;
- (BOOL)__getValue:(id*)arg1 forKey:(id)arg2;
- (BOOL)containsKey:(id)arg1;
- (unsigned int)countForKey:(id)arg1;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (Class)classForCoder;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionInStringsFileFormat;
- (id)_stringToWrite;
- (BOOL)fileIsImmutable;
- (unsigned int)filePosixPermissions;
- (id)fileType;
- (id)fileModificationDate;
- (id)fileGroupOwnerAccountID;
- (id)fileOwnerAccountID;
- (id)fileCreationDate;
- (BOOL)fileIsAppendOnly;
- (unsigned long)fileHFSTypeCode;
- (unsigned long)fileHFSCreatorCode;
- (BOOL)fileExtensionHidden;
- (unsigned int)fileSystemFileNumber;
- (int)fileSystemNumber;
- (unsigned int)fileGroupOwnerAccountNumber;
- (id)fileGroupOwnerAccountName;
- (unsigned int)fileOwnerAccountNumber;
- (id)fileOwnerAccountName;
- (unsigned long long)fileSize;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)_web_objectForMIMEType:(id)arg1;
- (id)_web_stringForKey:(id)arg1;
- (int)_web_intForKey:(id)arg1;
- (id)_web_numberForKey:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)archiveData;
- (BOOL)__imIsMutable;
- (id)plistData;
- (id)dictionaryFromChanges:(id)arg1;
- (id)keysOfChangedEntriesComparedTo:(id)arg1;
- (id)__imDeepCopy;
- (id)_stringForKey:(id)arg1;
- (id)_arrayForKey:(id)arg1;
- (id)_dataForKey:(id)arg1;
- (id)_numberForKey:(id)arg1;
- (id)_dictionaryForKey:(id)arg1;
- (unsigned short)fileHFSFlags;
- (unsigned long long)fileHFSResourceForkSize;
- (struct KeyValueArray { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; struct Object {} *x4[1]; }*)CA_copyRenderKeyValueArray;
- (id)asQueryParameterString;
- (id)_webkit_numberForKey:(id)arg1;
- (id)_webkit_arrayForKey:(id)arg1;
- (BOOL)_webkit_boolForKey:(id)arg1;
- (int)_webkit_intForKey:(id)arg1;
- (id)_webkit_stringForKey:(id)arg1;
- (id)_webkit_objectForMIMEType:(id)arg1;
- (BOOL)_sync_isEqual:(id)arg1;
- (BOOL)_sync_shouldSkip;
- (id)_sync_externalUUID;
- (id)_sync_address;
- (id)_sync_title;
- (BOOL)_sync_isFolder;
- (BOOL)_boolForKey:(id)arg1;
- (int)_web_messageType;
- (id)_web_messageSourceURL;
- (int)_web_messageLineNumber;
- (id)_web_messageText;
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(int)arg3 invalidDataErrorString:(id)arg4 outError:(id*)arg5;
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(int)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(int)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7;
- (id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(int)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6;
- (id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(int)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(int)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8;
- (id)MCDeepCopy;
- (id)MCMutableDeepCopy;
- (id)MCDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MCMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)_geo_newXPCObject;
- (BOOL)matchesUID:(id)arg1;
- (id)mutableDeepAutoreleasedCopy;
- (int)abCompare:(id)arg1;
- (BOOL)MR_isEqualToDictionary:(id)arg1;
- (id)MSDeepCopy;
- (id)MSMutableDeepCopy;
- (id)MSDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MSMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)MSASIsErrorRecovery;
- (BOOL)MSASIsNotInteresting;
- (id)MSASEventIsDueToAssetCollectionDeletionAssetCollectionGUID;
- (id)MSASEventIsDueToAlbumDeletionAlbumGUID;
- (BOOL)MSASIsLocalChange;
- (id)MSASAlbumResetSyncAlbumGUID;
- (BOOL)MSASIsGlobalResetSync;
- (id)ML3StringForKey:(id)arg1;
- (id)_FTFilteredDictionaryForAPS;
- (id)gksDeepMutableCopy;
- (id)deepCopy;
- (id)_gkPurchaseDate;
- (id)_gkExternalVersion;
- (id)_gkAdamID;
- (BOOL)_gkIsGameCenterEverEnabled;
- (BOOL)_gkIsGameCenterEnabled;
- (id)_gkItemName;
- (id)_gkPlistXMLData;
- (id)_gkSubDictionaryWithKeys:(id)arg1;
- (id)_gkDictionaryByRemovingObjectForKey:(id)arg1;
- (id)_gkDictionaryByRemovingObjectsForKeys:(id)arg1;
- (id)_gkImageUrlForSize:(int)arg1 foundSize:(out unsigned int*)arg2;
- (id)_gkImageUrlWithFallbacksForSize:(int)arg1;
- (id)_gkImageUrlForSize:(int)arg1;
- (BOOL)_mapkit_writeBinaryPlist:(id)arg1 atomically:(BOOL)arg2;
- (id)DAObjectForKeyCaseInsensitive:(id)arg1;
- (int)mf_integerForKey:(id)arg1;
- (BOOL)mf_boolForKey:(id)arg1;
- (id)mf_filterUsingMap:(id)arg1;
- (id)WLArrayContaining:(Class)arg1 forKey:(id)arg2;
- (id)WLDictionaryForKey:(id)arg1;
- (BOOL)WLBoolForKey:(id)arg1;
- (double)WLDoubleForKey:(id)arg1;
- (int)WLIntegerForKey:(id)arg1;
- (id)WLColorForKey:(id)arg1;
- (id)WLURLForKey:(id)arg1;
- (id)WLDateForKey:(id)arg1;
- (id)WLArrayForKey:(id)arg1;
- (id)WLNumberForKey:(id)arg1;
- (id)WLStringForKey:(id)arg1;
- (id)_sa_mappedDictionaryWithBlock:(id)arg1;
- (id)_iAd_stringValueForKey:(id)arg1;
- (id)_iAd_dictionaryWithTruncatedDataDescriptions;
- (id)setOfKeysForAlteredValuesComparedTo:(id)arg1;
- (int)ssidLocalizedCaseInsensitiveCompare:(id)arg1;
- (int)ssidAndBaseNameLocalizedCaseInsensitiveCompare:(id)arg1;
- (id)scriptEntry;
- (id)scriptPath;
- (SEL)testSelector;
- (SEL)setupSelector;
- (int)iterations;
- (float)offset;
- (id)CDVObjectForKeyCaseInsensitive:(id)arg1;
- (id)CDVObjectForKeyWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)mutableCopyWithElementsCopy;
- (BOOL)__ftreg_responseIsUpgrade;
- (id)__ftreg_candidateAliases;
- (id)__ftreg_responseAuthToken;
- (id)__ftreg_responseProfileID;
- (id)__ftreg_responseAppleID;
- (BOOL)__ftreg_isValidSetupDictionary;
- (id)objectForInt:(int)arg1;
- (id)objectOfClass:(Class)arg1 forKey:(id)arg2;
- (BOOL)boolValueForKey:(id)arg1;
- (void)appendJsonStringToString:(id)arg1;
- (id)safeObjectForKey:(id)arg1 ofClass:(Class)arg2;
- (BOOL)writeToProtectedFile:(id)arg1 atomically:(BOOL)arg2;

@end
