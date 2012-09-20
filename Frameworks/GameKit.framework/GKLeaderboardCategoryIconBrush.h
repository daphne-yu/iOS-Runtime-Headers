/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage;

@interface GKLeaderboardCategoryIconBrush : GKImageBrush  {
    UIImage *_maskImage;
    UIImage *_backgroundImage;
    UIImage *_overlayImage;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _imageRect;
}

@property(retain) UIImage * maskImage;
@property(retain) UIImage * backgroundImage;
@property(retain) UIImage * overlayImage;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageRect;


- (void)setImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRect;
- (id)overlayImage;
- (id)maskImage;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;
- (float)scaleForInput:(id)arg1;
- (void)setOverlayImage:(id)arg1;
- (void)setMaskImage:(id)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setBackgroundImage:(id)arg1;
- (id)backgroundImage;

@end
