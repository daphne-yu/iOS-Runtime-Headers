/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKICSPreviewModel, NSMutableArray, <EKICSPreviewListDelegate>;

@interface EKICSPreviewListController : UITableViewController  {
    EKICSPreviewModel *_model;
    BOOL _allowsImport;
    BOOL _allowsSubitems;
    NSMutableArray *_sections;
    <EKICSPreviewListDelegate> *_listDelegate;
}

@property BOOL allowsImport;
@property BOOL allowsSubitems;
@property <EKICSPreviewListDelegate> * listDelegate;


- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)viewDidLoad;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)listDelegate;
- (void)importAllPressed:(id)arg1;
- (void)updateImportButton;
- (void)buildSections;
- (BOOL)allowsImport;
- (void)setAllowsImport:(BOOL)arg1;
- (void)setListDelegate:(id)arg1;
- (BOOL)allowsSubitems;
- (void)setAllowsSubitems:(BOOL)arg1;
- (id)initWithModel:(id)arg1;

@end
