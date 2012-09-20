/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKLocationProviderDelegate>, NSBundle, CLLocationManager;

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, MKLocationProvider> {
    CLLocationManager *_clLocationManager;
    <MKLocationProviderDelegate> *_delegate;
    BOOL _locationServicesPreferencesDialogEnabled;
    int _authorizationStatus;
    NSBundle *_effectiveBundle;
}

@property(readonly) CLLocationManager * _clLocationManager;
@property <MKLocationProviderDelegate> * delegate;
@property(retain) NSBundle * effectiveBundle;
@property double desiredAccuracy;
@property(getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property double distanceFilter;
@property int headingOrientation;
@property(readonly) double expectedGpsUpdateInterval;
@property(readonly) int authorizationStatus;
@property int activityType;
@property(readonly) BOOL usesCLMapCorrection;


- (void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
- (BOOL)isLocationServicesPreferencesDialogEnabled;
- (void)dismissHeadingCalibrationDisplay;
- (int)headingOrientation;
- (double)expectedGpsUpdateInterval;
- (double)desiredAccuracy;
- (double)distanceFilter;
- (int)authorizationStatus;
- (void)setActivityType:(int)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (int)activityType;
- (id)effectiveBundle;
- (BOOL)usesCLMapCorrection;
- (id)_clLocationManager;
- (void)_updateAuthorizationStatus;
- (void)_createCLLocationManager;
- (void)setEffectiveBundle:(id)arg1;
- (void)startUpdatingHeading;
- (void)stopUpdatingHeading;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setHeadingOrientation:(int)arg1;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;

@end
