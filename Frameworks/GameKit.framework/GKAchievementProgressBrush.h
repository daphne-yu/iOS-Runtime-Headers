/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage;

@interface GKAchievementProgressBrush : GKThemeBrush  {
    UIImage *_progressTrack;
    UIImage *_progressBar;
}

@property(retain) UIImage * progressTrack;
@property(retain) UIImage * progressBar;


- (void)setProgressBar:(id)arg1;
- (id)progressBar;
- (void)setProgressTrack:(id)arg1;
- (id)progressTrack;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;
- (float)scaleForInput:(id)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
