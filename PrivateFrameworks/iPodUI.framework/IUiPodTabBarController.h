/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUModalContext, NSArray, NSString, UIViewController, IUMoreListDelegateProxy;

@interface IUiPodTabBarController : UITabBarController <UINavigationControllerDelegate, ViewControllerArchiveNode> {
    BOOL _allowsSearch;
    NSArray *_availableIdentifiers;
    NSString *_initialIdentifier;
    BOOL _isRestoringForModalPresentation;
    IUModalContext *_modalContext;
    IUMoreListDelegateProxy *_moreListDelegateProxy;
    IUModalContext *_presentedModalContext;
    int _style;
}

@property int style;
@property(readonly) NSArray * identifiers;
@property(retain) IUModalContext * modalContext;
@property(readonly) NSString * selectedIdentifier;
@property(readonly) UIViewController * topViewController;
@property BOOL allowsSearch;

+ (Class)_moreNavigationControllerClass;
+ (id)_newNavigationControllerWithRootContextIdentifier:(id)arg1 style:(int)arg2;
+ (id)defaultIdentifiers;

- (id)selectedIdentifier;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_enabledMediaTypesDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)tabBar:(id)arg1 willShowCustomizationSheet:(id)arg2 withNavigationBar:(id)arg3;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)_setSelectedViewController:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)topViewController;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (int)style;
- (void)setStyle:(int)arg1;
- (id)identifiers;
- (void)setAllowsSearch:(BOOL)arg1;
- (BOOL)allowsSearch;
- (void)switchToShortcutIdentifier:(id)arg1;
- (void)switchToPlaylistContextForSpecifier:(id)arg1 behindTopController:(BOOL)arg2;
- (void)switchToAlbumContextForSpecifier:(id)arg1 behindTopController:(BOOL)arg2;
- (void)_reloadIPodViewControllers;
- (void)_updateControllersAvailable;
- (id)visibleCustomViewControllers;
- (id)_rawSelectedIdentifier;
- (BOOL)_canDisplayItemWithIdentifier:(id)arg1;
- (void)_fixMoreListNavigationBar;
- (BOOL)_shouldPushContextDuringSwitch:(id)arg1;
- (BOOL)_pushContextForSpecifier:(id)arg1 unlessMatchesFinalIdentifier:(id)arg2 animated:(BOOL)arg3;
- (void)_switchToContextBehindCurrentController:(id)arg1 withRootControllerIdentifier:(id)arg2 withPlaybackDataSource:(id)arg3;
- (id)_navigationControllerForIdentifier:(id)arg1 outIndex:(unsigned int*)arg2;
- (void)_setNavigationControllerDelegates:(id)arg1;
- (id)_copyTabBarOrdering;
- (id)initWithControllersWithAvailableIdentifiers:(id)arg1 initialIdentifier:(id)arg2 maximumNumberOfItems:(int)arg3;
- (id)initWithControllersWithAvailableIdentifiers:(id)arg1 initialIdentifier:(id)arg2;
- (void)_updateViewControllersModalContext;
- (void)presentModalContext:(id)arg1 animated:(BOOL)arg2;
- (void)switchToPlaylistContextForSpecifier:(id)arg1 behindTopController:(BOOL)arg2 withPlaybackDataSource:(id)arg3;
- (void)modalContext:(id)arg1 didRestoreArchivedContexts:(id)arg2;
- (BOOL)restoreArchivedContexts:(id)arg1;
- (void)modalContext:(id)arg1 willRestoreArchivedContexts:(id)arg2;
- (id)copyArchivableContexts;
- (id)initWithControllersWithAvailableIdentifiers:(id)arg1;
- (void)setModalContext:(id)arg1;
- (void)switchToContext:(id)arg1 withRootControllerIdentifier:(id)arg2;
- (void)selectNextIdentifier;
- (void)selectIdentifierAfterIdentifier:(id)arg1;
- (id)modalContext;
- (void)selectControllerWithIdentifier:(id)arg1;
- (void)_availableMediaLibrariesDidChangeNotification:(id)arg1;

@end
