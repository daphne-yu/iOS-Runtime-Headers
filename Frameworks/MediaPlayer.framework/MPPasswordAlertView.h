/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UITextField;

@interface MPPasswordAlertView : UIAlertView <UIAlertViewDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    int _style;
    UITextField *_passwordTextField;
}

@property(readonly) int style;


- (id)initWithStyle:(int)arg1 routeName:(id)arg2 completionHandler:(id)arg3;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (int)style;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;

@end
