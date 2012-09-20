/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSObject<OS_dispatch_semaphore>, AVWeakReference;

@interface AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate> {
    NSObject<OS_dispatch_semaphore> *_finishedWritingNotificationSemaphore;
    AVWeakReference *_weakReferenceToHelper;
    AVWeakReference *_weakReferenceToSelf;
}


- (void)dealloc;
- (id)init;
- (void)finalize;
- (void)finishWritingHelperDidCancelFinishWriting:(id)arg1;
- (void)finishWritingHelperDidFail:(id)arg1;
- (void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg2;
- (BOOL)shouldHelperPrepareInputs;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2;

@end
