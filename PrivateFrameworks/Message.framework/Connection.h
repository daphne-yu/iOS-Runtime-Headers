/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <MFSASLSecurityLayer>, NSArray, NSData, NSMutableString, NSString, _MFSocket;

@interface Connection : NSObject  {
    <MFSASLSecurityLayer> *_securityLayer;
    _MFSocket *_socket;
    double _lastUsedTime;
    char *_buffer;
    int _bufferRemainingBytes;
    unsigned int _bufferStart;
    unsigned int _bufferLength;
    unsigned int _desiredBufferLength;
    struct z_stream_s { char *x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned int x13; unsigned int x14; } *_deflater;
    struct z_stream_s { char *x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned int x13; unsigned int x14; } *_inflater;
    char *_zbuffer;
    NSData *_logData;
    unsigned int _dontLogReads;
    unsigned int _readBytesNotLogged;
    NSMutableString *_readBytesToLog;
    unsigned int _isFetching : 1;
    unsigned int _allowFallbacks : 1;
    unsigned int _compressionEnabled : 1;
}

@property BOOL isFetching;
@property(readonly) double lastUsedTime;
@property(readonly) NSArray * capabilities;
@property(readonly) NSArray * authenticationMechanisms;
@property(readonly) NSString * securityProtocol;
@property(readonly) BOOL isValid;
@property(readonly) BOOL hasBytesAvailable;
@property(readonly) BOOL isForcedConnection;
@property(readonly) BOOL loginDisabled;
@property(readonly) BOOL usesOpportunisticSockets;

+ (void)initialize;
+ (void)setLogActivityOnHosts:(id)arg1;
+ (id)logActivityOnHosts;
+ (void)setLogActivityOnPorts:(id)arg1;
+ (id)logActivityOnPorts;
+ (void)setLogAllSocketActivity:(BOOL)arg1;
+ (BOOL)logAllSocketActivity;
+ (void)setLogClasses:(id)arg1;
+ (id)logClasses;
+ (void)flushLog;
+ (void)logBytes:(const char *)arg1 length:(int)arg2;
+ (void)readLoggingDefaults;
+ (BOOL)shouldTryFallbacksAfterError:(id)arg1;

- (BOOL)loginDisabled;
- (id)description;
- (void)dealloc;
- (void)disconnect;
- (BOOL)isValid;
- (BOOL)hasBytesAvailable;
- (BOOL)writeData:(id)arg1;
- (double)lastUsedTime;
- (BOOL)startCompression;
- (BOOL)startTLSForAccount:(id)arg1;
- (BOOL)readBytesIntoData:(id)arg1 desiredLength:(unsigned int)arg2;
- (void)logReadChars:(const char *)arg1 length:(unsigned int)arg2;
- (void)enableReadLogging:(BOOL)arg1;
- (void)setDesiredReadBufferLength:(unsigned int)arg1;
- (void)setIsFetching:(BOOL)arg1;
- (BOOL)isFetching;
- (id)capabilities;
- (BOOL)connectUsingSettings:(id)arg1;
- (void)_setupNetworkLogging;
- (BOOL)usesOpportunisticSockets;
- (BOOL)isForcedConnection;
- (void)setAllowsFallbacks:(BOOL)arg1;
- (BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (id)authenticationMechanisms;
- (BOOL)connectUsingAccount:(id)arg1;
- (BOOL)readLineIntoData:(id)arg1;
- (BOOL)writeBytes:(const char *)arg1 length:(unsigned int)arg2 dontLogBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (BOOL)writeData:(id)arg1 dontLogBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)securityProtocol;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (BOOL)connectUsingFallbacksForAccount:(id)arg1;

@end
