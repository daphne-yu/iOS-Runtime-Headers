/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject  {
    NSMutableDictionary *_runningQueries;
}

@property(retain) NSMutableDictionary * _runningQueries;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)set_runningQueries:(id)arg1;
- (id)_runningQueries;
- (void)databaseNoLongerFull;
- (void)databaseFull;
- (void)messageQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3;
- (void)loadMessageWithGUID:(id)arg1 completionBlock:(id)arg2;

@end
