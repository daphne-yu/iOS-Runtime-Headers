/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKScoreInternal, NSString, GKGame, NSDate;

@interface GKScore : NSObject <NSCopying, NSCoding> {
    GKScoreInternal *_internal;
    BOOL _shouldSetDefaultLeaderboard;
    GKGame *_game;
    BOOL _valueSet;
}

@property long long value;
@property(retain) NSString * formattedValue;
@property(retain) NSString * category;
@property unsigned long long context;
@property(readonly) NSDate * date;
@property(retain) NSString * playerID;
@property int rank;
@property BOOL shouldSetDefaultLeaderboard;
@property(retain) GKScoreInternal * internal;
@property(retain) NSString * groupIdentifier;
@property BOOL valueSet;
@property GKGame * game;

+ (void)reportScores:(id)arg1 withCompletionHandler:(id)arg2;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;

- (void)_gkSetSharingInfo:(id)arg1;
- (BOOL)canBeShared;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (void)issueChallengeForGame:(id)arg1 toPlayers:(id)arg2 message:(id)arg3;
- (void)setShouldSetDefaultLeaderboard:(BOOL)arg1;
- (void)reportScoreWithCompletionHandler:(id)arg1;
- (BOOL)shouldSetDefaultLeaderboard;
- (BOOL)valueSet;
- (void)setValueSet:(BOOL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)_gkSharingInfo;
- (void)setInternal:(id)arg1;
- (id)internal;
- (void)setGame:(id)arg1;
- (id)game;
- (id)initWithCategory:(id)arg1;
- (id)description;
- (BOOL)respondsToSelector:(SEL)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (void)setValue:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
