/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOSupportedTileSets, GEODownloadMetadata;

@interface GEOSupportedTileSetsDownload : PBCodable  {
    GEODownloadMetadata *_metadata;
    GEOSupportedTileSets *_tileSets;
}

@property(retain) GEOSupportedTileSets * tileSets;
@property(retain) GEODownloadMetadata * metadata;


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)tileSets;
- (void)setTileSets:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end
