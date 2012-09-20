/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOSupportedTileSets : PBCodable  {
    NSMutableArray *_tileSets;
}

@property(retain) NSMutableArray * tileSets;


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)tileSets;
- (id)tileSetAtIndex:(unsigned int)arg1;
- (void)clearTileSets;
- (unsigned int)tileSetsCount;
- (void)addTileSet:(id)arg1;
- (void)setTileSets:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end
