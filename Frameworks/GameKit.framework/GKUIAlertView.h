/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GKUIAlertView : UIAlertView <UIAlertViewDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _dismissHandler;

}

@property(copy) id dismissHandler;

+ (id)_gkAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 dismissHandler:(id)arg5;

- (id)dismissHandler;
- (void)setDismissHandler:(id)arg1;
- (void)dealloc;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)show;

@end
