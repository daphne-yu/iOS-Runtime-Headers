/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColorMap, OADTheme, OADTextListStyle;

@interface PDNotesMaster : PDSlideBase  {
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mNotesTextStyle;
}


- (void)dealloc;
- (id)init;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)notesTextStyle;
- (id)drawingTheme;
- (void)doneWithContent;
- (id)parentSlideBase;
- (id)fontScheme;
- (id)colorMap;
- (id)styleMatrix;
- (id)colorScheme;
- (id)theme;

@end
