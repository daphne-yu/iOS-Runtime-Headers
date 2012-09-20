/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UIImageView, <MFAddressAtomDelegate>, NSString, UILabel;

@interface MFAddressAtom : UIControl  {
    <MFAddressAtomDelegate> *_delegate;
    void *_person;
    NSString *_fullAddress;
    NSString *_displayString;
    UIImageView *_backgroundImageView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _atomCapInsets;
    UILabel *_addressLabel;
    unsigned int _accessoryStyle;
    int _style;
    unsigned int _maxWidth;
    int _identifier;
    unsigned int _addressIsPhoneNumber : 1;
    unsigned int _needsToSendMouseUpEvents : 1;
    unsigned int _dragging : 1;
    unsigned int _updatedABPerson : 1;
    unsigned int _isDisplayStringFromAddressBook : 1;
    void *_addressBook;
}

@property int style;
@property unsigned int accessoryStyle;

+ (id)copyDisplayStringForAddress:(id)arg1 usingAddressBook:(void*)arg2;

- (void)setAddress:(id)arg1;
- (void)setDelegate:(id)arg1;
- (int)identifier;
- (void)dealloc;
- (id)displayString;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)setHighlighted:(BOOL)arg1;
- (int)style;
- (void)setStyle:(int)arg1;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setOpaque:(BOOL)arg1;
- (BOOL)isDisplayStringFromAddressBook;
- (void)setAccessoryStyle:(unsigned int)arg1;
- (void)addressBookDidChange:(id)arg1;
- (id)initWithAddress:(id)arg1 style:(int)arg2 isPhoneNumber:(BOOL)arg3 maxWidth:(float)arg4 addressBook:(void*)arg5;
- (void)_updateABPerson;
- (id)_VIPImageNameForStyle:(int)arg1 selected:(BOOL)arg2;
- (unsigned int)accessoryStyle;
- (void)_addVIPImageToBackgroundImageViewIsSelected:(BOOL)arg1;
- (void)_displayStringDidChange;
- (void)_setupForStyle;
- (void)_updateDisplayStringIncludingABPerson:(BOOL)arg1;
- (void)setMaxWidth:(unsigned int)arg1;
- (id)unmodifiedAddressString;
- (int)ABPropertyType;
- (id)emailAddress;
- (void*)ABPerson;

@end
