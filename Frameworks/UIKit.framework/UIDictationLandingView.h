/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, UITextRange;

@interface UIDictationLandingView : UIView  {
    int _highlighted;
    NSTimer *_timer;
    UITextRange *_range;
    id _placeholder;
    BOOL _didHaveText;
    BOOL _willInsertResult;
    float _diameter;
    float _margin;
}

@property BOOL willInsertResult;

+ (id)activeInstance;
+ (id)sharedInstance;
+ (float)diameterForLineHeight:(float)arg1;
+ (float)widthForLineHeight:(float)arg1;

- (void)dealloc;
- (BOOL)willInsertResult;
- (void)advanceLanding:(id)arg1;
- (void)placeDots;
- (void)errorAnimationDidFinish;
- (void)setWillInsertResult:(BOOL)arg1;
- (void)stopLanding;
- (void)stopLandingForError;
- (void)startLanding;
- (void)updatePosition;
- (BOOL)delegateWasEmpty;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
