/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
 */

@class NSThread, NSFileHandle, <SCRDFileReaderDelegate>;

@interface SCRDFileReader : NSObject  {
    <SCRDFileReaderDelegate> *_delegate;
    NSThread *_readerThread;
    NSFileHandle *_fileHandle;
    int _threadStartCount;
}


- (void)invalidate;
- (void)dealloc;
- (void)start;
- (BOOL)isValid;
- (id)initWithDelegate:(id)arg1 fileHandle:(id)arg2;
- (BOOL)hasStarted;
- (void)_readHandler:(id)arg1;

@end
