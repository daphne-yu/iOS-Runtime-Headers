/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UITextField;

@interface GKSignInInputSection : GKTableSection <UITextFieldDelegate> {
    UITextField *_usernameField;
    UITextField *_passwordField;
}

@property(retain) UITextField * usernameField;
@property(retain) UITextField * passwordField;


- (void)setPasswordField:(id)arg1;
- (void)setUsernameField:(id)arg1;
- (id)usernameField;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (id)viewForSectionFooterInTableView:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (int)rowCountInTableView:(id)arg1;
- (void)dealloc;
- (id)passwordField;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (float)heightForFooterInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
