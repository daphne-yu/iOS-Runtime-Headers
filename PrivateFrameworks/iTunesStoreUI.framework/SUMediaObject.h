/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSObject<OS_dispatch_queue>, NSDictionary, NSURL;

@interface SUMediaObject : NSObject  {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _imagePickerQualityType;
    NSDictionary *_pickerInfo;
}

@property(readonly) NSDictionary * imagePickerInfo;
@property int imagePickerQualityType;
@property(readonly) NSString * inputSourceMIMEType;
@property(readonly) NSString * mediaType;
@property(readonly) NSURL * mediaURL;
@property(readonly) NSURL * referenceURL;

+ (id)newMediaObjectWithImagePickerInfo:(id)arg1;

- (id)newComposeImageWithMaximumSize:(float)arg1;
- (id)newInputSource;
- (id)inputSourceMIMEType;
- (id)copyPreparationOperations;
- (id)_fullSizeImage;
- (id)_newLibraryThumbnail;
- (id)referenceURL;
- (id)initWithImagePickerInfo:(id)arg1;
- (id)mediaURL;
- (int)imagePickerQualityType;
- (id)imagePickerInfo;
- (id)newThumbnailImageWithMaximumSize:(float)arg1;
- (void)saveToLibraryWithCompletionBlock:(id)arg1;
- (void)loadLibraryThumbnailWithCompletionBlock:(id)arg1;
- (void)setImagePickerQualityType:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)mediaType;

@end
