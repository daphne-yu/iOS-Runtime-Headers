/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSMutableString;

@interface MFMessageBodyStringAccumulator : NSObject <MFMessageBodyStringAccumulator> {
    NSMutableString *_accumulatedString;
    unsigned int _remainingLength;
    int _options;
    int _lastEntity;
    unsigned int _lastCustomEntityTag;
    BOOL _isFull;
}


- (void)dealloc;
- (void)appendString:(id)arg1;
- (void)appendCustomEntityWithTag:(unsigned int)arg1 stringRepresentation:(id)arg2;
- (void)appendRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 ofString:(id)arg2;
- (id)accumulatedString;
- (void)appendInnerTextWithConsumableNode:(id)arg1;
- (id)initWithOptions:(int)arg1 lengthLimit:(unsigned int)arg2;
- (void)appendCharacters:(const unsigned short*)arg1 length:(unsigned int)arg2;
- (BOOL)isFull;

@end
