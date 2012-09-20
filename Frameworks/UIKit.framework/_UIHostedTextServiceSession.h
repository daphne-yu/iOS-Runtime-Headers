/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIHostedTextServiceSessionDelegate>;

@interface _UIHostedTextServiceSession : _UITextServiceSession  {
    <_UIHostedTextServiceSessionDelegate> *_delegate;
}

@property <_UIHostedTextServiceSessionDelegate> * delegate;

+ (id)showServiceForText:(id)arg1 type:(int)arg2 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)remoteSessionDidDismiss;
- (void)dismissTextServiceAnimated:(BOOL)arg1;

@end
