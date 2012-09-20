/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIColor, NSArray;

@interface EKEventDetailAttendeesListView : UIView  {
    NSArray *_acceptedNames;
    NSArray *_maybeNames;
    NSArray *_declinedNames;
    NSArray *_noReplyNames;
    NSArray *_ungroupedNames;
    UIColor *textColor;
    UIColor *highlightedTextColor;
    BOOL highlighted;
    BOOL _groupsNames;
}

@property(retain) NSArray * acceptedNames;
@property(retain) NSArray * maybeNames;
@property(retain) NSArray * declinedNames;
@property(retain) NSArray * noReplyNames;
@property(retain) NSArray * ungroupedNames;
@property(retain) UIColor * textColor;
@property(retain) UIColor * highlightedTextColor;
@property BOOL highlighted;
@property BOOL groupsNames;


- (void)dealloc;
- (BOOL)highlighted;
- (void)setHighlightedTextColor:(id)arg1;
- (id)highlightedTextColor;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)ungroupedNames;
- (id)noReplyNames;
- (id)declinedNames;
- (id)maybeNames;
- (id)acceptedNames;
- (void)_drawColumnOfStrings:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 startingAtPoint:(struct CGPoint { float x1; float x2; })arg3 givenWidth:(float)arg4;
- (void)drawInvitees:(id)arg1 withStatus:(id)arg2 startingAtPoint:(struct CGPoint { float x1; float x2; })arg3 givenWidth:(float)arg4;
- (float)_heightForGroupOfAttendeeNames:(id)arg1;
- (BOOL)groupsNames;
- (void)setUngroupedNames:(id)arg1;
- (void)setGroupsNames:(BOOL)arg1;
- (void)setNoReplyNames:(id)arg1;
- (void)setDeclinedNames:(id)arg1;
- (void)setMaybeNames:(id)arg1;
- (void)setAcceptedNames:(id)arg1;

@end
