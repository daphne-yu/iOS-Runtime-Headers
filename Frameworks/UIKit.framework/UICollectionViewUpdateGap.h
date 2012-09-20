/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UICollectionViewUpdateItem, NSMutableArray, NSArray;

@interface UICollectionViewUpdateGap : NSObject  {
    UICollectionViewUpdateItem *_firstUpdateItem;
    UICollectionViewUpdateItem *_lastUpdateItem;
    NSMutableArray *_deleteItems;
    NSMutableArray *_insertItems;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _beginningRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _endingRect;
}

@property(retain) UICollectionViewUpdateItem * firstUpdateItem;
@property(retain) UICollectionViewUpdateItem * lastUpdateItem;
@property(readonly) NSArray * updateItems;
@property(readonly) NSArray * deleteItems;
@property(readonly) NSArray * insertItems;
@property(readonly) BOOL isDeleteBasedGap;
@property(readonly) BOOL hasInserts;
@property(readonly) BOOL isSectionBasedGap;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } beginningRect;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } endingRect;

+ (id)gapWithUpdateItem:(id)arg1;

- (id)description;
- (void)dealloc;
- (id)init;
- (void)setEndingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endingRect;
- (void)setBeginningRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })beginningRect;
- (id)insertItems;
- (id)deleteItems;
- (id)lastUpdateItem;
- (id)firstUpdateItem;
- (BOOL)isSectionBasedGap;
- (id)updateItems;
- (BOOL)hasInserts;
- (BOOL)isDeleteBasedGap;
- (void)addUpdateItem:(id)arg1;
- (void)setLastUpdateItem:(id)arg1;
- (void)setFirstUpdateItem:(id)arg1;

@end
