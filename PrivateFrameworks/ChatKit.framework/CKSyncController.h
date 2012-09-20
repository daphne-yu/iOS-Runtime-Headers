/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSyncController : NSObject  {
    int _restoreStateChangedToken;
    int _attachmentRestoredToken;
    BOOL _restoring;
}

@property(getter=isRestoring) BOOL restoring;

+ (id)sharedInstance;

- (id)init;
- (void)postAttachmentRestored;
- (void)updateRestoreState;
- (void)attachmentRestored;
- (void)prioritizeAttachmentAtPath:(id)arg1;
- (void)setRestoring:(BOOL)arg1;
- (BOOL)isRestoring;

@end
