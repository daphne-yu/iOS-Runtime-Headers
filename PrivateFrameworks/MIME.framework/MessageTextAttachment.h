/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class MessageFileWrapper, NSMutableDictionary;

@interface MessageTextAttachment : NSObject  {
    NSMutableDictionary *_cache;
}

@property(retain) MessageFileWrapper * fileWrapper;

+ (unsigned int)precedenceLevel;

- (id)description;
- (void)dealloc;
- (id)init;
- (void)setMimePart:(id)arg1;
- (BOOL)needsRedownload;
- (id)textEncodingGuess;
- (id)persistentUniqueIdentifier;
- (void)setFileWrapper:(id)arg1;
- (id)initWithWrapper:(id)arg1;
- (id)cachedValueForKey:(id)arg1;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (unsigned int)approximateSize;
- (BOOL)isPlaceholder;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (id)fileWrapper;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (BOOL)hasBeenDownloaded;
- (void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (id)mimePart;
- (void)download;
- (id)mimeType;
- (BOOL)isDisplayableInsidePlugin;
- (BOOL)isContentDownloadable;
- (id)unzippedContentType;
- (BOOL)_isSinglePagePDFThatIsAllowedToBeInline;
- (BOOL)isContentOpenable;
- (id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1;
- (BOOL)isDisplayableInline;
- (id)contentType;
- (BOOL)isCalendarFile;
- (void)scaleImageToFit:(unsigned int)arg1;
- (unsigned int)imageScalingFlags;
- (void)setImageScalingFlags:(unsigned int)arg1;
- (id)mf_markupStringForComposition:(BOOL)arg1 prependBlankLine:(BOOL)arg2 imageScale:(unsigned int)arg3;
- (id)mf_markupURL;
- (struct CGSize { float x1; float x2; })mf_markupSizeForImageScale:(unsigned int)arg1;
- (BOOL)isPass;
- (id)pass;

@end
