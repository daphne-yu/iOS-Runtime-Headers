/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPFullScreenVideoOverlay;

@interface MPFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate> {
    MPFullScreenVideoOverlay *_overlayView;
    int _autorotationState;
    BOOL _inhibitOverlay;
}

@property(readonly) MPFullScreenVideoOverlay * overlayView;
@property int autorotationState;


- (void)setItem:(id)arg1;
- (id)videoOverlayViewIfLoaded;
- (void)overlayTappedScaleModeButton:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)showChaptersController;
- (void)videoView_itemTypeAvailableNotification:(id)arg1;
- (void)_hideOverlayAnimationFinished:(id)arg1;
- (void)_rotationAnimationFinished:(id)arg1;
- (BOOL)allowsDetailScrubbing;
- (id)createChapterFlipTransition;
- (void)stopTicking;
- (void)startTicking;
- (void)_reallyRemoveOverlay;
- (int)autorotationState;
- (void)setAutorotationState:(int)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (id)swipableView:(id)arg1 overrideHitTest:(struct CGPoint { float x1; float x2; })arg2 withEvent:(id)arg3;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (id)overlayView;
- (BOOL)inhibitOverlay;
- (void)hideOverlayAnimated:(BOOL)arg1;
- (void)transformVideoForInterfaceOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)showOverlayAnimated:(BOOL)arg1;
- (void)setInhibitOverlay:(BOOL)arg1;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)noteIgnoredChangeTypes:(unsigned int)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setTVOutEnabled:(BOOL)arg1;
- (id)videoOverlayView;
- (BOOL)controlsOverlayVisible;
- (void)dealloc;
- (id)init;
- (void)removeChildViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end
