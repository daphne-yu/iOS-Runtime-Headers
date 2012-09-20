/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

@class <AirPlayRemoteSlideshowDelegate>, MediaControlClient, NSObject<OS_dispatch_queue>;

@interface AirPlayRemoteSlideshow : NSObject  {
    NSObject<OS_dispatch_queue> *_internalQueue;
    MediaControlClient *_client;
    <AirPlayRemoteSlideshowDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_userQueue;
    BOOL _started;
    double _startTime;
}

@property <AirPlayRemoteSlideshowDelegate> * delegate;


- (void)setPassword:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (void)getFeaturesWithOptions:(unsigned int)arg1 completion:(id)arg2;
- (void)_configureEventHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setHost:(id)arg1;
- (void)getFeaturesWithCompletion:(id)arg1;
- (void)stopWithOptions:(id)arg1 completion:(id)arg2;
- (void)startWithOptions:(id)arg1 completion:(id)arg2;

@end
