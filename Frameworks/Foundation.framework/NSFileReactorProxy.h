/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSFileAccessNode, NSObject<OS_xpc_object>;

@interface NSFileReactorProxy : NSObject  {
    NSObject<OS_xpc_object> *_client;
    id _reactorID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _messageSender;

    NSFileAccessNode *_itemLocation;
}


- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)client;
- (void)forwardUsingMessageSender:(id)arg1;
- (id)descriptionWithIndenting:(id)arg1;
- (id)initWithClient:(id)arg1 reactorID:(id)arg2 messageSender:(id)arg3;
- (id)messageSender;
- (id)itemLocation;
- (id)reactorID;
- (void)setItemLocation:(id)arg1;

@end
