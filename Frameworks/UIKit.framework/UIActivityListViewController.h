/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIActivityViewController, NSArray;

@interface UIActivityListViewController : UIViewController <UIPopoverControllerDelegate> {
    NSArray *_activities;
    UIActivityViewController *_activityViewController;
}

@property UIActivityViewController * activityViewController;
@property(retain) NSArray * activities;


- (void)dealloc;
- (id)activities;
- (void)reloadActivity:(id)arg1;
- (id)initWithActivityViewController:(id)arg1 activities:(id)arg2;
- (void)setActivities:(id)arg1;
- (void)dimStatusBar:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHeaderVisible:(BOOL)arg1;
- (void)setActivityViewController:(id)arg1;
- (id)activityViewController;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (unsigned int)supportedInterfaceOrientations;

@end
