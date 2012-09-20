/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel, NSString, UITextView;

@interface CalendarNotesCell : UITableViewCell  {
    UITextView *_textView;
    UILabel *_placeholder;
    BOOL _showingPlaceholder;
}

@property(copy) NSString * text;
@property(readonly) UITextView * textView;
@property(retain) NSString * placeholder;


- (void)dealloc;
- (id)textView;
- (void)setPlaceholder:(id)arg1;
- (id)_placeholderLabel;
- (void)textChanged:(id)arg1;
- (id)placeholder;
- (id)text;
- (BOOL)becomeFirstResponder;
- (void)setText:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)_updatePlaceholder;

@end
