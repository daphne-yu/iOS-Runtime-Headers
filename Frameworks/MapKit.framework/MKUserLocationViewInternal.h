/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKUserLocationPositionAnimation, MKDotBounceAnimation, MKHoverAnimation, CAAnimationGroup, MKUserLocationView, MKAccuracyLayer, MKUserLocationAccuracyAnimation, CALayer, MKUserLocationLayer;

@interface MKUserLocationViewInternal : NSObject  {
    id delegate;
    MKUserLocationView *view;
    MKUserLocationLayer *layer;
    CALayer *dotLayer;
    CALayer *bounceLayer;
    CALayer *userLayer;
    CALayer *headingLayer;
    CALayer *haloLayer;
    MKAccuracyLayer *accuracyLayer;
    unsigned int mapType;
    int zoomDirection;
    float accuracy;
    double headingAccuracy;
    MKUserLocationPositionAnimation *_positionAnimation;
    MKUserLocationAccuracyAnimation *_accuracyAnimation;
    MKDotBounceAnimation *_dotBounceAnimation;
    MKHoverAnimation *_hoverAnimation;
    CAAnimationGroup *_haloAnimation;
    struct { 
        unsigned int animatedSublayers : 1; 
        unsigned int disableAccuracyDidUpdate : 1; 
        unsigned int enforceLowerBound : 1; 
        unsigned int shouldDisplayHalo : 1; 
        unsigned int shouldDisplayEffects : 1; 
        unsigned int shouldDisplayAccuracy : 1; 
        unsigned int shouldDisplayHeading : 1; 
        unsigned int stale : 1; 
        unsigned int delegateAccuracyDidUpdate : 1; 
        unsigned int delegateDidQuiesce : 1; 
        unsigned int delegateIsZooming : 1; 
        unsigned int willAnimateProperty : 1; 
    } flags;
}

@property(readonly) MKUserLocationPositionAnimation * positionAnimation;
@property(readonly) MKHoverAnimation * hoverAnimation;
@property id delegate;
@property float accuracy;
@property double headingAccuracy;
@property struct CADoublePoint { double x1; double x2; } position;
@property unsigned int mapType;
@property BOOL animatedSublayers;
@property BOOL disableAccuracyDidUpdate;
@property(getter=isHovering,readonly) BOOL hovering;
@property(getter=isStale) BOOL stale;
@property(readonly) BOOL hasHalo;
@property(readonly) BOOL canHalo;
@property(readonly) BOOL canHaloExcludingAccuracy;
@property(readonly) BOOL canHaloExcludingEffects;
@property(readonly) BOOL needsHalo;
@property(readonly) BOOL hasQuiesced;
@property BOOL shouldDisplayHalo;
@property BOOL shouldDisplayEffects;
@property BOOL shouldDisplayAccuracy;
@property BOOL shouldDisplayHeading;
@property int zoomDirection;

+ (id)dotPressedImage;
+ (id)greyDotImage;
+ (id)greyDotPressedImage;
+ (id)headingAngleMediumImage;
+ (id)headingAngleSmallImage;
+ (id)headingAngleLargeImage;
+ (struct CGSize { float x1; float x2; })effectsSize;
+ (id)dotImage;
+ (id)haloImages;
+ (id)bounceImageRects;
+ (float)maxVisibleAccuracyDiameter;
+ (void)frameLayer:(id)arg1 initialAccuracy:(float*)arg2 restAccuracy:(float*)arg3;
+ (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })effectiveFrameWithFrame:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (float)accuracyDiameter:(float)arg1;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)updateDot;
- (void)didEndZoom;
- (id)initWithView:(id)arg1;
- (BOOL)isZooming;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)setContentsScale:(float)arg1;
- (struct CADoublePoint { double x1; double x2; })position;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setPosition:(struct CADoublePoint { double x1; double x2; })arg1;
- (void)removeSublayer:(id)arg1 animated:(BOOL)arg2;
- (void)effectsVisibleDidChange;
- (BOOL)needsHalo;
- (void)userLocationViewDidUpdate;
- (void)setDisableAccuracyDidUpdate:(BOOL)arg1;
- (BOOL)disableAccuracyDidUpdate;
- (BOOL)animatedSublayers;
- (void)setAnimatedSublayers:(BOOL)arg1;
- (unsigned int)indexForSubLayer:(id)arg1;
- (void)insertSublayer:(id)arg1 animated:(BOOL)arg2;
- (void)terminateHoverAccuracy:(float)arg1 duration:(double)arg2;
- (void)updateHover;
- (void)pauseHover;
- (void)resumeHover;
- (BOOL)canHaloExcludingEffects;
- (void)pauseHalo;
- (void)resumeHalo;
- (BOOL)hasHalo;
- (BOOL)isAccuracyChanging;
- (void)didBeginZoom;
- (BOOL)isDotTeleporting;
- (BOOL)isDotBouncing;
- (id)headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint { float x1; float x2; }*)arg2;
- (void)clampAccuracyValue:(float*)arg1;
- (void)drawAccuracy:(float)arg1;
- (void)resetScale;
- (void)applyScale:(float)arg1 animated:(BOOL)arg2;
- (void)shouldDisplayAccuracyDidChange;
- (void)shouldDisplayEffectsDidChange;
- (void)staleDidChange;
- (void)userLocationAccuracyDidUpdate;
- (void)removeSublayers;
- (void)shouldDisplayHeadingDidChange;
- (void)insertSublayer:(id)arg1;
- (void)resetAccuracy;
- (int)zoomDirection;
- (BOOL)shouldDisplayHeading;
- (BOOL)shouldDisplayAccuracy;
- (BOOL)shouldDisplayEffects;
- (void)clearViewReferences;
- (id)positionAnimation;
- (id)haloAnimation;
- (id)dotBounceAnimation;
- (id)accuracyAnimation;
- (void)orderInDotLayer;
- (BOOL)canHaloExcludingAccuracy;
- (void)setShouldDisplayAccuracy:(BOOL)arg1;
- (void)updateHeading;
- (id)hoverAnimation;
- (BOOL)sizeAccuracyLayerToFit:(float)arg1 animated:(BOOL)arg2;
- (id)dropTeleportingUserLocationAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)userLocationViewAccuracyDidUpdate;
- (BOOL)hasQuiesced;
- (BOOL)canHalo;
- (void)orderInLayer:(id)arg1 beginTime:(double)arg2;
- (void)setHeadingAccuracy:(double)arg1;
- (void)setShouldDisplayHeading:(BOOL)arg1;
- (void)updateHalo;
- (void)setShouldDisplayHalo:(BOOL)arg1;
- (void)removeHover;
- (BOOL)isHovering;
- (BOOL)shouldDisplayHalo;
- (void)stopHover;
- (void)setZoomDirection:(int)arg1 deltaScale:(float)arg2;
- (void)setShouldDisplayEffects:(BOOL)arg1;
- (void)setZoomDirection:(int)arg1;
- (double)headingAccuracy;
- (BOOL)isStale;
- (void)setStale:(BOOL)arg1;
- (float)accuracy;
- (void)setMapType:(unsigned int)arg1;
- (unsigned int)mapType;
- (void)setAccuracy:(float)arg1;

@end
