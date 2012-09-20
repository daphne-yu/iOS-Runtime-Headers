/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSMutableArray, <IUMediaActionButtonsCellDelegate>;

@interface IUMediaActionButtonsCell : IUMusicTableViewCell  {
    <IUMediaActionButtonsCellDelegate> *_delegate;
    NSMutableArray *_buttons;
}

@property <IUMediaActionButtonsCellDelegate> * delegate;


- (id)initWithTitles:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)_didCreateContentView;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)reconfigureWithButtonTitles:(id)arg1 animated:(BOOL)arg2;
- (id)_buttonImageForControlState:(unsigned int)arg1;
- (id)_newButtonWithTitle:(id)arg1 action:(SEL)arg2;

@end
