/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLStrokePolygonProgram : VGLSimpleRoadProgram  {
    int _uScale;
    float _scale;
    int _uStrokeColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _strokeColor;
    int _uTexturePolygonSampler;
    int _texturePolygonSampler;
    int _uIsPolygonSolidColor;
    int _isPolygonSolidColor;
    int _uIsToBeStroked;
    int _isToBeStroked;
    int _uPolygonColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _polygonColor;
}

@property struct _VGLColor { float x1; float x2; float x3; float x4; } strokeColor;
@property float scale;
@property int texturePolygonSampler;
@property int isPolygonSolidColor;
@property int isToBeStroked;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } polygonColor;

+ (id)program;

- (id)init;
- (void)setScale:(float)arg1;
- (float)scale;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })polygonColor;
- (int)isToBeStroked;
- (int)isPolygonSolidColor;
- (int)texturePolygonSampler;
- (void)setIsToBeStroked:(int)arg1;
- (void)setPolygonColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setTexturePolygonSampler:(int)arg1;
- (void)setIsPolygonSolidColor:(int)arg1;
- (id)initWithVertName:(id)arg1 fragName:(id)arg2;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })strokeColor;
- (void)setStrokeColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;

@end
