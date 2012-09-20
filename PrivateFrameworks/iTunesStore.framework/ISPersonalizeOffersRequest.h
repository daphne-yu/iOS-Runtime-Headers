/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSNumber, NSMutableDictionary, NSArray;

@interface ISPersonalizeOffersRequest : NSObject <NSCopying> {
    NSNumber *_accountIdentifier;
    NSMutableDictionary *_itemIDsByType;
}

@property(retain) NSNumber * accountIdentifier;
@property(readonly) NSArray * allItemTypes;


- (id)accountIdentifier;
- (void)addItemIdentifier:(id)arg1 forItemType:(id)arg2;
- (void)setAccountIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (id)itemIdentifiersForItemType:(id)arg1;
- (id)allItemTypes;

@end
