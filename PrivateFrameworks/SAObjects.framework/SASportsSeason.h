/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SASportsSeasonRange;

@interface SASportsSeason : AceObject <SAAceSerializable> {
}

@property(retain) SASportsSeasonRange * postSeason;
@property(retain) SASportsSeasonRange * preSeason;
@property(retain) SASportsSeasonRange * regularSeason;

+ (id)seasonWithDictionary:(id)arg1 context:(id)arg2;
+ (id)season;

- (id)groupIdentifier;
- (void)setRegularSeason:(id)arg1;
- (id)regularSeason;
- (void)setPreSeason:(id)arg1;
- (id)preSeason;
- (void)setPostSeason:(id)arg1;
- (id)postSeason;
- (id)encodedClassName;

@end
