/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@class UIAlertView, ABPeoplePickerNavigationController, UIActionSheet;

@interface MSTonePurchaseContinuation : SUPurchaseContinuation <ABPeoplePickerNavigationControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    ABPeoplePickerNavigationController *_peoplePicker;
}


- (void)_pickAssigneeToneStyle;
- (id)_copyAllowedToneStyles;
- (void)_destroyAlertView;
- (void)_destroyActionSheet;
- (id)initWithPurchase:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)start;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)_dismissPeoplePicker;
- (void)_showPeoplePicker;

@end
