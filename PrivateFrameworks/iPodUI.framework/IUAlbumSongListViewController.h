/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUAlbumSongListViewController : IUStoreCompletionListViewController <IUAlbumOfferTableFooterViewDelegate> {
}

+ (Class)tableViewCellClass;

- (BOOL)_footerShouldDrawInAlternateStyle;
- (id)newOfferTableFooterViewWithStoreCompletionOffering:(id)arg1;
- (BOOL)_shouldShowOfferButtonOrLabelForOffering:(id)arg1;
- (void)albumOfferTableFooterView:(id)arg1 showItemsInOffer:(id)arg2;
- (void)updateFooterView;
- (BOOL)hideActionRowsOnAppear;

@end
