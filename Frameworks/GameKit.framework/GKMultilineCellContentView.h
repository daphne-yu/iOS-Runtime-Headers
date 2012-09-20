/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, NSArray;

@interface GKMultilineCellContentView : GKImageCellContents  {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _textInsets;
    BOOL _highlighted;
    NSArray *_lines;
    int _disclosureStyle;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _confirmationButtonRect;
    UIImage *_accessoryImage;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _accessoryImageInsets;
}

@property(getter=isHighlighted) BOOL highlighted;
@property(readonly) BOOL showingConfirmationButton;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } confirmationButtonRect;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textInsets;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } accessoryImageInsets;
@property int disclosureStyle;
@property(retain) UIImage * accessoryImage;
@property(retain) NSArray * lines;

+ (id)twoLineContentViewWithTheme:(id)arg1;
+ (id)oneLineContentViewWithTheme:(id)arg1;
+ (id)threeLineContentViewWithTheme:(id)arg1 shouldHighlight:(BOOL)arg2;
+ (id)threeLineContentViewWithTheme:(id)arg1;

- (void)setAccessoryImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setAccessoryImage:(id)arg1;
- (void)setLines:(id)arg1;
- (void)setAttributedHighlightedText:(id)arg1 forLine:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessoryImageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawLines:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })accessoryImageInsets;
- (id)accessoryImage;
- (BOOL)showingConfirmationButton;
- (int)disclosureStyle;
- (void)setTextColor:(id)arg1 forLine:(unsigned int)arg2;
- (void)setFont:(id)arg1 forLine:(unsigned int)arg2;
- (void)setAttributedText:(id)arg1 forLine:(unsigned int)arg2;
- (id)lines;
- (void)setDisclosureStyle:(int)arg1;
- (void)setText:(id)arg1 forLine:(unsigned int)arg2;
- (void)setConfirmationButtonRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })confirmationButtonRect;
- (void)adjustLineRects:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 forLines:(id)arg2 inTextRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)setTextInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)lineAtIndex:(unsigned int)arg1;
- (id)initWithNumberOfLines:(unsigned int)arg1;
- (id)description;
- (void)dealloc;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)accessibilityLabel;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textInsets;

@end
