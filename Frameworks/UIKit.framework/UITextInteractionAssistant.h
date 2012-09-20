/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextChecker, UILongPressGestureRecognizer, NSMutableArray, UIFieldEditor, UIGestureRecognizer, UIResponder<UITextInput>, NSMutableSet, UITextSelectionView, UIView, UITapGestureRecognizer;

@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate> {
    UIResponder<UITextInput> *_view;
    UITextSelectionView *_selectionView;
    NSMutableArray *_recognizers;
    NSMutableSet *_linkGestures;
    UILongPressGestureRecognizer *_loupeGesture;
    UITapGestureRecognizer *_singleTapGesture;
    UIGestureRecognizer *_doubleTapGesture;
    int _autoscrollRamp;
    float _autoscrollFactor;
    struct CGPoint { 
        float x; 
        float y; 
    } _autoscrollBasePoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _autoscrollUntransformedExtentPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _loupeGestureEndPoint;
    UITextChecker *_textChecker;
    BOOL _inGesture;
    BOOL _autoscrolled;
    BOOL _isTryingToHighlightLink;
    BOOL _externalTextInput;
}

@property(readonly) UIResponder<UITextInput> * view;
@property(readonly) UITextSelectionView * selectionView;
@property(readonly) UIResponder<UITextInput> * textDocument;
@property(readonly) UITapGestureRecognizer * singleTapGesture;
@property(retain) UILongPressGestureRecognizer * loupeGesture;
@property(retain) UIGestureRecognizer * doubleTapGesture;
@property BOOL inGesture;
@property(readonly) UIView * scrollView;
@property BOOL autoscrolled;
@property struct CGPoint { float x1; float x2; } autoscrollUntransformedExtentPoint;
@property(readonly) BOOL externalTextInput;
@property(readonly) UIFieldEditor * fieldEditor;
@property(retain) UITapGestureRecognizer * singleTapGesture;


- (void)dealloc;
- (id)addSelectionTapRecognizer;
- (BOOL)externalTextInput;
- (id)doubleTapGesture;
- (BOOL)isChineseInputEnabled;
- (void)setAutoscrollUntransformedExtentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_scrollable;
- (BOOL)tapOnLinkWithGesture:(id)arg1;
- (void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned int)arg2;
- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
- (BOOL)containerIsTextField;
- (void)selectWordWithoutShowingCommands;
- (float)distanceBetweenPoint:(struct CGPoint { float x1; float x2; })arg1 andRange:(id)arg2;
- (id)rangeForTextReplacement:(id)arg1;
- (BOOL)shouldIgnoreLinkGestures;
- (BOOL)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (BOOL)shouldHandleFormGestureAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)notifyKeyboardSelectionChanged;
- (BOOL)autoscrolled;
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;
- (void)setFirstResponderIfNecessary;
- (void)setAutoscrolled:(BOOL)arg1;
- (void)scrollSelectionToVisible;
- (id)addTapAndHoldOnLinkRecognizer;
- (void)doubleTapInUneditable:(id)arg1;
- (void)oneFingerTapInUneditable:(id)arg1;
- (id)addHighlightLinkRecognizer;
- (id)addLoupeGestureRecognizer:(BOOL)arg1;
- (id)addOneFingerTapRecognizer;
- (id)addTwoFingerRangedSelectRecognizer;
- (id)addTapAndAHalfRecognizer;
- (id)addTwoFingerSingleTapRecognizer;
- (id)addOneFingerDoubleTapRecognizer;
- (id)addOneFingerTripleTapRecognizer;
- (id)addPhraseBoundaryGestureRecognizer;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (BOOL)useGesturesForEditableContent;
- (BOOL)viewCouldBecomeEditable:(id)arg1;
- (id)linkInteractionView;
- (id)phraseBoundaryGestureRecognizer;
- (id)_asText;
- (void)longDelayRecognizer:(id)arg1;
- (void)smallDelayRecognizer:(id)arg1;
- (id)twoFingerRangedSelectRecognizer;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (id)loupeGestureRecognizer:(BOOL)arg1;
- (void)loupeGesture:(id)arg1;
- (id)tapAndAHalfRecognizer;
- (void)tapAndAHalf:(id)arg1;
- (id)twoFingerSingleTapRecognizer;
- (void)twoFingerSingleTap:(id)arg1;
- (id)addSelectionTapRecognizer:(SEL)arg1;
- (id)selectionTapRecognizer:(SEL)arg1;
- (id)oneFingerTripleTapRecognizer;
- (void)oneFingerTripleTap:(id)arg1;
- (id)addOneFingerTapRecognizer:(SEL)arg1;
- (void)oneFingerTap:(id)arg1;
- (id)oneFingerTapRecognizer:(SEL)arg1;
- (id)addOneFingerDoubleTapRecognizer:(SEL)arg1;
- (void)oneFingerDoubleTap:(id)arg1;
- (id)oneFingerDoubleTapRecognizer:(SEL)arg1;
- (void)setDoubleTapGesture:(id)arg1;
- (void)setSingleTapGesture:(id)arg1;
- (void)setLoupeGesture:(id)arg1;
- (BOOL)inGesture;
- (BOOL)containerClearsOnInsertion;
- (BOOL)containerIsPlainStyleAtom;
- (BOOL)containerIsAtom;
- (id)fieldEditor;
- (BOOL)containerIsBrowserView;
- (void)detach:(BOOL)arg1;
- (id)textSelectionView;
- (void)clearGestureRecognizers;
- (id)initWithResponder:(id)arg1;
- (void)clearGestureRecognizers:(BOOL)arg1;
- (id)singleTapGesture;
- (id)loupeGesture;
- (id)textDocument;
- (BOOL)swallowsDoubleTapWithScale:(float)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)setInGesture:(BOOL)arg1;
- (void)didEndScrollingOverflow;
- (void)willStartScrollingOverflow;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (id)scrollView;
- (void)confirmMarkedText:(id)arg1;
- (void)cancelInteractionWithLink;
- (BOOL)isInteractingWithLink;
- (void)resignedFirstResponder;
- (void)attach;
- (void)detach;
- (void)updateAutoscroll:(id)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })autoscrollUntransformedExtentPoint;
- (void)autoscrollWillNotStart;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg1;
- (void)selectWord;
- (void)disableClearsOnInsertion;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (void)clearSelection;
- (void)selectAll:(id)arg1;
- (void)setGestureRecognizers;
- (id)selectionView;
- (id)_selectionView;
- (id)initWithView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)view;

@end
