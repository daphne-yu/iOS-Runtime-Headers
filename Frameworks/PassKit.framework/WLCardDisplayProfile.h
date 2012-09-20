/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class WLColor, NSData;

@interface WLCardDisplayProfile : NSObject <NSSecureCoding, NSCopying> {
    int _cardTemplate;
    WLColor *_backgroundColor;
    WLColor *_foregroundColor;
    WLColor *_labelColor;
    WLColor *_stripColor;
    NSData *_iconHash;
    NSData *_logoHash;
    NSData *_thumbnailHash;
    NSData *_backgroundHash;
    NSData *_stripHash;
    BOOL _stripShine;
    BOOL _scrunched;
}

@property int cardTemplate;
@property(retain) WLColor * backgroundColor;
@property(retain) WLColor * foregroundColor;
@property(retain) WLColor * labelColor;
@property(retain) WLColor * stripColor;
@property(retain) NSData * iconHash;
@property(retain) NSData * logoHash;
@property(retain) NSData * thumbnailHash;
@property(retain) NSData * backgroundHash;
@property(retain) NSData * stripHash;
@property BOOL stripShine;
@property BOOL scrunched;

+ (BOOL)supportsSecureCoding;

- (id)labelColor;
- (BOOL)stripShine;
- (id)stripHash;
- (id)backgroundHash;
- (id)thumbnailHash;
- (id)logoHash;
- (id)iconHash;
- (void)setStripHash:(id)arg1;
- (void)setBackgroundHash:(id)arg1;
- (void)setThumbnailHash:(id)arg1;
- (void)setLogoHash:(id)arg1;
- (void)setIconHash:(id)arg1;
- (void)setStripShine:(BOOL)arg1;
- (void)setStripColor:(id)arg1;
- (void)setCardTemplate:(int)arg1;
- (id)stripColor;
- (id)initWithCardDictionary:(id)arg1 cardURL:(id)arg2;
- (BOOL)scrunched;
- (BOOL)showsBackgroundImage;
- (BOOL)showsStripImage;
- (void)setScrunched:(BOOL)arg1;
- (int)cardTemplate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)foregroundColor;
- (id)backgroundColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setForegroundColor:(id)arg1;

@end
