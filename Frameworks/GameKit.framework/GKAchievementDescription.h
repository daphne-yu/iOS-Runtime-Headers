/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, NSString, GKAchievementDescriptionInternal;

@interface GKAchievementDescription : NSObject <NSCoding> {
    GKAchievementDescriptionInternal *_internal;
    UIImage *_image;
    NSString *_imageURL;
}

@property(readonly) NSString * identifier;
@property(readonly) NSString * groupIdentifier;
@property(readonly) NSString * title;
@property(readonly) NSString * achievedDescription;
@property(readonly) NSString * unachievedDescription;
@property(readonly) int maximumPoints;
@property(getter=isHidden,readonly) BOOL hidden;
@property(getter=isReplayable,readonly) BOOL replayable;
@property(retain) UIImage * image;
@property(retain) NSString * imageURL;
@property(retain) GKAchievementDescriptionInternal * internal;

+ (id)placeholderCompletedAchievementImage;
+ (id)incompleteAchievementImage;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(id)arg1;
+ (void)loadAchievementDescriptionWithIdentifier:(id)arg1 forGame:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;

- (void)setImageURL:(id)arg1;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)setInternal:(id)arg1;
- (id)imageURL;
- (id)internal;
- (id)description;
- (BOOL)respondsToSelector:(SEL)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)image;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setImage:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
