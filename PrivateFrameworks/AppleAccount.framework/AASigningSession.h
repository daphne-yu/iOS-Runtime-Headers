/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString;

@interface AASigningSession : NSObject  {
    struct NACContextOpaque_ { } *_context;
    NSString *_certURL;
    NSString *_sessionURL;
    long _error;
}

@property(readonly) long error;


- (void).cxx_destruct;
- (void)dealloc;
- (id)signatureForData:(id)arg1;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;
- (void)establishSession;
- (long)error;

@end
