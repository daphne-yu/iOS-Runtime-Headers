/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKUIAlertView;

@interface GKAlertViewController : UIViewController <UIAlertViewDelegate> {
    GKUIAlertView *_alertView;
    BOOL _isShown;
}

@property BOOL isShown;
@property(retain) GKUIAlertView * alertView;

+ (id)alertViewControllerWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 dismissHandler:(id)arg5;

- (void)setIsShown:(BOOL)arg1;
- (id)alertView;
- (void)setAlertView:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isShown;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;

@end
