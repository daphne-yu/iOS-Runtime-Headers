/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDBorder, NSDate, WDStyle, WDDocument, WDShading;

@interface WDTableProperties : NSObject <NSCopying> {
    WDDocument *mDocument;
    unsigned int mOriginal : 1;
    unsigned int mTracked : 1;
    unsigned int mResolved : 1;
    struct { 
        WDStyle *baseStyle; 
        WDShading *shading; 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        WDBorder *insideHorizontalBorder; 
        WDBorder *insideVerticalBorder; 
        int justification; 
        int alignment; 
        int width; 
        int widthType; 
        short indent; 
        int indentType; 
        short cellSpacing; 
        int cellSpacingType; 
        int verticalAnchor; 
        int horizontalAnchor; 
        int verticalPosition; 
        int horizontalPosition; 
        int leftDistanceFromText; 
        int topDistanceFromText; 
        int rightDistanceFromText; 
        int bottomDistanceFromText; 
        int deleted; 
        int edited; 
        int formattingChanged; 
        unsigned short indexToAuthorIDOfDeletion; 
        unsigned short indexToAuthorIDOfEdit; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *deletionDate; 
        NSDate *editDate; 
        NSDate *formattingChangeDate; 
        unsigned int baseStyleOverridden : 1; 
        unsigned int shadingOverridden : 1; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int insideHorizontalBorderOverridden : 1; 
        unsigned int insideVerticalBorderOverridden : 1; 
        unsigned int justificationOverridden : 1; 
        unsigned int alignmentOverridden : 1; 
        unsigned int widthOverridden : 1; 
        unsigned int widthTypeOverridden : 1; 
        unsigned int indentOverridden : 1; 
        unsigned int indentTypeOverridden : 1; 
        unsigned int cellSpacingOverridden : 1; 
        unsigned int cellSpacingTypeOverridden : 1; 
        unsigned int verticalAnchorOverridden : 1; 
        unsigned int horizontalAnchorOverridden : 1; 
        unsigned int verticalPositionOverridden : 1; 
        unsigned int horizontalPositionOverridden : 1; 
        unsigned int leftDistanceFromTextOverridden : 1; 
        unsigned int topDistanceFromTextOverridden : 1; 
        unsigned int rightDistanceFromTextOverridden : 1; 
        unsigned int bottomDistanceFromTextOverridden : 1; 
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
        WDStyle *baseStyle; 
        WDShading *shading; 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        WDBorder *insideHorizontalBorder; 
        WDBorder *insideVerticalBorder; 
        int justification; 
        int alignment; 
        int width; 
        int widthType; 
        short indent; 
        int indentType; 
        short cellSpacing; 
        int cellSpacingType; 
        int verticalAnchor; 
        int horizontalAnchor; 
        int verticalPosition; 
        int horizontalPosition; 
        int leftDistanceFromText; 
        int topDistanceFromText; 
        int rightDistanceFromText; 
        int bottomDistanceFromText; 
        int deleted; 
        int edited; 
        int formattingChanged; 
        unsigned short indexToAuthorIDOfDeletion; 
        unsigned short indexToAuthorIDOfEdit; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *deletionDate; 
        NSDate *editDate; 
        NSDate *formattingChangeDate; 
        unsigned int baseStyleOverridden : 1; 
        unsigned int shadingOverridden : 1; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int insideHorizontalBorderOverridden : 1; 
        unsigned int insideVerticalBorderOverridden : 1; 
        unsigned int justificationOverridden : 1; 
        unsigned int alignmentOverridden : 1; 
        unsigned int widthOverridden : 1; 
        unsigned int widthTypeOverridden : 1; 
        unsigned int indentOverridden : 1; 
        unsigned int indentTypeOverridden : 1; 
        unsigned int cellSpacingOverridden : 1; 
        unsigned int cellSpacingTypeOverridden : 1; 
        unsigned int verticalAnchorOverridden : 1; 
        unsigned int horizontalAnchorOverridden : 1; 
        unsigned int verticalPositionOverridden : 1; 
        unsigned int horizontalPositionOverridden : 1; 
        unsigned int leftDistanceFromTextOverridden : 1; 
        unsigned int topDistanceFromTextOverridden : 1; 
        unsigned int rightDistanceFromTextOverridden : 1; 
        unsigned int bottomDistanceFromTextOverridden : 1; 
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
}


- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (void)setWidth:(long)arg1;
- (long)width;
- (int)alignment;
- (void)setAlignment:(int)arg1;
- (void)setCellSpacing:(short)arg1;
- (short)cellSpacing;
- (void)moveOrignalToTracked;
- (void)setCellSpacingType:(int)arg1;
- (void)clearInsideVerticalBorder;
- (void)clearInsideHorizontalBorder;
- (void)clearRightBorder;
- (void)clearBottomBorder;
- (void)clearLeftBorder;
- (void)clearTopBorder;
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
- (void)setBottomDistanceFromText:(long)arg1;
- (void)setRightDistanceFromText:(long)arg1;
- (void)setTopDistanceFromText:(long)arg1;
- (void)setLeftDistanceFromText:(long)arg1;
- (void)setIndentType:(int)arg1;
- (long)bottomDistanceFromText;
- (BOOL)isBottomDistanceFromTextOverridden;
- (long)rightDistanceFromText;
- (BOOL)isRightDistanceFromTextOverridden;
- (int)cellSpacingType;
- (BOOL)isCellSpacingTypeOverridden;
- (BOOL)isCellSpacingOverridden;
- (int)indentType;
- (BOOL)isIndentTypeOverridden;
- (id)mutableInsideVerticalBorder;
- (id)mutableInsideHorizontalBorder;
- (void)setWidthType:(int)arg1;
- (long)topDistanceFromText;
- (BOOL)isTopDistanceFromTextOverridden;
- (BOOL)isLeftDistanceFromTextOverridden;
- (void)clearShading;
- (BOOL)isTableFloating;
- (id)formattingChangeDate;
- (BOOL)isFormattingChangeDateOverridden;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (void)setFormattingChangeDate:(id)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (void)setVerticalAnchor:(int)arg1;
- (void)setHorizontalAnchor:(int)arg1;
- (id)mutableRightBorder;
- (id)mutableBottomBorder;
- (id)mutableLeftBorder;
- (id)mutableTopBorder;
- (void)setVerticalPosition:(long)arg1;
- (void)setHorizontalPosition:(long)arg1;
- (void)setJustification:(int)arg1;
- (int)resolveMode;
- (int)formattingChanged;
- (BOOL)isFormattingChangedOverridden;
- (int)edited;
- (BOOL)isEditedOverridden;
- (void)setFormattingChanged:(int)arg1;
- (void)setEdited:(int)arg1;
- (void)setBaseStyle:(id)arg1;
- (id)mutableShading;
- (void)setResolveMode:(int)arg1;
- (BOOL)isAlignmentOverridden;
- (void)setDeleted:(int)arg1;
- (BOOL)isIndentOverridden;
- (short)indent;
- (void)setIndent:(short)arg1;
- (int)widthType;
- (BOOL)isWidthTypeOverridden;
- (id)insideVerticalBorder;
- (BOOL)isInsideVerticalBorderOverridden;
- (id)insideHorizontalBorder;
- (BOOL)isInsideHorizontalBorderOverridden;
- (long)leftDistanceFromText;
- (id)rightBorder;
- (id)leftBorder;
- (id)topBorder;
- (BOOL)isRightBorderOverridden;
- (BOOL)isLeftBorderOverridden;
- (BOOL)isTopBorderOverridden;
- (BOOL)isWidthOverridden;
- (id)bottomBorder;
- (BOOL)isBottomBorderOverridden;
- (id)shading;
- (BOOL)isShadingOverridden;
- (int)justification;
- (BOOL)isJustificationOverridden;
- (long)verticalPosition;
- (BOOL)isVerticalPositionOverridden;
- (long)horizontalPosition;
- (BOOL)isHorizontalPositionOverridden;
- (int)verticalAnchor;
- (BOOL)isVerticalAnchorOverridden;
- (int)horizontalAnchor;
- (BOOL)isHorizontalAnchorOverridden;
- (id)baseStyle;
- (BOOL)isBaseStyleOverridden;
- (int)deleted;
- (BOOL)isDeletedOverridden;

@end
