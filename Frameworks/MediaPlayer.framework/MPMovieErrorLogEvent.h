/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVPlayerItemErrorLogEvent, NSDate, NSString;

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {
    struct MPMovieErrorLogEventInternal { 
        AVPlayerItemErrorLogEvent *event; 
    } _internal;
}

@property(readonly) NSDate * date;
@property(readonly) NSString * URI;
@property(readonly) NSString * serverAddress;
@property(readonly) NSString * playbackSessionID;
@property(readonly) int errorStatusCode;
@property(readonly) NSString * errorDomain;
@property(readonly) NSString * errorComment;
@property struct MPMovieErrorLogEventInternal { id x1; } _internal;


- (id)errorComment;
- (id)errorDomain;
- (int)errorStatusCode;
- (id)playbackSessionID;
- (id)serverAddress;
- (id)_initWithAVItemErrorLogEvent:(id)arg1;
- (void)set_internal:(struct MPMovieErrorLogEventInternal { id x1; })arg1;
- (struct MPMovieErrorLogEventInternal { id x1; })_internal;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)date;
- (id)URI;

@end
