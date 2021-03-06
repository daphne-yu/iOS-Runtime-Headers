/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIQuicklinksPageComponent, SKUIQuicklinksViewController;

@interface SKUIQuicklinksPageSection : SKUIStorePageSection <SKUIQuicklinksViewControllerDelegate> {
    SKUIQuicklinksViewController *_quicklinksViewController;
}

@property(readonly) SKUIQuicklinksPageComponent * pageComponent;

- (void).cxx_destruct;
- (id)_quicklinksViewController;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (int)numberOfCells;
- (void)quicklinksViewController:(id)arg1 didSelectLink:(id)arg2 atIndex:(int)arg3;
- (void)willAppearInContext:(id)arg1;

@end
