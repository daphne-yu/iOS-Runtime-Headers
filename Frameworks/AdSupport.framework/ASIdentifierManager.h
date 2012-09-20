/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AdSupport.framework/AdSupport
 */

@class NSUUID;

@interface ASIdentifierManager : NSObject  {
}

@property(readonly) NSUUID * advertisingIdentifier;
@property(getter=isAdvertisingTrackingEnabled,readonly) BOOL advertisingTrackingEnabled;

+ (id)sharedManager;

- (id)advertisingIdentifier;
- (BOOL)isAdvertisingTrackingEnabled;

@end
