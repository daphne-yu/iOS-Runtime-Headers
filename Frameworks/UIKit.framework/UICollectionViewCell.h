/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILongPressGestureRecognizer, UIView;

@interface UICollectionViewCell : UICollectionReusableView <UIGestureRecognizerDelegate> {
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_selectedBackgroundView;
    UILongPressGestureRecognizer *_menuGesture;
    id _selectionSegueTemplate;
    id _highlightingSupport;
    struct { 
        unsigned int selected : 1; 
        unsigned int highlighted : 1; 
        unsigned int showingMenu : 1; 
        unsigned int clearSelectionWhenMenuDisappears : 1; 
        unsigned int waitingForSelectionAnimationHalfwayPoint : 1; 
    } _collectionCellFlags;
    BOOL _selected;
    BOOL _highlighted;
}

@property(readonly) UIView * contentView;
@property(getter=isSelected) BOOL selected;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) UIView * backgroundView;
@property(retain) UIView * selectedBackgroundView;


- (void)dealloc;
- (void)_setSelectionSegueTemplate:(id)arg1;
- (void)_handleMenuGesture:(id)arg1;
- (void)_teardownHighlightingSupportIfReady;
- (void)_setupHighlightingSupport;
- (void)_updateHighlightColorsForView:(id)arg1 highlight:(BOOL)arg2;
- (void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_isUsingOldStyleMultiselection;
- (BOOL)_shouldSaveOpaqueStateForView:(id)arg1;
- (id)_selectionSegueTemplate;
- (id)selectedBackgroundView;
- (void)setSelectedBackgroundView:(id)arg1;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (void)_menuDismissed:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2;
- (id)backgroundView;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (void)setBackgroundView:(id)arg1;
- (BOOL)isSelected;
- (void)_updateBackgroundView;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (id)contentView;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
