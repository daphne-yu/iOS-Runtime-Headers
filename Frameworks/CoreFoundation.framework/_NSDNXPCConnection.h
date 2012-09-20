/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_group>, NSObject<OS_xpc_object>, NSMutableArray;

@interface _NSDNXPCConnection : NSObject <_NSDNXPCObject> {
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_xpc_object> *_sconn;
    int _lock;
    NSObject<OS_dispatch_queue> *_dq;
    NSObject<OS_dispatch_group> *_dgroup;
    NSString *_serviceName;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handleMessage;

    long long _mseqno;
    NSMutableArray *_invalidHandlers;
    NSMutableArray *_termImminentHandlers;
    int _started;
    int _invalid;
    int _flavor;
}

@property(readonly) NSString * serviceName;
@property(readonly) NSObject<OS_xpc_object> * XPCConnection;
@property(copy) id handleMessage;


- (void)invalidate;
- (void)dealloc;
- (void)start;
- (void)addTerminationImminentHandler:(id)arg1;
- (void)__terminationImminent;
- (id)dispatchQueue;
- (id)handleMessage;
- (id)XPCConnection;
- (id)serviceName;
- (id)initWithPeerConnection:(id)arg1;
- (id)initWithReceivedConnection:(id)arg1;
- (void)__invalidate;
- (id)initWithXPCConnection:(id)arg1 type:(int)arg2;
- (void)addInvalidationHandler:(id)arg1;
- (void)setHandleMessage:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (id)initWithServiceName:(id)arg1 privileged:(BOOL)arg2;
- (void)sendMessage:(id)arg1 waitForAck:(BOOL)arg2;
- (void)sendMessage:(id)arg1 waitForSend:(BOOL)arg2;

@end
