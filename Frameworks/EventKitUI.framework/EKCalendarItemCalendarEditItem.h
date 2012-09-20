/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem  {
    unsigned int _entityType;
}


- (id)init;
- (BOOL)_shouldShowSourceForCalendar:(id)arg1;
- (id)initWithEntityType:(unsigned int)arg1;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(int)arg2 inSubsection:(int)arg3;
- (id)cellForSubitemAtIndex:(int)arg1 inSubsection:(int)arg2;
- (BOOL)requiresReconfigurationOnCommit;
- (BOOL)shouldAppearWithVisibility:(int)arg1;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;

@end
