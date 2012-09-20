/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class VKMapModel, VKImageCanvas;

@interface VKMapSnapshotCreator : NSObject <VKMapModelDelegate> {
    VKImageCanvas *_canvas;
    int _mapType;
    VKMapModel *_mapModel;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

}

@property int mapType;
@property BOOL localizeLabels;
@property int labelScaleFactor;

+ (BOOL)supportsSharingThumbnails;
+ (BOOL)supportsHighResolutionSnapshots;

- (void)cancel;
- (void)dealloc;
- (void)mapModel:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4;
- (void)mapModel:(id)arg1 didDeselectAnnotationMarker:(id)arg2;
- (void)mapModel:(id)arg1 didSelectAnnotationMarker:(id)arg2;
- (void)mapModel:(id)arg1 didAddAnnotationMarkers:(id)arg2;
- (id)mapModel:(id)arg1 markerForAnnotation:(id)arg2;
- (void)renderSnapshot:(id)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (double)mapModelZoomScale:(id)arg1;
- (BOOL)mapModelInNavAtDefaultZoom:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 didUpdateCalloutView:(id)arg2 forSource:(id)arg3 animated:(BOOL)arg4;
- (void)mapModel:(id)arg1 willShowCalloutView:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 didUpdateCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 willShowCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 didDeselectTrafficIncident:(id)arg2;
- (void)mapModel:(id)arg1 trafficIncident:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapModel:(id)arg1 willSelectTrafficIncident:(id)arg2;
- (void)mapModel:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)mapModel:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapModel:(id)arg1 willSelectLabelMarker:(id)arg2;
- (void)mapModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 needsPanByPixelOffset:(struct CGPoint { float x1; float x2; })arg2 relativeToScreenPoint:(struct CGPoint { float x1; float x2; })arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(id)arg6;
- (void)mapModel:(id)arg1 annotationMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (BOOL)mapModelInNav:(id)arg1;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (void)setMapType:(int)arg1;
- (void)setLabelScaleFactor:(int)arg1;
- (int)labelScaleFactor;
- (void)setLocalizeLabels:(BOOL)arg1;
- (BOOL)localizeLabels;
- (int)mapType;
- (void)_mapkit_configureFromDefaults;

@end
