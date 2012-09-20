/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber, CIVector;

@interface CIDisintegrateWithMaskTransition : CIFilter  {
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputMaskImage;
    NSNumber *inputTime;
    NSNumber *inputShadowRadius;
    NSNumber *inputShadowDensity;
    CIVector *inputShadowOffset;
}

@property(retain) CIImage * inputImage;
@property(retain) CIImage * inputTargetImage;
@property(retain) CIImage * inputMaskImage;
@property(retain) NSNumber * inputTime;
@property(retain) NSNumber * inputShadowRadius;
@property(retain) NSNumber * inputShadowDensity;
@property(retain) CIVector * inputShadowOffset;

+ (id)customAttributes;

- (id)inputShadowOffset;
- (id)inputShadowDensity;
- (id)inputShadowRadius;
- (void)setInputShadowOffset:(id)arg1;
- (void)setInputShadowDensity:(id)arg1;
- (void)setInputShadowRadius:(id)arg1;
- (void)setInputMaskImage:(id)arg1;
- (id)inputMaskImage;
- (id)inputTime;
- (void)setInputTargetImage:(id)arg1;
- (id)inputTargetImage;
- (void)setInputTime:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
