/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface UIActivity : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _activityCompletionHandler;

}

@property(copy) id activityCompletionHandler;

+ (id)_activityImageForPrerenderedImage:(id)arg1;
+ (id)_activityGenericImage:(id)arg1;
+ (id)_activityImageForApplication:(id)arg1;
+ (id)_activityFunctionImage:(id)arg1;

- (void)dealloc;
- (void)_setSubject:(id)arg1;
- (BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (id)_embeddedActivityViewController;
- (void)_setActivityCompletionHandler:(id)arg1;
- (BOOL)_canAdjustOrder;
- (BOOL)_canPerformWithSuppliedActivityItems:(id)arg1;
- (id)activityCompletionHandler;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityCompletionHandler:(id)arg1;
- (id)activityViewController;
- (id)activityImage;
- (void)_cleanup;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)activityDidFinish:(BOOL)arg1;
- (id)_beforeActivity;

@end
