/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableData, NSMutableArray;

@interface VGLMultiTexturedMesh : VGLMesh  {
    int _sectionCount;
    NSMutableData *_ranges;
    NSMutableArray *_textures;
}


- (void)dealloc;
- (id)ranges;
- (int)stride;
- (void)addSectionOffset:(int)arg1 count:(int)arg2 texture:(id)arg3;
- (id)initWithStride:(int)arg1 primitiveType:(int)arg2 attributes:(const struct { int x1; int x2; int x3; }*)arg3 attributeCount:(unsigned char)arg4 vertices:(const void*)arg5 vertexCount:(int)arg6 indices:(const unsigned short*)arg7 indexCount:(int)arg8;
- (void)drawTrianglesWithContext:(id)arg1;

@end
