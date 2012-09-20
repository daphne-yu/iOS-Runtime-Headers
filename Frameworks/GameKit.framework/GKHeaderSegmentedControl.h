/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKHeaderSegmentedControlDelegate>, UIImageView, NSArray;

@interface GKHeaderSegmentedControl : UIControl  {
    unsigned int _selectedSegment;
    <GKHeaderSegmentedControlDelegate> *_delegate;
    unsigned int _selectedSegmentIndex;
    NSArray *_labels;
    NSArray *_abbreviatedLabels;
    int _segmentedControlStyle;
    int _segmentWidthAllocationStyle;
    struct { float x1; float x2; id x3; } *_segmentNodes;
    SEL _themeBackgroundImageSelector;
    SEL _themeSelectionImageSelector;
    SEL _themeDividerImageSelector;
    SEL _themeFontSelector;
    SEL _secondaryFontSelector;
    SEL _themeSelectedTextColorSelector;
    SEL _themeNormalTextColorSelector;
    SEL _themeSecondaryTextColorSelector;
    SEL _themeTextShadowColorSelector;
    SEL _themeTextSelectedShadowColorSelector;
    SEL _segmentLayoutSelector;
    float _dividerOffsetY;
    float _calculatedFontSize;
    float _minFontSizeDelta;
    float _textBaselineNudgeY;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _selectionInsets;
    float _textPaddingWidth;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _capInsets;
    NSArray *_processedLabels;
    UIImageView *_backgroundView;
    UIImageView *_foregroundView;
    float _maxWidth;
}

@property <GKHeaderSegmentedControlDelegate> * delegate;
@property(readonly) float defaultHeight;
@property float textPaddingWidth;
@property float maxWidth;
@property unsigned int selectedSegmentIndex;
@property(retain) NSArray * labels;
@property(retain) NSArray * abbreviatedLabels;
@property int segmentedControlStyle;
@property int segmentWidthAllocationStyle;
@property struct { float x1; float x2; id x3; }* segmentNodes;
@property SEL themeBackgroundImageSelector;
@property SEL themeSelectionImageSelector;
@property SEL themeDividerImageSelector;
@property SEL themeFontSelector;
@property SEL themeSecondaryFontSelector;
@property SEL themeSelectedTextColorSelector;
@property SEL themeNormalTextColorSelector;
@property SEL themeSecondaryTextColorSelector;
@property SEL themeTextShadowColorSelector;
@property SEL themeTextSelectedShadowColorSelector;
@property SEL segmentLayoutSelector;
@property float dividerOffsetY;
@property float calculatedFontSize;
@property float minFontSizeDelta;
@property float textBaselineNudgeY;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } capInsets;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } selectionInsets;
@property(retain) NSArray * processedLabels;
@property(retain) UIImageView * backgroundView;
@property(retain) UIImageView * foregroundView;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } segmentBounds;


- (void)setProcessedLabels:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })selectionInsets;
- (void)setSegmentNodes:(struct { float x1; float x2; id x3; }*)arg1;
- (struct { float x1; float x2; id x3; }*)segmentNodes;
- (void)setAbbreviatedLabels:(id)arg1;
- (id)abbreviatedLabels;
- (void)setLabels:(id)arg1;
- (float)textPaddingWidth;
- (float)dividerOffsetY;
- (void)drawLabelTextAtIndex:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (SEL)themeSelectionImageSelector;
- (void)drawForegroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (SEL)segmentLayoutSelector;
- (void)applyCalculatedFontSize;
- (float)minFontSizeDelta;
- (void)setCalculatedFontSize:(float)arg1;
- (float)dividerWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })segmentBounds;
- (id)largeRibbonBackgroundImageForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (SEL)themeBackgroundImageSelector;
- (SEL)themeDividerImageSelector;
- (float)textBaselineNudgeY;
- (id)processedLabels;
- (void)enumerateSegmentContentRectsUsingBlock:(id)arg1;
- (SEL)themeTextSelectedShadowColorSelector;
- (SEL)themeTextShadowColorSelector;
- (SEL)themeSecondaryTextColorSelector;
- (SEL)themeNormalTextColorSelector;
- (SEL)themeSelectedTextColorSelector;
- (SEL)themeSecondaryFontSelector;
- (float)calculatedFontSize;
- (SEL)themeFontSelector;
- (void)invalidateProcessedLabels;
- (void)layoutSegmentsProportionally:(struct { float x1; float x2; id x3; }*)arg1 number:(int)arg2;
- (void)layoutSegmentsEnlargingCenter:(struct { float x1; float x2; id x3; }*)arg1 number:(int)arg2;
- (void)setSegmentLayoutSelector:(SEL)arg1;
- (void)layoutSegmentsEqually:(struct { float x1; float x2; id x3; }*)arg1 number:(int)arg2;
- (int)segmentWidthAllocationStyle;
- (void)clearLayoutCache;
- (void)setCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSelectionInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTextBaselineNudgeY:(float)arg1;
- (void)setDividerOffsetY:(float)arg1;
- (void)setMinFontSizeDelta:(float)arg1;
- (void)setThemeTextSelectedShadowColorSelector:(SEL)arg1;
- (void)setThemeTextShadowColorSelector:(SEL)arg1;
- (void)setThemeSecondaryTextColorSelector:(SEL)arg1;
- (void)setThemeNormalTextColorSelector:(SEL)arg1;
- (void)setThemeSelectedTextColorSelector:(SEL)arg1;
- (void)setThemeSecondaryFontSelector:(SEL)arg1;
- (void)setThemeFontSelector:(SEL)arg1;
- (void)setThemeDividerImageSelector:(SEL)arg1;
- (void)setThemeSelectionImageSelector:(SEL)arg1;
- (void)setThemeBackgroundImageSelector:(SEL)arg1;
- (void)setSegmentWidthAllocationStyle:(int)arg1;
- (void)setTextPaddingWidth:(float)arg1;
- (void)_tap:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)foregroundView;
- (void)setForegroundView:(id)arg1;
- (id)dividerImage;
- (float)defaultHeight;
- (unsigned int)selectedSegmentIndex;
- (int)segmentedControlStyle;
- (void)setSelectedSegmentIndex:(unsigned int)arg1;
- (void)setSegmentedControlStyle:(int)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })capInsets;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)labels;
- (void)setMaxWidth:(float)arg1;
- (float)maxWidth;

@end
