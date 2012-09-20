/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class WLImage;

@interface WLCardBackFaceImages : WLCardImages  {
    WLImage *_faceImage;
}

@property(retain) WLImage * faceImage;

+ (int)imageSet;
+ (id)archiveName;
+ (int)currentVersion;

- (void)setFaceImage:(id)arg1;
- (id)initWithCardURL:(id)arg1 displayProfile:(id)arg2;
- (id)faceImage;
- (void)preheatImages;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
