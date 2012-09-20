/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@class NSFileHandle, NSTimer, NSMutableString, DPTextLayer, NSString;

@interface SKTerminalLayer : SKScrollLayer  {
    DPTextLayer *_textField;
    NSFileHandle *_fileHandle;
    NSMutableString *_text;
    NSTimer *_updateTimer;
    NSString *_logFile;
}


- (void)dealloc;
- (id)init;
- (void)clear;
- (void)update;
- (void)reload;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLogFile:(id)arg1;
- (void)setTextFieldText:(id)arg1;
- (void)timerUpdate:(id)arg1;

@end
