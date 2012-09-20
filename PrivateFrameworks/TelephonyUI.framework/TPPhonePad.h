/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPPhonePad : UIControl  {
    int _downKey;
    id _delegate;
    BOOL _playsSounds;
    BOOL _supportsHardPause;
    float _topHeight;
    float _midHeight;
    float _bottomHeight;
    float _leftWidth;
    float _midWidth;
    float _rightWidth;
    struct __CFSet { } *_inflightSounds;
    struct __CFDictionary { } *_keyToButtonMap;
    unsigned int _incompleteSounds;
    unsigned int _delegateSoundCallbacks : 1;
    unsigned int _soundsActivated : 1;
}

@property BOOL supportsHardPause;

+ (BOOL)launchFieldTestIfNeeded:(id)arg1;
+ (BOOL)shouldStringAutoDial:(id)arg1 givenLastChar:(BOOL)arg2;
+ (void)_delayedDeactivate;

- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)movedToWindow:(id)arg1;
- (void)movedFromWindow:(id)arg1;
- (BOOL)cancelTouchTracking;
- (id)scriptingInfoWithChildren;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })_keypadOrigin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectForKey:(int)arg1;
- (float)_yFudge;
- (void)setButton:(id)arg1 forKeyAtIndex:(int)arg2;
- (id)_keypadImage;
- (id)_pressedImage;
- (void)setPlaysSounds:(BOOL)arg1;
- (void)setSupportsHardPause:(BOOL)arg1;
- (BOOL)supportsHardPause;
- (void)_notifySoundCompletionIfNecessary:(unsigned long)arg1;
- (id)_buttonForKeyAtIndex:(int)arg1;
- (void)_stopSoundForKey:(int)arg1;
- (void)_playSoundForKey:(int)arg1;
- (int)_keyForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_handleKeyPressAndHold:(id)arg1;
- (void)setNeedsDisplayForKey:(int)arg1;
- (id)_imageByCroppingImage:(id)arg1 toRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_updateRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withScale:(float)arg2;
- (void)_appResumed;
- (void)_appSuspended;
- (void)_stopAllSoundsForcingCallbacks:(BOOL)arg1;
- (void)_activateSounds:(BOOL)arg1;
- (void)_handleKey:(id)arg1 forUIEvent:(id)arg2;

@end
