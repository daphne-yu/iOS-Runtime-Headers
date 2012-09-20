/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOBusinessOptions : PBCodable  {
    NSMutableArray *_attributeKeys;
    int _maxBusinessResults;
    NSMutableArray *_photoOptions;
    BOOL _includeBusinessHours;
    BOOL _includeCenter;
    struct { 
        unsigned int maxBusinessResults : 1; 
        unsigned int includeBusinessHours : 1; 
        unsigned int includeCenter : 1; 
    } _has;
}

@property(retain) NSMutableArray * photoOptions;
@property(retain) NSMutableArray * attributeKeys;
@property BOOL hasIncludeBusinessHours;
@property BOOL includeBusinessHours;
@property BOOL hasMaxBusinessResults;
@property int maxBusinessResults;
@property BOOL hasIncludeCenter;
@property BOOL includeCenter;


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)attributeKeys;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)photoOptions;
- (void)setHasIncludeCenter:(BOOL)arg1;
- (void)setHasMaxBusinessResults:(BOOL)arg1;
- (void)setHasIncludeBusinessHours:(BOOL)arg1;
- (void)setIncludeCenter:(BOOL)arg1;
- (BOOL)includeCenter;
- (BOOL)hasIncludeCenter;
- (void)setMaxBusinessResults:(int)arg1;
- (int)maxBusinessResults;
- (BOOL)hasMaxBusinessResults;
- (void)setIncludeBusinessHours:(BOOL)arg1;
- (BOOL)includeBusinessHours;
- (BOOL)hasIncludeBusinessHours;
- (id)attributeKeyAtIndex:(unsigned int)arg1;
- (void)clearAttributeKeys;
- (unsigned int)attributeKeysCount;
- (id)photoOptionsAtIndex:(unsigned int)arg1;
- (void)clearPhotoOptions;
- (unsigned int)photoOptionsCount;
- (void)addAttributeKey:(id)arg1;
- (void)addPhotoOptions:(id)arg1;
- (void)setAttributeKeys:(id)arg1;
- (void)setPhotoOptions:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end
