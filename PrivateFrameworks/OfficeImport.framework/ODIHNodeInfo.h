/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIHNodeInfo : NSObject  {
    int mTreeDepth;
    int mRow;
    struct ODIHRange { 
        float mMid; 
        float mLength; 
    } mXRange;
    BOOL mConnectToVerticalSide;
    int mExtraRowsBetweenParentAndSelf;
    float mXOffsetRelativeToParent;
    struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *mXRanges;
}


- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (int)row;
- (struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)xRanges;
- (void)addToXOffsetRelativeToParent:(float)arg1;
- (void)setXOffsetRelativeToParent:(float)arg1;
- (float)xOffsetRelativeToParent;
- (void)setExtraRowsBetweenParentAndSelf:(int)arg1;
- (int)extraRowsBetweenParentAndSelf;
- (void)setConnectToVerticalSide:(BOOL)arg1;
- (BOOL)connectToVerticalSide;
- (void)setRow:(int)arg1;
- (void)setTreeDepth:(int)arg1;
- (int)treeDepth;
- (void)setXRange:(struct ODIHRange { float x1; float x2; })arg1;
- (struct ODIHRange { float x1; float x2; })xRange;

@end
