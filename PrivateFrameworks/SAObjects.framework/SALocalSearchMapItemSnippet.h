/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, SALocation, NSArray;

@interface SALocalSearchMapItemSnippet : SAUISnippet  {
}

@property(copy) NSArray * items;
@property(copy) NSArray * providerCommand;
@property(copy) NSNumber * regionOfInterestRadiusInMiles;
@property(retain) SALocation * searchRegionCenter;
@property(copy) NSNumber * userCurrentLocation;

+ (id)mapItemSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mapItemSnippet;

- (id)groupIdentifier;
- (void)setItems:(id)arg1;
- (id)items;
- (void)setUserCurrentLocation:(id)arg1;
- (id)userCurrentLocation;
- (void)setSearchRegionCenter:(id)arg1;
- (id)searchRegionCenter;
- (void)setRegionOfInterestRadiusInMiles:(id)arg1;
- (id)regionOfInterestRadiusInMiles;
- (void)setProviderCommand:(id)arg1;
- (id)providerCommand;
- (id)encodedClassName;

@end
