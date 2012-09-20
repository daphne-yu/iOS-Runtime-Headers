/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyParserObject : NSObject  {
    double _timeoutTime;
    BOOL _shouldAbort;
    BOOL _didTimeout;
    BOOL _copyBlocks;
    double _timeoutInterval;
}

@property double timeoutInterval;


- (BOOL)areBlocksCopied;
- (BOOL)shouldProceedParsing;
- (void)messageBodyParserWillBeginParsing:(id)arg1;
- (void)copyBlocks;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;
- (void)abortParsing;

@end
