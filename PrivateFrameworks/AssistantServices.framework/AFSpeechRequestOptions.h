/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString;

@interface AFSpeechRequestOptions : NSObject  {
    int _event;
    NSString *_btDeviceAddress;
    BOOL _isEyesFree;
}

@property int activationEvent;
@property(copy) NSString * btDeviceAddress;
@property BOOL isEyesFree;


- (void)setIsEyesFree:(BOOL)arg1;
- (BOOL)isEyesFree;
- (void)setBtDeviceAddress:(id)arg1;
- (id)btDeviceAddress;
- (void)setActivationEvent:(int)arg1;
- (int)activationEvent;
- (id)dkPlistRepresentation;
- (id)initWithDKPlistRepresentation:(id)arg1;
- (void).cxx_destruct;
- (id)initWithActivationEvent:(int)arg1;

@end
