/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADInterstitialView;

@interface ADInterstitialModalViewController : UIViewController <ADInterstitialViewDelegate> {
    ADInterstitialView *_interstitialView;
    BOOL _hasAppeared;
}

@property(retain) ADInterstitialView * interstitialView;
@property BOOL hasAppeared;


- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setHasAppeared:(BOOL)arg1;
- (BOOL)hasAppeared;
- (id)interstitialView;
- (void)setInterstitialView:(id)arg1;
- (void)interstitialViewActionDidFinish:(id)arg1;
- (BOOL)interstitialViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (void)interstitialViewDidLoadAd:(id)arg1;
- (void)interstitialViewWillLoadAd:(id)arg1;
- (void)interstitialView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)interstitialViewDidUnloadAd:(id)arg1;

@end
