/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString;

@interface IUGroupCellConfiguration : IUMediaEntityCellConfiguration  {
    int _groupingType;
    unsigned int _entityIndex;
    NSString *_subtitleProperty;
    NSString *_subtitleMediaItemProperty;
}

@property(copy) NSString * subtitleMediaItemProperty;

+ (float)rowHeightForGlobalContext:(id)arg1;

- (struct CGSize { float x1; float x2; })artworkSize;
- (void)reloadLayoutInformation;
- (void)reloadImages;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (void)setSubtitleMediaItemProperty:(id)arg1;
- (id)subtitleMediaItemProperty;
- (id)backgroundColorForImageAtIndex:(unsigned int)arg1;
- (void)invalidateDynamicTrackCaches;
- (id)untruncationCalloutString;
- (void)configureForEntity:(id)arg1 query:(id)arg2 entityIndex:(unsigned int)arg3 entityCount:(unsigned int)arg4;
- (void)reloadStringsWithProperties:(id)arg1;

@end
