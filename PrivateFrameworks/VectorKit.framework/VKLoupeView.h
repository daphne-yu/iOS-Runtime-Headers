/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class UIPinchGestureRecognizer, VKLoupeMapTileModel, UIPanGestureRecognizer;

@interface VKLoupeView : UIView  {
    UIPanGestureRecognizer *_pan;
    UIPinchGestureRecognizer *_scale;
    float _maxScale;
    float _minScale;
    float _currentScale;
    float _lastScale;
    struct CGPoint { 
        float x; 
        float y; 
    } _panStart;
    VKLoupeMapTileModel *_mapTileModel;
}

@property(retain) VKLoupeMapTileModel * mapTileModel;


- (void)dealloc;
- (void)didMoveToSuperview;
- (void)scale;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)mapTileModel;
- (void)_updateTransform;
- (void)_updateMap;
- (void)setMapTileModel:(id)arg1;
- (void)pan;

@end
