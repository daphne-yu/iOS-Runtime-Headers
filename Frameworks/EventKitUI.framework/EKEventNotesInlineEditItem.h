/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarNotesCell;

@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate> {
    CalendarNotesCell *_cell;
}


- (void)reset;
- (void)dealloc;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)textViewShouldReturn:(id)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 inSubsection:(int)arg2 forWidth:(float)arg3;
- (id)cellForSubitemAtIndex:(int)arg1 inSubsection:(int)arg2;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (BOOL)isInline;

@end
