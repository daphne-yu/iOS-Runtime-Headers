/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKRoutePreloadSession>, VGLRenderState;

@interface VKRealisticMapModel : VKVectorMapModel <VKMapLayer> {
    double _currentZoomLevel;
    VGLRenderState *_renderState;
    double _fade;
    float _sceneAlpha;
    <VKRoutePreloadSession> *_routePreloadSession;
    BOOL _disableRealisticRoads;
    BOOL _disableRealisticLand;
}

@property(retain) <VKRoutePreloadSession> * routePreloadSession;
@property BOOL disableRealisticRoads;
@property BOOL disableRealisticLand;
@property float sceneAlpha;


- (void)dealloc;
- (id)init;
- (void)willStartDrawingTiles:(id)arg1;
- (BOOL)wantsCategorizedSourceTiles;
- (void)_updateZoomLevel:(id)arg1;
- (float)sceneAlpha;
- (void)setSceneAlpha:(float)arg1;
- (BOOL)minimumZoomLevelBoundsCamera;
- (void)preloadRenderingResourcesWithContext:(id)arg1;
- (void)drawDebugScene:(id)arg1 withContext:(id)arg2;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (BOOL)disableRealisticLand;
- (BOOL)disableRealisticRoads;
- (void)setDisableRealisticLand:(BOOL)arg1;
- (void)setDisableRealisticRoads:(BOOL)arg1;
- (id)routePreloadSession;
- (void)setRoutePreloadSession:(id)arg1;
- (unsigned int)mapLayerPosition;

@end
