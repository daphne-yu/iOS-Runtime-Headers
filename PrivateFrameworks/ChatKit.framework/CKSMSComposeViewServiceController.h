/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class XPCProxy<CKSMSComposeRemoteViewControllerDelegate>, CKModalTranscriptController;

@interface CKSMSComposeViewServiceController : UINavigationController <CKTranscriptComposeDelegate> {
    BOOL _canEditRecipients;
    BOOL _supportsAttachments;
    BOOL _supportsMessageInspection;
    BOOL _forceMMS;
    XPCProxy<CKSMSComposeRemoteViewControllerDelegate> *_viewServiceXPCProxy;
    CKModalTranscriptController *_modalTranscriptController;
}

@property(retain) CKModalTranscriptController * modalTranscriptController;
@property id delegate;
@property(retain) XPCProxy<CKSMSComposeRemoteViewControllerDelegate> * viewServiceXPCProxy;
@property BOOL canEditRecipients;


- (void)dealloc;
- (id)init;
- (void)willAppearInRemoteViewController:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)forceMMS;
- (void)forceCancelComposition;
- (void)setUICustomizationData:(id)arg1;
- (void)setText:(id)arg1 addresses:(id)arg2;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (BOOL)supportsMessageInspection;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)_forceMMSIfNecessary;
- (void)insertTextPart:(id)arg1;
- (id)viewServiceXPCProxy;
- (void)setViewServiceXPCProxy:(id)arg1;
- (id)modalTranscriptController;
- (void)setModalTranscriptController:(id)arg1;
- (void)setCanEditRecipients:(BOOL)arg1;
- (BOOL)supportsAttachments;
- (void)showNewMessageCompositionForMessageParts:(id)arg1;
- (void)transcriptController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)transcriptController:(id)arg1 didSendMessageInConversation:(id)arg2;
- (void)showForwardedMessageParts:(id)arg1;
- (void)didCancelComposition:(id)arg1;
- (BOOL)canEditRecipients;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)disableCameraAttachments;

@end
