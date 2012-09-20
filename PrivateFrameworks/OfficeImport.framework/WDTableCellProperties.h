/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDDocument, NSDate, WDBorder, WDShading;

@interface WDTableCellProperties : NSObject  {
    short mWidth;
    short mPosition;
    unsigned int mOriginal : 1;
    unsigned int mTracked : 1;
    unsigned int mResolved : 1;
    struct { 
        WDShading *shading; 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        WDBorder *diagonalUpBorder; 
        WDBorder *diagonalDownBorder; 
        WDBorder *insideHorizontalBorder; 
        WDBorder *insideVerticalBorder; 
        int widthType; 
        short topMargin; 
        int topMarginType; 
        short bottomMargin; 
        int bottomMarginType; 
        short leftMargin; 
        int leftMarginType; 
        short rightMargin; 
        int rightMarginType; 
        int verticalAlignment; 
        BOOL textDirection; 
        int deleted; 
        int edited; 
        int formattingChanged; 
        unsigned short indexToAuthorIDOfDeletion; 
        unsigned short indexToAuthorIDOfEdit; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *deletionDate; 
        NSDate *editDate; 
        NSDate *formattingChangeDate; 
        unsigned int shadingOverridden : 1; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int diagonalUpBorderOverridden : 1; 
        unsigned int diagonalDownBorderOverridden : 1; 
        unsigned int insideHorizontalBorderOverridden : 1; 
        unsigned int insideVerticalBorderOverridden : 1; 
        unsigned int widthTypeOverridden : 1; 
        unsigned int topMarginOverridden : 1; 
        unsigned int topMarginTypeOverridden : 1; 
        unsigned int bottomMarginOverridden : 1; 
        unsigned int bottomMarginTypeOverridden : 1; 
        unsigned int leftMarginOverridden : 1; 
        unsigned int leftMarginTypeOverridden : 1; 
        unsigned int rightMarginOverridden : 1; 
        unsigned int rightMarginTypeOverridden : 1; 
        unsigned int verticalAlignmentOverridden : 1; 
        unsigned int textDirectionOverridden : 1; 
        unsigned int verticallyMergedCell : 1; 
        unsigned int verticallyMergedCellOverridden : 1; 
        unsigned int firstInSetOfVerticallyMergedCells : 1; 
        unsigned int firstInSetOfVerticallyMergedCellsOverridden : 1; 
        unsigned int noWrap : 1; 
        unsigned int noWrapOverridden : 1; 
        unsigned int deletedOverridden : 1; 
        unsigned int editedOverridden : 1; 
        unsigned int formattingChangedOverridden : 1; 
        unsigned int indexToAuthorIDOfDeletionOverridden : 1; 
        unsigned int indexToAuthorIDOfEditOverridden : 1; 
        unsigned int indexToAuthorIDOfFormattingChangeOverridden : 1; 
        unsigned int deletionDateOverridden : 1; 
        unsigned int editDateOverridden : 1; 
        unsigned int formattingChangeDateOverridden : 1; 
    } mOriginalProperties;
    struct { 
        WDShading *shading; 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        WDBorder *diagonalUpBorder; 
        WDBorder *diagonalDownBorder; 
        WDBorder *insideHorizontalBorder; 
        WDBorder *insideVerticalBorder; 
        int widthType; 
        short topMargin; 
        int topMarginType; 
        short bottomMargin; 
        int bottomMarginType; 
        short leftMargin; 
        int leftMarginType; 
        short rightMargin; 
        int rightMarginType; 
        int verticalAlignment; 
        BOOL textDirection; 
        int deleted; 
        int edited; 
        int formattingChanged; 
        unsigned short indexToAuthorIDOfDeletion; 
        unsigned short indexToAuthorIDOfEdit; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *deletionDate; 
        NSDate *editDate; 
        NSDate *formattingChangeDate; 
        unsigned int shadingOverridden : 1; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int diagonalUpBorderOverridden : 1; 
        unsigned int diagonalDownBorderOverridden : 1; 
        unsigned int insideHorizontalBorderOverridden : 1; 
        unsigned int insideVerticalBorderOverridden : 1; 
        unsigned int widthTypeOverridden : 1; 
        unsigned int topMarginOverridden : 1; 
        unsigned int topMarginTypeOverridden : 1; 
        unsigned int bottomMarginOverridden : 1; 
        unsigned int bottomMarginTypeOverridden : 1; 
        unsigned int leftMarginOverridden : 1; 
        unsigned int leftMarginTypeOverridden : 1; 
        unsigned int rightMarginOverridden : 1; 
        unsigned int rightMarginTypeOverridden : 1; 
        unsigned int verticalAlignmentOverridden : 1; 
        unsigned int textDirectionOverridden : 1; 
        unsigned int verticallyMergedCell : 1; 
        unsigned int verticallyMergedCellOverridden : 1; 
        unsigned int firstInSetOfVerticallyMergedCells : 1; 
        unsigned int firstInSetOfVerticallyMergedCellsOverridden : 1; 
        unsigned int noWrap : 1; 
        unsigned int noWrapOverridden : 1; 
        unsigned int deletedOverridden : 1; 
        unsigned int editedOverridden : 1; 
        unsigned int formattingChangedOverridden : 1; 
        unsigned int indexToAuthorIDOfDeletionOverridden : 1; 
        unsigned int indexToAuthorIDOfEditOverridden : 1; 
        unsigned int indexToAuthorIDOfFormattingChangeOverridden : 1; 
        unsigned int deletionDateOverridden : 1; 
        unsigned int editDateOverridden : 1; 
        unsigned int formattingChangeDateOverridden : 1; 
    } mTrackedProperties;
    WDDocument *mDocument;
}


- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (void)setRightMargin:(short)arg1;
- (void)setWidth:(short)arg1;
- (short)width;
- (short)position;
- (void)setPosition:(short)arg1;
- (void)setNoWrap:(BOOL)arg1;
- (BOOL)noWrap;
- (BOOL)isEditDateOverridden;
- (void)setEditDate:(id)arg1;
- (id)editDate;
- (BOOL)isDeletionDateOverridden;
- (void)setDeletionDate:(id)arg1;
- (id)deletionDate;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfEdit;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfDeletion;
- (void)originalToTracked;
- (void)addProperties:(id)arg1;
- (void)addPropertiesValues:(struct { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; int x10; short x11; int x12; short x13; int x14; short x15; int x16; short x17; int x18; int x19; BOOL x20; int x21; int x22; int x23; unsigned short x24; unsigned short x25; unsigned short x26; id x27; id x28; id x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; }*)arg1 to:(struct { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; int x10; short x11; int x12; short x13; int x14; short x15; int x16; short x17; int x18; int x19; BOOL x20; int x21; int x22; int x23; unsigned short x24; unsigned short x25; unsigned short x26; id x27; id x28; id x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; }*)arg2;
- (BOOL)isNoWrapOverridden;
- (id)mutableInsideVerticalBorder;
- (id)mutableInsideHorizontalBorder;
- (BOOL)firstInSetOfVerticallyMergedCells;
- (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;
- (BOOL)verticallyMergedCell;
- (BOOL)isVerticallyMergedCellOverridden;
- (int)rightMarginType;
- (BOOL)isRightMarginTypeOverridden;
- (int)bottomMarginType;
- (BOOL)isBottomMarginTypeOverridden;
- (int)leftMarginType;
- (BOOL)isLeftMarginTypeOverridden;
- (int)topMarginType;
- (BOOL)isTopMarginTypeOverridden;
- (id)diagonalUpBorder;
- (BOOL)isDiagonalUpBorderOverridden;
- (id)diagonalDownBorder;
- (BOOL)isDiagonalDownBorderOverridden;
- (void)setFirstInSetOfVerticallyMergedCells:(BOOL)arg1;
- (void)setVerticallyMergedCell:(BOOL)arg1;
- (void)setRightMarginType:(int)arg1;
- (void)setLeftMarginType:(int)arg1;
- (void)setBottomMarginType:(int)arg1;
- (void)setTopMarginType:(int)arg1;
- (void)setWidthType:(int)arg1;
- (id)mutableDiagonalDownBorder;
- (id)mutableDiagonalUpBorder;
- (void)clearShading;
- (int)textDirection;
- (BOOL)isTextDirectionOverridden;
- (id)formattingChangeDate;
- (BOOL)isFormattingChangeDateOverridden;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (void)setFormattingChangeDate:(id)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (id)mutableRightBorder;
- (id)mutableBottomBorder;
- (id)mutableLeftBorder;
- (id)mutableTopBorder;
- (int)resolveMode;
- (int)formattingChanged;
- (BOOL)isFormattingChangedOverridden;
- (int)edited;
- (BOOL)isEditedOverridden;
- (void)setFormattingChanged:(int)arg1;
- (void)setEdited:(int)arg1;
- (id)mutableShading;
- (void)setResolveMode:(int)arg1;
- (void)setTextDirection:(int)arg1;
- (void)setBottomMargin:(short)arg1;
- (void)setVerticalAlignment:(int)arg1;
- (void)setDeleted:(int)arg1;
- (int)widthType;
- (BOOL)isWidthTypeOverridden;
- (id)insideVerticalBorder;
- (BOOL)isInsideVerticalBorderOverridden;
- (id)insideHorizontalBorder;
- (BOOL)isInsideHorizontalBorderOverridden;
- (int)verticalAlignment;
- (BOOL)isVerticalAlignmentOverridden;
- (id)rightBorder;
- (id)leftBorder;
- (id)topBorder;
- (BOOL)isRightBorderOverridden;
- (BOOL)isLeftBorderOverridden;
- (BOOL)isTopBorderOverridden;
- (void)setLeftMargin:(short)arg1;
- (void)setTopMargin:(short)arg1;
- (id)bottomBorder;
- (BOOL)isBottomBorderOverridden;
- (id)shading;
- (BOOL)isShadingOverridden;
- (int)deleted;
- (BOOL)isDeletedOverridden;
- (BOOL)isBottomMarginOverridden;
- (BOOL)isTopMarginOverridden;
- (BOOL)isRightMarginOverridden;
- (BOOL)isLeftMarginOverridden;
- (short)bottomMargin;
- (short)topMargin;
- (short)rightMargin;
- (short)leftMargin;

@end
