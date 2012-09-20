/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage;

@interface GKPhotoBrush : GKImageBrush  {
    UIImage *_overlayImage;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _contentRect;
    float _rotation;
    BOOL _flipHorizontal;
}

@property(retain) UIImage * overlayImage;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentRect;
@property float rotation;
@property BOOL flipHorizontal;


- (void)setFlipHorizontal:(BOOL)arg1;
- (BOOL)flipHorizontal;
- (id)overlayImage;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;
- (float)scaleForInput:(id)arg1;
- (void)setOverlayImage:(id)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (void)dealloc;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (float)rotation;
- (void)setRotation:(float)arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;

@end
