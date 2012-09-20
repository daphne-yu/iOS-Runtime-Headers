/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <GLKViewDelegate>, NSMutableDictionary, EAGLContext;

@interface GLKView : UIView <NSCoding> {
    BOOL _inDraw;
    NSMutableDictionary *_drawableProperties;
    BOOL _shouldDeleteFramebuffer;
    unsigned int _resolveFramebuffer;
    unsigned int _resolveColorRenderbuffer;
    unsigned int _multisampleFramebuffer;
    unsigned int _multisampleColorRenderbuffer;
    unsigned int _depthRenderbuffer;
    unsigned int _stencilRenderbuffer;
    unsigned int _depthStencilRenderbuffer;
    <GLKViewDelegate> *_delegate;
    EAGLContext *_context;
    int _drawableWidth;
    int _drawableHeight;
    int _drawableColorFormat;
    int _drawableDepthFormat;
    int _drawableStencilFormat;
    int _drawableMultisample;
    BOOL _enableSetNeedsDisplay;
    int (*_drawRectIMP)();
}

@property <GLKViewDelegate> * delegate;
@property(retain) EAGLContext * context;
@property(readonly) int drawableWidth;
@property(readonly) int drawableHeight;
@property int drawableColorFormat;
@property int drawableDepthFormat;
@property int drawableStencilFormat;
@property int drawableMultisample;
@property BOOL enableSetNeedsDisplay;
@property BOOL inDraw;
@property(retain) NSMutableDictionary * drawableProperties;
@property BOOL shouldDeleteFramebuffer;
@property unsigned int resolveFramebuffer;
@property unsigned int resolveColorRenderbuffer;
@property unsigned int multisampleFramebuffer;
@property unsigned int multisampleColorRenderbuffer;
@property unsigned int depthRenderbuffer;
@property unsigned int stencilRenderbuffer;
@property unsigned int depthStencilRenderbuffer;
@property int (* drawRectIMP;

+ (Class)layerClass;

- (void)setDrawRectIMP:(int (*)())arg1;
- (int (*)())drawRectIMP;
- (int)drawableHeight;
- (int)drawableWidth;
- (void)setDepthStencilRenderbuffer:(unsigned int)arg1;
- (unsigned int)depthStencilRenderbuffer;
- (void)setStencilRenderbuffer:(unsigned int)arg1;
- (unsigned int)stencilRenderbuffer;
- (void)setDepthRenderbuffer:(unsigned int)arg1;
- (unsigned int)depthRenderbuffer;
- (void)setMultisampleColorRenderbuffer:(unsigned int)arg1;
- (unsigned int)multisampleColorRenderbuffer;
- (void)setMultisampleFramebuffer:(unsigned int)arg1;
- (unsigned int)multisampleFramebuffer;
- (void)setResolveColorRenderbuffer:(unsigned int)arg1;
- (unsigned int)resolveColorRenderbuffer;
- (void)setResolveFramebuffer:(unsigned int)arg1;
- (unsigned int)resolveFramebuffer;
- (void)setShouldDeleteFramebuffer:(BOOL)arg1;
- (BOOL)shouldDeleteFramebuffer;
- (void)setInDraw:(BOOL)arg1;
- (BOOL)inDraw;
- (BOOL)enableSetNeedsDisplay;
- (void)setEnableSetNeedsDisplay:(BOOL)arg1;
- (void)bindDrawable;
- (void)setDrawableMultisample:(int)arg1;
- (int)drawableMultisample;
- (void)setDrawableStencilFormat:(int)arg1;
- (int)drawableStencilFormat;
- (void)setDrawableDepthFormat:(int)arg1;
- (int)drawableDepthFormat;
- (void)setDrawableColorFormat:(int)arg1;
- (int)drawableColorFormat;
- (void)deleteDrawable;
- (void)_display:(BOOL)arg1;
- (BOOL)_presentFramebuffer;
- (void)_resolveAndDiscard;
- (void)_setFramebuffer:(BOOL*)arg1;
- (void)_deleteFramebuffer;
- (void)_initCommon;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)snapshot;
- (void)displayLayer:(id)arg1;
- (void)setContext:(id)arg1;
- (BOOL)_controlsOwnScaleFactor;
- (BOOL)_canDrawContent;
- (void)setContentScaleFactor:(float)arg1;
- (id)context;
- (void)layoutSubviews;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)display;
- (void)_createFramebuffer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(id)arg2;
- (void)setDrawableProperties:(id)arg1;
- (id)drawableProperties;

@end
