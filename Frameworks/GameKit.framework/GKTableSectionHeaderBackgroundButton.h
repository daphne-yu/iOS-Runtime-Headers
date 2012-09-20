/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKTableSectionHeaderBackgroundButton : GKTableSection  {
    Class _contentViewClass;
    NSString *_statusText;
}

@property Class contentViewClass;
@property(retain) NSString * statusText;
@property(readonly) BOOL isHidden;


- (void)setStatusText:(id)arg1;
- (void)setContentViewClass:(Class)arg1;
- (id)statusText;
- (Class)contentViewClass;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (id)viewForSectionHeaderInTableView:(id)arg1;
- (id)titleForHeaderInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfColumnsForRow:(int)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (int)rowCountInTableView:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)allowsSelection;
- (float)heightForHeaderInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)isHidden;

@end
