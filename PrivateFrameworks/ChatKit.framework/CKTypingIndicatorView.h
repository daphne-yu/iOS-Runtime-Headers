/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImageView;

@interface CKTypingIndicatorView : UIView  {
    UIImageView *_typingIndicatorImageView;
    UIImageView *_contactImageView;
    BOOL _editing;
}

@property(getter=isEditing) BOOL editing;


- (void)dealloc;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isEditing;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContactImage:(id)arg1;

@end
