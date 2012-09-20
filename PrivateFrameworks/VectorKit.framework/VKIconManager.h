/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMapTable, VKIconAtlas;

@interface VKIconManager : NSObject  {
    VKIconAtlas *_defaultAtlas;
    NSMapTable *_regionalAtlases;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)purge;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (id)iconForFeatureID:(unsigned long long)arg1 withResourceNames:(id)arg2 style:(struct { int x1; struct _VGLColor { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct _VGLColor { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3[2]; struct _VGLColor { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; struct _VGLColor { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; }*)arg3;
- (void)getIconForName:(id)arg1 style:(struct { int x1; struct _VGLColor { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct _VGLColor { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3[2]; struct _VGLColor { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; struct _VGLColor { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; }*)arg2 finished:(id)arg3;
- (id)iconForName:(id)arg1 style:(struct { int x1; struct _VGLColor { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct _VGLColor { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3[2]; struct _VGLColor { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; struct _VGLColor { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; }*)arg2;
- (id)_atlasForName:(id)arg1;
- (void)_activeTileGroupChanged:(id)arg1;

@end
