/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView, MPAVController;

@interface MPMovieTVHUDView : UIView  {
    unsigned int _currentState;
    UIImageView *_playbackMode;
    MPAVController *_player;
}

@property(retain) MPAVController * player;


- (void)setPlayer:(id)arg1;
- (id)player;
- (void)_changeState;
- (void)_fadeOut;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)animationDidStop:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
