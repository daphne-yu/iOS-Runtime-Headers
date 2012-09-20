/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSCache, NSLock, SLWeiboDaemonConnectionInfo, NSMutableArray;

@interface SLWeiboSession : NSObject <XPCProxyTarget> {
    SLWeiboDaemonConnectionInfo *_daemonConnectionInfo;
    id _locationInformationChangedBlock;
    id _connectionResetBlock;
    NSCache *_profileImageCache;
    NSLock *_inFlightSessionRemoteCallInfosLock;
    NSMutableArray *_inFlightSessionRemoteCallInfos;
}

@property(copy) id connectionResetBlock;
@property(copy) id locationInformationChangedBlock;


- (void)setClientInfo:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)setConnectionResetBlock:(id)arg1;
- (id)connectionResetBlock;
- (void)setLocationInformationChangedBlock:(id)arg1;
- (id)locationInformationChangedBlock;
- (void)showWeiboSettingsIfNeeded;
- (void)setGeotagAccountSetting:(BOOL)arg1;
- (void)_noteWeibodSessionProxyInterrupted;
- (void)acceptLocationUpdate:(id)arg1;
- (void)getPermaLinkFromLastStatusUpdate:(id)arg1;
- (void)sendStatus:(id)arg1 completion:(id)arg2;
- (void)fetchGeotagStatus:(id)arg1;
- (void)setOverrideGeotagInfo:(id)arg1;
- (void)setGeotagStatus:(int)arg1;
- (void)fetchRelationshipWithScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchCurrentImageLimits:(id)arg1;
- (void)fetchCurrentUrlLimits:(id)arg1;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(id)arg2;
- (void)fetchRecordForScreenName:(id)arg1 completion:(id)arg2;
- (void)_issueRemoteCall:(id)arg1;
- (void)fetchSessionInfo:(id)arg1;
- (void)_didCompleteRemoteCall:(id)arg1;
- (id)_newRemoteCall;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)tearDownWeibodSession;
- (void)_buildWeibodSession;
- (id)_daemonSessionProxy;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(id)arg2;

@end
