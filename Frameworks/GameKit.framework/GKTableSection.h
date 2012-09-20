/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSError, NSString, NSOrderedSet, NSSet, NSIndexSet, GKNetworkImageSource;

@interface GKTableSection : NSObject <GKTableSection, GKTableSectionLoadingStatus> {
    SEL _action;
    SEL _didShowMoreAction;
    NSOrderedSet *_items;
    NSOrderedSet *_visibleItems;
    int _visibleItemCount;
    int _showMoreItemCount;
    BOOL _usesTopCapTitle;
    BOOL _supportsRowAnimation;
    NSOrderedSet *_itemsBeforeRefresh;
    NSOrderedSet *_itemsBeforeUpdate;
    BOOL _loaded;
    BOOL _loading;
    NSError *_loadError;
    BOOL _needsRedisplay;
    NSString *_iconURLStringKeyValuePath;
    GKNetworkImageSource *_iconSource;
    NSSet *_itemsLoadingPurgeableData;
    NSIndexSet *_indexesOfRowsWithLoadedData;
    int _loadDataReentryCount;
}

@property SEL action;
@property SEL didShowMoreAction;
@property(retain) NSOrderedSet * items;
@property(retain) NSOrderedSet * visibleItems;
@property int visibleItemCount;
@property int showMoreItemCount;
@property(readonly) BOOL showMoreVisible;
@property BOOL usesTopCapTitle;
@property(retain) NSIndexSet * indexesOfRowsWithLoadedData;
@property(retain) NSOrderedSet * itemsBeforeUpdate;
@property(retain) GKNetworkImageSource * iconSource;
@property(retain) NSString * iconURLStringKeyValuePath;
@property BOOL supportsRowAnimation;
@property BOOL needsRedisplay;
@property(retain) NSOrderedSet * itemsBeforeRefresh;
@property int loadDataReentryCount;
@property(retain) NSSet * itemsLoadingPurgeableData;
@property(retain) NSString * title;
@property(retain) NSString * secondaryTitle;
@property(retain) NSString * abbreviatedTitle;
@property BOOL loading;
@property BOOL loaded;
@property(retain) NSError * loadError;
@property BOOL hasContent;


- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)_gkDescription;
- (void)setLoadDataReentryCount:(int)arg1;
- (int)loadDataReentryCount;
- (void)setItemsLoadingPurgeableData:(id)arg1;
- (id)itemsLoadingPurgeableData;
- (void)setIconURLStringKeyValuePath:(id)arg1;
- (BOOL)showMoreVisible;
- (void)setItemsBeforeUpdate:(id)arg1;
- (void)tableView:(id)arg1 animateTransitionFromItems:(id)arg2 toItems:(id)arg3 atSectionIndex:(int)arg4;
- (id)itemsBeforeUpdate;
- (BOOL)supportsRowAnimation;
- (id)itemsBeforeRefresh;
- (void)setItemsBeforeRefresh:(id)arg1;
- (id)sectionHeaderTitleInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForFooterRow:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderRow:(int)arg2;
- (int)visibleItemCountInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 isFooterRow:(int)arg2;
- (id)tableView:(id)arg1 sectionHeaderCellForIndexPath:(id)arg2;
- (int)showMoreItemCount;
- (int)visibleItemCount;
- (void)tableView:(id)arg1 didSelectItem:(id)arg2;
- (BOOL)showMoreVisibleInTableView:(id)arg1;
- (id)unloadedRowsFromRowSet:(id)arg1;
- (void)tableView:(id)arg1 loadPurgeableDataForItem:(id)arg2 thenUpdateView:(id)arg3;
- (id)tableView:(id)arg1 section:(int)arg2 itemsForRows:(id)arg3;
- (id)iconSourceForItem:(id)arg1;
- (id)iconURLStringKeyValuePath;
- (id)iconSource;
- (void)setSupportsRowAnimation:(BOOL)arg1;
- (void)setDidShowMoreAction:(SEL)arg1;
- (void)setShowMoreItemCount:(int)arg1;
- (void)setLoadError:(id)arg1;
- (id)loadError;
- (void)tableView:(id)arg1 loadPurgeableDataForSectionIndex:(int)arg2 rows:(id)arg3 thenUpdateView:(id)arg4;
- (void)removeItems:(id)arg1;
- (id)tableView:(id)arg1 sectionIndex:(int)arg2 indexPathForItem:(id)arg3;
- (BOOL)tableView:(id)arg1 animateUpdatingSectionAtIndex:(int)arg2;
- (BOOL)tableView:(id)arg1 canUpdateFromSection:(id)arg2;
- (BOOL)tableView:(id)arg1 animateReloadingSectionAtIndex:(int)arg2;
- (BOOL)needsRedisplay;
- (void)tableView:(id)arg1 showMoreInSection:(int)arg2;
- (id)iconURLStringForItem:(id)arg1;
- (BOOL)tableView:(id)arg1 row:(int*)arg2 column:(int*)arg3 forItem:(id)arg4;
- (SEL)didShowMoreAction;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2;
- (void)tableView:(id)arg1 loadAdditionalDataForItems:(id)arg2 thenUpdateView:(id)arg3;
- (id)tableView:(id)arg1 section:(int)arg2 rowIndexesForItems:(id)arg3;
- (id)tableView:(id)arg1 unloadedItemsInSection:(int)arg2 rows:(id)arg3;
- (BOOL)tableView:(id)arg1 isShowMoreRow:(int)arg2;
- (BOOL)tableView:(id)arg1 isHeaderRow:(int)arg2;
- (void)setNeedsRedisplay:(BOOL)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setVisibleItemCount:(int)arg1;
- (void)setVisibleItems:(id)arg1;
- (BOOL)tableView:(id)arg1 isContentRow:(int)arg2;
- (BOOL)usesTopCapTitle;
- (id)visibleItems;
- (void)setIconSource:(id)arg1;
- (int)tableView:(id)arg1 itemIndexForIndexPath:(id)arg2;
- (int)footerRowCountInTableView:(id)arg1;
- (int)contentRowCountInTableView:(id)arg1;
- (int)headerRowCountInTableView:(id)arg1;
- (int)sectionItemCountInTableView:(id)arg1;
- (BOOL)loading;
- (float)tableView:(id)arg1 heightForContentRow:(int)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (int)columnCountInTableView:(id)arg1;
- (void)setIndexesOfRowsWithLoadedData:(id)arg1;
- (id)indexesOfRowsWithLoadedData;
- (void)forceReloadInTableView:(id)arg1;
- (void)didRefresh;
- (void)willRefresh;
- (id)tableView:(id)arg1 objectForIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 loadAdditionalDataForSection:(int)arg2 rows:(id)arg3 thenUpdateView:(id)arg4;
- (int)dataPageSizeForRowsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectIndexPath:(id)arg2;
- (id)viewForSectionHeaderInTableView:(id)arg1;
- (id)alternateTitleForHeaderInTableView:(id)arg1;
- (id)secondaryTitleForHeaderInTableView:(id)arg1;
- (id)titleForHeaderInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfColumnsForRow:(int)arg2;
- (struct { unsigned int x1; unsigned char x2; unsigned char x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })currentMetricsInTableView:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (void)setUsesTopCapTitle:(BOOL)arg1;
- (int)rowCountInTableView:(id)arg1;
- (void)startLoading;
- (SEL)action;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)stopLoading;
- (void)setAction:(SEL)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (void)setItems:(id)arg1;
- (id)items;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)loaded;
- (void)setLoaded:(BOOL)arg1;

@end
