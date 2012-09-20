/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImage, NSData, NSString;

@interface CKImageData : NSObject  {
    struct CGImageSource { } *_imageSource;
    unsigned int _count;
    int _orientation;
    NSData *_data;
}

@property(retain) NSData * data;
@property(readonly) struct CGSize { float x1; float x2; } ptSize;
@property(readonly) struct CGSize { float x1; float x2; } pxSize;
@property(readonly) NSString * UTIType;
@property(readonly) NSString * MIMEType;
@property(readonly) int orientation;
@property(readonly) UIImage * image;
@property(readonly) unsigned int count;

+ (id)MIMETypeForData:(id)arg1;

- (id)data;
- (void)dealloc;
- (unsigned int)count;
- (id)MIMEType;
- (id)image;
- (id)initWithData:(id)arg1;
- (void)setData:(id)arg1;
- (int)orientation;
- (struct CGSize { float x1; float x2; })ptSize;
- (struct CGSize { float x1; float x2; })pxSize;
- (id)_thumbnailFitToSize:(struct CGSize { float x1; float x2; })arg1 atIndex:(unsigned int)arg2;
- (id)durationsWithMaxCount:(unsigned int)arg1;
- (id)thumbnailsFitToSize:(struct CGSize { float x1; float x2; })arg1 maxCount:(unsigned int)arg2;
- (id)thumbnailFitToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)UTIType;

@end
