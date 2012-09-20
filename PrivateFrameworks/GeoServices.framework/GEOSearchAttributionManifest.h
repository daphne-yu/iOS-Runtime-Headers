/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOSearchAttributionManifest : PBCodable  {
    NSMutableArray *_searchAttributionSources;
}

@property(retain) NSMutableArray * searchAttributionSources;


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)searchAttributionSources;
- (id)searchAttributionSourcesAtIndex:(unsigned int)arg1;
- (void)clearSearchAttributionSources;
- (unsigned int)searchAttributionSourcesCount;
- (void)addSearchAttributionSources:(id)arg1;
- (void)setSearchAttributionSources:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end
