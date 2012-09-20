/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKWorld, VKCamera, VKScene, VKLayoutContext, NSArray, NSMutableArray;

@interface VKScreenCanvas : VGLScreenCanvas <VKCameraDelegate, VKWorldDelegate, VKCameraControllerCanvasDelegate> {
    VKWorld *_world;
    VKCamera *_camera;
    VKScene *_scene;
    VKLayoutContext *_layoutContext;
    BOOL _needsLayout;
    unsigned int _wantsLayout;
    unsigned int _needsRepaint;
    BOOL _userIsGesturing;
    NSMutableArray *_cameraControllers;
    BOOL _debugPaintFrameRateGraph;
    float _debugFramesPerSecond;
    int _state;
    BOOL _rendersInBackground;
}

@property(readonly) VKWorld * world;
@property(readonly) NSArray * cameraControllers;
@property(readonly) VKCamera * camera;
@property BOOL debugPaintFrameRateGraph;
@property BOOL debugEnableMultisampling;
@property float debugFramesPerSecond;
@property(readonly) int state;
@property BOOL rendersInBackground;
@property(getter=isGesturing) BOOL gesturing;

+ (Class)contextClass;

- (int)state;
- (void)dealloc;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)forceLayout;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setHidden:(BOOL)arg1;
- (void)setNeedsLayout;
- (void)setNeedsDisplay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)camera;
- (id)cameraControllers;
- (void)setDebugFramesPerSecond:(float)arg1;
- (void)removeCameraController:(id)arg1;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;
- (BOOL)_updateDisplayStatus:(id)arg1;
- (id)world;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraControllerDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
- (void)cameraControllerWillStartRegionAnimation:(id)arg1;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)addCameraController:(id)arg1;
- (void)updateCameraForFrameResize;
- (void)onTimerFired:(double)arg1;
- (BOOL)canRenderInWindow:(id)arg1;
- (void)setRendersInBackground:(BOOL)arg1;
- (BOOL)rendersInBackground;
- (float)debugFramesPerSecond;
- (void)setDebugEnableMultisampling:(BOOL)arg1;
- (BOOL)debugEnableMultisampling;
- (void)setDebugPaintFrameRateGraph:(BOOL)arg1;
- (BOOL)debugPaintFrameRateGraph;
- (void)setGesturing:(BOOL)arg1;
- (BOOL)isGesturing;
- (void)cameraDidChange:(id)arg1;
- (void)didDrawView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(id)arg2;

@end
