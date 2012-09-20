/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMimePart : MimePart  {
}

+ (Class)attachmentClass;
+ (BOOL)isRecognizedClassForContent:(id)arg1;

- (id)decodeMessageExternal_body;
- (id)decodeMessagePartial;
- (id)decodeMessageRfc822;
- (id)decodeMessageDelivery_status;
- (id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3;
- (id)decodeMultipartAppledouble;
- (id)decodeTextCalendar;
- (id)decodeTextPlain;
- (id)htmlContent;
- (id)htmlContentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)decodeTextHtml;
- (id)decodeTextEnriched;
- (id)decodeTextRichtext;
- (BOOL)_shouldContinueDecodingProcess;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2;
- (id)htmlContentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (void)configureFileWrapper:(id)arg1;
- (id)fileWrapperForcingDownload:(BOOL)arg1;

@end
