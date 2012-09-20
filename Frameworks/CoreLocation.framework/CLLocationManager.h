/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class CLLocation, <CLLocationManagerDelegate>, NSString, CLHeading, NSSet;

@interface CLLocationManager : NSObject  {
    id _internal;
}

@property <CLLocationManagerDelegate> * delegate;
@property(readonly) BOOL locationServicesEnabled;
@property(copy) NSString * purpose;
@property int activityType;
@property double distanceFilter;
@property double desiredAccuracy;
@property BOOL pausesLocationUpdatesAutomatically;
@property(readonly) CLLocation * location;
@property(readonly) BOOL headingAvailable;
@property double headingFilter;
@property int headingOrientation;
@property(readonly) CLHeading * heading;
@property(readonly) double maximumRegionMonitoringDistance;
@property(readonly) NSSet * monitoredRegions;
@property BOOL privateMode;
@property(readonly) BOOL locationServicesAvailable;
@property(readonly) BOOL locationServicesApproved;
@property(readonly) double expectedGpsUpdateInterval;
@property BOOL supportInfo;
@property(readonly) double bestAccuracy;
@property(readonly) struct __CLClient { }* internalClient;
@property(getter=isPersistentMonitoringEnabled) BOOL persistentMonitoringEnabled;
@property(getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;

+ (void)setEntityAuthorized:(BOOL)arg1 forLocationDictionary:(id)arg2;
+ (BOOL)isEntityAuthorizedForLocationDictionary:(id)arg1;
+ (id)dateLocationLastUsedForLocationDictionary:(id)arg1;
+ (BOOL)isLocationActiveForLocationDictionary:(id)arg1;
+ (unsigned int)entityClassesForLocationDictionary:(id)arg1;
+ (BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned int)arg1;
+ (void)setStatusBarIconEnabled:(BOOL)arg1 forLocationEntityClass:(unsigned int)arg2;
+ (unsigned int)activeLocationServiceTypesForLocationDictionary:(id)arg1;
+ (unsigned int)primaryEntityClassForLocationDictionary:(id)arg1;
+ (BOOL)shutdownDaemon;
+ (BOOL)dumpLogsWithMessage:(id)arg1;
+ (void)setDefaultEffectiveBundle:(id)arg1;
+ (void)setDefaultEffectiveBundleIdentifier:(id)arg1;
+ (void)setAuthorizationStatus:(BOOL)arg1 forBundle:(id)arg2;
+ (void)setAuthorizationStatus:(BOOL)arg1 forBundleIdentifier:(id)arg2;
+ (int)authorizationStatus;
+ (int)authorizationStatusForBundle:(id)arg1;
+ (BOOL)deferredLocationUpdatesAvailable;
+ (BOOL)mapCorrectionAvailable;
+ (BOOL)regionMonitoringEnabled;
+ (BOOL)regionMonitoringAvailable;
+ (BOOL)significantLocationChangeMonitoringAvailable;
+ (void)setLocationServicesEnabled:(BOOL)arg1;
+ (BOOL)locationServicesEnabled:(BOOL)arg1;
+ (int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (int)_authorizationStatus;
+ (id)sharedManager;
+ (BOOL)headingAvailable;
+ (BOOL)locationServicesEnabled;
+ (int)authorizationStatusForBundleIdentifier:(id)arg1;

- (void)registerAsLocationClient;
- (void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
- (BOOL)isLocationServicesPreferencesDialogEnabled;
- (void)setPersistentMonitoringEnabled:(BOOL)arg1;
- (BOOL)isPersistentMonitoringEnabled;
- (id)technologiesInUse;
- (id)appsUsingLocationWithDetails;
- (id)appsUsingLocation;
- (void)resetApps;
- (double)maximumRegionMonitoringDistance;
- (void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2;
- (void)stopMonitoringSignificantLocationChanges;
- (void)startMonitoringSignificantLocationChanges;
- (void)stopTechStatusUpdates;
- (void)startTechStatusUpdates;
- (void)stopAppStatusUpdates;
- (void)startAppStatusUpdates;
- (void)dismissHeadingCalibrationDisplay;
- (int)headingOrientation;
- (double)headingFilter;
- (void)historicLocationsFromDate:(id)arg1 forInterval:(double)arg2;
- (void)disallowDeferredLocationUpdates;
- (void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2;
- (void)startUpdatingLocationWithPrompt;
- (id)purpose;
- (BOOL)privateMode;
- (void)setPrivateMode:(BOOL)arg1;
- (struct __CLClient { }*)internalClient;
- (double)bestAccuracy;
- (BOOL)supportInfo;
- (void)setSupportInfo:(BOOL)arg1;
- (double)expectedGpsUpdateInterval;
- (BOOL)locationServicesAvailable;
- (BOOL)pausesLocationUpdatesAutomatically;
- (double)desiredAccuracy;
- (double)distanceFilter;
- (id)initWithEffectiveBundle:(id)arg1;
- (void)pauseLocationUpdates:(BOOL)arg1;
- (void)resumeLocationUpdates;
- (void)onClientEventInterrupted:(id)arg1;
- (void)onClientEventBatch:(id)arg1;
- (void)onClientEventAutopauseStatus:(id)arg1;
- (void)onClientEventRegionSetupCompleted:(id)arg1;
- (void)onClientEventRegionResponseDelayed:(id)arg1;
- (void)onClientEventRegionError:(id)arg1;
- (void)onClientEventRegion:(id)arg1;
- (void)onClientEventError:(id)arg1;
- (void)onClientEventHistoricLocation:(id)arg1;
- (void)onClientEventHeadingCalibration:(id)arg1;
- (void)onClientEventHeading:(id)arg1;
- (void)onClientEventLocationUnavailable:(id)arg1;
- (void)onClientEventLocation:(id)arg1;
- (void)onClientEventAuthStatus:(id)arg1;
- (id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2;
- (void)onDidBecomeActive:(id)arg1;
- (void)setPausesLocationUpdatesAutomatically:(BOOL)arg1;
- (void)onClientEvent:(int)arg1 supportInfo:(id)arg2;
- (void)setActivityType:(int)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (int)activityType;
- (id)location;
- (id)heading;
- (void)startUpdatingHeading;
- (BOOL)headingAvailable;
- (void)stopUpdatingHeading;
- (BOOL)locationServicesEnabled;
- (BOOL)locationServicesApproved;
- (void)setHeadingOrientation:(int)arg1;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)setPurpose:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setHeadingFilter:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1;
- (void)stopMonitoringForRegion:(id)arg1;
- (id)monitoredRegions;

@end
