/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <EAAccessoryDelegate>, NSArray, NSString, EAAccessoryInternal;

@interface EAAccessory : NSObject  {
    EAAccessoryInternal *_internal;
}

@property(getter=isConnected,readonly) BOOL connected;
@property(readonly) unsigned int connectionID;
@property(readonly) NSString * manufacturer;
@property(readonly) NSString * name;
@property(readonly) NSString * modelNumber;
@property(readonly) NSString * serialNumber;
@property(readonly) NSString * firmwareRevision;
@property(readonly) NSString * hardwareRevision;
@property(readonly) NSArray * protocolStrings;
@property <EAAccessoryDelegate> * delegate;


- (id)serialNumber;
- (id)manufacturer;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)name;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)macAddress;
- (BOOL)supportsPointOfInterest;
- (void)updateItemProperty:(int)arg1 withValue:(id)arg2;
- (void)updateSystemProperty:(int)arg1 withValue:(id)arg2;
- (BOOL)supportsAccessibility;
- (BOOL)sendEphemeris:(id)arg1;
- (BOOL)sendEphemerisPointDataGpsWeek:(unsigned int)arg1 gpsTOW:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(unsigned short)arg5;
- (BOOL)sendGpsWeek:(unsigned int)arg1 gpsTOW:(double)arg2;
- (BOOL)getEphemerisExpirationInterval:(double*)arg1;
- (BOOL)getEphemerisRecommendRefreshInterval:(double*)arg1;
- (BOOL)getEphemerisURL:(id*)arg1;
- (BOOL)setNMEASentencesToFilter:(id)arg1;
- (BOOL)getNMEASentence:(id*)arg1;
- (BOOL)accessoryHasNMEASentencesAvailable;
- (BOOL)supportsLocation;
- (id)allPublicProtocolStrings;
- (BOOL)supportsPublicIap;
- (id)wakeToken;
- (int)iPodOutOptionsMask;
- (unsigned int)eqIndex;
- (id)eqNames;
- (id)audioPorts;
- (int)classType;
- (id)preferredApp;
- (void)setCfAccessoryPortPropertyContext:(void*)arg1;
- (void*)cfAccessoryPortPropertyContext;
- (void)setCfAccessoryPortPropertyCallback:(int (*)())arg1;
- (void)setCfAccessory:(struct __CFAccessory { }*)arg1;
- (struct __CFAccessory { }*)cfAccessory;
- (id)_createWakeToken;
- (id)protocolStrings;
- (id)hardwareRevision;
- (id)firmwareRevision;
- (id)modelNumber;
- (void)_removeSession:(id)arg1;
- (id)_shortDescription;
- (void)_addSession:(id)arg1;
- (id)_protocolIDForProtocolString:(id)arg1;
- (void)setEqIndex:(unsigned int)arg1;
- (void)setEqNames:(id)arg1;
- (void)_endSession:(unsigned int)arg1;
- (void)_openCompleteForSession:(unsigned int)arg1;
- (void)setIPodOutOptionsMask:(int)arg1;
- (int (*)())cfAccessoryPortPropertyCallback;
- (unsigned int)connectionID;
- (void)_updateAccessoryInfo:(id)arg1;
- (BOOL)_internalNotPresentInIAPAccessoriesArray;
- (void)_setNotPresentInIAPAccessoriesArray:(BOOL)arg1;
- (void)_setConnected:(BOOL)arg1;
- (unsigned int)_internalConnectionID;
- (id)_initWithAccessory:(id)arg1;
- (BOOL)isConnected;

@end
