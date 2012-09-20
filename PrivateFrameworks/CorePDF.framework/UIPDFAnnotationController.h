/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFAnnotation, UIPDFMarkupAnnotation, <NSObject><UIPDFAnnotationControllerDelegate>, UIPDFPageView, NSMutableArray, CALayer;

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate> {
    NSMutableArray *_annotations;
    UIPDFPageView *_pageView;
    int _lock;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPoint;
    BOOL _moving;
    UIPDFMarkupAnnotation *_currentAnnotation;
    struct { 
        int location; 
        int length; 
    } _initialRange;
    BOOL _tracking;
    struct CGColor {} *_color[7];
    CALayer *_drawingSurface;
    <NSObject><UIPDFAnnotationControllerDelegate> *_delegate;
    struct CGSize { 
        float width; 
        float height; 
    } _cachedMarginNoteSize;
    int currentStyle;
    BOOL makeUnderlineAnnotation;
}

@property(retain) UIPDFAnnotation * currentAnnotation;
@property int currentStyle;
@property BOOL makeUnderlineAnnotation;
@property(retain) CALayer * drawingSurface;
@property <NSObject><UIPDFAnnotationControllerDelegate> * delegate;
@property(readonly) BOOL tracking;

+ (struct CGImage { }*)newMaskImage:(struct CGPDFPage { }*)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (BOOL)pageHasAnnotations:(id)arg1;

- (BOOL)tracking;
- (void)setDrawingSurface:(id)arg1;
- (id)drawingSurface;
- (struct CGImage { }*)underlineImageFor:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGImage { }*)newHighlightMaskImageFor:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)copyAttributesOf:(id)arg1 to:(id)arg2;
- (id)annotatePageSelection;
- (id)editableAnnotationAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)hostViewDidScroll;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toSurfaceLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toSurfaceLayer:(id)arg2;
- (void)showAllAnnotations;
- (void)hideAllAnnotations;
- (void)mergeSelectionOfAnnotation:(id)arg1;
- (BOOL)makeUnderlineAnnotation;
- (BOOL)trackMoved:(struct CGPoint { float x1; float x2; })arg1;
- (void)_initialRange:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)intersects:(struct CGPDFSelection { }*)arg1 with:(struct CGPDFSelection { }*)arg2;
- (BOOL)isSelection:(struct CGPDFSelection { }*)arg1 equalTo:(struct CGPDFSelection { }*)arg2;
- (struct CGSize { float x1; float x2; })marginNoteImageSize;
- (void)_addAnnotationViewFor:(id)arg1;
- (void)addDrawingSurface:(id)arg1 view:(id)arg2;
- (void)linkPressRecognized:(id)arg1;
- (void)annotationTapRecognized:(id)arg1;
- (void)setSurfacePosition:(id)arg1;
- (id)annotationWithIndex:(unsigned int)arg1;
- (id)newAnnotation:(struct CGPDFDictionary { }*)arg1 type:(const char *)arg2;
- (void)doubleTapRecognized:(id)arg1;
- (void)setCurrentAnnotation:(id)arg1;
- (BOOL)madeInstantAnnotation;
- (void)tracking:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTracking:(struct CGPoint { float x1; float x2; })arg1;
- (void)endTracking;
- (id)currentAnnotation;
- (void)setMakeUnderlineAnnotation:(BOOL)arg1;
- (void)setCurrentStyle:(int)arg1;
- (void)setAnnotation:(id)arg1 hidden:(BOOL)arg2;
- (void)drawAnnotations:(struct CGContext { }*)arg1;
- (void)addAnnotationsInPage;
- (BOOL)annotationSingleTapRecognized:(id)arg1;
- (BOOL)annotationLongPressRecognized:(id)arg1;
- (BOOL)shouldHandleGestureAt:(struct CGPoint { float x1; float x2; })arg1 response:(BOOL*)arg2;
- (BOOL)addLinkAnnotationsInPage;
- (void)layoutAnnotationViews:(id)arg1;
- (id)initWithPageView:(id)arg1;
- (struct CGColor { }*)colorForStyle:(int)arg1;
- (id)marginNoteImage:(int)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (void)unlock;
- (void)lock;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setView:(id)arg1;
- (int)currentStyle;
- (void)setNeedsDisplay;
- (void)removeAllAnnotations;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1;

@end
