/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableArray, SSXPCConnection, NSDictionary, NSObject<OS_dispatch_queue>, SSURLBagContext;

@interface SSURLBag : NSObject  {
    SSXPCConnection *_connection;
    SSURLBagContext *_context;
    NSDictionary *_dictionary;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _expirationTime;
    NSMutableArray *_pendingLookups;
}

@property(readonly) SSURLBagContext * URLBagContext;

+ (id)URLBagForContext:(id)arg1;

- (void)loadWithCompletionBlock:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)valueForKey:(id)arg1 error:(id*)arg2;
- (void)getTrustForURL:(id)arg1 completionBlock:(id)arg2;
- (void)_loadURLBag;
- (void)_drainPendingLookupsWithError:(id)arg1;
- (void)_loadWithCompletionBlock:(id)arg1;
- (id)URLBagContext;
- (id)initWithURLBagContext:(id)arg1;
- (id)_connection;
- (void)loadValueForKey:(id)arg1 completionBlock:(id)arg2;

@end
