/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CIImage, _UIDecompressionInfo, NSArray;

@interface UIImage : NSObject <NSCoding> {
    void *_imageRef;
    float _scale;
    struct { 
        unsigned int named : 1; 
        unsigned int imageOrientation : 3; 
        unsigned int cached : 1; 
        unsigned int hasPattern : 1; 
        unsigned int isCIImage : 1; 
        unsigned int imageSetIdentifer : 16; 
    } _imageFlags;
    _UIDecompressionInfo *_decompressionInfo;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _alignmentRectInsets;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } mediaImageSubRect;
@property double mediaImageTime;
@property BOOL isPlaceholder;
@property(readonly) int leftCapWidth;
@property(readonly) int topCapHeight;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) struct CGImage { }* CGImage;
@property(readonly) CIImage * CIImage;
@property(readonly) int imageOrientation;
@property(readonly) float scale;
@property(readonly) NSArray * images;
@property(readonly) double duration;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } capInsets;
@property(readonly) int resizingMode;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } alignmentRectInsets;

+ (id)_tintedImageForSize:(struct CGSize { float x1; float x2; })arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5 edgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg6;
+ (id)_tintedImageForSize:(struct CGSize { float x1; float x2; })arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5;
+ (id)_cachedImageForKey:(id)arg1 fromBlock:(id)arg2;
+ (id)_tintedImageForSize:(struct CGSize { float x1; float x2; })arg1 withTint:(id)arg2 effectsImage:(id)arg3 maskImage:(id)arg4 style:(int)arg5;
+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2;
+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 variantsScale:(float)arg3;
+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 scale:(float*)arg2;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2 scale:(float)arg3;
+ (id)imageAtPath:(id)arg1;
+ (void)setPreferredSharedImageScale:(float)arg1;
+ (id)_deviceSpecificImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_deviceSpecificImageNamed:(id)arg1;
+ (id)imageWithContentsOfCPBitmapFile:(id)arg1 flags:(int)arg2;
+ (id)imageFromAlbumArtData:(id)arg1 height:(int)arg2 width:(int)arg3 bytesPerRow:(int)arg4 cache:(BOOL)arg5;
+ (id)_defaultBackgroundGradient;
+ (id)kitImageNamed:(id)arg1;
+ (id)applicationImageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_backgroundGradientWithStartColor:(id)arg1 andEndColor:(id)arg2;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 duration:(double)arg3;
+ (id)animatedImageNamed:(id)arg1 duration:(double)arg2;
+ (id)imageWithCIImage:(id)arg1 scale:(float)arg2 orientation:(int)arg3;
+ (id)imageWithCIImage:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(float)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 resizingMode:(int)arg3 duration:(double)arg4;
+ (id)imageNamed:(id)arg1;
+ (void)_flushCache:(id)arg1;
+ (void)initialize;
+ (id)animatedImageWithImages:(id)arg1 duration:(double)arg2;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
+ (void)_flushSharedImageCache;
+ (id)abImageNamed:(id)arg1;
+ (id)sharedImageNamed:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 drawUsingBlock:(id)arg3;
+ (void)loadImageWithURL:(id)arg1 completion:(id)arg2;
+ (id)tpImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageFromAlbumArtData:(id)arg1 artworkInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; int x_1_1_5; int x_1_1_6; BOOL x_1_1_7; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg2;
+ (void)_gkloadRemoteImageForURL:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)_mapkit_imageNamed:(id)arg1;
+ (struct CGImage { }*)missingMapTileImage;
+ (void)resetMissingMapTileImage;
+ (id)imageWithWLImage:(id)arg1;
+ (id)socialFrameworkImageNamed:(id)arg1 leftCapWidth:(float)arg2 topCapHeight:(float)arg3;
+ (id)socialFrameworkImageNamed:(id)arg1;
+ (id)ckImageWithData:(id)arg1;
+ (id)ckImageNamed:(id)arg1;
+ (id)reversedNikeRunLandscapeBackgroundImage;
+ (id)nikeRunLandscapeBackgroundImage;
+ (id)nikeBackgroundImage;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)_unselectedTabBarItemImageWithTintColor:(id)arg1;
- (id)_selectedTabBarItemImageWithTintColor:(id)arg1;
- (id)_subimageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(BOOL)arg2;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(BOOL)arg2 scale:(float)arg3;
- (id)_serializedData;
- (id)_flatImageWithWhite:(float)arg1 alpha:(float)arg2;
- (BOOL)_isInvisible;
- (int)_imageSetIdentifier;
- (void)_setImageSetIdentifier:(int)arg1;
- (void)_setNamed:(BOOL)arg1;
- (BOOL)_isCached;
- (void)_setCached:(BOOL)arg1;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fraction:(float)arg2;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 fraction:(float)arg3;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 fraction:(float)arg3;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)compositeToPoint:(struct CGPoint { float x1; float x2; })arg1 operation:(int)arg2;
- (struct CGImage { }*)imageRef;
- (id)initWithData:(id)arg1 cache:(BOOL)arg2;
- (struct CGColor { }*)_patternColor;
- (struct CGColor { }*)_tiledPatternColor;
- (void)compositeToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)compositeToPoint:(struct CGPoint { float x1; float x2; })arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)compositeToPoint:(struct CGPoint { float x1; float x2; })arg1 operation:(int)arg2 fraction:(float)arg3;
- (int)topCapHeight;
- (int)leftCapWidth;
- (id)stretchableImageWithLeftCapWidth:(int)arg1 topCapHeight:(int)arg2;
- (id)_stretchableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)writeToCPBitmapFile:(id)arg1 flags:(int)arg2;
- (struct __IOSurface { }*)ioSurface;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)_initWithIOSurface:(struct __IOSurface { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)initWithCGImage:(struct CGImage { }*)arg1 imageOrientation:(int)arg2;
- (id)_initWithData:(id)arg1 scale:(float)arg2;
- (id)_initWithData:(id)arg1 preserveScale:(BOOL)arg2;
- (id)initWithContentsOfFile:(id)arg1 cache:(BOOL)arg2;
- (id)_initWithIOSurface:(struct __IOSurface { }*)arg1 imageOrientation:(int)arg2;
- (id)_initWithData:(id)arg1 preserveScale:(BOOL)arg2 cache:(BOOL)arg3;
- (id)_automationID;
- (void)drawAsPatternInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 blendMode:(int)arg2 alpha:(float)arg3;
- (void)drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 blendMode:(int)arg2 alpha:(float)arg3;
- (BOOL)_isNamed;
- (id)CIImage;
- (id)initWithCIImage:(id)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)initWithCIImage:(id)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithData:(id)arg1 scale:(float)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (BOOL)_isDecompressing;
- (id)_initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize { float x1; float x2; })arg2 scale:(float)arg3 renderingIntent:(int)arg4;
- (void)_startEagerDecompression;
- (void)_decompressionFallbackImageCreation;
- (void)_saveDecompressedImage:(struct CGImage { }*)arg1;
- (void)_decompressionComplete;
- (void)_preheatBitmapData;
- (id)_imageScaledToProportion:(float)arg1 interpolationQuality:(int)arg2;
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 interiorShadowRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 fillRed:(float)arg9 green:(float)arg10 blue:(float)arg11 alpha:(float)arg12;
- (id)_bezeledImageWithShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 fillRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 drawShadow:(BOOL)arg9;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 resizingMode:(int)arg2;
- (id)images;
- (id)_resizableImageWithCapMask:(int)arg1;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_isResizable;
- (int)resizingMode;
- (void)_setAlwaysStretches:(BOOL)arg1;
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentStretchInPixels;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
- (int)imageOrientation;
- (struct CGImage { }*)CGImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })capInsets;
- (id)_initWithOtherImage:(id)arg1;
- (void)_encodePropertiesWithCoder:(id)arg1;
- (void)_encodeDataWithCoder:(id)arg1 imageName:(id)arg2;
- (BOOL)_canEncodeWithName:(id)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)scale;
- (double)duration;
- (id)patternColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fraction:(float)arg2 operation:(int)arg3;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (struct CGSize { float x1; float x2; })size;
- (void)removeFromCache;
- (void)abpis_swizzleClass;
- (void)setCacheSizeKey:(id)arg1;
- (id)cacheSizeKey;
- (void)setCacheNameKey:(id)arg1;
- (id)cacheNameKey;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bitmapRectFromImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)mpIsCoverflowPlaceholder;
- (void)setMediaImageTime:(double)arg1;
- (double)mediaImageTime;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mediaImageSubRect;
- (void)setMediaImageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isPlaceholder;
- (void)setIsPlaceholder:(BOOL)arg1;
- (id)mp_stretchableImageWithLeftCapWidth:(int)arg1 rightCapWidth:(int)arg2;
- (id)subImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)newImageRotatedByDegrees:(float)arg1;
- (id)newImageWithOrientation:(int)arg1;
- (void*)PL_imageContents;
- (id)roundCorners:(unsigned int)arg1 withRadiusPercent:(float)arg2;
- (id)_gkImageByAddingTransparentBorderWithThickness:(unsigned int)arg1;
- (id)_gkImageByScalingToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_gkImageByScalingToSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (id)_gkImageByScalingAndCroppingToSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (struct CGImage { }*)newBorderMaskWithThickness:(unsigned int)arg1 forImageSize:(struct CGSize { float x1; float x2; })arg2;
- (id)_gkImageByAddingAlpha;
- (id)_gkImageByScalingToSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 padColor:(id)arg3;
- (void)_gkDrawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withMask:(id)arg2;
- (id)wlImageByRecoloringWithColor:(id)arg1;
- (id)wlResizableImageByTilingCenterPixel;
- (id)stretchableImageWithLeftCapWidth:(int)arg1 rightCapWidth:(int)arg2;
- (id)imageScaledToSize:(struct CGSize { float x1; float x2; })arg1 cornerRadius:(float)arg2;
- (void)decode;
- (id)imageWithOrientation:(int)arg1;

@end
