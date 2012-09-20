/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMNode, NSString;

@interface DOMRange : DOMObject <UIWebSelectionBlock> {
}

@property(readonly) DOMNode * startContainer;
@property(readonly) int startOffset;
@property(readonly) DOMNode * endContainer;
@property(readonly) int endOffset;
@property(readonly) BOOL collapsed;
@property(readonly) DOMNode * commonAncestorContainer;
@property(readonly) NSString * text;

+ (id)rangeForFirstPosition:(id)arg1 second:(id)arg2;

- (id)description;
- (void)dealloc;
- (id)firstNode;
- (id)commonAncestorContainer;
- (int)endOffset;
- (short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2;
- (id)endContainer;
- (void)selectNode:(id)arg1;
- (id)cloneRange;
- (id)cloneContents;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (void)setEndAfter:(id)arg1;
- (void)setStartAfter:(id)arg1;
- (void)insertNode:(id)arg1;
- (void)finalize;
- (BOOL)collapsed;
- (int)startOffset;
- (id)startContainer;
- (void)setEnd:(id)arg1 offset:(int)arg2;
- (void)setStart:(id)arg1 offset:(int)arg2;
- (void)detach;
- (void)selectNodeContents:(id)arg1;
- (id)_text;
- (id)text;
- (void)extend:(unsigned long)arg1 inDirection:(int)arg2;
- (void)move:(unsigned long)arg1 inDirection:(int)arg2;
- (void)expand:(id)arg1;
- (BOOL)isPointInRange:(id)arg1 offset:(int)arg2;
- (short)comparePoint:(id)arg1 offset:(int)arg2;
- (short)compareNode:(id)arg1;
- (BOOL)intersectsNode:(id)arg1;
- (id)createContextualFragment:(id)arg1;
- (id)toString;
- (void)surroundContents:(id)arg1;
- (id)extractContents;
- (void)deleteContents;
- (short)compareBoundaryPoints:(unsigned short)arg1 :(id)arg2;
- (void)collapse:(BOOL)arg1;
- (void)setEndBefore:(id)arg1;
- (void)setStartBefore:(id)arg1;
- (void)setEnd:(id)arg1 :(int)arg2;
- (void)setStart:(id)arg1 :(int)arg2;
- (id)lineBoxRects;
- (id)textRects;
- (id)webArchive;
- (id)markupString;
- (id)enclosingWordRange;
- (id)endPosition;
- (id)startPosition;
- (BOOL)containsRange:(id)arg1;
- (void)unionWithRange:(id)arg1;
- (BOOL)rendersAsBlock;
- (id)largerParent;
- (BOOL)strictlyContainsBlock:(id)arg1;
- (BOOL)containsBlock:(id)arg1;
- (BOOL)isSameBlock:(id)arg1;
- (id)rangeOfContents;
- (id)asDomRange;
- (id)enclosingDocument;
- (BOOL)canShrinkDirectlyToTextOnly;
- (id)parentBlock;
- (BOOL)selectable;
- (id)asDomNode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectAndInsideFixedPosition:(int*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (id)webFrame;
- (void)mf_getBlockBoundaryParent:(id*)arg1 nextSibling:(id*)arg2 atStart:(BOOL)arg3;
- (id)mf_lastNode;
- (id)mf_firstNode;
- (void)mf_hoistRange;
- (id)mf_attachmentURLs;

@end
