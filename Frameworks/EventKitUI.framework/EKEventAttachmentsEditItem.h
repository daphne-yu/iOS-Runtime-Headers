/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray;

@interface EKEventAttachmentsEditItem : EKEventEditItem <EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate, UIDocumentInteractionControllerDelegate> {
    NSArray *_cellControllers;
}


- (void)dealloc;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)documentInteractionControllerWillEndPreview:(id)arg1;
- (id)owningEventForAttachmentEditViewController:(id)arg1;
- (BOOL)_shouldCondenseIntoSingleItem;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (id)_parentViewControllerForAttachmentCellController;
- (void)_cleanUpCellControllers;
- (BOOL)usesDetailViewControllerForSubitem:(int)arg1 inSubsection:(int)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(int)arg2 inSubsection:(int)arg3;
- (void)refreshFromCalendarItemAndStore;
- (void)editor:(id)arg1 didSelectSubitem:(int)arg2 inSubsection:(int)arg3;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 inSubsection:(int)arg2 forWidth:(float)arg3;
- (id)cellForSubitemAtIndex:(int)arg1 inSubsection:(int)arg2;
- (int)numberOfSubitemsInSubsection:(int)arg1;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;

@end
