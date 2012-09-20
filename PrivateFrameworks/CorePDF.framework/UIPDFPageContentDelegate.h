/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFDocument, UIPDFPageView, CALayer;

@interface UIPDFPageContentDelegate : NSObject  {
    UIPDFDocument *_document;
    unsigned int _pageIndex;
    UIPDFPageView *_view;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _transform;
    struct CGColor { } *_white;
    struct CGColor { } *_highlightColor;
    CALayer *_owner;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _box;
    unsigned int _pageRotation;
    int _lock;
    unsigned int _threadCount;
    BOOL _isCancelled;
}

@property(retain) UIPDFDocument * document;
@property unsigned int pageIndex;
@property UIPDFPageView * view;
@property CALayer * owner;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } box;
@property unsigned int pageRotation;
@property struct CGColor { }* highlightColor;
@property(readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transform;
@property BOOL isCancelled;


- (void)addRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toPath:(struct CGPath { }*)arg2 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg3 view:(id)arg4 owner:(id)arg5;
- (void)drawSelectionLayerBlockMode:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)setIsCancelled:(BOOL)arg1;
- (void)setBox:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawSelectionLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (BOOL)pageHasSelection;
- (void)computeTransform;
- (void)setPageRotation:(unsigned int)arg1;
- (unsigned int)pageRotation;
- (BOOL)isCancelled;
- (void)dealloc;
- (id)init;
- (void)setPageIndex:(unsigned int)arg1;
- (unsigned int)pageIndex;
- (struct CGColor { }*)highlightColor;
- (void)setHighlightColor:(struct CGColor { }*)arg1;
- (id)document;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (void)setView:(id)arg1;
- (id)view;
- (void)setOwner:(id)arg1;
- (id)owner;
- (void)setDocument:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })box;

@end
