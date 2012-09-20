/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSNumber, NSString, NSDictionary;

@interface TLITunesTone : NSObject  {
    NSString *_identifier;
    NSString *_name;
    NSString *_path;
    NSString *_artworkFile;
    NSDictionary *_playbackProperties;
    NSNumber *_pid;
    unsigned int _duration;
    BOOL _ringtone;
    BOOL _purchased;
    BOOL _protected;
    BOOL _private;
}

@property(retain) NSString * identifier;
@property(retain) NSString * name;
@property(retain) NSString * path;
@property(retain) NSDictionary * playbackProperties;
@property(retain) NSNumber * pid;
@property(getter=isPurchased) BOOL purchased;
@property(getter=isRingtone) BOOL ringtone;
@property(retain) NSString * artworkFile;
@property unsigned int duration;
@property BOOL protected;
@property BOOL private;


- (BOOL)isPurchased;
- (void)setPurchased:(BOOL)arg1;
- (id)artworkFile;
- (void)setRingtone:(BOOL)arg1;
- (void)setPrivate:(BOOL)arg1;
- (void)setArtworkFile:(id)arg1;
- (void)setPlaybackProperties:(id)arg1;
- (BOOL)loadFromPropertyList:(id)arg1;
- (BOOL)protected;
- (BOOL)isRingtone;
- (id)playbackProperties;
- (id)path;
- (id)identifier;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (void)setPath:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (void)setPid:(id)arg1;
- (id)pid;
- (void)setProtected:(BOOL)arg1;
- (BOOL)private;

@end
