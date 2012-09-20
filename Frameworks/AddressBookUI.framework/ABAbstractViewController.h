/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>, ABModel;

@interface ABAbstractViewController : UIViewController  {
    ABModel *_model;
    <ABStyleProvider> *_styleProvider;
}

@property(retain) ABModel * model;
@property(retain) <ABStyleProvider> * styleProvider;


- (void)dealloc;
- (void)updateNavigationButtons;
- (id)model;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)setParentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)setModel:(id)arg1;
- (int)behavior;
- (id)initWithModel:(id)arg1;
- (id)peoplePickerNavigationController;
- (id)styleProvider;
- (void)setStyleProvider:(id)arg1;
- (void)setAddressBook:(void*)arg1;

@end
