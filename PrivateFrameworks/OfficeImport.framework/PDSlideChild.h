/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColorMap, OADThemeOverrides;

@interface PDSlideChild : PDSlideBase  {
    BOOL mShowMasterPlaceholderAnimations;
    BOOL mShowMasterShapes;
    OADThemeOverrides *mThemeOverrides;
    OADColorMap *mColorMapOverride;
}


- (void)dealloc;
- (id)init;
- (void)setShowMasterPlaceholderAnimations:(BOOL)arg1;
- (BOOL)showMasterPlaceholderAnimations;
- (void)setColorMapOverride:(id)arg1;
- (void)setShowMasterShapes:(BOOL)arg1;
- (id)colorMapOverride;
- (id)themeOverrides;
- (id)drawingTheme;
- (void)doneWithContent;
- (BOOL)showMasterShapes;
- (id)fontScheme;
- (id)colorMap;
- (id)styleMatrix;
- (id)colorScheme;

@end
