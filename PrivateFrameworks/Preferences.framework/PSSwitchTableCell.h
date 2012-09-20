/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIActivityIndicatorView;

@interface PSSwitchTableCell : PSControlTableCell  {
    UIActivityIndicatorView *_activityIndicator;
    BOOL _alternateSwitchColor;
}

@property BOOL loading;


- (BOOL)canReload;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)controlValue;
- (id)newControl;
- (void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)setLoading:(BOOL)arg1;
- (BOOL)loading;
- (void)dealloc;
- (void)setValue:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setCellEnabled:(BOOL)arg1;

@end
