/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAUIAppPunchOut, NSString, SACalendar, SALocalSearchRating;

@interface SALocalSearchReview : AceObject <SAAceSerializable> {
}

@property(copy) NSString * author;
@property(copy) NSString * comment;
@property(retain) SACalendar * lastUpdated;
@property(copy) NSString * publication;
@property(retain) SAUIAppPunchOut * reviewPunchOut;
@property(retain) SALocalSearchRating * reviewRating;

+ (id)review;
+ (id)reviewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setLastUpdated:(id)arg1;
- (id)lastUpdated;
- (id)author;
- (void)setAuthor:(id)arg1;
- (void)setComment:(id)arg1;
- (id)comment;
- (void)setReviewRating:(id)arg1;
- (id)reviewRating;
- (void)setReviewPunchOut:(id)arg1;
- (id)reviewPunchOut;
- (void)setPublication:(id)arg1;
- (id)publication;
- (id)encodedClassName;

@end
