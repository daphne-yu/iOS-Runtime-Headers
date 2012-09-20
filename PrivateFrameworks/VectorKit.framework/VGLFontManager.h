/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLFontAtlas, VGLFontGlyphCache;

@interface VGLFontManager : NSObject  {
    VGLFontAtlas *_fontAtlas;
    VGLFontGlyphCache *_glyphCache;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)_purgeFontData;
- (void)_activeTileGroupDidChange:(id)arg1;
- (id)fontAtlas;
- (struct __CTFont { }*)referenceFontForFontKey:(id)arg1;
- (id)glyphCache;

@end
