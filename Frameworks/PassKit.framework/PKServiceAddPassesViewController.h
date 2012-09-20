/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSMutableData, UINavigationBar, WLCardGroupsController, UIProgressView, PKIngestibleCard, PKPassLibrary, NSMutableArray, NSURLConnection, WLCardGroupStackView, PKUIServiceView;

@interface PKServiceAddPassesViewController : UIViewController <WLXPCProxyTarget, WLCardStackViewDelegate, WLCardStackViewDatasource, WLCardGroupsControllerDelegate, UIScrollViewDelegate, PKServiceAddPassesViewControllerProtocol> {
    NSURLConnection *_downloadPassURLConnection;
    long long _downloadPassExpectedBytes;
    NSMutableData *_downloadPassData;
    int _containsCard;
    NSMutableArray *_minimumCardHeightFromHereToTop;
    PKIngestibleCard *_ingestibleCard;
    PKPassLibrary *_passesStore;
    UINavigationBar *_navigationBar;
    WLCardGroupsController *_cardGroupsController;
    BOOL _viewAppeared;
    PKUIServiceView *_serviceView;
    BOOL _haveStartedIngestibleCardAnimation;
    WLCardGroupStackView *_cardStackView;
    id _remoteViewControllerProxy;
    BOOL _haveKickedOffCardFetch;
    BOOL _giveUpOnPreppingCards;
    UIProgressView *_progressView;
    int _presentationState;
}

@property(retain) id remoteViewControllerProxy;
@property(retain) UINavigationBar * navigationBar;
@property(retain) PKUIServiceView * serviceView;
@property(retain) WLCardGroupStackView * cardStackView;
@property(retain) PKPassLibrary * passesStore;
@property(retain) WLCardGroupsController * cardGroupsController;
@property(retain) NSMutableArray * minimumCardHeightFromHereToTop;
@property(retain) PKIngestibleCard * ingestibleCard;
@property BOOL viewAppeared;
@property BOOL haveStartedIngestibleCardAnimation;
@property BOOL haveKickedOffCardFetch;
@property BOOL giveUpOnPreppingCards;
@property int presentationState;
@property(retain) UIProgressView * progressView;

+ (id)requiredWhitelistClassNames;

- (unsigned int)indexOfGroup:(id)arg1;
- (void)setHaveKickedOffCardFetch:(BOOL)arg1;
- (BOOL)haveKickedOffCardFetch;
- (void)setHaveStartedIngestibleCardAnimation:(BOOL)arg1;
- (BOOL)haveStartedIngestibleCardAnimation;
- (void)setServiceView:(id)arg1;
- (void)setViewAppeared:(BOOL)arg1;
- (BOOL)viewAppeared;
- (void)setCardGroupsController:(id)arg1;
- (id)cardGroupsController;
- (void)setIngestibleCard:(id)arg1;
- (void)setMinimumCardHeightFromHereToTop:(id)arg1;
- (id)minimumCardHeightFromHereToTop;
- (BOOL)giveUpOnPreppingCards;
- (id)ingestibleCard;
- (void)animateInCardIfNeeded;
- (id)serviceView;
- (void)cancelCard:(id)arg1;
- (void)updateAddButtonAndSettings;
- (void)setGiveUpOnPreppingCards:(BOOL)arg1;
- (void)showDownloadingPassUI;
- (void)setProgressView:(id)arg1;
- (void)updateAddButton;
- (void)acceptCard:(id)arg1;
- (void)tearDownDownloadConnection;
- (void)cardBackSwitchesDidChangeNotification:(id)arg1;
- (void)ingestCardAtURL:(id)arg1;
- (void)ingestCardWithData:(id)arg1;
- (void)setPresentationState:(int)arg1;
- (void)setCardStackView:(id)arg1;
- (id)cardStackView;
- (void)cardStackView:(id)arg1 didAnimateToState:(int)arg2;
- (BOOL)passesGrowWhenFlipped;
- (void)cardStackView:(id)arg1 deleteConfirmedForCard:(id)arg2;
- (float)minimumItemHeightStartingAtIndex:(unsigned int)arg1;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (float)groupHeightAtIndex:(unsigned int)arg1;
- (id)groupAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfGroups;
- (void)_calculateMinimumCardHeights;
- (int)suppressedContent;
- (id)passesStore;
- (void)setPassesStore:(id)arg1;
- (void)dealloc;
- (void)willAppearInRemoteViewController:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setNavigationBar:(id)arg1;
- (id)navigationBar;
- (unsigned int)supportedInterfaceOrientations;
- (id)remoteViewControllerProxy;
- (void)setRemoteViewControllerProxy:(id)arg1;
- (id)progressView;
- (void)tearDown;
- (int)presentationState;

@end
