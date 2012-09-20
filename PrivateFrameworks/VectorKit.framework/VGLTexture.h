/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class EAGLContext;

@interface VGLTexture : NSObject  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _contentRect;
    struct CGSize { 
        float width; 
        float height; 
    } _textureSize;
    BOOL _dirty;
    BOOL _isLoaded;
    BOOL _hasMipmap;
    unsigned int _token;
    int _target;
    int _wrapBehaviorX;
    int _wrapBehaviorY;
    int _minFilter;
    int _magFilter;
    EAGLContext *_context;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentRect;
@property(readonly) struct CGSize { float x1; float x2; } textureSize;
@property(readonly) BOOL isLoaded;
@property(readonly) BOOL dirty;
@property BOOL hasMipmap;
@property unsigned int token;
@property int target;
@property int wrapBehavior;
@property int wrapBehaviorX;
@property int wrapBehaviorY;
@property int minificationFilter;
@property int magnificationFilter;

+ (void)purge;
+ (id)textureWithName:(id)arg1;
+ (id)textureWithName:(id)arg1 forScale:(float)arg2;

- (void)setTarget:(int)arg1;
- (int)target;
- (id)description;
- (void)dealloc;
- (id)init;
- (BOOL)dirty;
- (BOOL)isLoaded;
- (void)setMinificationFilter:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMagnificationFilter:(int)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithName:(id)arg1;
- (int)magnificationFilter;
- (int)minificationFilter;
- (int)wrapBehaviorY;
- (int)wrapBehaviorX;
- (void)setToken:(unsigned int)arg1;
- (void)setHasMipmap:(BOOL)arg1;
- (BOOL)hasMipmap;
- (struct CGSize { float x1; float x2; })textureSize;
- (int)wrapBehavior;
- (void)useTextureWithContext:(id)arg1;
- (id)initWithData:(id)arg1 loadImmediately:(BOOL)arg2;
- (void)setWrapBehaviorY:(int)arg1;
- (void)setWrapBehaviorX:(int)arg1;
- (BOOL)loadTexture;
- (void)setWrapBehavior:(int)arg1;
- (BOOL)decodeTexture;
- (unsigned int)token;

@end
