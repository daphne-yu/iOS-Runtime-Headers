/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAPriorityManager : NSObject  {
    struct __CFDictionary { } *_clientsToPriorityRequests;
    int _foregroundDataclasses;
    int _currentPriority;
}

@property(readonly) struct __CFDictionary { }* clientsToPriorityRequests;
@property(readonly) int currentPriority;

+ (id)sharedManager;
+ (void)vendPriorityManagers;

- (void)dealloc;
- (id)init;
- (id)stateString;
- (int)currentPriority;
- (void)_setForegroundDataclasses:(int)arg1;
- (int)_recalculatePriority;
- (struct __CFDictionary { }*)clientsToPriorityRequests;
- (void)_SBApplicationStateChanged:(id)arg1;
- (void)_setNewPriority;
- (id)_appIDsToDataclasses;
- (void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(int)arg3;
- (void)bumpDataclassesToUIPriority:(int)arg1;

@end
