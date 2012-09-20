/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class DAMessageMoveRequest, NSString;

@interface DAMoveResponse : NSObject  {
    int _status;
    NSString *_sourceID;
    NSString *_destID;
    DAMessageMoveRequest *_origRequest;
}

@property(readonly) int status;
@property(readonly) NSString * sourceID;
@property(readonly) NSString * destID;
@property(retain) DAMessageMoveRequest * origRequest;


- (id)description;
- (void)dealloc;
- (int)status;
- (id)destID;
- (id)sourceID;
- (void)setOrigRequest:(id)arg1;
- (id)initWithStatus:(int)arg1 sourceID:(id)arg2 destID:(id)arg3;
- (id)origRequest;

@end
