/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMapTable, NSLock;

@interface GEODirectionsRequester : NSObject  {
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
    NSMapTable *_providers;
}

+ (id)sharedRequester;

- (void)dealloc;
- (id)init;
- (void)startRequest:(id)arg1 finished:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (Class)classForProviderID:(short)arg1;
- (void)registerProvider:(Class)arg1;
- (void)cancelRequest:(id)arg1;

@end
