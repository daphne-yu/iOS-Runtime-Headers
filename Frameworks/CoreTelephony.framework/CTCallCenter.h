/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSSet;

@interface CTCallCenter : NSObject  {
    void *_server;
    NSSet *_currentCalls;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _callEventHandler;

}

@property(retain) NSSet * currentCalls;
@property(copy) id callEventHandler;


- (id)description;
- (void)dealloc;
- (id)init;
- (id)currentCalls;
- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1;
- (void)setCurrentCalls:(id)arg1;
- (id)callEventHandler;
- (BOOL)getCurrentCallSetFromServer:(id)arg1;
- (BOOL)calculateCallStateChanges:(id)arg1;
- (void)setCallEventHandler:(id)arg1;
- (void)handleNotificationFromConnection:(void*)arg1 ofType:(id)arg2 withInfo:(id)arg3;
- (void)cleanUpServerConnection;
- (BOOL)setUpServerConnection;

@end
