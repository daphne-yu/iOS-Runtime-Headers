/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableDictionary, NSArray;

@interface FTRegAppleIDSetupManager : NSObject  {
    NSMutableDictionary *_setupOperations;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    NSArray *_candidateAliases;
    NSArray *_selectedAliases;
    NSString *_selectionSummaryText;
}

@property(readonly) BOOL shouldShowAliasSelectionUI;
@property(copy) NSArray * candidateAliases;
@property(copy) NSArray * selectedAliases;
@property(copy) NSString * selectionSummaryText;
@property(retain) NSMutableDictionary * setupOperations;
@property(copy) id handler;

+ (id)sharedInstance;

- (void)_notifySuccess;
- (id)selectionSummaryText;
- (void)addSetupDictionary:(id)arg1 forService:(int)arg2;
- (id)_aliasesForDictionary:(id)arg1;
- (void)_notifyFailureWithError:(id)arg1;
- (BOOL)beginSetupWithCompletionHandler:(id)arg1;
- (void)_checkCompletionStatus;
- (BOOL)aliasIsEnabled:(id)arg1;
- (BOOL)shouldShowAliasSelectionUI;
- (void)_updateSelectionSummaryText;
- (void)setSelectionSummaryText:(id)arg1;
- (id)selectedAliases;
- (id)_appleID;
- (id)candidateAliases;
- (void)_updateCandidateAliases;
- (id)setupOperations;
- (void)_notifySuccess:(BOOL)arg1 error:(id)arg2;
- (void)setSelectedAliases:(id)arg1;
- (void)setCandidateAliases:(id)arg1;
- (void)setSetupOperations:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setHandler:(id)arg1;
- (id)handler;
- (void)_cleanup;

@end
