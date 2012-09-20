/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPListItem;

@interface CPList : NSObject <CPDisposable> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } spacer;
    int type;
    unsigned int ordinalPrefixLength;
    unsigned int ordinalSuffixLength;
    CPListItem *parentItem;
    struct __CFArray { } *items;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } spacer;
@property int type;
@property unsigned int ordinalPrefixLength;
@property unsigned int ordinalSuffixLength;
@property(retain) CPListItem * parentItem;


- (void)setParentItem:(id)arg1;
- (void)setOrdinalSuffixLength:(unsigned int)arg1;
- (unsigned int)ordinalSuffixLength;
- (void)setOrdinalPrefixLength:(unsigned int)arg1;
- (unsigned int)ordinalPrefixLength;
- (void)setSpacer:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })spacer;
- (BOOL)isMultilevel;
- (BOOL)containsParagraph:(id)arg1;
- (id)parentItem;
- (void)dispose;
- (unsigned int)itemCount;
- (int)type;
- (void)dealloc;
- (id)init;
- (void)addItem:(id)arg1;
- (void)finalize;
- (void)setType:(int)arg1;
- (id)itemAtIndex:(unsigned int)arg1;

@end
