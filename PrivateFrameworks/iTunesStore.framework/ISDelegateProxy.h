/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSLock;

@interface ISDelegateProxy : NSObject  {
    id _delegate;
    NSLock *_lock;
    BOOL _shouldMessageMainThread;
}


- (void)setShouldMessageMainThread:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)sendInvocationToDelegate:(id)arg1;

@end
