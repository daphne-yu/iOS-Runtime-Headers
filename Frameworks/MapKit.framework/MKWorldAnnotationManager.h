/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKWorldAnnotationManagerDragDelegate>, VKAnnotationMarker;

@interface MKWorldAnnotationManager : MKAnnotationManager <VKAnnotationMarkerDelegate> {
    <MKWorldAnnotationManagerDragDelegate> *_dragDelegate;
    BOOL _didDragAnnotationMarker;
    VKAnnotationMarker *_draggingAnnotationMarker;
}

@property <MKWorldAnnotationManagerDragDelegate> * dragDelegate;
@property(readonly) VKAnnotationMarker * draggingAnnotationMarker;


- (void)dealloc;
- (id)dragDelegate;
- (void)animateAnnotationRepresentation:(id)arg1 fromCoordinate:(struct { double x1; double x2; })arg2 duration:(double)arg3;
- (id)newDefaultAnnotationRepresentationForAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (void)cleanUpAnnotationRepresentationForRemoval:(id)arg1;
- (void)liftAnnotationMarkerForDragging:(id)arg1;
- (void)dropDraggingAnnotationMarker:(BOOL)arg1 atCoordinate:(struct { double x1; double x2; })arg2;
- (id)draggingAnnotationMarker;
- (void)setDragDelegate:(id)arg1;
- (void)draggingTouchMovedToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)annotationMarker:(id)arg1 didChangeDragState:(int)arg2 fromOldState:(int)arg3;

@end
