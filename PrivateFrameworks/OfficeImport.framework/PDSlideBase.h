/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableStyle, OADBackground, NSString, NSArray, PDAnimation, PDTransition;

@interface PDSlideBase : NSObject  {
    NSString *mName;
    NSArray *mDrawables;
    OADBackground *mBackground;
    PDAnimation *mAnimation;
    PDTransition *mTransition;
    OADTableStyle *mDefaultTableStyle;
    unsigned int mIsHidden : 1;
    unsigned int mIsDoneWithContent : 1;
}

+ (int)inheritedPlaceholderType:(int)arg1;

- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)init;
- (id)transition;
- (void)setTransition:(id)arg1;
- (id)background;
- (void)setBackground:(id)arg1;
- (id)animation;
- (BOOL)isHidden;
- (void)setDefaultTableStyle:(id)arg1;
- (void)setPpt9AnimationDataForCacheItem:(id)arg1 order:(int)arg2;
- (void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 useBaseTypeMatch:(BOOL)arg3 overrideIndex:(BOOL)arg4;
- (void)setIsHidden:(BOOL)arg1;
- (void)addSlideNumberPlaceholder:(id)arg1;
- (void)generatePpt9Animations:(id)arg1;
- (BOOL)hasPpt9Animations;
- (BOOL)hasPpt10Animations;
- (void)setDrawables:(id)arg1 defaultTextListStyle:(id)arg2;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)drawingTheme;
- (id)defaultTableStyle;
- (void)doneWithContent;
- (id)drawables;
- (id)parentSlideBase;
- (id)fontScheme;
- (id)defaultTheme;
- (id)colorMap;
- (id)styleMatrix;
- (id)colorScheme;

@end
