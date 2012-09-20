/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, NSString, MailMessage, MFGenericAttachmentStore, MFMessageViewingContext;

@interface _MFMailCompositionContext : NSObject  {
    NSString *_sendingAddress;
    NSString *_subject;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_messageBody;
    MFGenericAttachmentStore *_attachments;
    int _composeType;
    id _autosaveIdentifier;
    MailMessage *_originalMessage;
    id _originalContent;
    MFMessageViewingContext *_loadingContext;
    BOOL _loadRest;
    BOOL _includeAttachments;
    BOOL _showKeyboardImmediately;
    BOOL _showContentImmediately;
    BOOL _prefersFirstLineSelection;
}

@property(copy) NSString * sendingAddress;
@property(copy) NSString * subject;
@property(copy) NSArray * toRecipients;
@property(copy) NSArray * ccRecipients;
@property(copy) NSArray * bccRecipients;
@property BOOL loadRest;
@property BOOL includeAttachments;
@property BOOL showKeyboardImmediately;
@property BOOL showContentImmediately;
@property BOOL prefersFirstLineSelection;
@property(retain) id originalContent;
@property(retain) MFMessageViewingContext * loadingContext;
@property(readonly) int composeType;
@property(readonly) id autosaveIdentifier;
@property(readonly) MailMessage * originalMessage;
@property(readonly) MFGenericAttachmentStore * attachments;


- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (id)subject;
- (void)setSubject:(id)arg1;
- (void)setPrefersFirstLineSelection:(BOOL)arg1;
- (void)setShowContentImmediately:(BOOL)arg1;
- (id)initOutboxRestoreOfMessage:(id)arg1;
- (id)initSendAgainDraftOfMessage:(id)arg1;
- (id)initDraftRestoreOfMessage:(id)arg1;
- (id)initForwardOfMessage:(id)arg1;
- (id)initReplyAllToMessage:(id)arg1;
- (id)initReplyToMessage:(id)arg1;
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1;
- (id)initWithComposeType:(int)arg1 originalMessage:(id)arg2;
- (id)initWithURL:(id)arg1 composeType:(int)arg2 originalMessage:(id)arg3;
- (id)initWithComposeType:(int)arg1;
- (id)bccRecipients;
- (BOOL)prefersFirstLineSelection;
- (void)setShowKeyboardImmediately:(BOOL)arg1;
- (BOOL)includeAttachments;
- (void)setOriginalContent:(id)arg1;
- (id)originalContent;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (BOOL)showKeyboardImmediately;
- (BOOL)loadRest;
- (id)ccRecipients;
- (id)toRecipients;
- (BOOL)showContentImmediately;
- (void)setIncludeAttachments:(BOOL)arg1;
- (void)setLoadRest:(BOOL)arg1;
- (void)setLoadingContext:(id)arg1;
- (id)originalMessage;
- (id)loadingContext;
- (int)composeType;
- (id)sendingAddress;
- (void)setSendingAddress:(id)arg1;
- (id)attachments;
- (id)messageBody;
- (id)autosaveIdentifier;

@end
