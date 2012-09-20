/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSObject<NSCoding><NSCopying>, NSError, NSObject<OS_xpc_object>, NSString, NSArray, NSMutableDictionary;

@interface MBMessage : NSObject  {
    NSObject<OS_xpc_object> *_xpcObject;
    NSMutableDictionary *_messageInfo;
    NSMutableDictionary *_replyInfo;
}

@property(copy) NSObject<NSCoding><NSCopying> * reply;
@property(copy) NSError * replyError;
@property(readonly) NSString * name;
@property(readonly) NSArray * arguments;
@property(copy) NSError * error;

+ (id)messageWithName:(id)arg1 arguments:(id)arg2;

- (void)setError:(id)arg1;
- (id)name;
- (id)description;
- (void)dealloc;
- (id)arguments;
- (id)reply;
- (void)setReply:(id)arg1;
- (void)setReplyError:(id)arg1;
- (void)sendReply;
- (id)initWithName:(id)arg1 arguments:(id)arg2;
- (id)_xpcObject;
- (id)_initWithXPCObject:(id)arg1;
- (id)replyError;
- (id)error;

@end
