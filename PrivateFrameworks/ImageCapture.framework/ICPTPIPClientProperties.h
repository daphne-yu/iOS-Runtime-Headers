/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICPTPIPClientProperties : NSObject  {
    int _pid;
    BOOL _registered;
    struct __CFFileDescriptor { } *_fdref;
    struct __CFMessagePort { } *_remotePort;
    int _remoteAddress;
    int _serverFD;
}

@property int pid;
@property(getter=didRegister) BOOL registered;
@property struct __CFFileDescriptor { }* fdref;
@property struct __CFMessagePort { }* remotePort;
@property int remoteAddress;
@property int serverFD;


- (void)setRegistered:(BOOL)arg1;
- (void)setServerFD:(int)arg1;
- (int)serverFD;
- (void)setRemoteAddress:(int)arg1;
- (int)remoteAddress;
- (struct __CFMessagePort { }*)remotePort;
- (struct __CFFileDescriptor { }*)fdref;
- (BOOL)didRegister;
- (void)setRemotePort:(struct __CFMessagePort { }*)arg1;
- (void)setFdref:(struct __CFFileDescriptor { }*)arg1;
- (void)dealloc;
- (void)finalize;
- (void)setPid:(int)arg1;
- (int)pid;

@end
