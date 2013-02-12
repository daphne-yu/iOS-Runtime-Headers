/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface GMMLink : NSObject <GMMReadWriteStream> {
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */
    BOOL _hasRoadArgb;
    BOOL _hasYawDegreeE6;
    NSString *_linkStreetRange;
    NSString *_linkText;
    NSString *_panoId;
    NSInteger _roadArgb;
    NSInteger _yawDegreeE6;
}

@property NSInteger roadArgb; /* unknown property attribute: V_roadArgb */
@property(retain) NSString *linkText; /* unknown property attribute: V_linkText */
@property(retain) NSString *linkStreetRange; /* unknown property attribute: V_linkStreetRange */
@property(retain) NSString *panoId; /* unknown property attribute: V_panoId */
@property BOOL hasYawDegreeE6; /* unknown property attribute: V_hasYawDegreeE6 */
@property NSInteger yawDegreeE6; /* unknown property attribute: V_yawDegreeE6 */
@property(readonly) BOOL hasLinkStreetRange;
@property(readonly) BOOL hasLinkText;
@property(readonly) BOOL hasPanoId;
@property(readonly) BOOL hasRoadArgb;

- (void)dealloc;
- (BOOL)hasLinkStreetRange;
- (BOOL)hasLinkText;
- (BOOL)hasPanoId;
- (BOOL)hasRoadArgb;
- (BOOL)hasYawDegreeE6;
- (id)init;
- (id)linkStreetRange;
- (id)linkText;
- (id)panoId;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
- (NSInteger)roadArgb;
- (void)setHasYawDegreeE6:(BOOL)arg1;
- (void)setLinkStreetRange:(id)arg1;
- (void)setLinkText:(id)arg1;
- (void)setPanoId:(id)arg1;
- (void)setRoadArgb:(NSInteger)arg1;
- (void)setYawDegreeE6:(NSInteger)arg1;
- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;
- (NSInteger)yawDegreeE6;

@end