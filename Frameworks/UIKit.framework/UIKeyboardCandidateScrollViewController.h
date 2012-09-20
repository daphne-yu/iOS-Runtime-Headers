/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardCandidateScrollViewLayoutState, UIKeyboardCandidateScrollView, UIButton, UIView, <UIKeyboardCandidateScrollViewControllerDelegate>, <UIKeyboardCandidateListDelegate>, UIKeyboardCandidatePadInlineFloatingBackgroundView, NSArray;

@interface UIKeyboardCandidateScrollViewController : UIViewController <UIKeyboardCandidateList> {
    <UIKeyboardCandidateScrollViewControllerDelegate> *_delegate;
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    unsigned int _selectedCandidateIndex;
    unsigned int _numberOfColumns;
    float _rowHeight;
    int _visualStyle;
    BOOL _alwaysShowExtensionCandidates;
    UIView *_headerView;
    NSArray *_allCells;
    NSArray *_unsortedCandidates;
    NSArray *_candidateGroups;
    NSArray *_candidateCells;
    NSArray *_groupHeaderCells;
    float _groupBarWidth;
    BOOL _showsExtensionCandidates;
    BOOL _supportsNumberKeySelection;
    BOOL _isOKToFlashScrollIndicator;
    UIKeyboardCandidateScrollViewLayoutState *_layoutState;
    UIButton *_padInlineFloatingArrowButton;
    UIKeyboardCandidatePadInlineFloatingBackgroundView *_padInlineFloatingBackgroundView;
    float _previousWidth;
}

@property(readonly) UIKeyboardCandidateScrollView * scrollView;
@property <UIKeyboardCandidateScrollViewControllerDelegate> * delegate;
@property <UIKeyboardCandidateListDelegate> * candidateListDelegate;
@property(retain) NSArray * unsortedCandidates;
@property(retain) NSArray * candidateGroups;
@property unsigned int selectedCandidateIndex;
@property unsigned int numberOfColumns;
@property float rowHeight;
@property int visualStyle;
@property BOOL alwaysShowExtensionCandidates;
@property(readonly) UIButton * padInlineFloatingArrowButton;
@property(retain) UIView * headerView;
@property(retain) NSArray * allCells;
@property(retain) NSArray * candidateCells;
@property(retain) NSArray * groupHeaderCells;
@property float groupBarWidth;
@property(readonly) BOOL hasGroupBar;
@property BOOL showsExtensionCandidates;
@property BOOL supportsNumberKeySelection;
@property BOOL isOKToFlashScrollIndicator;
@property(retain) UIKeyboardCandidateScrollViewLayoutState * layoutState;
@property float previousWidth;
@property(readonly) UIKeyboardCandidatePadInlineFloatingBackgroundView * padInlineFloatingBackgroundView;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (unsigned int)count;
- (BOOL)hasGroupBar;
- (BOOL)alwaysShowExtensionCandidates;
- (void)stepOneLine:(BOOL)arg1;
- (void)padInlineFloatingExpand;
- (void)layoutAndScrollToTop:(BOOL)arg1 withAnimation:(BOOL)arg2;
- (void)initiateIncrementalLayout;
- (void)setSupportsNumberKeySelection:(BOOL)arg1;
- (void)scrollViewIndexChanged:(id)arg1;
- (void)scrollFlashTimeout;
- (BOOL)isOKToFlashScrollIndicator;
- (void)setLayoutState:(id)arg1;
- (void)setShowsExtensionCandidates:(BOOL)arg1;
- (void)stepIncrementalLayout;
- (void)layoutRowsWithLimit:(unsigned int)arg1;
- (BOOL)padInlineFloatingIsExpanded;
- (void)setIsOKToFlashScrollIndicator:(BOOL)arg1;
- (void)padInlineFloatingUpdateHighlightedRow;
- (void)layoutRowWithCells:(id)arg1 startingX:(float)arg2 currentY:(float)arg3 width:(float)arg4 isFirstRow:(BOOL)arg5 isLastRow:(BOOL)arg6 isGrouped:(BOOL)arg7 hasIndex:(BOOL)arg8;
- (void)candidateCellAction:(id)arg1;
- (BOOL)showsExtensionCandidates;
- (id)layoutState;
- (void)padInlineFloatingViewUpdateBackgroundView;
- (id)padInlineFloatingBackgroundView;
- (void)scrollToBottomWithAnimation:(BOOL)arg1;
- (void)scrollToTopWithAnimation:(BOOL)arg1;
- (void)cancelIncrementalLayout;
- (void)setPreviousWidth:(float)arg1;
- (float)previousWidth;
- (void)setGroupBarWidth:(float)arg1;
- (float)groupBarWidth;
- (id)candidateGroups;
- (void)setGroupHeaderCells:(id)arg1;
- (id)groupHeaderCells;
- (void)setCandidateCells:(id)arg1;
- (id)candidateCells;
- (void)setAllCells:(id)arg1;
- (id)allCells;
- (void)setUnsortedCandidates:(id)arg1;
- (id)padInlineFloatingArrowButton;
- (id)headerView;
- (void)setSelectedCandidateIndex:(unsigned int)arg1;
- (unsigned int)selectedCandidateIndex;
- (void)setCandidateGroups:(id)arg1;
- (id)unsortedCandidates;
- (void)scrollToTopWithAnimation:(BOOL)arg1 revealHeaderView:(BOOL)arg2;
- (void)setNumberOfColumns:(unsigned int)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setAlwaysShowExtensionCandidates:(BOOL)arg1;
- (void)selectCandidate:(id)arg1;
- (void)setVisualStyle:(int)arg1;
- (int)visualStyle;
- (id)candidateListDelegate;
- (void)setCandidateListDelegate:(id)arg1;
- (id)scrollView;
- (BOOL)hasPreviousPage;
- (BOOL)hasNextPage;
- (void)configureKeyboard:(id)arg1;
- (id)candidateAtIndex:(unsigned int)arg1;
- (void)showPageAtIndex:(unsigned int)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (unsigned int)currentIndex;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)currentCandidate;
- (BOOL)handleNumberKey:(unsigned int)arg1;
- (BOOL)supportsNumberKeySelection;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)layout;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)loadView;
- (void)viewDidLoad;
- (float)rowHeight;
- (unsigned int)numberOfColumns;
- (void)setRowHeight:(float)arg1;

@end
