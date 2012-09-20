/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, <MKAnnotationManagerDelegate>, NSMapTable, <MKAnnotationMarkerContainer>, MKQuadTrie, NSMutableSet, <MKAnnotation>, <MKAnnotationRepresentation>;

@interface MKAnnotationManager : NSObject  {
    <MKAnnotationMarkerContainer> *_container;
    <MKAnnotationManagerDelegate> *_delegate;
    MKQuadTrie *_annotations;
    NSMutableSet *_visibleAnnotations;
    NSMutableSet *_pendingAnnotations;
    NSMutableSet *_disallowAnimationAnnotations;
    <MKAnnotation> *_selectedAnnotation;
    NSMapTable *_annotationsToRepresentations;
    NSMutableSet *_annotationRepresentations;
    NSMapTable *_reusableAnnotationRepresentations;
}

@property <MKAnnotationMarkerContainer> * container;
@property <MKAnnotationManagerDelegate> * delegate;
@property(readonly) <MKAnnotationRepresentation> * selectedAnnotationRepresentation;
@property(readonly) NSArray * annotationRepresentations;
@property(readonly) NSArray * annotations;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (void)setContainer:(id)arg1;
- (id)container;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)animateAnnotationRepresentation:(id)arg1 fromCoordinate:(struct { double x1; double x2; })arg2 duration:(double)arg3;
- (id)newDefaultAnnotationRepresentationForAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)_addRepresentationForAnnotation:(id)arg1;
- (void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (void)_removeAnnotation:(id)arg1 updateVisible:(BOOL)arg2 removeFromContainer:(BOOL)arg3;
- (void)_removeRepresentationForAnnotation:(id)arg1 fromCull:(BOOL)arg2;
- (void)_addAnnotation:(id)arg1 updateVisible:(BOOL)arg2;
- (void)cleanUpAnnotationRepresentationForRemoval:(id)arg1;
- (BOOL)containsAnnotation:(id)arg1;
- (id)selectedAnnotationRepresentation;
- (void)addRepresentationsForAnnotations:(id)arg1;
- (id)representationForAnnotation:(id)arg1;
- (id)dequeueReusableAnnotationRepresentationWithIdentifier:(id)arg1;
- (void)replaceAnnotation:(id)arg1 withAnnotation:(id)arg2;
- (void)addAnnotation:(id)arg1 allowAnimation:(BOOL)arg2;
- (id)annotationRepresentations;
- (void)updateVisibleAnnotations;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)removeAnnotation:(id)arg1;
- (id)annotations;
- (void)addAnnotation:(id)arg1;

@end
