/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUMediaTableCell, IUTableCellConfiguration, UIView;

@interface IUMediaActionRow : NSObject  {
    SEL _action;
    IUMediaTableCell *_cell;
    IUTableCellConfiguration *_configuration;
    BOOL _includeInDisplayedRowCount;
    BOOL _selectable;
    BOOL _showCheckmark;
    BOOL _showDisclosure;
    BOOL _showPlusButton;
    int _tag;
    int _mediaTypes;
}

@property(readonly) SEL action;
@property(readonly) int tag;
@property(readonly) int mediaTypes;
@property(readonly) UIView * accessoryView;
@property(retain) IUMediaTableCell * cell;
@property(retain) IUTableCellConfiguration * configuration;
@property(readonly) int mediaDisclosureStyle;
@property BOOL includeInDisplayedRowCount;
@property BOOL selectable;
@property BOOL showCheckmark;
@property BOOL showDisclosure;
@property BOOL showPlusButton;

+ (id)actionRowWithPreset:(int)arg1 action:(SEL)arg2 title:(id)arg3;
+ (id)actionRowWithPreset:(int)arg1 action:(SEL)arg2;
+ (id)hyperlinkActionRowWithTag:(int)arg1 mediaType:(int)arg2 title:(id)arg3 action:(SEL)arg4;
+ (id)actionRowWithPreset:(int)arg1 action:(SEL)arg2 title:(id)arg3 cellConfigurationClass:(Class)arg4;
+ (id)actionRowWithTag:(int)arg1 action:(SEL)arg2;

- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (SEL)action;
- (id)description;
- (void)dealloc;
- (void)setSelectable:(BOOL)arg1;
- (void)setCell:(id)arg1;
- (BOOL)selectable;
- (id)cell;
- (int)mediaTypes;
- (id)accessoryView;
- (int)tag;
- (BOOL)showPlusButton;
- (BOOL)showDisclosure;
- (id)initWithPreset:(int)arg1 mediaTypes:(int)arg2 title:(id)arg3 action:(SEL)arg4 cellConfigurationClass:(Class)arg5;
- (id)initWithTag:(int)arg1 mediaTypes:(int)arg2 selectable:(BOOL)arg3 action:(SEL)arg4;
- (BOOL)includeInDisplayedRowCount;
- (void)setIncludeInDisplayedRowCount:(BOOL)arg1;
- (void)setShowDisclosure:(BOOL)arg1;
- (void)setShowPlusButton:(BOOL)arg1;
- (int)mediaDisclosureStyle;
- (BOOL)showCheckmark;
- (void)setShowCheckmark:(BOOL)arg1;

@end
