/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WKQuadObject : NSObject  {
    struct _WKQuad { 
        struct CGPoint { 
            float x; 
            float y; 
        } p1; 
        struct CGPoint { 
            float x; 
            float y; 
        } p2; 
        struct CGPoint { 
            float x; 
            float y; 
        } p3; 
        struct CGPoint { 
            float x; 
            float y; 
        } p4; 
    } _quad;
}


- (id).cxx_construct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })quad;
- (id)initWithQuad:(struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })arg1;

@end
