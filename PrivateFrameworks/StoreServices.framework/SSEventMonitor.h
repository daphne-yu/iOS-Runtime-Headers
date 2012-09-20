/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSEventMonitorDelegate>, SSXPCConnection, NSObject<OS_dispatch_queue>;

@interface SSEventMonitor : NSObject  {
    <SSEventMonitorDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_eventConnection;
}

@property <SSEventMonitorDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (void)_connectEventConnection;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;

@end
