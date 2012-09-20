/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUPlaylistCellConfiguration : IUMediaEntityCellConfiguration  {
    int _groupingType;
}

+ (float)rowHeightForGlobalContext:(id)arg1;
+ (id)backgroundColorWithModifiers:(unsigned int)arg1;

- (void)reloadLayoutInformation;
- (void)reloadImages;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (BOOL)getShadowColor:(id*)arg1 offset:(struct CGSize { float x1; float x2; }*)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)init;
- (void)configureForEntity:(id)arg1 query:(id)arg2 entityIndex:(unsigned int)arg3 entityCount:(unsigned int)arg4;
- (void)reloadStringsWithProperties:(id)arg1;

@end
