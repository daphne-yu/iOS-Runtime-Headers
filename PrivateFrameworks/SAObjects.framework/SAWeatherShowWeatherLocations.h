/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SAWeatherShowWeatherLocations : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;

+ (id)showWeatherLocationsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showWeatherLocations;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;

@end
