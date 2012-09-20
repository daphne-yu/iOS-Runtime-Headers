/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSDate, NSNumber, NSURL;

@interface SAReminderSearch : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(copy) NSNumber * completionStatus;
@property(copy) NSDate * dueAfter;
@property(copy) NSDate * dueBefore;
@property(copy) NSString * listName;
@property(copy) NSString * subject;
@property(copy) NSString * timeZoneId;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)subject;
- (void)setSubject:(id)arg1;
- (void)setListName:(id)arg1;
- (id)listName;
- (void)setCompletionStatus:(id)arg1;
- (id)completionStatus;
- (void)setTimeZoneId:(id)arg1;
- (id)timeZoneId;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;
- (id)dueBefore;
- (id)dueAfter;
- (void)setDueBefore:(id)arg1;
- (void)setDueAfter:(id)arg1;

@end
