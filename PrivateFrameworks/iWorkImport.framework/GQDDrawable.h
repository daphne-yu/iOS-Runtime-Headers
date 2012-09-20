/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDAffineGeometry, GQDBezierPath;

@interface GQDDrawable : NSObject <GQWrapPointGenerator> {
    GQDAffineGeometry *mGeometry;
    struct __CFURL { } *mUrl;
    char *mUid;
    GQDBezierPath *mWrapPath;
    GQDAffineGeometry *mWrapGeometry;
    struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > { struct _Rb_tree<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::_Identity<GQUtility::ObjcSharedPtr<GQDWrapPoint>>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > { struct _Rb_tree_impl<GQUtility::NSObjectComparator<GQDWrapPoint>, false> { struct NSObjectComparator<GQDWrapPoint> { SEL x_1_3_1; } x_1_2_1; struct _Rb_tree_node_base { int x_2_3_1; struct _Rb_tree_node_base {} *x_2_3_2; struct _Rb_tree_node_base {} *x_2_3_3; struct _Rb_tree_node_base {} *x_2_3_4; } x_1_2_2; unsigned int x_1_2_3; } x_1_1_1; } x1; } *mInnerWrapPoints;
    BOOL mHasPagesOrder;
    long mPagesOrder;
}


- (void)dealloc;
- (const char *)uid;
- (id)geometry;
- (struct __CFURL { }*)url;
- (int)pagesOrder;
- (BOOL)hasPagesOrder;
- (int)collectWrapPointsForState:(id)arg1 graphicStyle:(id)arg2;
- (struct __CFString { }*)urlString;
- (void)clearWrapPoints;
- (struct vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > { struct _Vector_impl { struct ObjcSharedPtr<GQDWrapPoint> {} *x_1_1_1; struct ObjcSharedPtr<GQDWrapPoint> {} *x_1_1_2; struct ObjcSharedPtr<GQDWrapPoint> {} *x_1_1_3; } x1; }*)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (void)addWrapPoint:(id)arg1;
- (const struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > { struct _Rb_tree<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::_Identity<GQUtility::ObjcSharedPtr<GQDWrapPoint>>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > { struct _Rb_tree_impl<GQUtility::NSObjectComparator<GQDWrapPoint>, false> { struct NSObjectComparator<GQDWrapPoint> { SEL x_1_3_1; } x_1_2_1; struct _Rb_tree_node_base { int x_2_3_1; struct _Rb_tree_node_base {} *x_2_3_2; struct _Rb_tree_node_base {} *x_2_3_3; struct _Rb_tree_node_base {} *x_2_3_4; } x_1_2_2; unsigned int x_1_2_3; } x_1_1_1; } x1; }*)wrapPoints;
- (void)collectWrapPoints:(id)arg1 forPath:(struct CGPath { }*)arg2 context:(struct FindLinesContext { BOOL x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct __CFArray {} *x4; BOOL x5; int x6; }*)arg3;
- (struct CGPath { }*)createBezierPath;

@end
