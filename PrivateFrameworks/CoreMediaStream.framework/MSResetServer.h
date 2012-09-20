/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MSMediaStreamDaemon, NSString, MSResetServerProtocol;

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate> {
    NSString *_personID;
    MSResetServerProtocol *_protocol;
    MSMediaStreamDaemon *_daemon;
    id _selfReference;
}

@property(readonly) NSString * personID;
@property MSMediaStreamDaemon * daemon;

+ (id)resetServerObjectWithPersonID:(id)arg1 baseURL:(id)arg2;

- (void).cxx_destruct;
- (void)resetServer;
- (void)resetServerProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)resetServerProtocol:(id)arg1 didFinishWithError:(id)arg2;
- (id)daemon;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)setDaemon:(id)arg1;
- (id)personID;

@end
