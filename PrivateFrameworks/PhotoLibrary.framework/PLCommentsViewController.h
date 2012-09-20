/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLManagedAsset, PLCloudSharedComment, UITableView, CAGradientLayer, UIView, PLPhotoCommentEntryView, <PLCommentsViewControllerDelegate>, NSCache;

@interface PLCommentsViewController : UIViewController <PLCloudCommentsChangeObserver, PLDismissableViewController, UITableViewDelegate, UITableViewDataSource, UITextViewDelegate> {
    UITableView *_tableView;
    UIView *_tableContainerView;
    PLManagedAsset *_asset;
    CAGradientLayer *_maskLayer;
    PLPhotoCommentEntryView *_entryView;
    PLCloudSharedComment *_justInsertedComment;
    BOOL _justTappedSmileButton;
    BOOL _editMode;
    BOOL _temporaryKeyboardHideReshow;
    BOOL _shouldAdjustInitialScrollPosition;
    float _keyboardOverlap;
    <PLCommentsViewControllerDelegate> *_commentsControllerDelegate;
    UIView *_containerView;
    NSCache *_commentsHeightCache;
    BOOL _lastRowMasked;
}

@property(retain) PLManagedAsset * asset;
@property BOOL editMode;
@property <PLCommentsViewControllerDelegate> * commentsControllerDelegate;
@property BOOL lastRowMasked;
@property(retain) PLCloudSharedComment * justInsertedComment;


- (void)dealloc;
- (id)asset;
- (void)setAsset:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)cloudCommentsDidChange:(id)arg1;
- (id)commentsControllerDelegate;
- (void)setJustInsertedComment:(id)arg1;
- (id)justInsertedComment;
- (BOOL)_checkAndAlertMaxCommentsReachedWhenFinalizing:(BOOL)arg1;
- (void)_addCommentButtonTapped:(id)arg1;
- (void)_smileButtonTapped:(id)arg1;
- (id)_firstUnreadCloudComment;
- (id)_textInPostFieldTrimmingWhitespace;
- (void)_updatePostButtonAndPlaceholder;
- (void)_postCommentValidated:(id)arg1;
- (void)setLastRowMasked:(BOOL)arg1;
- (void)_adjustInitialScrollPosition:(BOOL)arg1;
- (void)_updateLayerMaskWithBoundsChange;
- (BOOL)lastRowMasked;
- (struct CGSize { float x1; float x2; })_preferredViewSizeInContainerSize:(struct CGSize { float x1; float x2; })arg1 forInterfaceOrientation:(int)arg2 tableViewSize:(struct CGSize { float x1; float x2; }*)arg3;
- (BOOL)_adjustTextEntrySizeForOrientation:(int)arg1;
- (float)_topTableMargin;
- (float)_tableViewHeightForWidth:(float)arg1 interfaceOrientation:(int)arg2;
- (float)_heightForComment:(id)arg1 forWidth:(float)arg2 forInterfaceOrientation:(int)arg3;
- (void)updateViewLayoutWithDuration:(double)arg1 completion:(id)arg2;
- (void)setCommentsControllerDelegate:(id)arg1;
- (void)setBottomMaskEnabled:(BOOL)arg1;
- (BOOL)prepareForDismissingAnimated:(BOOL)arg1;
- (void)cancelDeleteMode:(id)arg1;
- (void)setRasterization:(BOOL)arg1;
- (void)cancelCurrentAction:(id)arg1;
- (BOOL)editMode;
- (void)scrollToComment:(id)arg1 animated:(BOOL)arg2;
- (void)setEditMode:(BOOL)arg1;

@end
