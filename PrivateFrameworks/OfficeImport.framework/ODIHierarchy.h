/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ODIState, NSMutableDictionary;

@interface ODIHierarchy : NSObject  {
    int mType;
    int mMaxMappableTreeDepth;
    ODIState *mState;
    NSMutableDictionary *mNodeInfoMap;
}

+ (BOOL)mapIdentifier:(id)arg1 state:(id)arg2;

- (void)dealloc;
- (void)mapNode:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfNode:(id)arg1;
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3;
- (void)createInfoForNode:(id)arg1 depth:(int)arg2;
- (id)initWithType:(int)arg1 state:(id)arg2;
- (void)map;
- (id)infoForNode:(id)arg1;
- (void)mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1;
- (struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)mapRangesForNode:(id)arg1;

@end
