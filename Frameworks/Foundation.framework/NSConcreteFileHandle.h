/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_data>, NSObject<OS_dispatch_source>;

@interface NSConcreteFileHandle : NSFileHandle  {
    int _fd;
    void *_nativeHandle;
    NSObject<OS_dispatch_data> *_anchor;
    unsigned short _flags;
    NSObject<OS_dispatch_source> *_dsrc;
    BOOL _padding[2];
    struct __CFRunLoopSource { } *_source;
    struct __CFRunLoop { } *_rl;
    unsigned short _activity;
    BOOL _padding2[2];
    int _error;
    void *_resultBytes;
    unsigned long _resultLength;
    int _resultSocket;
    NSObject<OS_dispatch_queue> *_fhLock;
    long long _weakRefCount;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _readabilityHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _writeabilityHandler;

    NSObject<OS_dispatch_source> *_readMonitoringSource;
    NSObject<OS_dispatch_source> *_writeMonitoringSource;
    NSObject<OS_dispatch_queue> *_readMonitoringQueue;
    NSObject<OS_dispatch_queue> *_writeMonitoringQueue;
}


- (int)fileDescriptor;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)init;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (id)readDataOfLength:(unsigned int)arg1;
- (id)port;
- (void)finalize;
- (void)encodeWithCoder:(id)arg1;
- (void)closeFile;
- (void)writeData:(id)arg1;
- (void)waitForDataInBackgroundAndNotify;
- (void)acceptConnectionInBackgroundAndNotify;
- (void)readToEndOfFileInBackgroundAndNotify;
- (void)readInBackgroundAndNotify;
- (void)setPort:(id)arg1;
- (unsigned int)readDataOfLength:(unsigned int)arg1 buffer:(char *)arg2;
- (void)lockedRelease;
- (id)_monitor:(const struct dispatch_source_type_s { }*)arg1 source:(id)arg2 onQueue:(id)arg3;
- (id)lockedRetain;
- (void)waitForDataInBackgroundAndNotifyForModes:(id)arg1;
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1;
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1;
- (void)readInBackgroundAndNotifyForModes:(id)arg1;
- (void)performActivity:(int)arg1 modes:(id)arg2;
- (void)_cancelDispatchSources;
- (void)clearWriteabilityHandler;
- (void)clearReadabilityHandler;
- (void)setReadabilityHandler:(id)arg1;
- (id)readabilityHandler;
- (void)setWriteabilityHandler:(id)arg1;
- (id)writeabilityHandler;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (unsigned long long)seekToEndOfFile;
- (unsigned long long)offsetInFile;
- (id)readDataToEndOfFile;
- (id)availableData;
- (id)initWithPath:(id)arg1 flags:(int)arg2 createMode:(int)arg3 error:(id*)arg4;
- (id)initWithPath:(id)arg1 flags:(int)arg2 createMode:(int)arg3;
- (id)initWithFileDescriptor:(int)arg1;

@end
