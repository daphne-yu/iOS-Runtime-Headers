/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface PBTextBlock : NSObject  {
}

+ (void)writeTextBody:(id)arg1 textBoxParentHolder:(id)arg2 startIndexInParent:(unsigned int)arg3 bulletStyleAtom:(struct PptTextBlockStyling9Atom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; boolx6; struct ChVector<PptTextBlockStyling9Atom::Style *> { struct Style {} **x_7_1_1; struct Style {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; }*)arg4 textRulerAtom:(struct PptTextRulerAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; boolx6; struct ChVector<PptTab> {} *x7; unsigned short x8[5]; unsigned short x9[5]; unsigned short x10; }*)arg5 masterTextStyleAtom:(struct PptTextMasterStyleAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; boolx6; struct ChVector<PptTextMasterStyleAtom::Level *> { struct Level {} **x_7_1_1; struct Level {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; }*)arg6 masterBulletStyleAtom:(struct PptTextMasterStyle9Atom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; boolx6; struct ChVector<PptTextMasterStyle9Atom::Level *> { struct Level {} **x_7_1_1; struct Level {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; }*)arg7 state:(id)arg8;
+ (void)writeHyperlink:(id)arg1 textBoxParentHolder:(id)arg2 insertIndexInParent:(unsigned int)arg3 counter:(unsigned int*)arg4 charRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 instance:(int)arg6 state:(id)arg7;
+ (void)readParagraph:(id)arg1 paragraph:(struct __CFAttributedString { }*)arg2 textType:(int)arg3 state:(id)arg4;
+ (void)readFromStyledText:(struct __CFAttributedString { }*)arg1 toStyledPargraphs:(struct __CFArray { }*)arg2;
+ (void)readFromTextBlock:(id)arg1 toStyledText:(struct __CFAttributedString { }*)arg2;
+ (void)applyTextRuler:(struct PptTextRulerAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; boolx6; struct ChVector<PptTab> {} *x7; unsigned short x8[5]; unsigned short x9[5]; unsigned short x10; }*)arg1 toTextBlock:(id)arg2;
+ (void)readClientTextBox:(id)arg1 textBody:(id)arg2 state:(id)arg3;


@end
