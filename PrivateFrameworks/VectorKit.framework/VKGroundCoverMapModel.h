/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLTexture, NSMutableArray, VGLRenderState;

@interface VKGroundCoverMapModel : VKMapTileModel <VKMapLayer> {
    VGLRenderState *_renderState;
    NSMutableArray *_sortedTiles;
    float _alpha;
    VGLTexture *_landTexture;
}

+ (BOOL)reloadOnStylesheetChange;

- (void)reset;
- (void)dealloc;
- (id)init;
- (id)textureForName:(id)arg1 scale:(float)arg2;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)mapLayerPosition;

@end
