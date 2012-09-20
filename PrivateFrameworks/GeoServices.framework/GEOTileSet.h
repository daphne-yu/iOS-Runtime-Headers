/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOTileSet : PBCodable  {
    NSString *_baseURL;
    NSString *_localizationURL;
    NSString *_multiTileURL;
    int _scale;
    int _size;
    int _style;
    NSMutableArray *_supportedLanguages;
    NSMutableArray *_validVersions;
    BOOL _multiTileURLUsesStatusCodes;
    struct { 
        unsigned int multiTileURLUsesStatusCodes : 1; 
    } _has;
}

@property(readonly) BOOL hasBaseURL;
@property(retain) NSString * baseURL;
@property(readonly) BOOL hasMultiTileURL;
@property(retain) NSString * multiTileURL;
@property int style;
@property(retain) NSMutableArray * validVersions;
@property int scale;
@property int size;
@property(readonly) BOOL hasLocalizationURL;
@property(retain) NSString * localizationURL;
@property(retain) NSMutableArray * supportedLanguages;
@property BOOL hasMultiTileURLUsesStatusCodes;
@property BOOL multiTileURLUsesStatusCodes;


- (void)setBaseURL:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)baseURL;
- (id)dictionaryRepresentation;
- (int)style;
- (void)setStyle:(int)arg1;
- (void)setScale:(int)arg1;
- (void)setSize:(int)arg1;
- (int)scale;
- (int)size;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)supportedLanguages;
- (id)validVersions;
- (void)setHasMultiTileURLUsesStatusCodes:(BOOL)arg1;
- (void)setMultiTileURLUsesStatusCodes:(BOOL)arg1;
- (BOOL)multiTileURLUsesStatusCodes;
- (BOOL)hasMultiTileURLUsesStatusCodes;
- (id)supportedLanguageAtIndex:(unsigned int)arg1;
- (void)clearSupportedLanguages;
- (unsigned int)supportedLanguagesCount;
- (id)localizationURL;
- (BOOL)hasLocalizationURL;
- (id)validVersionAtIndex:(unsigned int)arg1;
- (void)clearValidVersions;
- (unsigned int)validVersionsCount;
- (id)multiTileURL;
- (BOOL)hasMultiTileURL;
- (BOOL)hasBaseURL;
- (void)addSupportedLanguage:(id)arg1;
- (void)addValidVersion:(id)arg1;
- (void)setSupportedLanguages:(id)arg1;
- (void)setLocalizationURL:(id)arg1;
- (void)setValidVersions:(id)arg1;
- (void)setMultiTileURL:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end
