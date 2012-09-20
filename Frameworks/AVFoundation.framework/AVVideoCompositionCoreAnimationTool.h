/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject  {
    AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;
}

+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg1 inLayer:(id)arg2;
+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg1 asTrackID:(int)arg2;

- (void)dealloc;
- (void)finalize;
- (id)initWithMagicTrackID:(int)arg1 animationLayer:(id)arg2 videoLayer:(id)arg3;
- (id)_postProcessingVideoLayer;
- (int)_auxiliaryTrackID;
- (id)_postProcessingRootLayer;
- (BOOL)_hasPostProcessingLayers;
- (id)_auxiliaryTrackLayer;
- (BOOL)_hasLayerAsAuxiliaryTrack;

@end
