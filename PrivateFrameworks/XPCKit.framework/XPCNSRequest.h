/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@class XPCRequest, NSData, <NSCoding>;

@interface XPCNSRequest : NSObject  {
    <NSCoding> *_message;
    NSData *_data;
    XPCRequest *_request;
}

@property(readonly) XPCRequest * request;
@property(readonly) <NSCoding> * message;
@property(readonly) NSData * data;


- (id)initWithXPCRequest:(id)arg1;
- (void)sendReply:(id)arg1;
- (id)data;
- (void).cxx_destruct;
- (id)message;
- (id)request;

@end
