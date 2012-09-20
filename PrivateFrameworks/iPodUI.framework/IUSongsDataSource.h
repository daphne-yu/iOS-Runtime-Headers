/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString;

@interface IUSongsDataSource : IUMediaQueriesDataSource  {
    NSString *_syncProgressString;
    int _syncAssetTotalToken;
    BOOL _syncAssetTotalTokenIsValid;
    int _syncCurrentAssetNumberToken;
    BOOL _syncCurrentAssetNumberTokenIsValid;
    unsigned int _syncAssetTotal;
    unsigned int _syncCurrentAssetNumber;
}

+ (id)queryItemPropertiesToFetch;
+ (int)mediaEntityType;
+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;

- (Class)cellConfigurationClass;
- (void)dealloc;
- (id)init;
- (void)_updateSyncProgressString;
- (BOOL)allowsDownloadingAllEntities;
- (int)_containingParentEntityType;
- (Class)songCellConfigurationGlobalContextClass;
- (id)countStringFormat;
- (void)createGlobalContexts;
- (unsigned int)requiredEntityCountForSections;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (BOOL)allowsDeletion;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (void)reloadActionRows;
- (BOOL)canShowDownloadAllEntities;

@end
