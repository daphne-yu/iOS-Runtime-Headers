/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSDate, NSString;

@interface DAMailboxSearchQuery : DASearchQuery  {
    NSString *_collectionID;
    int _bodyType;
    long long _truncationSize;
    BOOL _allOrNone;
    NSDate *_priorToDate;
    int _MIMESupport;
    BOOL _deepTraversal;
    BOOL _rebuildResults;
}

@property(retain) NSString * collectionID;
@property int bodyType;
@property long long truncationSize;
@property BOOL allOrNone;
@property(retain) NSDate * priorToDate;
@property int MIMESupport;
@property BOOL deepTraversal;
@property BOOL rebuildResults;

+ (id)mailboxSearchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)dictionaryRepresentation;
- (void)setRebuildResults:(BOOL)arg1;
- (void)setAllOrNone:(BOOL)arg1;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (void)setDeepTraversal:(BOOL)arg1;
- (void)setPriorToDate:(id)arg1;
- (void)setTruncationSize:(long long)arg1;
- (void)setMIMESupport:(int)arg1;
- (void)setCollectionID:(id)arg1;
- (void)setBodyType:(int)arg1;
- (BOOL)rebuildResults;
- (BOOL)deepTraversal;
- (int)MIMESupport;
- (BOOL)allOrNone;
- (long long)truncationSize;
- (int)bodyType;
- (id)priorToDate;
- (id)collectionID;

@end
