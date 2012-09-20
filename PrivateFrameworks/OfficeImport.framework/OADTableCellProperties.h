/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableCell3DProperties, OADStroke, OADFill;

@interface OADTableCellProperties : NSObject  {
    OADStroke *mLeftStroke;
    BOOL mIsLeftStrokeOverridden;
    OADStroke *mRightStroke;
    BOOL mIsRightStrokeOverridden;
    OADStroke *mTopStroke;
    BOOL mIsTopStrokeOverridden;
    OADStroke *mBottomStroke;
    BOOL mIsBottomStrokeOverridden;
    OADStroke *mTopLeftToBottomRightStroke;
    BOOL mIsTopLeftToBottomRightStrokeOverridden;
    OADStroke *mBottomLeftToTopRightStroke;
    BOOL mIsBottomLeftToTopRightStrokeOverridden;
    OADTableCell3DProperties *mThreeDProperties;
    BOOL mIsThreeDPropertiesOverridden;
    OADFill *mFill;
    BOOL mIsFillOverridden;
    float mLeftMargin;
    BOOL mIsLeftMarginOverridden;
    float mRightMargin;
    BOOL mIsRightMarginOverridden;
    float mTopMargin;
    BOOL mIsTopMarginOverridden;
    float mBottomMargin;
    BOOL mIsBottomMarginOverridden;
    int mTextFlow;
    BOOL mIsTextFlowOverridden;
    int mTextAnchor;
    BOOL mIsTextAnchorOverridden;
    BOOL mTextAnchorCenter;
    BOOL mIsTextAnchorCenterOverridden;
    int mTextHorizontalOverflow;
    BOOL mIsTextHorizontalOverflowOverridden;
}


- (void)dealloc;
- (void)setRightMargin:(float)arg1;
- (id)fill;
- (BOOL)isTextHorizontalOverflowOverridden;
- (void)setTextHorizontalOverflow:(int)arg1;
- (int)textHorizontalOverflow;
- (BOOL)isTextAnchorCenterOverridden;
- (void)setTextAnchorCenter:(BOOL)arg1;
- (BOOL)textAnchorCenter;
- (BOOL)isTextFlowOverridden;
- (void)setTextFlow:(int)arg1;
- (int)textFlow;
- (BOOL)isThreeDPropertiesOverridden;
- (void)setThreeDProperties:(id)arg1;
- (id)threeDProperties;
- (BOOL)isBottomLeftToTopRightStrokeOverridden;
- (void)setBottomLeftToTopRightStroke:(id)arg1;
- (BOOL)isTopLeftToBottomRightStrokeOverridden;
- (void)setTopLeftToBottomRightStroke:(id)arg1;
- (id)stroke:(int)arg1;
- (id)bottomLeftToTopRightStroke;
- (id)topLeftToBottomRightStroke;
- (id)strokeNormalToDir:(int)arg1 bound:(int)arg2;
- (void)setTextAnchor:(int)arg1;
- (void)setBottomStroke:(id)arg1;
- (void)setTopStroke:(id)arg1;
- (void)setRightStroke:(id)arg1;
- (void)setLeftStroke:(id)arg1;
- (void)setBottomMargin:(float)arg1;
- (BOOL)isTextAnchorOverridden;
- (id)rightStroke;
- (BOOL)isRightStrokeOverridden;
- (id)leftStroke;
- (BOOL)isLeftStrokeOverridden;
- (id)bottomStroke;
- (BOOL)isBottomStrokeOverridden;
- (id)topStroke;
- (BOOL)isTopStrokeOverridden;
- (int)textAnchor;
- (void)setFill:(id)arg1;
- (BOOL)isFillOverridden;
- (void)setLeftMargin:(float)arg1;
- (void)setTopMargin:(float)arg1;
- (BOOL)isBottomMarginOverridden;
- (BOOL)isTopMarginOverridden;
- (BOOL)isRightMarginOverridden;
- (BOOL)isLeftMarginOverridden;
- (float)bottomMargin;
- (float)topMargin;
- (float)rightMargin;
- (float)leftMargin;

@end
