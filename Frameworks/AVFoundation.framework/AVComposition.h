/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCompositionInternal;

@interface AVComposition : AVAsset <NSMutableCopying> {
    AVCompositionInternal *_priv;
}

@property(readonly) NSArray * tracks;
@property(readonly) struct CGSize { float x1; float x2; } naturalSize;

+ (void)initialize;

- (id)tracks;
- (id)description;
- (void)dealloc;
- (id)init;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)finalize;
- (void)_setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (long)_createEmptyMutableCompositionIfNeeded;
- (id)_mutableTracks;
- (id)_newTrackForIndex:(long)arg1;
- (id)_initWithComposition:(id)arg1;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)_assetInspector;

@end
