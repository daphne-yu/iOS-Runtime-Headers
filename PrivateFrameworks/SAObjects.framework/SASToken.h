/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SASToken : AceObject <SAAceSerializable> {
}

@property(copy) NSNumber * confidenceScore;
@property(copy) NSNumber * endTime;
@property BOOL removeSpaceAfter;
@property BOOL removeSpaceBefore;
@property(copy) NSNumber * startTime;
@property(copy) NSString * text;

+ (id)tokenWithDictionary:(id)arg1 context:(id)arg2;
+ (id)token;

- (id)groupIdentifier;
- (BOOL)removeSpaceAfter;
- (BOOL)removeSpaceBefore;
- (id)startTime;
- (id)text;
- (void)setStartTime:(id)arg1;
- (void)setText:(id)arg1;
- (id)endTime;
- (void)setRemoveSpaceBefore:(BOOL)arg1;
- (void)setRemoveSpaceAfter:(BOOL)arg1;
- (void)setConfidenceScore:(id)arg1;
- (id)confidenceScore;
- (id)encodedClassName;
- (void)setEndTime:(id)arg1;

@end
