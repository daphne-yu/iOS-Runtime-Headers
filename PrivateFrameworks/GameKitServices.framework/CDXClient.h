/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>, NSMutableDictionary, NSString, NSData, <CDXClientDelegate>;

@interface CDXClient : NSObject  {
    <CDXClientDelegate> *delegate_;
    int holePunchAttemptCount_;
    NSData *preblob_;
    NSMutableDictionary *sessionLookup_;
    NSError *error_;
    int fd_;
    unsigned long long holePunchSID_;
    unsigned long long prevHolePunchSID_;
    NSString *server_;
    unsigned short port_;
    unsigned short localPort_;
    int restartCount_;
    struct sockaddr_in { 
        unsigned char sin_len; 
        unsigned char sin_family; 
        unsigned short sin_port; 
        struct in_addr { 
            unsigned int s_addr; 
        } sin_addr; 
        BOOL sin_zero[8]; 
    } cdxaddr_ipv4;
    double holePunchInterval_;
    BOOL preblobIsUpToDate_;
    BOOL willReconfigureShortly_;
    struct __SCDynamicStore { } *scDynamicStore_;
    struct __CFRunLoopSource { } *scDynamicStoreRunLoopSource_;
    NSObject<OS_dispatch_queue> *queue_;
    NSObject<OS_dispatch_source> *source_;
    NSObject<OS_dispatch_source> *holePunchTimer_;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id preblobCallback_;

    void *padding_[10];
}

@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property(copy) id preblobCallback;
@property <CDXClientDelegate> * delegate;
@property(readonly) NSData * preblob;
@property(readonly) NSError * error;

+ (id)sharedClient;

- (void)setError:(id)arg1;
- (void)invalidate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)start;
- (void)setPreblobCallback:(id)arg1;
- (id)preblobCallback;
- (id)createSessionWithTicket:(id)arg1 sessionKey:(id)arg2;
- (void)networkDidChange;
- (id)preblob;
- (BOOL)handleHolePunchEvent;
- (void)startListeningOnSockets;
- (void)handleFDEvent;
- (void)resetHolepunchTimer;
- (void)setPreblob:(id)arg1;
- (void)sendHolePunch;
- (void)restart;
- (void)stopHolePunchTimer;
- (void)stopListeningOnSockets;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;
- (BOOL)sendRaw:(id)arg1;
- (void)invalidateSession:(id)arg1;
- (id)queue;
- (id)error;

@end
