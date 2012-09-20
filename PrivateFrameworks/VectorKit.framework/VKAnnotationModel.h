/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <VKAnnotationModelDelegate>, VKCalloutController, NSMutableArray, UIView, VKAnnotationMarker, NSMutableSet, NSArray;

@interface VKAnnotationModel : VKModelObject <VKMapLayer> {
    NSMutableArray *_annotationMarkers;
    VKAnnotationMarker *_selectedAnnotationMarker;
    BOOL _shouldAnimateCallout;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _delayedShowCalloutAvoidRect;
    NSMutableSet *_animatingMarkers;
    NSMutableArray *_markersToAnimate;
    <VKAnnotationModelDelegate> *_delegate;
    VKCalloutController *_calloutController;
    VKAnnotationMarker *_draggingAnnotationMarker;
    BOOL _didDragMarker;
    BOOL _hasEverDrawnSomething;
    struct { 
        int from; 
        int to; 
        float fraction; 
    } _styleTransitionState;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _annotationMarkerDeselectionCallback;

}

@property <VKAnnotationModelDelegate> * delegate;
@property(retain) VKCalloutController * calloutController;
@property(readonly) UIView * calloutContainerView;
@property struct { int x1; int x2; float x3; } styleTransitionState;
@property(readonly) NSArray * annotationMarkers;
@property(readonly) VKAnnotationMarker * selectedAnnotationMarker;
@property(readonly) BOOL needsLayout;
@property(copy) id annotationMarkerDeselectionCallback;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)needsLayout;
- (id)calloutController;
- (void)anchorPositionChangedForMarker:(id)arg1;
- (void)_showCalloutWithAnimation:(BOOL)arg1 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)calloutContainerView;
- (void)setCalloutController:(id)arg1;
- (struct { int x1; int x2; float x3; })styleTransitionState;
- (void)setStyleTransitionState:(struct { int x1; int x2; float x3; })arg1;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (id)annotationMarkerForSelectionAtPoint:(struct { double x1; double x2; double x3; })arg1 avoidCurrent:(BOOL)arg2 canvasSize:(struct CGSize { float x1; float x2; })arg3;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (void)deselectAnnotationMarker:(id)arg1 animated:(BOOL)arg2;
- (void)selectAnnotationMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)removeAnnotationMarker:(id)arg1;
- (id)annotationMarkers;
- (id)selectedAnnotationMarker;
- (void)setAnnotationMarkerDeselectionCallback:(id)arg1;
- (id)annotationMarkerDeselectionCallback;
- (unsigned int)mapLayerPosition;

@end
