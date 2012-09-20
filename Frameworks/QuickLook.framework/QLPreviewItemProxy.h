/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSURL, NSString;

@interface QLPreviewItemProxy : NSObject <NSCoding, QLPreviewItem> {
    NSString *_fileExtensionToken;
    int _fileExtensionHandle;
    NSURL *_url;
    NSString *_title;
    NSURL *_urlForDisplay;
    NSString *_contentType;
    NSString *_password;
}

@property(retain) NSURL * url;
@property(retain) NSString * title;
@property(retain) NSURL * urlForDisplay;
@property(retain) NSString * contentType;
@property(retain) NSString * password;
@property(readonly) NSURL * previewItemURL;
@property(readonly) NSString * previewItemTitle;

+ (id)proxyWithPreviewItem:(id)arg1;

- (void)setUrlForDisplay:(id)arg1;
- (id)urlForDisplay;
- (id)initWithPreviewItem:(id)arg1;
- (void)consumeFileExtension;
- (void)issueFileExtension;
- (void)setPassword:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)previewItemTitle;
- (id)previewItemURLForDisplay;
- (id)previewItemContentType;
- (id)previewItemURL;
- (id)password;
- (void)setUrl:(id)arg1;
- (id)url;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setContentType:(id)arg1;
- (id)contentType;

@end
