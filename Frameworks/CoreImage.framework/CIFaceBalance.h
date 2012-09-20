/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIFaceBalance : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputOrigI;
    NSNumber *inputOrigQ;
    NSNumber *inputStrength;
    NSNumber *inputWarmth;
}

@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputOrigI;
@property(copy) NSNumber * inputOrigQ;
@property(copy) NSNumber * inputStrength;
@property(copy) NSNumber * inputWarmth;

+ (id)customAttributes;

- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (id)inputWarmth;
- (id)inputStrength;
- (id)inputOrigQ;
- (id)inputOrigI;
- (void)setInputWarmth:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputOrigQ:(id)arg1;
- (void)setInputOrigI:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (BOOL)_isIdentity;
- (id)outputImage;
- (void)setDefaults;

@end
