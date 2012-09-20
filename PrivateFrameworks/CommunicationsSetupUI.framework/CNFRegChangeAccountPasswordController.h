/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class NSString, <CNFRegChangeAccountPasswordDelegate>;

@interface CNFRegChangeAccountPasswordController : CNFRegAuthorizedAccountWebViewController  {
    <CNFRegChangeAccountPasswordDelegate> *_delegate;
    NSString *_appleID;
}

@property(copy) NSString * appleID;
@property <CNFRegChangeAccountPasswordDelegate> * delegate;


- (void)setAppleID:(id)arg1;
- (id)appleID;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (id)bagKey;
- (void)cancelTapped;
- (id)overrideURLForURL:(id)arg1;
- (BOOL)canSendURLRequest:(id)arg1;
- (id)logName;
- (id)initWithRegController:(id)arg1 appleID:(id)arg2;
- (void)setHeadersForRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
