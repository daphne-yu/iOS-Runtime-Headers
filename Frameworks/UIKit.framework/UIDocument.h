/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSOperationQueue, NSObject<OS_dispatch_queue>, NSDocumentDifferenceSize, NSObject<OS_dispatch_semaphore>, NSUndoManager, NSTimer, NSMutableArray, NSString, NSURL, NSDate, NSLock;

@interface UIDocument : NSObject <NSFilePresenter> {
    NSURL *_fileURL;
    NSString *_fileType;
    NSString *_localizedName;
    NSUndoManager *_undoManager;
    NSDate *_fileModificationDate;
    NSObject<OS_dispatch_queue> *_fileAccessQueue;
    NSObject<OS_dispatch_queue> *_openingQueue;
    NSObject<OS_dispatch_semaphore> *_fileAccessSemaphore;
    NSOperationQueue *_filePresenterQueue;
    id _differenceDueToRecentChanges;
    id _differenceSincePreservingPreviousVersion;
    id _differenceSinceSaving;
    NSTimer *_autosavingTimer;
    double _lastSaveTime;
    unsigned int _fileContentsPreservationReason;
    double _lastPreservationTime;
    id _versionWithoutRecentChanges;
    NSMutableArray *_versions;
    void *_conflictObserver;
    NSLock *_documentPropertyLock;
    id _alertPresenter;
    struct __docFlags { 
        unsigned int inClose : 1; 
        unsigned int isOpen : 1; 
        unsigned int inOpen : 1; 
        unsigned int isAutosavingBecauseOfTimer : 1; 
        unsigned int versionWithoutRecentChangesIsNotLastOpened : 1; 
        unsigned int ignoreUndoAndRedoNotifications : 1; 
        unsigned int editingDisabled : 1; 
        unsigned int isRegisteredAsFilePresenter : 1; 
        unsigned int movingFile : 1; 
        unsigned int savingError : 1; 
        unsigned int inConflict : 1; 
    } _docFlags;
}

@property(getter=_isEditingDisabled,setter=_setEditingDisabled:) BOOL editingDisabled;
@property(readonly) NSURL * fileURL;
@property(readonly) NSString * localizedName;
@property(readonly) NSString * fileType;
@property(copy) NSDate * fileModificationDate;
@property(readonly) unsigned int documentState;
@property(retain) NSUndoManager * undoManager;
@property(readonly) NSDocumentDifferenceSize * differenceDueToRecentChanges;
@property(readonly) NSDocumentDifferenceSize * differenceSincePreservingPreviousVersion;
@property(readonly) NSDocumentDifferenceSize * differenceSinceSaving;
@property(readonly) NSURL * presentedItemURL;
@property(readonly) NSOperationQueue * presentedItemOperationQueue;
@property(readonly) NSURL * primaryPresentedItemURL;

+ (id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryAttempter:(id)arg4;
+ (void)_autosavingTimerDidFireSoContinue:(id)arg1;
+ (void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(BOOL)arg4;
+ (id)_typeForContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)_fileModificationDateForURL:(id)arg1;
+ (void)initialize;

- (id)contentsForType:(id)arg1 error:(id*)arg2;
- (BOOL)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)fileURL;
- (unsigned int)documentState;
- (void)updateChangeCount:(int)arg1;
- (id)initWithFileURL:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)_fileOpeningQueue;
- (void)userInteractionNoLongerPermittedForError:(id)arg1;
- (void)closeWithCompletionHandler:(id)arg1;
- (id)_presentableFileNameForSaveOperation:(int)arg1 url:(id)arg2;
- (void)_unlockFileAccessQueue;
- (void)_lockFileAccessQueueAndPerformBlock:(id)arg1;
- (BOOL)_isInConflict;
- (BOOL)_hasSavingError;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)presentedSubitemDidAppearAtURL:(id)arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(id)arg2;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)relinquishPresentedItemToReader:(id)arg1;
- (void)_setInConflict:(BOOL)arg1;
- (void)revertToContentsOfURL:(id)arg1 completionHandler:(id)arg2;
- (BOOL)_isEditingDisabled;
- (BOOL)_shouldAllowWritingInResponseToPresenterMessage;
- (void)_setHasSavingError:(BOOL)arg1;
- (void)finishedHandlingError:(id)arg1 recovered:(BOOL)arg2;
- (void)_changeWasDone:(id)arg1;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (id)differenceSincePreservingPreviousVersion;
- (id)differenceDueToRecentChanges;
- (BOOL)_hasUnsavedChanges;
- (id)differenceSinceSaving;
- (void)_saveUnsavedChangesWithCompletionHandler:(id)arg1;
- (void)autosaveWithCompletionHandler:(id)arg1;
- (void)saveToURL:(id)arg1 forSaveOperation:(int)arg2 completionHandler:(id)arg3;
- (void)_autosavingCompletedSuccessfully:(BOOL)arg1;
- (void)_rescheduleAutosaving;
- (void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(BOOL)arg2;
- (double)_autosavingDelay;
- (void)_autosaveWithCompletionHandler:(id)arg1;
- (void)_scheduleAutosaving;
- (BOOL)hasUnsavedChanges;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(int)arg2;
- (void)_coordinateWritingItemAtURL:(id)arg1 error:(id*)arg2 byAccessor:(id)arg3;
- (void)_finishSavingToURL:(id)arg1 forSaveOperation:(int)arg2 changeCount:(id)arg3;
- (BOOL)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(int)arg4 error:(id*)arg5;
- (id)fileAttributesToWriteToURL:(id)arg1 forSaveOperation:(int)arg2 error:(id*)arg3;
- (id)changeCountTokenForSaveOperation:(int)arg1;
- (id)fileNameExtensionForType:(id)arg1 saveOperation:(int)arg2;
- (id)fileType;
- (id)savingFileType;
- (BOOL)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(int)arg3 originalContentsURL:(id)arg4 error:(id*)arg5;
- (void)openWithCompletionHandler:(id)arg1;
- (void)setFileType:(id)arg1;
- (void)_setEditingDisabled:(BOOL)arg1;
- (BOOL)_isOpen;
- (void)_sendStateChangedNotification;
- (void)enableEditing;
- (void)disableEditing;
- (void)_updateConflictState;
- (void)performAsynchronousFileAccessUsingBlock:(id)arg1;
- (void)_performBlock:(id)arg1 synchronouslyOnQueue:(id)arg2;
- (void)handleError:(id)arg1 userInteractionPermitted:(BOOL)arg2;
- (void)_setOpen:(BOOL)arg1;
- (void)_updateLocalizedName;
- (void)setFileModificationDate:(id)arg1;
- (BOOL)readFromURL:(id)arg1 error:(id*)arg2;
- (void)_registerAsFilePresenterIfNecessary;
- (void)_setInOpen:(BOOL)arg1;
- (BOOL)_isInOpen;
- (void)_performBlockSynchronouslyOnMainThread:(id)arg1;
- (void)_releaseUndoManager;
- (void)_unregisterAsFilePresenterIfNecessary;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_setFileURL:(id)arg1;
- (id)fileModificationDate;
- (id)localizedName;
- (id)undoManager;

@end
