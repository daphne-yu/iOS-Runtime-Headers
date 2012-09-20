/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUFutureDownloadCellConfiguration : SUMediaItemCellConfiguration  {
    int _style;
}

+ (id)_copyDefaultContextForTable;
+ (id)_copyDefaultContextForGrid;
+ (id)copyDefaultContext;
+ (float)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (void)_reloadStringsFromItem;
- (void)_reloadStringsFromDownload;
- (void)_reloadLayoutInformationForGrid;
- (void)_reloadLayoutInformationForTable;
- (void)_reloadImagesForPreorder;
- (void)_reloadImagesForDownload;
- (BOOL)showContentRating;
- (int)mediaIconType;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (void)reloadImages;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (BOOL)getShadowColor:(id*)arg1 offset:(struct CGSize { float x1; float x2; }*)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)init;

@end
