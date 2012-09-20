/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKCellBackgroundView, NSArray;

@interface GKMultiColumnTableViewCell : GKTableViewCell  {
    unsigned int _columnCount;
    NSArray *_contentsArray;
    int _selectedColumn;
    int _highlightedColumn;
    float _columnSeparatorWidth;
    SEL _columnCountSetter;
    SEL _selectedColumnSetter;
    BOOL _multiCellEnabled;
}

@property unsigned int columnCount;
@property int selectedColumn;
@property(copy) NSArray * contentsArray;
@property float columnSeparatorWidth;
@property(readonly) GKCellBackgroundView * cellBackgroundView;
@property(readonly) GKCellBackgroundView * selectedCellBackgroundView;
@property BOOL multiCellEnabled;
@property SEL columnCountSetter;
@property SEL selectedColumnSetter;
@property(readonly) int activeColumn;
@property int highlightedColumn;


- (id)_gkDescriptionWithChildren:(int)arg1;
- (BOOL)multiCellEnabled;
- (void)setHighlightedColumn:(int)arg1;
- (int)activeColumn;
- (int)highlightedColumn;
- (float)columnSeparatorWidth;
- (id)selectedCellBackgroundView;
- (id)cellBackgroundView;
- (void)setSelectedColumn:(int)arg1 animated:(BOOL)arg2;
- (void)setHighlightedColumn:(int)arg1 highlighted:(BOOL)arg2 animated:(BOOL)arg3;
- (int)conditionalActiveColumn:(BOOL)arg1;
- (SEL)selectedColumnSetter;
- (void)multiColumnHighlight:(BOOL)arg1 view:(id)arg2;
- (void)_multiColumnHighlight:(BOOL)arg1 view:(id)arg2;
- (SEL)columnCountSetter;
- (void)setSelectedColumnSetter:(SEL)arg1;
- (void)setColumnCountSetter:(SEL)arg1;
- (void)setColumnSeparatorWidth:(float)arg1;
- (void)setMultiCellEnabled:(BOOL)arg1;
- (void)setContentsArray:(id)arg1;
- (void)configureBackgroundView;
- (void)updateBackgroundViews;
- (id)contentsArray;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 tableViewStyle:(int)arg3 backgroundStyle:(int)arg4;
- (int)selectedColumn;
- (void)setSelectedColumn:(int)arg1;
- (void)dealloc;
- (void)setColumnCount:(unsigned int)arg1;
- (unsigned int)columnCount;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;

@end
