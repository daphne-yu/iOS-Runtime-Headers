/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableArray, NSMutableDictionary;

@interface GKMatchEventQueue : NSObject  {
    BOOL _okToSend;
    NSMutableArray *_events;
    NSMutableDictionary *_connectionInfo;
    BOOL _relayInitiated;
    BOOL _hasInitRelayInfo;
    BOOL _hasUpdateRelayInfo;
    unsigned int _sequenceNumber;
    int _playerState;
    BOOL _counted;
    int _deferedPlayerState;
}

@property int playerState;
@property BOOL counted;
@property int deferedPlayerState;
@property(retain) NSMutableArray * events;
@property BOOL okToSend;
@property(retain) NSMutableDictionary * connectionInfo;
@property BOOL relayInitiated;
@property BOOL hasInitRelayInfo;
@property BOOL hasUpdateRelayInfo;
@property unsigned int sequenceNumber;


- (void)setSequenceNumber:(unsigned int)arg1;
- (unsigned int)sequenceNumber;
- (void)setHasUpdateRelayInfo:(BOOL)arg1;
- (BOOL)hasUpdateRelayInfo;
- (void)setHasInitRelayInfo:(BOOL)arg1;
- (BOOL)hasInitRelayInfo;
- (void)setRelayInitiated:(BOOL)arg1;
- (BOOL)relayInitiated;
- (void)setConnectionInfo:(id)arg1;
- (id)connectionInfo;
- (void)setOkToSend:(BOOL)arg1;
- (BOOL)okToSend;
- (void)setEvents:(id)arg1;
- (id)events;
- (void)setDeferedPlayerState:(int)arg1;
- (int)deferedPlayerState;
- (void)setCounted:(BOOL)arg1;
- (BOOL)counted;
- (void)setPlayerState:(int)arg1;
- (int)playerState;
- (void)dealloc;
- (id)init;

@end
