/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSMTPResponse : NSObject  {
    id _lastResponseLine;
    int _status;
    unsigned int _statusClass : 10;
    unsigned int _statusSubject : 10;
    unsigned int _statusDetail : 10;
}

@property(readonly) int status;
@property(readonly) unsigned int statusClass;
@property(readonly) unsigned int statusSubject;
@property(readonly) unsigned int statusDetail;


- (id)description;
- (void)dealloc;
- (void)setStatus:(int)arg1;
- (int)status;
- (unsigned int)statusDetail;
- (unsigned int)statusSubject;
- (unsigned int)statusClass;
- (int)failureReason;
- (void)_updateEnhancedStatusCodesFromLastResponse;
- (void)setLastResponseLine:(id)arg1;
- (id)initWithStatus:(int)arg1;
- (id)errorMessageWithAddress:(id)arg1 defaultMessage:(id)arg2;
- (id)lastResponseLine;

@end
