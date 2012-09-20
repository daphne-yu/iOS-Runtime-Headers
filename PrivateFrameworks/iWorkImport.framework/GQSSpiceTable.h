/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQSSpiceTable : GQSTable  {
    struct __CFDictionary { } *mVectorUidToAlongMap;
    BOOL mReadingRowVectors;
    struct vector<float, std::allocator<float> > { struct _Vector_impl { float *x_1_1_1; float *x_1_1_2; float *x_1_1_3; } x1; } *mRowPositions;
    struct vector<float, std::allocator<float> > { struct _Vector_impl { float *x_1_1_1; float *x_1_1_2; float *x_1_1_3; } x1; } *mColumnPositions;
    float mCurrentCellMinX;
    float mCurrentCellMaxX;
    float mCurrentCellMinY;
    float mCurrentCellMaxY;
    id mCurrentCellStorage;
    id mCurrentCellStyle;
}


- (void)dealloc;
- (id)init;
- (void)aboutToReadColumnVectors;
- (void)aboutToReadRowVectors;
- (void)setAlongValue:(float)arg1 forOwnedVectorUid:(char *)arg2;
- (void)aboutToReadCells;
- (float)alongValueForVectorUid:(const char *)arg1;

@end
