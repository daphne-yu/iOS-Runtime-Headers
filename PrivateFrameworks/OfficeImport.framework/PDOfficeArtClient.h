/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDPlaceholder, PDAnimationInfo, OADImageRecolorInfo;

@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient> {
    OADImageRecolorInfo *mImageRecolorInfo;
    PDPlaceholder *mPlaceholder;
    BOOL mIsComment;
    PDAnimationInfo *mAnimationInfo;
    BOOL mHasOleChart;
    int mInheritedTextStylePlaceholderType;
}

@property int inheritedTextStylePlaceholderType;


- (void)dealloc;
- (id)init;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (int)inheritedTextStylePlaceholderType;
- (id)animationInfo;
- (void)setIsComment:(BOOL)arg1;
- (BOOL)isComment;
- (id)imageRecolorInfo;
- (BOOL)hasOleChart;
- (void)setHasOleChart:(BOOL)arg1;
- (void)setImageRecolorInfo:(id)arg1;
- (void)setInheritedTextStylePlaceholderType:(int)arg1;
- (void)setAnimationInfo:(id)arg1;
- (BOOL)hasAnimationInfo;
- (BOOL)hasPlaceholder;
- (BOOL)hasBounds;

@end
