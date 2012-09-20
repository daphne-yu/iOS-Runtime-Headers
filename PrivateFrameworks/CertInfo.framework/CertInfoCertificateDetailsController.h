/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class NSArray, UIBarButtonItem, <CertInfoCertificateDetailsControllerDelegate>;

@interface CertInfoCertificateDetailsController : UITableViewController  {
    <CertInfoCertificateDetailsControllerDelegate> *_delegate;
    NSArray *_sectionDictionaries;
    UIBarButtonItem *_doneButton;
    unsigned int _showsDoneButton : 1;
}

@property <CertInfoCertificateDetailsControllerDelegate> * delegate;
@property BOOL showsDoneButton;


- (void)_doneButtonPressed:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)showsDoneButton;
- (void)setShowsDoneButton:(BOOL)arg1;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (id)_propertiesForIndexPath:(id)arg1;
- (id)_sectionsForProperties:(id)arg1 currentSectionDictionary:(id)arg2;
- (id)_sectionsForProperties:(id)arg1;
- (id)initWithCertificateProperties:(id)arg1;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 certificateIndex:(long)arg2;

@end
