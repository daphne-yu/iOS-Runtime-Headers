/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, NSString, GKPlayer;

@interface GKParticipant : NSObject  {
    GKPlayer *_player;
    int _status;
    UIImage *_image;
    BOOL _cancelBoxVisible;
    int _kind;
}

@property(retain) GKPlayer * player;
@property int status;
@property(retain) UIImage * image;
@property(readonly) NSString * title;
@property(readonly) NSString * statusString;
@property BOOL progressIndicatorVisible;
@property BOOL cancelBoxVisible;
@property int kind;


- (id)statusString;
- (BOOL)cancelBoxVisible;
- (BOOL)progressIndicatorVisible;
- (void)setKind:(int)arg1;
- (void)setCancelBoxVisible:(BOOL)arg1;
- (void)reloadWithCompletionHandler:(id)arg1;
- (void)setPlayer:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setPlayer:(id)arg1;
- (id)player;
- (id)description;
- (void)dealloc;
- (void)setStatus:(int)arg1;
- (int)status;
- (int)kind;
- (id)image;
- (id)title;
- (void)setImage:(id)arg1;

@end
