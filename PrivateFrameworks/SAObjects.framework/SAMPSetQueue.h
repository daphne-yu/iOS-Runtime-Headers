/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, SAMPCollection, NSArray;

@interface SAMPSetQueue : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(copy) NSArray * filters;
@property(retain) SAMPCollection * mediaItems;
@property(copy) NSArray * sort;

+ (id)setQueueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setQueue;

- (id)groupIdentifier;
- (id)filters;
- (void)setFilters:(id)arg1;
- (id)sort;
- (void)setSort:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (id)mediaItems;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;

@end
