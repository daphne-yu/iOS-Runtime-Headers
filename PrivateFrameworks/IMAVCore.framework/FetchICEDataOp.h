/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSData, NetworkCheckOperation, IMAVChatParticipant;

@interface FetchICEDataOp : IMExtendedOperation  {
    NetworkCheckOperation *_networkCheckOp;
    IMAVChatParticipant *_participant;
    NSData *_ICEData;
    unsigned int _shouldWaitForWifi : 1;
    unsigned int _showNetworkOptions : 1;
}


- (void)main;
- (void)dealloc;
- (id)networkCheckOperation;
- (id)ICEData;
- (void)createChildOperations;
- (id)initWithParticipant:(id)arg1 shouldWaitForWifi:(BOOL)arg2 shouldShowNetworkOptions:(BOOL)arg3;

@end
