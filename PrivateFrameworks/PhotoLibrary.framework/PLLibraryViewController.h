/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITableView, <PLLibraryViewControllerDelegate>, UIActionSheet, UIView, PLLibraryView, PLSyncProgressView, PLEmptyAlbumView, PLPhotosPickerSession;

@interface PLLibraryViewController : PLAbstractLibraryViewController <UIActionSheetDelegate, PLLibraryTableViewCellEditingDelegate, UITableViewDataSource, UITableViewDelegate> {
    PLLibraryView *_tableView;
    UIView *_bannerView;
    PLEmptyAlbumView *_emptyLibraryView;
    PLSyncProgressView *_syncProgressView;
    UIActionSheet *_deleteAlbumActionSheet;
    UIActionSheet *_invitationConfirmationSheet;
    unsigned int _renamingAlbumIndex;
    PLPhotosPickerSession *_activePhotosPickerSession;
    BOOL _albumListHasUnseenContent;
    struct { 
        unsigned int delegateDeterminesAccessoryType : 1; 
        unsigned int adjustedForKeyboard : 1; 
        unsigned int endEditingAfterKeyboardDismiss : 1; 
        unsigned int automaticallyRestoresConfiguration : 1; 
        unsigned int adjustsStatusBarStyle : 1; 
        unsigned int reserved : 26; 
    } _lvcFlags;
}

@property(readonly) UITableView * tableView;
@property(retain) UIView * bannerView;
@property <PLLibraryViewControllerDelegate> * delegate;
@property BOOL automaticallyRestoresConfiguration;
@property BOOL adjustsStatusBarStyle;


- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_keyboardDidHide:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)tableView;
- (id)contentScrollView;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)prepareForDefaultImageSnapshot;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)dismissSharedStreamOptionsViewController;
- (void)presentSharedStreamOptionsViewController:(id)arg1;
- (void)cancelAddPhotosSessionAnimated:(BOOL)arg1;
- (void)beginAddPhotosSessionForAlbum:(id)arg1 didShowHandler:(id)arg2 completionHandler:(id)arg3;
- (void)updateAlbumListHeader;
- (void)setSyncProgressVisible:(BOOL)arg1;
- (id)syncProgressView;
- (id)visibleCellViewForAlbumAtIndex:(unsigned int)arg1;
- (void)_updateAlbumListHasUnseenContent;
- (BOOL)updateInterfaceForDeletedAlbumIndexes:(id)arg1 addedIndexes:(id)arg2 changedIndexes:(id)arg3 isReordering:(BOOL)arg4 needsFullReload:(BOOL)arg5;
- (void)updateInterfaceForHasContentChange;
- (void)scrollToAlbumAtIndex:(unsigned int)arg1 animated:(BOOL)arg2 select:(BOOL)arg3;
- (void)setHiddenAlbum:(struct NSObject { Class x1; }*)arg1 animated:(BOOL)arg2;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (void)setAdjustsStatusBarStyle:(BOOL)arg1;
- (id)tableOffsetKey;
- (BOOL)_shouldShowEditButton;
- (BOOL)_shouldShowAlbumList;
- (void)updateNavigationItemButtons;
- (void)setAutomaticallyRestoresConfiguration:(BOOL)arg1;
- (void)setCurrentPickerSession:(id)arg1;
- (void)_navigateToAlbum:(struct NSObject { Class x1; }*)arg1 animated:(BOOL)arg2 completion:(id)arg3 allowShowingEmptyAlbumView:(BOOL)arg4;
- (void)_presentActionSheet:(id)arg1;
- (BOOL)_canReorderRowForAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)showInvitationConfirmationForAlbum:(id)arg1;
- (void)_updateCell:(id)arg1 forAlbum:(struct NSObject { Class x1; }*)arg2 animated:(BOOL)arg3;
- (unsigned int)_displayedAssetsCountForAlbum:(struct NSObject { Class x1; }*)arg1;
- (int)_cellEditStyleForAlbum:(struct NSObject { Class x1; }*)arg1;
- (BOOL)shouldShowUnreadIndicatorForAlbum:(struct NSObject { Class x1; }*)arg1;
- (float)_largestAccessoryWidth;
- (int)accessoryTypeForAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)fixContentInsetIfNeeded;
- (BOOL)adjustsStatusBarStyle;
- (BOOL)automaticallyRestoresConfiguration;
- (BOOL)albumIsDisplayedEnabled:(struct NSObject { Class x1; }*)arg1;
- (void)loadCurrentConfiguration:(id)arg1;
- (void)storeCurrentConfiguration:(id)arg1;
- (void)navigateToAlbum:(struct NSObject { Class x1; }*)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (int)interfaceIdiom;
- (void)navigateToRevealAlbum:(struct NSObject { Class x1; }*)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
- (void)tableViewCell:(id)arg1 didChangeTextToText:(id)arg2;
- (void)tableViewCellDidBeginEditingText:(id)arg1;

@end
