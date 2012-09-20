/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKGame, NSDate, GKRecentMatchInternal;

@interface GKGameMatch : NSObject  {
    GKRecentMatchInternal *_internal;
    GKGame *_game;
}

@property(retain) NSString * playerID;
@property(retain) GKGame * game;
@property(retain) NSDate * date;
@property(retain) GKRecentMatchInternal * internal;


- (id)initWithInternalRepresentation:(id)arg1 game:(id)arg2;
- (void)setInternal:(id)arg1;
- (id)internal;
- (void)setGame:(id)arg1;
- (id)game;
- (BOOL)respondsToSelector:(SEL)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
