/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSThread, NSTimer, NSDictionary, <AutoGuessUIDelegate>, NSString, NSMutableDictionary, NSArray;

@interface AutoGuessController : AssistantCallbackController  {
    int _lastAutoGuessUISelector;
    int _currentAutoGuessUISelector;
    NSString *_lastParamString;
    NSString *_currentParamString;
    BOOL _onShortTimer;
    struct ACPBrowserSession { } *_acpBrowserSession;
    struct AutoGuessContext { } *_guessContext;
    NSDictionary *_lastInstrumentation;
    NSTimer *_browseReadyTimer;
    int _wifiScanStatus;
    int _bonjourBrowseStatus;
    BOOL _autoJoinState;
    BOOL _updatedTargetInfo;
    NSString *_targetMACAddress;
    NSDictionary *_targetScanRecord;
    NSDictionary *_targetBrowseRecord;
    NSMutableDictionary *_browsedBases;
    NSArray *_wifiScanInfos;
    id _delegate;
    NSDictionary *unconfiguredDeviceThatIsBeingSetup;
    NSDictionary *_guessCompletionDict;
    NSThread *_autoGuessThread;
}

@property(retain) NSTimer * _browseReadyTimer;
@property(retain) NSString * targetMACAddress;
@property(retain) NSDictionary * targetScanRecord;
@property(retain) NSDictionary * targetBrowseRecord;
@property(retain) NSMutableDictionary * _browsedBases;
@property(retain) NSArray * _wifiScanInfos;
@property <AutoGuessUIDelegate> * delegate;
@property int lastAutoGuessUISelector;
@property int currentAutoGuessUISelector;
@property(retain) NSString * lastParamString;
@property(retain) NSString * currentParamString;
@property(retain) NSDictionary * unconfiguredDeviceThatIsBeingSetup;
@property(retain) NSDictionary * lastInstrumentation;
@property(retain) NSDictionary * guessCompletionDict;

+ (id)fullAutoGuessDictionaryFromCompletionDict:(id)arg1;
+ (id)primaryRecommendationDictionaryFromCompletionDict:(id)arg1;
+ (id)unconfiguredBaseStationCanBeConfiguredFromCompletionDict:(id)arg1;
+ (id)recommendationStringFromCompletionDict:(id)arg1;
+ (id)restoreOfferFromCompletionDict:(id)arg1;
+ (BOOL)shouldShowPasswordUIForRecommendation:(id)arg1;
+ (id)unconfiguredBaseStationFromRecommendation:(id)arg1;
+ (id)unconfiguredBaseStationFromGuessCompleteDict:(id)arg1;
+ (id)sourceNetworkFromRecommendation:(id)arg1;
+ (id)sourceBaseStationFromRecommendation:(id)arg1;
+ (id)shortProductNameForUnconfiguredDeviceFromAutoGuessResults:(id)arg1;
+ (BOOL)isRestoreAnOptionForTheRecommendations:(id)arg1;
+ (id)recommendationToActionChoice:(id)arg1;
+ (id)restoreRecommendationDictionaryFromCompletionDict:(id)arg1;
+ (id)shortProductNameFromBaseStationDictionary:(id)arg1;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (id)createCompletionDictFromAutoGuessResults:(id)arg1;
- (void)autoGuessEngineComplete;
- (BOOL)okToSwitchToShortBonjourTimeout:(id)arg1;
- (void)stopWiFiScanner;
- (void)browseReadyTimerCallback:(id)arg1;
- (void)bonjourTXTRemoved:(id)arg1;
- (void)bonjourTXTUpdated:(id)arg1;
- (void)stopBonjourBrowser;
- (void)runAutoGuessThread:(id)arg1;
- (void)startAutoGuessIfReady;
- (long)startBonjourBrowser;
- (id)guessCompletionDict;
- (void)setLastInstrumentation:(id)arg1;
- (id)lastInstrumentation;
- (void)setUnconfiguredDeviceThatIsBeingSetup:(id)arg1;
- (id)unconfiguredDeviceThatIsBeingSetup;
- (void)setCurrentAutoGuessUISelector:(int)arg1;
- (int)currentAutoGuessUISelector;
- (void)setLastAutoGuessUISelector:(int)arg1;
- (int)lastAutoGuessUISelector;
- (void)setCurrentParamString:(id)arg1;
- (id)currentParamString;
- (void)setLastParamString:(id)arg1;
- (id)lastParamString;
- (void)set_wifiScanInfos:(id)arg1;
- (id)_wifiScanInfos;
- (id)_browsedBases;
- (void)set_browseReadyTimer:(id)arg1;
- (id)_browseReadyTimer;
- (void)setTargetBrowseRecord:(id)arg1;
- (long)cancelAutoGuess;
- (long)runAutoGuessWithWifiScanInfos:(id)arg1;
- (long)startWiFiScanner;
- (void)cancelBonjourBrowser;
- (int)bonjourBrowseStatus;
- (void)cancelWiFiScanner;
- (int)wifiScanStatus;
- (long)startAutoGuessForUnconfiguredMACAddress:(id)arg1 withWifiScanInfos:(id)arg2;
- (void)setGuessCompletionDict:(id)arg1;
- (void)setTargetMACAddress:(id)arg1;
- (id)targetInfo;
- (void)setTargetScanRecord:(id)arg1;
- (id)targetBrowseRecord;
- (id)targetScanRecord;
- (id)targetMACAddress;
- (void)wirelessScanDone:(id)arg1;
- (void)setBonjourBrowseStatus:(int)arg1;
- (void)setWiFiScanStatus:(int)arg1;
- (void)set_browsedBases:(id)arg1;

@end
