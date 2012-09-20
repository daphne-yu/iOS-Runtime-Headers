/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString;

@interface MFOfflineTransferFailureSnapshot : NSObject <NSCoding> {
    NSString *_originalRemoteID;
    NSString *_originalMailboxID;
    unsigned long long _originalMessageFlags;
}

@property(readonly) NSString * originalRemoteID;
@property(readonly) NSString * originalMailboxID;
@property(readonly) unsigned long long originalMessageFlags;


- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)originalMessageFlags;
- (id)initWithOriginalRemoteID:(id)arg1 mailboxID:(id)arg2 messageFlags:(unsigned long long)arg3;
- (id)originalRemoteID;
- (id)originalMailboxID;

@end
