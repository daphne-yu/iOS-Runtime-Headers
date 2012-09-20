/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, SAMPMediaItem, NSString;

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand> {
}

@property(retain) SAMPMediaItem * listeningToItem;
@property(copy) NSNumber * listeningToMusicApplication;
@property int state;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getStateResponse;

- (id)groupIdentifier;
- (int)state;
- (void)setState:(int)arg1;
- (void)setListeningToMusicApplication:(id)arg1;
- (id)listeningToMusicApplication;
- (void)setListeningToItem:(id)arg1;
- (id)listeningToItem;
- (id)encodedClassName;

@end
