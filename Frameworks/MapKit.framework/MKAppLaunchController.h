/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSURL, NSString, SSLookupRequest;

@interface MKAppLaunchController : NSObject  {
    SSLookupRequest *_request;
    NSString *_webURLString;
    NSURL *webURL;
}

@property(retain) SSLookupRequest * storeRequest;
@property(retain) NSURL * webURL;

+ (id)sharedController;
+ (void)launchAttributionURLs:(id)arg1 withAttributionApps:(id)arg2;

- (void)dealloc;
- (void)lookUpAppStoreURLForBundle:(id)arg1;
- (id)webURL;
- (id)storeRequest;
- (void)setStoreRequest:(id)arg1;
- (void)setWebURL:(id)arg1;

@end
