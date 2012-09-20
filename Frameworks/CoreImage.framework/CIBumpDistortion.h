/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIBumpDistortion : CIFilter  {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputScale;
}

@property(retain) CIImage * inputImage;
@property(copy) CIVector * inputCenter;
@property(copy) NSNumber * inputRadius;
@property(copy) NSNumber * inputScale;

+ (id)customAttributes;

- (id)inputScale;
- (void)setInputScale:(id)arg1;
- (id)inputCenter;
- (void)setInputCenter:(id)arg1;
- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
