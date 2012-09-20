/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString, NSMutableArray, _MFParsedHTMLNode;

@interface _MFParsedHTMLNode : NSObject <MFMessageBodyTreeNode, MFMessageBodyConsumableInnerTextNode> {
    NSMutableArray *_childNodes;
    _MFParsedHTMLNode *_parentNode;
    _MFParsedHTMLNode *_nextSibling;
    NSString *_htmlString;
    unsigned int _startLocation;
    unsigned int _endLocation;
}

@property _MFParsedHTMLNode * parentNode;
@property _MFParsedHTMLNode * nextSibling;
@property(readonly) BOOL hasChildNodes;
@property(readonly) _MFParsedHTMLNode * firstChild;
@property(readonly) _MFParsedHTMLNode * lastChild;
@property(readonly) NSString * tagName;
@property(retain) NSString * htmlString;
@property unsigned int startLocation;
@property unsigned int endLocation;


- (void)dealloc;
- (id)init;
- (id)parentNode;
- (void)setStartLocation:(unsigned int)arg1;
- (id)lastChild;
- (BOOL)hasChildNodes;
- (id)tagName;
- (id)nextSibling;
- (id)firstChild;
- (id)recursiveDescription;
- (unsigned int)startLocation;
- (id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (void)addRecursiveDescriptionWithLevel:(unsigned int)arg1 toString:(id)arg2;
- (void)setNextSibling:(id)arg1;
- (void)setParentNode:(id)arg1;
- (void)setEndLocation:(unsigned int)arg1;
- (void)setHtmlString:(id)arg1;
- (unsigned int)endLocation;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (void)collectDescendanceIntoArray:(id)arg1;
- (id)htmlString;
- (void)appendChild:(id)arg1;

@end
