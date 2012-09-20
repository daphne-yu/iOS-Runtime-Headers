/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABStyleProvider;

@interface ABCustomAppearanceProvider : NSObject  {
    ABStyleProvider *_styleProvider;
}


- (void)dealloc;
- (id)init;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setHighlighted:(BOOL)arg1 onPropertyCell:(id)arg2;
- (float)distanceBetweenSections;
- (id)newScrollingBackgroundView;
- (Class)actionCellClass;
- (Class)propertyCellClass;
- (void)customSetEmphasized:(BOOL)arg1 onCell:(id)arg2;
- (id)newActionButton;
- (id)newCardActionButton;
- (void)setIndicatesFaceTimeHistory:(BOOL)arg1 onActionButton:(id)arg2;
- (Class)customCardCellClass;
- (Class)customCardActionCellClass;
- (BOOL)shouldPropagateStylesToPickers;
- (float)cardTableViewSectionFooterHeightWhenEditing:(BOOL)arg1;
- (float)cardTableViewSectionHeaderHeightWhenEditing:(BOOL)arg1;
- (BOOL)shouldPropagateStylesThroughUnknownPersonActions;
- (id)newCustomCardTableScrollingBackgroundView;
- (BOOL)shouldUseCardContentProviderWhenAvailable;
- (int)unknownModalPresentationStyle;

@end
