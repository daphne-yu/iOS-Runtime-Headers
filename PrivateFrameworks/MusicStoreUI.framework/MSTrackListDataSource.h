/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@interface MSTrackListDataSource : MSStructuredPageTableDataSource  {
}


- (id)_stylesheetString;
- (BOOL)canShowPreviewForItem:(id)arg1;
- (BOOL)canShowItemOfferButtonForItem:(id)arg1;
- (id)cellConfigurationForIndex:(int)arg1 item:(id)arg2;
- (Class)cellConfigurationClassForItem:(id)arg1;
- (void)reloadCellContexts;
- (float)heightForPlaceholderCells;
- (BOOL)canDoubleTapIndexPath:(id)arg1;
- (void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (id)placeholderCellForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (int)tableViewStyle;
- (id)headerViewForSection:(int)arg1;

@end
