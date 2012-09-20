/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKAttributedRouteMatch;

@interface VKRouteMatchedAnnotationMarker : VKAnnotationMarker <VKRouteMatchedAnnotationPresentation> {
    VKAttributedRouteMatch *_routeMatch;
}

@property(retain) VKAttributedRouteMatch * routeMatch;
@property struct { double x1; double x2; } presentationCoordinate;
@property(getter=isTracking) BOOL tracking;


- (void)dealloc;
- (void)setRouteMatch:(id)arg1;
- (id)routeMatch;

@end
