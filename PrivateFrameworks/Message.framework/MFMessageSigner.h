/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError, NSString, NSArray;

@interface MFMessageSigner : NSObject  {
    int _status;
    struct __SecTrust { } *_trust;
    NSString *_sender;
    NSString *_uncommentedSender;
}

@property(readonly) NSString * sender;
@property(readonly) NSString * commonName;
@property(readonly) NSString * emailAddress;
@property(readonly) int action;
@property(readonly) NSArray * certificates;
@property(readonly) MFError * error;


- (int)action;
- (void)dealloc;
- (id)sender;
- (BOOL)hasTrustException;
- (void)removeTrustException;
- (void)addTrustException;
- (struct __SecTrust { }*)copyTrust;
- (id)emailAddress;
- (id)commonName;
- (id)initWithSender:(id)arg1 trust:(struct __SecTrust { }*)arg2 verification:(int)arg3;
- (id)certificates;
- (id)error;

@end
