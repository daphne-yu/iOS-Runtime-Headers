/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIColor, CIVector;

@interface CISmoothLinearGradient : CIFilter  {
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    CIColor *inputColor0;
    CIColor *inputColor1;
}

@property(retain) CIVector * inputPoint0;
@property(retain) CIVector * inputPoint1;
@property(retain) CIColor * inputColor0;
@property(retain) CIColor * inputColor1;

+ (id)customAttributes;

- (id)inputPoint1;
- (id)inputPoint0;
- (void)setInputPoint1:(id)arg1;
- (void)setInputPoint0:(id)arg1;
- (id)inputColor1;
- (id)inputColor0;
- (void)setInputColor1:(id)arg1;
- (void)setInputColor0:(id)arg1;
- (id)_kernel;
- (id)outputImage;
- (void)setDefaults;

@end
