/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, GKLeaderboardViewController, GKPlayer, GKSparseLeaderboard, GKLeaderboardDataSource, <GKLeaderboardViewControllerDelegate>, GKUITheme, NSString, <GKLeaderboardViewControllerPrivateDelegate>;

@interface GKAbstractLeaderboardViewController : GKTableViewControllerV2 <GKLeaderboardDelegate> {
    GKGame *_game;
    GKPlayer *_player;
    NSString *_categoryID;
    int _timeScope;
    GKLeaderboardDataSource *_leaderboardDataSource;
    <GKLeaderboardViewControllerPrivateDelegate> *_delegate;
    GKUITheme *_theme;
    BOOL _translucentNavBar;
    GKSparseLeaderboard *_friendLeaderboard;
    GKSparseLeaderboard *_globalLeaderboard;
    <GKLeaderboardViewControllerDelegate> *_leaderboardDelegate;
    GKLeaderboardViewController *_controllerForDelegate;
    int _navbarStyle;
    NSString *_localizedLeaderboardTitle;
}

@property(retain) GKLeaderboardDataSource * leaderboardDataSource;
@property <GKLeaderboardViewControllerPrivateDelegate> * delegate;
@property int timeScope;
@property(retain) NSString * categoryID;
@property(retain) GKPlayer * player;
@property(retain) GKGame * game;
@property(readonly) GKUITheme * theme;
@property BOOL translucentNavBar;
@property int navbarStyle;
@property(retain) GKSparseLeaderboard * friendLeaderboard;
@property(retain) GKSparseLeaderboard * globalLeaderboard;
@property(retain) NSString * localizedLeaderboardTitle;
@property <GKLeaderboardViewControllerDelegate> * leaderboardDelegate;
@property GKLeaderboardViewController * controllerForDelegate;


- (void)setLocalizedLeaderboardTitle:(id)arg1;
- (id)localizedLeaderboardTitle;
- (void)setControllerForDelegate:(id)arg1;
- (id)globalLeaderboard;
- (id)friendLeaderboard;
- (void)_timeFilterSegmentedControlChanged:(id)arg1;
- (void)setupScopeContainer:(id)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (void)setNavbarStyle:(int)arg1;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)leaderboardDidFinishLoading:(id)arg1;
- (void)leaderboardDidBeginLoading:(id)arg1;
- (id)controllerForDelegate;
- (id)leaderboardDelegate;
- (BOOL)translucentNavBar;
- (void)layoutSubviewsForOrientation:(int)arg1;
- (void)setTranslucentNavBar:(BOOL)arg1;
- (void)_gkResetContents;
- (void)setGlobalLeaderboard:(id)arg1;
- (void)setFriendLeaderboard:(id)arg1;
- (void)authenticatedStatusChanged;
- (void)updateNavbarButtons;
- (void)donePressed:(id)arg1;
- (void)playTapped;
- (int)navbarStyle;
- (void)reloadScoresWithCompletionHandlerAndError:(id)arg1;
- (void)prepareDataSource;
- (void)setCategoryID:(id)arg1 timeScope:(int)arg2;
- (void)setLeaderboardDelegate:(id)arg1;
- (Class)dataSourceClass;
- (id)leaderboardDataSource;
- (void)setLeaderboardDataSource:(id)arg1;
- (id)categoryID;
- (void)setCategoryID:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)initWithGame:(id)arg1;
- (id)player;
- (void)setTimeScope:(int)arg1;
- (int)timeScope;
- (void)setGame:(id)arg1;
- (id)game;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (float)marginForTableView:(id)arg1;
- (id)theme;

@end
