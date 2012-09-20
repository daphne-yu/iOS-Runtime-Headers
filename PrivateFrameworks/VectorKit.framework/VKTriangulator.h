/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableData;

@interface VKTriangulator : NSObject  {
    void *_opaque_triangulator;
    unsigned long _segments_capacity;
    void *_opaque_segments;
    unsigned long _mesh_capacity;
    unsigned int *_mesh;
    NSMutableData *_scratch;
}


- (void)dealloc;
- (id)init;
- (BOOL)_triangulateIndicesInto:(id)arg1;
- (id)triangulateIndicesForPoints:(struct { int x1; int x2; }*)arg1 pointCount:(int)arg2;

@end
