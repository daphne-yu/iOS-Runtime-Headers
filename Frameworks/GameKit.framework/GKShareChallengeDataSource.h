/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKShareChallengeFooterTextSection, GKTableSection, GKShareChallengeButtonSection;

@interface GKShareChallengeDataSource : GKSectionArrayDataSource  {
    BOOL _shouldShowAddFriendButton;
    BOOL _shouldShowShareButton;
    SEL _challengeButtonAction;
    SEL _shareButtonAction;
    GKShareChallengeFooterTextSection *_footerTextSection;
    SEL _addFriendButtonAction;
    GKShareChallengeButtonSection *_buttonSection;
    GKTableSection *_mainSection;
}

@property(retain) GKTableSection * mainSection;
@property(retain) GKShareChallengeButtonSection * buttonSection;
@property(retain) GKShareChallengeFooterTextSection * footerTextSection;
@property(readonly) BOOL shouldEnableChallengeButton;
@property BOOL shouldShowShareButton;
@property BOOL shouldShowAddFriendButton;
@property SEL challengeButtonAction;
@property SEL shareButtonAction;
@property SEL addFriendButtonAction;

+ (float)buttonSectionTopMargin;

- (id)mainSection;
- (void)setAddFriendButtonAction:(SEL)arg1;
- (void)setShareButtonAction:(SEL)arg1;
- (void)setChallengeButtonAction:(SEL)arg1;
- (void)setShouldShowShareButton:(BOOL)arg1;
- (void)setShouldShowAddFriendButton:(BOOL)arg1;
- (void)setShowShareButton:(BOOL)arg1;
- (id)footerTextSection;
- (id)buttonSection;
- (void)setFooterTextSection:(id)arg1;
- (id)prepareFooterTextSection;
- (void)setButtonSection:(id)arg1;
- (id)prepareButtonSection;
- (void)setMainSection:(id)arg1;
- (id)prepareMainSection;
- (SEL)addFriendButtonAction;
- (id)addFriendButtonTitle;
- (BOOL)shouldShowAddFriendButton;
- (SEL)shareButtonAction;
- (id)shareButtonTitle;
- (BOOL)shouldShowShareButton;
- (SEL)challengeButtonAction;
- (BOOL)shouldEnableChallengeButton;
- (id)challengeButtonTitle;
- (void)prepareSections;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end
