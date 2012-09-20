/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface ADTapGestureRecognizer : UIGestureRecognizer  {
    int _finalTrackingID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _touchDownHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _touchMovedHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _touchUpHandler;

}

@property int finalTrackingID;
@property(copy) id touchDownHandler;
@property(copy) id touchMovedHandler;
@property(copy) id touchUpHandler;


- (void)reset;
- (void)dealloc;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)touchUpHandler;
- (id)touchMovedHandler;
- (id)touchDownHandler;
- (int)finalTrackingID;
- (void)setFinalTrackingID:(int)arg1;
- (void)setTouchUpHandler:(id)arg1;
- (void)setTouchMovedHandler:(id)arg1;
- (void)setTouchDownHandler:(id)arg1;

@end
