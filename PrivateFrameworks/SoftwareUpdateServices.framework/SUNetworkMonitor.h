/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class NSHashTable;

@interface SUNetworkMonitor : NSObject  {
    struct __SCNetworkReachability { } *_reachability;
    NSHashTable *_observers;
    int _currentNetworkType;
    BOOL _roaming;
}

+ (id)sharedInstance;
+ (void)setHoldsWiFiAssertion:(BOOL)arg1;
+ (BOOL)holdsWiFiAssertion;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_operatorBundleChanged;
- (void)_carrierBundleChanged;
- (void)setCellularRoaming:(BOOL)arg1;
- (BOOL)isCellularRoaming;
- (BOOL)isNetworkTypeCellular:(int)arg1;
- (int)_networkTypeFromCurrentCellularData;
- (int)currentNetworkType;
- (void)setCurrentNetworkType:(int)arg1;
- (int)_networkTypeFromFlags:(unsigned int)arg1;
- (void)_initNetworkObservation;
- (BOOL)_isCurrentlyRoaming;
- (BOOL)isCellularDataRoamingEnabled;

@end
